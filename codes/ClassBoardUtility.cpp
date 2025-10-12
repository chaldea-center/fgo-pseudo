void ClassBoardUtility___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct ClassBoardUtility_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct ClassBoardUtility_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct ClassBoardUtility_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  struct ClassBoardUtility_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C3B590 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardUtility_TypeInfo);
    sub_1C32C20(&StringLiteral_12606/*"SavePlayedClassBoardBaseRelease"*/);
    sub_1C32C20(&StringLiteral_12607/*"SavePlayedExClassRelease"*/);
    sub_1C32C20(&StringLiteral_23521/*"skill_{0:D5}"*/);
    sub_1C32C20(&StringLiteral_12608/*"SavePlayedGrandExClassRelease"*/);
    sub_1C32C20(&StringLiteral_18387/*"cs_{0:D4}{1}"*/);
    byte_4C3B590 = 1;
  }
  ClassBoardUtility_TypeInfo->static_fields->commandSpellIconFormat = (struct System_String_o *)StringLiteral_18387/*"cs_{0:D4}{1}"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)ClassBoardUtility_TypeInfo->static_fields, StringLiteral_18387/*"cs_{0:D4}{1}"*/, v1, v2);
  v3 = StringLiteral_23521/*"skill_{0:D5}"*/;
  static_fields = ClassBoardUtility_TypeInfo->static_fields;
  static_fields->passiveSkillIconFormat = (struct System_String_o *)StringLiteral_23521/*"skill_{0:D5}"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->passiveSkillIconFormat, v3, v5, v6);
  v7 = StringLiteral_12606/*"SavePlayedClassBoardBaseRelease"*/;
  v8 = ClassBoardUtility_TypeInfo->static_fields;
  v8->savePlayedClassBoardBaseReleaseKey = (struct System_String_o *)StringLiteral_12606/*"SavePlayedClassBoardBaseRelease"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->savePlayedClassBoardBaseReleaseKey, v7, v9, v10);
  v11 = StringLiteral_12607/*"SavePlayedExClassRelease"*/;
  v12 = ClassBoardUtility_TypeInfo->static_fields;
  v12->savePlayedExClassReleaseKey = (struct System_String_o *)StringLiteral_12607/*"SavePlayedExClassRelease"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v12->savePlayedExClassReleaseKey, v11, v13, v14);
  v15 = StringLiteral_12608/*"SavePlayedGrandExClassRelease"*/;
  v16 = ClassBoardUtility_TypeInfo->static_fields;
  v16->SavePlayedGrandExClassReleaseKey = (struct System_String_o *)StringLiteral_12608/*"SavePlayedGrandExClassRelease"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v16->SavePlayedGrandExClassReleaseKey, v15, v17, v18);
}


void ClassBoardUtility__FirstSavePlayedExClassReleaseEffect(const MethodInfo *method)
{
  ClassBoardUtility_c *v1; // x0
  bool HasKey; // w19
  bool v3; // w0
  __int64 v4; // x0
  const MethodInfo *v5; // x1
  System_Int32_array *v6; // x19
  ClassBoardUtility_c *v7; // x0

  if ( (byte_4C3B58E & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardUtility_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3B58E = 1;
  }
  v1 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v1 = ClassBoardUtility_TypeInfo;
  }
  HasKey = UnityEngine_PlayerPrefs__HasKey(v1->static_fields->savePlayedClassBoardBaseReleaseKey, 0);
  v3 = UnityEngine_PlayerPrefs__HasKey(ClassBoardUtility_TypeInfo->static_fields->savePlayedExClassReleaseKey, 0);
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
        0);
    }
  }
  else
  {
    v4 = sub_1C32CC8(int___TypeInfo, 1);
    if ( !v4 )
      sub_1C32E7C(0);
    v6 = (System_Int32_array *)v4;
    if ( !*(_DWORD *)(v4 + 24) )
      sub_1C32E84(v4);
    *(_DWORD *)(v4 + 32) = 10;
    if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    ClassBoardUtility__SavePlayedExClassReleaseEffect(v6, v5);
  }
}


System_String_o *ClassBoardUtility__GetClassBoardSkillIconName(
        int32_t iconId,
        int32_t skillType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  ClassBoardUtility_c *v10; // x0
  struct ClassBoardUtility_StaticFields *static_fields; // x8
  System_String_o *commandSpellIconFormat; // x20
  Il2CppObject *v13; // x19
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  Il2CppObject *v21; // x0
  System_String_o *passiveSkillIconFormat; // x20
  Il2CppObject *v24; // x0
  int32_t v25; // [xsp+Ch] [xbp-34h] BYREF
  int32_t genderType; // [xsp+18h] [xbp-28h] BYREF
  int32_t v27; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4C3B587 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardUtility_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    byte_4C3B587 = 1;
  }
  v10 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v10 = ClassBoardUtility_TypeInfo;
  }
  static_fields = v10->static_fields;
  if ( skillType == 2 )
  {
    commandSpellIconFormat = static_fields->commandSpellIconFormat;
    v27 = iconId;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, method, v3, v4, v5, v6, v7);
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame )
      sub_1C32E7C(0);
    genderType = SelfUserGame->fields.genderType;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &genderType, v15, v16, v17, v18, v19, v20);
    return System_String__Format_63559836(commandSpellIconFormat, v13, v21, 0);
  }
  else
  {
    passiveSkillIconFormat = static_fields->passiveSkillIconFormat;
    v25 = iconId;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, method, v3, v4, v5, v6, v7);
    return System_String__Format(passiveSkillIconFormat, v24, 0);
  }
}


bool ClassBoardUtility__IsPlayedExClassReleaseEffect(int32_t classId, const MethodInfo *method)
{
  __int64 v3; // x19
  _BOOL8 IsNullOrEmpty; // x0
  ClassBoardUtility_c *v5; // x0
  System_String_o *String_71182452; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  System_Func_object__bool__o *v9; // x21

  if ( (byte_4C3B58A & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardUtility_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_string____78101832);
    sub_1C32C20(&System_Func_string__bool__TypeInfo);
    sub_1C32C20(&Method_ClassBoardUtility___c__DisplayClass9_0__IsPlayedExClassReleaseEffect_b__0__);
    sub_1C32C20(&ClassBoardUtility___c__DisplayClass9_0_TypeInfo);
    byte_4C3B58A = 1;
  }
  v3 = sub_1C32E6C(ClassBoardUtility___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_DWORD *)(v3 + 16) = classId;
  v5 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v5 = ClassBoardUtility_TypeInfo;
  }
  String_71182452 = UnityEngine_PlayerPrefs__GetString_71182452(v5->static_fields->savePlayedExClassReleaseKey, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String_71182452, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !String_71182452 )
LABEL_10:
    sub_1C32E7C(IsNullOrEmpty);
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_71182452, 0x2Cu, 0, 0);
  v9 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v3,
    Method_ClassBoardUtility___c__DisplayClass9_0__IsPlayedExClassReleaseEffect_b__0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_object__51408536(
           v8,
           (System_Func_TSource__bool__o *)v9,
           (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_string____78101832) != 0;
}


bool ClassBoardUtility__IsPlayedGrandExClassReleaseEffect(int32_t classId, const MethodInfo *method)
{
  __int64 v3; // x19
  ClassBoardClassMaster_o *Master_object; // x0
  ClassBoardUtility_c *v5; // x0
  System_String_o *String_71182452; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  System_Func_object__bool__o *v9; // x21
  System_Collections_Generic_List_ClassBoardClassEntity__o *entityList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3B58B & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardUtility_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_string____78101832);
    sub_1C32C20(&System_Func_string__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClassBoardClassEntity__get_Item__);
    sub_1C32C20(&Method_ClassBoardUtility___c__DisplayClass10_0__IsPlayedGrandExClassReleaseEffect_b__0__);
    sub_1C32C20(&ClassBoardUtility___c__DisplayClass10_0_TypeInfo);
    byte_4C3B58B = 1;
  }
  entityList = 0;
  v3 = sub_1C32E6C(ClassBoardUtility___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_19;
  *(_DWORD *)(v3 + 16) = classId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_19;
  if ( !ClassBoardClassMaster__TryGetEntityListFromClassId(Master_object, &entityList, *(_DWORD *)(v3 + 16), 0) )
    return 0;
  Master_object = (ClassBoardClassMaster_o *)entityList;
  if ( !entityList )
    goto LABEL_19;
  Master_object = (ClassBoardClassMaster_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)entityList,
                                               0,
                                               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ClassBoardClassEntity__get_Item__);
  if ( !Master_object )
    goto LABEL_19;
  if ( !LODWORD(Master_object->fields._MasterName_k__BackingField) )
    return 1;
  v5 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v5 = ClassBoardUtility_TypeInfo;
  }
  String_71182452 = UnityEngine_PlayerPrefs__GetString_71182452(v5->static_fields->SavePlayedGrandExClassReleaseKey, 0);
  Master_object = (ClassBoardClassMaster_o *)System_String__IsNullOrEmpty(String_71182452, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    return 0;
  if ( !String_71182452 )
LABEL_19:
    sub_1C32E7C(Master_object);
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_71182452, 0x2Cu, 0, 0);
  v9 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v3,
    Method_ClassBoardUtility___c__DisplayClass10_0__IsPlayedGrandExClassReleaseEffect_b__0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_object__51408536(
           v8,
           (System_Func_TSource__bool__o *)v9,
           (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_string____78101832) != 0;
}


bool ClassBoardUtility__IsPlayedReleaseEffect(int32_t classBoardBaseId, const MethodInfo *method)
{
  __int64 v3; // x19
  _BOOL8 IsNullOrEmpty; // x0
  ClassBoardUtility_c *v5; // x0
  System_String_o *String_71182452; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  System_Func_object__bool__o *v9; // x21

  if ( (byte_4C3B588 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardUtility_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_string____78101832);
    sub_1C32C20(&System_Func_string__bool__TypeInfo);
    sub_1C32C20(&Method_ClassBoardUtility___c__DisplayClass7_0__IsPlayedReleaseEffect_b__0__);
    sub_1C32C20(&ClassBoardUtility___c__DisplayClass7_0_TypeInfo);
    byte_4C3B588 = 1;
  }
  v3 = sub_1C32E6C(ClassBoardUtility___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_DWORD *)(v3 + 16) = classBoardBaseId;
  v5 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v5 = ClassBoardUtility_TypeInfo;
  }
  String_71182452 = UnityEngine_PlayerPrefs__GetString_71182452(
                      v5->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String_71182452, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !String_71182452 )
LABEL_10:
    sub_1C32E7C(IsNullOrEmpty);
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_71182452, 0x2Cu, 0, 0);
  v9 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v3,
    Method_ClassBoardUtility___c__DisplayClass7_0__IsPlayedReleaseEffect_b__0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_object__51408536(
           v8,
           (System_Func_TSource__bool__o *)v9,
           (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_string____78101832) != 0;
}


bool ClassBoardUtility__IsTargetQuestClear(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x19
  int64_t v3; // x20

  if ( (byte_4C3B586 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3B586 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  v3 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !MasterData_object )
LABEL_14:
    sub_1C32E7C(Instance);
  return UserQuestMaster__getClearCountsFromId(
           (UserQuestMaster_o *)MasterData_object,
           v3,
           BalanceConfig_TypeInfo->static_fields->ClassBoardReleaseQuestId,
           0) > 0;
}


void ClassBoardUtility__SavePlayedClassBaseReleaseEffect(System_Int32_array *classBaseIds, const MethodInfo *method)
{
  ClassBoardUtility_c *v3; // x0
  System_String_o *String_71182452; // x20
  System_Collections_Generic_List_TSource__o *IsNullOrEmpty; // x0
  System_Collections_Generic_List_int__o *v6; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x20
  ClassBoardUtility___c_c *v8; // x8
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v10; // x22
  struct ClassBoardUtility___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v16; // x22
  int32_t v17; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  ClassBoardUtility_c *v21; // x0
  System_String_o *savePlayedClassBoardBaseReleaseKey; // x19
  System_String_o *v23; // x1

  if ( (byte_4C3B589 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardUtility_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C32C20(&System_Func_string__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_System_String_Join_int___);
    sub_1C32C20(&Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__8_0__);
    sub_1C32C20(&ClassBoardUtility___c_TypeInfo);
    sub_1C32C20(&StringLiteral_811/*","*/);
    byte_4C3B589 = 1;
  }
  v3 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v3 = ClassBoardUtility_TypeInfo;
  }
  String_71182452 = UnityEngine_PlayerPrefs__GetString_71182452(
                      v3->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0);
  IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_String__IsNullOrEmpty(String_71182452, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v6 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v6,
      (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  }
  else
  {
    if ( !String_71182452 )
      goto LABEL_29;
    v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_71182452, 0x2Cu, 0, 0);
    v8 = ClassBoardUtility___c_TypeInfo;
    if ( !ClassBoardUtility___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo);
      v8 = ClassBoardUtility___c_TypeInfo;
    }
    _9__8_0 = (System_Func_object__int__o *)v8->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = ClassBoardUtility___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v8->static_fields->__9;
      _9__8_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__8_0,
        v10,
        Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__8_0__,
        0);
      static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_string__int__o *)_9__8_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v12, v13);
    }
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v7,
                                                                 (System_Func_TSource__TResult__o *)_9__8_0,
                                                                 (const MethodInfo_31131E0 *)Method_System_Linq_Enumerable_Select_string__int___);
    IsNullOrEmpty = System_Linq_Enumerable__ToList_int_(
                      v14,
                      (const MethodInfo_31214BC *)Method_System_Linq_Enumerable_ToList_int___);
    v6 = (System_Collections_Generic_List_int__o *)IsNullOrEmpty;
  }
  if ( !classBaseIds )
LABEL_29:
    sub_1C32E7C(IsNullOrEmpty);
  max_length = classBaseIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    do
    {
      if ( v16 >= (unsigned int)max_length )
        sub_1C32E84(IsNullOrEmpty);
      if ( !v6 )
        goto LABEL_29;
      v17 = classBaseIds->m_Items[v16];
      IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                                      v6,
                                                                      v17,
                                                                      (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        items = v6->fields._items;
        v19 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            v17,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size] = v17;
        }
      }
      LODWORD(max_length) = classBaseIds->max_length;
    }
    while ( (__int64)++v16 < (int)max_length );
  }
  v21 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v21 = ClassBoardUtility_TypeInfo;
  }
  savePlayedClassBoardBaseReleaseKey = v21->static_fields->savePlayedClassBoardBaseReleaseKey;
  v23 = System_String__Join_int_(
          (System_String_o *)StringLiteral_811/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v6,
          (const MethodInfo_3188674 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(savePlayedClassBoardBaseReleaseKey, v23, 0);
}


void ClassBoardUtility__SavePlayedExClassReleaseEffect(System_Int32_array *classId, const MethodInfo *method)
{
  ClassBoardUtility_c *v3; // x0
  System_String_o *String_71182452; // x20
  System_Collections_Generic_List_TSource__o *IsNullOrEmpty; // x0
  System_Collections_Generic_List_int__o *v6; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x20
  ClassBoardUtility___c_c *v8; // x8
  System_Func_object__int__o *_9__11_0; // x21
  Il2CppObject *v10; // x22
  struct ClassBoardUtility___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v16; // x22
  int32_t v17; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  ClassBoardUtility_c *v21; // x0
  System_String_o *savePlayedExClassReleaseKey; // x19
  System_String_o *v23; // x1

  if ( (byte_4C3B58C & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardUtility_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C32C20(&System_Func_string__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_System_String_Join_int___);
    sub_1C32C20(&Method_ClassBoardUtility___c__SavePlayedExClassReleaseEffect_b__11_0__);
    sub_1C32C20(&ClassBoardUtility___c_TypeInfo);
    sub_1C32C20(&StringLiteral_811/*","*/);
    byte_4C3B58C = 1;
  }
  v3 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v3 = ClassBoardUtility_TypeInfo;
  }
  String_71182452 = UnityEngine_PlayerPrefs__GetString_71182452(v3->static_fields->savePlayedExClassReleaseKey, 0);
  IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_String__IsNullOrEmpty(String_71182452, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v6 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v6,
      (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  }
  else
  {
    if ( !String_71182452 )
      goto LABEL_29;
    v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_71182452, 0x2Cu, 0, 0);
    v8 = ClassBoardUtility___c_TypeInfo;
    if ( !ClassBoardUtility___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo);
      v8 = ClassBoardUtility___c_TypeInfo;
    }
    _9__11_0 = (System_Func_object__int__o *)v8->static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = ClassBoardUtility___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v8->static_fields->__9;
      _9__11_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__11_0,
        v10,
        Method_ClassBoardUtility___c__SavePlayedExClassReleaseEffect_b__11_0__,
        0);
      static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      static_fields->__9__11_0 = (struct System_Func_string__int__o *)_9__11_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v12, v13);
    }
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v7,
                                                                 (System_Func_TSource__TResult__o *)_9__11_0,
                                                                 (const MethodInfo_31131E0 *)Method_System_Linq_Enumerable_Select_string__int___);
    IsNullOrEmpty = System_Linq_Enumerable__ToList_int_(
                      v14,
                      (const MethodInfo_31214BC *)Method_System_Linq_Enumerable_ToList_int___);
    v6 = (System_Collections_Generic_List_int__o *)IsNullOrEmpty;
  }
  if ( !classId )
LABEL_29:
    sub_1C32E7C(IsNullOrEmpty);
  max_length = classId->max_length;
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    do
    {
      if ( v16 >= (unsigned int)max_length )
        sub_1C32E84(IsNullOrEmpty);
      if ( !v6 )
        goto LABEL_29;
      v17 = classId->m_Items[v16];
      IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                                      v6,
                                                                      v17,
                                                                      (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        items = v6->fields._items;
        v19 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            v17,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size] = v17;
        }
      }
      LODWORD(max_length) = classId->max_length;
    }
    while ( (__int64)++v16 < (int)max_length );
  }
  v21 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v21 = ClassBoardUtility_TypeInfo;
  }
  savePlayedExClassReleaseKey = v21->static_fields->savePlayedExClassReleaseKey;
  v23 = System_String__Join_int_(
          (System_String_o *)StringLiteral_811/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v6,
          (const MethodInfo_3188674 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(savePlayedExClassReleaseKey, v23, 0);
}


void ClassBoardUtility__SavePlayedGrandExClassReleaseEffect(System_Int32_array *classId, const MethodInfo *method)
{
  ClassBoardUtility_c *v3; // x0
  System_String_o *String_71182452; // x20
  System_Collections_Generic_List_TSource__o *IsNullOrEmpty; // x0
  System_Collections_Generic_List_int__o *v6; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x20
  ClassBoardUtility___c_c *v8; // x8
  System_Func_object__int__o *_9__12_0; // x21
  Il2CppObject *v10; // x22
  struct ClassBoardUtility___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v16; // x22
  int32_t v17; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  ClassBoardUtility_c *v21; // x0
  System_String_o *SavePlayedGrandExClassReleaseKey; // x19
  System_String_o *v23; // x1

  if ( (byte_4C3B58D & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardUtility_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C32C20(&System_Func_string__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_System_String_Join_int___);
    sub_1C32C20(&Method_ClassBoardUtility___c__SavePlayedGrandExClassReleaseEffect_b__12_0__);
    sub_1C32C20(&ClassBoardUtility___c_TypeInfo);
    sub_1C32C20(&StringLiteral_811/*","*/);
    byte_4C3B58D = 1;
  }
  v3 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v3 = ClassBoardUtility_TypeInfo;
  }
  String_71182452 = UnityEngine_PlayerPrefs__GetString_71182452(v3->static_fields->SavePlayedGrandExClassReleaseKey, 0);
  IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_String__IsNullOrEmpty(String_71182452, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v6 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v6,
      (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  }
  else
  {
    if ( !String_71182452 )
      goto LABEL_29;
    v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_71182452, 0x2Cu, 0, 0);
    v8 = ClassBoardUtility___c_TypeInfo;
    if ( !ClassBoardUtility___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo);
      v8 = ClassBoardUtility___c_TypeInfo;
    }
    _9__12_0 = (System_Func_object__int__o *)v8->static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = ClassBoardUtility___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v8->static_fields->__9;
      _9__12_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__12_0,
        v10,
        Method_ClassBoardUtility___c__SavePlayedGrandExClassReleaseEffect_b__12_0__,
        0);
      static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      static_fields->__9__12_0 = (struct System_Func_string__int__o *)_9__12_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v12, v13);
    }
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v7,
                                                                 (System_Func_TSource__TResult__o *)_9__12_0,
                                                                 (const MethodInfo_31131E0 *)Method_System_Linq_Enumerable_Select_string__int___);
    IsNullOrEmpty = System_Linq_Enumerable__ToList_int_(
                      v14,
                      (const MethodInfo_31214BC *)Method_System_Linq_Enumerable_ToList_int___);
    v6 = (System_Collections_Generic_List_int__o *)IsNullOrEmpty;
  }
  if ( !classId )
LABEL_29:
    sub_1C32E7C(IsNullOrEmpty);
  max_length = classId->max_length;
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    do
    {
      if ( v16 >= (unsigned int)max_length )
        sub_1C32E84(IsNullOrEmpty);
      if ( !v6 )
        goto LABEL_29;
      v17 = classId->m_Items[v16];
      IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                                      v6,
                                                                      v17,
                                                                      (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        items = v6->fields._items;
        v19 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            v17,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size] = v17;
        }
      }
      LODWORD(max_length) = classId->max_length;
    }
    while ( (__int64)++v16 < (int)max_length );
  }
  v21 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v21 = ClassBoardUtility_TypeInfo;
  }
  SavePlayedGrandExClassReleaseKey = v21->static_fields->SavePlayedGrandExClassReleaseKey;
  v23 = System_String__Join_int_(
          (System_String_o *)StringLiteral_811/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v6,
          (const MethodInfo_3188674 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(SavePlayedGrandExClassReleaseKey, v23, 0);
}


void ClassBoardUtility__SetOpenClassScoreNum(
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
  ClassBoardClassMaster_o *Master_object; // x0
  int32_t ClassBoardBaseId; // w27
  int max_length; // w8
  unsigned int v20; // w22
  int32_t v21; // w21
  int v22; // w28
  int v23; // w19
  int v24; // w29
  ClassBoardInfo_o *v25; // x20
  struct System_Int32_array *squareIds; // x8
  struct System_Int32_array *v27; // x8
  ClassBoardClassMaster_o *v28; // [xsp+0h] [xbp-90h]
  int32_t *v29; // [xsp+8h] [xbp-88h]
  int32_t *v30; // [xsp+10h] [xbp-80h]
  bool *v31; // [xsp+18h] [xbp-78h]
  bool *v32; // [xsp+20h] [xbp-70h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4C3B58F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_4C3B58F = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
LABEL_41:
    sub_1C32E7C(Master_object);
  ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(Master_object, classId, 0);
  if ( ClassBoardBaseId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !Master_object )
      goto LABEL_41;
    Master_object = (ClassBoardClassMaster_o *)ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
                                                 (ClassBoardBaseMaster_o *)Master_object,
                                                 ClassBoardBaseId,
                                                 0);
    if ( !boardInfo )
      goto LABEL_41;
  }
  else
  {
    Master_object = 0;
    if ( !boardInfo )
      goto LABEL_41;
  }
  max_length = boardInfo->max_length;
  v29 = openClassBoardNum;
  v30 = openGrandClassBoardNum;
  v31 = isMaxOpenClassBoard;
  v32 = isMaxOpenGrandClassBoard;
  if ( max_length >= 1 )
  {
    v20 = 0;
    v21 = 0;
    v22 = -1;
    v23 = -1;
    v24 = -1;
    v28 = Master_object;
    while ( 1 )
    {
      if ( v20 >= max_length )
        sub_1C32E84(Master_object);
      v25 = boardInfo->m_Items[v20];
      if ( !v25 )
        goto LABEL_41;
      if ( v25->fields.classBoardBaseId == ClassBoardBaseId )
      {
        if ( !classBoardMaxDictionary )
          goto LABEL_41;
        Master_object = (ClassBoardClassMaster_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                     classBoardMaxDictionary,
                                                     ClassBoardBaseId,
                                                     (const MethodInfo_33E7450 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          Master_object = (ClassBoardClassMaster_o *)ClassBoardInfo__IsReleasedClassId(v25, classId, 0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = (ClassBoardClassMaster_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                         classBoardMaxDictionary,
                                                         ClassBoardBaseId,
                                                         (const MethodInfo_33E71C8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            squareIds = v25->fields.squareIds;
            if ( !squareIds )
              goto LABEL_41;
            v21 = squareIds->max_length;
            v24 = (int)Master_object;
          }
        }
      }
      if ( !isGrandSvt )
        goto LABEL_36;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !Master_object )
        goto LABEL_41;
      Master_object = (ClassBoardClassMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                   &entity,
                                                   v25->fields.classBoardBaseId,
                                                   (const MethodInfo_3396884 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
        goto LABEL_36;
      Master_object = (ClassBoardClassMaster_o *)entity;
      if ( !entity )
        goto LABEL_41;
      Master_object = (ClassBoardClassMaster_o *)ClassBoardBaseEntity__IsGrand((ClassBoardBaseEntity_o *)entity, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
        break;
LABEL_37:
      max_length = boardInfo->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_40;
    }
    if ( v28 && v28->fields._MasterKind_k__BackingField == v25->fields.classBoardBaseId )
    {
      if ( !entity )
        goto LABEL_41;
      if ( !classBoardMaxDictionary )
        goto LABEL_41;
      Master_object = (ClassBoardClassMaster_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                   classBoardMaxDictionary,
                                                   (int32_t)entity[1].klass,
                                                   (const MethodInfo_33E71C8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      v27 = v25->fields.squareIds;
      if ( !v27 )
        goto LABEL_41;
      v22 = v27->max_length;
      v23 = (int)Master_object;
    }
LABEL_36:
    if ( ((v23 | v24) & 0x80000000) == 0 )
      goto LABEL_40;
    goto LABEL_37;
  }
  v21 = 0;
  v22 = -1;
  v23 = -1;
  v24 = -1;
LABEL_40:
  *v29 = v21;
  *v30 = v22;
  *v31 = v24 > 0 && v21 >= v24;
  *v32 = v23 > 0 && v22 >= v23;
}


void ClassBoardUtility___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3B591 & 1) == 0 )
  {
    sub_1C32C20(&ClassBoardUtility___c_TypeInfo);
    byte_4C3B591 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(ClassBoardUtility___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardUtility___c_TypeInfo->static_fields->__9 = (struct ClassBoardUtility___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)ClassBoardUtility___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ClassBoardUtility___c___ctor(ClassBoardUtility___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ClassBoardUtility___c___SavePlayedClassBaseReleaseEffect_b__8_0(
        ClassBoardUtility___c_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  return System_Int32__Parse(id, 0);
}


int32_t ClassBoardUtility___c___SavePlayedExClassReleaseEffect_b__11_0(
        ClassBoardUtility___c_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  return System_Int32__Parse(id, 0);
}


int32_t ClassBoardUtility___c___SavePlayedGrandExClassReleaseEffect_b__12_0(
        ClassBoardUtility___c_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  return System_Int32__Parse(id, 0);
}


void ClassBoardUtility___c__DisplayClass10_0___ctor(
        ClassBoardUtility___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardUtility___c__DisplayClass10_0___IsPlayedGrandExClassReleaseEffect_b__0(
        ClassBoardUtility___c__DisplayClass10_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  int32_t classId; // w19

  classId = this->fields.classId;
  return classId == System_Int32__Parse(id, 0);
}


void ClassBoardUtility___c__DisplayClass7_0___ctor(
        ClassBoardUtility___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardUtility___c__DisplayClass7_0___IsPlayedReleaseEffect_b__0(
        ClassBoardUtility___c__DisplayClass7_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  int32_t classBoardBaseId; // w19

  classBoardBaseId = this->fields.classBoardBaseId;
  return classBoardBaseId == System_Int32__Parse(id, 0);
}


void ClassBoardUtility___c__DisplayClass9_0___ctor(
        ClassBoardUtility___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardUtility___c__DisplayClass9_0___IsPlayedExClassReleaseEffect_b__0(
        ClassBoardUtility___c__DisplayClass9_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  int32_t classId; // w19

  classId = this->fields.classId;
  return classId == System_Int32__Parse(id, 0);
}