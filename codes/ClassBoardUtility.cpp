void ClassBoardUtility___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct ClassBoardUtility_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct ClassBoardUtility_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct ClassBoardUtility_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  struct ClassBoardUtility_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_593C54B & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardUtility_TypeInfo);
    sub_21FFC50(&StringLiteral_13109/*"SavePlayedClassBoardBaseRelease"*/);
    sub_21FFC50(&StringLiteral_13110/*"SavePlayedExClassRelease"*/);
    sub_21FFC50(&StringLiteral_24719/*"skill_{0:D5}"*/);
    sub_21FFC50(&StringLiteral_13111/*"SavePlayedGrandExClassRelease"*/);
    sub_21FFC50(&StringLiteral_19176/*"cs_{0:D4}{1}"*/);
    byte_593C54B = 1;
  }
  v7 = StringLiteral_19176/*"cs_{0:D4}{1}"*/;
  ClassBoardUtility_TypeInfo->static_fields->commandSpellIconFormat = (struct System_String_o *)StringLiteral_19176/*"cs_{0:D4}{1}"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)ClassBoardUtility_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  v8 = StringLiteral_24719/*"skill_{0:D5}"*/;
  static_fields = ClassBoardUtility_TypeInfo->static_fields;
  static_fields->passiveSkillIconFormat = (struct System_String_o *)StringLiteral_24719/*"skill_{0:D5}"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->passiveSkillIconFormat,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_13109/*"SavePlayedClassBoardBaseRelease"*/;
  v17 = ClassBoardUtility_TypeInfo->static_fields;
  v17->savePlayedClassBoardBaseReleaseKey = (struct System_String_o *)StringLiteral_13109/*"SavePlayedClassBoardBaseRelease"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v17->savePlayedClassBoardBaseReleaseKey,
    v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = StringLiteral_13110/*"SavePlayedExClassRelease"*/;
  v25 = ClassBoardUtility_TypeInfo->static_fields;
  v25->savePlayedExClassReleaseKey = (struct System_String_o *)StringLiteral_13110/*"SavePlayedExClassRelease"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->savePlayedExClassReleaseKey, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_13111/*"SavePlayedGrandExClassRelease"*/;
  v33 = ClassBoardUtility_TypeInfo->static_fields;
  v33->SavePlayedGrandExClassReleaseKey = (struct System_String_o *)StringLiteral_13111/*"SavePlayedGrandExClassRelease"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v33->SavePlayedGrandExClassReleaseKey,
    v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
}


void ClassBoardUtility__FirstSavePlayedExClassReleaseEffect(const MethodInfo *method)
{
  __int64 v1; // x1
  ClassBoardUtility_c *v2; // x0
  bool HasKey; // w19
  bool v4; // w0
  __int64 v5; // x1
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  System_Int32_array *v8; // x19
  ClassBoardUtility_c *v9; // x0
  ClassBoardUtility_c *v10; // x0

  if ( (byte_593C549 & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardUtility_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593C549 = 1;
  }
  v2 = ClassBoardUtility_TypeInfo;
  if ( !*(&ClassBoardUtility_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v1);
    v2 = ClassBoardUtility_TypeInfo;
  }
  HasKey = UnityEngine_PlayerPrefs__HasKey(v2->static_fields->savePlayedClassBoardBaseReleaseKey, 0);
  v4 = UnityEngine_PlayerPrefs__HasKey(ClassBoardUtility_TypeInfo->static_fields->savePlayedExClassReleaseKey, 0);
  if ( !HasKey || v4 )
  {
    if ( !v4 )
    {
      v10 = ClassBoardUtility_TypeInfo;
      if ( !*(&ClassBoardUtility_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v5);
        v10 = ClassBoardUtility_TypeInfo;
      }
      UnityEngine_PlayerPrefs__SetString(
        v10->static_fields->savePlayedExClassReleaseKey,
        (System_String_o *)StringLiteral_1/*""*/,
        0);
    }
  }
  else
  {
    v6 = sub_21FFD10(int___TypeInfo, 1);
    if ( !v6 )
      sub_21FFECC(0, v7);
    v8 = (System_Int32_array *)v6;
    if ( !*(_DWORD *)(v6 + 24) )
      sub_21FFED4(v6);
    v9 = ClassBoardUtility_TypeInfo;
    v8->m_Items[0] = 10;
    if ( !*(&v9->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v9, v7);
    ClassBoardUtility__SavePlayedExClassReleaseEffect(v8, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ClassBoardUtility__GetClassBoardSkillIconName(
        int32_t iconId,
        int32_t skillType,
        const MethodInfo *method)
{
  ClassBoardUtility_c *v5; // x0
  int v6; // w8
  System_String_o **p_commandSpellIconFormat; // x8
  System_String_o *v8; // x20
  Il2CppObject *v9; // x19
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x0
  struct ClassBoardUtility_StaticFields *static_fields; // x8
  System_String_o *passiveSkillIconFormat; // x20
  Il2CppObject *v16; // x0
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF
  int32_t genderType; // [xsp+18h] [xbp-28h] BYREF
  int32_t v19; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_593C542 & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardUtility_TypeInfo);
    byte_593C542 = 1;
  }
  v5 = ClassBoardUtility_TypeInfo;
  v6 = *(&ClassBoardUtility_TypeInfo->_2.cctor_finished + 1);
  if ( skillType == 2 )
  {
    if ( !v6 )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, *(_QWORD *)&skillType);
      v5 = ClassBoardUtility_TypeInfo;
    }
    p_commandSpellIconFormat = &v5->static_fields->commandSpellIconFormat;
    v19 = iconId;
    v8 = *p_commandSpellIconFormat;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v19);
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame )
      sub_21FFECC(0, v11);
    genderType = SelfUserGame->fields.genderType;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &genderType);
    return System_String__Format_75484576(v8, v9, v12, 0);
  }
  else
  {
    if ( !v6 )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, *(_QWORD *)&skillType);
      v5 = ClassBoardUtility_TypeInfo;
    }
    static_fields = v5->static_fields;
    v17 = iconId;
    passiveSkillIconFormat = static_fields->passiveSkillIconFormat;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v17);
    return System_String__Format(passiveSkillIconFormat, v16, 0);
  }
}


bool ClassBoardUtility__IsPlayedExClassReleaseEffect(int32_t classId, const MethodInfo *method)
{
  __int64 v3; // x19
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v5; // x1
  ClassBoardUtility_c *v6; // x0
  System_String_o *String_83184936; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  System_Func_object__bool__o *v10; // x21

  if ( (byte_593C545 & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardUtility_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_string____91526480);
    sub_21FFC50(&System_Func_string__bool__TypeInfo);
    sub_21FFC50(&Method_ClassBoardUtility___c__DisplayClass9_0__IsPlayedExClassReleaseEffect_b__0__);
    sub_21FFC50(&ClassBoardUtility___c__DisplayClass9_0_TypeInfo);
    byte_593C545 = 1;
  }
  v3 = sub_21FFEBC(ClassBoardUtility___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_DWORD *)(v3 + 16) = classId;
  v6 = ClassBoardUtility_TypeInfo;
  if ( !*(&ClassBoardUtility_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v5);
    v6 = ClassBoardUtility_TypeInfo;
  }
  String_83184936 = UnityEngine_PlayerPrefs__GetString_83184936(v6->static_fields->savePlayedExClassReleaseKey, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String_83184936, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !String_83184936 )
LABEL_10:
    sub_21FFECC(IsNullOrEmpty, v5);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_83184936, 0x2Cu, 0, 0);
  v10 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v3,
    Method_ClassBoardUtility___c__DisplayClass9_0__IsPlayedExClassReleaseEffect_b__0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_object__59044732(
           v9,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_string____91526480) != 0;
}


bool ClassBoardUtility__IsPlayedGrandExClassReleaseEffect(int32_t classId, const MethodInfo *method)
{
  __int64 v3; // x19
  ClassBoardClassMaster_o *Master_object; // x0
  __int64 v5; // x1
  DataManager_c *v6; // x0
  int v7; // w8
  ClassBoardUtility_c *v8; // x0
  System_String_o *String_83184936; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x20
  System_Func_object__bool__o *v12; // x21
  System_Collections_Generic_List_ClassBoardClassEntity__o *entityList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593C546 & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardUtility_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_string____91526480);
    sub_21FFC50(&System_Func_string__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardClassEntity__get_Item__);
    sub_21FFC50(&Method_ClassBoardUtility___c__DisplayClass10_0__IsPlayedGrandExClassReleaseEffect_b__0__);
    sub_21FFC50(&ClassBoardUtility___c__DisplayClass10_0_TypeInfo);
    byte_593C546 = 1;
  }
  entityList = 0;
  v3 = sub_21FFEBC(ClassBoardUtility___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_19;
  v6 = DataManager_TypeInfo;
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  *(_DWORD *)(v3 + 16) = classId;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(v6, v5);
  Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
                                               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__get_Item__);
  if ( !Master_object )
    goto LABEL_19;
  if ( !LODWORD(Master_object->fields._MasterName_k__BackingField) )
    return 1;
  v8 = ClassBoardUtility_TypeInfo;
  if ( !*(&ClassBoardUtility_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v5);
    v8 = ClassBoardUtility_TypeInfo;
  }
  String_83184936 = UnityEngine_PlayerPrefs__GetString_83184936(v8->static_fields->SavePlayedGrandExClassReleaseKey, 0);
  Master_object = (ClassBoardClassMaster_o *)System_String__IsNullOrEmpty(String_83184936, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    return 0;
  if ( !String_83184936 )
LABEL_19:
    sub_21FFECC(Master_object, v5);
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_83184936, 0x2Cu, 0, 0);
  v12 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v3,
    Method_ClassBoardUtility___c__DisplayClass10_0__IsPlayedGrandExClassReleaseEffect_b__0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_object__59044732(
           v11,
           (System_Func_TSource__bool__o *)v12,
           (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_string____91526480) != 0;
}


bool ClassBoardUtility__IsPlayedReleaseEffect(int32_t classBoardBaseId, const MethodInfo *method)
{
  __int64 v3; // x19
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v5; // x1
  ClassBoardUtility_c *v6; // x0
  System_String_o *String_83184936; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  System_Func_object__bool__o *v10; // x21

  if ( (byte_593C543 & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardUtility_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_string____91526480);
    sub_21FFC50(&System_Func_string__bool__TypeInfo);
    sub_21FFC50(&Method_ClassBoardUtility___c__DisplayClass7_0__IsPlayedReleaseEffect_b__0__);
    sub_21FFC50(&ClassBoardUtility___c__DisplayClass7_0_TypeInfo);
    byte_593C543 = 1;
  }
  v3 = sub_21FFEBC(ClassBoardUtility___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_DWORD *)(v3 + 16) = classBoardBaseId;
  v6 = ClassBoardUtility_TypeInfo;
  if ( !*(&ClassBoardUtility_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v5);
    v6 = ClassBoardUtility_TypeInfo;
  }
  String_83184936 = UnityEngine_PlayerPrefs__GetString_83184936(
                      v6->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String_83184936, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !String_83184936 )
LABEL_10:
    sub_21FFECC(IsNullOrEmpty, v5);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_83184936, 0x2Cu, 0, 0);
  v10 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v3,
    Method_ClassBoardUtility___c__DisplayClass7_0__IsPlayedReleaseEffect_b__0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_object__59044732(
           v9,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_string____91526480) != 0;
}


bool ClassBoardUtility__IsTargetQuestClear(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  Il2CppObject *MasterData_object; // x19
  int64_t v4; // x20

  if ( (byte_593C541 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593C541 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v2);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v2);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  v4 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v2);
  if ( !MasterData_object )
LABEL_14:
    sub_21FFECC(Instance, v2);
  return UserQuestMaster__getClearCountsFromId(
           (UserQuestMaster_o *)MasterData_object,
           v4,
           BalanceConfig_TypeInfo->static_fields->ClassBoardReleaseQuestId,
           0) > 0;
}


void ClassBoardUtility__SavePlayedClassBaseReleaseEffect(System_Int32_array *classBaseIds, const MethodInfo *method)
{
  ClassBoardUtility_c *v3; // x0
  System_String_o *String_83184936; // x20
  System_Collections_Generic_List_TSource__o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x20
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  ClassBoardUtility___c_c *v10; // x8
  struct ClassBoardUtility___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__8_0; // x21
  Il2CppObject *v13; // x22
  struct ClassBoardUtility___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v23; // x22
  int32_t v24; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  ClassBoardUtility_c *v28; // x0
  System_String_o *savePlayedClassBoardBaseReleaseKey; // x19
  System_String_o *v30; // x1

  if ( (byte_593C544 & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardUtility_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_int___);
    sub_21FFC50(&System_Func_string__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&Method_System_String_Join_int___);
    sub_21FFC50(&Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__8_0__);
    sub_21FFC50(&ClassBoardUtility___c_TypeInfo);
    sub_21FFC50(&StringLiteral_869/*","*/);
    byte_593C544 = 1;
  }
  v3 = ClassBoardUtility_TypeInfo;
  if ( !*(&ClassBoardUtility_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, method);
    v3 = ClassBoardUtility_TypeInfo;
  }
  String_83184936 = UnityEngine_PlayerPrefs__GetString_83184936(
                      v3->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0);
  IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_String__IsNullOrEmpty(String_83184936, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v7 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  }
  else
  {
    if ( !String_83184936 )
      goto LABEL_29;
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_83184936, 0x2Cu, 0, 0);
    v10 = ClassBoardUtility___c_TypeInfo;
    if ( !*(&ClassBoardUtility___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo, v8);
      v10 = ClassBoardUtility___c_TypeInfo;
    }
    static_fields = v10->static_fields;
    _9__8_0 = (System_Func_object__int__o *)static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !*(&v10->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v10, v8);
        static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      }
      v13 = (Il2CppObject *)static_fields->__9;
      _9__8_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__8_0,
        v13,
        Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__8_0__,
        0);
      v14 = ClassBoardUtility___c_TypeInfo->static_fields;
      v14->__9__8_0 = (struct System_Func_string__int__o *)_9__8_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->__9__8_0, (int32_t)_9__8_0, v15, v16, v17, v18, v19, v20);
    }
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v9,
                                                                 (System_Func_TSource__TResult__o *)_9__8_0,
                                                                 (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_string__int___);
    IsNullOrEmpty = System_Linq_Enumerable__ToList_int_(
                      v21,
                      (const MethodInfo_386D6A8 *)Method_System_Linq_Enumerable_ToList_int___);
    v7 = (System_Collections_Generic_List_int__o *)IsNullOrEmpty;
  }
  if ( !classBaseIds )
LABEL_29:
    sub_21FFECC(IsNullOrEmpty, v6);
  max_length = classBaseIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v23 = 0;
    do
    {
      if ( v23 >= (unsigned int)max_length )
        sub_21FFED4(IsNullOrEmpty);
      if ( !v7 )
        goto LABEL_29;
      v24 = classBaseIds->m_Items[v23];
      IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                                      v7,
                                                                      v24,
                                                                      (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        items = v7->fields._items;
        v26 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            v24,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size] = v24;
        }
      }
      LODWORD(max_length) = classBaseIds->max_length;
    }
    while ( (__int64)++v23 < (int)max_length );
  }
  v28 = ClassBoardUtility_TypeInfo;
  if ( !*(&ClassBoardUtility_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v6);
    v28 = ClassBoardUtility_TypeInfo;
  }
  savePlayedClassBoardBaseReleaseKey = v28->static_fields->savePlayedClassBoardBaseReleaseKey;
  v30 = System_String__Join_int_(
          (System_String_o *)StringLiteral_869/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v7,
          (const MethodInfo_3957568 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(savePlayedClassBoardBaseReleaseKey, v30, 0);
}


void ClassBoardUtility__SavePlayedExClassReleaseEffect(System_Int32_array *classId, const MethodInfo *method)
{
  ClassBoardUtility_c *v3; // x0
  System_String_o *String_83184936; // x20
  System_Collections_Generic_List_TSource__o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x20
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  ClassBoardUtility___c_c *v10; // x8
  struct ClassBoardUtility___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__11_0; // x21
  Il2CppObject *v13; // x22
  struct ClassBoardUtility___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v23; // x22
  int32_t v24; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  ClassBoardUtility_c *v28; // x0
  System_String_o *savePlayedExClassReleaseKey; // x19
  System_String_o *v30; // x1

  if ( (byte_593C547 & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardUtility_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_int___);
    sub_21FFC50(&System_Func_string__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&Method_System_String_Join_int___);
    sub_21FFC50(&Method_ClassBoardUtility___c__SavePlayedExClassReleaseEffect_b__11_0__);
    sub_21FFC50(&ClassBoardUtility___c_TypeInfo);
    sub_21FFC50(&StringLiteral_869/*","*/);
    byte_593C547 = 1;
  }
  v3 = ClassBoardUtility_TypeInfo;
  if ( !*(&ClassBoardUtility_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, method);
    v3 = ClassBoardUtility_TypeInfo;
  }
  String_83184936 = UnityEngine_PlayerPrefs__GetString_83184936(v3->static_fields->savePlayedExClassReleaseKey, 0);
  IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_String__IsNullOrEmpty(String_83184936, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v7 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  }
  else
  {
    if ( !String_83184936 )
      goto LABEL_29;
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_83184936, 0x2Cu, 0, 0);
    v10 = ClassBoardUtility___c_TypeInfo;
    if ( !*(&ClassBoardUtility___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo, v8);
      v10 = ClassBoardUtility___c_TypeInfo;
    }
    static_fields = v10->static_fields;
    _9__11_0 = (System_Func_object__int__o *)static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( !*(&v10->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v10, v8);
        static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      }
      v13 = (Il2CppObject *)static_fields->__9;
      _9__11_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__11_0,
        v13,
        Method_ClassBoardUtility___c__SavePlayedExClassReleaseEffect_b__11_0__,
        0);
      v14 = ClassBoardUtility___c_TypeInfo->static_fields;
      v14->__9__11_0 = (struct System_Func_string__int__o *)_9__11_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->__9__11_0, (int32_t)_9__11_0, v15, v16, v17, v18, v19, v20);
    }
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v9,
                                                                 (System_Func_TSource__TResult__o *)_9__11_0,
                                                                 (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_string__int___);
    IsNullOrEmpty = System_Linq_Enumerable__ToList_int_(
                      v21,
                      (const MethodInfo_386D6A8 *)Method_System_Linq_Enumerable_ToList_int___);
    v7 = (System_Collections_Generic_List_int__o *)IsNullOrEmpty;
  }
  if ( !classId )
LABEL_29:
    sub_21FFECC(IsNullOrEmpty, v6);
  max_length = classId->max_length;
  if ( (int)max_length >= 1 )
  {
    v23 = 0;
    do
    {
      if ( v23 >= (unsigned int)max_length )
        sub_21FFED4(IsNullOrEmpty);
      if ( !v7 )
        goto LABEL_29;
      v24 = classId->m_Items[v23];
      IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                                      v7,
                                                                      v24,
                                                                      (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        items = v7->fields._items;
        v26 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            v24,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size] = v24;
        }
      }
      LODWORD(max_length) = classId->max_length;
    }
    while ( (__int64)++v23 < (int)max_length );
  }
  v28 = ClassBoardUtility_TypeInfo;
  if ( !*(&ClassBoardUtility_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v6);
    v28 = ClassBoardUtility_TypeInfo;
  }
  savePlayedExClassReleaseKey = v28->static_fields->savePlayedExClassReleaseKey;
  v30 = System_String__Join_int_(
          (System_String_o *)StringLiteral_869/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v7,
          (const MethodInfo_3957568 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(savePlayedExClassReleaseKey, v30, 0);
}


void ClassBoardUtility__SavePlayedGrandExClassReleaseEffect(System_Int32_array *classId, const MethodInfo *method)
{
  ClassBoardUtility_c *v3; // x0
  System_String_o *String_83184936; // x20
  System_Collections_Generic_List_TSource__o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x20
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  ClassBoardUtility___c_c *v10; // x8
  struct ClassBoardUtility___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__12_0; // x21
  Il2CppObject *v13; // x22
  struct ClassBoardUtility___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v23; // x22
  int32_t v24; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  ClassBoardUtility_c *v28; // x0
  System_String_o *SavePlayedGrandExClassReleaseKey; // x19
  System_String_o *v30; // x1

  if ( (byte_593C548 & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardUtility_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_int___);
    sub_21FFC50(&System_Func_string__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&Method_System_String_Join_int___);
    sub_21FFC50(&Method_ClassBoardUtility___c__SavePlayedGrandExClassReleaseEffect_b__12_0__);
    sub_21FFC50(&ClassBoardUtility___c_TypeInfo);
    sub_21FFC50(&StringLiteral_869/*","*/);
    byte_593C548 = 1;
  }
  v3 = ClassBoardUtility_TypeInfo;
  if ( !*(&ClassBoardUtility_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, method);
    v3 = ClassBoardUtility_TypeInfo;
  }
  String_83184936 = UnityEngine_PlayerPrefs__GetString_83184936(v3->static_fields->SavePlayedGrandExClassReleaseKey, 0);
  IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_String__IsNullOrEmpty(String_83184936, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v7 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  }
  else
  {
    if ( !String_83184936 )
      goto LABEL_29;
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_83184936, 0x2Cu, 0, 0);
    v10 = ClassBoardUtility___c_TypeInfo;
    if ( !*(&ClassBoardUtility___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardUtility___c_TypeInfo, v8);
      v10 = ClassBoardUtility___c_TypeInfo;
    }
    static_fields = v10->static_fields;
    _9__12_0 = (System_Func_object__int__o *)static_fields->__9__12_0;
    if ( !_9__12_0 )
    {
      if ( !*(&v10->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v10, v8);
        static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      }
      v13 = (Il2CppObject *)static_fields->__9;
      _9__12_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__12_0,
        v13,
        Method_ClassBoardUtility___c__SavePlayedGrandExClassReleaseEffect_b__12_0__,
        0);
      v14 = ClassBoardUtility___c_TypeInfo->static_fields;
      v14->__9__12_0 = (struct System_Func_string__int__o *)_9__12_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->__9__12_0, (int32_t)_9__12_0, v15, v16, v17, v18, v19, v20);
    }
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v9,
                                                                 (System_Func_TSource__TResult__o *)_9__12_0,
                                                                 (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_string__int___);
    IsNullOrEmpty = System_Linq_Enumerable__ToList_int_(
                      v21,
                      (const MethodInfo_386D6A8 *)Method_System_Linq_Enumerable_ToList_int___);
    v7 = (System_Collections_Generic_List_int__o *)IsNullOrEmpty;
  }
  if ( !classId )
LABEL_29:
    sub_21FFECC(IsNullOrEmpty, v6);
  max_length = classId->max_length;
  if ( (int)max_length >= 1 )
  {
    v23 = 0;
    do
    {
      if ( v23 >= (unsigned int)max_length )
        sub_21FFED4(IsNullOrEmpty);
      if ( !v7 )
        goto LABEL_29;
      v24 = classId->m_Items[v23];
      IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                                      v7,
                                                                      v24,
                                                                      (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        items = v7->fields._items;
        v26 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_29;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            v24,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size] = v24;
        }
      }
      LODWORD(max_length) = classId->max_length;
    }
    while ( (__int64)++v23 < (int)max_length );
  }
  v28 = ClassBoardUtility_TypeInfo;
  if ( !*(&ClassBoardUtility_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo, v6);
    v28 = ClassBoardUtility_TypeInfo;
  }
  SavePlayedGrandExClassReleaseKey = v28->static_fields->SavePlayedGrandExClassReleaseKey;
  v30 = System_String__Join_int_(
          (System_String_o *)StringLiteral_869/*","*/,
          (System_Collections_Generic_IEnumerable_T__o *)v7,
          (const MethodInfo_3957568 *)Method_System_String_Join_int___);
  UnityEngine_PlayerPrefs__SetString(SavePlayedGrandExClassReleaseKey, v30, 0);
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
  int v17; // w8
  ClassBoardClassMaster_o *Master_object; // x0
  __int64 v19; // x1
  int32_t ClassBoardBaseId; // w27
  int max_length; // w8
  unsigned int v22; // w22
  int32_t v23; // w21
  int v24; // w28
  int v25; // w19
  int v26; // w29
  ClassBoardInfo_o *v27; // x20
  struct System_Int32_array *squareIds; // x8
  struct System_Int32_array *v29; // x8
  bool v30; // cc
  char v31; // w8
  bool v32; // cc
  char v33; // w8
  ClassBoardClassMaster_o *v34; // [xsp+0h] [xbp-90h]
  int32_t *v35; // [xsp+8h] [xbp-88h]
  int32_t *v36; // [xsp+10h] [xbp-80h]
  bool *v37; // [xsp+18h] [xbp-78h]
  bool *v38; // [xsp+20h] [xbp-70h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_593C54A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_593C54A = 1;
  }
  v17 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v17 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, openGrandClassBoardNum);
  Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
LABEL_54:
    sub_21FFECC(Master_object, v19);
  ClassBoardBaseId = ClassBoardClassMaster__GetClassBoardBaseId(Master_object, classId, 0);
  if ( ClassBoardBaseId )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
    Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( !Master_object )
      goto LABEL_54;
    Master_object = (ClassBoardClassMaster_o *)ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
                                                 (ClassBoardBaseMaster_o *)Master_object,
                                                 ClassBoardBaseId,
                                                 0);
    if ( !boardInfo )
      goto LABEL_54;
  }
  else
  {
    Master_object = 0;
    if ( !boardInfo )
      goto LABEL_54;
  }
  max_length = boardInfo->max_length;
  v35 = openClassBoardNum;
  v36 = openGrandClassBoardNum;
  v37 = isMaxOpenClassBoard;
  v38 = isMaxOpenGrandClassBoard;
  if ( max_length >= 1 )
  {
    v22 = 0;
    v23 = 0;
    v24 = -1;
    v25 = -1;
    v26 = -1;
    v34 = Master_object;
    while ( 1 )
    {
      if ( v22 >= max_length )
        sub_21FFED4(Master_object);
      v27 = boardInfo->m_Items[v22];
      if ( !v27 )
        goto LABEL_54;
      if ( v27->fields.classBoardBaseId == ClassBoardBaseId )
      {
        if ( !classBoardMaxDictionary )
          goto LABEL_54;
        Master_object = (ClassBoardClassMaster_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                     classBoardMaxDictionary,
                                                     ClassBoardBaseId,
                                                     (const MethodInfo_3F5F664 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          Master_object = (ClassBoardClassMaster_o *)ClassBoardInfo__IsReleasedClassId(v27, classId, 0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = (ClassBoardClassMaster_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                         classBoardMaxDictionary,
                                                         ClassBoardBaseId,
                                                         (const MethodInfo_3F5F3DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            squareIds = v27->fields.squareIds;
            if ( !squareIds )
              goto LABEL_54;
            v23 = squareIds->max_length;
            v26 = (int)Master_object;
          }
        }
      }
      if ( isGrandSvt )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
        Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
        if ( !Master_object )
          goto LABEL_54;
        Master_object = (ClassBoardClassMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                     &entity,
                                                     v27->fields.classBoardBaseId,
                                                     (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          Master_object = (ClassBoardClassMaster_o *)entity;
          if ( !entity )
            goto LABEL_54;
          Master_object = (ClassBoardClassMaster_o *)ClassBoardBaseEntity__IsGrand((ClassBoardBaseEntity_o *)entity, 0);
          if ( ((unsigned __int8)Master_object & 1) == 0 )
            goto LABEL_38;
          if ( v34 && v34->fields._MasterKind_k__BackingField == v27->fields.classBoardBaseId )
          {
            if ( !entity )
              goto LABEL_54;
            if ( !classBoardMaxDictionary )
              goto LABEL_54;
            Master_object = (ClassBoardClassMaster_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                         classBoardMaxDictionary,
                                                         (int32_t)entity[1].klass,
                                                         (const MethodInfo_3F5F3DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            v29 = v27->fields.squareIds;
            if ( !v29 )
              goto LABEL_54;
            v24 = v29->max_length;
            v25 = (int)Master_object;
          }
        }
      }
      if ( (v26 & 0x80000000) == 0 && (v25 & 0x80000000) == 0 )
        goto LABEL_41;
LABEL_38:
      max_length = boardInfo->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_41;
    }
  }
  v23 = 0;
  v24 = -1;
  v25 = -1;
  v26 = -1;
LABEL_41:
  v30 = v26 <= 0 || v23 < v26;
  *v35 = v23;
  v31 = !v30;
  *v36 = v24;
  v32 = v25 <= 0 || v24 < v25;
  *v37 = v31;
  v33 = !v32;
  *v38 = v33;
}


void ClassBoardUtility___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593C54C & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardUtility___c_TypeInfo);
    byte_593C54C = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ClassBoardUtility___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardUtility___c_TypeInfo->static_fields->__9 = (struct ClassBoardUtility___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ClassBoardUtility___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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