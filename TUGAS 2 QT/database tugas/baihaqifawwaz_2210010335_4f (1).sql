-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jun 04, 2024 at 07:05 AM
-- Server version: 10.4.28-MariaDB
-- PHP Version: 8.0.28

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `baihaqifawwaz_2210010335_4f`
--

-- --------------------------------------------------------

--
-- Table structure for table `barang`
--

CREATE TABLE `barang` (
  `kd_barang` varchar(10) NOT NULL,
  `kd_mitra` varchar(10) NOT NULL,
  `nama_barang` varchar(100) NOT NULL,
  `harga` varchar(30) NOT NULL,
  `stok` varchar(4) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `mitra`
--

CREATE TABLE `mitra` (
  `kd_mitra` varchar(10) NOT NULL,
  `nama_mitra` varchar(100) NOT NULL,
  `alamat` varchar(100) NOT NULL,
  `telp` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `pesanan`
--

CREATE TABLE `pesanan` (
  `kd_pesan` varchar(10) NOT NULL,
  `kd_mitra` varchar(10) NOT NULL,
  `tgl_pesan` date NOT NULL,
  `kd_barang` varchar(10) NOT NULL,
  `nama_barang` varchar(100) NOT NULL,
  `kuantiti` varchar(100) NOT NULL,
  `harga` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `retur`
--

CREATE TABLE `retur` (
  `no_retur` varchar(10) NOT NULL,
  `kd_mitra` varchar(10) NOT NULL,
  `kd_barang` varchar(10) NOT NULL,
  `jmlh_retur` varchar(4) NOT NULL,
  `ttl_retur` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `slippembayaran`
--

CREATE TABLE `slippembayaran` (
  `kd_pembayaran` varchar(10) NOT NULL,
  `kd_mitra` varchar(10) NOT NULL,
  `kd_barang` varchar(10) NOT NULL,
  `harga` varchar(30) NOT NULL,
  `kuantiti` varchar(100) NOT NULL,
  `ttl_harga` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `barang`
--
ALTER TABLE `barang`
  ADD PRIMARY KEY (`kd_barang`),
  ADD KEY `kd_mitra` (`kd_mitra`);

--
-- Indexes for table `mitra`
--
ALTER TABLE `mitra`
  ADD PRIMARY KEY (`kd_mitra`);

--
-- Indexes for table `pesanan`
--
ALTER TABLE `pesanan`
  ADD PRIMARY KEY (`kd_pesan`),
  ADD KEY `kd_mitra` (`kd_mitra`),
  ADD KEY `kd_barang` (`kd_barang`);

--
-- Indexes for table `retur`
--
ALTER TABLE `retur`
  ADD PRIMARY KEY (`no_retur`),
  ADD KEY `kd_mitra` (`kd_mitra`),
  ADD KEY `kd_barang` (`kd_barang`);

--
-- Indexes for table `slippembayaran`
--
ALTER TABLE `slippembayaran`
  ADD PRIMARY KEY (`kd_pembayaran`),
  ADD KEY `kd_mitra` (`kd_mitra`),
  ADD KEY `kd_barang` (`kd_barang`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
