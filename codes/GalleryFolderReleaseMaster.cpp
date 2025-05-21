void __fastcall GalleryFolderReleaseMaster___ctor(GalleryFolderReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B44D57 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_GalleryFolderReleaseMaster__GalleryFolderReleaseEntity__int___ctor__, method);
    byte_4B44D57 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    545,
    (const MethodInfo_32DFB18 *)Method_DataMasterBase_GalleryFolderReleaseMaster__GalleryFolderReleaseEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GalleryFolderReleaseMaster__IsDisplayGalleryWar(
        GalleryFolderReleaseMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  int32_t monitor; // w19
  int32_t klass_high; // w21
  int64_t monitor_high; // x20
  const MethodInfo *v14; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B44D56 & 1) == 0 )
  {
    sub_1BDB878(&CondType_TypeInfo, *(_QWORD *)&warId);
    sub_1BDB878(&Method_DataManager_GetMaster_GalleryMaster___, v5);
    sub_1BDB878(&DataManager_TypeInfo, v6);
    sub_1BDB878(&Method_DataMasterBase_GalleryFolderReleaseMaster__GalleryFolderReleaseEntity__int__TryGetEntity__, v7);
    byte_4B44D56 = 1;
  }
  entity = 0LL;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    &entity,
                                    warId,
                                    (const MethodInfo_32E1E88 *)Method_DataMasterBase_GalleryFolderReleaseMaster__GalleryFolderReleaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GalleryMaster___);
    if ( Master_object )
      return GalleryMaster__HasEnableGalleryWar((GalleryMaster_o *)Master_object, warId, v14);
LABEL_13:
    sub_1BDBAD4(Master_object, v9);
  }
  if ( !entity )
    goto LABEL_13;
  klass_high = HIDWORD(entity[1].klass);
  monitor = (int32_t)entity[1].monitor;
  monitor_high = SHIDWORD(entity[1].monitor);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(klass_high, monitor, monitor_high, 0, 0LL, 0LL);
}