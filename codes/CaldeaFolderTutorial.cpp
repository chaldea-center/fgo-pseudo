void __fastcall CaldeaFolderTutorial___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct CaldeaFolderTutorial_StaticFields *static_fields; // x8
  System_Collections_Generic_Dictionary_int__object__o *v15; // x19
  int32_t CALDEA_GATE_WAR_ID; // w20
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  int64_t v21; // x21
  __int64 v22; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int32_t CALDEA_WEEKLY_WAR_ID; // w20
  __int64 v30; // x2
  __int64 v31; // x3
  int64_t v32; // x21
  __int64 v33; // x22
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int32_t CALDEA_FRIEND_STORY_WAR_ID; // w20
  __int64 v41; // x2
  __int64 v42; // x3
  int64_t v43; // x21
  __int64 v44; // x22
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct CaldeaFolderTutorial_StaticFields *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7

  if ( (byte_4B12CFD & 1) == 0 )
  {
    sub_1BCA7E0(&CaldeaFolderTutorial_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TypeInfo, v8, v9);
    sub_1BCA7E0(&TutorialFlag_ImageId___TypeInfo, v10, v11);
    sub_1BCA7E0(&CaldeaFolderTutorial_TutorialData_TypeInfo, v12, v13);
    byte_4B12CFD = 1;
  }
  static_fields = CaldeaFolderTutorial_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CALDEA_GATE_WAR_ID = 0x3EA0000270FLL;
  static_fields->CALDEA_FRIEND_STORY_WAR_ID = 1003;
  v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TypeInfo,
                                                                  v1,
                                                                  v2,
                                                                  v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v15,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData___ctor__);
  CALDEA_GATE_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_GATE_WAR_ID;
  v17 = sub_1BCA888(TutorialFlag_ImageId___TypeInfo, 1LL);
  if ( !v17 )
    goto LABEL_11;
  v21 = v17;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v17 + 32) = 21;
  v22 = sub_1BCAA2C(CaldeaFolderTutorial_TutorialData_TypeInfo, v18, v19, v20);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  *(_QWORD *)(v22 + 16) = v21;
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 16), v21, v23, v24, v25, v26, v27, v28);
  *(_DWORD *)(v22 + 24) = 129;
  if ( !v15 )
    goto LABEL_11;
  System_Collections_Generic_Dictionary_int__object___Add(
    v15,
    CALDEA_GATE_WAR_ID,
    (Il2CppObject *)v22,
    (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  CALDEA_WEEKLY_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_WEEKLY_WAR_ID;
  v17 = sub_1BCA888(TutorialFlag_ImageId___TypeInfo, 1LL);
  if ( !v17 )
    goto LABEL_11;
  v32 = v17;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_12;
  *(_DWORD *)(v17 + 32) = 22;
  v33 = sub_1BCAA2C(CaldeaFolderTutorial_TutorialData_TypeInfo, v18, v30, v31);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  *(_QWORD *)(v33 + 16) = v32;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 16), v32, v34, v35, v36, v37, v38, v39);
  *(_DWORD *)(v33 + 24) = 130;
  System_Collections_Generic_Dictionary_int__object___Add(
    v15,
    CALDEA_WEEKLY_WAR_ID,
    (Il2CppObject *)v33,
    (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  CALDEA_FRIEND_STORY_WAR_ID = CaldeaFolderTutorial_TypeInfo->static_fields->CALDEA_FRIEND_STORY_WAR_ID;
  v17 = sub_1BCA888(TutorialFlag_ImageId___TypeInfo, 1LL);
  if ( !v17 )
LABEL_11:
    sub_1BCAA3C(v17, v18);
  v43 = v17;
  if ( !*(_DWORD *)(v17 + 24) )
LABEL_12:
    sub_1BCAA44(v17, v18);
  *(_DWORD *)(v17 + 32) = 33;
  v44 = sub_1BCAA2C(CaldeaFolderTutorial_TutorialData_TypeInfo, v18, v41, v42);
  System_Object___ctor((Il2CppObject *)v44, 0LL);
  *(_QWORD *)(v44 + 16) = v43;
  sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 16), v43, v45, v46, v47, v48, v49, v50);
  *(_DWORD *)(v44 + 24) = 131;
  System_Collections_Generic_Dictionary_int__object___Add(
    v15,
    CALDEA_FRIEND_STORY_WAR_ID,
    (Il2CppObject *)v44,
    (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__Add__);
  v51 = CaldeaFolderTutorial_TypeInfo->static_fields;
  v51->FolderTutorials = (struct System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__o *)v15;
  sub_1BCA784((PartyOrganizationUtility_o *)&v51->FolderTutorials, (int64_t)v15, v52, v53, v54, v55, v56, v57);
}


void __fastcall CaldeaFolderTutorial___ctor(CaldeaFolderTutorial_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CaldeaFolderTutorial__CheckTutorial(int32_t warId, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  CaldeaFolderTutorial_c *v11; // x0
  System_Collections_Generic_Dictionary_int__object__o *FolderTutorials; // x0
  int32_t monitor; // w20
  bool IsTutorialAvailable; // w20
  int32_t EventID; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B12CFB & 1) == 0 )
  {
    sub_1BCA7E0(&CaldeaFolderTutorial_TypeInfo, callback, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__,
      v5,
      v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v9, v10);
    byte_4B12CFB = 1;
  }
  v11 = CaldeaFolderTutorial_TypeInfo;
  value = 0LL;
  if ( !CaldeaFolderTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CaldeaFolderTutorial_TypeInfo, callback);
    v11 = CaldeaFolderTutorial_TypeInfo;
  }
  FolderTutorials = (System_Collections_Generic_Dictionary_int__object__o *)v11->static_fields->FolderTutorials;
  if ( !FolderTutorials )
    goto LABEL_18;
  FolderTutorials = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                              FolderTutorials,
                                                                              warId,
                                                                              &value,
                                                                              (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__);
  if ( ((unsigned __int8)FolderTutorials & 1) == 0 )
  {
    EventID = WarMaster__getEventID(warId, 0LL);
    IsTutorialAvailable = EventTutorialMaster__IsTutorialAvailable(EventID, 33, 0, 0, 0, 0, 0LL);
    goto LABEL_13;
  }
  if ( !value )
LABEL_18:
    sub_1BCAA3C(FolderTutorials, callback);
  monitor = (int32_t)value[1].monitor;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, callback);
  if ( !TutorialFlag__Get_38402052(monitor, 0LL) )
  {
    FolderTutorials = (System_Collections_Generic_Dictionary_int__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  CaldeaFolderTutorial_c *v13; // x0
  Il2CppObject *FolderTutorials; // x0
  int32_t EventID; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B12CFC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CaldeaFolderTutorial_OnClickHelp__, method, v2);
    sub_1BCA7E0(&CaldeaFolderTutorial_TypeInfo, v4, v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__,
      v6,
      v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B12CFC = 1;
  }
  v10 = Method_CaldeaFolderTutorial_OnClickHelp__;
  value = 0LL;
  if ( (*((_BYTE *)Method_CaldeaFolderTutorial_OnClickHelp__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BCA7F8(Method_CaldeaFolderTutorial_OnClickHelp__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  v13 = CaldeaFolderTutorial_TypeInfo;
  if ( !CaldeaFolderTutorial_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CaldeaFolderTutorial_TypeInfo, v12);
    v13 = CaldeaFolderTutorial_TypeInfo;
  }
  FolderTutorials = (Il2CppObject *)v13->static_fields->FolderTutorials;
  if ( !FolderTutorials )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)FolderTutorials,
         warId,
         &value,
         (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__CaldeaFolderTutorial_TutorialData__TryGetValue__) )
  {
    FolderTutorials = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1BCAA3C(FolderTutorials, v12);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.imageIds = imgs;
  v6 = (CaldeaFolderTutorial_TutorialData_o *)((char *)v6 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)v6, (int64_t)imgs, v7, v8, v9, v10, v11, v12);
  LODWORD(v6->monitor) = flg;
}