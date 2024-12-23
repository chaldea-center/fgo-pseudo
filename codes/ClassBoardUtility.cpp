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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t v12; // x1
  struct ClassBoardUtility_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x1
  struct ClassBoardUtility_StaticFields *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x1
  struct ClassBoardUtility_StaticFields *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4B6A1D3 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassBoardUtility_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_12696/*"SavePlayedClassBoardBaseRelease"*/, v8);
    sub_1BE4ACC(&StringLiteral_12697/*"SavePlayedExClassRelease"*/, v9);
    sub_1BE4ACC(&StringLiteral_23686/*"skill_{0:D5}"*/, v10);
    sub_1BE4ACC(&StringLiteral_18625/*"cs_{0:D4}{1}"*/, v11);
    byte_4B6A1D3 = 1;
  }
  ClassBoardUtility_TypeInfo->static_fields->commandSpellIconFormat = (struct System_String_o *)StringLiteral_18625/*"cs_{0:D4}{1}"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)ClassBoardUtility_TypeInfo->static_fields,
    StringLiteral_18625/*"cs_{0:D4}{1}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_23686/*"skill_{0:D5}"*/;
  static_fields = ClassBoardUtility_TypeInfo->static_fields;
  static_fields->passiveSkillIconFormat = (struct System_String_o *)StringLiteral_23686/*"skill_{0:D5}"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->passiveSkillIconFormat, v12, v14, v15, v16, v17, v18, v19);
  v20 = StringLiteral_12696/*"SavePlayedClassBoardBaseRelease"*/;
  v21 = ClassBoardUtility_TypeInfo->static_fields;
  v21->savePlayedClassBoardBaseReleaseKey = (struct System_String_o *)StringLiteral_12696/*"SavePlayedClassBoardBaseRelease"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v21->savePlayedClassBoardBaseReleaseKey, v20, v22, v23, v24, v25, v26, v27);
  v28 = StringLiteral_12697/*"SavePlayedExClassRelease"*/;
  v29 = ClassBoardUtility_TypeInfo->static_fields;
  v29->savePlayedExClassReleaseKey = (struct System_String_o *)StringLiteral_12697/*"SavePlayedExClassRelease"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v29->savePlayedExClassReleaseKey, v28, v30, v31, v32, v33, v34, v35);
}


void __fastcall ClassBoardUtility__FirstSavePlayedExClassReleaseEffect(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ClassBoardUtility_c *v4; // x0
  bool HasKey; // w19
  bool v6; // w0
  __int64 v7; // x0
  const MethodInfo *v8; // x1
  System_Int32_array *v9; // x19
  ClassBoardUtility_c *v10; // x0

  if ( (byte_4B6A1D2 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassBoardUtility_TypeInfo, v1);
    sub_1BE4ACC(&int___TypeInfo, v2);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v3);
    byte_4B6A1D2 = 1;
  }
  v4 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v4 = ClassBoardUtility_TypeInfo;
  }
  HasKey = UnityEngine_PlayerPrefs__HasKey(v4->static_fields->savePlayedClassBoardBaseReleaseKey, 0LL);
  v6 = UnityEngine_PlayerPrefs__HasKey(ClassBoardUtility_TypeInfo->static_fields->savePlayedExClassReleaseKey, 0LL);
  if ( v6 || !HasKey )
  {
    if ( !v6 )
    {
      v10 = ClassBoardUtility_TypeInfo;
      if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
        v10 = ClassBoardUtility_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(
        v10->static_fields->savePlayedExClassReleaseKey,
        (System_String_o *)StringLiteral_1/*""*/,
        0LL);
    }
  }
  else
  {
    v7 = sub_1BE4B74(int___TypeInfo, 1LL);
    if ( !v7 )
      sub_1BE4D28(0LL, v8);
    v9 = (System_Int32_array *)v7;
    if ( !*(_DWORD *)(v7 + 24) )
      sub_1BE4D30(v7, v8);
    *(_DWORD *)(v7 + 32) = 10;
    if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    ClassBoardUtility__SavePlayedExClassReleaseEffect(v9, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassBoardUtility__GetClassBoardSkillIconName(
        int32_t iconId,
        int32_t skillType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  ClassBoardUtility_c *v8; // x0
  struct ClassBoardUtility_StaticFields *static_fields; // x8
  System_String_o *commandSpellIconFormat; // x20
  Il2CppObject *v11; // x19
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  System_String_o *passiveSkillIconFormat; // x20
  Il2CppObject *v20; // x0
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF
  int32_t genderType; // [xsp+18h] [xbp-28h] BYREF
  int32_t v23; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4B6A1CD & 1) == 0 )
  {
    sub_1BE4ACC(&ClassBoardUtility_TypeInfo, *(_QWORD *)&skillType);
    sub_1BE4ACC(&int_TypeInfo, v7);
    byte_4B6A1CD = 1;
  }
  v8 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v8 = ClassBoardUtility_TypeInfo;
  }
  static_fields = v8->static_fields;
  if ( skillType == 2 )
  {
    commandSpellIconFormat = static_fields->commandSpellIconFormat;
    v23 = iconId;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, method, v3, v4);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      sub_1BE4D28(0LL, v13);
    genderType = SelfUserGame->fields.genderType;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &genderType, v14, v15, v16);
    return System_String__Format_62713180(commandSpellIconFormat, v11, v17, 0LL);
  }
  else
  {
    passiveSkillIconFormat = static_fields->passiveSkillIconFormat;
    v21 = iconId;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, method, v3, v4);
    return System_String__Format(passiveSkillIconFormat, v20, 0LL);
  }
}


bool __fastcall ClassBoardUtility__IsPlayedExClassReleaseEffect(int32_t classId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x19
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v9; // x1
  ClassBoardUtility_c *v10; // x0
  System_String_o *String_70410276; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  System_Func_object__bool__o *v14; // x21

  if ( (byte_4B6A1D0 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassBoardUtility_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_FirstOrDefault_string____77202408, v3);
    sub_1BE4ACC(&System_Func_string__bool__TypeInfo, v4);
    sub_1BE4ACC(&Method_ClassBoardUtility___c__DisplayClass8_0__IsPlayedExClassReleaseEffect_b__0__, v5);
    sub_1BE4ACC(&ClassBoardUtility___c__DisplayClass8_0_TypeInfo, v6);
    byte_4B6A1D0 = 1;
  }
  v7 = sub_1BE4D18(ClassBoardUtility___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_10;
  *(_DWORD *)(v7 + 16) = classId;
  v10 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v10 = ClassBoardUtility_TypeInfo;
  }
  String_70410276 = UnityEngine_PlayerPrefs__GetString_70410276(v10->static_fields->savePlayedExClassReleaseKey, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String_70410276, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  if ( !String_70410276 )
LABEL_10:
    sub_1BE4D28(IsNullOrEmpty, v9);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_70410276, 0x2Cu, 0, 0LL);
  v14 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_ClassBoardUtility___c__DisplayClass8_0__IsPlayedExClassReleaseEffect_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_object__49793520(
           v13,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_2F7C9F0 *)Method_System_Linq_Enumerable_FirstOrDefault_string____77202408) != 0LL;
}


bool __fastcall ClassBoardUtility__IsPlayedReleaseEffect(int32_t classBoardBaseId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x19
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v9; // x1
  ClassBoardUtility_c *v10; // x0
  System_String_o *String_70410276; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  System_Func_object__bool__o *v14; // x21

  if ( (byte_4B6A1CE & 1) == 0 )
  {
    sub_1BE4ACC(&ClassBoardUtility_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_FirstOrDefault_string____77202408, v3);
    sub_1BE4ACC(&System_Func_string__bool__TypeInfo, v4);
    sub_1BE4ACC(&Method_ClassBoardUtility___c__DisplayClass6_0__IsPlayedReleaseEffect_b__0__, v5);
    sub_1BE4ACC(&ClassBoardUtility___c__DisplayClass6_0_TypeInfo, v6);
    byte_4B6A1CE = 1;
  }
  v7 = sub_1BE4D18(ClassBoardUtility___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_10;
  *(_DWORD *)(v7 + 16) = classBoardBaseId;
  v10 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v10 = ClassBoardUtility_TypeInfo;
  }
  String_70410276 = UnityEngine_PlayerPrefs__GetString_70410276(
                      v10->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String_70410276, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  if ( !String_70410276 )
LABEL_10:
    sub_1BE4D28(IsNullOrEmpty, v9);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_70410276, 0x2Cu, 0, 0LL);
  v14 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_ClassBoardUtility___c__DisplayClass6_0__IsPlayedReleaseEffect_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_object__49793520(
           v13,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_2F7C9F0 *)Method_System_Linq_Enumerable_FirstOrDefault_string____77202408) != 0LL;
}


bool __fastcall ClassBoardUtility__IsTargetQuestClear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x19
  int64_t v8; // x20

  if ( (byte_4B6A1CC & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, v1);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserQuestMaster___, v2);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B6A1CC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v6);
    byte_4B61717 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  v8 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !MasterData_object )
LABEL_14:
    sub_1BE4D28(Instance, v6);
  return UserQuestMaster__getClearCountsFromId(
           (UserQuestMaster_o *)MasterData_object,
           v8,
           BalanceConfig_TypeInfo->static_fields->ClassBoardReleaseQuestId,
           0LL) > 0;
}


void __fastcall ClassBoardUtility__SavePlayedClassBaseReleaseEffect(
        System_Int32_array *classBaseIds,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  ClassBoardUtility_c *v14; // x0
  System_String_o *String_70410276; // x20
  System_Collections_Generic_List_TSource__o *IsNullOrEmpty; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_int__o *v18; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  ClassBoardUtility___c_c *v20; // x8
  System_Func_object__int__o *_9__7_0; // x21
  Il2CppObject *v22; // x22
  struct ClassBoardUtility___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  __int64 v31; // x8
  unsigned __int64 v32; // x22
  int32_t v33; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  ClassBoardUtility_c *v37; // x0
  System_String_o *savePlayedClassBoardBaseReleaseKey; // x19
  System_String_o *v39; // x1

  if ( (byte_4B6A1CF & 1) == 0 )
  {
    sub_1BE4ACC(&ClassBoardUtility_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_string__int___, v3);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_int___, v4);
    sub_1BE4ACC(&System_Func_string__int__TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1BE4ACC(&Method_System_String_Join_int___, v10);
    sub_1BE4ACC(&Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__7_0__, v11);
    sub_1BE4ACC(&ClassBoardUtility___c_TypeInfo, v12);
    sub_1BE4ACC(&StringLiteral_863/*","*/, v13);
    byte_4B6A1CF = 1;
  }
  v14 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v14 = ClassBoardUtility_TypeInfo;
  }
  String_70410276 = UnityEngine_PlayerPrefs__GetString_70410276(
                      v14->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0LL);
  IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_String__IsNullOrEmpty(String_70410276, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v18 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v18,
      (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  }
  else
  {
    if ( !String_70410276 )
      goto LABEL_29;
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_70410276, 0x2Cu, 0, 0LL);
    v20 = ClassBoardUtility___c_TypeInfo;
    if ( !ClassBoardUtility___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo);
      v20 = ClassBoardUtility___c_TypeInfo;
    }
    _9__7_0 = (System_Func_object__int__o *)v20->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = ClassBoardUtility___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v20->static_fields->__9;
      _9__7_0 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__7_0,
        v22,
        Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__7_0__,
        0LL);
      static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_string__int__o *)_9__7_0;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&static_fields->__9__7_0,
        (int64_t)_9__7_0,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
    }
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v19,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_2F89FCC *)Method_System_Linq_Enumerable_Select_string__int___);
    IsNullOrEmpty = System_Linq_Enumerable__ToList_int_(
                      v30,
                      (const MethodInfo_2F965C4 *)Method_System_Linq_Enumerable_ToList_int___);
    v18 = (System_Collections_Generic_List_int__o *)IsNullOrEmpty;
  }
  if ( !classBaseIds )
LABEL_29:
    sub_1BE4D28(IsNullOrEmpty, v17);
  v31 = *(_QWORD *)&classBaseIds->max_length;
  if ( (int)v31 >= 1 )
  {
    v32 = 0LL;
    do
    {
      if ( v32 >= (unsigned int)v31 )
        sub_1BE4D30(IsNullOrEmpty, v17);
      if ( !v18 )
        goto LABEL_29;
      v33 = classBaseIds->m_Items[v32 + 1];
      IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                                      v18,
                                                                      v33,
                                                                      (const MethodInfo_35CF578 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        items = v18->fields._items;
        v35 = Method_System_Collections_Generic_List_int__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v18,
            v33,
            *(const MethodInfo_35CF200 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v18->fields._size = size + 1;
          items->m_Items[size + 1] = v33;
        }
      }
      LODWORD(v31) = classBaseIds->max_length;
    }
    while ( (__int64)++v32 < (int)v31 );
  }
  v37 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v37 = ClassBoardUtility_TypeInfo;
  }
  savePlayedClassBoardBaseReleaseKey = v37->static_fields->savePlayedClassBoardBaseReleaseKey;
  v39 = System_String__Join_int_(
          (System_String_o *)StringLiteral_863/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v18,
          (const MethodInfo_2FFD19C *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(savePlayedClassBoardBaseReleaseKey, v39, 0LL);
}


void __fastcall ClassBoardUtility__SavePlayedExClassReleaseEffect(
        System_Int32_array *classId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  ClassBoardUtility_c *v14; // x0
  System_String_o *String_70410276; // x20
  System_Collections_Generic_List_TSource__o *IsNullOrEmpty; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_int__o *v18; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  ClassBoardUtility___c_c *v20; // x8
  System_Func_object__int__o *_9__9_0; // x21
  Il2CppObject *v22; // x22
  struct ClassBoardUtility___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  __int64 v31; // x8
  unsigned __int64 v32; // x22
  int32_t v33; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  ClassBoardUtility_c *v37; // x0
  System_String_o *savePlayedExClassReleaseKey; // x19
  System_String_o *v39; // x1

  if ( (byte_4B6A1D1 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassBoardUtility_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_string__int___, v3);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_int___, v4);
    sub_1BE4ACC(&System_Func_string__int__TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1BE4ACC(&Method_System_String_Join_int___, v10);
    sub_1BE4ACC(&Method_ClassBoardUtility___c__SavePlayedExClassReleaseEffect_b__9_0__, v11);
    sub_1BE4ACC(&ClassBoardUtility___c_TypeInfo, v12);
    sub_1BE4ACC(&StringLiteral_863/*","*/, v13);
    byte_4B6A1D1 = 1;
  }
  v14 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v14 = ClassBoardUtility_TypeInfo;
  }
  String_70410276 = UnityEngine_PlayerPrefs__GetString_70410276(v14->static_fields->savePlayedExClassReleaseKey, 0LL);
  IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_String__IsNullOrEmpty(String_70410276, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v18 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v18,
      (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  }
  else
  {
    if ( !String_70410276 )
      goto LABEL_29;
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_70410276, 0x2Cu, 0, 0LL);
    v20 = ClassBoardUtility___c_TypeInfo;
    if ( !ClassBoardUtility___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo);
      v20 = ClassBoardUtility___c_TypeInfo;
    }
    _9__9_0 = (System_Func_object__int__o *)v20->static_fields->__9__9_0;
    if ( !_9__9_0 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = ClassBoardUtility___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v20->static_fields->__9;
      _9__9_0 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__9_0,
        v22,
        Method_ClassBoardUtility___c__SavePlayedExClassReleaseEffect_b__9_0__,
        0LL);
      static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      static_fields->__9__9_0 = (struct System_Func_string__int__o *)_9__9_0;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&static_fields->__9__9_0,
        (int64_t)_9__9_0,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
    }
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v19,
                                                                 (System_Func_TSource__TResult__o *)_9__9_0,
                                                                 (const MethodInfo_2F89FCC *)Method_System_Linq_Enumerable_Select_string__int___);
    IsNullOrEmpty = System_Linq_Enumerable__ToList_int_(
                      v30,
                      (const MethodInfo_2F965C4 *)Method_System_Linq_Enumerable_ToList_int___);
    v18 = (System_Collections_Generic_List_int__o *)IsNullOrEmpty;
  }
  if ( !classId )
LABEL_29:
    sub_1BE4D28(IsNullOrEmpty, v17);
  v31 = *(_QWORD *)&classId->max_length;
  if ( (int)v31 >= 1 )
  {
    v32 = 0LL;
    do
    {
      if ( v32 >= (unsigned int)v31 )
        sub_1BE4D30(IsNullOrEmpty, v17);
      if ( !v18 )
        goto LABEL_29;
      v33 = classId->m_Items[v32 + 1];
      IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                                      v18,
                                                                      v33,
                                                                      (const MethodInfo_35CF578 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        items = v18->fields._items;
        v35 = Method_System_Collections_Generic_List_int__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v18,
            v33,
            *(const MethodInfo_35CF200 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v18->fields._size = size + 1;
          items->m_Items[size + 1] = v33;
        }
      }
      LODWORD(v31) = classId->max_length;
    }
    while ( (__int64)++v32 < (int)v31 );
  }
  v37 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v37 = ClassBoardUtility_TypeInfo;
  }
  savePlayedExClassReleaseKey = v37->static_fields->savePlayedExClassReleaseKey;
  v39 = System_String__Join_int_(
          (System_String_o *)StringLiteral_863/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v18,
          (const MethodInfo_2FFD19C *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(savePlayedExClassReleaseKey, v39, 0LL);
}


void __fastcall ClassBoardUtility___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B6A1D4 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassBoardUtility___c_TypeInfo, v1);
    byte_4B6A1D4 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(ClassBoardUtility___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardUtility___c_TypeInfo->static_fields->__9 = (struct ClassBoardUtility___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)ClassBoardUtility___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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