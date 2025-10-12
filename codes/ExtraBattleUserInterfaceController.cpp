void ExtraBattleUserInterfaceController___ctor(
        ExtraBattleUserInterfaceController_o *this,
        IBattlePerformanceExtraUiParent_o *parent,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.parentInterface = parent;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)parent, v7, v8);
  this->fields.battleData = data;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.battleData, (int32_t)data, v9, v10);
}


void ExtraBattleUserInterfaceController__AddDataAndComponent(
        ExtraBattleUserInterfaceController_o *this,
        ExtraBattleUserInterfaceData_o *exUiData,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_object__o *exBattleUiDataList; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o **p_exBattleUiDict; // x22
  System_Collections_Generic_Dictionary_object__object__o *v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Collections_Generic_List_ExtraBattleUserInterfaceData__o **p_exBattleUiDataList; // x23
  System_Collections_Generic_List_object__o *v16; // x24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8
  System_String_o *AssetPath; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  ExtraBattleUserInterfaceData_c *v27; // x0
  System_String_o *v28; // x19
  AssetLoader_LoadEndDataHandler_o *v29; // x20
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3B133 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TypeInfo);
    sub_1C32C20(&ExtraBattleUserInterfaceData_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ExtraBattleUserInterfaceData__TypeInfo);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&Method_ExtraBattleUserInterfaceController___c__DisplayClass8_0__AddDataAndComponent_b__0__);
    sub_1C32C20(&ExtraBattleUserInterfaceController___c__DisplayClass8_0_TypeInfo);
    byte_4C3B133 = 1;
  }
  value = 0;
  v5 = sub_1C32E6C(ExtraBattleUserInterfaceController___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  p_exBattleUiDict = &this->fields.exBattleUiDict;
  if ( !this->fields.exBattleUiDict )
  {
    v12 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v12,
      (const MethodInfo_3458418 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent___ctor__);
    *p_exBattleUiDict = (struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o *)v12;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.exBattleUiDict, (int32_t)v12, v13, v14);
  }
  p_exBattleUiDataList = &this->fields.exBattleUiDataList;
  exBattleUiDataList = (System_Collections_Generic_List_object__o *)this->fields.exBattleUiDataList;
  if ( !exBattleUiDataList )
  {
    v16 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ExtraBattleUserInterfaceData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData___ctor__);
    *p_exBattleUiDataList = (struct System_Collections_Generic_List_ExtraBattleUserInterfaceData__o *)v16;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.exBattleUiDataList, (int32_t)v16, v17, v18);
    exBattleUiDataList = (System_Collections_Generic_List_object__o *)*p_exBattleUiDataList;
    if ( !*p_exBattleUiDataList )
      goto LABEL_21;
  }
  items = exBattleUiDataList->fields._items;
  v20 = Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData__Add__;
  ++exBattleUiDataList->fields._version;
  if ( !items )
    goto LABEL_21;
  size = exBattleUiDataList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      exBattleUiDataList,
      (Il2CppObject *)exUiData,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    exBattleUiDataList->fields._size = size + 1;
    v22[4] = (Il2CppClass *)exUiData;
    sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 4), (int32_t)exUiData, v9, v10);
  }
  if ( !exUiData
    || (AssetPath = ExtraBattleUserInterfaceData__get_AssetPath(exUiData, 0),
        *(_QWORD *)(v5 + 24) = AssetPath,
        sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)AssetPath, v24, v25),
        (exBattleUiDataList = (System_Collections_Generic_List_object__o *)*p_exBattleUiDict) == 0) )
  {
LABEL_21:
    sub_1C32E7C(exBattleUiDataList);
  }
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDataList,
         *(Il2CppObject **)(v5 + 24),
         &value,
         (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__) )
  {
    v27 = ExtraBattleUserInterfaceData_TypeInfo;
    if ( !ExtraBattleUserInterfaceData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData_TypeInfo);
      v27 = ExtraBattleUserInterfaceData_TypeInfo;
    }
    ExtraBattleUserInterfaceController__UpdateUi(this, 0, v27->static_fields->AllLabelTypes, v26);
  }
  else
  {
    v28 = *(System_String_o **)(v5 + 24);
    v29 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v29,
      (Il2CppObject *)v5,
      Method_ExtraBattleUserInterfaceController___c__DisplayClass8_0__AddDataAndComponent_b__0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v28, v29, 1, 0);
  }
}


void ExtraBattleUserInterfaceController__DestroyAndUnloadAllUi(
        ExtraBattleUserInterfaceController_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o *exBattleUiDict; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_object__object__o *v7; // x20
  unsigned __int64 v8; // x23
  int32_t *p_count; // x24
  Il2CppObject *v10; // x21
  UnityEngine_Object_o *v11; // x22

  if ( (byte_4C3B13A & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Keys__);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B13A = 1;
  }
  exBattleUiDict = this->fields.exBattleUiDict;
  if ( exBattleUiDict )
  {
    Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
             (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDict,
             (const MethodInfo_3458AA8 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Keys__);
    Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__ToArray_object_(
                                                                        (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                        (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !Item )
      goto LABEL_16;
    entries = Item->fields._entries;
    v7 = Item;
    if ( (int)entries >= 1 )
    {
      v8 = 0;
      p_count = &Item->fields._count;
      while ( 1 )
      {
        if ( v8 >= (unsigned int)entries )
          sub_1C32E84(Item);
        Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.exBattleUiDict;
        if ( !Item )
          break;
        v10 = *(Il2CppObject **)&p_count[2 * v8];
        Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            v10,
                                                                            (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Item__);
        if ( !this->fields.exBattleUiDict )
          break;
        v11 = (UnityEngine_Object_o *)Item;
        System_Collections_Generic_Dictionary_object__object___Remove(
          (System_Collections_Generic_Dictionary_object__object__o *)this->fields.exBattleUiDict,
          v10,
          (const MethodInfo_345A2C4 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__Remove__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71223640(v11, 0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__releaseAssetStorage((System_String_o *)v10, 0);
        LODWORD(entries) = v7->fields._entries;
        if ( (__int64)++v8 >= (int)entries )
          return;
      }
LABEL_16:
      sub_1C32E7C(Item);
    }
  }
}


UnityEngine_Vector2_o ExtraBattleUserInterfaceController__GetOverKillPosAdjust(
        ExtraBattleUserInterfaceController_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ExtraBattleUserInterfaceData__o *exBattleUiDataList; // x0
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  Il2CppObject *v7; // x0
  struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o *exBattleUiDict; // x19
  System_String_o *AssetPath; // x0
  float v10; // s0
  float v11; // s1
  Il2CppObject *value; // [xsp+18h] [xbp-18h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C3B137 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__);
    sub_1C32C20(&Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    byte_4C3B137 = 1;
  }
  value = 0;
  if ( !byte_4C312CA )
  {
    sub_1C32C20(&UnityEngine_Vector2_TypeInfo);
    byte_4C312CA = 1;
  }
  exBattleUiDataList = this->fields.exBattleUiDataList;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  if ( exBattleUiDataList )
  {
    v7 = System_Linq_Enumerable__ElementAtOrDefault_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)exBattleUiDataList,
           this->fields.currentExBattleUiIndex,
           (const MethodInfo_310210C *)Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    if ( v7 )
    {
      exBattleUiDict = this->fields.exBattleUiDict;
      AssetPath = ExtraBattleUserInterfaceData__get_AssetPath((ExtraBattleUserInterfaceData_o *)v7, 0);
      if ( !exBattleUiDict )
        goto LABEL_12;
      AssetPath = (System_String_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                       (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDict,
                                       (Il2CppObject *)AssetPath,
                                       &value,
                                       (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__);
      if ( ((unsigned __int8)AssetPath & 1) != 0 )
      {
        if ( value )
        {
          x = *(float *)&value[3].klass;
          y = *((float *)&value[3].klass + 1);
          goto LABEL_11;
        }
LABEL_12:
        sub_1C32E7C(AssetPath);
      }
    }
  }
LABEL_11:
  v10 = x;
  v11 = y;
  result.fields.y = v11;
  result.fields.x = v10;
  return result;
}


UnityEngine_Vector2_o ExtraBattleUserInterfaceController__GetSkillSkipPosAdjust(
        ExtraBattleUserInterfaceController_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ExtraBattleUserInterfaceData__o *exBattleUiDataList; // x0
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  Il2CppObject *v7; // x0
  struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o *exBattleUiDict; // x19
  System_String_o *AssetPath; // x0
  float v10; // s0
  float v11; // s1
  Il2CppObject *value; // [xsp+18h] [xbp-18h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C3B138 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__);
    sub_1C32C20(&Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    byte_4C3B138 = 1;
  }
  value = 0;
  if ( !byte_4C312CA )
  {
    sub_1C32C20(&UnityEngine_Vector2_TypeInfo);
    byte_4C312CA = 1;
  }
  exBattleUiDataList = this->fields.exBattleUiDataList;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  if ( exBattleUiDataList )
  {
    v7 = System_Linq_Enumerable__ElementAtOrDefault_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)exBattleUiDataList,
           this->fields.currentExBattleUiIndex,
           (const MethodInfo_310210C *)Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    if ( v7 )
    {
      exBattleUiDict = this->fields.exBattleUiDict;
      AssetPath = ExtraBattleUserInterfaceData__get_AssetPath((ExtraBattleUserInterfaceData_o *)v7, 0);
      if ( !exBattleUiDict )
        goto LABEL_12;
      AssetPath = (System_String_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                       (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDict,
                                       (Il2CppObject *)AssetPath,
                                       &value,
                                       (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__);
      if ( ((unsigned __int8)AssetPath & 1) != 0 )
      {
        if ( value )
        {
          x = *(float *)&value[3].monitor;
          y = *((float *)&value[3].monitor + 1);
          goto LABEL_11;
        }
LABEL_12:
        sub_1C32E7C(AssetPath);
      }
    }
  }
LABEL_11:
  v10 = x;
  v11 = y;
  result.fields.y = v11;
  result.fields.x = v10;
  return result;
}


void ExtraBattleUserInterfaceController__OnTapUi(ExtraBattleUserInterfaceController_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  long double inited; // q0
  ExtraBattleUserInterfaceController_o *v4; // x19
  struct System_Collections_Generic_List_ExtraBattleUserInterfaceData__o *exBattleUiDataList; // x8
  int size; // w8
  int32_t currentExBattleUiIndex; // w9
  int32_t v8; // w8
  _QWORD *v9; // x20
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0

  v4 = this;
  if ( (byte_4C3B139 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelType___);
    this = (ExtraBattleUserInterfaceController_o *)sub_1C32C20(&Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData__get_Count__);
    byte_4C3B139 = 1;
  }
  exBattleUiDataList = v4->fields.exBattleUiDataList;
  if ( !exBattleUiDataList )
    sub_1C32E7C(this);
  size = exBattleUiDataList->fields._size;
  if ( size >= 2 )
  {
    currentExBattleUiIndex = v4->fields.currentExBattleUiIndex;
    if ( size > currentExBattleUiIndex + 1 )
      v8 = currentExBattleUiIndex + 1;
    else
      v8 = 0;
    v4->fields.currentExBattleUiIndex = v8;
    v9 = Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelType___;
    v10 = *((_QWORD *)Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelType___ + 7);
    if ( !v10 )
    {
      sub_1C83390(Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelType___);
      v10 = v9[7];
    }
    v11 = *(_QWORD *)(v10 + 16);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C83334(inited);
    if ( !*(_DWORD *)(v11 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v11);
    v12 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C83334(inited);
    ExtraBattleUserInterfaceController__UpdateUi(
      v4,
      0,
      **(ExtraBattleUserInterfaceData_LabelType_array ***)(v12 + 184),
      v2);
  }
}


void ExtraBattleUserInterfaceController__RemoveDataAndComponents(
        ExtraBattleUserInterfaceController_o *this,
        int32_t wave,
        bool isResume,
        const MethodInfo *method)
{
  int v4; // w20
  __int64 v7; // x22
  struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o *exBattleUiDict; // x0
  struct System_Collections_Generic_List_ExtraBattleUserInterfaceData__o *exBattleUiDataList; // x0
  Il2CppObject *v10; // x0
  bool v11; // w24
  System_Collections_Generic_List_object__o *v12; // x21
  System_Predicate_object__o *v13; // x23
  const MethodInfo *v14; // x3
  int32_t v15; // w20
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x19
  ExtraBattleUserInterfaceController___c_c *v17; // x8
  System_Action_object__o *_9__9_1; // x20
  Il2CppObject *v19; // x21
  struct ExtraBattleUserInterfaceController___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  v4 = isResume;
  if ( (byte_4C3B134 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_ExtraBattleUserInterfaceComponent__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_ExtraBattleUserInterfaceComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Values__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    sub_1C32C20(&ExtraBattleUserInterfaceData_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData__RemoveAll__);
    sub_1C32C20(&System_Predicate_ExtraBattleUserInterfaceData__TypeInfo);
    sub_1C32C20(&Method_ExtraBattleUserInterfaceController___c__RemoveDataAndComponents_b__9_1__);
    sub_1C32C20(&Method_ExtraBattleUserInterfaceController___c__DisplayClass9_0__RemoveDataAndComponents_b__0__);
    sub_1C32C20(&ExtraBattleUserInterfaceController___c__DisplayClass9_0_TypeInfo);
    sub_1C32C20(&ExtraBattleUserInterfaceController___c_TypeInfo);
    byte_4C3B134 = 1;
  }
  v7 = sub_1C32E6C(ExtraBattleUserInterfaceController___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_24;
  *(_DWORD *)(v7 + 16) = wave;
  exBattleUiDataList = this->fields.exBattleUiDataList;
  if ( !exBattleUiDataList )
    return;
  v10 = System_Linq_Enumerable__ElementAtOrDefault_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)exBattleUiDataList,
          this->fields.currentExBattleUiIndex,
          (const MethodInfo_310210C *)Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
  v11 = !v10 || !ExtraBattleUserInterfaceData__get_IsFromQuestPhase((ExtraBattleUserInterfaceData_o *)v10, 0);
  v12 = (System_Collections_Generic_List_object__o *)this->fields.exBattleUiDataList;
  v13 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_ExtraBattleUserInterfaceData__TypeInfo);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_ExtraBattleUserInterfaceController___c__DisplayClass9_0__RemoveDataAndComponents_b__0__,
    0);
  if ( !v12 )
    goto LABEL_24;
  System_Collections_Generic_List_object___RemoveAll(
    v12,
    (System_Predicate_T__o *)v13,
    (const MethodInfo_3799E18 *)Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData__RemoveAll__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.exBattleUiDataList,
         (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData___) )
  {
    if ( v11 )
      this->fields.currentExBattleUiIndex = 0;
    v15 = v4 << 31 >> 31;
    if ( !ExtraBattleUserInterfaceData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData_TypeInfo);
    ExtraBattleUserInterfaceController__UpdateUi(
      this,
      v15,
      ExtraBattleUserInterfaceData_TypeInfo->static_fields->AllLabelTypes,
      v14);
    return;
  }
  exBattleUiDict = this->fields.exBattleUiDict;
  if ( !exBattleUiDict )
LABEL_24:
    sub_1C32E7C(exBattleUiDict);
  Values = System_Collections_Generic_Dictionary_object__object___get_Values(
             (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDict,
             (const MethodInfo_3458BF8 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Values__);
  v17 = ExtraBattleUserInterfaceController___c_TypeInfo;
  if ( !ExtraBattleUserInterfaceController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceController___c_TypeInfo);
    v17 = ExtraBattleUserInterfaceController___c_TypeInfo;
  }
  _9__9_1 = (System_Action_object__o *)v17->static_fields->__9__9_1;
  if ( !_9__9_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = ExtraBattleUserInterfaceController___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__9_1 = (System_Action_object__o *)sub_1C32E6C(System_Action_ExtraBattleUserInterfaceComponent__TypeInfo);
    System_Action_object____ctor(
      _9__9_1,
      v19,
      Method_ExtraBattleUserInterfaceController___c__RemoveDataAndComponents_b__9_1__,
      0);
    static_fields = ExtraBattleUserInterfaceController___c_TypeInfo->static_fields;
    static_fields->__9__9_1 = (struct System_Action_ExtraBattleUserInterfaceComponent__o *)_9__9_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__9_1, (int32_t)_9__9_1, v21, v22);
  }
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (System_Action_T__o *)_9__9_1,
    (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_ExtraBattleUserInterfaceComponent___);
}


void ExtraBattleUserInterfaceController__SwitchDispAnimation(
        ExtraBattleUserInterfaceController_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ExtraBattleUserInterfaceData__o *exBattleUiDataList; // x0
  Il2CppObject *v6; // x0
  ExtraBattleUserInterfaceData_o *v7; // x19
  struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o *exBattleUiDict; // x0
  bool v9; // w20
  const MethodInfo_36D1374 *v10; // x4
  System_String_o *v11; // x22
  Il2CppObject *v12; // x21
  System_String_o *AssetPath; // x1
  _BOOL8 v14; // x0
  Il2CppObject *key; // [xsp+8h] [xbp-88h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // [xsp+10h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+20h] [xbp-70h] BYREF
  System_String_o *v18; // [xsp+58h] [xbp-38h] BYREF
  System_Collections_Generic_KeyValuePair_object__object__o v19; // 0:x0.16

  if ( (byte_4C3B136 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__GetEnumerator__);
    sub_1C32C20(&Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__ExtraBattleUserInterfaceComponent__Deconstruct__);
    byte_4C3B136 = 1;
  }
  current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0LL;
  v18 = 0;
  memset(&v17, 0, sizeof(v17));
  key = 0;
  exBattleUiDataList = this->fields.exBattleUiDataList;
  if ( exBattleUiDataList )
  {
    v6 = System_Linq_Enumerable__ElementAtOrDefault_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)exBattleUiDataList,
           this->fields.currentExBattleUiIndex,
           (const MethodInfo_310210C *)Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    if ( v6 )
    {
      v7 = (ExtraBattleUserInterfaceData_o *)v6;
      exBattleUiDict = this->fields.exBattleUiDict;
      if ( !exBattleUiDict )
        sub_1C32E7C(0);
      System_Collections_Generic_Dictionary_object__object___GetEnumerator(
        &v17,
        (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDict,
        (const MethodInfo_34591F8 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__GetEnumerator__);
      v9 = isDisp;
      while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                &v17,
                (const MethodInfo_3555874 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__MoveNext__) )
      {
        current = v17.fields._current;
        v19.fields.key = (Il2CppObject *)&current;
        v19.fields.value = (Il2CppObject *)&v18;
        System_Collections_Generic_KeyValuePair_object__object___Deconstruct(
          v19,
          &key,
          (Il2CppObject **)Method_System_Collections_Generic_KeyValuePair_string__ExtraBattleUserInterfaceComponent__Deconstruct__,
          v10);
        v11 = v18;
        v12 = key;
        AssetPath = ExtraBattleUserInterfaceData__get_AssetPath(v7, 0);
        v14 = System_String__op_Equality(v11, AssetPath, 0);
        if ( v14 )
        {
          if ( !v12 )
            sub_1C32E7C(v14);
          ExtraBattleUserInterfaceComponent__SwitchDispAnimation((ExtraBattleUserInterfaceComponent_o *)v12, v9, 0);
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
        &v17,
        (const MethodInfo_3555994 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__Dispose__);
    }
  }
}


void ExtraBattleUserInterfaceController__UpdateUi(
        ExtraBattleUserInterfaceController_o *this,
        int32_t addTurn,
        ExtraBattleUserInterfaceData_LabelType_array *updateLabelTypes,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ExtraBattleUserInterfaceData__o *exBattleUiDataList; // x0
  Il2CppObject *v8; // x0
  ExtraBattleUserInterfaceData_o *v9; // x22
  struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o *exBattleUiDict; // x0
  const MethodInfo_36D1374 *v11; // x4
  System_String_o *v12; // x24
  Il2CppObject *v13; // x23
  System_String_o *AssetPath; // x1
  _BOOL8 v15; // x0
  struct IBattlePerformanceExtraUiParent_o *parentInterface; // x19
  IBattlePerformanceExtraUiParent_c *klass; // x8
  __int64 v18; // x9
  IBattlePerformanceExtraUiParent_c **p_offset; // x10
  __int64 v20; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+0h] [xbp-C0h] BYREF
  Il2CppObject *key; // [xsp+28h] [xbp-98h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+40h] [xbp-80h] BYREF
  System_String_o *v25; // [xsp+78h] [xbp-48h] BYREF
  System_Collections_Generic_KeyValuePair_object__object__o v26; // 0:x0.16

  if ( (byte_4C3B135 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__GetEnumerator__);
    sub_1C32C20(&Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__get_Current__);
    sub_1C32C20(&IBattlePerformanceExtraUiParent_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__ExtraBattleUserInterfaceComponent__Deconstruct__);
    byte_4C3B135 = 1;
  }
  current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0LL;
  v25 = 0;
  memset(&v24, 0, sizeof(v24));
  key = 0;
  exBattleUiDataList = this->fields.exBattleUiDataList;
  if ( exBattleUiDataList )
  {
    v8 = System_Linq_Enumerable__ElementAtOrDefault_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)exBattleUiDataList,
           this->fields.currentExBattleUiIndex,
           (const MethodInfo_310210C *)Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    if ( v8 )
    {
      v9 = (ExtraBattleUserInterfaceData_o *)v8;
      exBattleUiDict = this->fields.exBattleUiDict;
      if ( !exBattleUiDict )
        goto LABEL_24;
      System_Collections_Generic_Dictionary_object__object___GetEnumerator(
        &v21,
        (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDict,
        (const MethodInfo_34591F8 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__GetEnumerator__);
      v24 = v21;
      while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                &v24,
                (const MethodInfo_3555874 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__MoveNext__) )
      {
        current = v24.fields._current;
        v26.fields.key = (Il2CppObject *)&current;
        v26.fields.value = (Il2CppObject *)&v25;
        System_Collections_Generic_KeyValuePair_object__object___Deconstruct(
          v26,
          &key,
          (Il2CppObject **)Method_System_Collections_Generic_KeyValuePair_string__ExtraBattleUserInterfaceComponent__Deconstruct__,
          v11);
        v12 = v25;
        v13 = key;
        AssetPath = ExtraBattleUserInterfaceData__get_AssetPath(v9, 0);
        v15 = System_String__op_Equality(v12, AssetPath, 0);
        if ( v15 )
        {
          if ( !v13 )
            sub_1C32E7C(v15);
          ((void (__fastcall *)(Il2CppObject *, ExtraBattleUserInterfaceData_o *, struct BattleData_o *, _QWORD, ExtraBattleUserInterfaceData_LabelType_array *, const MethodInfo *))v13->klass->vtable[4].methodPtr)(
            v13,
            v9,
            this->fields.battleData,
            (unsigned int)addTurn,
            updateLabelTypes,
            v13->klass->vtable[4].method);
          ExtraBattleUserInterfaceComponent__SetActive((ExtraBattleUserInterfaceComponent_o *)v13, 1, 0);
        }
        else
        {
          if ( !v13 )
            sub_1C32E7C(v15);
          ExtraBattleUserInterfaceComponent__SetActive((ExtraBattleUserInterfaceComponent_o *)v13, 0, 0);
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
        &v24,
        (const MethodInfo_3555994 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__Dispose__);
      parentInterface = this->fields.parentInterface;
      if ( !parentInterface )
LABEL_24:
        sub_1C32E7C(exBattleUiDict);
      klass = parentInterface->klass;
      v18 = *(unsigned __int16 *)&parentInterface->klass->_2.rank;
      if ( *(_WORD *)&parentInterface->klass->_2.rank )
      {
        p_offset = (IBattlePerformanceExtraUiParent_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != IBattlePerformanceExtraUiParent_TypeInfo )
        {
          --v18;
          p_offset += 2;
          if ( !v18 )
            goto LABEL_18;
        }
        v20 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
      }
      else
      {
LABEL_18:
        v20 = sub_1C83438(parentInterface, IBattlePerformanceExtraUiParent_TypeInfo, 1);
      }
      (*(void (__fastcall **)(struct IBattlePerformanceExtraUiParent_o *, _QWORD))v20)(
        parentInterface,
        *(_QWORD *)(v20 + 8));
    }
  }
}


System_Collections_Generic_IEnumerable_ExtraBattleUserInterfaceComponent__o *ExtraBattleUserInterfaceController__get_Components(
        ExtraBattleUserInterfaceController_o *this,
        const MethodInfo *method)
{
  long double inited; // q0
  struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o *exBattleUiDict; // x0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_4C3B132 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_ExtraBattleUserInterfaceComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Values__);
    byte_4C3B132 = 1;
  }
  exBattleUiDict = this->fields.exBattleUiDict;
  if ( exBattleUiDict )
    return (System_Collections_Generic_IEnumerable_ExtraBattleUserInterfaceComponent__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                            (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDict,
                                                                                            (const MethodInfo_3458BF8 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Values__);
  v6 = Method_System_Array_Empty_ExtraBattleUserInterfaceComponent___;
  v7 = *((_QWORD *)Method_System_Array_Empty_ExtraBattleUserInterfaceComponent___ + 7);
  if ( !v7 )
  {
    sub_1C83390(Method_System_Array_Empty_ExtraBattleUserInterfaceComponent___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C83334(inited);
  if ( !*(_DWORD *)(v8 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C83334(inited);
  return **(System_Collections_Generic_IEnumerable_ExtraBattleUserInterfaceComponent__o ***)(v9 + 184);
}


void ExtraBattleUserInterfaceController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3B13B & 1) == 0 )
  {
    sub_1C32C20(&ExtraBattleUserInterfaceController___c_TypeInfo);
    byte_4C3B13B = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(ExtraBattleUserInterfaceController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ExtraBattleUserInterfaceController___c_TypeInfo->static_fields->__9 = (struct ExtraBattleUserInterfaceController___c_o *)v1;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)ExtraBattleUserInterfaceController___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void ExtraBattleUserInterfaceController___c___ctor(
        ExtraBattleUserInterfaceController___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExtraBattleUserInterfaceController___c___RemoveDataAndComponents_b__9_1(
        ExtraBattleUserInterfaceController___c_o *this,
        ExtraBattleUserInterfaceComponent_o *ui,
        const MethodInfo *method)
{
  if ( !ui )
    sub_1C32E7C(this);
  ExtraBattleUserInterfaceComponent__SetActive(ui, 0, 0);
}


void ExtraBattleUserInterfaceController___c__DisplayClass8_0___ctor(
        ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExtraBattleUserInterfaceController___c__DisplayClass8_0___AddDataAndComponent_b__0(
        ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *v4; // x19
  struct ExtraBattleUserInterfaceController_o *_4__this; // x8
  const MethodInfo *v6; // x3
  ExtraBattleUserInterfaceController_o *v7; // x19
  Il2CppObject *Object_object__51111776; // x20
  struct ExtraBattleUserInterfaceController_o *v9; // x8
  struct IBattlePerformanceExtraUiParent_o *parentInterface; // x21
  IBattlePerformanceExtraUiParent_c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  UnityEngine_Transform_o *v15; // x21
  Il2CppObject *Component_object; // x20
  Il2CppObject *v17; // x22
  System_Action_o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 naturalAligment; // x10
  struct ExtraBattleUserInterfaceController_o *v22; // x8
  Il2CppObject *v23; // x22
  Il2CppClass *v24; // x8
  ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *v25; // x21
  __int64 v26; // x9
  IBattlePerformanceExtraUiParent_c **v27; // x10
  __int64 v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct ExtraBattleUserInterfaceController_o *v31; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4C3B13C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_ExtraBattleUserInterfaceButtonComponent_ExecType__TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__set_Item__);
    sub_1C32C20(&ExtraBattleUserInterfaceButtonComponent_TypeInfo);
    sub_1C32C20(&Method_ExtraBattleUserInterfaceController_OnTapUi__);
    sub_1C32C20(&ExtraBattleUserInterfaceData_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ExtraBattleUserInterfaceComponent___);
    sub_1C32C20(&IBattlePerformanceExtraUiParent_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)sub_1C32C20(&StringLiteral_6282/*"ExBattleUI"*/);
    byte_4C3B13C = 1;
  }
  value = 0;
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_43;
  this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)_4__this->fields.exBattleUiDict;
  if ( !this )
    goto LABEL_43;
  this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                                                        (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                        (Il2CppObject *)v4->fields.assetPath,
                                                                        &value,
                                                                        (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = v4->fields.__4__this;
    this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)ExtraBattleUserInterfaceData_TypeInfo;
    if ( !ExtraBattleUserInterfaceData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData_TypeInfo);
    goto LABEL_39;
  }
  if ( !assetData )
    goto LABEL_43;
  Object_object__51111776 = AssetData__GetObject_object__51111776(
                              assetData,
                              (System_String_o *)StringLiteral_6282/*"ExBattleUI"*/,
                              (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)UnityEngine_Object__op_Equality(
                                                                        (UnityEngine_Object_o *)Object_object__51111776,
                                                                        0,
                                                                        0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v9 = v4->fields.__4__this;
    if ( !v9 )
      goto LABEL_43;
    parentInterface = v9->fields.parentInterface;
    if ( !parentInterface )
      goto LABEL_43;
    klass = parentInterface->klass;
    v12 = *(unsigned __int16 *)&parentInterface->klass->_2.rank;
    if ( *(_WORD *)&parentInterface->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IBattlePerformanceExtraUiParent_c **)p_offset - 1) != IBattlePerformanceExtraUiParent_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_18;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_18:
      v14 = sub_1C83438(parentInterface, IBattlePerformanceExtraUiParent_TypeInfo, 0);
    }
    v15 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(struct IBattlePerformanceExtraUiParent_o *, _QWORD))v14)(
                                       parentInterface,
                                       *(_QWORD *)(v14 + 8));
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)UnityEngine_Object__Instantiate_object__51812484(
                                                                          Object_object__51111776,
                                                                          v15,
                                                                          (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    if ( !this )
      goto LABEL_43;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ExtraBattleUserInterfaceComponent___);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
      return;
    v17 = (Il2CppObject *)v4->fields.__4__this;
    v18 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v18, v17, Method_ExtraBattleUserInterfaceController_OnTapUi__, 0);
    if ( !Component_object )
      goto LABEL_43;
    Component_object[5].klass = (Il2CppClass *)v18;
    sub_1C32BC4((CGThumbnailListItem_o *)&Component_object[5], (int32_t)v18, v19, v20);
    naturalAligment = ExtraBattleUserInterfaceButtonComponent_TypeInfo->_2.naturalAligment;
    if ( Component_object->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (ExtraBattleUserInterfaceButtonComponent_c *)Component_object->klass->_2.typeHierarchy[naturalAligment - 1] == ExtraBattleUserInterfaceButtonComponent_TypeInfo )
    {
      v22 = v4->fields.__4__this;
      if ( !v22 )
        goto LABEL_43;
      v23 = (Il2CppObject *)v22->fields.parentInterface;
      this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)sub_1C32E6C(System_Action_ExtraBattleUserInterfaceButtonComponent_ExecType__TypeInfo);
      if ( !v23 )
        goto LABEL_43;
      v24 = v23->klass;
      v25 = this;
      v26 = *(unsigned __int16 *)&v23->klass->_2.rank;
      if ( *(_WORD *)&v23->klass->_2.rank )
      {
        v27 = (IBattlePerformanceExtraUiParent_c **)&v24->_1.interfaceOffsets->offset;
        while ( *(v27 - 1) != IBattlePerformanceExtraUiParent_TypeInfo )
        {
          --v26;
          v27 += 2;
          if ( !v26 )
            goto LABEL_33;
        }
        v28 = (__int64)&v24->vtable[*(_DWORD *)v27 + 2];
      }
      else
      {
LABEL_33:
        v28 = sub_1C83438(v23, IBattlePerformanceExtraUiParent_TypeInfo, 2);
      }
      System_Action_Int32Enum____ctor((System_Action_T__o *)v25, v23, *(_QWORD *)(v28 + 8), 0);
      Component_object[10].klass = (Il2CppClass *)v25;
      sub_1C32BC4((CGThumbnailListItem_o *)&Component_object[10], (int32_t)v25, v29, v30);
    }
    v31 = v4->fields.__4__this;
    if ( !v31 )
      goto LABEL_43;
    this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)v31->fields.exBattleUiDict;
    if ( !this )
      goto LABEL_43;
    System_Collections_Generic_Dictionary_object__object___set_Item(
      (System_Collections_Generic_Dictionary_object__object__o *)this,
      (Il2CppObject *)v4->fields.assetPath,
      Component_object,
      (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__set_Item__);
    v7 = v4->fields.__4__this;
    this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)ExtraBattleUserInterfaceData_TypeInfo;
    if ( !ExtraBattleUserInterfaceData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData_TypeInfo);
      if ( v7 )
        goto LABEL_40;
      goto LABEL_43;
    }
LABEL_39:
    if ( v7 )
    {
LABEL_40:
      ExtraBattleUserInterfaceController__UpdateUi(
        v7,
        0,
        ExtraBattleUserInterfaceData_TypeInfo->static_fields->AllLabelTypes,
        v6);
      return;
    }
LABEL_43:
    sub_1C32E7C(this);
  }
}


void ExtraBattleUserInterfaceController___c__DisplayClass9_0___ctor(
        ExtraBattleUserInterfaceController___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ExtraBattleUserInterfaceController___c__DisplayClass9_0___RemoveDataAndComponents_b__0(
        ExtraBattleUserInterfaceController___c__DisplayClass9_0_o *this,
        ExtraBattleUserInterfaceData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C32E7C(this);
  return data->fields._Wave_k__BackingField == this->fields.wave;
}