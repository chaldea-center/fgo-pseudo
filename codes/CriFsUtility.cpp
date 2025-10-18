CriFsBindRequest_o *CriFsUtility__BindCpk(
        CriFsBinder_o *targetBinder,
        System_String_o *srcPath,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return CriFsUtility__BindCpk_30836812(targetBinder, 0, srcPath, v3);
}


CriFsBindRequest_o *CriFsUtility__BindCpk_30836812(
        CriFsBinder_o *targetBinder,
        CriFsBinder_o *srcBinder,
        System_String_o *srcPath,
        const MethodInfo *method)
{
  CriFsServer_o *instance; // x0
  const MethodInfo *v8; // x4

  instance = CriFsServer__get_instance((const MethodInfo *)targetBinder);
  if ( !instance )
    sub_1C372B4(0);
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
    sub_1C372B4(0);
  return CriFsServer__BindDirectory(instance, targetBinder, 0, srcPath, v6);
}


CriFsBindRequest_o *CriFsUtility__BindDirectory_30837200(
        CriFsBinder_o *targetBinder,
        CriFsBinder_o *srcBinder,
        System_String_o *srcPath,
        const MethodInfo *method)
{
  CriFsServer_o *instance; // x0
  const MethodInfo *v8; // x4

  instance = CriFsServer__get_instance((const MethodInfo *)targetBinder);
  if ( !instance )
    sub_1C372B4(0);
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
    sub_1C372B4(0);
  return CriFsServer__BindFile(instance, targetBinder, 0, srcPath, v6);
}


CriFsBindRequest_o *CriFsUtility__BindFile_30837448(
        CriFsBinder_o *targetBinder,
        CriFsBinder_o *srcBinder,
        System_String_o *srcPath,
        const MethodInfo *method)
{
  CriFsServer_o *instance; // x0
  const MethodInfo *v8; // x4

  instance = CriFsServer__get_instance((const MethodInfo *)targetBinder);
  if ( !instance )
    sub_1C372B4(0);
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
  if ( !off_4C3C510 )
  {
    *(_QWORD *)v12 = "cri_ware_unity";
    v13 = 14;
    *(_QWORD *)v14 = "CRIWARE14C89F34";
    v15 = byte_9 + 6;
    v17 = 8;
    v16 = 0x200000000LL;
    v18 = 0;
    off_4C3C510 = (__int64 (*)(void))sub_1C37634(v12);
  }
  v9 = sub_1C37610(v8, (int)method, v2, v3, v4, v5, v6, v7, v12[0], v13, v14[0], v15);
  v10 = off_4C3C510();
  sub_1C37628(v9);
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
  if ( !off_4C3C518 )
  {
    *(_QWORD *)v13 = "cri_ware_unity";
    v14 = 14;
    *(_QWORD *)v15 = "CRIWARE5123B195";
    v16 = byte_9 + 6;
    v18 = 12;
    v17 = 0x200000000LL;
    v19 = 0;
    off_4C3C518 = (__int64 (__fastcall *)(_QWORD, _QWORD))sub_1C37634(v13);
  }
  v10 = sub_1C37610(v9, proxyPort, (int)method, v3, v4, v5, v6, v7, v13[0], v14, v15[0], v16);
  v11 = off_4C3C518(v10, v8);
  sub_1C37628(v10);
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
  if ( !off_4C3C520 )
  {
    *(_QWORD *)v12 = "cri_ware_unity";
    v13 = 14;
    *(_QWORD *)v14 = "CRIWARE6ACCF4D2";
    v15 = byte_9 + 6;
    v17 = 8;
    v16 = 0x200000000LL;
    v18 = 0;
    off_4C3C520 = (__int64 (*)(void))sub_1C37634(v12);
  }
  v9 = sub_1C37610(v8, (int)method, v2, v3, v4, v5, v6, v7, v12[0], v13, v14[0], v15);
  v10 = off_4C3C520();
  sub_1C37628(v9);
  return v10 != 0;
}


CriFsInstallRequest_o *CriFsUtility__Install(
        System_String_o *srcPath,
        System_String_o *dstPath,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return CriFsUtility__Install_30836080(0, srcPath, dstPath, 0, v3);
}


CriFsInstallRequest_o *CriFsUtility__Install_30836080(
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
    sub_1C372B4(0);
  return CriFsServer__Install(instance, srcBinder, srcPath, dstPath, doneDeleagate, v10);
}


CriFsInstallRequest_o *CriFsUtility__Install_30836152(
        System_String_o *srcPath,
        System_String_o *dstPath,
        CriFsRequest_DoneDelegate_o *doneDeleagate,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return CriFsUtility__Install_30836080(0, srcPath, dstPath, doneDeleagate, v4);
}


CriFsInstallRequest_o *CriFsUtility__Install_30836172(
        CriFsBinder_o *srcBinder,
        System_String_o *srcPath,
        System_String_o *dstPath,
        const MethodInfo *method)
{
  CriFsServer_o *instance; // x0
  const MethodInfo *v8; // x5

  instance = CriFsServer__get_instance((const MethodInfo *)srcBinder);
  if ( !instance )
    sub_1C372B4(0);
  return CriFsServer__Install(instance, srcBinder, srcPath, dstPath, 0, v8);
}


CriFsLoadAssetBundleRequest_o *CriFsUtility__LoadAssetBundle(
        System_String_o *path,
        int32_t readUnitSize,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return CriFsUtility__LoadAssetBundle_30835868(0, path, readUnitSize, v3);
}


CriFsLoadAssetBundleRequest_o *CriFsUtility__LoadAssetBundle_30835868(
        CriFsBinder_o *binder,
        System_String_o *path,
        int32_t readUnitSize,
        const MethodInfo *method)
{
  CriFsServer_o *instance; // x0
  const MethodInfo *v8; // x4

  instance = CriFsServer__get_instance((const MethodInfo *)binder);
  if ( !instance )
    sub_1C372B4(0);
  return CriFsServer__LoadAssetBundle(instance, binder, path, readUnitSize, v8);
}


CriFsLoadFileRequest_o *CriFsUtility__LoadFile(System_String_o *path, int32_t readUnitSize, const MethodInfo *method)
{
  CriFsServer_o *instance; // x0
  const MethodInfo *v6; // x5

  instance = CriFsServer__get_instance((const MethodInfo *)path);
  if ( !instance )
    sub_1C372B4(0);
  return CriFsServer__LoadFile(instance, 0, path, 0, readUnitSize, v6);
}


CriFsLoadFileRequest_o *CriFsUtility__LoadFile_30832332(
        CriFsBinder_o *binder,
        System_String_o *path,
        int32_t readUnitSize,
        const MethodInfo *method)
{
  CriFsServer_o *instance; // x0
  const MethodInfo *v8; // x5

  instance = CriFsServer__get_instance((const MethodInfo *)binder);
  if ( !instance )
    sub_1C372B4(0);
  return CriFsServer__LoadFile(instance, binder, path, 0, readUnitSize, v8);
}


CriFsLoadFileRequest_o *CriFsUtility__LoadFile_30835792(
        System_String_o *path,
        CriFsRequest_DoneDelegate_o *doneDelegate,
        int32_t readUnitSize,
        const MethodInfo *method)
{
  CriFsServer_o *instance; // x0
  const MethodInfo *v8; // x5

  instance = CriFsServer__get_instance((const MethodInfo *)path);
  if ( !instance )
    sub_1C372B4(0);
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
    sub_1C372B4(0);
  return CriFsServer__WebInstall(instance, srcPath, dstPath, doneDeleagate, v8);
}