void __fastcall ClassBoardUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w1
  struct ClassBoardUtility_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  struct ClassBoardUtility_StaticFields *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  struct ClassBoardUtility_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49FF841 & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardUtility_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_12448/*"SavePlayedClassBoardBaseRelease"*/, v4);
    sub_1B640C8(&StringLiteral_12449/*"SavePlayedExClassRelease"*/, v5);
    sub_1B640C8(&StringLiteral_23253/*"skill_{0:D5}"*/, v6);
    sub_1B640C8(&StringLiteral_18315/*"cs_{0:D4}{1}"*/, v7);
    byte_49FF841 = 1;
  }
  ClassBoardUtility_TypeInfo->static_fields->commandSpellIconFormat = (struct System_String_o *)StringLiteral_18315/*"cs_{0:D4}{1}"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ClassBoardUtility_TypeInfo->static_fields,
    StringLiteral_18315/*"cs_{0:D4}{1}"*/,
    v2,
    v3);
  v8 = StringLiteral_23253/*"skill_{0:D5}"*/;
  static_fields = ClassBoardUtility_TypeInfo->static_fields;
  static_fields->passiveSkillIconFormat = (struct System_String_o *)StringLiteral_23253/*"skill_{0:D5}"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->passiveSkillIconFormat, v8, v10, v11);
  v12 = StringLiteral_12448/*"SavePlayedClassBoardBaseRelease"*/;
  v13 = ClassBoardUtility_TypeInfo->static_fields;
  v13->savePlayedClassBoardBaseReleaseKey = (struct System_String_o *)StringLiteral_12448/*"SavePlayedClassBoardBaseRelease"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v13->savePlayedClassBoardBaseReleaseKey, v12, v14, v15);
  v16 = StringLiteral_12449/*"SavePlayedExClassRelease"*/;
  v17 = ClassBoardUtility_TypeInfo->static_fields;
  v17->savePlayedExClassReleaseKey = (struct System_String_o *)StringLiteral_12449/*"SavePlayedExClassRelease"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->savePlayedExClassReleaseKey, v16, v18, v19);
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

  if ( (byte_49FF840 & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardUtility_TypeInfo, v1);
    sub_1B640C8(&int___TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49FF840 = 1;
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
    v7 = sub_1B64170(int___TypeInfo, 1LL);
    if ( !v7 )
      sub_1B64324(0LL);
    v9 = (System_Int32_array *)v7;
    if ( !*(_DWORD *)(v7 + 24) )
      sub_1B6432C(v7, v8);
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
  __int64 v5; // x1
  ClassBoardUtility_c *v6; // x0
  struct ClassBoardUtility_StaticFields *static_fields; // x8
  System_String_o *commandSpellIconFormat; // x20
  Il2CppObject *v9; // x19
  UserGameEntity_o *SelfUserGame; // x0
  Il2CppObject *v11; // x0
  System_String_o *passiveSkillIconFormat; // x20
  Il2CppObject *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF
  int32_t genderType; // [xsp+18h] [xbp-28h] BYREF
  int32_t v17; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_49FF83B & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardUtility_TypeInfo, *(_QWORD *)&skillType);
    sub_1B640C8(&int_TypeInfo, v5);
    byte_49FF83B = 1;
  }
  v6 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v6 = ClassBoardUtility_TypeInfo;
  }
  static_fields = v6->static_fields;
  if ( skillType == 2 )
  {
    commandSpellIconFormat = static_fields->commandSpellIconFormat;
    v17 = iconId;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      sub_1B64324(0LL);
    genderType = SelfUserGame->fields.genderType;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &genderType);
    return System_String__Format_61389768(commandSpellIconFormat, v9, v11, 0LL);
  }
  else
  {
    passiveSkillIconFormat = static_fields->passiveSkillIconFormat;
    v15 = iconId;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    return System_String__Format(passiveSkillIconFormat, v14, 0LL);
  }
}


bool __fastcall ClassBoardUtility__IsPlayedExClassReleaseEffect(int32_t classId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x19
  _BOOL8 IsNullOrEmpty; // x0
  ClassBoardUtility_c *v10; // x0
  System_String_o *String_69086012; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Func_object__bool__o *v16; // x21

  if ( (byte_49FF83E & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardUtility_TypeInfo, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_string____75749064, v4);
    sub_1B640C8(&System_Func_string__bool__TypeInfo, v5);
    sub_1B640C8(&Method_ClassBoardUtility___c__DisplayClass8_0__IsPlayedExClassReleaseEffect_b__0__, v6);
    sub_1B640C8(&ClassBoardUtility___c__DisplayClass8_0_TypeInfo, v7);
    byte_49FF83E = 1;
  }
  v8 = sub_1B64314(ClassBoardUtility___c__DisplayClass8_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_10;
  *(_DWORD *)(v8 + 16) = classId;
  v10 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v10 = ClassBoardUtility_TypeInfo;
  }
  String_69086012 = UnityEngine_PlayerPrefs__GetString_69086012(v10->static_fields->savePlayedExClassReleaseKey, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String_69086012, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  if ( !String_69086012 )
LABEL_10:
    sub_1B64324(IsNullOrEmpty);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_69086012, 0x2Cu, 0, 0LL);
  v16 = (System_Func_object__bool__o *)sub_1B64314(System_Func_string__bool__TypeInfo, v14, v15);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v8,
    Method_ClassBoardUtility___c__DisplayClass8_0__IsPlayedExClassReleaseEffect_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_object__48617700(
           v13,
           (System_Func_TSource__bool__o *)v16,
           (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_string____75749064) != 0LL;
}


bool __fastcall ClassBoardUtility__IsPlayedReleaseEffect(int32_t classBoardBaseId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x19
  _BOOL8 IsNullOrEmpty; // x0
  ClassBoardUtility_c *v10; // x0
  System_String_o *String_69086012; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Func_object__bool__o *v16; // x21

  if ( (byte_49FF83C & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardUtility_TypeInfo, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_string____75749064, v4);
    sub_1B640C8(&System_Func_string__bool__TypeInfo, v5);
    sub_1B640C8(&Method_ClassBoardUtility___c__DisplayClass6_0__IsPlayedReleaseEffect_b__0__, v6);
    sub_1B640C8(&ClassBoardUtility___c__DisplayClass6_0_TypeInfo, v7);
    byte_49FF83C = 1;
  }
  v8 = sub_1B64314(ClassBoardUtility___c__DisplayClass6_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_10;
  *(_DWORD *)(v8 + 16) = classBoardBaseId;
  v10 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v10 = ClassBoardUtility_TypeInfo;
  }
  String_69086012 = UnityEngine_PlayerPrefs__GetString_69086012(
                      v10->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String_69086012, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  if ( !String_69086012 )
LABEL_10:
    sub_1B64324(IsNullOrEmpty);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_69086012, 0x2Cu, 0, 0LL);
  v16 = (System_Func_object__bool__o *)sub_1B64314(System_Func_string__bool__TypeInfo, v14, v15);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v8,
    Method_ClassBoardUtility___c__DisplayClass6_0__IsPlayedReleaseEffect_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_object__48617700(
           v13,
           (System_Func_TSource__bool__o *)v16,
           (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_string____75749064) != 0LL;
}


bool __fastcall ClassBoardUtility__IsTargetQuestClear(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x19
  int64_t v7; // x20

  if ( (byte_49FF83A & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, v1);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestMaster___, v2);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FF83A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  v7 = (int64_t)Instance;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !MasterData_object )
LABEL_10:
    sub_1B64324(Instance);
  return UserQuestMaster__getClearCountsFromId(
           (UserQuestMaster_o *)MasterData_object,
           v7,
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
  System_String_o *String_69086012; // x20
  System_Collections_Generic_List_TSource__o *IsNullOrEmpty; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x20
  ClassBoardUtility___c_c *v24; // x8
  System_Func_object__int__o *_9__7_0; // x21
  Il2CppObject *v26; // x22
  struct ClassBoardUtility___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
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

  if ( (byte_49FF83D & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardUtility_TypeInfo, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_string__int___, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_int___, v4);
    sub_1B640C8(&System_Func_string__int__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B640C8(&Method_System_String_Join_int___, v10);
    sub_1B640C8(&Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__7_0__, v11);
    sub_1B640C8(&ClassBoardUtility___c_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_869/*","*/, v13);
    byte_49FF83D = 1;
  }
  v14 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v14 = ClassBoardUtility_TypeInfo;
  }
  String_69086012 = UnityEngine_PlayerPrefs__GetString_69086012(
                      v14->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0LL);
  IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_String__IsNullOrEmpty(String_69086012, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v19 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v17, v18);
    System_Collections_Generic_List_int____ctor(
      v19,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  }
  else
  {
    if ( !String_69086012 )
      goto LABEL_29;
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_69086012, 0x2Cu, 0, 0LL);
    v24 = ClassBoardUtility___c_TypeInfo;
    if ( !ClassBoardUtility___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo);
      v24 = ClassBoardUtility___c_TypeInfo;
    }
    _9__7_0 = (System_Func_object__int__o *)v24->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = ClassBoardUtility___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v24->static_fields->__9;
      _9__7_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_string__int__TypeInfo, v21, v22);
      System_Func_object__int____ctor(
        _9__7_0,
        v26,
        Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__7_0__,
        0LL);
      static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_string__int__o *)_9__7_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v28, v29);
    }
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v23,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_string__int___);
    IsNullOrEmpty = System_Linq_Enumerable__ToList_int_(
                      v30,
                      (const MethodInfo_2E74DB0 *)Method_System_Linq_Enumerable_ToList_int___);
    v19 = (System_Collections_Generic_List_int__o *)IsNullOrEmpty;
  }
  if ( !classBaseIds )
LABEL_29:
    sub_1B64324(IsNullOrEmpty);
  v31 = *(_QWORD *)&classBaseIds->max_length;
  if ( (int)v31 >= 1 )
  {
    v32 = 0LL;
    do
    {
      if ( v32 >= (unsigned int)v31 )
        sub_1B6432C(IsNullOrEmpty, v20);
      if ( !v19 )
        goto LABEL_29;
      v33 = classBaseIds->m_Items[v32 + 1];
      IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                                      v19,
                                                                      v33,
                                                                      (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        items = v19->fields._items;
        v35 = Method_System_Collections_Generic_List_int__Add__;
        ++v19->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v19->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v19,
            v33,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v19->fields._size = size + 1;
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
          (System_String_o *)StringLiteral_869/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v19,
          (const MethodInfo_2EDA900 *)Method_System_String_Join_int___);
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
  System_String_o *String_69086012; // x20
  System_Collections_Generic_List_TSource__o *IsNullOrEmpty; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x20
  ClassBoardUtility___c_c *v24; // x8
  System_Func_object__int__o *_9__9_0; // x21
  Il2CppObject *v26; // x22
  struct ClassBoardUtility___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
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

  if ( (byte_49FF83F & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardUtility_TypeInfo, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_string__int___, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_int___, v4);
    sub_1B640C8(&System_Func_string__int__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B640C8(&Method_System_String_Join_int___, v10);
    sub_1B640C8(&Method_ClassBoardUtility___c__SavePlayedExClassReleaseEffect_b__9_0__, v11);
    sub_1B640C8(&ClassBoardUtility___c_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_869/*","*/, v13);
    byte_49FF83F = 1;
  }
  v14 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v14 = ClassBoardUtility_TypeInfo;
  }
  String_69086012 = UnityEngine_PlayerPrefs__GetString_69086012(v14->static_fields->savePlayedExClassReleaseKey, 0LL);
  IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_String__IsNullOrEmpty(String_69086012, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v19 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v17, v18);
    System_Collections_Generic_List_int____ctor(
      v19,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  }
  else
  {
    if ( !String_69086012 )
      goto LABEL_29;
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_69086012, 0x2Cu, 0, 0LL);
    v24 = ClassBoardUtility___c_TypeInfo;
    if ( !ClassBoardUtility___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo);
      v24 = ClassBoardUtility___c_TypeInfo;
    }
    _9__9_0 = (System_Func_object__int__o *)v24->static_fields->__9__9_0;
    if ( !_9__9_0 )
    {
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = ClassBoardUtility___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v24->static_fields->__9;
      _9__9_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_string__int__TypeInfo, v21, v22);
      System_Func_object__int____ctor(
        _9__9_0,
        v26,
        Method_ClassBoardUtility___c__SavePlayedExClassReleaseEffect_b__9_0__,
        0LL);
      static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      static_fields->__9__9_0 = (struct System_Func_string__int__o *)_9__9_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v28, v29);
    }
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v23,
                                                                 (System_Func_TSource__TResult__o *)_9__9_0,
                                                                 (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_string__int___);
    IsNullOrEmpty = System_Linq_Enumerable__ToList_int_(
                      v30,
                      (const MethodInfo_2E74DB0 *)Method_System_Linq_Enumerable_ToList_int___);
    v19 = (System_Collections_Generic_List_int__o *)IsNullOrEmpty;
  }
  if ( !classId )
LABEL_29:
    sub_1B64324(IsNullOrEmpty);
  v31 = *(_QWORD *)&classId->max_length;
  if ( (int)v31 >= 1 )
  {
    v32 = 0LL;
    do
    {
      if ( v32 >= (unsigned int)v31 )
        sub_1B6432C(IsNullOrEmpty, v20);
      if ( !v19 )
        goto LABEL_29;
      v33 = classId->m_Items[v32 + 1];
      IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                                      v19,
                                                                      v33,
                                                                      (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        items = v19->fields._items;
        v35 = Method_System_Collections_Generic_List_int__Add__;
        ++v19->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v19->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v19,
            v33,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v19->fields._size = size + 1;
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
          (System_String_o *)StringLiteral_869/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v19,
          (const MethodInfo_2EDA900 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(savePlayedExClassReleaseKey, v39, 0LL);
}


void __fastcall ClassBoardUtility___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF842 & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardUtility___c_TypeInfo, v1);
    byte_49FF842 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ClassBoardUtility___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ClassBoardUtility___c_TypeInfo->static_fields->__9 = (struct ClassBoardUtility___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)ClassBoardUtility___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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