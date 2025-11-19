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

  if ( (byte_4CB9F6E & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardUtility_TypeInfo);
    sub_1C6BA08(&StringLiteral_12611/*"SavePlayedClassBoardBaseRelease"*/);
    sub_1C6BA08(&StringLiteral_12612/*"SavePlayedExClassRelease"*/);
    sub_1C6BA08(&StringLiteral_23617/*"skill_{0:D5}"*/);
    sub_1C6BA08(&StringLiteral_12613/*"SavePlayedGrandExClassRelease"*/);
    sub_1C6BA08(&StringLiteral_18420/*"cs_{0:D4}{1}"*/);
    byte_4CB9F6E = 1;
  }
  ClassBoardUtility_TypeInfo->static_fields->commandSpellIconFormat = (struct System_String_o *)StringLiteral_18420/*"cs_{0:D4}{1}"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)ClassBoardUtility_TypeInfo->static_fields, StringLiteral_18420/*"cs_{0:D4}{1}"*/, v1, v2);
  v3 = StringLiteral_23617/*"skill_{0:D5}"*/;
  static_fields = ClassBoardUtility_TypeInfo->static_fields;
  static_fields->passiveSkillIconFormat = (struct System_String_o *)StringLiteral_23617/*"skill_{0:D5}"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->passiveSkillIconFormat, v3, v5, v6);
  v7 = StringLiteral_12611/*"SavePlayedClassBoardBaseRelease"*/;
  v8 = ClassBoardUtility_TypeInfo->static_fields;
  v8->savePlayedClassBoardBaseReleaseKey = (struct System_String_o *)StringLiteral_12611/*"SavePlayedClassBoardBaseRelease"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->savePlayedClassBoardBaseReleaseKey, v7, v9, v10);
  v11 = StringLiteral_12612/*"SavePlayedExClassRelease"*/;
  v12 = ClassBoardUtility_TypeInfo->static_fields;
  v12->savePlayedExClassReleaseKey = (struct System_String_o *)StringLiteral_12612/*"SavePlayedExClassRelease"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v12->savePlayedExClassReleaseKey, v11, v13, v14);
  v15 = StringLiteral_12613/*"SavePlayedGrandExClassRelease"*/;
  v16 = ClassBoardUtility_TypeInfo->static_fields;
  v16->SavePlayedGrandExClassReleaseKey = (struct System_String_o *)StringLiteral_12613/*"SavePlayedGrandExClassRelease"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v16->SavePlayedGrandExClassReleaseKey, v15, v17, v18);
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

  if ( (byte_4CB9F6C & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardUtility_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB9F6C = 1;
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
    v4 = sub_1C6BAB0(int___TypeInfo, 1);
    if ( !v4 )
      sub_1C6BC60(0, v5);
    v6 = (System_Int32_array *)v4;
    if ( !*(_DWORD *)(v4 + 24) )
      sub_1C6BC68(v4);
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
  ClassBoardUtility_c *v5; // x0
  struct ClassBoardUtility_StaticFields *static_fields; // x8
  System_String_o *commandSpellIconFormat; // x20
  Il2CppObject *v8; // x19
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x0
  System_String_o *passiveSkillIconFormat; // x20
  Il2CppObject *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF
  int32_t genderType; // [xsp+18h] [xbp-28h] BYREF
  int32_t v17; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4CB9F65 & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardUtility_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    byte_4CB9F65 = 1;
  }
  v5 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v5 = ClassBoardUtility_TypeInfo;
  }
  static_fields = v5->static_fields;
  if ( skillType == 2 )
  {
    commandSpellIconFormat = static_fields->commandSpellIconFormat;
    v17 = iconId;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame )
      sub_1C6BC60(0, v10);
    genderType = SelfUserGame->fields.genderType;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &genderType);
    return System_String__Format_64008100(commandSpellIconFormat, v8, v11, 0);
  }
  else
  {
    passiveSkillIconFormat = static_fields->passiveSkillIconFormat;
    v15 = iconId;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    return System_String__Format(passiveSkillIconFormat, v14, 0);
  }
}


bool ClassBoardUtility__IsPlayedExClassReleaseEffect(int32_t classId, const MethodInfo *method)
{
  __int64 v3; // x19
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v5; // x1
  ClassBoardUtility_c *v6; // x0
  System_String_o *String_71617980; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  System_Func_object__bool__o *v10; // x21

  if ( (byte_4CB9F68 & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardUtility_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_string____78610808);
    sub_1C6BA08(&System_Func_string__bool__TypeInfo);
    sub_1C6BA08(&Method_ClassBoardUtility___c__DisplayClass9_0__IsPlayedExClassReleaseEffect_b__0__);
    sub_1C6BA08(&ClassBoardUtility___c__DisplayClass9_0_TypeInfo);
    byte_4CB9F68 = 1;
  }
  v3 = sub_1C6BC54(ClassBoardUtility___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_DWORD *)(v3 + 16) = classId;
  v6 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v6 = ClassBoardUtility_TypeInfo;
  }
  String_71617980 = UnityEngine_PlayerPrefs__GetString_71617980(v6->static_fields->savePlayedExClassReleaseKey, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String_71617980, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !String_71617980 )
LABEL_10:
    sub_1C6BC60(IsNullOrEmpty, v5);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_71617980, 0x2Cu, 0, 0);
  v10 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v3,
    Method_ClassBoardUtility___c__DisplayClass9_0__IsPlayedExClassReleaseEffect_b__0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_object__51793644(
           v9,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_string____78610808) != 0;
}


bool ClassBoardUtility__IsPlayedGrandExClassReleaseEffect(int32_t classId, const MethodInfo *method)
{
  __int64 v3; // x19
  ClassBoardClassMaster_o *Master_object; // x0
  __int64 v5; // x1
  ClassBoardUtility_c *v6; // x0
  System_String_o *String_71617980; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  System_Func_object__bool__o *v10; // x21
  System_Collections_Generic_List_ClassBoardClassEntity__o *entityList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB9F69 & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardUtility_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_string____78610808);
    sub_1C6BA08(&System_Func_string__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardClassEntity__get_Item__);
    sub_1C6BA08(&Method_ClassBoardUtility___c__DisplayClass10_0__IsPlayedGrandExClassReleaseEffect_b__0__);
    sub_1C6BA08(&ClassBoardUtility___c__DisplayClass10_0_TypeInfo);
    byte_4CB9F69 = 1;
  }
  entityList = 0;
  v3 = sub_1C6BC54(ClassBoardUtility___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_19;
  *(_DWORD *)(v3 + 16) = classId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
                                               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__get_Item__);
  if ( !Master_object )
    goto LABEL_19;
  if ( !LODWORD(Master_object->fields._MasterName_k__BackingField) )
    return 1;
  v6 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v6 = ClassBoardUtility_TypeInfo;
  }
  String_71617980 = UnityEngine_PlayerPrefs__GetString_71617980(v6->static_fields->SavePlayedGrandExClassReleaseKey, 0);
  Master_object = (ClassBoardClassMaster_o *)System_String__IsNullOrEmpty(String_71617980, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    return 0;
  if ( !String_71617980 )
LABEL_19:
    sub_1C6BC60(Master_object, v5);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_71617980, 0x2Cu, 0, 0);
  v10 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v3,
    Method_ClassBoardUtility___c__DisplayClass10_0__IsPlayedGrandExClassReleaseEffect_b__0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_object__51793644(
           v9,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_string____78610808) != 0;
}


bool ClassBoardUtility__IsPlayedReleaseEffect(int32_t classBoardBaseId, const MethodInfo *method)
{
  __int64 v3; // x19
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v5; // x1
  ClassBoardUtility_c *v6; // x0
  System_String_o *String_71617980; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  System_Func_object__bool__o *v10; // x21

  if ( (byte_4CB9F66 & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardUtility_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_string____78610808);
    sub_1C6BA08(&System_Func_string__bool__TypeInfo);
    sub_1C6BA08(&Method_ClassBoardUtility___c__DisplayClass7_0__IsPlayedReleaseEffect_b__0__);
    sub_1C6BA08(&ClassBoardUtility___c__DisplayClass7_0_TypeInfo);
    byte_4CB9F66 = 1;
  }
  v3 = sub_1C6BC54(ClassBoardUtility___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_DWORD *)(v3 + 16) = classBoardBaseId;
  v6 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v6 = ClassBoardUtility_TypeInfo;
  }
  String_71617980 = UnityEngine_PlayerPrefs__GetString_71617980(
                      v6->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String_71617980, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !String_71617980 )
LABEL_10:
    sub_1C6BC60(IsNullOrEmpty, v5);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_71617980, 0x2Cu, 0, 0);
  v10 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v3,
    Method_ClassBoardUtility___c__DisplayClass7_0__IsPlayedReleaseEffect_b__0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_object__51793644(
           v9,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_string____78610808) != 0;
}


bool ClassBoardUtility__IsTargetQuestClear(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  Il2CppObject *MasterData_object; // x19
  int64_t v4; // x20

  if ( (byte_4CB9F64 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB9F64 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  v4 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !MasterData_object )
LABEL_14:
    sub_1C6BC60(Instance, v2);
  return UserQuestMaster__getClearCountsFromId(
           (UserQuestMaster_o *)MasterData_object,
           v4,
           BalanceConfig_TypeInfo->static_fields->ClassBoardReleaseQuestId,
           0) > 0;
}


void ClassBoardUtility__SavePlayedClassBaseReleaseEffect(System_Int32_array *classBaseIds, const MethodInfo *method)
{
  ClassBoardUtility_c *v3; // x0
  System_String_o *String_71617980; // x20
  System_Collections_Generic_List_TSource__o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  ClassBoardUtility___c_c *v9; // x8
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v11; // x22
  struct ClassBoardUtility___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v17; // x22
  int32_t v18; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  ClassBoardUtility_c *v22; // x0
  System_String_o *savePlayedClassBoardBaseReleaseKey; // x19
  System_String_o *v24; // x1

  if ( (byte_4CB9F67 & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardUtility_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C6BA08(&System_Func_string__int__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&Method_System_String_Join_int___);
    sub_1C6BA08(&Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__8_0__);
    sub_1C6BA08(&ClassBoardUtility___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_808/*","*/);
    byte_4CB9F67 = 1;
  }
  v3 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v3 = ClassBoardUtility_TypeInfo;
  }
  String_71617980 = UnityEngine_PlayerPrefs__GetString_71617980(
                      v3->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0);
  IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_String__IsNullOrEmpty(String_71617980, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v7 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  }
  else
  {
    if ( !String_71617980 )
      goto LABEL_29;
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_71617980, 0x2Cu, 0, 0);
    v9 = ClassBoardUtility___c_TypeInfo;
    if ( !ClassBoardUtility___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo);
      v9 = ClassBoardUtility___c_TypeInfo;
    }
    _9__8_0 = (System_Func_object__int__o *)v9->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = ClassBoardUtility___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v9->static_fields->__9;
      _9__8_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__8_0,
        v11,
        Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__8_0__,
        0);
      static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_string__int__o *)_9__8_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v13, v14);
    }
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v8,
                                                                 (System_Func_TSource__TResult__o *)_9__8_0,
                                                                 (const MethodInfo_3171234 *)Method_System_Linq_Enumerable_Select_string__int___);
    IsNullOrEmpty = System_Linq_Enumerable__ToList_int_(
                      v15,
                      (const MethodInfo_317FC78 *)Method_System_Linq_Enumerable_ToList_int___);
    v7 = (System_Collections_Generic_List_int__o *)IsNullOrEmpty;
  }
  if ( !classBaseIds )
LABEL_29:
    sub_1C6BC60(IsNullOrEmpty, v6);
  max_length = classBaseIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v17 = 0;
    do
    {
      if ( v17 >= (unsigned int)max_length )
        sub_1C6BC68(IsNullOrEmpty);
      if ( !v7 )
        goto LABEL_29;
      v18 = classBaseIds->m_Items[v17];
      IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                                      v7,
                                                                      v18,
                                                                      (const MethodInfo_37E3CC8 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        items = v7->fields._items;
        v20 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            v18,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size] = v18;
        }
      }
      LODWORD(max_length) = classBaseIds->max_length;
    }
    while ( (__int64)++v17 < (int)max_length );
  }
  v22 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v22 = ClassBoardUtility_TypeInfo;
  }
  savePlayedClassBoardBaseReleaseKey = v22->static_fields->savePlayedClassBoardBaseReleaseKey;
  v24 = System_String__Join_int_(
          (System_String_o *)StringLiteral_808/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v7,
          (const MethodInfo_31E7090 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(savePlayedClassBoardBaseReleaseKey, v24, 0);
}


void ClassBoardUtility__SavePlayedExClassReleaseEffect(System_Int32_array *classId, const MethodInfo *method)
{
  ClassBoardUtility_c *v3; // x0
  System_String_o *String_71617980; // x20
  System_Collections_Generic_List_TSource__o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  ClassBoardUtility___c_c *v9; // x8
  System_Func_object__int__o *_9__11_0; // x21
  Il2CppObject *v11; // x22
  struct ClassBoardUtility___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v17; // x22
  int32_t v18; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  ClassBoardUtility_c *v22; // x0
  System_String_o *savePlayedExClassReleaseKey; // x19
  System_String_o *v24; // x1

  if ( (byte_4CB9F6A & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardUtility_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C6BA08(&System_Func_string__int__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&Method_System_String_Join_int___);
    sub_1C6BA08(&Method_ClassBoardUtility___c__SavePlayedExClassReleaseEffect_b__11_0__);
    sub_1C6BA08(&ClassBoardUtility___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_808/*","*/);
    byte_4CB9F6A = 1;
  }
  v3 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v3 = ClassBoardUtility_TypeInfo;
  }
  String_71617980 = UnityEngine_PlayerPrefs__GetString_71617980(v3->static_fields->savePlayedExClassReleaseKey, 0);
  IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_String__IsNullOrEmpty(String_71617980, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v7 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  }
  else
  {
    if ( !String_71617980 )
      goto LABEL_29;
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_71617980, 0x2Cu, 0, 0);
    v9 = ClassBoardUtility___c_TypeInfo;
    if ( !ClassBoardUtility___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo);
      v9 = ClassBoardUtility___c_TypeInfo;
    }
    _9__11_0 = (System_Func_object__int__o *)v9->static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = ClassBoardUtility___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v9->static_fields->__9;
      _9__11_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__11_0,
        v11,
        Method_ClassBoardUtility___c__SavePlayedExClassReleaseEffect_b__11_0__,
        0);
      static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      static_fields->__9__11_0 = (struct System_Func_string__int__o *)_9__11_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v13, v14);
    }
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v8,
                                                                 (System_Func_TSource__TResult__o *)_9__11_0,
                                                                 (const MethodInfo_3171234 *)Method_System_Linq_Enumerable_Select_string__int___);
    IsNullOrEmpty = System_Linq_Enumerable__ToList_int_(
                      v15,
                      (const MethodInfo_317FC78 *)Method_System_Linq_Enumerable_ToList_int___);
    v7 = (System_Collections_Generic_List_int__o *)IsNullOrEmpty;
  }
  if ( !classId )
LABEL_29:
    sub_1C6BC60(IsNullOrEmpty, v6);
  max_length = classId->max_length;
  if ( (int)max_length >= 1 )
  {
    v17 = 0;
    do
    {
      if ( v17 >= (unsigned int)max_length )
        sub_1C6BC68(IsNullOrEmpty);
      if ( !v7 )
        goto LABEL_29;
      v18 = classId->m_Items[v17];
      IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                                      v7,
                                                                      v18,
                                                                      (const MethodInfo_37E3CC8 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        items = v7->fields._items;
        v20 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            v18,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size] = v18;
        }
      }
      LODWORD(max_length) = classId->max_length;
    }
    while ( (__int64)++v17 < (int)max_length );
  }
  v22 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v22 = ClassBoardUtility_TypeInfo;
  }
  savePlayedExClassReleaseKey = v22->static_fields->savePlayedExClassReleaseKey;
  v24 = System_String__Join_int_(
          (System_String_o *)StringLiteral_808/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v7,
          (const MethodInfo_31E7090 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(savePlayedExClassReleaseKey, v24, 0);
}


void ClassBoardUtility__SavePlayedGrandExClassReleaseEffect(System_Int32_array *classId, const MethodInfo *method)
{
  ClassBoardUtility_c *v3; // x0
  System_String_o *String_71617980; // x20
  System_Collections_Generic_List_TSource__o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  ClassBoardUtility___c_c *v9; // x8
  System_Func_object__int__o *_9__12_0; // x21
  Il2CppObject *v11; // x22
  struct ClassBoardUtility___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v17; // x22
  int32_t v18; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  ClassBoardUtility_c *v22; // x0
  System_String_o *SavePlayedGrandExClassReleaseKey; // x19
  System_String_o *v24; // x1

  if ( (byte_4CB9F6B & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardUtility_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C6BA08(&System_Func_string__int__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&Method_System_String_Join_int___);
    sub_1C6BA08(&Method_ClassBoardUtility___c__SavePlayedGrandExClassReleaseEffect_b__12_0__);
    sub_1C6BA08(&ClassBoardUtility___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_808/*","*/);
    byte_4CB9F6B = 1;
  }
  v3 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v3 = ClassBoardUtility_TypeInfo;
  }
  String_71617980 = UnityEngine_PlayerPrefs__GetString_71617980(v3->static_fields->SavePlayedGrandExClassReleaseKey, 0);
  IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_String__IsNullOrEmpty(String_71617980, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v7 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  }
  else
  {
    if ( !String_71617980 )
      goto LABEL_29;
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_71617980, 0x2Cu, 0, 0);
    v9 = ClassBoardUtility___c_TypeInfo;
    if ( !ClassBoardUtility___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo);
      v9 = ClassBoardUtility___c_TypeInfo;
    }
    _9__12_0 = (System_Func_object__int__o *)v9->static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = ClassBoardUtility___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v9->static_fields->__9;
      _9__12_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__12_0,
        v11,
        Method_ClassBoardUtility___c__SavePlayedGrandExClassReleaseEffect_b__12_0__,
        0);
      static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      static_fields->__9__12_0 = (struct System_Func_string__int__o *)_9__12_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v13, v14);
    }
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v8,
                                                                 (System_Func_TSource__TResult__o *)_9__12_0,
                                                                 (const MethodInfo_3171234 *)Method_System_Linq_Enumerable_Select_string__int___);
    IsNullOrEmpty = System_Linq_Enumerable__ToList_int_(
                      v15,
                      (const MethodInfo_317FC78 *)Method_System_Linq_Enumerable_ToList_int___);
    v7 = (System_Collections_Generic_List_int__o *)IsNullOrEmpty;
  }
  if ( !classId )
LABEL_29:
    sub_1C6BC60(IsNullOrEmpty, v6);
  max_length = classId->max_length;
  if ( (int)max_length >= 1 )
  {
    v17 = 0;
    do
    {
      if ( v17 >= (unsigned int)max_length )
        sub_1C6BC68(IsNullOrEmpty);
      if ( !v7 )
        goto LABEL_29;
      v18 = classId->m_Items[v17];
      IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                                      v7,
                                                                      v18,
                                                                      (const MethodInfo_37E3CC8 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        items = v7->fields._items;
        v20 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            v18,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size] = v18;
        }
      }
      LODWORD(max_length) = classId->max_length;
    }
    while ( (__int64)++v17 < (int)max_length );
  }
  v22 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v22 = ClassBoardUtility_TypeInfo;
  }
  SavePlayedGrandExClassReleaseKey = v22->static_fields->SavePlayedGrandExClassReleaseKey;
  v24 = System_String__Join_int_(
          (System_String_o *)StringLiteral_808/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v7,
          (const MethodInfo_31E7090 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(SavePlayedGrandExClassReleaseKey, v24, 0);
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
  __int64 v18; // x1
  int32_t ClassBoardBaseId; // w27
  int max_length; // w8
  unsigned int v21; // w22
  int32_t v22; // w21
  int v23; // w28
  int v24; // w19
  int v25; // w29
  ClassBoardInfo_o *v26; // x20
  struct System_Int32_array *squareIds; // x8
  struct System_Int32_array *v28; // x8
  ClassBoardClassMaster_o *v29; // [xsp+0h] [xbp-90h]
  int32_t *v30; // [xsp+8h] [xbp-88h]
  int32_t *v31; // [xsp+10h] [xbp-80h]
  bool *v32; // [xsp+18h] [xbp-78h]
  bool *v33; // [xsp+20h] [xbp-70h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4CB9F6D & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_4CB9F6D = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
LABEL_41:
    sub_1C6BC60(Master_object, v18);
  ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(Master_object, classId, 0);
  if ( ClassBoardBaseId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
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
  v30 = openClassBoardNum;
  v31 = openGrandClassBoardNum;
  v32 = isMaxOpenClassBoard;
  v33 = isMaxOpenGrandClassBoard;
  if ( max_length >= 1 )
  {
    v21 = 0;
    v22 = 0;
    v23 = -1;
    v24 = -1;
    v25 = -1;
    v29 = Master_object;
    while ( 1 )
    {
      if ( v21 >= max_length )
        sub_1C6BC68(Master_object);
      v26 = boardInfo->m_Items[v21];
      if ( !v26 )
        goto LABEL_41;
      if ( v26->fields.classBoardBaseId == ClassBoardBaseId )
      {
        if ( !classBoardMaxDictionary )
          goto LABEL_41;
        Master_object = (ClassBoardClassMaster_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                     classBoardMaxDictionary,
                                                     ClassBoardBaseId,
                                                     (const MethodInfo_3449C24 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          Master_object = (ClassBoardClassMaster_o *)ClassBoardInfo__IsReleasedClassId(v26, classId, 0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = (ClassBoardClassMaster_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                         classBoardMaxDictionary,
                                                         ClassBoardBaseId,
                                                         (const MethodInfo_344999C *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            squareIds = v26->fields.squareIds;
            if ( !squareIds )
              goto LABEL_41;
            v22 = squareIds->max_length;
            v25 = (int)Master_object;
          }
        }
      }
      if ( !isGrandSvt )
        goto LABEL_36;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !Master_object )
        goto LABEL_41;
      Master_object = (ClassBoardClassMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                   &entity,
                                                   v26->fields.classBoardBaseId,
                                                   (const MethodInfo_33F9128 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
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
      if ( (int)++v21 >= max_length )
        goto LABEL_40;
    }
    if ( v29 && v29->fields._MasterKind_k__BackingField == v26->fields.classBoardBaseId )
    {
      if ( !entity )
        goto LABEL_41;
      if ( !classBoardMaxDictionary )
        goto LABEL_41;
      Master_object = (ClassBoardClassMaster_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                   classBoardMaxDictionary,
                                                   (int32_t)entity[1].klass,
                                                   (const MethodInfo_344999C *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      v28 = v26->fields.squareIds;
      if ( !v28 )
        goto LABEL_41;
      v23 = v28->max_length;
      v24 = (int)Master_object;
    }
LABEL_36:
    if ( ((v24 | v25) & 0x80000000) == 0 )
      goto LABEL_40;
    goto LABEL_37;
  }
  v22 = 0;
  v23 = -1;
  v24 = -1;
  v25 = -1;
LABEL_40:
  *v30 = v22;
  *v31 = v23;
  *v32 = v25 > 0 && v22 >= v25;
  *v33 = v24 > 0 && v23 >= v24;
}


void ClassBoardUtility___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB9F6F & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardUtility___c_TypeInfo);
    byte_4CB9F6F = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(ClassBoardUtility___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardUtility___c_TypeInfo->static_fields->__9 = (struct ClassBoardUtility___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)ClassBoardUtility___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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