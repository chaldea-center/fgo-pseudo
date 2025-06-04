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

  if ( (byte_4B05966 & 1) == 0 )
  {
    sub_1BC3008(&ClassBoardUtility_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_12485/*"SavePlayedClassBoardBaseRelease"*/, v4);
    sub_1BC3008(&StringLiteral_12486/*"SavePlayedExClassRelease"*/, v5);
    sub_1BC3008(&StringLiteral_23293/*"skill_{0:D5}"*/, v6);
    sub_1BC3008(&StringLiteral_18223/*"cs_{0:D4}{1}"*/, v7);
    byte_4B05966 = 1;
  }
  ClassBoardUtility_TypeInfo->static_fields->commandSpellIconFormat = (struct System_String_o *)StringLiteral_18223/*"cs_{0:D4}{1}"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)ClassBoardUtility_TypeInfo->static_fields, StringLiteral_18223/*"cs_{0:D4}{1}"*/, v2, v3);
  v8 = StringLiteral_23293/*"skill_{0:D5}"*/;
  static_fields = ClassBoardUtility_TypeInfo->static_fields;
  static_fields->passiveSkillIconFormat = (struct System_String_o *)StringLiteral_23293/*"skill_{0:D5}"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->passiveSkillIconFormat, v8, v10, v11);
  v12 = StringLiteral_12485/*"SavePlayedClassBoardBaseRelease"*/;
  v13 = ClassBoardUtility_TypeInfo->static_fields;
  v13->savePlayedClassBoardBaseReleaseKey = (struct System_String_o *)StringLiteral_12485/*"SavePlayedClassBoardBaseRelease"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v13->savePlayedClassBoardBaseReleaseKey, v12, v14, v15);
  v16 = StringLiteral_12486/*"SavePlayedExClassRelease"*/;
  v17 = ClassBoardUtility_TypeInfo->static_fields;
  v17->savePlayedExClassReleaseKey = (struct System_String_o *)StringLiteral_12486/*"SavePlayedExClassRelease"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v17->savePlayedExClassReleaseKey, v16, v18, v19);
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

  if ( (byte_4B05964 & 1) == 0 )
  {
    sub_1BC3008(&ClassBoardUtility_TypeInfo, v1);
    sub_1BC3008(&int___TypeInfo, v2);
    sub_1BC3008(&StringLiteral_1/*""*/, v3);
    byte_4B05964 = 1;
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
    v7 = sub_1BC30B0(int___TypeInfo, 1LL);
    if ( !v7 )
      sub_1BC3264(0LL, v8);
    v10 = (System_Int32_array *)v7;
    if ( !*(_DWORD *)(v7 + 24) )
      sub_1BC326C(v7, v8, v9);
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

  if ( (byte_4B0595F & 1) == 0 )
  {
    sub_1BC3008(&ClassBoardUtility_TypeInfo, *(_QWORD *)&skillType);
    sub_1BC3008(&int_TypeInfo, v7);
    byte_4B0595F = 1;
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
      sub_1BC3264(0LL, v13);
    genderType = SelfUserGame->fields.genderType;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &genderType, v14, v15, v16);
    return System_String__Format_62389940(commandSpellIconFormat, v11, v17, 0LL);
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
  System_String_o *String_69993112; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  System_Func_object__bool__o *v14; // x21

  if ( (byte_4B05962 & 1) == 0 )
  {
    sub_1BC3008(&ClassBoardUtility_TypeInfo, method);
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_string____76851440, v3);
    sub_1BC3008(&System_Func_string__bool__TypeInfo, v4);
    sub_1BC3008(&Method_ClassBoardUtility___c__DisplayClass8_0__IsPlayedExClassReleaseEffect_b__0__, v5);
    sub_1BC3008(&ClassBoardUtility___c__DisplayClass8_0_TypeInfo, v6);
    byte_4B05962 = 1;
  }
  v7 = sub_1BC3254(ClassBoardUtility___c__DisplayClass8_0_TypeInfo);
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
  String_69993112 = UnityEngine_PlayerPrefs__GetString_69993112(v10->static_fields->savePlayedExClassReleaseKey, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String_69993112, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  if ( !String_69993112 )
LABEL_10:
    sub_1BC3264(IsNullOrEmpty, v9);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_69993112, 0x2Cu, 0, 0LL);
  v14 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_ClassBoardUtility___c__DisplayClass8_0__IsPlayedExClassReleaseEffect_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_object__50493748(
           v13,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_string____76851440) != 0LL;
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
  System_String_o *String_69993112; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  System_Func_object__bool__o *v14; // x21

  if ( (byte_4B05960 & 1) == 0 )
  {
    sub_1BC3008(&ClassBoardUtility_TypeInfo, method);
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_string____76851440, v3);
    sub_1BC3008(&System_Func_string__bool__TypeInfo, v4);
    sub_1BC3008(&Method_ClassBoardUtility___c__DisplayClass6_0__IsPlayedReleaseEffect_b__0__, v5);
    sub_1BC3008(&ClassBoardUtility___c__DisplayClass6_0_TypeInfo, v6);
    byte_4B05960 = 1;
  }
  v7 = sub_1BC3254(ClassBoardUtility___c__DisplayClass6_0_TypeInfo);
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
  String_69993112 = UnityEngine_PlayerPrefs__GetString_69993112(
                      v10->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(String_69993112, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  if ( !String_69993112 )
LABEL_10:
    sub_1BC3264(IsNullOrEmpty, v9);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_69993112, 0x2Cu, 0, 0LL);
  v14 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_ClassBoardUtility___c__DisplayClass6_0__IsPlayedReleaseEffect_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_object__50493748(
           v13,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_string____76851440) != 0LL;
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

  if ( (byte_4B0595E & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, v1);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserQuestMaster___, v2);
    sub_1BC3008(&NetworkManager_TypeInfo, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B0595E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v6);
    byte_4AFC1F1 = 1;
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
    sub_1BC3264(Instance, v6);
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
  System_String_o *String_69993112; // x20
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

  if ( (byte_4B05961 & 1) == 0 )
  {
    sub_1BC3008(&ClassBoardUtility_TypeInfo, method);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_string__int___, v3);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToList_int___, v4);
    sub_1BC3008(&System_Func_string__int__TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1BC3008(&Method_System_String_Join_int___, v10);
    sub_1BC3008(&Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__7_0__, v11);
    sub_1BC3008(&ClassBoardUtility___c_TypeInfo, v12);
    sub_1BC3008(&StringLiteral_806/*","*/, v13);
    byte_4B05961 = 1;
  }
  v14 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v14 = ClassBoardUtility_TypeInfo;
  }
  String_69993112 = UnityEngine_PlayerPrefs__GetString_69993112(
                      v14->static_fields->savePlayedClassBoardBaseReleaseKey,
                      0LL);
  IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_String__IsNullOrEmpty(String_69993112, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v18 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v18,
      (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  }
  else
  {
    if ( !String_69993112 )
      goto LABEL_29;
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_69993112, 0x2Cu, 0, 0LL);
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
      _9__7_0 = (System_Func_object__int__o *)sub_1BC3254(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__7_0,
        v23,
        Method_ClassBoardUtility___c__SavePlayedClassBaseReleaseEffect_b__7_0__,
        0LL);
      static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Func_string__int__o *)_9__7_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v25, v26);
    }
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v20,
                                                                 (System_Func_TSource__TResult__o *)_9__7_0,
                                                                 (const MethodInfo_3035A44 *)Method_System_Linq_Enumerable_Select_string__int___);
    IsNullOrEmpty = System_Linq_Enumerable__ToList_int_(
                      v27,
                      (const MethodInfo_3042B74 *)Method_System_Linq_Enumerable_ToList_int___);
    v18 = (System_Collections_Generic_List_int__o *)IsNullOrEmpty;
  }
  if ( !classBaseIds )
LABEL_29:
    sub_1BC3264(IsNullOrEmpty, v17);
  v28 = *(_QWORD *)&classBaseIds->max_length;
  if ( (int)v28 >= 1 )
  {
    v29 = 0LL;
    do
    {
      if ( v29 >= (unsigned int)v28 )
        sub_1BC326C(IsNullOrEmpty, v17, v19);
      if ( !v18 )
        goto LABEL_29;
      v30 = classBaseIds->m_Items[v29 + 1];
      IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                                      v18,
                                                                      v30,
                                                                      (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__);
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
            *(const MethodInfo_3683E1C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
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
          (const MethodInfo_30A9624 *)Method_System_String_Join_int___);
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
  System_String_o *String_69993112; // x20
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

  if ( (byte_4B05963 & 1) == 0 )
  {
    sub_1BC3008(&ClassBoardUtility_TypeInfo, method);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_string__int___, v3);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToList_int___, v4);
    sub_1BC3008(&System_Func_string__int__TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1BC3008(&Method_System_String_Join_int___, v10);
    sub_1BC3008(&Method_ClassBoardUtility___c__SavePlayedExClassReleaseEffect_b__9_0__, v11);
    sub_1BC3008(&ClassBoardUtility___c_TypeInfo, v12);
    sub_1BC3008(&StringLiteral_806/*","*/, v13);
    byte_4B05963 = 1;
  }
  v14 = ClassBoardUtility_TypeInfo;
  if ( !ClassBoardUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardUtility_TypeInfo);
    v14 = ClassBoardUtility_TypeInfo;
  }
  String_69993112 = UnityEngine_PlayerPrefs__GetString_69993112(v14->static_fields->savePlayedExClassReleaseKey, 0LL);
  IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_String__IsNullOrEmpty(String_69993112, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    v18 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v18,
      (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  }
  else
  {
    if ( !String_69993112 )
      goto LABEL_29;
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(String_69993112, 0x2Cu, 0, 0LL);
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
      _9__9_0 = (System_Func_object__int__o *)sub_1BC3254(System_Func_string__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__9_0,
        v23,
        Method_ClassBoardUtility___c__SavePlayedExClassReleaseEffect_b__9_0__,
        0LL);
      static_fields = ClassBoardUtility___c_TypeInfo->static_fields;
      static_fields->__9__9_0 = (struct System_Func_string__int__o *)_9__9_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v25, v26);
    }
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v20,
                                                                 (System_Func_TSource__TResult__o *)_9__9_0,
                                                                 (const MethodInfo_3035A44 *)Method_System_Linq_Enumerable_Select_string__int___);
    IsNullOrEmpty = System_Linq_Enumerable__ToList_int_(
                      v27,
                      (const MethodInfo_3042B74 *)Method_System_Linq_Enumerable_ToList_int___);
    v18 = (System_Collections_Generic_List_int__o *)IsNullOrEmpty;
  }
  if ( !classId )
LABEL_29:
    sub_1BC3264(IsNullOrEmpty, v17);
  v28 = *(_QWORD *)&classId->max_length;
  if ( (int)v28 >= 1 )
  {
    v29 = 0LL;
    do
    {
      if ( v29 >= (unsigned int)v28 )
        sub_1BC326C(IsNullOrEmpty, v17, v19);
      if ( !v18 )
        goto LABEL_29;
      v30 = classId->m_Items[v29 + 1];
      IsNullOrEmpty = (System_Collections_Generic_List_TSource__o *)System_Collections_Generic_List_int___Contains(
                                                                      v18,
                                                                      v30,
                                                                      (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__);
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
            *(const MethodInfo_3683E1C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
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
          (const MethodInfo_30A9624 *)Method_System_String_Join_int___);
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  Il2CppObject *Master_object; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  signed int max_length; // w8
  int32_t v29; // w27
  unsigned int v30; // w26
  int v31; // w28
  int v32; // w29
  ClassBoardInfo_o *v33; // x20
  __int64 v34; // x19
  struct System_Int32_array *squareIds; // x8
  int32_t classBoardBaseId; // w2
  __int64 v37; // x20
  System_Func_object__bool__o *v38; // x21
  __int64 v39; // x8
  Il2CppObject *v40; // x19
  _DWORD *monitor; // x8
  int32_t *v42; // [xsp+0h] [xbp-90h]
  bool *v43; // [xsp+10h] [xbp-80h]
  bool *v44; // [xsp+18h] [xbp-78h]
  int32_t v45; // [xsp+24h] [xbp-6Ch]
  int v46; // [xsp+28h] [xbp-68h]

  if ( (byte_4B05965 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, openGrandClassBoardNum);
    sub_1BC3008(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v16);
    sub_1BC3008(&DataManager_TypeInfo, v17);
    sub_1BC3008(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v20);
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardInfo___, v21);
    sub_1BC3008(&System_Func_ClassBoardInfo__bool__TypeInfo, v22);
    sub_1BC3008(&Method_ClassBoardUtility___c__DisplayClass11_0__SetOpenClassScoreNum_b__0__, v23);
    sub_1BC3008(&ClassBoardUtility___c__DisplayClass11_0_TypeInfo, v24);
    byte_4B05965 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object
    || (Master_object = (Il2CppObject *)ClassBoardClassMaster__GetClassBoardBaseId(
                                          (ClassBoardClassMaster_o *)Master_object,
                                          classId,
                                          0LL),
        !boardInfo) )
  {
LABEL_37:
    sub_1BC3264(Master_object, v26);
  }
  max_length = boardInfo->max_length;
  v42 = openClassBoardNum;
  v43 = isMaxOpenClassBoard;
  v44 = isMaxOpenGrandClassBoard;
  if ( max_length >= 1 )
  {
    v46 = 0;
    v45 = -1;
    v29 = (int)Master_object;
    v30 = 0;
    v31 = -1;
    v32 = -1;
    while ( 1 )
    {
      if ( v30 >= max_length )
        sub_1BC326C(Master_object, v26, v27);
      v33 = boardInfo->m_Items[v30];
      v34 = sub_1BC3254(ClassBoardUtility___c__DisplayClass11_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v34, 0LL);
      if ( !v33 )
        goto LABEL_37;
      if ( v33->fields.classBoardBaseId == v29 )
      {
        if ( !classBoardMaxDictionary )
          goto LABEL_37;
        Master_object = (Il2CppObject *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                          classBoardMaxDictionary,
                                          v29,
                                          (const MethodInfo_32FFC88 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          Master_object = (Il2CppObject *)ClassBoardInfo__IsReleasedClassId(v33, classId, 0LL);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = (Il2CppObject *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                              classBoardMaxDictionary,
                                              v29,
                                              (const MethodInfo_32FFA00 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
            squareIds = v33->fields.squareIds;
            if ( !squareIds )
              goto LABEL_37;
            v32 = (int)Master_object;
            v46 = squareIds->max_length;
          }
        }
      }
      if ( !isGrandSvt )
        goto LABEL_32;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( !v34 || !Master_object )
        goto LABEL_37;
      classBoardBaseId = v33->fields.classBoardBaseId;
      v37 = v34 + 16;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        (Il2CppObject **)(v34 + 16),
                                        classBoardBaseId,
                                        (const MethodInfo_32AF0BC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
        goto LABEL_32;
      Master_object = *(Il2CppObject **)v37;
      if ( !*(_QWORD *)v37 )
        goto LABEL_37;
      Master_object = (Il2CppObject *)ClassBoardBaseEntity__IsGrand((ClassBoardBaseEntity_o *)Master_object, 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
        break;
LABEL_33:
      max_length = boardInfo->max_length;
      if ( (int)++v30 >= max_length )
        goto LABEL_36;
    }
    v38 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_ClassBoardInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v38,
      (Il2CppObject *)v34,
      Method_ClassBoardUtility___c__DisplayClass11_0__SetOpenClassScoreNum_b__0__,
      0LL);
    Master_object = System_Linq_Enumerable__FirstOrDefault_object__50493748(
                      (System_Collections_Generic_IEnumerable_TSource__o *)boardInfo,
                      (System_Func_TSource__bool__o *)v38,
                      (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardInfo___);
    v39 = *(_QWORD *)(v34 + 16);
    if ( !v39 || !classBoardMaxDictionary )
      goto LABEL_37;
    v40 = Master_object;
    Master_object = (Il2CppObject *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                      classBoardMaxDictionary,
                                      *(_DWORD *)(v39 + 72),
                                      (const MethodInfo_32FFC88 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    if ( v40 && ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !*(_QWORD *)v37 )
        goto LABEL_37;
      Master_object = (Il2CppObject *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                        classBoardMaxDictionary,
                                        *(_DWORD *)(*(_QWORD *)v37 + 16LL),
                                        (const MethodInfo_32FFA00 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      monitor = v40[1].monitor;
      if ( !monitor )
        goto LABEL_37;
      v31 = (int)Master_object;
      v45 = monitor[6];
    }
LABEL_32:
    if ( ((v31 | v32) & 0x80000000) == 0 )
      goto LABEL_36;
    goto LABEL_33;
  }
  v45 = -1;
  v46 = 0;
  v31 = -1;
  v32 = -1;
LABEL_36:
  *v42 = v46;
  *openGrandClassBoardNum = v45;
  *v43 = v32 > 0 && v46 >= v32;
  *v44 = v31 > 0 && v45 >= v31;
}


void __fastcall ClassBoardUtility___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B05967 & 1) == 0 )
  {
    sub_1BC3008(&ClassBoardUtility___c_TypeInfo, v1);
    byte_4B05967 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(ClassBoardUtility___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardUtility___c_TypeInfo->static_fields->__9 = (struct ClassBoardUtility___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)ClassBoardUtility___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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


void __fastcall ClassBoardUtility___c__DisplayClass11_0___ctor(
        ClassBoardUtility___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardUtility___c__DisplayClass11_0___SetOpenClassScoreNum_b__0(
        ClassBoardUtility___c__DisplayClass11_0_o *this,
        ClassBoardInfo_o *x,
        const MethodInfo *method)
{
  struct ClassBoardBaseEntity_o *classBoardBaseEnt; // x8

  if ( !x || (classBoardBaseEnt = this->fields.classBoardBaseEnt) == 0LL )
    sub_1BC3264(this, x);
  return x->fields.classBoardBaseId == classBoardBaseEnt->fields.id;
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