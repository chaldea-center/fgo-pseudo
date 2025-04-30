void __fastcall CaldeaFolderTutorial___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct CaldeaFolderTutorial_StaticFields *static_fields; // x8
  System_Collections_Generic_Dictionary_int__object__o *v8; // x19
  int32_t CALDEA_GATE_WAR_ID; // w20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x21
  __int64 v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t CALDEA_WEEKLY_WAR_ID; // w20
  __int64 v17; // x21
  __int64 v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t CALDEA_FRIEND_STORY_WAR_ID; // w20
  __int64 v22; // x21
  __int64 v23; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct CaldeaFolderTutorial_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3

  if ( (byte_4A4AE23 & 1) == 0 )
  {
    sub_1B863B8(&CaldeaFolderTutorial_TypeInfo, v1);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__, v2);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData___ctor__, v3);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TypeInfo, v4);
    sub_1B863B8(&TutorialFlag_ImageId___TypeInfo, v5);
    sub_1B863B8(&CaldeaFolderTutorial_TutorialData_TypeInfo, v6);
    byte_4A4AE23 = 1;
  }
  static_fields = CaldeaFolderTutorial_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CALDEA_GATE_WAR_ID = 0x3EA0000270FLL;
  static_fields->CALDEA_FRIEND_STORY_WAR_ID = 1003;
  v8 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v8,
    (const MethodInfo_326CD90 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData___ctor__);
  CALDEA_GATE_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_GATE_WAR_ID;
  v10 = sub_1B86460(TutorialFlag_ImageId___TypeInfo, 1LL);
  if ( !v10 )
    goto LABEL_11;
  v12 = v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v10 + 32) = 21;
  v13 = sub_1B86604(CaldeaFolderTutorial_TutorialData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  *(_QWORD *)(v13 + 16) = v12;
  sub_1B8635C((CGThumbnailListItem_o *)(v13 + 16), v12, v14, v15);
  *(_DWORD *)(v13 + 24) = 129;
  if ( !v8 )
    goto LABEL_11;
  System_Collections_Generic_Dictionary_int__object___Add(
    v8,
    CALDEA_GATE_WAR_ID,
    (Il2CppObject *)v13,
    (const MethodInfo_326D764 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  CALDEA_WEEKLY_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_WEEKLY_WAR_ID;
  v10 = sub_1B86460(TutorialFlag_ImageId___TypeInfo, 1LL);
  if ( !v10 )
    goto LABEL_11;
  v17 = v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v10 + 32) = 22;
  v18 = sub_1B86604(CaldeaFolderTutorial_TutorialData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  *(_QWORD *)(v18 + 16) = v17;
  sub_1B8635C((CGThumbnailListItem_o *)(v18 + 16), v17, v19, v20);
  *(_DWORD *)(v18 + 24) = 130;
  System_Collections_Generic_Dictionary_int__object___Add(
    v8,
    CALDEA_WEEKLY_WAR_ID,
    (Il2CppObject *)v18,
    (const MethodInfo_326D764 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  CALDEA_FRIEND_STORY_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_FRIEND_STORY_WAR_ID;
  v10 = sub_1B86460(TutorialFlag_ImageId___TypeInfo, 1LL);
  if ( !v10 )
LABEL_11:
    sub_1B86614(v10, v11);
  v22 = v10;
  if ( !*(_DWORD *)(v10 + 24) )
LABEL_12:
    sub_1B8661C(v10, v11);
  *(_DWORD *)(v10 + 32) = 33;
  v23 = sub_1B86604(CaldeaFolderTutorial_TutorialData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  *(_QWORD *)(v23 + 16) = v22;
  sub_1B8635C((CGThumbnailListItem_o *)(v23 + 16), v22, v24, v25);
  *(_DWORD *)(v23 + 24) = 131;
  System_Collections_Generic_Dictionary_int__object___Add(
    v8,
    CALDEA_FRIEND_STORY_WAR_ID,
    (Il2CppObject *)v23,
    (const MethodInfo_326D764 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  v26 = CaldeaFolderTutorial_TypeInfo->static_fields;
  v26->FolderTutorials = (struct System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__o *)v8;
  sub_1B8635C((CGThumbnailListItem_o *)&v26->FolderTutorials, (int32_t)v8, v27, v28);
}


void __fastcall CaldeaFolderTutorial___ctor(CaldeaFolderTutorial_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CaldeaFolderTutorial__CheckTutorial(int32_t warId, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CaldeaFolderTutorial_c *v8; // x0
  System_Collections_Generic_Dictionary_int__object__o *FolderTutorials; // x0
  int32_t monitor; // w20
  bool IsTutorialAvailable; // w20
  int32_t EventID; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A4AE21 & 1) == 0 )
  {
    sub_1B863B8(&CaldeaFolderTutorial_TypeInfo, callback);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B863B8(&TutorialFlag_TypeInfo, v7);
    byte_4A4AE21 = 1;
  }
  v8 = CaldeaFolderTutorial_TypeInfo;
  value = 0LL;
  if ( !CaldeaFolderTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CaldeaFolderTutorial_TypeInfo);
    v8 = CaldeaFolderTutorial_TypeInfo;
  }
  FolderTutorials = (System_Collections_Generic_Dictionary_int__object__o *)v8->static_fields->FolderTutorials;
  if ( !FolderTutorials )
    goto LABEL_18;
  FolderTutorials = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                              FolderTutorials,
                                                                              warId,
                                                                              &value,
                                                                              (const MethodInfo_326EEF0 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__);
  if ( ((unsigned __int8)FolderTutorials & 1) == 0 )
  {
    EventID = WarMaster__getEventID(warId, 0LL);
    IsTutorialAvailable = EventTutorialMaster__IsTutorialAvailable(EventID, 33, 0, 0, 0, 0, 0LL);
    goto LABEL_13;
  }
  if ( !value )
LABEL_18:
    sub_1B86614(FolderTutorials, callback);
  monitor = (int32_t)value[1].monitor;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_38640612(monitor, 0LL) )
  {
    FolderTutorials = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( value && FolderTutorials )
    {
      CommonUI__OpenTutorialImageDialog(
        (CommonUI_o *)FolderTutorials,
        (TutorialFlag_ImageId_array *)value[1].klass,
        (int32_t)value[1].monitor,
        callback,
        0LL,
        0LL,
        0LL);
      return 1;
    }
    goto LABEL_18;
  }
  IsTutorialAvailable = 1;
LABEL_13:
  ActionExtensions__Call(callback, 0LL);
  return IsTutorialAvailable;
}


void __fastcall CaldeaFolderTutorial__OnClickHelp(int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  CaldeaFolderTutorial_c *v9; // x0
  Il2CppObject *FolderTutorials; // x0
  int32_t EventID; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A4AE22 & 1) == 0 )
  {
    sub_1B863B8(&Method_CaldeaFolderTutorial_OnClickHelp__, method);
    sub_1B863B8(&CaldeaFolderTutorial_TypeInfo, v3);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A4AE22 = 1;
  }
  v6 = Method_CaldeaFolderTutorial_OnClickHelp__;
  value = 0LL;
  if ( (*((_BYTE *)Method_CaldeaFolderTutorial_OnClickHelp__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B863D0(Method_CaldeaFolderTutorial_OnClickHelp__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B8639C(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
  v9 = CaldeaFolderTutorial_TypeInfo;
  if ( !CaldeaFolderTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CaldeaFolderTutorial_TypeInfo);
    v9 = CaldeaFolderTutorial_TypeInfo;
  }
  FolderTutorials = (Il2CppObject *)v9->static_fields->FolderTutorials;
  if ( !FolderTutorials )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)FolderTutorials,
         warId,
         &value,
         (const MethodInfo_326EEF0 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__) )
  {
    FolderTutorials = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( value && FolderTutorials )
    {
      CommonUI__OpenTutorialImageDialog(
        (CommonUI_o *)FolderTutorials,
        (TutorialFlag_ImageId_array *)value[1].klass,
        -1,
        0LL,
        0LL,
        0LL,
        0LL);
      return;
    }
LABEL_14:
    sub_1B86614(FolderTutorials, v8);
  }
  EventID = WarMaster__getEventID(warId, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(EventID, 33, 0LL, 0LL);
}


void __fastcall CaldeaFolderTutorial_TutorialData___ctor(
        CaldeaFolderTutorial_TutorialData_o *this,
        TutorialFlag_ImageId_array *imgs,
        int32_t flg,
        const MethodInfo *method)
{
  CaldeaFolderTutorial_TutorialData_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.imageIds = imgs;
  v6 = (CaldeaFolderTutorial_TutorialData_o *)((char *)v6 + 16);
  sub_1B8635C((CGThumbnailListItem_o *)v6, (int32_t)imgs, v7, v8);
  LODWORD(v6->monitor) = flg;
}