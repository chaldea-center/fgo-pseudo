void CaldeaFolderTutorial___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__c *v1; // x0
  struct CaldeaFolderTutorial_StaticFields *static_fields; // x8
  System_Collections_Generic_Dictionary_int__object__o *v3; // x19
  int32_t CALDEA_GATE_WAR_ID; // w20
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int32_t CALDEA_WEEKLY_WAR_ID; // w20
  __int64 v16; // x21
  CaldeaFolderTutorial_TutorialData_c *v17; // x0
  __int64 v18; // x22
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo_3F68D08 *v25; // x3
  int32_t CALDEA_FRIEND_STORY_WAR_ID; // w20
  __int64 v27; // x21
  CaldeaFolderTutorial_TutorialData_c *v28; // x0
  __int64 v29; // x22
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  const MethodInfo_3F68D08 *v36; // x3
  struct CaldeaFolderTutorial_StaticFields *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7

  if ( (byte_5934D32 & 1) == 0 )
  {
    sub_21FFC50(&CaldeaFolderTutorial_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TypeInfo);
    sub_21FFC50(&TutorialFlag_ImageId___TypeInfo);
    sub_21FFC50(&CaldeaFolderTutorial_TutorialData_TypeInfo);
    byte_5934D32 = 1;
  }
  v1 = System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TypeInfo;
  static_fields = CaldeaFolderTutorial_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CALDEA_GATE_WAR_ID = 0x3EA0000270FLL;
  static_fields->CALDEA_FRIEND_STORY_WAR_ID = 1003;
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(v1);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData___ctor__);
  CALDEA_GATE_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_GATE_WAR_ID;
  v5 = sub_21FFD10(TutorialFlag_ImageId___TypeInfo, 1);
  if ( !v5 )
    goto LABEL_11;
  v7 = v5;
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v5 + 32) = 21;
  v8 = sub_21FFEBC(CaldeaFolderTutorial_TutorialData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_QWORD *)(v8 + 16) = v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v8 + 16), v7, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v8 + 24) = 129;
  if ( !v3 )
    goto LABEL_11;
  System_Collections_Generic_Dictionary_int__object___Add(
    v3,
    CALDEA_GATE_WAR_ID,
    (Il2CppObject *)v8,
    (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  CALDEA_WEEKLY_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_WEEKLY_WAR_ID;
  v5 = sub_21FFD10(TutorialFlag_ImageId___TypeInfo, 1);
  if ( !v5 )
    goto LABEL_11;
  v16 = v5;
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_12;
  v17 = CaldeaFolderTutorial_TutorialData_TypeInfo;
  *(_DWORD *)(v16 + 32) = 22;
  v18 = sub_21FFEBC(v17);
  System_Object___ctor((Il2CppObject *)v18, 0);
  *(_QWORD *)(v18 + 16) = v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 16), v16, v19, v20, v21, v22, v23, v24);
  v25 = (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__;
  *(_DWORD *)(v18 + 24) = 130;
  System_Collections_Generic_Dictionary_int__object___Add(v3, CALDEA_WEEKLY_WAR_ID, (Il2CppObject *)v18, v25);
  CALDEA_FRIEND_STORY_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_FRIEND_STORY_WAR_ID;
  v5 = sub_21FFD10(TutorialFlag_ImageId___TypeInfo, 1);
  if ( !v5 )
LABEL_11:
    sub_21FFECC(v5, v6);
  v27 = v5;
  if ( !*(_DWORD *)(v5 + 24) )
LABEL_12:
    sub_21FFED4(v5);
  v28 = CaldeaFolderTutorial_TutorialData_TypeInfo;
  *(_DWORD *)(v27 + 32) = 33;
  v29 = sub_21FFEBC(v28);
  System_Object___ctor((Il2CppObject *)v29, 0);
  *(_QWORD *)(v29 + 16) = v27;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v29 + 16), v27, v30, v31, v32, v33, v34, v35);
  v36 = (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__;
  *(_DWORD *)(v29 + 24) = 131;
  System_Collections_Generic_Dictionary_int__object___Add(v3, CALDEA_FRIEND_STORY_WAR_ID, (Il2CppObject *)v29, v36);
  v37 = CaldeaFolderTutorial_TypeInfo->static_fields;
  v37->FolderTutorials = (struct System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v37->FolderTutorials, (int32_t)v3, v38, v39, v40, v41, v42, v43);
}


void CaldeaFolderTutorial___ctor(CaldeaFolderTutorial_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CaldeaFolderTutorial__CheckTutorial(int32_t warId, System_Action_o *callback, const MethodInfo *method)
{
  CaldeaFolderTutorial_c *v5; // x0
  System_Collections_Generic_Dictionary_int__object__o *FolderTutorials; // x0
  __int64 v7; // x2
  int32_t monitor; // w20
  bool IsTutorialAvailable; // w20
  int32_t EventID; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5934D30 & 1) == 0 )
  {
    sub_21FFC50(&CaldeaFolderTutorial_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&TutorialFlag_TypeInfo);
    byte_5934D30 = 1;
  }
  v5 = CaldeaFolderTutorial_TypeInfo;
  value = 0;
  if ( !*(&CaldeaFolderTutorial_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CaldeaFolderTutorial_TypeInfo, callback, method);
    v5 = CaldeaFolderTutorial_TypeInfo;
  }
  FolderTutorials = (System_Collections_Generic_Dictionary_int__object__o *)v5->static_fields->FolderTutorials;
  if ( !FolderTutorials )
    goto LABEL_18;
  FolderTutorials = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                              FolderTutorials,
                                                                              warId,
                                                                              &value,
                                                                              (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__);
  if ( ((unsigned __int8)FolderTutorials & 1) == 0 )
  {
    EventID = WarMaster__getEventID(warId, 0);
    IsTutorialAvailable = EventTutorialMaster__IsTutorialAvailable(EventID, 33, 0, 0, 0, 0, 0);
    goto LABEL_13;
  }
  if ( !value )
LABEL_18:
    sub_21FFECC(FolderTutorials, callback);
  monitor = (int32_t)value[1].monitor;
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, callback, v7);
  if ( !TutorialFlag__Get_47357952(monitor, 0) )
  {
    FolderTutorials = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  char v4; // w8
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  CaldeaFolderTutorial_c *v8; // x0
  Il2CppObject *FolderTutorials; // x0
  int32_t EventID; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5934D31 & 1) == 0 )
  {
    sub_21FFC50(&Method_CaldeaFolderTutorial_OnClickHelp__);
    sub_21FFC50(&CaldeaFolderTutorial_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5934D31 = 1;
  }
  v3 = Method_CaldeaFolderTutorial_OnClickHelp__;
  v4 = *((_BYTE *)Method_CaldeaFolderTutorial_OnClickHelp__ + 83);
  value = 0;
  if ( (v4 & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_CaldeaFolderTutorial_OnClickHelp__);
  v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  v8 = CaldeaFolderTutorial_TypeInfo;
  if ( !*(&CaldeaFolderTutorial_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CaldeaFolderTutorial_TypeInfo, v6, v7);
    v8 = CaldeaFolderTutorial_TypeInfo;
  }
  FolderTutorials = (Il2CppObject *)v8->static_fields->FolderTutorials;
  if ( !FolderTutorials )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)FolderTutorials,
         warId,
         &value,
         (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__) )
  {
    FolderTutorials = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_21FFECC(FolderTutorials, v6);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.imageIds = imgs;
  v6 = (CaldeaFolderTutorial_TutorialData_o *)((char *)v6 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v6, (int32_t)imgs, v7, v8, v9, v10, v11, v12);
  LODWORD(v6->monitor) = flg;
}