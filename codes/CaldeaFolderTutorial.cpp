void CaldeaFolderTutorial___cctor(const MethodInfo *method)
{
  struct CaldeaFolderTutorial_StaticFields *static_fields; // x8
  System_Collections_Generic_Dictionary_int__object__o *v2; // x19
  int32_t CALDEA_GATE_WAR_ID; // w20
  __int64 v4; // x0
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t CALDEA_WEEKLY_WAR_ID; // w20
  __int64 v10; // x21
  __int64 v11; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t CALDEA_FRIEND_STORY_WAR_ID; // w20
  __int64 v15; // x21
  __int64 v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct CaldeaFolderTutorial_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C34261 & 1) == 0 )
  {
    sub_1C32C20(&CaldeaFolderTutorial_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TypeInfo);
    sub_1C32C20(&TutorialFlag_ImageId___TypeInfo);
    sub_1C32C20(&CaldeaFolderTutorial_TutorialData_TypeInfo);
    byte_4C34261 = 1;
  }
  static_fields = CaldeaFolderTutorial_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CALDEA_GATE_WAR_ID = 0x3EA0000270FLL;
  static_fields->CALDEA_FRIEND_STORY_WAR_ID = 1003;
  v2 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v2,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData___ctor__);
  CALDEA_GATE_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_GATE_WAR_ID;
  v4 = sub_1C32CC8(TutorialFlag_ImageId___TypeInfo, 1);
  if ( !v4 )
    goto LABEL_11;
  v5 = v4;
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v4 + 32) = 21;
  v6 = sub_1C32E6C(CaldeaFolderTutorial_TutorialData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_QWORD *)(v6 + 16) = v5;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 16), v5, v7, v8);
  *(_DWORD *)(v6 + 24) = 129;
  if ( !v2 )
    goto LABEL_11;
  System_Collections_Generic_Dictionary_int__object___Add(
    v2,
    CALDEA_GATE_WAR_ID,
    (Il2CppObject *)v6,
    (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  CALDEA_WEEKLY_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_WEEKLY_WAR_ID;
  v4 = sub_1C32CC8(TutorialFlag_ImageId___TypeInfo, 1);
  if ( !v4 )
    goto LABEL_11;
  v10 = v4;
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v4 + 32) = 22;
  v11 = sub_1C32E6C(CaldeaFolderTutorial_TutorialData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  *(_QWORD *)(v11 + 16) = v10;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 16), v10, v12, v13);
  *(_DWORD *)(v11 + 24) = 130;
  System_Collections_Generic_Dictionary_int__object___Add(
    v2,
    CALDEA_WEEKLY_WAR_ID,
    (Il2CppObject *)v11,
    (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  CALDEA_FRIEND_STORY_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_FRIEND_STORY_WAR_ID;
  v4 = sub_1C32CC8(TutorialFlag_ImageId___TypeInfo, 1);
  if ( !v4 )
LABEL_11:
    sub_1C32E7C(v4);
  v15 = v4;
  if ( !*(_DWORD *)(v4 + 24) )
LABEL_12:
    sub_1C32E84(v4);
  *(_DWORD *)(v4 + 32) = 33;
  v16 = sub_1C32E6C(CaldeaFolderTutorial_TutorialData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0);
  *(_QWORD *)(v16 + 16) = v15;
  sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 16), v15, v17, v18);
  *(_DWORD *)(v16 + 24) = 131;
  System_Collections_Generic_Dictionary_int__object___Add(
    v2,
    CALDEA_FRIEND_STORY_WAR_ID,
    (Il2CppObject *)v16,
    (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  v19 = CaldeaFolderTutorial_TypeInfo->static_fields;
  v19->FolderTutorials = (struct System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__o *)v2;
  sub_1C32BC4((CGThumbnailListItem_o *)&v19->FolderTutorials, (int32_t)v2, v20, v21);
}


void CaldeaFolderTutorial___ctor(CaldeaFolderTutorial_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CaldeaFolderTutorial__CheckTutorial(int32_t warId, System_Action_o *callback, const MethodInfo *method)
{
  CaldeaFolderTutorial_c *v5; // x0
  System_Collections_Generic_Dictionary_int__object__o *FolderTutorials; // x0
  int32_t monitor; // w20
  bool IsTutorialAvailable; // w20
  int32_t EventID; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3425F & 1) == 0 )
  {
    sub_1C32C20(&CaldeaFolderTutorial_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&TutorialFlag_TypeInfo);
    byte_4C3425F = 1;
  }
  v5 = CaldeaFolderTutorial_TypeInfo;
  value = 0;
  if ( !CaldeaFolderTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CaldeaFolderTutorial_TypeInfo);
    v5 = CaldeaFolderTutorial_TypeInfo;
  }
  FolderTutorials = (System_Collections_Generic_Dictionary_int__object__o *)v5->static_fields->FolderTutorials;
  if ( !FolderTutorials )
    goto LABEL_18;
  FolderTutorials = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                              FolderTutorials,
                                                                              warId,
                                                                              &value,
                                                                              (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__);
  if ( ((unsigned __int8)FolderTutorials & 1) == 0 )
  {
    EventID = WarMaster__getEventID(warId, 0);
    IsTutorialAvailable = EventTutorialMaster__IsTutorialAvailable(EventID, 33, 0, 0, 0, 0, 0);
    goto LABEL_13;
  }
  if ( !value )
LABEL_18:
    sub_1C32E7C(FolderTutorials);
  monitor = (int32_t)value[1].monitor;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_40328320(monitor, 0) )
  {
    FolderTutorials = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( value && FolderTutorials )
    {
      CommonUI__OpenTutorialImageDialog(
        (CommonUI_o *)FolderTutorials,
        (TutorialFlag_ImageId_array *)value[1].klass,
        (int32_t)value[1].monitor,
        callback,
        0,
        0,
        0);
      return 1;
    }
    goto LABEL_18;
  }
  IsTutorialAvailable = 1;
LABEL_13:
  ActionExtensions__Call(callback, 0);
  return IsTutorialAvailable;
}


void CaldeaFolderTutorial__OnClickHelp(int32_t warId, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CaldeaFolderTutorial_c *v5; // x0
  Il2CppObject *FolderTutorials; // x0
  int32_t EventID; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C34260 & 1) == 0 )
  {
    sub_1C32C20(&Method_CaldeaFolderTutorial_OnClickHelp__);
    sub_1C32C20(&CaldeaFolderTutorial_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C34260 = 1;
  }
  v3 = Method_CaldeaFolderTutorial_OnClickHelp__;
  value = 0;
  if ( (*((_BYTE *)Method_CaldeaFolderTutorial_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_CaldeaFolderTutorial_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = CaldeaFolderTutorial_TypeInfo;
  if ( !CaldeaFolderTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CaldeaFolderTutorial_TypeInfo);
    v5 = CaldeaFolderTutorial_TypeInfo;
  }
  FolderTutorials = (Il2CppObject *)v5->static_fields->FolderTutorials;
  if ( !FolderTutorials )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)FolderTutorials,
         warId,
         &value,
         (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__) )
  {
    FolderTutorials = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( value && FolderTutorials )
    {
      CommonUI__OpenTutorialImageDialog(
        (CommonUI_o *)FolderTutorials,
        (TutorialFlag_ImageId_array *)value[1].klass,
        -1,
        0,
        0,
        0,
        0);
      return;
    }
LABEL_14:
    sub_1C32E7C(FolderTutorials);
  }
  EventID = WarMaster__getEventID(warId, 0);
  EventTutorialMaster__ShowTutorialWithoutCheck(EventID, 33, 0, 0, 0);
}


void CaldeaFolderTutorial_TutorialData___ctor(
        CaldeaFolderTutorial_TutorialData_o *this,
        TutorialFlag_ImageId_array *imgs,
        int32_t flg,
        const MethodInfo *method)
{
  CaldeaFolderTutorial_TutorialData_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.imageIds = imgs;
  v6 = (CaldeaFolderTutorial_TutorialData_o *)((char *)v6 + 16);
  sub_1C32BC4((CGThumbnailListItem_o *)v6, (int32_t)imgs, v7, v8);
  LODWORD(v6->monitor) = flg;
}