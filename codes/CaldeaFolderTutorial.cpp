void CaldeaFolderTutorial___cctor(const MethodInfo *method)
{
  struct CaldeaFolderTutorial_StaticFields *static_fields; // x8
  System_Collections_Generic_Dictionary_int__object__o *v2; // x19
  int32_t CALDEA_GATE_WAR_ID; // w20
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t CALDEA_WEEKLY_WAR_ID; // w20
  __int64 v15; // x21
  __int64 v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t CALDEA_FRIEND_STORY_WAR_ID; // w20
  __int64 v24; // x21
  __int64 v25; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct CaldeaFolderTutorial_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7

  if ( (byte_4D28F93 & 1) == 0 )
  {
    sub_1C94098(&CaldeaFolderTutorial_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TypeInfo);
    sub_1C94098(&TutorialFlag_ImageId___TypeInfo);
    sub_1C94098(&CaldeaFolderTutorial_TutorialData_TypeInfo);
    byte_4D28F93 = 1;
  }
  static_fields = CaldeaFolderTutorial_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CALDEA_GATE_WAR_ID = 0x3EA0000270FLL;
  static_fields->CALDEA_FRIEND_STORY_WAR_ID = 1003;
  v2 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v2,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData___ctor__);
  CALDEA_GATE_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_GATE_WAR_ID;
  v4 = sub_1C94140(TutorialFlag_ImageId___TypeInfo, 1);
  if ( !v4 )
    goto LABEL_11;
  v6 = v4;
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v4 + 32) = 21;
  v7 = sub_1C942E4(CaldeaFolderTutorial_TutorialData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_QWORD *)(v7 + 16) = v6;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), v6, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 24) = 129;
  if ( !v2 )
    goto LABEL_11;
  System_Collections_Generic_Dictionary_int__object___Add(
    v2,
    CALDEA_GATE_WAR_ID,
    (Il2CppObject *)v7,
    (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  CALDEA_WEEKLY_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_WEEKLY_WAR_ID;
  v4 = sub_1C94140(TutorialFlag_ImageId___TypeInfo, 1);
  if ( !v4 )
    goto LABEL_11;
  v15 = v4;
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v4 + 32) = 22;
  v16 = sub_1C942E4(CaldeaFolderTutorial_TutorialData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0);
  *(_QWORD *)(v16 + 16) = v15;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v16 + 16), v15, v17, v18, v19, v20, v21, v22);
  *(_DWORD *)(v16 + 24) = 130;
  System_Collections_Generic_Dictionary_int__object___Add(
    v2,
    CALDEA_WEEKLY_WAR_ID,
    (Il2CppObject *)v16,
    (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  CALDEA_FRIEND_STORY_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_FRIEND_STORY_WAR_ID;
  v4 = sub_1C94140(TutorialFlag_ImageId___TypeInfo, 1);
  if ( !v4 )
LABEL_11:
    sub_1C942F0(v4, v5);
  v24 = v4;
  if ( !*(_DWORD *)(v4 + 24) )
LABEL_12:
    sub_1C942F8(v4);
  *(_DWORD *)(v4 + 32) = 33;
  v25 = sub_1C942E4(CaldeaFolderTutorial_TutorialData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0);
  *(_QWORD *)(v25 + 16) = v24;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v25 + 16), v24, v26, v27, v28, v29, v30, v31);
  *(_DWORD *)(v25 + 24) = 131;
  System_Collections_Generic_Dictionary_int__object___Add(
    v2,
    CALDEA_FRIEND_STORY_WAR_ID,
    (Il2CppObject *)v25,
    (const MethodInfo_34B48D4 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  v32 = CaldeaFolderTutorial_TypeInfo->static_fields;
  v32->FolderTutorials = (struct System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__o *)v2;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v32->FolderTutorials, (int32_t)v2, v33, v34, v35, v36, v37, v38);
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

  if ( (byte_4D28F91 & 1) == 0 )
  {
    sub_1C94098(&CaldeaFolderTutorial_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&TutorialFlag_TypeInfo);
    byte_4D28F91 = 1;
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
                                                                              (const MethodInfo_34B6060 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__);
  if ( ((unsigned __int8)FolderTutorials & 1) == 0 )
  {
    EventID = WarMaster__getEventID(warId, 0);
    IsTutorialAvailable = EventTutorialMaster__IsTutorialAvailable(EventID, 33, 0, 0, 0, 0, 0);
    goto LABEL_13;
  }
  if ( !value )
LABEL_18:
    sub_1C942F0(FolderTutorials, callback);
  monitor = (int32_t)value[1].monitor;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_41176064(monitor, 0) )
  {
    FolderTutorials = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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

  if ( (byte_4D28F92 & 1) == 0 )
  {
    sub_1C94098(&Method_CaldeaFolderTutorial_OnClickHelp__);
    sub_1C94098(&CaldeaFolderTutorial_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D28F92 = 1;
  }
  v3 = Method_CaldeaFolderTutorial_OnClickHelp__;
  value = 0;
  if ( (*((_BYTE *)Method_CaldeaFolderTutorial_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_CaldeaFolderTutorial_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
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
         (const MethodInfo_34B6060 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__) )
  {
    FolderTutorials = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C942F0(FolderTutorials, v5);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.imageIds = imgs;
  v6 = (CaldeaFolderTutorial_TutorialData_o *)((char *)v6 + 16);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v6, (int32_t)imgs, v7, v8, v9, v10, v11, v12);
  LODWORD(v6->monitor) = flg;
}