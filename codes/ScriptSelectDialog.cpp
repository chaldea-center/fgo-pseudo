void ScriptSelectDialog___ctor(ScriptSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x20
  __int64 v12; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x10
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v15; // x10
  float v16; // s1
  struct UnityEngine_Vector3_StaticFields *v17; // x10
  float v18; // s1
  struct UnityEngine_Vector3_StaticFields *v19; // x9
  float v20; // s1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  unsigned int v27; // w8

  if ( (byte_4D2E8FA & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Vector2___TypeInfo);
    sub_1C94098(&UnityEngine_Vector3___TypeInfo);
    byte_4D2E8FA = 1;
  }
  v3 = sub_1C94140(UnityEngine_Vector3___TypeInfo, 6);
  v11 = v3;
  if ( !byte_4D25F19 )
  {
    v3 = sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  if ( !v11 )
    goto LABEL_21;
  v12 = *(_QWORD *)(v11 + 24);
  if ( !(_DWORD)v12 )
    goto LABEL_20;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)(v11 + 32) = *(_QWORD *)&static_fields->zeroVector.fields.x;
  *(float *)(v11 + 40) = z;
  if ( (_DWORD)v12 == 1 )
    goto LABEL_20;
  v15 = UnityEngine_Vector3_TypeInfo->static_fields;
  v16 = v15->zeroVector.fields.z;
  *(_QWORD *)(v11 + 44) = *(_QWORD *)&v15->zeroVector.fields.x;
  *(float *)(v11 + 52) = v16;
  if ( (unsigned int)v12 <= 2 )
    goto LABEL_20;
  v17 = UnityEngine_Vector3_TypeInfo->static_fields;
  v18 = v17->zeroVector.fields.z;
  *(_QWORD *)(v11 + 56) = *(_QWORD *)&v17->zeroVector.fields.x;
  *(float *)(v11 + 64) = v18;
  if ( (unsigned int)v12 <= 3
    || (v19 = UnityEngine_Vector3_TypeInfo->static_fields,
        v20 = v19->zeroVector.fields.z,
        *(_QWORD *)(v11 + 68) = *(_QWORD *)&v19->zeroVector.fields.x,
        *(float *)(v11 + 76) = v20,
        (_DWORD)v12 == 4)
    || (*(_DWORD *)(v11 + 88) = 0, *(_QWORD *)(v11 + 80) = 0x41B0000000000000LL, (unsigned int)v12 <= 5) )
  {
LABEL_20:
    sub_1C942F8(v3);
  }
  *(_QWORD *)(v11 + 92) = 0x41B0000000000000LL;
  *(_DWORD *)(v11 + 100) = 0;
  this->fields.BASE_VIEW_POSITIONS = (struct UnityEngine_Vector3_array *)v11;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.BASE_VIEW_POSITIONS, v11, v5, v6, v7, v8, v9, v10);
  v3 = sub_1C94140(UnityEngine_Vector2___TypeInfo, 6);
  if ( !v3 )
LABEL_21:
    sub_1C942F0(v3, v4);
  v27 = *(_DWORD *)(v3 + 24);
  if ( !v27 )
    goto LABEL_20;
  *(_QWORD *)(v3 + 32) = 0xC2C8000000000000LL;
  if ( v27 == 1 )
    goto LABEL_20;
  *(_QWORD *)(v3 + 40) = 0xC2C8000000000000LL;
  if ( v27 <= 2 )
    goto LABEL_20;
  *(_QWORD *)(v3 + 48) = 0xC2C8000000000000LL;
  if ( v27 == 3 )
    goto LABEL_20;
  *(_QWORD *)(v3 + 56) = 0xC2C8000000000000LL;
  if ( v27 <= 4 )
    goto LABEL_20;
  *(_QWORD *)(v3 + 64) = 0xC2BE000000000000LL;
  if ( v27 == 5 )
    goto LABEL_20;
  *(_QWORD *)(v3 + 72) = 0xC29A000000000000LL;
  this->fields.LIST_VIEW_ITEM_SEED_PITCH = (struct UnityEngine_Vector2_array *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.LIST_VIEW_ITEM_SEED_PITCH, v3, v21, v22, v23, v24, v25, v26);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ScriptSelectDialog__Awake(ScriptSelectDialog_o *this, const MethodInfo *method)
{
  ;
}


float ScriptSelectDialog__CalcChangeGaugeTime(
        ScriptSelectDialog_o *this,
        float maxTime,
        float rate,
        const MethodInfo *method)
{
  float v4; // s1

  v4 = floorf(maxTime * rate);
  if ( v4 <= maxTime )
    maxTime = v4;
  if ( v4 < 1.0 )
    return 1.0;
  return maxTime;
}


void ScriptSelectDialog__Close(ScriptSelectDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ScriptSelectListViewManager_o *listViewManager; // x20
  ScriptSelectDialog_o *v9; // x19
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  SePlayer_o *v16; // x0
  GrandQuestFolderBoardItem_o *p_limitTimeLoopSe; // x19
  SePlayer_o *limitTimeLoopSe; // t1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  if ( this->fields.isOpen )
  {
    listViewManager = this->fields.listViewManager;
    v9 = this;
    if ( !listViewManager
      || (listViewManager->fields.clickFunc = 0,
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&listViewManager->fields.clickFunc, 0, v2, v3, v4, v5, v6, v7),
          ListViewManager__DestroyList((ListViewManager_o *)listViewManager, 0),
          (this = (ScriptSelectDialog_o *)v9->fields.rootObject) == 0) )
    {
      sub_1C942F0(this, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    v9->fields.callbackFunc = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v9->fields.callbackFunc, 0, v10, v11, v12, v13, v14, v15);
    limitTimeLoopSe = v9->fields.limitTimeLoopSe;
    p_limitTimeLoopSe = (GrandQuestFolderBoardItem_o *)&v9->fields.limitTimeLoopSe;
    v16 = limitTimeLoopSe;
    LOBYTE(p_limitTimeLoopSe[-1].fields._IconId_k__BackingField) = 0;
    if ( limitTimeLoopSe )
    {
      if ( !v16->fields.isStop )
      {
        SePlayer__StopSe(v16, 0.0, 0);
        p_limitTimeLoopSe->klass = 0;
        sub_1C9403C(p_limitTimeLoopSe, 0, v19, v20, v21, v22, v23, v24);
      }
    }
  }
}


void ScriptSelectDialog__EndSelectDecide(ScriptSelectDialog_o *this, const MethodInfo *method)
{
  struct ScriptSelectDialog_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      (unsigned int)this->fields.index,
      callbackFunc->fields.method);
}


void ScriptSelectDialog__InitLimitTimeUI(ScriptSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootLimitTimeObject; // x0
  UnityEngine_GameObject_o *v4; // x20
  struct System_Single_array *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  float maxLimitTimeSeconds; // s0
  struct System_Single_array *changeGaugeTimes; // x8
  float v14; // s1
  int max_length; // w9
  float v16; // s0
  float v17; // s1

  if ( (byte_4D2E8F8 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C94098(&float___TypeInfo);
    byte_4D2E8F8 = 1;
  }
  rootLimitTimeObject = this->fields.rootLimitTimeObject;
  if ( !rootLimitTimeObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(rootLimitTimeObject, this->fields.limitTimeMode, 0);
  if ( !this->fields.limitTimeMode )
    return;
  rootLimitTimeObject = this->fields.rootLimitTimeObject;
  if ( !rootLimitTimeObject )
    goto LABEL_22;
  rootLimitTimeObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      rootLimitTimeObject,
                                                      (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !rootLimitTimeObject )
    goto LABEL_22;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)rootLimitTimeObject, 0, 0);
  rootLimitTimeObject = this->fields.rootLimitTimeObject;
  if ( !rootLimitTimeObject )
    goto LABEL_22;
  rootLimitTimeObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      rootLimitTimeObject,
                                                      (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !rootLimitTimeObject )
    goto LABEL_22;
  v4 = rootLimitTimeObject;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))rootLimitTimeObject->klass[1]._1.element_class)(
    rootLimitTimeObject,
    rootLimitTimeObject->klass[1]._1.castClass,
    1.0);
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, void *))&v4->klass[2]._1.byval_arg.bits)(
    v4,
    v4->klass[2]._1.this_arg.data);
  v5 = (struct System_Single_array *)sub_1C94140(float___TypeInfo, 2);
  this->fields.changeGaugeTimes = v5;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.changeGaugeTimes, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  maxLimitTimeSeconds = this->fields.maxLimitTimeSeconds;
  changeGaugeTimes = this->fields.changeGaugeTimes;
  v14 = floorf(maxLimitTimeSeconds * 0.2);
  if ( v14 <= maxLimitTimeSeconds )
    maxLimitTimeSeconds = v14;
  if ( v14 < 1.0 )
    maxLimitTimeSeconds = 1.0;
  if ( !changeGaugeTimes )
LABEL_22:
    sub_1C942F0(rootLimitTimeObject, method);
  max_length = changeGaugeTimes->max_length;
  if ( !max_length || (changeGaugeTimes->m_Items[0] = maxLimitTimeSeconds, max_length == 1) )
    sub_1C942F8(rootLimitTimeObject);
  v16 = this->fields.maxLimitTimeSeconds;
  v17 = floorf(v16 * 0.5);
  if ( v17 <= v16 )
    v16 = v17;
  if ( v17 < 1.0 )
    v16 = 1.0;
  changeGaugeTimes->m_Items[1] = v16;
  ScriptSelectDialog__UpdateLimitTimeUI(this, method);
}


void ScriptSelectDialog__InitListViewManagerUI(ScriptSelectDialog_o *this, int32_t itemCount, const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *BASE_VIEW_POSITIONS; // x8
  struct UnityEngine_Vector2_array *LIST_VIEW_ITEM_SEED_PITCH; // x10
  int32_t v5; // w8
  struct ListViewItemSeed_o *listViewItemSeed; // x11
  struct UnityEngine_Vector3_array *v7; // x10

  BASE_VIEW_POSITIONS = this->fields.BASE_VIEW_POSITIONS;
  if ( !BASE_VIEW_POSITIONS )
    goto LABEL_13;
  LIST_VIEW_ITEM_SEED_PITCH = this->fields.LIST_VIEW_ITEM_SEED_PITCH;
  v5 = LODWORD(BASE_VIEW_POSITIONS->max_length) - 1;
  if ( v5 >= itemCount )
    v5 = itemCount;
  if ( itemCount < 0 )
    v5 = 0;
  if ( !LIST_VIEW_ITEM_SEED_PITCH )
    goto LABEL_13;
  if ( (unsigned int)v5 >= LODWORD(LIST_VIEW_ITEM_SEED_PITCH->max_length) )
    goto LABEL_14;
  listViewItemSeed = this->fields.listViewItemSeed;
  if ( !listViewItemSeed
    || (listViewItemSeed->fields.arrangementPich = LIST_VIEW_ITEM_SEED_PITCH->m_Items[v5],
        (v7 = this->fields.BASE_VIEW_POSITIONS) == 0) )
  {
LABEL_13:
    sub_1C942F0(this, itemCount);
  }
  if ( (unsigned int)v5 >= LODWORD(v7->max_length) )
LABEL_14:
    sub_1C942F8(this);
  this = (ScriptSelectDialog_o *)this->fields.baseView;
  if ( !this )
    goto LABEL_13;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v7->m_Items[v5], 0);
}


void ScriptSelectDialog__OnClickSelect(ScriptSelectDialog_o *this, int32_t index, const MethodInfo *method)
{
  SePlayer_o *limitTimeLoopSe; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct ScriptSelectDialog_ClickDelegate_o *callbackFunc; // x8

  if ( this->fields.limitTimeMode )
  {
    limitTimeLoopSe = this->fields.limitTimeLoopSe;
    this->fields.limitTimeMode = 0;
    if ( !limitTimeLoopSe )
      sub_1C942F0(0, index);
    SePlayer__StopSe(limitTimeLoopSe, 0.0, 0);
    this->fields.limitTimeLoopSe = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.limitTimeLoopSe, 0, v6, v7, v8, v9, v10, v11);
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      (unsigned int)index,
      callbackFunc->fields.method);
}


void ScriptSelectDialog__Open(
        ScriptSelectDialog_o *this,
        System_String_array *selectMessageList,
        UnityEngine_Font_o *fontType,
        ScriptSelectDialog_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x2
  ScriptSelectListViewManager_o *listViewManager; // x22
  ScriptSelectListViewManager_ClickDelegate_o *v18; // x23
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x4
  const MethodInfo *v21; // x4
  const MethodInfo *v22; // x1

  if ( (byte_4D2E8F4 & 1) == 0 )
  {
    sub_1C94098(&ScriptSelectListViewManager_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_ScriptSelectDialog_OnClickSelect__);
    byte_4D2E8F4 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(rootObject, 1, 0);
  this->fields.callbackFunc = callback;
  this->fields.isOpen = 1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( !selectMessageList
    || (ScriptSelectDialog__InitListViewManagerUI(this, selectMessageList->max_length, v16),
        listViewManager = this->fields.listViewManager,
        v18 = (ScriptSelectListViewManager_ClickDelegate_o *)sub_1C942E4(ScriptSelectListViewManager_ClickDelegate_TypeInfo),
        ScriptSelectListViewManager_ClickDelegate___ctor(
          v18,
          (Il2CppObject *)this,
          Method_ScriptSelectDialog_OnClickSelect__,
          v19),
        !listViewManager)
    || (ScriptSelectListViewManager__CreateList(listViewManager, selectMessageList, fontType, v18, v20),
        (rootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0) )
  {
LABEL_8:
    sub_1C942F0(rootObject, selectMessageList);
  }
  ScriptSelectListViewManager__SetMode((ScriptSelectListViewManager_o *)rootObject, 2, 0, 0, v21);
  this->fields.limitTimeMode = 0;
  ScriptSelectDialog__InitLimitTimeUI(this, v22);
}


void ScriptSelectDialog__OpenHidden(
        ScriptSelectDialog_o *this,
        System_String_array *selectMessageList,
        System_Int32_array *itemIds,
        UnityEngine_Font_o *fontType,
        ScriptSelectDialog_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x2
  ScriptSelectListViewManager_o *listViewManager; // x23
  ScriptSelectListViewManager_ClickDelegate_o *v20; // x24
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x5
  const MethodInfo *v23; // x4
  const MethodInfo *v24; // x1

  if ( (byte_4D2E8F5 & 1) == 0 )
  {
    sub_1C94098(&ScriptSelectListViewManager_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_ScriptSelectDialog_OnClickSelect__);
    byte_4D2E8F5 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(rootObject, 1, 0);
  this->fields.callbackFunc = callback;
  this->fields.isOpen = 1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !selectMessageList
    || (ScriptSelectDialog__InitListViewManagerUI(this, selectMessageList->max_length, v18),
        listViewManager = this->fields.listViewManager,
        v20 = (ScriptSelectListViewManager_ClickDelegate_o *)sub_1C942E4(ScriptSelectListViewManager_ClickDelegate_TypeInfo),
        ScriptSelectListViewManager_ClickDelegate___ctor(
          v20,
          (Il2CppObject *)this,
          Method_ScriptSelectDialog_OnClickSelect__,
          v21),
        !listViewManager)
    || (ScriptSelectListViewManager__CreateListHidden(listViewManager, selectMessageList, itemIds, fontType, v20, v22),
        (rootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0) )
  {
LABEL_8:
    sub_1C942F0(rootObject, selectMessageList);
  }
  ScriptSelectListViewManager__SetMode((ScriptSelectListViewManager_o *)rootObject, 2, 0, 0, v23);
  this->fields.limitTimeMode = 0;
  ScriptSelectDialog__InitLimitTimeUI(this, v24);
}


void ScriptSelectDialog__OpenLimitTime(
        ScriptSelectDialog_o *this,
        System_String_array *selectMessageList,
        UnityEngine_Font_o *fontType,
        float limitTime,
        System_String_o *seName,
        ScriptSelectDialog_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  void *rootObject; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  const MethodInfo *v21; // x2
  System_String_array *v22; // x23
  ScriptSelectListViewManager_o *listViewManager; // x24
  ScriptSelectListViewManager_ClickDelegate_o *v24; // x25
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x4
  const MethodInfo *v27; // x4
  il2cpp_array_size_t max_length; // x8
  const MethodInfo *v29; // x1
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  struct SePlayer_o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7

  if ( (byte_4D2E8F6 & 1) == 0 )
  {
    sub_1C94098(&ScriptSelectListViewManager_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Take_string___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C94098(&Method_ScriptSelectDialog_OnClickSelect__);
    sub_1C94098(&Method_ScriptSelectDialog_OpenLimitTime__);
    byte_4D2E8F6 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rootObject, 1, 0);
  this->fields.callbackFunc = callback;
  this->fields.isOpen = 1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !selectMessageList )
    goto LABEL_11;
  v20 = System_Linq_Enumerable__Take_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectMessageList,
          LODWORD(selectMessageList->max_length) - 1,
          (const MethodInfo_31DB198 *)Method_System_Linq_Enumerable_Take_string___);
  rootObject = System_Linq_Enumerable__ToArray_object_(
                 v20,
                 (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_string___);
  if ( !rootObject
    || (v22 = (System_String_array *)rootObject,
        ScriptSelectDialog__InitListViewManagerUI(this, *((_DWORD *)rootObject + 6), v21),
        listViewManager = this->fields.listViewManager,
        v24 = (ScriptSelectListViewManager_ClickDelegate_o *)sub_1C942E4(ScriptSelectListViewManager_ClickDelegate_TypeInfo),
        ScriptSelectListViewManager_ClickDelegate___ctor(
          v24,
          (Il2CppObject *)this,
          Method_ScriptSelectDialog_OnClickSelect__,
          v25),
        !listViewManager)
    || (ScriptSelectListViewManager__CreateList(listViewManager, v22, fontType, v24, v26),
        (rootObject = this->fields.listViewManager) == 0) )
  {
LABEL_11:
    sub_1C942F0(rootObject, selectMessageList);
  }
  ScriptSelectListViewManager__SetMode((ScriptSelectListViewManager_o *)rootObject, 2, 0, 0, v27);
  this->fields.limitTimeMode = 1;
  max_length = selectMessageList->max_length;
  this->fields.maxLimitTimeSeconds = limitTime;
  this->fields.limitTimeSeconds = limitTime;
  this->fields.selectMessageLength = max_length;
  ScriptSelectDialog__InitLimitTimeUI(this, v29);
  v30 = Method_ScriptSelectDialog_OpenLimitTime__;
  if ( (*((_BYTE *)Method_ScriptSelectDialog_OpenLimitTime__ + 83) & 2) != 0 )
    v30 = (_QWORD *)sub_1C940B0(Method_ScriptSelectDialog_OpenLimitTime__);
  v31 = (System_Reflection_MethodBase_o *)sub_1C9407C(v30, v30[4]);
  v32 = OverwriteAssetSoundName__PlaySeLoop(v31, seName, 1.0, 0.0, 0, 0);
  this->fields.limitTimeLoopSe = v32;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.limitTimeLoopSe, (int32_t)v32, v33, v34, v35, v36, v37, v38);
}


void ScriptSelectDialog__SelectDecide(
        ScriptSelectDialog_o *this,
        int32_t index,
        ScriptSelectDialog_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ScriptSelectListViewManager_o *listViewManager; // x21
  System_Action_o *v12; // x22
  UnityEngine_GameObject_o *rootLimitTimeObject; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x4
  UITweener_o *v16; // x19

  if ( (byte_4D2E8F7 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1C94098(&Method_ScriptSelectDialog_EndSelectDecide__);
    byte_4D2E8F7 = 1;
  }
  this->fields.index = index;
  this->fields.callbackFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  listViewManager = this->fields.listViewManager;
  v12 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ScriptSelectDialog_EndSelectDecide__, 0);
  if ( !listViewManager )
    goto LABEL_10;
  ScriptSelectListViewManager__SetMode(listViewManager, 3, index, v12, v15);
  rootLimitTimeObject = this->fields.rootLimitTimeObject;
  if ( !rootLimitTimeObject )
    goto LABEL_10;
  if ( UnityEngine_GameObject__get_activeSelf(rootLimitTimeObject, 0) )
  {
    rootLimitTimeObject = this->fields.rootLimitTimeObject;
    if ( rootLimitTimeObject )
    {
      rootLimitTimeObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          rootLimitTimeObject,
                                                          (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
      if ( rootLimitTimeObject )
      {
        v16 = (UITweener_o *)rootLimitTimeObject;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)rootLimitTimeObject, 1, 0);
        UITweener__ResetToBeginning(v16, 0);
        UITweener__PlayForward(v16, 0);
        return;
      }
    }
LABEL_10:
    sub_1C942F0(rootLimitTimeObject, v14);
  }
}


void ScriptSelectDialog__SetActive(ScriptSelectDialog_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0

  if ( this->fields.isOpen )
  {
    rootObject = this->fields.rootObject;
    if ( !rootObject )
      sub_1C942F0(0, flag);
    UnityEngine_GameObject__SetActive(rootObject, flag, 0);
  }
}


// attributes: thunk
void ScriptSelectDialog__Update(ScriptSelectDialog_o *this, const MethodInfo *method)
{
  ScriptSelectDialog__UpdateLimitTime(this, method);
}


void ScriptSelectDialog__UpdateLimitTime(ScriptSelectDialog_o *this, const MethodInfo *method)
{
  float limitTimeSeconds; // s8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  float v6; // s0
  int32_t selectMessageLength; // w8

  if ( this->fields.limitTimeMode )
  {
    limitTimeSeconds = this->fields.limitTimeSeconds;
    v6 = limitTimeSeconds - UnityEngine_Time__get_deltaTime(0);
    this->fields.limitTimeSeconds = v6;
    if ( v6 < 0.0 )
    {
      selectMessageLength = this->fields.selectMessageLength;
      this->fields.limitTimeSeconds = 0.0;
      ScriptSelectDialog__OnClickSelect(this, selectMessageLength - 1, v5);
    }
    ScriptSelectDialog__UpdateLimitTimeUI(this, v4);
  }
}


void ScriptSelectDialog__UpdateLimitTimeUI(ScriptSelectDialog_o *this, const MethodInfo *method)
{
  ScriptSelectDialog_o *v2; // x19
  struct System_Single_array *changeGaugeTimes; // x8
  unsigned int max_length; // w9
  float limitTimeSeconds; // s0
  float v6; // s1
  System_String_o **v7; // x8
  UILabel_o *limitTimeValueLabel; // x20
  float v9; // s8
  unsigned int v10; // w9
  unsigned int v11; // w8
  unsigned int v12; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4D2E8F9 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20776/*"img_timer_meter_yellow"*/);
    sub_1C94098(&StringLiteral_20774/*"img_timer_meter_blue"*/);
    this = (ScriptSelectDialog_o *)sub_1C94098(&StringLiteral_20775/*"img_timer_meter_red"*/);
    byte_4D2E8F9 = 1;
  }
  changeGaugeTimes = v2->fields.changeGaugeTimes;
  if ( !changeGaugeTimes )
LABEL_23:
    sub_1C942F0(this, method);
  max_length = changeGaugeTimes->max_length;
  if ( !max_length )
    goto LABEL_24;
  limitTimeSeconds = v2->fields.limitTimeSeconds;
  if ( limitTimeSeconds > changeGaugeTimes->m_Items[0] )
  {
    if ( max_length > 1 )
    {
      this = (ScriptSelectDialog_o *)v2->fields.limitTimeGaugeSprite;
      if ( !this )
        goto LABEL_23;
      v6 = changeGaugeTimes->m_Items[1];
      v7 = (System_String_o **)&StringLiteral_20776/*"img_timer_meter_yellow"*/;
      if ( limitTimeSeconds > v6 )
        v7 = (System_String_o **)&StringLiteral_20774/*"img_timer_meter_blue"*/;
      goto LABEL_13;
    }
LABEL_24:
    sub_1C942F8(this);
  }
  this = (ScriptSelectDialog_o *)v2->fields.limitTimeGaugeSprite;
  if ( !this )
    goto LABEL_23;
  v7 = (System_String_o **)&StringLiteral_20775/*"img_timer_meter_red"*/;
LABEL_13:
  UISprite__set_spriteName((UISprite_o *)this, *v7, 0);
  this = (ScriptSelectDialog_o *)v2->fields.limitTimeGaugeSprite;
  if ( !this )
    goto LABEL_23;
  UIBasicSprite__set_fillAmount(
    (UIBasicSprite_o *)this,
    v2->fields.limitTimeSeconds / v2->fields.maxLimitTimeSeconds,
    0);
  limitTimeValueLabel = v2->fields.limitTimeValueLabel;
  v9 = v2->fields.limitTimeSeconds;
  if ( !byte_4D265B8 )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D265B8 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v10 = vcvtps_s32_f32(v9);
  v11 = ceilf(v9) == INFINITY ? 0x80000000 : v10;
  v12 = v11;
  this = (ScriptSelectDialog_o *)System_Int32__ToString((int32_t)&v12, 0);
  if ( !limitTimeValueLabel )
    goto LABEL_23;
  UILabel__set_text(limitTimeValueLabel, (System_String_o *)this, 0);
}


void ScriptSelectDialog_ClickDelegate___ctor(
        ScriptSelectDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1ACA674;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ACA62C;
}


System_IAsyncResult_o *ScriptSelectDialog_ClickDelegate__BeginInvoke(
        ScriptSelectDialog_ClickDelegate_o *this,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = index;
  if ( (byte_4D2E8FB & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    byte_4D2E8FB = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void ScriptSelectDialog_ClickDelegate__EndInvoke(
        ScriptSelectDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void ScriptSelectDialog_ClickDelegate__Invoke(
        ScriptSelectDialog_ClickDelegate_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    index,
    this->fields.method);
}