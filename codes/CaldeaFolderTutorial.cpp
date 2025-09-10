void CaldeaFolderTutorial___cctor(const MethodInfo *method)
{
  struct CaldeaFolderTutorial_StaticFields *static_fields; // x8
  System_Collections_Generic_Dictionary_int__object__o *v2; // x19
  int32_t CALDEA_GATE_WAR_ID; // w20
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x21
  __int64 v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t CALDEA_WEEKLY_WAR_ID; // w20
  __int64 v12; // x21
  __int64 v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t CALDEA_FRIEND_STORY_WAR_ID; // w20
  __int64 v17; // x21
  __int64 v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct CaldeaFolderTutorial_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4C23B90 & 1) == 0 )
  {
    sub_1C2D490(&CaldeaFolderTutorial_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TypeInfo);
    sub_1C2D490(&TutorialFlag_ImageId___TypeInfo);
    sub_1C2D490(&CaldeaFolderTutorial_TutorialData_TypeInfo);
    byte_4C23B90 = 1;
  }
  static_fields = CaldeaFolderTutorial_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CALDEA_GATE_WAR_ID = 0x3EA0000270FLL;
  static_fields->CALDEA_FRIEND_STORY_WAR_ID = 1003;
  v2 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v2,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData___ctor__);
  CALDEA_GATE_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_GATE_WAR_ID;
  v4 = sub_1C2D538(TutorialFlag_ImageId___TypeInfo, 1);
  if ( !v4 )
    goto LABEL_11;
  v7 = v4;
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v4 + 32) = 21;
  v8 = sub_1C2D6DC(CaldeaFolderTutorial_TutorialData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_QWORD *)(v8 + 16) = v7;
  sub_1C2D434((CGThumbnailListItem_o *)(v8 + 16), v7, v9, v10);
  *(_DWORD *)(v8 + 24) = 129;
  if ( !v2 )
    goto LABEL_11;
  System_Collections_Generic_Dictionary_int__object___Add(
    v2,
    CALDEA_GATE_WAR_ID,
    (Il2CppObject *)v8,
    (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  CALDEA_WEEKLY_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_WEEKLY_WAR_ID;
  v4 = sub_1C2D538(TutorialFlag_ImageId___TypeInfo, 1);
  if ( !v4 )
    goto LABEL_11;
  v12 = v4;
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v4 + 32) = 22;
  v13 = sub_1C2D6DC(CaldeaFolderTutorial_TutorialData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  *(_QWORD *)(v13 + 16) = v12;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 16), v12, v14, v15);
  *(_DWORD *)(v13 + 24) = 130;
  System_Collections_Generic_Dictionary_int__object___Add(
    v2,
    CALDEA_WEEKLY_WAR_ID,
    (Il2CppObject *)v13,
    (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  CALDEA_FRIEND_STORY_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_FRIEND_STORY_WAR_ID;
  v4 = sub_1C2D538(TutorialFlag_ImageId___TypeInfo, 1);
  if ( !v4 )
LABEL_11:
    sub_1C2D6EC(v4, v5);
  v17 = v4;
  if ( !*(_DWORD *)(v4 + 24) )
LABEL_12:
    sub_1C2D6F4(v4, v5, v6);
  *(_DWORD *)(v4 + 32) = 33;
  v18 = sub_1C2D6DC(CaldeaFolderTutorial_TutorialData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0);
  *(_QWORD *)(v18 + 16) = v17;
  sub_1C2D434((CGThumbnailListItem_o *)(v18 + 16), v17, v19, v20);
  *(_DWORD *)(v18 + 24) = 131;
  System_Collections_Generic_Dictionary_int__object___Add(
    v2,
    CALDEA_FRIEND_STORY_WAR_ID,
    (Il2CppObject *)v18,
    (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  v21 = CaldeaFolderTutorial_TypeInfo->static_fields;
  v21->FolderTutorials = (struct System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__o *)v2;
  sub_1C2D434((CGThumbnailListItem_o *)&v21->FolderTutorials, (int32_t)v2, v22, v23);
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

  if ( (byte_4C23B8E & 1) == 0 )
  {
    sub_1C2D490(&CaldeaFolderTutorial_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&TutorialFlag_TypeInfo);
    byte_4C23B8E = 1;
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
                                                                              (const MethodInfo_33E2A08 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__);
  if ( ((unsigned __int8)FolderTutorials & 1) == 0 )
  {
    EventID = WarMaster__getEventID(warId, 0);
    IsTutorialAvailable = EventTutorialMaster__IsTutorialAvailable(EventID, 33, 0, 0, 0, 0, 0);
    goto LABEL_13;
  }
  if ( !value )
LABEL_18:
    sub_1C2D6EC(FolderTutorials, callback);
  monitor = (int32_t)value[1].monitor;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_40206092(monitor, 0) )
  {
    FolderTutorials = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  __int64 v5; // x1
  CaldeaFolderTutorial_c *v6; // x0
  Il2CppObject *FolderTutorials; // x0
  int32_t EventID; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C23B8F & 1) == 0 )
  {
    sub_1C2D490(&Method_CaldeaFolderTutorial_OnClickHelp__);
    sub_1C2D490(&CaldeaFolderTutorial_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C23B8F = 1;
  }
  v3 = Method_CaldeaFolderTutorial_OnClickHelp__;
  value = 0;
  if ( (*((_BYTE *)Method_CaldeaFolderTutorial_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_CaldeaFolderTutorial_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v6 = CaldeaFolderTutorial_TypeInfo;
  if ( !CaldeaFolderTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CaldeaFolderTutorial_TypeInfo);
    v6 = CaldeaFolderTutorial_TypeInfo;
  }
  FolderTutorials = (Il2CppObject *)v6->static_fields->FolderTutorials;
  if ( !FolderTutorials )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)FolderTutorials,
         warId,
         &value,
         (const MethodInfo_33E2A08 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__) )
  {
    FolderTutorials = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C2D6EC(FolderTutorials, v5);
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
  sub_1C2D434((CGThumbnailListItem_o *)v6, (int32_t)imgs, v7, v8);
  LODWORD(v6->monitor) = flg;
}