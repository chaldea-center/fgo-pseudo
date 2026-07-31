void ExtraBattleUserInterfaceController___ctor(
        ExtraBattleUserInterfaceController_o *this,
        IBattlePerformanceExtraUiParent_o *parent,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.parentInterface = parent;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)parent, v7, v8, v9, v10, v11, v12);
  this->fields.battleData = data;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.battleData, (int32_t)data, v13, v14, v15, v16, v17, v18);
}


void ExtraBattleUserInterfaceController__AddDataAndComponent(
        ExtraBattleUserInterfaceController_o *this,
        ExtraBattleUserInterfaceData_o *exUiData,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_object__o *exBattleUiDataList; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o **p_exBattleUiDict; // x22
  System_Collections_Generic_Dictionary_object__object__o *v21; // x23
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Collections_Generic_List_ExtraBattleUserInterfaceData__o **p_exBattleUiDataList; // x23
  System_Collections_Generic_List_object__o *v29; // x24
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x8
  System_String_o *AssetPath; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x1
  const MethodInfo *v48; // x3
  ExtraBattleUserInterfaceData_c *v49; // x0
  System_String_o *v50; // x19
  AssetLoader_LoadEndDataHandler_o *v51; // x20
  __int64 v52; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_593C194 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TypeInfo);
    sub_21FFC50(&ExtraBattleUserInterfaceData_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ExtraBattleUserInterfaceData__TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_ExtraBattleUserInterfaceController___c__DisplayClass8_0__AddDataAndComponent_b__0__);
    sub_21FFC50(&ExtraBattleUserInterfaceController___c__DisplayClass8_0_TypeInfo);
    byte_593C194 = 1;
  }
  value = 0;
  v5 = sub_21FFEBC(ExtraBattleUserInterfaceController___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  p_exBattleUiDict = &this->fields.exBattleUiDict;
  if ( !this->fields.exBattleUiDict )
  {
    v21 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v21,
      (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent___ctor__);
    *p_exBattleUiDict = (struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o *)v21;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.exBattleUiDict,
      (int32_t)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  p_exBattleUiDataList = &this->fields.exBattleUiDataList;
  exBattleUiDataList = (System_Collections_Generic_List_object__o *)this->fields.exBattleUiDataList;
  if ( !exBattleUiDataList )
  {
    v29 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ExtraBattleUserInterfaceData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v29,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData___ctor__);
    *p_exBattleUiDataList = (struct System_Collections_Generic_List_ExtraBattleUserInterfaceData__o *)v29;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.exBattleUiDataList,
      (int32_t)v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    exBattleUiDataList = (System_Collections_Generic_List_object__o *)*p_exBattleUiDataList;
    if ( !*p_exBattleUiDataList )
      goto LABEL_21;
  }
  items = exBattleUiDataList->fields._items;
  v37 = Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData__Add__;
  ++exBattleUiDataList->fields._version;
  if ( !items )
    goto LABEL_21;
  size = exBattleUiDataList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      exBattleUiDataList,
      (Il2CppObject *)exUiData,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = &items->obj.klass + size;
    exBattleUiDataList->fields._size = size + 1;
    v39[4] = (Il2CppClass *)exUiData;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v39 + 4), (int32_t)exUiData, v14, v15, v16, v17, v18, v19);
  }
  if ( !exUiData
    || (AssetPath = ExtraBattleUserInterfaceData__get_AssetPath(exUiData, 0),
        *(_QWORD *)(v5 + 24) = AssetPath,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)AssetPath, v41, v42, v43, v44, v45, v46),
        (exBattleUiDataList = (System_Collections_Generic_List_object__o *)*p_exBattleUiDict) == 0) )
  {
LABEL_21:
    sub_21FFECC(exBattleUiDataList, v7);
  }
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDataList,
         *(Il2CppObject **)(v5 + 24),
         &value,
         (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__) )
  {
    v49 = ExtraBattleUserInterfaceData_TypeInfo;
    if ( !*(&ExtraBattleUserInterfaceData_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData_TypeInfo, v47);
      v49 = ExtraBattleUserInterfaceData_TypeInfo;
    }
    ExtraBattleUserInterfaceController__UpdateUi(this, 0, v49->static_fields->AllLabelTypes, v48);
  }
  else
  {
    v50 = *(System_String_o **)(v5 + 24);
    v51 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v51,
      (Il2CppObject *)v5,
      Method_ExtraBattleUserInterfaceController___c__DisplayClass8_0__AddDataAndComponent_b__0__,
      0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v52);
    AssetManager__loadAssetStorage(v50, v51, 1, 0, 0);
  }
}


void ExtraBattleUserInterfaceController__DestroyAndUnloadAllUi(
        ExtraBattleUserInterfaceController_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o *exBattleUiDict; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_object__object__o *v8; // x20
  unsigned __int64 v9; // x23
  int32_t *p_count; // x28
  Il2CppObject *v11; // x21
  UnityEngine_Object_o *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x1

  if ( (byte_593C19C & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Keys__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C19C = 1;
  }
  exBattleUiDict = this->fields.exBattleUiDict;
  if ( exBattleUiDict )
  {
    Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
             (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDict,
             (const MethodInfo_3FCA130 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Keys__);
    Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__ToArray_object_(
                                                                        (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                        (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !Item )
      goto LABEL_16;
    entries = Item->fields._entries;
    v8 = Item;
    if ( (int)entries >= 1 )
    {
      v9 = 0;
      p_count = &Item->fields._count;
      while ( 1 )
      {
        if ( v9 >= (unsigned int)entries )
          sub_21FFED4(Item);
        Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.exBattleUiDict;
        if ( !Item )
          break;
        v11 = *(Il2CppObject **)&p_count[2 * v9];
        Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            v11,
                                                                            (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Item__);
        if ( !this->fields.exBattleUiDict )
          break;
        v12 = (UnityEngine_Object_o *)Item;
        System_Collections_Generic_Dictionary_object__object___Remove(
          (System_Collections_Generic_Dictionary_object__object__o *)this->fields.exBattleUiDict,
          v11,
          (const MethodInfo_3FCB984 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__Remove__);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
        UnityEngine_Object__Destroy_83246496(v12, 0);
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v14);
        AssetManager__releaseAssetStorage((System_String_o *)v11, 0);
        LODWORD(entries) = v8->fields._entries;
        if ( (__int64)++v9 >= (int)entries )
          return;
      }
LABEL_16:
      sub_21FFECC(Item, v6);
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
  __int64 v10; // x1
  float v11; // s0
  float v12; // s1
  Il2CppObject *value; // [xsp+18h] [xbp-18h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_593C199 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    byte_593C199 = 1;
  }
  value = 0;
  if ( !byte_5931820 )
  {
    sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
    byte_5931820 = 1;
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
           (const MethodInfo_384AC00 *)Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
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
                                       (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__);
      if ( ((unsigned __int8)AssetPath & 1) != 0 )
      {
        if ( value )
        {
          x = *(float *)&value[3].klass;
          y = *((float *)&value[3].klass + 1);
          goto LABEL_11;
        }
LABEL_12:
        sub_21FFECC(AssetPath, v10);
      }
    }
  }
LABEL_11:
  v11 = x;
  v12 = y;
  result.fields.y = v12;
  result.fields.x = v11;
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
  __int64 v10; // x1
  float v11; // s0
  float v12; // s1
  Il2CppObject *value; // [xsp+18h] [xbp-18h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_593C19A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    byte_593C19A = 1;
  }
  value = 0;
  if ( !byte_5931820 )
  {
    sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
    byte_5931820 = 1;
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
           (const MethodInfo_384AC00 *)Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
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
                                       (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__);
      if ( ((unsigned __int8)AssetPath & 1) != 0 )
      {
        if ( value )
        {
          x = *(float *)&value[3].monitor;
          y = *((float *)&value[3].monitor + 1);
          goto LABEL_11;
        }
LABEL_12:
        sub_21FFECC(AssetPath, v10);
      }
    }
  }
LABEL_11:
  v11 = x;
  v12 = y;
  result.fields.y = v12;
  result.fields.x = v11;
  return result;
}


void ExtraBattleUserInterfaceController__OnTapUi(ExtraBattleUserInterfaceController_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  long double v3; // q0
  ExtraBattleUserInterfaceController_o *v4; // x19
  struct System_Collections_Generic_List_ExtraBattleUserInterfaceData__o *exBattleUiDataList; // x8
  int size; // w8
  int32_t currentExBattleUiIndex; // w9
  _QWORD *v8; // x20
  int32_t v9; // w8
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0

  v4 = this;
  if ( (byte_593C19B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelType___);
    this = (ExtraBattleUserInterfaceController_o *)sub_21FFC50(&Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData__get_Count__);
    byte_593C19B = 1;
  }
  exBattleUiDataList = v4->fields.exBattleUiDataList;
  if ( !exBattleUiDataList )
    sub_21FFECC(this, method);
  size = exBattleUiDataList->fields._size;
  if ( size >= 2 )
  {
    currentExBattleUiIndex = v4->fields.currentExBattleUiIndex;
    v8 = Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelType___;
    if ( size > currentExBattleUiIndex + 1 )
      v9 = currentExBattleUiIndex + 1;
    else
      v9 = 0;
    v4->fields.currentExBattleUiIndex = v9;
    v10 = v8[7];
    if ( !v10 )
    {
      sub_2237B54(v8);
      v10 = v8[7];
    }
    v11 = *(_QWORD *)(v10 + 16);
    if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
      v11 = sub_2237AF8(v3);
    if ( !*(_DWORD *)(v11 + 228) )
      *(__n128 *)&v3 = j_il2cpp_runtime_class_init_0(v11, method);
    v12 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
      v12 = sub_2237AF8(v3);
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
  __int64 v9; // x1
  struct System_Collections_Generic_List_ExtraBattleUserInterfaceData__o *exBattleUiDataList; // x0
  Il2CppObject *v11; // x0
  bool v12; // w24
  System_Collections_Generic_List_object__o *v13; // x21
  System_Predicate_object__o *v14; // x23
  const MethodInfo *v15; // x3
  int32_t v16; // w20
  __int64 v17; // x1
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x19
  ExtraBattleUserInterfaceController___c_c *v19; // x8
  struct ExtraBattleUserInterfaceController___c_StaticFields *static_fields; // x9
  System_Action_object__o *_9__9_1; // x20
  Il2CppObject *v22; // x21
  struct ExtraBattleUserInterfaceController___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  v4 = isResume;
  if ( (byte_593C195 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_ExtraBattleUserInterfaceComponent__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_ExtraBattleUserInterfaceComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Values__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    sub_21FFC50(&ExtraBattleUserInterfaceData_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData__RemoveAll__);
    sub_21FFC50(&System_Predicate_ExtraBattleUserInterfaceData__TypeInfo);
    sub_21FFC50(&Method_ExtraBattleUserInterfaceController___c__RemoveDataAndComponents_b__9_1__);
    sub_21FFC50(&Method_ExtraBattleUserInterfaceController___c__DisplayClass9_0__RemoveDataAndComponents_b__0__);
    sub_21FFC50(&ExtraBattleUserInterfaceController___c__DisplayClass9_0_TypeInfo);
    sub_21FFC50(&ExtraBattleUserInterfaceController___c_TypeInfo);
    byte_593C195 = 1;
  }
  v7 = sub_21FFEBC(ExtraBattleUserInterfaceController___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_24;
  exBattleUiDataList = this->fields.exBattleUiDataList;
  *(_DWORD *)(v7 + 16) = wave;
  if ( !exBattleUiDataList )
    return;
  v11 = System_Linq_Enumerable__ElementAtOrDefault_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)exBattleUiDataList,
          this->fields.currentExBattleUiIndex,
          (const MethodInfo_384AC00 *)Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
  v12 = !v11 || !ExtraBattleUserInterfaceData__get_IsFromQuestPhase((ExtraBattleUserInterfaceData_o *)v11, 0);
  v13 = (System_Collections_Generic_List_object__o *)this->fields.exBattleUiDataList;
  v14 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ExtraBattleUserInterfaceData__TypeInfo);
  System_Predicate_object____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_ExtraBattleUserInterfaceController___c__DisplayClass9_0__RemoveDataAndComponents_b__0__,
    0);
  if ( !v13 )
    goto LABEL_24;
  System_Collections_Generic_List_object___RemoveAll(
    v13,
    (System_Predicate_T__o *)v14,
    (const MethodInfo_4451158 *)Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData__RemoveAll__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.exBattleUiDataList,
         (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData___) )
  {
    if ( v12 )
      this->fields.currentExBattleUiIndex = 0;
    v16 = v4 << 31 >> 31;
    if ( !*(&ExtraBattleUserInterfaceData_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData_TypeInfo, v9);
    ExtraBattleUserInterfaceController__UpdateUi(
      this,
      v16,
      ExtraBattleUserInterfaceData_TypeInfo->static_fields->AllLabelTypes,
      v15);
    return;
  }
  exBattleUiDict = this->fields.exBattleUiDict;
  if ( !exBattleUiDict )
LABEL_24:
    sub_21FFECC(exBattleUiDict, v9);
  Values = System_Collections_Generic_Dictionary_object__object___get_Values(
             (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDict,
             (const MethodInfo_3FCA28C *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Values__);
  v19 = ExtraBattleUserInterfaceController___c_TypeInfo;
  if ( !*(&ExtraBattleUserInterfaceController___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceController___c_TypeInfo, v17);
    v19 = ExtraBattleUserInterfaceController___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__9_1 = (System_Action_object__o *)static_fields->__9__9_1;
  if ( !_9__9_1 )
  {
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v17);
      static_fields = ExtraBattleUserInterfaceController___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__9_1 = (System_Action_object__o *)sub_21FFEBC(System_Action_ExtraBattleUserInterfaceComponent__TypeInfo);
    System_Action_object____ctor(
      _9__9_1,
      v22,
      Method_ExtraBattleUserInterfaceController___c__RemoveDataAndComponents_b__9_1__,
      0);
    v23 = ExtraBattleUserInterfaceController___c_TypeInfo->static_fields;
    v23->__9__9_1 = (struct System_Action_ExtraBattleUserInterfaceComponent__o *)_9__9_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->__9__9_1, (int32_t)_9__9_1, v24, v25, v26, v27, v28, v29);
  }
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (System_Action_T__o *)_9__9_1,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_ExtraBattleUserInterfaceComponent___);
}


void ExtraBattleUserInterfaceController__SwitchDispAnimation(
        ExtraBattleUserInterfaceController_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ExtraBattleUserInterfaceData__o *exBattleUiDataList; // x0
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  ExtraBattleUserInterfaceData_o *v8; // x20
  struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o *exBattleUiDict; // x0
  const MethodInfo_436CCCC *v10; // x4
  System_String_o *v11; // x22
  Il2CppObject *v12; // x21
  System_String_o *AssetPath; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  __int64 v16; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *v17; // [xsp+10h] [xbp-90h]
  Il2CppObject *key; // [xsp+18h] [xbp-88h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+30h] [xbp-70h] BYREF
  System_String_o *v21; // [xsp+68h] [xbp-38h] BYREF
  System_Collections_Generic_KeyValuePair_object__object__o v22; // 0:x0.16

  if ( (byte_593C198 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__GetEnumerator__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__ExtraBattleUserInterfaceComponent__Deconstruct__);
    byte_593C198 = 1;
  }
  exBattleUiDataList = this->fields.exBattleUiDataList;
  current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0LL;
  v21 = 0;
  key = 0;
  memset(&v20, 0, sizeof(v20));
  if ( exBattleUiDataList )
  {
    v6 = System_Linq_Enumerable__ElementAtOrDefault_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)exBattleUiDataList,
           this->fields.currentExBattleUiIndex,
           (const MethodInfo_384AC00 *)Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    if ( v6 )
    {
      v8 = (ExtraBattleUserInterfaceData_o *)v6;
      exBattleUiDict = this->fields.exBattleUiDict;
      if ( !exBattleUiDict )
        sub_21FFECC(0, v7);
      System_Collections_Generic_Dictionary_object__object___GetEnumerator(
        &v20,
        (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDict,
        (const MethodInfo_3FCA89C *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__GetEnumerator__);
      v16 = 0;
      v17 = &v20;
      while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                &v20,
                (const MethodInfo_4135514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__MoveNext__) )
      {
        current = v20.fields._current;
        v22.fields.key = (Il2CppObject *)&current;
        v22.fields.value = (Il2CppObject *)&v21;
        System_Collections_Generic_KeyValuePair_object__object___Deconstruct(
          v22,
          &key,
          (Il2CppObject **)Method_System_Collections_Generic_KeyValuePair_string__ExtraBattleUserInterfaceComponent__Deconstruct__,
          v10);
        v11 = v21;
        v12 = key;
        AssetPath = ExtraBattleUserInterfaceData__get_AssetPath(v8, 0);
        v14 = System_String__op_Equality(v11, AssetPath, 0);
        if ( v14 )
        {
          if ( !v12 )
            sub_21FFECC(v14, v15);
          ExtraBattleUserInterfaceComponent__SwitchDispAnimation((ExtraBattleUserInterfaceComponent_o *)v12, isDisp, 0);
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
        &v20,
        (const MethodInfo_4135634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__Dispose__);
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
  __int64 v9; // x1
  ExtraBattleUserInterfaceData_o *v10; // x22
  struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o *exBattleUiDict; // x0
  const MethodInfo_436CCCC *v12; // x4
  System_String_o *v13; // x24
  Il2CppObject *v14; // x23
  System_String_o *AssetPath; // x1
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct IBattlePerformanceExtraUiParent_o *parentInterface; // x19
  IBattlePerformanceExtraUiParent_c *klass; // x8
  __int64 v20; // x9
  IBattlePerformanceExtraUiParent_c **p_offset; // x10
  __int64 v22; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+0h] [xbp-C0h] BYREF
  Il2CppObject *key; // [xsp+28h] [xbp-98h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+40h] [xbp-80h] BYREF
  System_String_o *v27; // [xsp+78h] [xbp-48h] BYREF
  System_Collections_Generic_KeyValuePair_object__object__o v28; // 0:x0.16

  if ( (byte_593C196 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__GetEnumerator__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__get_Current__);
    sub_21FFC50(&IBattlePerformanceExtraUiParent_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__ExtraBattleUserInterfaceComponent__Deconstruct__);
    byte_593C196 = 1;
  }
  exBattleUiDataList = this->fields.exBattleUiDataList;
  current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0LL;
  v27 = 0;
  key = 0;
  memset(&v26, 0, sizeof(v26));
  if ( exBattleUiDataList )
  {
    v8 = System_Linq_Enumerable__ElementAtOrDefault_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)exBattleUiDataList,
           this->fields.currentExBattleUiIndex,
           (const MethodInfo_384AC00 *)Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    if ( v8 )
    {
      v10 = (ExtraBattleUserInterfaceData_o *)v8;
      exBattleUiDict = this->fields.exBattleUiDict;
      if ( !exBattleUiDict )
        goto LABEL_24;
      System_Collections_Generic_Dictionary_object__object___GetEnumerator(
        &v23,
        (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDict,
        (const MethodInfo_3FCA89C *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__GetEnumerator__);
      v26 = v23;
      v23.fields._dictionary = 0;
      *(_QWORD *)&v23.fields._version = &v26;
      while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                &v26,
                (const MethodInfo_4135514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__MoveNext__) )
      {
        current = v26.fields._current;
        v28.fields.key = (Il2CppObject *)&current;
        v28.fields.value = (Il2CppObject *)&v27;
        System_Collections_Generic_KeyValuePair_object__object___Deconstruct(
          v28,
          &key,
          (Il2CppObject **)Method_System_Collections_Generic_KeyValuePair_string__ExtraBattleUserInterfaceComponent__Deconstruct__,
          v12);
        v13 = v27;
        v14 = key;
        AssetPath = ExtraBattleUserInterfaceData__get_AssetPath(v10, 0);
        v16 = System_String__op_Equality(v13, AssetPath, 0);
        if ( v16 )
        {
          if ( !v14 )
            sub_21FFECC(v16, v17);
          ((void (__fastcall *)(Il2CppObject *, ExtraBattleUserInterfaceData_o *, struct BattleData_o *, _QWORD, ExtraBattleUserInterfaceData_LabelType_array *, const MethodInfo *))v14->klass->vtable[4].methodPtr)(
            v14,
            v10,
            this->fields.battleData,
            (unsigned int)addTurn,
            updateLabelTypes,
            v14->klass->vtable[4].method);
          ExtraBattleUserInterfaceComponent__SetActive((ExtraBattleUserInterfaceComponent_o *)v14, 1, 0);
        }
        else
        {
          if ( !v14 )
            sub_21FFECC(v16, v17);
          ExtraBattleUserInterfaceComponent__SetActive((ExtraBattleUserInterfaceComponent_o *)v14, 0, 0);
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
        &v26,
        (const MethodInfo_4135634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__Dispose__);
      parentInterface = this->fields.parentInterface;
      if ( !parentInterface )
LABEL_24:
        sub_21FFECC(exBattleUiDict, v9);
      klass = parentInterface->klass;
      v20 = *(unsigned __int16 *)&parentInterface->klass->_2.rank;
      if ( *(_WORD *)&parentInterface->klass->_2.rank )
      {
        p_offset = (IBattlePerformanceExtraUiParent_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != IBattlePerformanceExtraUiParent_TypeInfo )
        {
          --v20;
          p_offset += 2;
          if ( !v20 )
            goto LABEL_18;
        }
        v22 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
      }
      else
      {
LABEL_18:
        v22 = sub_2237E2C(parentInterface, IBattlePerformanceExtraUiParent_TypeInfo, 1);
      }
      (*(void (__fastcall **)(struct IBattlePerformanceExtraUiParent_o *, _QWORD))v22)(
        parentInterface,
        *(_QWORD *)(v22 + 8));
    }
  }
}


void ExtraBattleUserInterfaceController__UpdateUiByBattleValKey(
        ExtraBattleUserInterfaceController_o *this,
        int32_t key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ExtraBattleUserInterfaceData__o *exBattleUiDataList; // x0
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  long double v9; // q0
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0

  if ( (byte_593C197 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelType___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    byte_593C197 = 1;
  }
  exBattleUiDataList = this->fields.exBattleUiDataList;
  if ( exBattleUiDataList )
  {
    v6 = System_Linq_Enumerable__ElementAtOrDefault_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)exBattleUiDataList,
           this->fields.currentExBattleUiIndex,
           (const MethodInfo_384AC00 *)Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    if ( v6 )
    {
      if ( ExtraBattleUserInterfaceData__ContainsBattleValKey((ExtraBattleUserInterfaceData_o *)v6, key, 0) )
      {
        v10 = Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelType___;
        v11 = *((_QWORD *)Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelType___ + 7);
        if ( !v11 )
        {
          sub_2237B54(Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelType___);
          v11 = v10[7];
        }
        v12 = *(_QWORD *)(v11 + 16);
        if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
          v12 = sub_2237AF8(v9);
        if ( !*(_DWORD *)(v12 + 228) )
          *(__n128 *)&v9 = j_il2cpp_runtime_class_init_0(v12, v7);
        v13 = *(_QWORD *)(v10[7] + 16LL);
        if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
          v13 = sub_2237AF8(v9);
        ExtraBattleUserInterfaceController__UpdateUi(
          this,
          0,
          **(ExtraBattleUserInterfaceData_LabelType_array ***)(v13 + 184),
          v8);
      }
    }
  }
}


System_Collections_Generic_IEnumerable_ExtraBattleUserInterfaceComponent__o *ExtraBattleUserInterfaceController__get_Components(
        ExtraBattleUserInterfaceController_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o *exBattleUiDict; // x0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_593C193 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_ExtraBattleUserInterfaceComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Values__);
    byte_593C193 = 1;
  }
  exBattleUiDict = this->fields.exBattleUiDict;
  if ( exBattleUiDict )
    return (System_Collections_Generic_IEnumerable_ExtraBattleUserInterfaceComponent__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                            (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDict,
                                                                                            (const MethodInfo_3FCA28C *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Values__);
  v6 = Method_System_Array_Empty_ExtraBattleUserInterfaceComponent___;
  v7 = *((_QWORD *)Method_System_Array_Empty_ExtraBattleUserInterfaceComponent___ + 7);
  if ( !v7 )
  {
    sub_2237B54(Method_System_Array_Empty_ExtraBattleUserInterfaceComponent___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_2237AF8(v2);
  if ( !*(_DWORD *)(v8 + 228) )
    *(__n128 *)&v2 = j_il2cpp_runtime_class_init_0(v8, method);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
    v9 = sub_2237AF8(v2);
  return **(System_Collections_Generic_IEnumerable_ExtraBattleUserInterfaceComponent__o ***)(v9 + 184);
}


void ExtraBattleUserInterfaceController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593C19D & 1) == 0 )
  {
    sub_21FFC50(&ExtraBattleUserInterfaceController___c_TypeInfo);
    byte_593C19D = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ExtraBattleUserInterfaceController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ExtraBattleUserInterfaceController___c_TypeInfo->static_fields->__9 = (struct ExtraBattleUserInterfaceController___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ExtraBattleUserInterfaceController___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, 0);
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
  __int64 v8; // x1
  Il2CppObject *Object_object__58323140; // x20
  struct ExtraBattleUserInterfaceController_o *v10; // x8
  struct IBattlePerformanceExtraUiParent_o *parentInterface; // x21
  IBattlePerformanceExtraUiParent_c *klass; // x8
  __int64 v13; // x9
  int *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x1
  UnityEngine_Transform_o *v17; // x21
  __int64 v18; // x1
  Il2CppObject *v19; // x20
  struct ExtraBattleUserInterfaceController_o *v20; // x8
  struct IBattlePerformanceExtraUiParent_o *v21; // x8
  IBattlePerformanceExtraUiParent_c *v22; // x8
  __int64 naturalAligment; // x9
  __int64 v24; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v26; // x22
  System_Action_o *v27; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x10
  struct ExtraBattleUserInterfaceController_o *v35; // x8
  Il2CppObject *v36; // x22
  Il2CppClass *v37; // x8
  ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *v38; // x21
  __int64 v39; // x9
  IBattlePerformanceExtraUiParent_c **v40; // x10
  __int64 v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct ExtraBattleUserInterfaceController_o *v48; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_593C19E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_ExtraBattleUserInterfaceButtonComponent_ExecType__ExtraBattleUserInterfaceData__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&BattlePerformanceMaster_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__set_Item__);
    sub_21FFC50(&ExtraBattleUserInterfaceButtonComponent_TypeInfo);
    sub_21FFC50(&Method_ExtraBattleUserInterfaceController_OnTapUi__);
    sub_21FFC50(&ExtraBattleUserInterfaceData_TypeInfo);
    sub_21FFC50(&FSUtility_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ExtraBattleUserInterfaceComponent___);
    sub_21FFC50(&IBattlePerformanceExtraUiParent_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)sub_21FFC50(&StringLiteral_6535/*"ExBattleUI"*/);
    byte_593C19E = 1;
  }
  _4__this = v4->fields.__4__this;
  value = 0;
  if ( !_4__this )
    goto LABEL_55;
  this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)_4__this->fields.exBattleUiDict;
  if ( !this )
    goto LABEL_55;
  this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                                                        (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                        (Il2CppObject *)v4->fields.assetPath,
                                                                        &value,
                                                                        (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)ExtraBattleUserInterfaceData_TypeInfo;
    v7 = v4->fields.__4__this;
    if ( !*(&ExtraBattleUserInterfaceData_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData_TypeInfo, assetData);
LABEL_51:
    if ( v7 )
    {
LABEL_52:
      ExtraBattleUserInterfaceController__UpdateUi(
        v7,
        0,
        ExtraBattleUserInterfaceData_TypeInfo->static_fields->AllLabelTypes,
        v6);
      return;
    }
    goto LABEL_55;
  }
  if ( !assetData )
    goto LABEL_55;
  Object_object__58323140 = AssetData__GetObject_object__58323140(
                              assetData,
                              (System_String_o *)StringLiteral_6535/*"ExBattleUI"*/,
                              (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)UnityEngine_Object__op_Equality(
                                                                        (UnityEngine_Object_o *)Object_object__58323140,
                                                                        0,
                                                                        0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v10 = v4->fields.__4__this;
    if ( !v10 )
      goto LABEL_55;
    parentInterface = v10->fields.parentInterface;
    if ( !parentInterface )
      goto LABEL_55;
    klass = parentInterface->klass;
    v13 = *(unsigned __int16 *)&parentInterface->klass->_2.rank;
    if ( *(_WORD *)&parentInterface->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IBattlePerformanceExtraUiParent_c **)p_offset - 1) != IBattlePerformanceExtraUiParent_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_18;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_18:
      v15 = sub_2237E2C(parentInterface, IBattlePerformanceExtraUiParent_TypeInfo, 0);
    }
    v17 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(struct IBattlePerformanceExtraUiParent_o *, _QWORD))v15)(
                                       parentInterface,
                                       *(_QWORD *)(v15 + 8));
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    v19 = UnityEngine_Object__Instantiate_object__59506996(
            Object_object__58323140,
            v17,
            (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v18);
    this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)FSUtility__IsCalcNotch(2, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v20 = v4->fields.__4__this;
      if ( !v20 )
        goto LABEL_55;
      v21 = v20->fields.parentInterface;
      if ( v21 )
      {
        v22 = v21->klass;
        this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)BattlePerformanceMaster_TypeInfo;
        naturalAligment = BattlePerformanceMaster_TypeInfo->_2.naturalAligment;
        if ( v22->_2.naturalAligment >= (unsigned int)naturalAligment
          && (BattlePerformanceMaster_c *)v22->_2.typeHierarchy[naturalAligment - 1] == BattlePerformanceMaster_TypeInfo )
        {
          if ( !*(&BattlePerformanceMaster_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BattlePerformanceMaster_TypeInfo, assetData);
          BattlePerformanceMaster__ExceptionalNotchOffset((UnityEngine_GameObject_o *)v19, 0);
        }
      }
    }
    if ( !v19 )
LABEL_55:
      sub_21FFECC(this, assetData);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v19,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ExtraBattleUserInterfaceComponent___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      v26 = (Il2CppObject *)v4->fields.__4__this;
      v27 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v27, v26, Method_ExtraBattleUserInterfaceController_OnTapUi__, 0);
      if ( !Component_object )
        goto LABEL_55;
      Component_object[5].klass = (Il2CppClass *)v27;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&Component_object[5], (int32_t)v27, v28, v29, v30, v31, v32, v33);
      v34 = ExtraBattleUserInterfaceButtonComponent_TypeInfo->_2.naturalAligment;
      if ( Component_object->klass->_2.naturalAligment >= (unsigned int)v34
        && (ExtraBattleUserInterfaceButtonComponent_c *)Component_object->klass->_2.typeHierarchy[v34 - 1] == ExtraBattleUserInterfaceButtonComponent_TypeInfo )
      {
        v35 = v4->fields.__4__this;
        if ( !v35 )
          goto LABEL_55;
        v36 = (Il2CppObject *)v35->fields.parentInterface;
        this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)sub_21FFEBC(System_Action_ExtraBattleUserInterfaceButtonComponent_ExecType__ExtraBattleUserInterfaceData__TypeInfo);
        if ( !v36 )
          goto LABEL_55;
        v37 = v36->klass;
        v38 = this;
        v39 = *(unsigned __int16 *)&v36->klass->_2.rank;
        if ( *(_WORD *)&v36->klass->_2.rank )
        {
          v40 = (IBattlePerformanceExtraUiParent_c **)&v37->_1.interfaceOffsets->offset;
          while ( *(v40 - 1) != IBattlePerformanceExtraUiParent_TypeInfo )
          {
            --v39;
            v40 += 2;
            if ( !v39 )
              goto LABEL_45;
          }
          v41 = (__int64)&v37->vtable[*(_DWORD *)v40 + 2];
        }
        else
        {
LABEL_45:
          v41 = sub_2237E2C(v36, IBattlePerformanceExtraUiParent_TypeInfo, 2);
        }
        System_Action_Int32Enum__object____ctor((System_Action_T1__T2__o *)v38, v36, *(_QWORD *)(v41 + 8), 0);
        Component_object[10].monitor = v38;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&Component_object[10].monitor,
          (int32_t)v38,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
      }
      v48 = v4->fields.__4__this;
      if ( !v48 )
        goto LABEL_55;
      this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)v48->fields.exBattleUiDict;
      if ( !this )
        goto LABEL_55;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        (System_Collections_Generic_Dictionary_object__object__o *)this,
        (Il2CppObject *)v4->fields.assetPath,
        Component_object,
        (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__set_Item__);
      this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)ExtraBattleUserInterfaceData_TypeInfo;
      v7 = v4->fields.__4__this;
      if ( !*(&ExtraBattleUserInterfaceData_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData_TypeInfo, assetData);
        if ( v7 )
          goto LABEL_52;
        goto LABEL_55;
      }
      goto LABEL_51;
    }
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
    sub_21FFECC(this, 0);
  return data->fields._Wave_k__BackingField == this->fields.wave;
}