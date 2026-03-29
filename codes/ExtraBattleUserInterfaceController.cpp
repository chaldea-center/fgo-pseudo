void ExtraBattleUserInterfaceController___ctor(
        ExtraBattleUserInterfaceController_o *this,
        IBattlePerformanceExtraUiParent_o *parent,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.parentInterface = parent;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)parent, v7, v8, v9, v10, v11, v12);
  this->fields.battleData = data;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.battleData, (int32_t)data, v13, v14, v15, v16, v17, v18);
}


void ExtraBattleUserInterfaceController__AddDataAndComponent(
        ExtraBattleUserInterfaceController_o *this,
        ExtraBattleUserInterfaceData_o *exUiData,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_object__o *exBattleUiDataList; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o **p_exBattleUiDict; // x22
  System_Collections_Generic_Dictionary_object__object__o *v21; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_Collections_Generic_List_ExtraBattleUserInterfaceData__o **p_exBattleUiDataList; // x23
  System_Collections_Generic_List_object__o *v29; // x24
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x8
  System_String_o *AssetPath; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  const MethodInfo *v47; // x3
  ExtraBattleUserInterfaceData_c *v48; // x0
  System_String_o *v49; // x19
  AssetLoader_LoadEndDataHandler_o *v50; // x20
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D3429C & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TypeInfo);
    sub_1C93AD4(&ExtraBattleUserInterfaceData_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ExtraBattleUserInterfaceData__TypeInfo);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&Method_ExtraBattleUserInterfaceController___c__DisplayClass8_0__AddDataAndComponent_b__0__);
    sub_1C93AD4(&ExtraBattleUserInterfaceController___c__DisplayClass8_0_TypeInfo);
    byte_4D3429C = 1;
  }
  value = 0;
  v5 = sub_1C93D20(ExtraBattleUserInterfaceController___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  p_exBattleUiDict = &this->fields.exBattleUiDict;
  if ( !this->fields.exBattleUiDict )
  {
    v21 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v21,
      (const MethodInfo_352E1F8 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent___ctor__);
    *p_exBattleUiDict = (struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o *)v21;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.exBattleUiDict, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  }
  p_exBattleUiDataList = &this->fields.exBattleUiDataList;
  exBattleUiDataList = (System_Collections_Generic_List_object__o *)this->fields.exBattleUiDataList;
  if ( !exBattleUiDataList )
  {
    v29 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ExtraBattleUserInterfaceData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v29,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData___ctor__);
    *p_exBattleUiDataList = (struct System_Collections_Generic_List_ExtraBattleUserInterfaceData__o *)v29;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.exBattleUiDataList,
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
      *(const MethodInfo_387999C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = &items->obj.klass + size;
    exBattleUiDataList->fields._size = size + 1;
    v39[4] = (Il2CppClass *)exUiData;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v39 + 4), (int32_t)exUiData, v14, v15, v16, v17, v18, v19);
  }
  if ( !exUiData
    || (AssetPath = ExtraBattleUserInterfaceData__get_AssetPath(exUiData, 0),
        *(_QWORD *)(v5 + 24) = AssetPath,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)AssetPath, v41, v42, v43, v44, v45, v46),
        (exBattleUiDataList = (System_Collections_Generic_List_object__o *)*p_exBattleUiDict) == 0) )
  {
LABEL_21:
    sub_1C93D2C(exBattleUiDataList, v7);
  }
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDataList,
         *(Il2CppObject **)(v5 + 24),
         &value,
         (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__) )
  {
    v48 = ExtraBattleUserInterfaceData_TypeInfo;
    if ( !ExtraBattleUserInterfaceData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData_TypeInfo);
      v48 = ExtraBattleUserInterfaceData_TypeInfo;
    }
    ExtraBattleUserInterfaceController__UpdateUi(this, 0, v48->static_fields->AllLabelTypes, v47);
  }
  else
  {
    v49 = *(System_String_o **)(v5 + 24);
    v50 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v50,
      (Il2CppObject *)v5,
      Method_ExtraBattleUserInterfaceController___c__DisplayClass8_0__AddDataAndComponent_b__0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v49, v50, 1, 0);
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
  int32_t *p_count; // x24
  Il2CppObject *v11; // x21
  UnityEngine_Object_o *v12; // x22

  if ( (byte_4D342A3 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Keys__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D342A3 = 1;
  }
  exBattleUiDict = this->fields.exBattleUiDict;
  if ( exBattleUiDict )
  {
    Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
             (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDict,
             (const MethodInfo_352E888 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Keys__);
    Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__ToArray_object_(
                                                                        (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                        (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_string___);
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
          sub_1C93D34(Item);
        Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.exBattleUiDict;
        if ( !Item )
          break;
        v11 = *(Il2CppObject **)&p_count[2 * v9];
        Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            v11,
                                                                            (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Item__);
        if ( !this->fields.exBattleUiDict )
          break;
        v12 = (UnityEngine_Object_o *)Item;
        System_Collections_Generic_Dictionary_object__object___Remove(
          (System_Collections_Generic_Dictionary_object__object__o *)this->fields.exBattleUiDict,
          v11,
          (const MethodInfo_35300A4 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__Remove__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_72119908(v12, 0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__releaseAssetStorage((System_String_o *)v11, 0);
        LODWORD(entries) = v8->fields._entries;
        if ( (__int64)++v9 >= (int)entries )
          return;
      }
LABEL_16:
      sub_1C93D2C(Item, v6);
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
  Il2CppObject *value; // [xsp+18h] [xbp-18h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4D342A0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    byte_4D342A0 = 1;
  }
  value = 0;
  if ( !byte_4D2A019 )
  {
    sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
    byte_4D2A019 = 1;
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
           (const MethodInfo_31C8DD8 *)Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
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
                                       (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__);
      if ( ((unsigned __int8)AssetPath & 1) != 0 )
      {
        if ( value )
        {
          x = *(float *)&value[3].klass;
          y = *((float *)&value[3].klass + 1);
          goto LABEL_11;
        }
LABEL_12:
        sub_1C93D2C(AssetPath, v10);
      }
    }
  }
LABEL_11:
  result.fields.x = x;
  result.fields.y = y;
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
  Il2CppObject *value; // [xsp+18h] [xbp-18h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4D342A1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    byte_4D342A1 = 1;
  }
  value = 0;
  if ( !byte_4D2A019 )
  {
    sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
    byte_4D2A019 = 1;
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
           (const MethodInfo_31C8DD8 *)Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
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
                                       (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__);
      if ( ((unsigned __int8)AssetPath & 1) != 0 )
      {
        if ( value )
        {
          x = *(float *)&value[3].monitor;
          y = *((float *)&value[3].monitor + 1);
          goto LABEL_11;
        }
LABEL_12:
        sub_1C93D2C(AssetPath, v10);
      }
    }
  }
LABEL_11:
  result.fields.x = x;
  result.fields.y = y;
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
  if ( (byte_4D342A2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelType___);
    this = (ExtraBattleUserInterfaceController_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData__get_Count__);
    byte_4D342A2 = 1;
  }
  exBattleUiDataList = v4->fields.exBattleUiDataList;
  if ( !exBattleUiDataList )
    sub_1C93D2C(this, method);
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
      sub_1C69BC4(Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelType___);
      v10 = v9[7];
    }
    v11 = *(_QWORD *)(v10 + 16);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C69B68(inited);
    if ( !*(_DWORD *)(v11 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v11);
    v12 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C69B68(inited);
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
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x19
  ExtraBattleUserInterfaceController___c_c *v18; // x8
  System_Action_object__o *_9__9_1; // x20
  Il2CppObject *v20; // x21
  struct ExtraBattleUserInterfaceController___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  v4 = isResume;
  if ( (byte_4D3429D & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_ExtraBattleUserInterfaceComponent__TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ForEach_ExtraBattleUserInterfaceComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Values__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    sub_1C93AD4(&ExtraBattleUserInterfaceData_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData__RemoveAll__);
    sub_1C93AD4(&System_Predicate_ExtraBattleUserInterfaceData__TypeInfo);
    sub_1C93AD4(&Method_ExtraBattleUserInterfaceController___c__RemoveDataAndComponents_b__9_1__);
    sub_1C93AD4(&Method_ExtraBattleUserInterfaceController___c__DisplayClass9_0__RemoveDataAndComponents_b__0__);
    sub_1C93AD4(&ExtraBattleUserInterfaceController___c__DisplayClass9_0_TypeInfo);
    sub_1C93AD4(&ExtraBattleUserInterfaceController___c_TypeInfo);
    byte_4D3429D = 1;
  }
  v7 = sub_1C93D20(ExtraBattleUserInterfaceController___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_24;
  *(_DWORD *)(v7 + 16) = wave;
  exBattleUiDataList = this->fields.exBattleUiDataList;
  if ( !exBattleUiDataList )
    return;
  v11 = System_Linq_Enumerable__ElementAtOrDefault_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)exBattleUiDataList,
          this->fields.currentExBattleUiIndex,
          (const MethodInfo_31C8DD8 *)Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
  v12 = !v11 || !ExtraBattleUserInterfaceData__get_IsFromQuestPhase((ExtraBattleUserInterfaceData_o *)v11, 0);
  v13 = (System_Collections_Generic_List_object__o *)this->fields.exBattleUiDataList;
  v14 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_ExtraBattleUserInterfaceData__TypeInfo);
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
    (const MethodInfo_387AFF8 *)Method_System_Collections_Generic_List_ExtraBattleUserInterfaceData__RemoveAll__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.exBattleUiDataList,
         (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData___) )
  {
    if ( v12 )
      this->fields.currentExBattleUiIndex = 0;
    v16 = v4 << 31 >> 31;
    if ( !ExtraBattleUserInterfaceData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData_TypeInfo);
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
    sub_1C93D2C(exBattleUiDict, v9);
  Values = System_Collections_Generic_Dictionary_object__object___get_Values(
             (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDict,
             (const MethodInfo_352E9D8 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Values__);
  v18 = ExtraBattleUserInterfaceController___c_TypeInfo;
  if ( !ExtraBattleUserInterfaceController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceController___c_TypeInfo);
    v18 = ExtraBattleUserInterfaceController___c_TypeInfo;
  }
  _9__9_1 = (System_Action_object__o *)v18->static_fields->__9__9_1;
  if ( !_9__9_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = ExtraBattleUserInterfaceController___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__9_1 = (System_Action_object__o *)sub_1C93D20(System_Action_ExtraBattleUserInterfaceComponent__TypeInfo);
    System_Action_object____ctor(
      _9__9_1,
      v20,
      Method_ExtraBattleUserInterfaceController___c__RemoveDataAndComponents_b__9_1__,
      0);
    static_fields = ExtraBattleUserInterfaceController___c_TypeInfo->static_fields;
    static_fields->__9__9_1 = (struct System_Action_ExtraBattleUserInterfaceComponent__o *)_9__9_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__9_1, (int32_t)_9__9_1, v22, v23, v24, v25, v26, v27);
  }
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (System_Action_T__o *)_9__9_1,
    (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_ExtraBattleUserInterfaceComponent___);
}


void ExtraBattleUserInterfaceController__SwitchDispAnimation(
        ExtraBattleUserInterfaceController_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ExtraBattleUserInterfaceData__o *exBattleUiDataList; // x0
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  ExtraBattleUserInterfaceData_o *v8; // x19
  struct System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__o *exBattleUiDict; // x0
  bool v10; // w20
  const MethodInfo_37D6C88 *v11; // x4
  System_String_o *v12; // x22
  Il2CppObject *v13; // x21
  System_String_o *AssetPath; // x1
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *key; // [xsp+8h] [xbp-88h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // [xsp+10h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+20h] [xbp-70h] BYREF
  System_String_o *v20; // [xsp+58h] [xbp-38h] BYREF
  System_Collections_Generic_KeyValuePair_object__object__o v21; // 0:x0.16

  if ( (byte_4D3429F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__GetEnumerator__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__ExtraBattleUserInterfaceComponent__Deconstruct__);
    byte_4D3429F = 1;
  }
  current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0LL;
  v20 = 0;
  memset(&v19, 0, sizeof(v19));
  key = 0;
  exBattleUiDataList = this->fields.exBattleUiDataList;
  if ( exBattleUiDataList )
  {
    v6 = System_Linq_Enumerable__ElementAtOrDefault_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)exBattleUiDataList,
           this->fields.currentExBattleUiIndex,
           (const MethodInfo_31C8DD8 *)Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    if ( v6 )
    {
      v8 = (ExtraBattleUserInterfaceData_o *)v6;
      exBattleUiDict = this->fields.exBattleUiDict;
      if ( !exBattleUiDict )
        sub_1C93D2C(0, v7);
      System_Collections_Generic_Dictionary_object__object___GetEnumerator(
        &v19,
        (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDict,
        (const MethodInfo_352EFD8 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__GetEnumerator__);
      v10 = isDisp;
      while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                &v19,
                (const MethodInfo_362E224 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__MoveNext__) )
      {
        current = v19.fields._current;
        v21.fields.key = (Il2CppObject *)&current;
        v21.fields.value = (Il2CppObject *)&v20;
        System_Collections_Generic_KeyValuePair_object__object___Deconstruct(
          v21,
          &key,
          (Il2CppObject **)Method_System_Collections_Generic_KeyValuePair_string__ExtraBattleUserInterfaceComponent__Deconstruct__,
          v11);
        v12 = v20;
        v13 = key;
        AssetPath = ExtraBattleUserInterfaceData__get_AssetPath(v8, 0);
        v15 = System_String__op_Equality(v12, AssetPath, 0);
        if ( v15 )
        {
          if ( !v13 )
            sub_1C93D2C(v15, v16);
          ExtraBattleUserInterfaceComponent__SwitchDispAnimation((ExtraBattleUserInterfaceComponent_o *)v13, v10, 0);
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
        &v19,
        (const MethodInfo_362E344 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__Dispose__);
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
  const MethodInfo_37D6C88 *v12; // x4
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

  if ( (byte_4D3429E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__GetEnumerator__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__get_Current__);
    sub_1C93AD4(&IBattlePerformanceExtraUiParent_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__ExtraBattleUserInterfaceComponent__Deconstruct__);
    byte_4D3429E = 1;
  }
  current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0LL;
  v27 = 0;
  memset(&v26, 0, sizeof(v26));
  key = 0;
  exBattleUiDataList = this->fields.exBattleUiDataList;
  if ( exBattleUiDataList )
  {
    v8 = System_Linq_Enumerable__ElementAtOrDefault_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)exBattleUiDataList,
           this->fields.currentExBattleUiIndex,
           (const MethodInfo_31C8DD8 *)Method_System_Linq_Enumerable_ElementAtOrDefault_ExtraBattleUserInterfaceData___);
    if ( v8 )
    {
      v10 = (ExtraBattleUserInterfaceData_o *)v8;
      exBattleUiDict = this->fields.exBattleUiDict;
      if ( !exBattleUiDict )
        goto LABEL_24;
      System_Collections_Generic_Dictionary_object__object___GetEnumerator(
        &v23,
        (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDict,
        (const MethodInfo_352EFD8 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__GetEnumerator__);
      v26 = v23;
      while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                &v26,
                (const MethodInfo_362E224 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__MoveNext__) )
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
            sub_1C93D2C(v16, v17);
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
            sub_1C93D2C(v16, v17);
          ExtraBattleUserInterfaceComponent__SetActive((ExtraBattleUserInterfaceComponent_o *)v14, 0, 0);
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
        &v26,
        (const MethodInfo_362E344 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__ExtraBattleUserInterfaceComponent__Dispose__);
      parentInterface = this->fields.parentInterface;
      if ( !parentInterface )
LABEL_24:
        sub_1C93D2C(exBattleUiDict, v9);
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
        v22 = sub_1C69E5C(parentInterface, IBattlePerformanceExtraUiParent_TypeInfo, 1);
      }
      (*(void (__fastcall **)(struct IBattlePerformanceExtraUiParent_o *, _QWORD))v22)(
        parentInterface,
        *(_QWORD *)(v22 + 8));
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

  if ( (byte_4D3429B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_ExtraBattleUserInterfaceComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Values__);
    byte_4D3429B = 1;
  }
  exBattleUiDict = this->fields.exBattleUiDict;
  if ( exBattleUiDict )
    return (System_Collections_Generic_IEnumerable_ExtraBattleUserInterfaceComponent__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                            (System_Collections_Generic_Dictionary_object__object__o *)exBattleUiDict,
                                                                                            (const MethodInfo_352E9D8 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__get_Values__);
  v6 = Method_System_Array_Empty_ExtraBattleUserInterfaceComponent___;
  v7 = *((_QWORD *)Method_System_Array_Empty_ExtraBattleUserInterfaceComponent___ + 7);
  if ( !v7 )
  {
    sub_1C69BC4(Method_System_Array_Empty_ExtraBattleUserInterfaceComponent___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C69B68(inited);
  if ( !*(_DWORD *)(v8 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C69B68(inited);
  return **(System_Collections_Generic_IEnumerable_ExtraBattleUserInterfaceComponent__o ***)(v9 + 184);
}


void ExtraBattleUserInterfaceController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D342A4 & 1) == 0 )
  {
    sub_1C93AD4(&ExtraBattleUserInterfaceController___c_TypeInfo);
    byte_4D342A4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ExtraBattleUserInterfaceController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ExtraBattleUserInterfaceController___c_TypeInfo->static_fields->__9 = (struct ExtraBattleUserInterfaceController___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ExtraBattleUserInterfaceController___c_TypeInfo->static_fields,
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
    sub_1C93D2C(this, 0);
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
  Il2CppObject *Object_object__51927708; // x20
  struct ExtraBattleUserInterfaceController_o *v9; // x8
  struct IBattlePerformanceExtraUiParent_o *parentInterface; // x21
  IBattlePerformanceExtraUiParent_c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  UnityEngine_Transform_o *v15; // x21
  Il2CppObject *v16; // x20
  struct ExtraBattleUserInterfaceController_o *v17; // x8
  struct IBattlePerformanceExtraUiParent_o *v18; // x8
  IBattlePerformanceExtraUiParent_c *v19; // x8
  __int64 naturalAligment; // x9
  Il2CppObject *Component_object; // x20
  Il2CppObject *v22; // x22
  System_Action_o *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  __int64 v30; // x10
  struct ExtraBattleUserInterfaceController_o *v31; // x8
  Il2CppObject *v32; // x22
  Il2CppClass *v33; // x8
  ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *v34; // x21
  __int64 v35; // x9
  IBattlePerformanceExtraUiParent_c **v36; // x10
  __int64 v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  struct ExtraBattleUserInterfaceController_o *v44; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4D342A5 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_ExtraBattleUserInterfaceButtonComponent_ExecType__ExtraBattleUserInterfaceData__TypeInfo);
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&BattlePerformanceMaster_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__set_Item__);
    sub_1C93AD4(&ExtraBattleUserInterfaceButtonComponent_TypeInfo);
    sub_1C93AD4(&Method_ExtraBattleUserInterfaceController_OnTapUi__);
    sub_1C93AD4(&ExtraBattleUserInterfaceData_TypeInfo);
    sub_1C93AD4(&FSUtility_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ExtraBattleUserInterfaceComponent___);
    sub_1C93AD4(&IBattlePerformanceExtraUiParent_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)sub_1C93AD4(&StringLiteral_6314/*"ExBattleUI"*/);
    byte_4D342A5 = 1;
  }
  value = 0;
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_55;
  this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)_4__this->fields.exBattleUiDict;
  if ( !this )
    goto LABEL_55;
  this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                                                        (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                                        (Il2CppObject *)v4->fields.assetPath,
                                                                        &value,
                                                                        (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__TryGetValue__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = v4->fields.__4__this;
    this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)ExtraBattleUserInterfaceData_TypeInfo;
    if ( !ExtraBattleUserInterfaceData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData_TypeInfo);
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
  Object_object__51927708 = AssetData__GetObject_object__51927708(
                              assetData,
                              (System_String_o *)StringLiteral_6314/*"ExBattleUI"*/,
                              (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)UnityEngine_Object__op_Equality(
                                                                        (UnityEngine_Object_o *)Object_object__51927708,
                                                                        0,
                                                                        0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v9 = v4->fields.__4__this;
    if ( !v9 )
      goto LABEL_55;
    parentInterface = v9->fields.parentInterface;
    if ( !parentInterface )
      goto LABEL_55;
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
      v14 = sub_1C69E5C(parentInterface, IBattlePerformanceExtraUiParent_TypeInfo, 0);
    }
    v15 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(struct IBattlePerformanceExtraUiParent_o *, _QWORD))v14)(
                                       parentInterface,
                                       *(_QWORD *)(v14 + 8));
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__Instantiate_object__52629400(
            Object_object__51927708,
            v15,
            (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)FSUtility__IsCalcNotch(2, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v17 = v4->fields.__4__this;
      if ( !v17 )
        goto LABEL_55;
      v18 = v17->fields.parentInterface;
      if ( v18 )
      {
        v19 = v18->klass;
        this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)BattlePerformanceMaster_TypeInfo;
        naturalAligment = BattlePerformanceMaster_TypeInfo->_2.naturalAligment;
        if ( v19->_2.naturalAligment >= (unsigned int)naturalAligment
          && (BattlePerformanceMaster_c *)v19->_2.typeHierarchy[naturalAligment - 1] == BattlePerformanceMaster_TypeInfo )
        {
          if ( !BattlePerformanceMaster_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattlePerformanceMaster_TypeInfo);
          BattlePerformanceMaster__ExceptionalNotchOffset((UnityEngine_GameObject_o *)v16, 0);
        }
      }
    }
    if ( !v16 )
LABEL_55:
      sub_1C93D2C(this, assetData);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v16,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ExtraBattleUserInterfaceComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      v22 = (Il2CppObject *)v4->fields.__4__this;
      v23 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v23, v22, Method_ExtraBattleUserInterfaceController_OnTapUi__, 0);
      if ( !Component_object )
        goto LABEL_55;
      Component_object[5].klass = (Il2CppClass *)v23;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&Component_object[5], (int32_t)v23, v24, v25, v26, v27, v28, v29);
      v30 = ExtraBattleUserInterfaceButtonComponent_TypeInfo->_2.naturalAligment;
      if ( Component_object->klass->_2.naturalAligment >= (unsigned int)v30
        && (ExtraBattleUserInterfaceButtonComponent_c *)Component_object->klass->_2.typeHierarchy[v30 - 1] == ExtraBattleUserInterfaceButtonComponent_TypeInfo )
      {
        v31 = v4->fields.__4__this;
        if ( !v31 )
          goto LABEL_55;
        v32 = (Il2CppObject *)v31->fields.parentInterface;
        this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)sub_1C93D20(System_Action_ExtraBattleUserInterfaceButtonComponent_ExecType__ExtraBattleUserInterfaceData__TypeInfo);
        if ( !v32 )
          goto LABEL_55;
        v33 = v32->klass;
        v34 = this;
        v35 = *(unsigned __int16 *)&v32->klass->_2.rank;
        if ( *(_WORD *)&v32->klass->_2.rank )
        {
          v36 = (IBattlePerformanceExtraUiParent_c **)&v33->_1.interfaceOffsets->offset;
          while ( *(v36 - 1) != IBattlePerformanceExtraUiParent_TypeInfo )
          {
            --v35;
            v36 += 2;
            if ( !v35 )
              goto LABEL_45;
          }
          v37 = (__int64)&v33->vtable[*(_DWORD *)v36 + 2];
        }
        else
        {
LABEL_45:
          v37 = sub_1C69E5C(v32, IBattlePerformanceExtraUiParent_TypeInfo, 2);
        }
        System_Action_Int32Enum__object____ctor((System_Action_T1__T2__o *)v34, v32, *(_QWORD *)(v37 + 8), 0);
        Component_object[10].monitor = v34;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&Component_object[10].monitor,
          (int32_t)v34,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
      }
      v44 = v4->fields.__4__this;
      if ( !v44 )
        goto LABEL_55;
      this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)v44->fields.exBattleUiDict;
      if ( !this )
        goto LABEL_55;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        (System_Collections_Generic_Dictionary_object__object__o *)this,
        (Il2CppObject *)v4->fields.assetPath,
        Component_object,
        (const MethodInfo_352EB94 *)Method_System_Collections_Generic_Dictionary_string__ExtraBattleUserInterfaceComponent__set_Item__);
      v7 = v4->fields.__4__this;
      this = (ExtraBattleUserInterfaceController___c__DisplayClass8_0_o *)ExtraBattleUserInterfaceData_TypeInfo;
      if ( !ExtraBattleUserInterfaceData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData_TypeInfo);
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
    sub_1C93D2C(this, 0);
  return data->fields._Wave_k__BackingField == this->fields.wave;
}