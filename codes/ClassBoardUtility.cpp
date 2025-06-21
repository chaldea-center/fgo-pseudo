void __fastcall ClassBoardUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w1
  struct ClassBoardUtility_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  struct ClassBoardUtility_StaticFields *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  struct ClassBoardUtility_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4B1FEA9 & 1) == 0 )
  {
    sub_1BCAFF8(&ClassBoardUtility_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_12497/*"SavePlayedClassBoardBaseRelease"*/, v4);
    sub_1BCAFF8(&StringLiteral_12498/*"SavePlayedExClassRelease"*/, v5);
    sub_1BCAFF8(&StringLiteral_23315/*"skill_{0:D5}"*/, v6);
    sub_1BCAFF8(&StringLiteral_18234/*"cs_{0:D4}{1}"*/, v7);
    byte_4B1FEA9 = 1;
  }
  ClassBoardUtility_TypeInfo->static_fields->commandSpellIconFormat = (struct System_String_o *)StringLiteral_18234/*"cs_{0:D4}{1}"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)ClassBoardUtility_TypeInfo->static_fields, StringLiteral_18234/*"cs_{0:D4}{1}"*/, v2, v3);
  v8 = StringLiteral_23315/*"skill_{0:D5}"*/;
  static_fields = ClassBoardUtility_TypeInfo->static_fields;
  static_fields->passiveSkillIconFormat = (struct System_String_o *)StringLiteral_23315/*"skill_{0:D5}"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->passiveSkillIconFormat, v8, v10, v11);
  v12 = StringLiteral_12497/*"SavePlayedClassBoardBaseRelease"*/;
  v13 = ClassBoardUtility_TypeInfo->static_fields;
  v13->savePlayedClassBoardBaseReleaseKey = (struct System_String_o *)StringLiteral_12497/*"SavePlayedClassBoardBaseRelease"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v13->savePlayedClassBoardBaseReleaseKey, v12, v14, v15);
  v16 = StringLiteral_12498/*"SavePlayedExClassRelease"*/;
  v17 = ClassBoardUtility_TypeInfo->static_fields;
  v17->savePlayedExClassReleaseKey = (struct System_String_o *)StringLiteral_12498/*"SavePlayedExClassRelease"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v17->savePlayedExClassReleaseKey, v16, v18, v19);
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
  __int64 v9; // x2
  System_Int32_array *v10; // x19
  ClassBoardUtility_c *v11; // x0

  if ( (byte_4B1FEA7 & 1) == 0 )
  {
    sub_1BCAFF8(&ClassBoardUtility_TypeInfo, v1);
    sub_1BCAFF8(&int___TypeInfo, v2);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v3);
    byte_4B1FEA7 = 1;
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
      v11 = ClassBoardUtility_TypeInfo;
      if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
        v11 = ClassBoardUtility_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(
        v11->static_fields->savePlayedExClassReleaseKey,
        (System_String_o *)StringLiteral_1/*""*/,
        0LL);
    }
  }
  else
  {
    v7 = sub_1BCB0A0(int___TypeInfo, 1LL);
    if ( !v7 )
      sub_1BCB254(0LL, v8);
    v10 = (System_Int32_array *)v7;
    if ( !*(_DWORD *)(v7 + 24) )
      sub_1BCB25C(v7, v8, v9);
    *(_DWORD *)(v7 + 32) = 10;
    if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    ClassBoardUtility__SavePlayedExClassReleaseEffect(v10, v8);
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

  if ( (byte_4B1FEA2 & 1) == 0 )
  {
    sub_1BCAFF8(&ClassBoardUtility_TypeInfo, *(_QWORD *)&skillType);
    sub_1BCAFF8(&int_TypeInfo, v7);
    byte_4B1FEA2 = 1;
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
      sub_1BCB254(0LL, v13);
    genderType = SelfUserGame->fields.genderType;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &genderType, v14, v15, v16);
    return System_String__Format_62491716(commandSpellIconFormat, v11, v17, 0LL);
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
  System_String_o *String_70094888; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  System_Func_object__bool__o *v14; // x21

  if ( (byte_4B1FEA5 & 1) == 0 )
  {
    sub_1BCAFF8(&ClassBoardUtility_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_string____76957136, v3);
    sub_1BCAFF8(&System_Func_string__bool__TypeInfo, v4);
    sub_1BCAFF8(&Method_ClassBoardUtility___c__DisplayClass8_0__IsPlayedExClassReleaseEffect_b__0__, v5);
    sub_1BCAFF8(&ClassBoardUtility___c__DisplayClass8_0_TypeInfo, v6);
    byte_4B1FEA5 = 1;
  }
  v7 = sub_1BCB244(ClassBoardUtility___c__DisplayClass8_0_TypeInfo);
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
  String_70094888 = UnityEngine_PlayerPrefs__GetString_70094888(v10->static_fields->savePlayedExClassReleaseKey, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String_70094888, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  if ( !String_70094888 )
LABEL_10:
    sub_1BCB254(IsNullOrEmpty, v9);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_70094888, 0x2Cu, 0, 0LL);
  v14 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_ClassBoardUtility___c__DisplayClass8_0__IsPlayedExClassReleaseEffect_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_object__50595188(
           v13,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_string____76957136) != 0LL;
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
  System_String_o *String_70094888; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  System_Func_object__bool__o *v14; // x21

  if ( (byte_4B1FEA3 & 1) == 0 )
  {
    sub_1BCAFF8(&ClassBoardUtility_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_string____76957136, v3);
    sub_1BCAFF8(&System_Func_string__bool__TypeInfo, v4);
    sub_1BCAFF8(&Method_ClassBoardUtility___c__DisplayClass6_0__IsPlayedReleaseEffect_b__0__, v5);
    sub_1BCAFF8(&ClassBoardUtility___c__DisplayClass6_0_TypeInfo, v6);
    byte_4B1FEA3 = 1;
  }
  v7 = sub_1BCB244(ClassBoardUtility___c__DisplayClass6_0_TypeInfo);
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
  String_70094888 = UnityEngine_PlayerPrefs__GetString_70094888(
                      v10->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String_70094888, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  if ( !String_70094888 )
LABEL_10:
    sub_1BCB254(IsNullOrEmpty, v9);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_70094888, 0x2Cu, 0, 0LL);
  v14 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_ClassBoardUtility___c__DisplayClass6_0__IsPlayedReleaseEffect_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_object__50595188(
           v13,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_string____76957136) != 0LL;
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

  if ( (byte_4B1FEA1 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, v1);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserQuestMaster___, v2);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1FEA1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    byte_4B165D1 = 1;
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
    sub_1BCB254(Instance, v6);
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
  System_String_o *String_70094888; // x20
  System_Collections_Generic_List_TSource__o *IsNullOrEmpty; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_int__o *v18; // x20
  __int64 v19; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  ClassBoardUtility___c_c *v21; // x8
  System_Func_object__int__o *_9__7_0; // x21
  Il2CppObject *v23; // x22
  struct ClassBoardUtility___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  __int64 v28; // x8
  unsigned __int64 v29; // x22
  int32_t v30; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  ClassBoardUtility_c *v34; // x0
  System_String_o *savePlayedClassBoardBaseReleaseKey; // x19
  System_String_o *v36; // x1

  if ( (byte_4B1FEA4 & 1) == 0 )
  {
    sub_1BCAFF8(&ClassBoardUtility_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_string__int___, v3);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_int___, v4);
    sub_1BCAFF8(&System_Func_string__int__TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1BCAFF8(&Method_System_String_Join_int___, v10);
    sub_1BCAFF8(&Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__7_0__, v11);
    sub_1BCAFF8(&ClassBoardUtility___c_TypeInfo, v12);
    sub_1BCAFF8(&StringLiteral_806/*","*/, v13);
    byte_4B1FEA4 = 1;
  }
  v14 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v14 = ClassBoardUtility_TypeInfo;
  }
  String_70094888 = UnityEngine_PlayerPrefs__GetString_70094888(
                      v14->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0LL);
  IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_String__IsNullOrEmpty(String_70094888, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v18 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v18,
      (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  }
  else
  {
    if ( !String_70094888 )
      goto LABEL_29;
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_70094888, 0x2Cu, 0, 0LL);
    v21 = ClassBoardUtility___c_TypeInfo;
    if ( !ClassBoardUtility___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo);
      v21 = ClassBoardUtility___c_TypeInfo;
    }
    _9__7_0 = (System_Func_object__int__o *)v21->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = ClassBoardUtility___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v21->static_fields->__9;
      _9__7_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__7_0,
        v23,
        Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__7_0__,
        0LL);
      static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_string__int__o *)_9__7_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v25, v26);
    }
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v20,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_304E6F0 *)Method_System_Linq_Enumerable_Select_string__int___);
    IsNullOrEmpty = System_Linq_Enumerable__ToList_int_(
                      v27,
                      (const MethodInfo_305B8EC *)Method_System_Linq_Enumerable_ToList_int___);
    v18 = (System_Collections_Generic_List_int__o *)IsNullOrEmpty;
  }
  if ( !classBaseIds )
LABEL_29:
    sub_1BCB254(IsNullOrEmpty, v17);
  v28 = *(_QWORD *)&classBaseIds->max_length;
  if ( (int)v28 >= 1 )
  {
    v29 = 0LL;
    do
    {
      if ( v29 >= (unsigned int)v28 )
        sub_1BCB25C(IsNullOrEmpty, v17, v19);
      if ( !v18 )
        goto LABEL_29;
      v30 = classBaseIds->m_Items[v29 + 1];
      IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                                      v18,
                                                                      v30,
                                                                      (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        items = v18->fields._items;
        v32 = Method_System_Collections_Generic_List_int__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v18,
            v30,
            *(const MethodInfo_369CBAC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v18->fields._size = size + 1;
          items->m_Items[size + 1] = v30;
        }
      }
      LODWORD(v28) = classBaseIds->max_length;
    }
    while ( (__int64)++v29 < (int)v28 );
  }
  v34 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v34 = ClassBoardUtility_TypeInfo;
  }
  savePlayedClassBoardBaseReleaseKey = v34->static_fields->savePlayedClassBoardBaseReleaseKey;
  v36 = System_String__Join_int_(
          (System_String_o *)StringLiteral_806/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v18,
          (const MethodInfo_30C23B4 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(savePlayedClassBoardBaseReleaseKey, v36, 0LL);
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
  System_String_o *String_70094888; // x20
  System_Collections_Generic_List_TSource__o *IsNullOrEmpty; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_int__o *v18; // x20
  __int64 v19; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  ClassBoardUtility___c_c *v21; // x8
  System_Func_object__int__o *_9__9_0; // x21
  Il2CppObject *v23; // x22
  struct ClassBoardUtility___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  __int64 v28; // x8
  unsigned __int64 v29; // x22
  int32_t v30; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  ClassBoardUtility_c *v34; // x0
  System_String_o *savePlayedExClassReleaseKey; // x19
  System_String_o *v36; // x1

  if ( (byte_4B1FEA6 & 1) == 0 )
  {
    sub_1BCAFF8(&ClassBoardUtility_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_string__int___, v3);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_int___, v4);
    sub_1BCAFF8(&System_Func_string__int__TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1BCAFF8(&Method_System_String_Join_int___, v10);
    sub_1BCAFF8(&Method_ClassBoardUtility___c__SavePlayedExClassReleaseEffect_b__9_0__, v11);
    sub_1BCAFF8(&ClassBoardUtility___c_TypeInfo, v12);
    sub_1BCAFF8(&StringLiteral_806/*","*/, v13);
    byte_4B1FEA6 = 1;
  }
  v14 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v14 = ClassBoardUtility_TypeInfo;
  }
  String_70094888 = UnityEngine_PlayerPrefs__GetString_70094888(v14->static_fields->savePlayedExClassReleaseKey, 0LL);
  IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_String__IsNullOrEmpty(String_70094888, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v18 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v18,
      (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  }
  else
  {
    if ( !String_70094888 )
      goto LABEL_29;
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_70094888, 0x2Cu, 0, 0LL);
    v21 = ClassBoardUtility___c_TypeInfo;
    if ( !ClassBoardUtility___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo);
      v21 = ClassBoardUtility___c_TypeInfo;
    }
    _9__9_0 = (System_Func_object__int__o *)v21->static_fields->__9__9_0;
    if ( !_9__9_0 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = ClassBoardUtility___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v21->static_fields->__9;
      _9__9_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__9_0,
        v23,
        Method_ClassBoardUtility___c__SavePlayedExClassReleaseEffect_b__9_0__,
        0LL);
      static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      static_fields->__9__9_0 = (struct System_Func_string__int__o *)_9__9_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v25, v26);
    }
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v20,
                                                                 (System_Func_TSource__TResult__o *)_9__9_0,
                                                                 (const MethodInfo_304E6F0 *)Method_System_Linq_Enumerable_Select_string__int___);
    IsNullOrEmpty = System_Linq_Enumerable__ToList_int_(
                      v27,
                      (const MethodInfo_305B8EC *)Method_System_Linq_Enumerable_ToList_int___);
    v18 = (System_Collections_Generic_List_int__o *)IsNullOrEmpty;
  }
  if ( !classId )
LABEL_29:
    sub_1BCB254(IsNullOrEmpty, v17);
  v28 = *(_QWORD *)&classId->max_length;
  if ( (int)v28 >= 1 )
  {
    v29 = 0LL;
    do
    {
      if ( v29 >= (unsigned int)v28 )
        sub_1BCB25C(IsNullOrEmpty, v17, v19);
      if ( !v18 )
        goto LABEL_29;
      v30 = classId->m_Items[v29 + 1];
      IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                                      v18,
                                                                      v30,
                                                                      (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        items = v18->fields._items;
        v32 = Method_System_Collections_Generic_List_int__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v18,
            v30,
            *(const MethodInfo_369CBAC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v18->fields._size = size + 1;
          items->m_Items[size + 1] = v30;
        }
      }
      LODWORD(v28) = classId->max_length;
    }
    while ( (__int64)++v29 < (int)v28 );
  }
  v34 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v34 = ClassBoardUtility_TypeInfo;
  }
  savePlayedExClassReleaseKey = v34->static_fields->savePlayedExClassReleaseKey;
  v36 = System_String__Join_int_(
          (System_String_o *)StringLiteral_806/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v18,
          (const MethodInfo_30C23B4 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(savePlayedExClassReleaseKey, v36, 0LL);
}


void __fastcall ClassBoardUtility__SetOpenClassScoreNum(
        int32_t *openClassBoardNum,
        int32_t *openGrandClassBoardNum,
        bool *isMaxOpenClassBoard,
        bool *isMaxOpenGrandClassBoard,
        int32_t classId,
        ClassBoardInfo_array *boardInfo,
        System_Collections_Generic_Dictionary_int__int__o *classBoardMaxDictionary,
        bool isGrandSvt,
        const MethodInfo *method)
{
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  ClassBoardClassMaster_o *Master_object; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  int32_t ClassBoardBaseId; // w27
  signed int max_length; // w8
  unsigned int v27; // w22
  int v28; // w21
  int v29; // w28
  int v30; // w19
  int v31; // w29
  ClassBoardInfo_o *v32; // x20
  struct System_Int32_array *squareIds; // x8
  struct System_Int32_array *v34; // x8
  ClassBoardClassMaster_o *v35; // [xsp+0h] [xbp-90h]
  int32_t *v36; // [xsp+8h] [xbp-88h]
  int32_t *v37; // [xsp+10h] [xbp-80h]
  bool *v38; // [xsp+18h] [xbp-78h]
  bool *v39; // [xsp+20h] [xbp-70h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B1FEA8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, openGrandClassBoardNum);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v17);
    sub_1BCAFF8(&DataManager_TypeInfo, v18);
    sub_1BCAFF8(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v21);
    byte_4B1FEA8 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
LABEL_41:
    sub_1BCB254(Master_object, v23);
  ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(Master_object, classId, 0LL);
  if ( ClassBoardBaseId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !Master_object )
      goto LABEL_41;
    Master_object = (ClassBoardClassMaster_o *)ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
                                                 (ClassBoardBaseMaster_o *)Master_object,
                                                 ClassBoardBaseId,
                                                 0LL);
    if ( !boardInfo )
      goto LABEL_41;
  }
  else
  {
    Master_object = 0LL;
    if ( !boardInfo )
      goto LABEL_41;
  }
  max_length = boardInfo->max_length;
  v36 = openClassBoardNum;
  v37 = openGrandClassBoardNum;
  v38 = isMaxOpenClassBoard;
  v39 = isMaxOpenGrandClassBoard;
  if ( max_length >= 1 )
  {
    v27 = 0;
    v28 = 0;
    v29 = -1;
    v30 = -1;
    v31 = -1;
    v35 = Master_object;
    while ( 1 )
    {
      if ( v27 >= max_length )
        sub_1BCB25C(Master_object, v23, v24);
      v32 = boardInfo->m_Items[v27];
      if ( !v32 )
        goto LABEL_41;
      if ( v32->fields.classBoardBaseId == ClassBoardBaseId )
      {
        if ( !classBoardMaxDictionary )
          goto LABEL_41;
        Master_object = (ClassBoardClassMaster_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                     classBoardMaxDictionary,
                                                     ClassBoardBaseId,
                                                     (const MethodInfo_3318A18 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          Master_object = (ClassBoardClassMaster_o *)ClassBoardInfo__IsReleasedClassId(v32, classId, 0LL);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = (ClassBoardClassMaster_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                         classBoardMaxDictionary,
                                                         ClassBoardBaseId,
                                                         (const MethodInfo_3318790 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            squareIds = v32->fields.squareIds;
            if ( !squareIds )
              goto LABEL_41;
            v28 = squareIds->max_length;
            v31 = (int)Master_object;
          }
        }
      }
      if ( !isGrandSvt )
        goto LABEL_36;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !Master_object )
        goto LABEL_41;
      Master_object = (ClassBoardClassMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                   &entity,
                                                   v32->fields.classBoardBaseId,
                                                   (const MethodInfo_32C7E4C *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
        goto LABEL_36;
      Master_object = (ClassBoardClassMaster_o *)entity;
      if ( !entity )
        goto LABEL_41;
      Master_object = (ClassBoardClassMaster_o *)ClassBoardBaseEntity__IsGrand((ClassBoardBaseEntity_o *)entity, 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
        break;
LABEL_37:
      max_length = boardInfo->max_length;
      if ( (int)++v27 >= max_length )
        goto LABEL_40;
    }
    if ( v35 && v35->fields._MasterKind_k__BackingField == v32->fields.classBoardBaseId )
    {
      if ( !entity )
        goto LABEL_41;
      if ( !classBoardMaxDictionary )
        goto LABEL_41;
      Master_object = (ClassBoardClassMaster_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                   classBoardMaxDictionary,
                                                   (int32_t)entity[1].klass,
                                                   (const MethodInfo_3318790 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      v34 = v32->fields.squareIds;
      if ( !v34 )
        goto LABEL_41;
      v29 = v34->max_length;
      v30 = (int)Master_object;
    }
LABEL_36:
    if ( ((v30 | v31) & 0x80000000) == 0 )
      goto LABEL_40;
    goto LABEL_37;
  }
  v28 = 0;
  v29 = -1;
  v30 = -1;
  v31 = -1;
LABEL_40:
  *v36 = v28;
  *v37 = v29;
  *v38 = v31 > 0 && v28 >= v31;
  *v39 = v30 > 0 && v29 >= v30;
}


void __fastcall ClassBoardUtility___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1FEAA & 1) == 0 )
  {
    sub_1BCAFF8(&ClassBoardUtility___c_TypeInfo, v1);
    byte_4B1FEAA = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ClassBoardUtility___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardUtility___c_TypeInfo->static_fields->__9 = (struct ClassBoardUtility___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)ClassBoardUtility___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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