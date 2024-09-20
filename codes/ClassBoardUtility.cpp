void __fastcall ClassBoardUtility___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct ClassBoardUtility_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct ClassBoardUtility_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct ClassBoardUtility_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5E628 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardUtility_TypeInfo);
    sub_1B885B0(&StringLiteral_12503/*"SavePlayedClassBoardBaseRelease"*/);
    sub_1B885B0(&StringLiteral_12504/*"SavePlayedExClassRelease"*/);
    sub_1B885B0(&StringLiteral_23351/*"skill_{0:D5}"*/);
    sub_1B885B0(&StringLiteral_18386/*"cs_{0:D4}{1}"*/);
    byte_4A5E628 = 1;
  }
  ClassBoardUtility_TypeInfo->static_fields->commandSpellIconFormat = (struct System_String_o *)StringLiteral_18386/*"cs_{0:D4}{1}"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ClassBoardUtility_TypeInfo->static_fields,
    StringLiteral_18386/*"cs_{0:D4}{1}"*/,
    v1,
    v2);
  v3 = StringLiteral_23351/*"skill_{0:D5}"*/;
  static_fields = ClassBoardUtility_TypeInfo->static_fields;
  static_fields->passiveSkillIconFormat = (struct System_String_o *)StringLiteral_23351/*"skill_{0:D5}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->passiveSkillIconFormat, v3, v5, v6);
  v7 = StringLiteral_12503/*"SavePlayedClassBoardBaseRelease"*/;
  v8 = ClassBoardUtility_TypeInfo->static_fields;
  v8->savePlayedClassBoardBaseReleaseKey = (struct System_String_o *)StringLiteral_12503/*"SavePlayedClassBoardBaseRelease"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->savePlayedClassBoardBaseReleaseKey, v7, v9, v10);
  v11 = StringLiteral_12504/*"SavePlayedExClassRelease"*/;
  v12 = ClassBoardUtility_TypeInfo->static_fields;
  v12->savePlayedExClassReleaseKey = (struct System_String_o *)StringLiteral_12504/*"SavePlayedExClassRelease"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->savePlayedExClassReleaseKey, v11, v13, v14);
}


void __fastcall ClassBoardUtility__FirstSavePlayedExClassReleaseEffect(const MethodInfo *method)
{
  ClassBoardUtility_c *v1; // x0
  bool HasKey; // w19
  bool v3; // w0
  __int64 v4; // x0
  const MethodInfo *v5; // x1
  System_Int32_array *v6; // x19
  ClassBoardUtility_c *v7; // x0

  if ( (byte_4A5E627 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardUtility_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E627 = 1;
  }
  v1 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v1 = ClassBoardUtility_TypeInfo;
  }
  HasKey = UnityEngine_PlayerPrefs__HasKey(v1->static_fields->savePlayedClassBoardBaseReleaseKey, 0LL);
  v3 = UnityEngine_PlayerPrefs__HasKey(ClassBoardUtility_TypeInfo->static_fields->savePlayedExClassReleaseKey, 0LL);
  if ( v3 || !HasKey )
  {
    if ( !v3 )
    {
      v7 = ClassBoardUtility_TypeInfo;
      if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
        v7 = ClassBoardUtility_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(
        v7->static_fields->savePlayedExClassReleaseKey,
        (System_String_o *)StringLiteral_1/*""*/,
        0LL);
    }
  }
  else
  {
    v4 = sub_1B88658(int___TypeInfo, 1LL);
    if ( !v4 )
      sub_1B8880C(0LL, v5);
    v6 = (System_Int32_array *)v4;
    if ( !*(_DWORD *)(v4 + 24) )
      sub_1B88814(v4, v5);
    *(_DWORD *)(v4 + 32) = 10;
    if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    ClassBoardUtility__SavePlayedExClassReleaseEffect(v6, v5);
  }
}


System_String_o *__fastcall ClassBoardUtility__GetClassBoardSkillIconName(
        int32_t iconId,
        int32_t skillType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  ClassBoardUtility_c *v7; // x0
  struct ClassBoardUtility_StaticFields *static_fields; // x8
  System_String_o *commandSpellIconFormat; // x20
  Il2CppObject *v10; // x19
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *passiveSkillIconFormat; // x20
  Il2CppObject *v19; // x0
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF
  int32_t genderType; // [xsp+18h] [xbp-28h] BYREF
  int32_t v22; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4A5E622 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardUtility_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    byte_4A5E622 = 1;
  }
  v7 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v7 = ClassBoardUtility_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( skillType == 2 )
  {
    commandSpellIconFormat = static_fields->commandSpellIconFormat;
    v22 = iconId;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, method, v3, v4);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      sub_1B8880C(0LL, v12);
    genderType = SelfUserGame->fields.genderType;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &genderType, v13, v14, v15);
    return System_String__Format_61721404(commandSpellIconFormat, v10, v16, 0LL);
  }
  else
  {
    passiveSkillIconFormat = static_fields->passiveSkillIconFormat;
    v20 = iconId;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, method, v3, v4);
    return System_String__Format(passiveSkillIconFormat, v19, 0LL);
  }
}


bool __fastcall ClassBoardUtility__IsPlayedExClassReleaseEffect(int32_t classId, const MethodInfo *method)
{
  __int64 v3; // x19
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v5; // x1
  ClassBoardUtility_c *v6; // x0
  System_String_o *String_69417656; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  System_Func_object__bool__o *v10; // x21

  if ( (byte_4A5E625 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardUtility_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_string____76128680);
    sub_1B885B0(&System_Func_string__bool__TypeInfo);
    sub_1B885B0(&Method_ClassBoardUtility___c__DisplayClass8_0__IsPlayedExClassReleaseEffect_b__0__);
    sub_1B885B0(&ClassBoardUtility___c__DisplayClass8_0_TypeInfo);
    byte_4A5E625 = 1;
  }
  v3 = sub_1B887FC(ClassBoardUtility___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_10;
  *(_DWORD *)(v3 + 16) = classId;
  v6 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v6 = ClassBoardUtility_TypeInfo;
  }
  String_69417656 = UnityEngine_PlayerPrefs__GetString_69417656(v6->static_fields->savePlayedExClassReleaseKey, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String_69417656, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  if ( !String_69417656 )
LABEL_10:
    sub_1B8880C(IsNullOrEmpty, v5);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_69417656, 0x2Cu, 0, 0LL);
  v10 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v3,
    Method_ClassBoardUtility___c__DisplayClass8_0__IsPlayedExClassReleaseEffect_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_object__48907856(
           v9,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_string____76128680) != 0LL;
}


bool __fastcall ClassBoardUtility__IsPlayedReleaseEffect(int32_t classBoardBaseId, const MethodInfo *method)
{
  __int64 v3; // x19
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v5; // x1
  ClassBoardUtility_c *v6; // x0
  System_String_o *String_69417656; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  System_Func_object__bool__o *v10; // x21

  if ( (byte_4A5E623 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardUtility_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_string____76128680);
    sub_1B885B0(&System_Func_string__bool__TypeInfo);
    sub_1B885B0(&Method_ClassBoardUtility___c__DisplayClass6_0__IsPlayedReleaseEffect_b__0__);
    sub_1B885B0(&ClassBoardUtility___c__DisplayClass6_0_TypeInfo);
    byte_4A5E623 = 1;
  }
  v3 = sub_1B887FC(ClassBoardUtility___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_10;
  *(_DWORD *)(v3 + 16) = classBoardBaseId;
  v6 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v6 = ClassBoardUtility_TypeInfo;
  }
  String_69417656 = UnityEngine_PlayerPrefs__GetString_69417656(
                      v6->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String_69417656, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  if ( !String_69417656 )
LABEL_10:
    sub_1B8880C(IsNullOrEmpty, v5);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_69417656, 0x2Cu, 0, 0LL);
  v10 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v3,
    Method_ClassBoardUtility___c__DisplayClass6_0__IsPlayedReleaseEffect_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_object__48907856(
           v9,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_string____76128680) != 0LL;
}


bool __fastcall ClassBoardUtility__IsTargetQuestClear(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  Il2CppObject *MasterData_object; // x19
  int64_t v4; // x20

  if ( (byte_4A5E621 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E621 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  v4 = (int64_t)Instance;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !MasterData_object )
LABEL_10:
    sub_1B8880C(Instance, v2);
  return UserQuestMaster__getClearCountsFromId(
           (UserQuestMaster_o *)MasterData_object,
           v4,
           BalanceConfig_TypeInfo->static_fields->ClassBoardReleaseQuestId,
           0LL) > 0;
}


void __fastcall ClassBoardUtility__SavePlayedClassBaseReleaseEffect(
        System_Int32_array *classBaseIds,
        const MethodInfo *method)
{
  ClassBoardUtility_c *v3; // x0
  System_String_o *String_69417656; // x20
  System_Collections_Generic_List_TSource__o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  ClassBoardUtility___c_c *v9; // x8
  System_Func_object__int__o *_9__7_0; // x21
  Il2CppObject *v11; // x22
  struct ClassBoardUtility___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  __int64 v16; // x8
  unsigned __int64 v17; // x22
  int32_t v18; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  ClassBoardUtility_c *v22; // x0
  System_String_o *savePlayedClassBoardBaseReleaseKey; // x19
  System_String_o *v24; // x1

  if ( (byte_4A5E624 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardUtility_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1B885B0(&System_Func_string__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_System_String_Join_int___);
    sub_1B885B0(&Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__7_0__);
    sub_1B885B0(&ClassBoardUtility___c_TypeInfo);
    sub_1B885B0(&StringLiteral_868/*","*/);
    byte_4A5E624 = 1;
  }
  v3 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v3 = ClassBoardUtility_TypeInfo;
  }
  String_69417656 = UnityEngine_PlayerPrefs__GetString_69417656(
                      v3->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0LL);
  IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_String__IsNullOrEmpty(String_69417656, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v7 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  }
  else
  {
    if ( !String_69417656 )
      goto LABEL_29;
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_69417656, 0x2Cu, 0, 0LL);
    v9 = ClassBoardUtility___c_TypeInfo;
    if ( !ClassBoardUtility___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo);
      v9 = ClassBoardUtility___c_TypeInfo;
    }
    _9__7_0 = (System_Func_object__int__o *)v9->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = ClassBoardUtility___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v9->static_fields->__9;
      _9__7_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__7_0,
        v11,
        Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__7_0__,
        0LL);
      static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_string__int__o *)_9__7_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v13, v14);
    }
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v8,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_string__int___);
    IsNullOrEmpty = System_Linq_Enumerable__ToList_int_(
                      v15,
                      (const MethodInfo_2EBBD90 *)Method_System_Linq_Enumerable_ToList_int___);
    v7 = (System_Collections_Generic_List_int__o *)IsNullOrEmpty;
  }
  if ( !classBaseIds )
LABEL_29:
    sub_1B8880C(IsNullOrEmpty, v6);
  v16 = *(_QWORD *)&classBaseIds->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    do
    {
      if ( v17 >= (unsigned int)v16 )
        sub_1B88814(IsNullOrEmpty, v6);
      if ( !v7 )
        goto LABEL_29;
      v18 = classBaseIds->m_Items[v17 + 1];
      IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                                      v7,
                                                                      v18,
                                                                      (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        items = v7->fields._items;
        v20 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            v18,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size + 1] = v18;
        }
      }
      LODWORD(v16) = classBaseIds->max_length;
    }
    while ( (__int64)++v17 < (int)v16 );
  }
  v22 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v22 = ClassBoardUtility_TypeInfo;
  }
  savePlayedClassBoardBaseReleaseKey = v22->static_fields->savePlayedClassBoardBaseReleaseKey;
  v24 = System_String__Join_int_(
          (System_String_o *)StringLiteral_868/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v7,
          (const MethodInfo_2F21A08 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(savePlayedClassBoardBaseReleaseKey, v24, 0LL);
}


void __fastcall ClassBoardUtility__SavePlayedExClassReleaseEffect(
        System_Int32_array *classId,
        const MethodInfo *method)
{
  ClassBoardUtility_c *v3; // x0
  System_String_o *String_69417656; // x20
  System_Collections_Generic_List_TSource__o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  ClassBoardUtility___c_c *v9; // x8
  System_Func_object__int__o *_9__9_0; // x21
  Il2CppObject *v11; // x22
  struct ClassBoardUtility___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  __int64 v16; // x8
  unsigned __int64 v17; // x22
  int32_t v18; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  ClassBoardUtility_c *v22; // x0
  System_String_o *savePlayedExClassReleaseKey; // x19
  System_String_o *v24; // x1

  if ( (byte_4A5E626 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardUtility_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1B885B0(&System_Func_string__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_System_String_Join_int___);
    sub_1B885B0(&Method_ClassBoardUtility___c__SavePlayedExClassReleaseEffect_b__9_0__);
    sub_1B885B0(&ClassBoardUtility___c_TypeInfo);
    sub_1B885B0(&StringLiteral_868/*","*/);
    byte_4A5E626 = 1;
  }
  v3 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v3 = ClassBoardUtility_TypeInfo;
  }
  String_69417656 = UnityEngine_PlayerPrefs__GetString_69417656(v3->static_fields->savePlayedExClassReleaseKey, 0LL);
  IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_String__IsNullOrEmpty(String_69417656, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v7 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  }
  else
  {
    if ( !String_69417656 )
      goto LABEL_29;
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_69417656, 0x2Cu, 0, 0LL);
    v9 = ClassBoardUtility___c_TypeInfo;
    if ( !ClassBoardUtility___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo);
      v9 = ClassBoardUtility___c_TypeInfo;
    }
    _9__9_0 = (System_Func_object__int__o *)v9->static_fields->__9__9_0;
    if ( !_9__9_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = ClassBoardUtility___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v9->static_fields->__9;
      _9__9_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__9_0,
        v11,
        Method_ClassBoardUtility___c__SavePlayedExClassReleaseEffect_b__9_0__,
        0LL);
      static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      static_fields->__9__9_0 = (struct System_Func_string__int__o *)_9__9_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v13, v14);
    }
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v8,
                                                                 (System_Func_TSource__TResult__o *)_9__9_0,
                                                                 (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_string__int___);
    IsNullOrEmpty = System_Linq_Enumerable__ToList_int_(
                      v15,
                      (const MethodInfo_2EBBD90 *)Method_System_Linq_Enumerable_ToList_int___);
    v7 = (System_Collections_Generic_List_int__o *)IsNullOrEmpty;
  }
  if ( !classId )
LABEL_29:
    sub_1B8880C(IsNullOrEmpty, v6);
  v16 = *(_QWORD *)&classId->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    do
    {
      if ( v17 >= (unsigned int)v16 )
        sub_1B88814(IsNullOrEmpty, v6);
      if ( !v7 )
        goto LABEL_29;
      v18 = classId->m_Items[v17 + 1];
      IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                                      v7,
                                                                      v18,
                                                                      (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        items = v7->fields._items;
        v20 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            v18,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size + 1] = v18;
        }
      }
      LODWORD(v16) = classId->max_length;
    }
    while ( (__int64)++v17 < (int)v16 );
  }
  v22 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v22 = ClassBoardUtility_TypeInfo;
  }
  savePlayedExClassReleaseKey = v22->static_fields->savePlayedExClassReleaseKey;
  v24 = System_String__Join_int_(
          (System_String_o *)StringLiteral_868/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v7,
          (const MethodInfo_2F21A08 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(savePlayedExClassReleaseKey, v24, 0LL);
}


void __fastcall ClassBoardUtility___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E629 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardUtility___c_TypeInfo);
    byte_4A5E629 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ClassBoardUtility___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ClassBoardUtility___c_TypeInfo->static_fields->__9 = (struct ClassBoardUtility___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)ClassBoardUtility___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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