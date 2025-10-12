void GalleryFolderReleaseMaster___ctor(GalleryFolderReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37CC3 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_GalleryFolderReleaseMaster__GalleryFolderReleaseEntity__int___ctor__);
    byte_4C37CC3 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    545,
    (const MethodInfo_3394514 *)Method_DataMasterBase_GalleryFolderReleaseMaster__GalleryFolderReleaseEntity__int___ctor__);
}


bool GalleryFolderReleaseMaster__IsDisplayGalleryWar(
        GalleryFolderReleaseMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  int32_t v6; // w19
  int32_t v7; // w21
  int64_t v8; // x20
  const MethodInfo *v10; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C37CC2 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_GalleryMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_GalleryFolderReleaseMaster__GalleryFolderReleaseEntity__int__TryGetEntity__);
    byte_4C37CC2 = 1;
  }
  entity = 0;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    &entity,
                                    warId,
                                    (const MethodInfo_3396884 *)Method_DataMasterBase_GalleryFolderReleaseMaster__GalleryFolderReleaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GalleryMaster___);
    if ( Master_object )
      return GalleryMaster__HasEnableGalleryWar((GalleryMaster_o *)Master_object, warId, v10);
LABEL_13:
    sub_1C32E7C(Master_object);
  }
  if ( !entity )
    goto LABEL_13;
  v7 = *(int *)((char *)&dword_14 + (_QWORD)entity);
  v6 = *(int *)((char *)&dword_14 + (_QWORD)entity + 4);
  v8 = *(int *)((char *)&off_18 + (_QWORD)entity + 4);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(v7, v6, v8, 0, 0, 0);
}