void __fastcall ClassBoardUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t v16; // x1
  struct ClassBoardUtility_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct ClassBoardUtility_StaticFields *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  struct ClassBoardUtility_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4B19756 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardUtility_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_12659/*"SavePlayedClassBoardBaseRelease"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_12660/*"SavePlayedExClassRelease"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_23599/*"skill_{0:D5}"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_18572/*"cs_{0:D4}{1}"*/, v14, v15);
    byte_4B19756 = 1;
  }
  ClassBoardUtility_TypeInfo->static_fields->commandSpellIconFormat = (struct System_String_o *)StringLiteral_18572/*"cs_{0:D4}{1}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ClassBoardUtility_TypeInfo->static_fields,
    StringLiteral_18572/*"cs_{0:D4}{1}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = StringLiteral_23599/*"skill_{0:D5}"*/;
  static_fields = ClassBoardUtility_TypeInfo->static_fields;
  static_fields->passiveSkillIconFormat = (struct System_String_o *)StringLiteral_23599/*"skill_{0:D5}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->passiveSkillIconFormat, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_12659/*"SavePlayedClassBoardBaseRelease"*/;
  v25 = ClassBoardUtility_TypeInfo->static_fields;
  v25->savePlayedClassBoardBaseReleaseKey = (struct System_String_o *)StringLiteral_12659/*"SavePlayedClassBoardBaseRelease"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v25->savePlayedClassBoardBaseReleaseKey, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_12660/*"SavePlayedExClassRelease"*/;
  v33 = ClassBoardUtility_TypeInfo->static_fields;
  v33->savePlayedExClassReleaseKey = (struct System_String_o *)StringLiteral_12660/*"SavePlayedExClassRelease"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v33->savePlayedExClassReleaseKey, v32, v34, v35, v36, v37, v38, v39);
}


void __fastcall ClassBoardUtility__FirstSavePlayedExClassReleaseEffect(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  ClassBoardUtility_c *v7; // x0
  bool HasKey; // w19
  bool v9; // w0
  __int64 v10; // x1
  __int64 v11; // x0
  const MethodInfo *v12; // x1
  System_Int32_array *v13; // x19
  ClassBoardUtility_c *v14; // x0

  if ( (byte_4B19755 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardUtility_TypeInfo, v1, v2);
    sub_1BCA7E0(&int___TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B19755 = 1;
  }
  v7 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v1);
    v7 = ClassBoardUtility_TypeInfo;
  }
  HasKey = UnityEngine_PlayerPrefs__HasKey(v7->static_fields->savePlayedClassBoardBaseReleaseKey, 0LL);
  v9 = UnityEngine_PlayerPrefs__HasKey(ClassBoardUtility_TypeInfo->static_fields->savePlayedExClassReleaseKey, 0LL);
  if ( v9 || !HasKey )
  {
    if ( !v9 )
    {
      v14 = ClassBoardUtility_TypeInfo;
      if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v10);
        v14 = ClassBoardUtility_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(
        v14->static_fields->savePlayedExClassReleaseKey,
        (System_String_o *)StringLiteral_1/*""*/,
        0LL);
    }
  }
  else
  {
    v11 = sub_1BCA888(int___TypeInfo, 1LL);
    if ( !v11 )
      sub_1BCAA3C(0LL, v12);
    v13 = (System_Int32_array *)v11;
    if ( !*(_DWORD *)(v11 + 24) )
      sub_1BCAA44(v11, v12);
    *(_DWORD *)(v11 + 32) = 10;
    if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v12);
    ClassBoardUtility__SavePlayedExClassReleaseEffect(v13, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassBoardUtility__GetClassBoardSkillIconName(
        int32_t iconId,
        int32_t skillType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  ClassBoardUtility_c *v7; // x0
  struct ClassBoardUtility_StaticFields *static_fields; // x8
  System_String_o *commandSpellIconFormat; // x20
  Il2CppObject *v10; // x19
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x0
  System_String_o *passiveSkillIconFormat; // x20
  Il2CppObject *v16; // x0
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF
  int32_t genderType; // [xsp+18h] [xbp-28h] BYREF
  int32_t v19; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4B19750 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardUtility_TypeInfo, *(_QWORD *)&skillType, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    byte_4B19750 = 1;
  }
  v7 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, *(_QWORD *)&skillType);
    v7 = ClassBoardUtility_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( skillType == 2 )
  {
    commandSpellIconFormat = static_fields->commandSpellIconFormat;
    v19 = iconId;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      sub_1BCAA3C(0LL, v12);
    genderType = SelfUserGame->fields.genderType;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &genderType);
    return System_String__Format_62415592(commandSpellIconFormat, v10, v13, 0LL);
  }
  else
  {
    passiveSkillIconFormat = static_fields->passiveSkillIconFormat;
    v17 = iconId;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    return System_String__Format(passiveSkillIconFormat, v16, 0LL);
  }
}


bool __fastcall ClassBoardUtility__IsPlayedExClassReleaseEffect(int32_t classId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x19
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v15; // x1
  ClassBoardUtility_c *v16; // x0
  System_String_o *String_70112520; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Func_object__bool__o *v23; // x21

  if ( (byte_4B19753 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_string____76880376, v5, v6);
    sub_1BCA7E0(&System_Func_string__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_ClassBoardUtility___c__DisplayClass8_0__IsPlayedExClassReleaseEffect_b__0__, v9, v10);
    sub_1BCA7E0(&ClassBoardUtility___c__DisplayClass8_0_TypeInfo, v11, v12);
    byte_4B19753 = 1;
  }
  v13 = sub_1BCAA2C(ClassBoardUtility___c__DisplayClass8_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_10;
  *(_DWORD *)(v13 + 16) = classId;
  v16 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v15);
    v16 = ClassBoardUtility_TypeInfo;
  }
  String_70112520 = UnityEngine_PlayerPrefs__GetString_70112520(v16->static_fields->savePlayedExClassReleaseKey, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String_70112520, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  if ( !String_70112520 )
LABEL_10:
    sub_1BCAA3C(IsNullOrEmpty, v15);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_70112520, 0x2Cu, 0, 0LL);
  v23 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_string__bool__TypeInfo, v20, v21, v22);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v13,
    Method_ClassBoardUtility___c__DisplayClass8_0__IsPlayedExClassReleaseEffect_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_object__49503160(
           v19,
           (System_Func_TSource__bool__o *)v23,
           (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_string____76880376) != 0LL;
}


bool __fastcall ClassBoardUtility__IsPlayedReleaseEffect(int32_t classBoardBaseId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x19
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v15; // x1
  ClassBoardUtility_c *v16; // x0
  System_String_o *String_70112520; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Func_object__bool__o *v23; // x21

  if ( (byte_4B19751 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_string____76880376, v5, v6);
    sub_1BCA7E0(&System_Func_string__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_ClassBoardUtility___c__DisplayClass6_0__IsPlayedReleaseEffect_b__0__, v9, v10);
    sub_1BCA7E0(&ClassBoardUtility___c__DisplayClass6_0_TypeInfo, v11, v12);
    byte_4B19751 = 1;
  }
  v13 = sub_1BCAA2C(ClassBoardUtility___c__DisplayClass6_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_10;
  *(_DWORD *)(v13 + 16) = classBoardBaseId;
  v16 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v15);
    v16 = ClassBoardUtility_TypeInfo;
  }
  String_70112520 = UnityEngine_PlayerPrefs__GetString_70112520(
                      v16->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String_70112520, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  if ( !String_70112520 )
LABEL_10:
    sub_1BCAA3C(IsNullOrEmpty, v15);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_70112520, 0x2Cu, 0, 0LL);
  v23 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_string__bool__TypeInfo, v20, v21, v22);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v13,
    Method_ClassBoardUtility___c__DisplayClass6_0__IsPlayedReleaseEffect_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_object__49503160(
           v19,
           (System_Func_TSource__bool__o *)v23,
           (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_string____76880376) != 0LL;
}


bool __fastcall ClassBoardUtility__IsTargetQuestClear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x19
  int64_t v13; // x20

  if ( (byte_4B1974F & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v3, v4);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B1974F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  v13 = (int64_t)Instance;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
  if ( !MasterData_object )
LABEL_10:
    sub_1BCAA3C(Instance, v10);
  return UserQuestMaster__getClearCountsFromId(
           (UserQuestMaster_o *)MasterData_object,
           v13,
           BalanceConfig_TypeInfo->static_fields->ClassBoardReleaseQuestId,
           0LL) > 0;
}


void __fastcall ClassBoardUtility__SavePlayedClassBaseReleaseEffect(
        System_Int32_array *classBaseIds,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  ClassBoardUtility_c *v26; // x0
  System_String_o *String_70112520; // x20
  System_Collections_Generic_List_TSource__o *IsNullOrEmpty; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Collections_Generic_List_int__o *v32; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x20
  ClassBoardUtility___c_c *v37; // x8
  System_Func_object__int__o *_9__7_0; // x21
  Il2CppObject *v39; // x22
  struct ClassBoardUtility___c_StaticFields *static_fields; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  __int64 v48; // x8
  unsigned __int64 v49; // x22
  int32_t v50; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  ClassBoardUtility_c *v54; // x0
  System_String_o *savePlayedClassBoardBaseReleaseKey; // x19
  System_String_o *v56; // x1

  if ( (byte_4B19752 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_string__int___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_int___, v6, v7);
    sub_1BCA7E0(&System_Func_string__int__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_String_Join_int___, v18, v19);
    sub_1BCA7E0(&Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__7_0__, v20, v21);
    sub_1BCA7E0(&ClassBoardUtility___c_TypeInfo, v22, v23);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v24, v25);
    byte_4B19752 = 1;
  }
  v26 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, method);
    v26 = ClassBoardUtility_TypeInfo;
  }
  String_70112520 = UnityEngine_PlayerPrefs__GetString_70112520(
                      v26->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0LL);
  IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_String__IsNullOrEmpty(String_70112520, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v32 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v29,
                                                      v30,
                                                      v31);
    System_Collections_Generic_List_int____ctor(
      v32,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  }
  else
  {
    if ( !String_70112520 )
      goto LABEL_29;
    v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_70112520, 0x2Cu, 0, 0LL);
    v37 = ClassBoardUtility___c_TypeInfo;
    if ( !ClassBoardUtility___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo, v33);
      v37 = ClassBoardUtility___c_TypeInfo;
    }
    _9__7_0 = (System_Func_object__int__o *)v37->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37, v33);
        v37 = ClassBoardUtility___c_TypeInfo;
      }
      v39 = (Il2CppObject *)v37->static_fields->__9;
      _9__7_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_string__int__TypeInfo, v33, v34, v35);
      System_Func_object__int____ctor(
        _9__7_0,
        v39,
        Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__7_0__,
        0LL);
      static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_string__int__o *)_9__7_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__7_0,
        (int64_t)_9__7_0,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
    }
    v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v36,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_string__int___);
    IsNullOrEmpty = System_Linq_Enumerable__ToList_int_(
                      v47,
                      (const MethodInfo_2F4F4F8 *)Method_System_Linq_Enumerable_ToList_int___);
    v32 = (System_Collections_Generic_List_int__o *)IsNullOrEmpty;
  }
  if ( !classBaseIds )
LABEL_29:
    sub_1BCAA3C(IsNullOrEmpty, v29);
  v48 = *(_QWORD *)&classBaseIds->max_length;
  if ( (int)v48 >= 1 )
  {
    v49 = 0LL;
    do
    {
      if ( v49 >= (unsigned int)v48 )
        sub_1BCAA44(IsNullOrEmpty, v29);
      if ( !v32 )
        goto LABEL_29;
      v50 = classBaseIds->m_Items[v49 + 1];
      IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                                      v32,
                                                                      v50,
                                                                      (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        items = v32->fields._items;
        v52 = Method_System_Collections_Generic_List_int__Add__;
        ++v32->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v32->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v32,
            v50,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v32->fields._size = size + 1;
          items->m_Items[size + 1] = v50;
        }
      }
      LODWORD(v48) = classBaseIds->max_length;
    }
    while ( (__int64)++v49 < (int)v48 );
  }
  v54 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v29);
    v54 = ClassBoardUtility_TypeInfo;
  }
  savePlayedClassBoardBaseReleaseKey = v54->static_fields->savePlayedClassBoardBaseReleaseKey;
  v56 = System_String__Join_int_(
          (System_String_o *)StringLiteral_863/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v32,
          (const MethodInfo_2FB5F54 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(savePlayedClassBoardBaseReleaseKey, v56, 0LL);
}


void __fastcall ClassBoardUtility__SavePlayedExClassReleaseEffect(
        System_Int32_array *classId,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  ClassBoardUtility_c *v26; // x0
  System_String_o *String_70112520; // x20
  System_Collections_Generic_List_TSource__o *IsNullOrEmpty; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Collections_Generic_List_int__o *v32; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x20
  ClassBoardUtility___c_c *v37; // x8
  System_Func_object__int__o *_9__9_0; // x21
  Il2CppObject *v39; // x22
  struct ClassBoardUtility___c_StaticFields *static_fields; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  __int64 v48; // x8
  unsigned __int64 v49; // x22
  int32_t v50; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  ClassBoardUtility_c *v54; // x0
  System_String_o *savePlayedExClassReleaseKey; // x19
  System_String_o *v56; // x1

  if ( (byte_4B19754 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_string__int___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_int___, v6, v7);
    sub_1BCA7E0(&System_Func_string__int__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_String_Join_int___, v18, v19);
    sub_1BCA7E0(&Method_ClassBoardUtility___c__SavePlayedExClassReleaseEffect_b__9_0__, v20, v21);
    sub_1BCA7E0(&ClassBoardUtility___c_TypeInfo, v22, v23);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v24, v25);
    byte_4B19754 = 1;
  }
  v26 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, method);
    v26 = ClassBoardUtility_TypeInfo;
  }
  String_70112520 = UnityEngine_PlayerPrefs__GetString_70112520(v26->static_fields->savePlayedExClassReleaseKey, 0LL);
  IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_String__IsNullOrEmpty(String_70112520, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v32 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v29,
                                                      v30,
                                                      v31);
    System_Collections_Generic_List_int____ctor(
      v32,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  }
  else
  {
    if ( !String_70112520 )
      goto LABEL_29;
    v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_70112520, 0x2Cu, 0, 0LL);
    v37 = ClassBoardUtility___c_TypeInfo;
    if ( !ClassBoardUtility___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo, v33);
      v37 = ClassBoardUtility___c_TypeInfo;
    }
    _9__9_0 = (System_Func_object__int__o *)v37->static_fields->__9__9_0;
    if ( !_9__9_0 )
    {
      if ( !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37, v33);
        v37 = ClassBoardUtility___c_TypeInfo;
      }
      v39 = (Il2CppObject *)v37->static_fields->__9;
      _9__9_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_string__int__TypeInfo, v33, v34, v35);
      System_Func_object__int____ctor(
        _9__9_0,
        v39,
        Method_ClassBoardUtility___c__SavePlayedExClassReleaseEffect_b__9_0__,
        0LL);
      static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      static_fields->__9__9_0 = (struct System_Func_string__int__o *)_9__9_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__9_0,
        (int64_t)_9__9_0,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
    }
    v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v36,
                                                                 (System_Func_TSource__TResult__o *)_9__9_0,
                                                                 (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_string__int___);
    IsNullOrEmpty = System_Linq_Enumerable__ToList_int_(
                      v47,
                      (const MethodInfo_2F4F4F8 *)Method_System_Linq_Enumerable_ToList_int___);
    v32 = (System_Collections_Generic_List_int__o *)IsNullOrEmpty;
  }
  if ( !classId )
LABEL_29:
    sub_1BCAA3C(IsNullOrEmpty, v29);
  v48 = *(_QWORD *)&classId->max_length;
  if ( (int)v48 >= 1 )
  {
    v49 = 0LL;
    do
    {
      if ( v49 >= (unsigned int)v48 )
        sub_1BCAA44(IsNullOrEmpty, v29);
      if ( !v32 )
        goto LABEL_29;
      v50 = classId->m_Items[v49 + 1];
      IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                                      v32,
                                                                      v50,
                                                                      (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        items = v32->fields._items;
        v52 = Method_System_Collections_Generic_List_int__Add__;
        ++v32->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v32->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v32,
            v50,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v32->fields._size = size + 1;
          items->m_Items[size + 1] = v50;
        }
      }
      LODWORD(v48) = classId->max_length;
    }
    while ( (__int64)++v49 < (int)v48 );
  }
  v54 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v29);
    v54 = ClassBoardUtility_TypeInfo;
  }
  savePlayedExClassReleaseKey = v54->static_fields->savePlayedExClassReleaseKey;
  v56 = System_String__Join_int_(
          (System_String_o *)StringLiteral_863/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v32,
          (const MethodInfo_2FB5F54 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(savePlayedExClassReleaseKey, v56, 0LL);
}


void __fastcall ClassBoardUtility___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19757 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardUtility___c_TypeInfo, v1, v2);
    byte_4B19757 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ClassBoardUtility___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ClassBoardUtility___c_TypeInfo->static_fields->__9 = (struct ClassBoardUtility___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ClassBoardUtility___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall ClassBoardUtility___c___ctor(ClassBoardUtility___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ClassBoardUtility___c___SavePlayedClassBaseReleaseEffect_b__7_0(
        ClassBoardUtility___c_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  return System_Int32__Parse(id, 0LL);
}


int32_t __fastcall ClassBoardUtility___c___SavePlayedExClassReleaseEffect_b__9_0(
        ClassBoardUtility___c_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  return System_Int32__Parse(id, 0LL);
}


void __fastcall ClassBoardUtility___c__DisplayClass6_0___ctor(
        ClassBoardUtility___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardUtility___c__DisplayClass6_0___IsPlayedReleaseEffect_b__0(
        ClassBoardUtility___c__DisplayClass6_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  int32_t classBoardBaseId; // w19

  classBoardBaseId = this->fields.classBoardBaseId;
  return classBoardBaseId == System_Int32__Parse(id, 0LL);
}


void __fastcall ClassBoardUtility___c__DisplayClass8_0___ctor(
        ClassBoardUtility___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardUtility___c__DisplayClass8_0___IsPlayedExClassReleaseEffect_b__0(
        ClassBoardUtility___c__DisplayClass8_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  int32_t classId; // w19

  classId = this->fields.classId;
  return classId == System_Int32__Parse(id, 0LL);
}