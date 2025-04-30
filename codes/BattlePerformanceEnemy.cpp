void __fastcall BattlePerformanceEnemy___ctor(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4A516B7 & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, method);
    byte_4A516B7 = 1;
  }
  v3 = (struct System_Int32_array *)sub_1B86460(int___TypeInfo, 3LL);
  this->fields.list_ID = v3;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.list_ID, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformanceEnemy__AddExtraBattleUiDataAndComponent(
        BattlePerformanceEnemy_o *this,
        ExtraBattleUserInterfaceData_o *exUiData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  System_Collections_Generic_List_object__o *exBattleUiDataList; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o **p_exBattleUiDict; // x22
  System_Collections_Generic_Dictionary_object__object__o *v22; // x23
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Collections_Generic_List_ExtraBattleUserInterfaceData__o **p_exBattleUiDataList; // x23
  System_Collections_Generic_List_object__o *v26; // x24
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x8
  System_String_o *AssetPath; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x1
  System_String_o *v37; // x19
  AssetLoader_LoadEndDataHandler_o *v38; // x20
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A516B0 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, exUiData);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__,
      v5);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent___ctor__, v6);
    sub_1B863B8(&System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TypeInfo, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData__Add__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData___ctor__, v9);
    sub_1B863B8(&System_Collections_Generic_List_ExtraBattleUserInterfaceData__TypeInfo, v10);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_1B863B8(&Method_BattlePerformanceEnemy___c__DisplayClass47_0__AddExtraBattleUiDataAndComponent_b__0__, v12);
    sub_1B863B8(&BattlePerformanceEnemy___c__DisplayClass47_0_TypeInfo, v13);
    byte_4A516B0 = 1;
  }
  value = 0LL;
  v14 = sub_1B86604(BattlePerformanceEnemy___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_19;
  *(_QWORD *)(v14 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v14 + 16), (int32_t)this, v17, v18);
  p_exBattleUiDict = &this->fields.exBattleUiDict;
  if ( !this->fields.exBattleUiDict )
  {
    v22 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v22,
      (const MethodInfo_32CDD30 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent___ctor__);
    *p_exBattleUiDict = (struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o *)v22;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.exBattleUiDict, (int32_t)v22, v23, v24);
  }
  p_exBattleUiDataList = &this->fields.exBattleUiDataList;
  exBattleUiDataList = (System_Collections_Generic_List_object__o *)this->fields.exBattleUiDataList;
  if ( !exBattleUiDataList )
  {
    v26 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ExtraBattleUserInterfaceData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v26,
      (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData___ctor__);
    *p_exBattleUiDataList = (struct System_Collections_Generic_List_ExtraBattleUserInterfaceData__o *)v26;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.exBattleUiDataList, (int32_t)v26, v27, v28);
    exBattleUiDataList = (System_Collections_Generic_List_object__o *)*p_exBattleUiDataList;
    if ( !*p_exBattleUiDataList )
      goto LABEL_19;
  }
  items = exBattleUiDataList->fields._items;
  v30 = Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData__Add__;
  ++exBattleUiDataList->fields._version;
  if ( !items )
    goto LABEL_19;
  size = exBattleUiDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      exBattleUiDataList,
      (Il2CppObject *)exUiData,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    exBattleUiDataList->fields._size = size + 1;
    v32[4] = (Il2CppClass *)exUiData;
    sub_1B8635C((CGThumbnailListItem_o *)(v32 + 4), (int32_t)exUiData, v19, v20);
  }
  if ( !exUiData
    || (AssetPath = ExtraBattleUserInterfaceData__get_AssetPath(exUiData, 0LL),
        *(_QWORD *)(v14 + 24) = AssetPath,
        sub_1B8635C((CGThumbnailListItem_o *)(v14 + 24), (int32_t)AssetPath, v34, v35),
        (exBattleUiDataList = (System_Collections_Generic_List_object__o *)*p_exBattleUiDict) == 0LL) )
  {
LABEL_19:
    sub_1B86614(exBattleUiDataList, v16);
  }
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDataList,
         *(Il2CppObject **)(v14 + 24),
         &value,
         (const MethodInfo_32CFEEC *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__) )
  {
    BattlePerformanceEnemy__UpdateExtraBattleUi(this, v36);
  }
  else
  {
    v37 = *(System_String_o **)(v14 + 24);
    v38 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v38,
      (Il2CppObject *)v14,
      Method_BattlePerformanceEnemy___c__DisplayClass47_0__AddExtraBattleUiDataAndComponent_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v37, v38, 1, 0LL);
  }
}


void __fastcall BattlePerformanceEnemy__DestroyAndUnloadAllExBattleUserInterface(
        BattlePerformanceEnemy_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o *exBattleUiDict; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_object__object__o *v13; // x20
  unsigned __int64 v14; // x23
  int32_t *p_count; // x24
  Il2CppObject *v16; // x21
  UnityEngine_Object_o *v17; // x22

  if ( (byte_4A516B6 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__Remove__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Item__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Keys__, v5);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_string___, v6);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    byte_4A516B6 = 1;
  }
  exBattleUiDict = this->fields.exBattleUiDict;
  if ( exBattleUiDict )
  {
    Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
             (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDict,
             (const MethodInfo_32CE3C0 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Keys__);
    Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__ToArray_object_(
                                                                        (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                        (const MethodInfo_2FA98D8 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !Item )
      goto LABEL_16;
    entries = Item->fields._entries;
    v13 = Item;
    if ( (int)entries >= 1 )
    {
      v14 = 0LL;
      p_count = &Item->fields._count;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)entries )
          sub_1B8661C(Item, v11);
        Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.exBattleUiDict;
        if ( !Item )
          break;
        v16 = *(Il2CppObject **)&p_count[2 * v14];
        Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            v16,
                                                                            (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Item__);
        if ( !this->fields.exBattleUiDict )
          break;
        v17 = (UnityEngine_Object_o *)Item;
        System_Collections_Generic_Dictionary_object__object___Remove(
          (System_Collections_Generic_Dictionary_object__object__o *)this->fields.exBattleUiDict,
          v16,
          (const MethodInfo_32CFBDC *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__Remove__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69356292(v17, 0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__releaseAssetStorage((System_String_o *)v16, 0LL);
        LODWORD(entries) = v13->fields._entries;
        if ( (__int64)++v14 >= (int)entries )
          return;
      }
LABEL_16:
      sub_1B86614(Item, v11);
    }
  }
}


bool __fastcall BattlePerformanceEnemy__ExistsFieldNormalEnemy(
        BattlePerformanceEnemy_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Object_array *svtParamList; // x0
  int32_t v5; // w20
  signed int max_length; // w24
  Il2CppObject *v7; // x21

  if ( (byte_4A516AB & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_IndexValue_BattleServantParamComponent___, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    byte_4A516AB = 1;
  }
  svtParamList = (System_Object_array *)this->fields.svtParamList;
  if ( !svtParamList )
LABEL_13:
    sub_1B86614(svtParamList, method);
  v5 = 0;
  while ( 1 )
  {
    max_length = svtParamList->max_length;
    if ( v5 >= max_length )
      return v5 < max_length;
    v7 = BasicHelper__IndexValue_object_(
           svtParamList,
           v5,
           0LL,
           (const MethodInfo_2F5C590 *)Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    svtParamList = (System_Object_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL);
    if ( ((unsigned __int8)svtParamList & 1) != 0 )
    {
      if ( !v7 )
        goto LABEL_13;
      svtParamList = (System_Object_array *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
      if ( !svtParamList )
        goto LABEL_13;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)svtParamList, 0LL) )
        return v5 < max_length;
    }
    svtParamList = (System_Object_array *)this->fields.svtParamList;
    ++v5;
    if ( !svtParamList )
      goto LABEL_13;
  }
}


bool __fastcall BattlePerformanceEnemy__ExistsFrontRow(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  unsigned int v4; // w20
  char v5; // w24
  Il2CppObject *v6; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  bool v9; // cf

  if ( (byte_4A516A9 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_IndexValue_BattleServantParamComponent___, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    byte_4A516A9 = 1;
  }
  v4 = 0;
  v5 = 1;
  do
  {
    v6 = BasicHelper__IndexValue_object_(
           (System_Object_array *)this->fields.svtParamList,
           v4,
           0LL,
           (const MethodInfo_2F5C590 *)Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !v6 || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL)) == 0LL )
        sub_1B86614(gameObject, v8);
      if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
        break;
    }
    v9 = v4++ >= 2;
    v5 = !v9;
  }
  while ( v4 != 3 );
  return v5;
}


UnityEngine_Vector2_o __fastcall BattlePerformanceEnemy__GetExBattleUiOverKillPosAdjust(
        BattlePerformanceEnemy_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_ExtraBattleUserInterfaceData__o *exBattleUiDataList; // x0
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  Il2CppObject *v8; // x0
  struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o *exBattleUiDict; // x19
  System_String_o *AssetPath; // x0
  __int64 v11; // x1
  float v12; // s0
  float v13; // s1
  Il2CppObject *value; // [xsp+18h] [xbp-18h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4A516B3 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__,
      method);
    sub_1B863B8(&Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___, v3);
    byte_4A516B3 = 1;
  }
  value = 0LL;
  if ( !byte_4A486DA )
  {
    sub_1B863B8(&UnityEngine_Vector2_TypeInfo, method);
    byte_4A486DA = 1;
  }
  exBattleUiDataList = this->fields.exBattleUiDataList;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  if ( exBattleUiDataList )
  {
    v8 = System_Linq_Enumerable__ElementAtOrDefault_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)exBattleUiDataList,
           this->fields.currentExBattleUiIndex,
           (const MethodInfo_2F90280 *)Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    if ( v8 )
    {
      exBattleUiDict = this->fields.exBattleUiDict;
      AssetPath = ExtraBattleUserInterfaceData__get_AssetPath((ExtraBattleUserInterfaceData_o *)v8, 0LL);
      if ( !exBattleUiDict )
        goto LABEL_12;
      AssetPath = (System_String_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                       (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDict,
                                       (Il2CppObject *)AssetPath,
                                       &value,
                                       (const MethodInfo_32CFEEC *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__);
      if ( ((unsigned __int8)AssetPath & 1) != 0 )
      {
        if ( value )
        {
          x = *(float *)&value[2].monitor;
          y = *((float *)&value[2].monitor + 1);
          goto LABEL_11;
        }
LABEL_12:
        sub_1B86614(AssetPath, v11);
      }
    }
  }
LABEL_11:
  v12 = x;
  v13 = y;
  result.fields.y = v13;
  result.fields.x = v12;
  return result;
}


UnityEngine_Vector2_o __fastcall BattlePerformanceEnemy__GetExBattleUiSkillSkipPosAdjust(
        BattlePerformanceEnemy_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_ExtraBattleUserInterfaceData__o *exBattleUiDataList; // x0
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  Il2CppObject *v8; // x0
  struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o *exBattleUiDict; // x19
  System_String_o *AssetPath; // x0
  __int64 v11; // x1
  float v12; // s0
  float v13; // s1
  Il2CppObject *value; // [xsp+18h] [xbp-18h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4A516B4 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__,
      method);
    sub_1B863B8(&Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___, v3);
    byte_4A516B4 = 1;
  }
  value = 0LL;
  if ( !byte_4A486DA )
  {
    sub_1B863B8(&UnityEngine_Vector2_TypeInfo, method);
    byte_4A486DA = 1;
  }
  exBattleUiDataList = this->fields.exBattleUiDataList;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  if ( exBattleUiDataList )
  {
    v8 = System_Linq_Enumerable__ElementAtOrDefault_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)exBattleUiDataList,
           this->fields.currentExBattleUiIndex,
           (const MethodInfo_2F90280 *)Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    if ( v8 )
    {
      exBattleUiDict = this->fields.exBattleUiDict;
      AssetPath = ExtraBattleUserInterfaceData__get_AssetPath((ExtraBattleUserInterfaceData_o *)v8, 0LL);
      if ( !exBattleUiDict )
        goto LABEL_12;
      AssetPath = (System_String_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                       (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDict,
                                       (Il2CppObject *)AssetPath,
                                       &value,
                                       (const MethodInfo_32CFEEC *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__);
      if ( ((unsigned __int8)AssetPath & 1) != 0 )
      {
        if ( value )
        {
          x = *(float *)&value[3].klass;
          y = *((float *)&value[3].klass + 1);
          goto LABEL_11;
        }
LABEL_12:
        sub_1B86614(AssetPath, v11);
      }
    }
  }
LABEL_11:
  v12 = x;
  v13 = y;
  result.fields.y = v13;
  result.fields.x = v12;
  return result;
}


// local variable allocation has failed, the output may be wrong!
BattleServantParamComponent_o *__fastcall BattlePerformanceEnemy__GetSvtParamComponent(
        BattlePerformanceEnemy_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Object_array *svtParamList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4A516AF & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_Find_BattleServantParamComponent___, *(_QWORD *)&uniqueId);
    sub_1B863B8(&System_Predicate_BattleServantParamComponent__TypeInfo, v5);
    sub_1B863B8(&Method_BattlePerformanceEnemy___c__DisplayClass44_0__GetSvtParamComponent_b__0__, v6);
    sub_1B863B8(&BattlePerformanceEnemy___c__DisplayClass44_0_TypeInfo, v7);
    byte_4A516AF = 1;
  }
  v8 = sub_1B86604(BattlePerformanceEnemy___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B86614(v9, v10);
  *(_DWORD *)(v8 + 16) = uniqueId;
  svtParamList = (System_Object_array *)this->fields.svtParamList;
  v12 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_BattleServantParamComponent__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_BattlePerformanceEnemy___c__DisplayClass44_0__GetSvtParamComponent_b__0__,
    0LL);
  return (BattleServantParamComponent_o *)System_Array__Find_object_(
                                            svtParamList,
                                            (System_Predicate_T__o *)v12,
                                            (const MethodInfo_3067918 *)Method_System_Array_Find_BattleServantParamComponent___);
}


BattleServantParamComponent_o *__fastcall BattlePerformanceEnemy__GetSvtSuperBossParamComponent(
        BattlePerformanceEnemy_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *superbossParam; // x0
  bool v5; // w8
  BattleServantParamComponent_o *result; // x0

  superbossParam = (BattleServantParamComponent_o *)this->fields.superbossParam;
  if ( !superbossParam )
    sub_1B86614(0LL, uniqueId);
  v5 = BattleServantParamComponent__checkId(superbossParam, uniqueId, 0LL);
  result = 0LL;
  if ( v5 )
    return (BattleServantParamComponent_o *)this->fields.superbossParam;
  return result;
}


void __fastcall BattlePerformanceEnemy__Initialize(
        BattlePerformanceEnemy_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *indata,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  struct BattlePerformance_o **p_perf; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct BattleServantParamComponent_array *svtParamList; // x8
  __int64 v16; // x22
  int max_length; // w9
  BattleServantParamComponent_o *v18; // x8
  struct BattlePerformance_o *v19; // x1
  struct BattleServantRaidParamComponent_o *raidParam; // x8
  struct BattlePerformance_o *perf; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct BattleServantSuperBossParamComponent_o *superbossParam; // x8
  struct BattlePerformance_o *v25; // x1
  struct BattleServantParamComponent_array *v26; // x8
  struct System_Int32_array *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  if ( (byte_4A516A6 & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, inperf);
    byte_4A516A6 = 1;
  }
  this->fields.perf = inperf;
  p_perf = &this->fields.perf;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.perf,
    (int32_t)inperf,
    (int32_t)indata,
    (const MethodInfo *)inlogic);
  this->fields.bdata = indata;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.bdata, (int32_t)indata, v9, v10);
  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_9;
  v16 = 0LL;
  while ( 1 )
  {
    max_length = svtParamList->max_length;
    if ( (int)v16 >= max_length )
      break;
    if ( (unsigned int)v16 >= max_length )
      sub_1B8661C(v11, v12);
    v18 = svtParamList->m_Items[v16];
    if ( v18 )
    {
      v19 = *p_perf;
      v18->fields.perf = *p_perf;
      sub_1B8635C((CGThumbnailListItem_o *)&v18->fields.perf, (int32_t)v19, v13, v14);
      svtParamList = this->fields.svtParamList;
      ++v16;
      if ( svtParamList )
        continue;
    }
    goto LABEL_9;
  }
  raidParam = this->fields.raidParam;
  if ( !raidParam )
    goto LABEL_9;
  perf = this->fields.perf;
  raidParam->fields.perf = perf;
  sub_1B8635C((CGThumbnailListItem_o *)&raidParam->fields.perf, (int32_t)perf, v13, v14);
  superbossParam = this->fields.superbossParam;
  if ( !superbossParam
    || (v25 = this->fields.perf,
        superbossParam->fields.perf = v25,
        sub_1B8635C((CGThumbnailListItem_o *)&superbossParam->fields.perf, (int32_t)v25, v22, v23),
        (v26 = this->fields.svtParamList) == 0LL) )
  {
LABEL_9:
    sub_1B86614(v11, v12);
  }
  v27 = (struct System_Int32_array *)sub_1B86460(int___TypeInfo, v26->max_length);
  this->fields.list_ID = v27;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.list_ID, (int32_t)v27, v28, v29);
}


bool __fastcall BattlePerformanceEnemy__IsExistsBackRow(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Object_array *svtParamList; // x0
  int32_t v5; // w20
  signed int max_length; // w24
  Il2CppObject *v7; // x21

  if ( (byte_4A516AA & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_IndexValue_BattleServantParamComponent___, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    byte_4A516AA = 1;
  }
  svtParamList = (System_Object_array *)this->fields.svtParamList;
  if ( !svtParamList )
LABEL_13:
    sub_1B86614(svtParamList, method);
  v5 = 3;
  while ( 1 )
  {
    max_length = svtParamList->max_length;
    if ( v5 >= max_length )
      return v5 < max_length;
    v7 = BasicHelper__IndexValue_object_(
           svtParamList,
           v5,
           0LL,
           (const MethodInfo_2F5C590 *)Method_BasicHelper_IndexValue_BattleServantParamComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    svtParamList = (System_Object_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL);
    if ( ((unsigned __int8)svtParamList & 1) != 0 )
    {
      if ( !v7 )
        goto LABEL_13;
      svtParamList = (System_Object_array *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
      if ( !svtParamList )
        goto LABEL_13;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)svtParamList, 0LL) )
        return v5 < max_length;
    }
    svtParamList = (System_Object_array *)this->fields.svtParamList;
    ++v5;
    if ( !svtParamList )
      goto LABEL_13;
  }
}


BaseEnemyParamPosData_o *__fastcall BattlePerformanceEnemy__MakeEnemyParamPosData(
        BattlePerformanceEnemy_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleData_o *bdata; // x0
  _QWORD *v5; // x8
  Il2CppObject *v6; // x19

  if ( (byte_4A516A8 & 1) == 0 )
  {
    sub_1B863B8(&PosCountNormalEnemyParamPosData_TypeInfo, method);
    sub_1B863B8(&PosCountSpEnemyParamPosData_TypeInfo, v3);
    byte_4A516A8 = 1;
  }
  bdata = this->fields.bdata;
  if ( !bdata )
    sub_1B86614(0LL, method);
  if ( BattleData__get_IsEnemyPosCountNormal(bdata, 0LL) )
    v5 = &PosCountNormalEnemyParamPosData_TypeInfo;
  else
    v5 = &PosCountSpEnemyParamPosData_TypeInfo;
  v6 = (Il2CppObject *)sub_1B86604(*v5);
  System_Object___ctor(v6, 0LL);
  return (BaseEnemyParamPosData_o *)v6;
}


void __fastcall BattlePerformanceEnemy__OnTapExtraBattleUi(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *v2; // x19
  struct System_Collections_Generic_List_ExtraBattleUserInterfaceData__o *exBattleUiDataList; // x8
  int size; // w8
  int32_t currentExBattleUiIndex; // w9
  int32_t v6; // w8

  v2 = this;
  if ( (byte_4A516B5 & 1) == 0 )
  {
    this = (BattlePerformanceEnemy_o *)sub_1B863B8(
                                         &Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData__get_Count__,
                                         method);
    byte_4A516B5 = 1;
  }
  exBattleUiDataList = v2->fields.exBattleUiDataList;
  if ( !exBattleUiDataList )
    sub_1B86614(this, method);
  size = exBattleUiDataList->fields._size;
  if ( size >= 2 )
  {
    currentExBattleUiIndex = v2->fields.currentExBattleUiIndex;
    if ( size > currentExBattleUiIndex + 1 )
      v6 = currentExBattleUiIndex + 1;
    else
      v6 = 0;
    v2->fields.currentExBattleUiIndex = v6;
    BattlePerformanceEnemy__UpdateExtraBattleUi(v2, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemy__RemoveExtraBattleUiDataAndComponents(
        BattlePerformanceEnemy_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x21
  struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o *exBattleUiDict; // x0
  const MethodInfo *v17; // x1
  struct System_Collections_Generic_List_ExtraBattleUserInterfaceData__o *exBattleUiDataList; // x0
  Il2CppObject *v19; // x0
  bool v20; // w23
  System_Collections_Generic_List_object__o *v21; // x20
  System_Predicate_object__o *v22; // x22
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x19
  BattlePerformanceEnemy___c_c *v24; // x8
  System_Action_object__o *_9__48_1; // x20
  Il2CppObject *v26; // x21
  struct BattlePerformanceEnemy___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  if ( (byte_4A516B1 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_ExtraBattleUserInterfaceComponent__TypeInfo, *(_QWORD *)&wave);
    sub_1B863B8(&Method_BasicHelper_ForEach_ExtraBattleUserInterfaceComponent___, v5);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Values__,
      v6);
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData___, v7);
    sub_1B863B8(&Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData__RemoveAll__, v9);
    sub_1B863B8(&System_Predicate_ExtraBattleUserInterfaceData__TypeInfo, v10);
    sub_1B863B8(&Method_BattlePerformanceEnemy___c__RemoveExtraBattleUiDataAndComponents_b__48_1__, v11);
    sub_1B863B8(&Method_BattlePerformanceEnemy___c__DisplayClass48_0__RemoveExtraBattleUiDataAndComponents_b__0__, v12);
    sub_1B863B8(&BattlePerformanceEnemy___c__DisplayClass48_0_TypeInfo, v13);
    sub_1B863B8(&BattlePerformanceEnemy___c_TypeInfo, v14);
    byte_4A516B1 = 1;
  }
  v15 = sub_1B86604(BattlePerformanceEnemy___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_22;
  *(_DWORD *)(v15 + 16) = wave;
  exBattleUiDataList = this->fields.exBattleUiDataList;
  if ( !exBattleUiDataList )
    return;
  v19 = System_Linq_Enumerable__ElementAtOrDefault_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)exBattleUiDataList,
          this->fields.currentExBattleUiIndex,
          (const MethodInfo_2F90280 *)Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
  v20 = !v19 || !ExtraBattleUserInterfaceData__get_IsFromQuestPhase((ExtraBattleUserInterfaceData_o *)v19, 0LL);
  v21 = (System_Collections_Generic_List_object__o *)this->fields.exBattleUiDataList;
  v22 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_ExtraBattleUserInterfaceData__TypeInfo);
  System_Predicate_object____ctor(
    v22,
    (Il2CppObject *)v15,
    Method_BattlePerformanceEnemy___c__DisplayClass48_0__RemoveExtraBattleUiDataAndComponents_b__0__,
    0LL);
  if ( !v21 )
    goto LABEL_22;
  System_Collections_Generic_List_object___RemoveAll(
    v21,
    (System_Predicate_T__o *)v22,
    (const MethodInfo_35FDFB4 *)Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData__RemoveAll__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.exBattleUiDataList,
         (const MethodInfo_2F7B8DC *)Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData___) )
  {
    if ( v20 )
      this->fields.currentExBattleUiIndex = 0;
    BattlePerformanceEnemy__UpdateExtraBattleUi(this, v17);
    return;
  }
  exBattleUiDict = this->fields.exBattleUiDict;
  if ( !exBattleUiDict )
LABEL_22:
    sub_1B86614(exBattleUiDict, v17);
  Values = System_Collections_Generic_Dictionary_object__object___get_Values(
             (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDict,
             (const MethodInfo_32CE510 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Values__);
  v24 = BattlePerformanceEnemy___c_TypeInfo;
  if ( !BattlePerformanceEnemy___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemy___c_TypeInfo);
    v24 = BattlePerformanceEnemy___c_TypeInfo;
  }
  _9__48_1 = (System_Action_object__o *)v24->static_fields->__9__48_1;
  if ( !_9__48_1 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = BattlePerformanceEnemy___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v24->static_fields->__9;
    _9__48_1 = (System_Action_object__o *)sub_1B86604(System_Action_ExtraBattleUserInterfaceComponent__TypeInfo);
    System_Action_object____ctor(
      _9__48_1,
      v26,
      Method_BattlePerformanceEnemy___c__RemoveExtraBattleUiDataAndComponents_b__48_1__,
      0LL);
    static_fields = BattlePerformanceEnemy___c_TypeInfo->static_fields;
    static_fields->__9__48_1 = (struct System_Action_ExtraBattleUserInterfaceComponent__o *)_9__48_1;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__48_1, (int32_t)_9__48_1, v28, v29);
  }
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (System_Action_T__o *)_9__48_1,
    (const MethodInfo_2F59FB0 *)Method_BasicHelper_ForEach_ExtraBattleUserInterfaceComponent___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemy__SetActiveParameterView(
        BattlePerformanceEnemy_o *this,
        int32_t index,
        bool val,
        const MethodInfo *method)
{
  struct BattleServantParamComponent_array *svtParamList; // x8
  int32_t max_length; // w9

  if ( (index & 0x80000000) == 0 )
  {
    svtParamList = this->fields.svtParamList;
    if ( !svtParamList )
      goto LABEL_9;
    max_length = svtParamList->max_length;
    if ( max_length > index )
    {
      if ( max_length <= (unsigned int)index )
        sub_1B8661C(this, *(_QWORD *)&index);
      this = (BattlePerformanceEnemy_o *)svtParamList->m_Items[index];
      if ( this )
      {
        BattleServantParamComponent__SetActiveParameterView((BattleServantParamComponent_o *)this, val, 0LL);
        return;
      }
LABEL_9:
      sub_1B86614(this, index);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemy__SetNormalEnemyStatusUI(
        BattlePerformanceEnemy_o *this,
        int32_t index,
        BattleServantData_o *svtdata,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *v7; // x21
  struct BattleServantParamComponent_array *svtParamList; // x8
  UnityEngine_Object_o *v9; // x22
  struct BattleServantParamComponent_array *v10; // x8
  struct BattleServantParamComponent_array *v11; // x8
  struct BattleServantParamComponent_array *v12; // x8

  v7 = this;
  if ( (byte_4A516AC & 1) == 0 )
  {
    this = (BattlePerformanceEnemy_o *)sub_1B863B8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_4A516AC = 1;
  }
  svtParamList = v7->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_20;
  if ( svtParamList->max_length <= index )
LABEL_21:
    sub_1B8661C(this, *(_QWORD *)&index);
  v9 = (UnityEngine_Object_o *)svtParamList->m_Items[index];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattlePerformanceEnemy_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = v7->fields.svtParamList;
    if ( !v10 )
      goto LABEL_20;
    if ( v10->max_length > index )
    {
      this = (BattlePerformanceEnemy_o *)v10->m_Items[index];
      if ( !this )
        goto LABEL_20;
      this = (BattlePerformanceEnemy_o *)(*(__int64 (__fastcall **)(BattlePerformanceEnemy_o *, BattleServantData_o *, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
                                           this,
                                           svtdata,
                                           this->klass[1]._1.element_class);
      v11 = v7->fields.svtParamList;
      if ( !v11 )
        goto LABEL_20;
      if ( v11->max_length > index )
      {
        this = (BattlePerformanceEnemy_o *)v11->m_Items[index];
        if ( !this )
          goto LABEL_20;
        LODWORD(this->fields.svtHeadUpList) = index;
        BattleServantParamComponent__setTouch((BattleServantParamComponent_o *)this, 1, 0LL);
        v12 = v7->fields.svtParamList;
        if ( !v12 )
          goto LABEL_20;
        if ( v12->max_length > index )
        {
          this = (BattlePerformanceEnemy_o *)v12->m_Items[index];
          if ( this )
          {
            this = (BattlePerformanceEnemy_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
            if ( svtdata )
            {
              BattleServantData__addParamObject(svtdata, (UnityEngine_GameObject_o *)this, 0LL);
              return;
            }
          }
LABEL_20:
          sub_1B86614(this, *(_QWORD *)&index);
        }
      }
    }
    goto LABEL_21;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemy__SetupTargetIcon(
        BattlePerformanceEnemy_o *this,
        BattleServantData_o *svtData,
        UnityEngine_GameObject_o *target,
        int32_t index,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *v8; // x19
  __int64 v9; // x1
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  struct BattleServantHeadUpComponent_array *v11; // x8
  BattleServantHeadUpComponent_o *v12; // x8
  struct System_Int32_array *list_ID; // x8
  BattleActorControl_o *Component_object; // x21
  AdjustPopupPosInScreenArgument_o *v15; // x22
  struct BattleServantHeadUpComponent_array *v16; // x8
  BattlePerformance_o *perf; // x19
  BattlePerformanceEnemy_o *v18; // x20
  int v19; // s0
  UnityEngine_Vector3_o v22; // 0:s3.4,4:s4.4,8:s5.4

  v8 = this;
  if ( (byte_4A516AE & 1) == 0 )
  {
    sub_1B863B8(&AdjustPopupPosInScreenArgument_TypeInfo, svtData);
    this = (BattlePerformanceEnemy_o *)sub_1B863B8(
                                         &Method_UnityEngine_GameObject_GetComponent_BattleActorControl___,
                                         v9);
    byte_4A516AE = 1;
  }
  svtHeadUpList = v8->fields.svtHeadUpList;
  if ( !svtHeadUpList )
    goto LABEL_20;
  if ( svtHeadUpList->max_length <= index )
    goto LABEL_21;
  this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[index];
  if ( !this )
    goto LABEL_20;
  BattleServantHeadUpComponent__setData((BattleServantHeadUpComponent_o *)this, svtData, 0LL);
  v11 = v8->fields.svtHeadUpList;
  if ( !v11 )
    goto LABEL_20;
  if ( v11->max_length <= index )
    goto LABEL_21;
  v12 = v11->m_Items[index];
  if ( !v12 )
    goto LABEL_20;
  v12->fields.index = index;
  if ( !svtData )
    goto LABEL_20;
  list_ID = v8->fields.list_ID;
  if ( !list_ID )
    goto LABEL_20;
  if ( list_ID->max_length <= index )
    goto LABEL_21;
  list_ID->m_Items[index + 1] = svtData->fields.uniqueId;
  if ( !target
    || (Component_object = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     target,
                                                     (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___),
        v15 = (AdjustPopupPosInScreenArgument_o *)sub_1B86604(AdjustPopupPosInScreenArgument_TypeInfo),
        AdjustPopupPosInScreenArgument___ctor(v15, 0LL),
        !v15)
    || (v15->fields.IsExec = 0, (v16 = v8->fields.svtHeadUpList) == 0LL) )
  {
LABEL_20:
    sub_1B86614(this, svtData);
  }
  if ( v16->max_length <= index )
LABEL_21:
    sub_1B8661C(this, svtData);
  this = (BattlePerformanceEnemy_o *)v16->m_Items[index];
  if ( !this )
    goto LABEL_20;
  perf = v8->fields.perf;
  this = (BattlePerformanceEnemy_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Component_object )
    goto LABEL_20;
  v18 = this;
  *(UnityEngine_Vector3_o *)&v19 = BattleActorControl__getHeadUpY(Component_object, 0LL);
  if ( !perf )
    goto LABEL_20;
  v22.fields.x = 0.0;
  v22.fields.y = 0.0;
  v22.fields.z = 0.0;
  BattlePerformance__SetPopUpNodeObjectPosition(
    perf,
    Component_object,
    (UnityEngine_GameObject_o *)v18,
    *(UnityEngine_Vector3_o *)&v19,
    Component_object->fields._NodeTarget_k__BackingField,
    v22,
    v15,
    0LL);
}


void __fastcall BattlePerformanceEnemy__UpdateExtraBattleUi(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_ExtraBattleUserInterfaceData__o *exBattleUiDataList; // x0
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  ExtraBattleUserInterfaceData_o *v11; // x20
  struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o *exBattleUiDict; // x0
  const MethodInfo_353D6B8 *v13; // x4
  System_String_o *v14; // x22
  Il2CppObject *v15; // x21
  System_String_o *AssetPath; // x1
  _BOOL8 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+0h] [xbp-B0h] BYREF
  Il2CppObject *key; // [xsp+28h] [xbp-88h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+40h] [xbp-70h] BYREF
  System_String_o *v23; // [xsp+78h] [xbp-38h] BYREF
  System_Collections_Generic_KeyValuePair_object__object__o v24; // 0:x0.16

  if ( (byte_4A516B2 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__GetEnumerator__,
      method);
    sub_1B863B8(&Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___, v3);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__Dispose__,
      v4);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__MoveNext__,
      v5);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__get_Current__,
      v6);
    sub_1B863B8(
      &Method_System_Collections_Generic_KeyValuePair_string__ExtraBattleUserInterfaceComponent__Deconstruct__,
      v7);
    byte_4A516B2 = 1;
  }
  current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0LL;
  v23 = 0LL;
  memset(&v22, 0, sizeof(v22));
  key = 0LL;
  exBattleUiDataList = this->fields.exBattleUiDataList;
  if ( exBattleUiDataList )
  {
    v9 = System_Linq_Enumerable__ElementAtOrDefault_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)exBattleUiDataList,
           this->fields.currentExBattleUiIndex,
           (const MethodInfo_2F90280 *)Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    if ( v9 )
    {
      v11 = (ExtraBattleUserInterfaceData_o *)v9;
      exBattleUiDict = this->fields.exBattleUiDict;
      if ( !exBattleUiDict )
        sub_1B86614(0LL, v10);
      System_Collections_Generic_Dictionary_object__object___GetEnumerator(
        &v19,
        (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDict,
        (const MethodInfo_32CEB10 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__GetEnumerator__);
      v22 = v19;
      while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                &v22,
                (const MethodInfo_33C9A8C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__MoveNext__) )
      {
        current = v22.fields._current;
        v24.fields.key = (Il2CppObject *)&current;
        v24.fields.value = (Il2CppObject *)&v23;
        System_Collections_Generic_KeyValuePair_object__object___Deconstruct(
          v24,
          &key,
          (Il2CppObject **)Method_System_Collections_Generic_KeyValuePair_string__ExtraBattleUserInterfaceComponent__Deconstruct__,
          v13);
        v14 = v23;
        v15 = key;
        AssetPath = ExtraBattleUserInterfaceData__get_AssetPath(v11, 0LL);
        v17 = System_String__op_Equality(v14, AssetPath, 0LL);
        if ( v17 )
        {
          if ( !v15 )
            sub_1B86614(v17, v18);
          ExtraBattleUserInterfaceComponent__UpdateData(
            (ExtraBattleUserInterfaceComponent_o *)v15,
            v11,
            this->fields.bdata,
            0LL);
          ExtraBattleUserInterfaceComponent__SetActive((ExtraBattleUserInterfaceComponent_o *)v15, 1, 0LL);
        }
        else
        {
          if ( !v15 )
            sub_1B86614(v17, v18);
          ExtraBattleUserInterfaceComponent__SetActive((ExtraBattleUserInterfaceComponent_o *)v15, 0, 0LL);
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
        &v22,
        (const MethodInfo_33C9BAC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__Dispose__);
    }
  }
}


bool __fastcall BattlePerformanceEnemy__checkRaidUpdateHp(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantRaidParamComponent_o *raidParam; // x8

  raidParam = this->fields.raidParam;
  if ( !raidParam )
    sub_1B86614(this, method);
  return raidParam->fields.flgUpdate;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemy__deleteStatus(
        BattlePerformanceEnemy_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *v4; // x20
  __int64 v5; // x1
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  UnityEngine_Object_o *v7; // x21
  struct BattleServantHeadUpComponent_array *v8; // x8
  struct System_Int32_array *list_ID; // x8
  struct BattleServantHeadUpComponent_array *v10; // x8
  struct BattleServantParamComponent_array *svtParamList; // x8
  UnityEngine_Object_o *v12; // x21
  struct BattleServantParamComponent_array *v13; // x8

  v4 = this;
  if ( (byte_4A516A7 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___, *(_QWORD *)&index);
    this = (BattlePerformanceEnemy_o *)sub_1B863B8(&UnityEngine_Object_TypeInfo, v5);
    byte_4A516A7 = 1;
  }
  svtHeadUpList = v4->fields.svtHeadUpList;
  if ( !svtHeadUpList )
    goto LABEL_29;
  if ( svtHeadUpList->max_length <= index )
LABEL_30:
    sub_1B8661C(this, *(_QWORD *)&index);
  v7 = (UnityEngine_Object_o *)svtHeadUpList->m_Items[index];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattlePerformanceEnemy_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = v4->fields.svtHeadUpList;
    if ( !v8 )
      goto LABEL_29;
    if ( v8->max_length <= index )
      goto LABEL_30;
    this = (BattlePerformanceEnemy_o *)v8->m_Items[index];
    if ( !this )
      goto LABEL_29;
    BattleServantHeadUpComponent__setData((BattleServantHeadUpComponent_o *)this, 0LL, 0LL);
    list_ID = v4->fields.list_ID;
    if ( !list_ID )
      goto LABEL_29;
    if ( list_ID->max_length <= index )
      goto LABEL_30;
    list_ID->m_Items[index + 1] = -1;
    v10 = v4->fields.svtHeadUpList;
    if ( !v10 )
      goto LABEL_29;
    if ( v10->max_length <= index )
      goto LABEL_30;
    this = (BattlePerformanceEnemy_o *)v10->m_Items[index];
    if ( !this )
      goto LABEL_29;
    this = (BattlePerformanceEnemy_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_29;
    this = (BattlePerformanceEnemy_o *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)this,
                                         (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___);
    if ( !this )
      goto LABEL_29;
    TrackingMoveCtCComponent__stopAct((TrackingMoveCtCComponent_o *)this, 0LL);
  }
  svtParamList = v4->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_29;
  if ( svtParamList->max_length <= index )
    goto LABEL_30;
  v12 = (UnityEngine_Object_o *)svtParamList->m_Items[index];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattlePerformanceEnemy_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v13 = v4->fields.svtParamList;
    if ( !v13 )
      goto LABEL_29;
    if ( v13->max_length > index )
    {
      this = (BattlePerformanceEnemy_o *)v13->m_Items[index];
      if ( this )
      {
        (*(void (__fastcall **)(BattlePerformanceEnemy_o *, _QWORD, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
          this,
          0LL,
          this->klass[1]._1.element_class);
        return;
      }
LABEL_29:
      sub_1B86614(this, *(_QWORD *)&index);
    }
    goto LABEL_30;
  }
}


void __fastcall BattlePerformanceEnemy__endSkill(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
LABEL_7:
    sub_1B86614(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B8661C(this, method);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setTargetRoot((BattleServantHeadUpComponent_o *)this, 1, 0LL);
      svtHeadUpList = v3->fields.svtHeadUpList;
      ++v4;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_7;
  }
}


int64_t __fastcall BattlePerformanceEnemy__getTurnSituationParam(
        BattlePerformanceEnemy_o *this,
        const MethodInfo *method)
{
  BattleServantRaidParamComponent_o *raidParam; // x0

  raidParam = this->fields.raidParam;
  if ( !raidParam )
    sub_1B86614(0LL, method);
  return BattleServantRaidParamComponent__getTurnSituationParam(raidParam, 0LL);
}


void __fastcall BattlePerformanceEnemy__playAddition(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantParamComponent_array *svtParamList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
LABEL_7:
    sub_1B86614(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = svtParamList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B8661C(this, method);
    this = (BattlePerformanceEnemy_o *)svtParamList->m_Items[v4];
    if ( this )
    {
      BattleServantParamComponent__playAddition((BattleServantParamComponent_o *)this, 0LL);
      svtParamList = v3->fields.svtParamList;
      ++v4;
      if ( svtParamList )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall BattlePerformanceEnemy__setOffTarget(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9
  struct BattleServantParamComponent_array *svtParamList; // x8
  __int64 v7; // x20
  int v8; // w9

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
    goto LABEL_18;
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
LABEL_19:
      sub_1B8661C(this, method);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setTargetMark((BattleServantHeadUpComponent_o *)this, -1, 0, 0LL);
      svtHeadUpList = v3->fields.svtHeadUpList;
      ++v4;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_18;
  }
  svtParamList = v3->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_18;
  v7 = 0LL;
  while ( 1 )
  {
    v8 = svtParamList->max_length;
    if ( (int)v7 >= v8 )
      break;
    if ( (unsigned int)v7 >= v8 )
      goto LABEL_19;
    this = (BattlePerformanceEnemy_o *)svtParamList->m_Items[v7];
    if ( this )
    {
      BattleServantParamComponent__setTargetMark((BattleServantParamComponent_o *)this, -1, 0, 0LL);
      svtParamList = v3->fields.svtParamList;
      ++v7;
      if ( svtParamList )
        continue;
    }
    goto LABEL_18;
  }
  this = (BattlePerformanceEnemy_o *)v3->fields.raidParam;
  if ( !this
    || (BattleServantParamComponent__setTargetMark((BattleServantParamComponent_o *)this, -1, 0, 0LL),
        (this = (BattlePerformanceEnemy_o *)v3->fields.superbossParam) == 0LL) )
  {
LABEL_18:
    sub_1B86614(this, method);
  }
  BattleServantParamComponent__setTargetMark((BattleServantParamComponent_o *)this, -1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemy__setParam(
        BattlePerformanceEnemy_o *this,
        int32_t index,
        BattleServantData_o *svtdata,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *v7; // x20
  __int64 v8; // x1
  struct BattlePerformance_o *perf; // x8
  UnityEngine_GameObject_o *v10; // x3
  const MethodInfo *v11; // x4
  struct BattleData_o *bdata; // x8
  struct BattleServantRaidParamComponent_o *raidParam; // x22
  struct BattlePerformance_o *v14; // x8
  EventRaidEntity_o *v15; // x8
  BattleServantRaidParamComponent_o *v16; // x22
  BattlePerformanceEnemy_o *splitHp; // x23
  struct BattlePerformance_o *v18; // x8
  BattleServantSuperBossParamComponent_o *superbossParam; // x22
  struct BattlePerformance_o *v20; // x8
  BattlePerformanceEnemy_o *v21; // x23
  struct BattleServantSuperBossParamComponent_o *v22; // x22
  struct BattlePerformance_o *v23; // x8
  struct BattleServantRaidParamComponent_o *v24; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  EventRaidEntity_o *raidEnt; // [xsp+8h] [xbp-38h] BYREF

  v7 = this;
  if ( (byte_4A516AD & 1) == 0 )
  {
    sub_1B863B8(&long___TypeInfo, *(_QWORD *)&index);
    this = (BattlePerformanceEnemy_o *)sub_1B863B8(&UnityEngine_Object_TypeInfo, v8);
    byte_4A516AD = 1;
  }
  raidEnt = 0LL;
  perf = v7->fields.perf;
  if ( !perf )
    goto LABEL_50;
  this = (BattlePerformanceEnemy_o *)perf->fields.data;
  if ( !this )
    goto LABEL_50;
  this = (BattlePerformanceEnemy_o *)BattleData__getStageEntity((BattleData_o *)this, 0LL);
  if ( !this )
    goto LABEL_50;
  this = (BattlePerformanceEnemy_o *)StageEntity__IsForceSetNormalEnemyStatusUI((StageEntity_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
LABEL_7:
    BattlePerformanceEnemy__SetNormalEnemyStatusUI(v7, index, svtdata, v10, v11);
    return;
  }
  if ( !svtdata )
    goto LABEL_50;
  if ( svtdata->fields.isRaid )
  {
    this = (BattlePerformanceEnemy_o *)v7->fields.raidParam;
    if ( !this )
      goto LABEL_50;
    this = (BattlePerformanceEnemy_o *)(*(__int64 (__fastcall **)(BattlePerformanceEnemy_o *, BattleServantData_o *, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
                                         this,
                                         svtdata,
                                         this->klass[1]._1.element_class);
    bdata = v7->fields.bdata;
    if ( !bdata )
      goto LABEL_50;
    this = (BattlePerformanceEnemy_o *)bdata->fields.battle_ent;
    if ( !this )
      goto LABEL_50;
    raidParam = v7->fields.raidParam;
    this = (BattlePerformanceEnemy_o *)BattleEntity__isDefeatCount((BattleEntity_o *)this, 0LL);
    if ( !raidParam )
      goto LABEL_50;
    raidParam->fields.isDefeatCount = (unsigned __int8)this & 1;
    v14 = v7->fields.perf;
    if ( !v14 )
      goto LABEL_50;
    this = (BattlePerformanceEnemy_o *)v14->fields.data;
    if ( !this )
      goto LABEL_50;
    this = (BattlePerformanceEnemy_o *)BattleData__TryGetRaidEntity(
                                         (BattleData_o *)this,
                                         &raidEnt,
                                         svtdata->fields.raidId,
                                         0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v15 = raidEnt;
      if ( !raidEnt )
        goto LABEL_50;
      v16 = v7->fields.raidParam;
      if ( !v16 )
        goto LABEL_50;
      v16->fields.isJumbleRaid = raidEnt->fields.groupIndex > 0;
      splitHp = (BattlePerformanceEnemy_o *)v15->fields.splitHp;
    }
    else
    {
      this = (BattlePerformanceEnemy_o *)sub_1B86460(long___TypeInfo, 0LL);
      v16 = v7->fields.raidParam;
      splitHp = this;
    }
    v23 = v7->fields.perf;
    if ( !v23 )
      goto LABEL_50;
    this = (BattlePerformanceEnemy_o *)v23->fields.data;
    if ( !this )
      goto LABEL_50;
    this = (BattlePerformanceEnemy_o *)BattleData__getRaidBossMaxHp((BattleData_o *)this, svtdata->fields.raidId, 0LL);
    if ( !v16 )
      goto LABEL_50;
    BattleServantRaidParamComponent__setSplitHp(v16, (System_Int64_array *)splitHp, (int64_t)this, 0LL);
    v24 = v7->fields.raidParam;
    if ( !v24 )
      goto LABEL_50;
    v24->fields.index = index;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL) )
    {
      this = (BattlePerformanceEnemy_o *)v7->fields.raidParam;
      if ( this )
      {
        (*(void (__fastcall **)(BattlePerformanceEnemy_o *, BattleServantData_o *, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
          this,
          svtdata,
          this->klass[1]._1.element_class);
        this = (BattlePerformanceEnemy_o *)v7->fields.raidParam;
        if ( this )
        {
          LODWORD(this->fields.svtHeadUpList) = index;
          BattleServantParamComponent__setTouch((BattleServantParamComponent_o *)this, 1, 0LL);
          this = (BattlePerformanceEnemy_o *)v7->fields.raidParam;
          if ( this )
          {
LABEL_48:
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            BattleServantData__addParamObject(svtdata, gameObject, 0LL);
            return;
          }
        }
      }
LABEL_50:
      sub_1B86614(this, *(_QWORD *)&index);
    }
  }
  else
  {
    if ( !BattleServantData__get_IsSuperBossUi(svtdata, 0LL) )
      goto LABEL_7;
    this = (BattlePerformanceEnemy_o *)v7->fields.superbossParam;
    if ( !this )
      goto LABEL_50;
    this = (BattlePerformanceEnemy_o *)(*(__int64 (__fastcall **)(BattlePerformanceEnemy_o *, BattleServantData_o *, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
                                         this,
                                         svtdata,
                                         this->klass[1]._1.element_class);
    if ( svtdata->fields.isSuperBoss )
    {
      v18 = v7->fields.perf;
      if ( !v18 )
        goto LABEL_50;
      this = (BattlePerformanceEnemy_o *)v18->fields.data;
      if ( !this )
        goto LABEL_50;
      superbossParam = v7->fields.superbossParam;
      this = (BattlePerformanceEnemy_o *)BattleData__getSuperBossSplitHp(
                                           (BattleData_o *)this,
                                           svtdata->fields.superBossId,
                                           0LL);
      v20 = v7->fields.perf;
      if ( !v20 )
        goto LABEL_50;
      v21 = this;
      this = (BattlePerformanceEnemy_o *)v20->fields.data;
      if ( !this )
        goto LABEL_50;
      this = (BattlePerformanceEnemy_o *)BattleData__getSuperBossMaxHp(
                                           (BattleData_o *)this,
                                           svtdata->fields.superBossId,
                                           0LL);
      if ( !superbossParam )
        goto LABEL_50;
      BattleServantSuperBossParamComponent__setSplitHp(superbossParam, (System_Int64_array *)v21, (int64_t)this, 0LL);
    }
    v22 = v7->fields.superbossParam;
    if ( !v22 )
      goto LABEL_50;
    v22->fields.index = index;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL) )
    {
      this = (BattlePerformanceEnemy_o *)v7->fields.superbossParam;
      if ( this )
      {
        (*(void (__fastcall **)(BattlePerformanceEnemy_o *, BattleServantData_o *, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
          this,
          svtdata,
          this->klass[1]._1.element_class);
        this = (BattlePerformanceEnemy_o *)v7->fields.superbossParam;
        if ( this )
        {
          LODWORD(this->fields.svtHeadUpList) = index;
          BattleServantParamComponent__setTouch((BattleServantParamComponent_o *)this, 1, 0LL);
          this = (BattlePerformanceEnemy_o *)v7->fields.superbossParam;
          if ( this )
            goto LABEL_48;
        }
      }
      goto LABEL_50;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemy__setParamPosition(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  BattlePerformanceEnemy_o *v3; // x19
  struct BattlePerformance_o *v4; // x8
  int m_CancellationTokenSource; // w8
  BattlePerformanceEnemy_o *v6; // x20
  unsigned int v7; // w21
  const MethodInfo *v8; // x1
  UnityEngine_Transform_o *nomalTr; // x21
  BattlePerformanceEnemy_o *v10; // x20
  int v11; // s0
  UnityEngine_Transform_o *v14; // x21
  int v15; // s0
  struct BattleData_o *bdata; // x8
  UnityEngine_Transform_o *exBattleUiParent; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  struct BattleServantParamComponent_array *svtParamList; // x19
  int max_length; // w8
  unsigned int v26; // w21
  int v27; // s0
  int v28; // s1
  int v29; // s2
  float v30; // s1
  int v31; // s0
  int v32; // s2
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_45;
  v3 = this;
  this = (BattlePerformanceEnemy_o *)perf->fields.data;
  if ( !this )
    goto LABEL_45;
  this = (BattlePerformanceEnemy_o *)BattleData__getStageEntity((BattleData_o *)this, 0LL);
  if ( !this )
    goto LABEL_45;
  this = (BattlePerformanceEnemy_o *)StageEntity__IsForceSetNormalEnemyStatusUI((StageEntity_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_15;
  v4 = v3->fields.perf;
  if ( !v4 )
    goto LABEL_45;
  this = (BattlePerformanceEnemy_o *)v4->fields.data;
  if ( !this )
    goto LABEL_45;
  this = (BattlePerformanceEnemy_o *)BattleData__getEnemyServantList((BattleData_o *)this, 0LL);
  if ( !this )
    goto LABEL_45;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = this;
  if ( m_CancellationTokenSource < 1 )
  {
LABEL_15:
    this = (BattlePerformanceEnemy_o *)v3->fields.superBossTr;
    if ( !this )
      goto LABEL_45;
    v33.fields.x = 0.0;
    v33.fields.z = 0.0;
    v33.fields.y = 90.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v33, 0LL);
    this = (BattlePerformanceEnemy_o *)v3->fields.raidTr;
    if ( !this )
      goto LABEL_45;
    v34.fields.x = 0.0;
    v34.fields.z = 0.0;
    v34.fields.y = 90.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v34, 0LL);
    this = (BattlePerformanceEnemy_o *)BattlePerformanceEnemy__MakeEnemyParamPosData(v3, v8);
    if ( !this )
      goto LABEL_45;
    nomalTr = v3->fields.nomalTr;
    v10 = this;
    this = (BattlePerformanceEnemy_o *)((__int64 (__fastcall *)(BattlePerformanceEnemy_o *, const char *))this->klass[1]._1.gc_desc)(
                                         this,
                                         this->klass[1]._1.name);
    if ( !nomalTr )
      goto LABEL_45;
    UnityEngine_Transform__set_localPosition(nomalTr, *(UnityEngine_Vector3_o *)&v11, 0LL);
    v14 = v3->fields.nomalTr;
    this = (BattlePerformanceEnemy_o *)((__int64 (__fastcall *)(BattlePerformanceEnemy_o *, void *))v10->klass[1]._1.namespaze)(
                                         v10,
                                         v10->klass[1]._1.byval_arg.data);
    if ( !v14 )
      goto LABEL_45;
    UnityEngine_Transform__set_localScale(v14, *(UnityEngine_Vector3_o *)&v15, 0LL);
    bdata = v3->fields.bdata;
    if ( !bdata )
      goto LABEL_45;
    exBattleUiParent = v3->fields.exBattleUiParent;
    if ( bdata->fields.enemyMasterInfo )
    {
      if ( !byte_4A487E1 )
      {
        this = (BattlePerformanceEnemy_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, method);
        byte_4A487E1 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      x = static_fields->zeroVector.fields.x;
      y = static_fields->zeroVector.fields.y;
      z = static_fields->zeroVector.fields.z;
      if ( !exBattleUiParent )
        goto LABEL_45;
    }
    else
    {
      this = (BattlePerformanceEnemy_o *)((__int64 (__fastcall *)(BattlePerformanceEnemy_o *, Il2CppClass *))v10->klass[1]._1.castClass)(
                                           v10,
                                           v10->klass[1]._1.declaringType);
      if ( !exBattleUiParent )
        goto LABEL_45;
    }
    UnityEngine_Transform__set_localPosition(exBattleUiParent, *(UnityEngine_Vector3_o *)&x, 0LL);
    svtParamList = v3->fields.svtParamList;
    if ( !svtParamList )
      goto LABEL_45;
    max_length = svtParamList->max_length;
    if ( max_length >= 1 )
    {
      v26 = 0;
      while ( v26 < max_length )
      {
        this = (BattlePerformanceEnemy_o *)svtParamList->m_Items[v26];
        if ( !this )
          goto LABEL_45;
        this = (BattlePerformanceEnemy_o *)((__int64 (__fastcall *)(BattlePerformanceEnemy_o *, BattlePerformanceEnemy_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                                             this,
                                             v10,
                                             this->klass[1]._1.declaringType);
        max_length = svtParamList->max_length;
        if ( (int)++v26 >= max_length )
          return;
      }
LABEL_46:
      sub_1B8661C(this, method);
    }
  }
  else
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= m_CancellationTokenSource )
        goto LABEL_46;
      this = (BattlePerformanceEnemy_o *)*((_QWORD *)&v6->fields.perf + (int)v7);
      if ( !this )
        goto LABEL_45;
      if ( BYTE1(this[3].fields.perf) )
        break;
      this = (BattlePerformanceEnemy_o *)BattleServantData__get_IsSuperBossUi((BattleServantData_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattlePerformanceEnemy_o *)v3->fields.superBossTr;
        if ( this )
        {
          v36.fields.x = 0.0;
          v36.fields.y = 0.0;
          v36.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v36, 0LL);
          this = (BattlePerformanceEnemy_o *)v3->fields.raidTr;
          if ( this )
          {
            v27 = 0;
            v29 = 0;
            v28 = 1119092736;
            goto LABEL_40;
          }
        }
        goto LABEL_45;
      }
      m_CancellationTokenSource = (int)v6->fields.m_CancellationTokenSource;
      if ( (int)++v7 >= m_CancellationTokenSource )
        goto LABEL_15;
    }
    this = (BattlePerformanceEnemy_o *)v3->fields.superBossTr;
    if ( !this )
      goto LABEL_45;
    v35.fields.x = 0.0;
    v35.fields.z = 0.0;
    v35.fields.y = 90.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v35, 0LL);
    this = (BattlePerformanceEnemy_o *)v3->fields.raidTr;
    if ( !this )
      goto LABEL_45;
    v27 = 0;
    v28 = 0;
    v29 = 0;
LABEL_40:
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v27, 0LL);
    this = (BattlePerformanceEnemy_o *)v3->fields.nomalTr;
    if ( !this
      || (v37.fields.x = 0.0,
          v37.fields.z = 0.0,
          v37.fields.y = -82.0,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v37, 0LL),
          (this = (BattlePerformanceEnemy_o *)v3->fields.exBattleUiParent) == 0LL) )
    {
LABEL_45:
      sub_1B86614(this, method);
    }
    v30 = -50.0;
    v31 = 0;
    if ( SLODWORD(v6->fields.m_CancellationTokenSource) <= 1 )
      v30 = 0.0;
    v32 = 0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v31, 0LL);
  }
}


void __fastcall BattlePerformanceEnemy__setTarget(
        BattlePerformanceEnemy_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  BattlePerformanceEnemy_o *v4; // x20
  struct BattlePerformance_o *v6; // x8
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  char v8; // w21
  __int64 v9; // x22
  int max_length; // w9
  struct BattleServantParamComponent_array *svtParamList; // x8
  __int64 v12; // x22
  int v13; // w9
  bool v14; // w21

  if ( svtData )
  {
    perf = this->fields.perf;
    v4 = this;
    if ( !perf )
      goto LABEL_24;
    this = (BattlePerformanceEnemy_o *)perf->fields.logic;
    if ( !this )
      goto LABEL_24;
    BattleLogic__updateEnemyTargetLogic((BattleLogic_o *)this, 0LL);
    v6 = v4->fields.perf;
    if ( !v6 )
      goto LABEL_24;
    this = (BattlePerformanceEnemy_o *)v6->fields.data;
    if ( !this )
      goto LABEL_24;
    this = (BattlePerformanceEnemy_o *)BattleData__isTargetLock((BattleData_o *)this, 0LL);
    svtHeadUpList = v4->fields.svtHeadUpList;
    if ( !svtHeadUpList )
      goto LABEL_24;
    v8 = (char)this;
    v9 = 0LL;
    while ( 1 )
    {
      max_length = svtHeadUpList->max_length;
      if ( (int)v9 >= max_length )
        break;
      if ( (unsigned int)v9 >= max_length )
LABEL_25:
        sub_1B8661C(this, svtData);
      this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v9];
      if ( this )
      {
        BattleServantHeadUpComponent__setTargetMark(
          (BattleServantHeadUpComponent_o *)this,
          svtData->fields.uniqueId,
          v8 & 1,
          0LL);
        svtHeadUpList = v4->fields.svtHeadUpList;
        ++v9;
        if ( svtHeadUpList )
          continue;
      }
      goto LABEL_24;
    }
    svtParamList = v4->fields.svtParamList;
    if ( !svtParamList )
      goto LABEL_24;
    v12 = 0LL;
    while ( 1 )
    {
      v13 = svtParamList->max_length;
      if ( (int)v12 >= v13 )
        break;
      if ( (unsigned int)v12 >= v13 )
        goto LABEL_25;
      this = (BattlePerformanceEnemy_o *)svtParamList->m_Items[v12];
      if ( this )
      {
        BattleServantParamComponent__setTargetMark(
          (BattleServantParamComponent_o *)this,
          svtData->fields.uniqueId,
          v8 & 1,
          0LL);
        svtParamList = v4->fields.svtParamList;
        ++v12;
        if ( svtParamList )
          continue;
      }
      goto LABEL_24;
    }
    this = (BattlePerformanceEnemy_o *)v4->fields.raidParam;
    if ( !this
      || (v14 = v8 & 1,
          BattleServantParamComponent__setTargetMark(
            (BattleServantParamComponent_o *)this,
            svtData->fields.uniqueId,
            v14,
            0LL),
          (this = (BattlePerformanceEnemy_o *)v4->fields.superbossParam) == 0LL) )
    {
LABEL_24:
      sub_1B86614(this, svtData);
    }
    BattleServantParamComponent__setTargetMark(
      (BattleServantParamComponent_o *)this,
      svtData->fields.uniqueId,
      v14,
      0LL);
  }
}


void __fastcall BattlePerformanceEnemy__setWinView(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantParamComponent_array *svtParamList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_7;
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = svtParamList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B8661C(this, method);
    this = (BattlePerformanceEnemy_o *)svtParamList->m_Items[v4];
    if ( this )
    {
      this = (BattlePerformanceEnemy_o *)(*(__int64 (__fastcall **)(BattlePerformanceEnemy_o *, _QWORD, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
                                           this,
                                           0LL,
                                           this->klass[1]._1.element_class);
      svtParamList = v3->fields.svtParamList;
      ++v4;
      if ( svtParamList )
        continue;
    }
    goto LABEL_7;
  }
  this = (BattlePerformanceEnemy_o *)v3->fields.raidParam;
  if ( !this
    || ((*(void (__fastcall **)(BattlePerformanceEnemy_o *, _QWORD, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
          this,
          0LL,
          this->klass[1]._1.element_class),
        (this = (BattlePerformanceEnemy_o *)v3->fields.superbossParam) == 0LL) )
  {
LABEL_7:
    sub_1B86614(this, method);
  }
  (*(void (__fastcall **)(BattlePerformanceEnemy_o *, _QWORD, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
    this,
    0LL,
    this->klass[1]._1.element_class);
}


void __fastcall BattlePerformanceEnemy__showSideEffect(
        BattlePerformanceEnemy_o *this,
        BattleActionData_BuffData_o *buffData,
        const MethodInfo *method)
{
  struct BattleServantParamComponent_array *svtParamList; // x8
  BattlePerformanceEnemy_o *v4; // x20
  __int64 v6; // x21
  int max_length; // w9
  unsigned int v8; // w22
  struct BattleServantParamComponent_array *v9; // x8

  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_13;
  v4 = this;
  v6 = 4LL;
  while ( 1 )
  {
    max_length = svtParamList->max_length;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= max_length )
      break;
    if ( v8 >= max_length )
      goto LABEL_24;
    if ( !buffData )
      goto LABEL_13;
    this = (BattlePerformanceEnemy_o *)*((_QWORD *)&svtParamList->obj.klass + v6);
    if ( !this )
      goto LABEL_13;
    this = (BattlePerformanceEnemy_o *)BattleServantParamComponent__checkId(
                                         (BattleServantParamComponent_o *)this,
                                         buffData->fields.targetId,
                                         0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v9 = v4->fields.svtParamList;
      if ( !v9 )
        goto LABEL_13;
      if ( v8 >= v9->max_length )
LABEL_24:
        sub_1B8661C(this, buffData);
      this = (BattlePerformanceEnemy_o *)*((_QWORD *)&v9->obj.klass + v6);
      if ( !this )
        goto LABEL_13;
      BattleServantParamComponent__showSideEffect((BattleServantParamComponent_o *)this, buffData, 0LL);
    }
    svtParamList = v4->fields.svtParamList;
    ++v6;
    if ( !svtParamList )
      goto LABEL_13;
  }
  if ( !buffData )
    goto LABEL_13;
  this = (BattlePerformanceEnemy_o *)v4->fields.raidParam;
  if ( !this )
    goto LABEL_13;
  if ( BattleServantParamComponent__checkId((BattleServantParamComponent_o *)this, buffData->fields.targetId, 0LL) )
  {
    this = (BattlePerformanceEnemy_o *)v4->fields.raidParam;
    if ( !this )
      goto LABEL_13;
    BattleServantParamComponent__showSideEffect((BattleServantParamComponent_o *)this, buffData, 0LL);
  }
  this = (BattlePerformanceEnemy_o *)v4->fields.superbossParam;
  if ( !this )
LABEL_13:
    sub_1B86614(this, buffData);
  if ( BattleServantParamComponent__checkId((BattleServantParamComponent_o *)this, buffData->fields.targetId, 0LL) )
  {
    this = (BattlePerformanceEnemy_o *)v4->fields.superbossParam;
    if ( this )
    {
      BattleServantParamComponent__showSideEffect((BattleServantParamComponent_o *)this, buffData, 0LL);
      return;
    }
    goto LABEL_13;
  }
}


void __fastcall BattlePerformanceEnemy__startAction(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
LABEL_7:
    sub_1B86614(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B8661C(this, method);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setModeAction((BattleServantHeadUpComponent_o *)this, 0LL);
      svtHeadUpList = v3->fields.svtHeadUpList;
      ++v4;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall BattlePerformanceEnemy__startCommand(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
LABEL_7:
    sub_1B86614(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B8661C(this, method);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setModeCommand((BattleServantHeadUpComponent_o *)this, 0LL);
      svtHeadUpList = v3->fields.svtHeadUpList;
      ++v4;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall BattlePerformanceEnemy__startSkill(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
LABEL_7:
    sub_1B86614(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B8661C(this, method);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setTargetRoot((BattleServantHeadUpComponent_o *)this, 0, 0LL);
      svtHeadUpList = v3->fields.svtHeadUpList;
      ++v4;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall BattlePerformanceEnemy__startTac(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
LABEL_7:
    sub_1B86614(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B8661C(this, method);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setModeTac((BattleServantHeadUpComponent_o *)this, 0LL);
      svtHeadUpList = v3->fields.svtHeadUpList;
      ++v4;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall BattlePerformanceEnemy__startWave(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9

  svtHeadUpList = this->fields.svtHeadUpList;
  if ( !svtHeadUpList )
LABEL_7:
    sub_1B86614(this, method);
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = svtHeadUpList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B8661C(this, method);
    this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v4];
    if ( this )
    {
      BattleServantHeadUpComponent__setModeWaveStart((BattleServantHeadUpComponent_o *)this, 0LL);
      svtHeadUpList = v3->fields.svtHeadUpList;
      ++v4;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall BattlePerformanceEnemy__updateBuff(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceEnemy__updateRaidHp(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  BattleServantRaidParamComponent_o *raidParam; // x0

  raidParam = this->fields.raidParam;
  if ( !raidParam )
    sub_1B86614(0LL, method);
  BattleServantRaidParamComponent__updateRaidHp(raidParam, 0LL);
}


void __fastcall BattlePerformanceEnemy__updateRaidInfos(
        BattlePerformanceEnemy_o *this,
        BattleRaidInfo_array *infos,
        bool fixUpdate,
        const MethodInfo *method)
{
  struct BattleServantRaidParamComponent_o *raidParam; // x8
  struct BattleServantData_o *data; // x22
  BattleRaidInfo_array *v6; // x20
  signed int max_length; // w8
  BattlePerformanceEnemy_o *v8; // x19
  unsigned int v9; // w23
  bool v10; // w21

  raidParam = this->fields.raidParam;
  if ( !raidParam )
    goto LABEL_13;
  data = raidParam->fields.data;
  if ( data )
  {
    v6 = infos;
    if ( !infos )
      goto LABEL_13;
    max_length = infos->max_length;
    if ( max_length >= 1 )
    {
      v8 = this;
      v9 = 0;
      v10 = fixUpdate;
      while ( 1 )
      {
        if ( v9 >= max_length )
          sub_1B8661C(this, infos);
        infos = (BattleRaidInfo_array *)v6->m_Items[v9];
        if ( !infos )
          break;
        if ( HIDWORD(infos->bounds) == data->fields.uniqueId )
        {
          this = (BattlePerformanceEnemy_o *)v8->fields.raidParam;
          if ( !this )
            break;
          BattleServantRaidParamComponent__updateRaidInfo(
            (BattleServantRaidParamComponent_o *)this,
            (BattleRaidInfo_o *)infos,
            v10,
            0LL);
        }
        max_length = v6->max_length;
        if ( (int)++v9 >= max_length )
          return;
      }
LABEL_13:
      sub_1B86614(this, infos);
    }
  }
}


void __fastcall BattlePerformanceEnemy__updateStateString(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  BattleServantSuperBossParamComponent_o *superbossParam; // x0

  superbossParam = this->fields.superbossParam;
  if ( !superbossParam )
    sub_1B86614(0LL, method);
  BattleServantSuperBossParamComponent__updateStateString(superbossParam, 0LL);
}


void __fastcall BattlePerformanceEnemy__updateSuperBossInfos(
        BattlePerformanceEnemy_o *this,
        BattleSuperBossInfo_array *infos,
        bool fixUpdate,
        const MethodInfo *method)
{
  struct BattleServantSuperBossParamComponent_o *superbossParam; // x8
  struct BattleServantData_o *data; // x22
  BattleSuperBossInfo_array *v6; // x20
  signed int max_length; // w8
  BattlePerformanceEnemy_o *v8; // x19
  unsigned int v9; // w23
  bool v10; // w21

  superbossParam = this->fields.superbossParam;
  if ( !superbossParam )
    goto LABEL_13;
  data = superbossParam->fields.data;
  if ( data )
  {
    v6 = infos;
    if ( !infos )
      goto LABEL_13;
    max_length = infos->max_length;
    if ( max_length >= 1 )
    {
      v8 = this;
      v9 = 0;
      v10 = fixUpdate;
      while ( 1 )
      {
        if ( v9 >= max_length )
          sub_1B8661C(this, infos);
        infos = (BattleSuperBossInfo_array *)v6->m_Items[v9];
        if ( !infos )
          break;
        if ( HIDWORD(infos->bounds) == data->fields.uniqueId )
        {
          this = (BattlePerformanceEnemy_o *)v8->fields.superbossParam;
          if ( !this )
            break;
          BattleServantSuperBossParamComponent__updateSuperBossInfo(
            (BattleServantSuperBossParamComponent_o *)this,
            (BattleSuperBossInfo_o *)infos,
            v10,
            0LL);
        }
        max_length = v6->max_length;
        if ( (int)++v9 >= max_length )
          return;
      }
LABEL_13:
      sub_1B86614(this, infos);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemy__updateView(BattlePerformanceEnemy_o *this, const MethodInfo *method)
{
  struct BattleServantParamComponent_array *svtParamList; // x8
  BattlePerformanceEnemy_o *v3; // x19
  __int64 v4; // x20
  int max_length; // w9
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  __int64 v7; // x20
  int v8; // w9
  struct BattleData_o *bdata; // x8
  struct BattleServantParamComponent_array *v10; // x8
  __int64 v11; // x21
  int v12; // w9
  unsigned int v13; // w24
  struct BattleServantParamComponent_array *v14; // x8
  BattlePerformanceEnemy_o *v15; // x20
  int v16; // s1
  struct BattleServantParamComponent_array *v17; // x8
  int v18; // s8
  int v19; // s2
  float v20; // s0
  int v21; // s1

  svtParamList = this->fields.svtParamList;
  if ( !svtParamList )
    goto LABEL_36;
  v3 = this;
  v4 = 0LL;
  while ( 1 )
  {
    max_length = svtParamList->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
LABEL_38:
      sub_1B8661C(this, method);
    this = (BattlePerformanceEnemy_o *)svtParamList->m_Items[v4];
    if ( this )
    {
      BattleServantParamComponent__updateView((BattleServantParamComponent_o *)this, 0LL);
      svtParamList = v3->fields.svtParamList;
      ++v4;
      if ( svtParamList )
        continue;
    }
    goto LABEL_36;
  }
  svtHeadUpList = v3->fields.svtHeadUpList;
  if ( !svtHeadUpList )
    goto LABEL_36;
  v7 = 0LL;
  while ( 1 )
  {
    v8 = svtHeadUpList->max_length;
    if ( (int)v7 >= v8 )
      break;
    if ( (unsigned int)v7 >= v8 )
      goto LABEL_38;
    this = (BattlePerformanceEnemy_o *)svtHeadUpList->m_Items[v7];
    if ( this )
    {
      BattleServantHeadUpComponent__updateView((BattleServantHeadUpComponent_o *)this, 0LL);
      svtHeadUpList = v3->fields.svtHeadUpList;
      ++v7;
      if ( svtHeadUpList )
        continue;
    }
    goto LABEL_36;
  }
  this = (BattlePerformanceEnemy_o *)v3->fields.raidParam;
  if ( !this )
    goto LABEL_36;
  BattleServantParamComponent__updateView((BattleServantParamComponent_o *)this, 0LL);
  this = (BattlePerformanceEnemy_o *)v3->fields.superbossParam;
  if ( !this )
    goto LABEL_36;
  BattleServantParamComponent__updateView((BattleServantParamComponent_o *)this, 0LL);
  this = (BattlePerformanceEnemy_o *)v3->fields.bdata;
  if ( !this )
    goto LABEL_36;
  this = (BattlePerformanceEnemy_o *)BattleData__IsWarBoard((BattleData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  bdata = v3->fields.bdata;
  if ( !bdata )
    goto LABEL_36;
  if ( !bdata->fields.enemyMasterInfo )
    return;
  v10 = v3->fields.svtParamList;
  if ( !v10 )
LABEL_36:
    sub_1B86614(this, method);
  v11 = 4LL;
  while ( 1 )
  {
    v12 = v10->max_length;
    v13 = v11 - 4;
    if ( (int)v11 - 4 >= v12 )
      break;
    if ( v13 >= v12 )
      goto LABEL_38;
    this = (BattlePerformanceEnemy_o *)*((_QWORD *)&v10->obj.klass + v11);
    if ( this )
    {
      this = (BattlePerformanceEnemy_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      v14 = v3->fields.svtParamList;
      if ( v14 )
      {
        if ( v13 >= v14->max_length )
          goto LABEL_38;
        v15 = this;
        this = (BattlePerformanceEnemy_o *)*((_QWORD *)&v14->obj.klass + v11);
        if ( this )
        {
          this = (BattlePerformanceEnemy_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          if ( this )
          {
            *(UnityEngine_Vector3_o *)(&v16 - 1) = UnityEngine_Transform__get_localPosition(
                                                     (UnityEngine_Transform_o *)this,
                                                     0LL);
            v17 = v3->fields.svtParamList;
            if ( v17 )
            {
              if ( v13 >= v17->max_length )
                goto LABEL_38;
              this = (BattlePerformanceEnemy_o *)*((_QWORD *)&v17->obj.klass + v11);
              if ( this )
              {
                v18 = v16;
                this = (BattlePerformanceEnemy_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
                if ( this )
                {
                  *(UnityEngine_Vector3_o *)(&v19 - 2) = UnityEngine_Transform__get_localPosition(
                                                           (UnityEngine_Transform_o *)this,
                                                           0LL);
                  if ( v15 )
                  {
                    v20 = (float)((float)(int)v13 * -200.0) + 178.0;
                    v21 = v18;
                    UnityEngine_Transform__set_localPosition(
                      (UnityEngine_Transform_o *)v15,
                      *(UnityEngine_Vector3_o *)(&v19 - 2),
                      0LL);
                    v10 = v3->fields.svtParamList;
                    ++v11;
                    if ( v10 )
                      continue;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_36;
  }
}


void __fastcall BattlePerformanceEnemy___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A516B8 & 1) == 0 )
  {
    sub_1B863B8(&BattlePerformanceEnemy___c_TypeInfo, v1);
    byte_4A516B8 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(BattlePerformanceEnemy___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattlePerformanceEnemy___c_TypeInfo->static_fields->__9 = (struct BattlePerformanceEnemy___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)BattlePerformanceEnemy___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattlePerformanceEnemy___c___ctor(BattlePerformanceEnemy___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceEnemy___c___RemoveExtraBattleUiDataAndComponents_b__48_1(
        BattlePerformanceEnemy___c_o *this,
        ExtraBattleUserInterfaceComponent_o *ui,
        const MethodInfo *method)
{
  if ( !ui )
    sub_1B86614(this, 0LL);
  ExtraBattleUserInterfaceComponent__SetActive(ui, 0, 0LL);
}


void __fastcall BattlePerformanceEnemy___c__DisplayClass44_0___ctor(
        BattlePerformanceEnemy___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattlePerformanceEnemy___c__DisplayClass44_0___GetSvtParamComponent_b__0(
        BattlePerformanceEnemy___c__DisplayClass44_0_o *this,
        BattleServantParamComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return BattleServantParamComponent__checkId(x, this->fields.uniqueId, 0LL);
}


void __fastcall BattlePerformanceEnemy___c__DisplayClass47_0___ctor(
        BattlePerformanceEnemy___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceEnemy___c__DisplayClass47_0___AddExtraBattleUiDataAndComponent_b__0(
        BattlePerformanceEnemy___c__DisplayClass47_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  BattlePerformanceEnemy___c__DisplayClass47_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct BattlePerformanceEnemy_o *_4__this; // x8
  Il2CppObject *Object_object__49610244; // x20
  struct BattlePerformanceEnemy_o *v15; // x8
  UnityEngine_Transform_o *exBattleUiParent; // x21
  Il2CppObject *Component_object; // x20
  Il2CppObject *v18; // x22
  System_Action_o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct BattlePerformanceEnemy_o *v22; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4A516B9 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, assetData);
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, v5);
    sub_1B863B8(&Method_BattlePerformanceEnemy_OnTapExtraBattleUi__, v6);
    sub_1B863B8(
      &Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__,
      v7);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__set_Item__, v8);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_ExtraBattleUserInterfaceComponent___, v9);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject____76169360, v10);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v11);
    this = (BattlePerformanceEnemy___c__DisplayClass47_0_o *)sub_1B863B8(&StringLiteral_6212/*"ExBattleUI"*/, v12);
    byte_4A516B9 = 1;
  }
  value = 0LL;
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  this = (BattlePerformanceEnemy___c__DisplayClass47_0_o *)_4__this->fields.exBattleUiDict;
  if ( !this )
    goto LABEL_22;
  this = (BattlePerformanceEnemy___c__DisplayClass47_0_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                                             (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                             (Il2CppObject *)v4->fields.assetPath,
                                                             &value,
                                                             (const MethodInfo_32CFEEC *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
LABEL_6:
    this = (BattlePerformanceEnemy___c__DisplayClass47_0_o *)v4->fields.__4__this;
    if ( this )
    {
      BattlePerformanceEnemy__UpdateExtraBattleUi((BattlePerformanceEnemy_o *)this, (const MethodInfo *)assetData);
      return;
    }
LABEL_22:
    sub_1B86614(this, assetData);
  }
  if ( !assetData )
    goto LABEL_22;
  Object_object__49610244 = AssetData__GetObject_object__49610244(
                              assetData,
                              (System_String_o *)StringLiteral_6212/*"ExBattleUI"*/,
                              (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattlePerformanceEnemy___c__DisplayClass47_0_o *)UnityEngine_Object__op_Equality(
                                                             (UnityEngine_Object_o *)Object_object__49610244,
                                                             0LL,
                                                             0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v15 = v4->fields.__4__this;
    if ( !v15 )
      goto LABEL_22;
    exBattleUiParent = v15->fields.exBattleUiParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceEnemy___c__DisplayClass47_0_o *)UnityEngine_Object__Instantiate_object__50290416(
                                                               Object_object__49610244,
                                                               exBattleUiParent,
                                                               (const MethodInfo_2FF5EF0 *)Method_UnityEngine_Object_Instantiate_GameObject____76169360);
    if ( !this )
      goto LABEL_22;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_ExtraBattleUserInterfaceComponent___);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      v18 = (Il2CppObject *)v4->fields.__4__this;
      v19 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v19, v18, Method_BattlePerformanceEnemy_OnTapExtraBattleUi__, 0LL);
      if ( !Component_object )
        goto LABEL_22;
      Component_object[3].monitor = v19;
      sub_1B8635C((CGThumbnailListItem_o *)&Component_object[3].monitor, (int32_t)v19, v20, v21);
      v22 = v4->fields.__4__this;
      if ( !v22 )
        goto LABEL_22;
      this = (BattlePerformanceEnemy___c__DisplayClass47_0_o *)v22->fields.exBattleUiDict;
      if ( !this )
        goto LABEL_22;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        (System_Collections_Generic_Dictionary_object__object__o *)this,
        (Il2CppObject *)v4->fields.assetPath,
        Component_object,
        (const MethodInfo_32CE6CC *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__set_Item__);
      goto LABEL_6;
    }
  }
}


void __fastcall BattlePerformanceEnemy___c__DisplayClass48_0___ctor(
        BattlePerformanceEnemy___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattlePerformanceEnemy___c__DisplayClass48_0___RemoveExtraBattleUiDataAndComponents_b__0(
        BattlePerformanceEnemy___c__DisplayClass48_0_o *this,
        ExtraBattleUserInterfaceData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B86614(this, 0LL);
  return data->fields._Wave_k__BackingField == this->fields.wave;
}