CriFsBindRequest_o *CriFsUtility__BindCpk(
        CriFsBinder_o *targetBinder,
        System_String_o *srcPath,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return CriFsUtility__BindCpk_30819348(targetBinder, 0, srcPath, v3);
}


CriFsBindRequest_o *CriFsUtility__BindCpk_30819348(
        CriFsBinder_o *targetBinder,
        CriFsBinder_o *srcBinder,
        System_String_o *srcPath,
        const MethodInfo *method)
{
  CriFsServer_o *instance; // x0
  const MethodInfo *v8; // x4

  instance = CriFsServer__get_instance((const MethodInfo *)targetBinder);
  if ( !instance )
    sub_1C32E7C(0);
  return CriFsServer__BindCpk(instance, targetBinder, srcBinder, srcPath, v8);
}


CriFsBindRequest_o *CriFsUtility__BindDirectory(
        CriFsBinder_o *targetBinder,
        System_String_o *srcPath,
        const MethodInfo *method)
{
  CriFsServer_o *instance; // x0
  const MethodInfo *v6; // x4

  instance = CriFsServer__get_instance((const MethodInfo *)targetBinder);
  if ( !instance )
    sub_1C32E7C(0);
  return CriFsServer__BindDirectory(instance, targetBinder, 0, srcPath, v6);
}


CriFsBindRequest_o *CriFsUtility__BindDirectory_30819736(
        CriFsBinder_o *targetBinder,
        CriFsBinder_o *srcBinder,
        System_String_o *srcPath,
        const MethodInfo *method)
{
  CriFsServer_o *instance; // x0
  const MethodInfo *v8; // x4

  instance = CriFsServer__get_instance((const MethodInfo *)targetBinder);
  if ( !instance )
    sub_1C32E7C(0);
  return CriFsServer__BindDirectory(instance, targetBinder, srcBinder, srcPath, v8);
}


CriFsBindRequest_o *CriFsUtility__BindFile(
        CriFsBinder_o *targetBinder,
        System_String_o *srcPath,
        const MethodInfo *method)
{
  CriFsServer_o *instance; // x0
  const MethodInfo *v6; // x4

  instance = CriFsServer__get_instance((const MethodInfo *)targetBinder);
  if ( !instance )
    sub_1C32E7C(0);
  return CriFsServer__BindFile(instance, targetBinder, 0, srcPath, v6);
}


CriFsBindRequest_o *CriFsUtility__BindFile_30819984(
        CriFsBinder_o *targetBinder,
        CriFsBinder_o *srcBinder,
        System_String_o *srcPath,
        const MethodInfo *method)
{
  CriFsServer_o *instance; // x0
  const MethodInfo *v8; // x4

  instance = CriFsServer__get_instance((const MethodInfo *)targetBinder);
  if ( !instance )
    sub_1C32E7C(0);
  return CriFsServer__BindFile(instance, targetBinder, srcBinder, srcPath, v8);
}


bool CriFsUtility__CRIWARE14C89F34(System_String_o *userAgentString, const MethodInfo *method)
{
  int v2; // w2
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  int v8; // w19
  __int64 v9; // x19
  int v10; // w20
  int v12[2]; // [xsp+0h] [xbp-50h] BYREF
  __int64 v13; // [xsp+8h] [xbp-48h]
  int v14[2]; // [xsp+10h] [xbp-40h]
  void *v15; // [xsp+18h] [xbp-38h]
  __int64 v16; // [xsp+20h] [xbp-30h]
  int v17; // [xsp+28h] [xbp-28h]
  char v18; // [xsp+2Ch] [xbp-24h]

  v8 = (int)userAgentString;
  if ( !off_4C30FC0 )
  {
    *(_QWORD *)v12 = "cri_ware_unity";
    v13 = 14;
    *(_QWORD *)v14 = "CRIWARE14C89F34";
    v15 = byte_9 + 6;
    v17 = 8;
    v16 = 0x200000000LL;
    v18 = 0;
    off_4C30FC0 = (__int64 (*)(void))sub_1C331FC(v12);
  }
  v9 = sub_1C331D8(v8, (int)method, v2, v3, v4, v5, v6, v7, v12[0], v13, v14[0], v15);
  v10 = off_4C30FC0();
  sub_1C331F0(v9);
  return v10 != 0;
}


bool CriFsUtility__CRIWARE5123B195(System_String_o *proxyPath, uint16_t proxyPort, const MethodInfo *method)
{
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  unsigned int v8; // w19
  int v9; // w20
  __int64 v10; // x20
  int v11; // w19
  int v13[2]; // [xsp+0h] [xbp-50h] BYREF
  __int64 v14; // [xsp+8h] [xbp-48h]
  int v15[2]; // [xsp+10h] [xbp-40h]
  void *v16; // [xsp+18h] [xbp-38h]
  __int64 v17; // [xsp+20h] [xbp-30h]
  int v18; // [xsp+28h] [xbp-28h]
  char v19; // [xsp+2Ch] [xbp-24h]

  v8 = proxyPort;
  v9 = (int)proxyPath;
  if ( !off_4C30FC8 )
  {
    *(_QWORD *)v13 = "cri_ware_unity";
    v14 = 14;
    *(_QWORD *)v15 = "CRIWARE5123B195";
    v16 = byte_9 + 6;
    v18 = 12;
    v17 = 0x200000000LL;
    v19 = 0;
    off_4C30FC8 = (__int64 (__fastcall *)(_QWORD, _QWORD))sub_1C331FC(v13);
  }
  v10 = sub_1C331D8(v9, proxyPort, (int)method, v3, v4, v5, v6, v7, v13[0], v14, v15[0], v16);
  v11 = off_4C30FC8(v10, v8);
  sub_1C331F0(v10);
  return v11 != 0;
}


bool CriFsUtility__CRIWARE6ACCF4D2(System_String_o *filter, const MethodInfo *method)
{
  int v2; // w2
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  int v8; // w19
  __int64 v9; // x19
  int v10; // w20
  int v12[2]; // [xsp+0h] [xbp-50h] BYREF
  __int64 v13; // [xsp+8h] [xbp-48h]
  int v14[2]; // [xsp+10h] [xbp-40h]
  void *v15; // [xsp+18h] [xbp-38h]
  __int64 v16; // [xsp+20h] [xbp-30h]
  int v17; // [xsp+28h] [xbp-28h]
  char v18; // [xsp+2Ch] [xbp-24h]

  v8 = (int)filter;
  if ( !off_4C30FD0 )
  {
    *(_QWORD *)v12 = "cri_ware_unity";
    v13 = 14;
    *(_QWORD *)v14 = "CRIWARE6ACCF4D2";
    v15 = byte_9 + 6;
    v17 = 8;
    v16 = 0x200000000LL;
    v18 = 0;
    off_4C30FD0 = (__int64 (*)(void))sub_1C331FC(v12);
  }
  v9 = sub_1C331D8(v8, (int)method, v2, v3, v4, v5, v6, v7, v12[0], v13, v14[0], v15);
  v10 = off_4C30FD0();
  sub_1C331F0(v9);
  return v10 != 0;
}


CriFsInstallRequest_o *CriFsUtility__Install(
        System_String_o *srcPath,
        System_String_o *dstPath,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return CriFsUtility__Install_30818616(0, srcPath, dstPath, 0, v3);
}


CriFsInstallRequest_o *CriFsUtility__Install_30818616(
        CriFsBinder_o *srcBinder,
        System_String_o *srcPath,
        System_String_o *dstPath,
        CriFsRequest_DoneDelegate_o *doneDeleagate,
        const MethodInfo *method)
{
  CriFsServer_o *instance; // x0
  const MethodInfo *v10; // x5

  instance = CriFsServer__get_instance((const MethodInfo *)srcBinder);
  if ( !instance )
    sub_1C32E7C(0);
  return CriFsServer__Install(instance, srcBinder, srcPath, dstPath, doneDeleagate, v10);
}


CriFsInstallRequest_o *CriFsUtility__Install_30818688(
        System_String_o *srcPath,
        System_String_o *dstPath,
        CriFsRequest_DoneDelegate_o *doneDeleagate,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return CriFsUtility__Install_30818616(0, srcPath, dstPath, doneDeleagate, v4);
}


CriFsInstallRequest_o *CriFsUtility__Install_30818708(
        CriFsBinder_o *srcBinder,
        System_String_o *srcPath,
        System_String_o *dstPath,
        const MethodInfo *method)
{
  CriFsServer_o *instance; // x0
  const MethodInfo *v8; // x5

  instance = CriFsServer__get_instance((const MethodInfo *)srcBinder);
  if ( !instance )
    sub_1C32E7C(0);
  return CriFsServer__Install(instance, srcBinder, srcPath, dstPath, 0, v8);
}


CriFsLoadAssetBundleRequest_o *CriFsUtility__LoadAssetBundle(
        System_String_o *path,
        int32_t readUnitSize,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return CriFsUtility__LoadAssetBundle_30818404(0, path, readUnitSize, v3);
}


CriFsLoadAssetBundleRequest_o *CriFsUtility__LoadAssetBundle_30818404(
        CriFsBinder_o *binder,
        System_String_o *path,
        int32_t readUnitSize,
        const MethodInfo *method)
{
  CriFsServer_o *instance; // x0
  const MethodInfo *v8; // x4

  instance = CriFsServer__get_instance((const MethodInfo *)binder);
  if ( !instance )
    sub_1C32E7C(0);
  return CriFsServer__LoadAssetBundle(instance, binder, path, readUnitSize, v8);
}


CriFsLoadFileRequest_o *CriFsUtility__LoadFile(System_String_o *path, int32_t readUnitSize, const MethodInfo *method)
{
  CriFsServer_o *instance; // x0
  const MethodInfo *v6; // x5

  instance = CriFsServer__get_instance((const MethodInfo *)path);
  if ( !instance )
    sub_1C32E7C(0);
  return CriFsServer__LoadFile(instance, 0, path, 0, readUnitSize, v6);
}


CriFsLoadFileRequest_o *CriFsUtility__LoadFile_30814868(
        CriFsBinder_o *binder,
        System_String_o *path,
        int32_t readUnitSize,
        const MethodInfo *method)
{
  CriFsServer_o *instance; // x0
  const MethodInfo *v8; // x5

  instance = CriFsServer__get_instance((const MethodInfo *)binder);
  if ( !instance )
    sub_1C32E7C(0);
  return CriFsServer__LoadFile(instance, binder, path, 0, readUnitSize, v8);
}


CriFsLoadFileRequest_o *CriFsUtility__LoadFile_30818328(
        System_String_o *path,
        CriFsRequest_DoneDelegate_o *doneDelegate,
        int32_t readUnitSize,
        const MethodInfo *method)
{
  CriFsServer_o *instance; // x0
  const MethodInfo *v8; // x5

  instance = CriFsServer__get_instance((const MethodInfo *)path);
  if ( !instance )
    sub_1C32E7C(0);
  return CriFsServer__LoadFile(instance, 0, path, doneDelegate, readUnitSize, v8);
}


// attributes: thunk
void CriFsUtility__SetPathSeparator(System_String_o *filter, const MethodInfo *method)
{
  CriFsUtility__CRIWARE6ACCF4D2(filter, method);
}


// attributes: thunk
void CriFsUtility__SetProxyServer(System_String_o *proxyPath, uint16_t proxyPort, const MethodInfo *method)
{
  CriFsUtility__CRIWARE5123B195(proxyPath, proxyPort, method);
}


// attributes: thunk
void CriFsUtility__SetUserAgentString(System_String_o *userAgentString, const MethodInfo *method)
{
  CriFsUtility__CRIWARE14C89F34(userAgentString, method);
}


CriFsInstallRequest_o *CriFsUtility__WebInstall(
        System_String_o *srcPath,
        System_String_o *dstPath,
        CriFsRequest_DoneDelegate_o *doneDeleagate,
        const MethodInfo *method)
{
  CriFsServer_o *instance; // x0
  const MethodInfo *v8; // x4

  instance = CriFsServer__get_instance((const MethodInfo *)srcPath);
  if ( !instance )
    sub_1C32E7C(0);
  return CriFsServer__WebInstall(instance, srcPath, dstPath, doneDeleagate, v8);
}