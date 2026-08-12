void GalleryFolderReleaseMaster___ctor(GalleryFolderReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970C6C & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_GalleryFolderReleaseMaster__GalleryFolderReleaseEntity__int___ctor__);
    byte_5970C6C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    547,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_GalleryFolderReleaseMaster__GalleryFolderReleaseEntity__int___ctor__);
}


bool GalleryFolderReleaseMaster__IsDisplayGalleryWar(
        GalleryFolderReleaseMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  int64_t v7; // x21
  int32_t v8; // w19
  int32_t v9; // w20
  const MethodInfo *v11; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970C6B & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_GalleryMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GalleryFolderReleaseMaster__GalleryFolderReleaseEntity__int__TryGetEntity__);
    byte_5970C6B = 1;
  }
  entity = 0;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    &entity,
                                    warId,
                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_GalleryFolderReleaseMaster__GalleryFolderReleaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GalleryMaster___);
    if ( Master_object )
      return GalleryMaster__HasEnableGalleryWar((GalleryMaster_o *)Master_object, warId, v11);
LABEL_13:
    sub_2213CDC(Master_object, v6);
  }
  if ( !entity )
    goto LABEL_13;
  v7 = *(int *)((char *)off_18 + (_QWORD)entity + 4);
  v8 = *(int *)((char *)&dword_14 + (_QWORD)entity);
  v9 = *(int *)((char *)&dword_14 + (_QWORD)entity + 4);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6);
  return CondType__IsOpen(v8, v9, v7, 0, 0, 0);
}