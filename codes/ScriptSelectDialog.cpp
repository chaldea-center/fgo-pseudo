void ScriptSelectDialog___ctor(ScriptSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x20
  __int64 v8; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x10
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v11; // x10
  float v12; // s1
  struct UnityEngine_Vector3_StaticFields *v13; // x10
  float v14; // s1
  struct UnityEngine_Vector3_StaticFields *v15; // x9
  float v16; // s1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  unsigned int v19; // w8

  if ( (byte_4C58DA9 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Vector2___TypeInfo);
    sub_1C3E564(&UnityEngine_Vector3___TypeInfo);
    byte_4C58DA9 = 1;
  }
  v3 = sub_1C3E60C(UnityEngine_Vector3___TypeInfo, 6);
  v7 = v3;
  if ( !byte_4C506A1 )
  {
    v3 = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  if ( !v7 )
    goto LABEL_21;
  v8 = *(_QWORD *)(v7 + 24);
  if ( !(_DWORD)v8 )
    goto LABEL_20;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)(v7 + 32) = *(_QWORD *)&static_fields->zeroVector.fields.x;
  *(float *)(v7 + 40) = z;
  if ( (_DWORD)v8 == 1 )
    goto LABEL_20;
  v11 = UnityEngine_Vector3_TypeInfo->static_fields;
  v12 = v11->zeroVector.fields.z;
  *(_QWORD *)(v7 + 44) = *(_QWORD *)&v11->zeroVector.fields.x;
  *(float *)(v7 + 52) = v12;
  if ( (unsigned int)v8 <= 2 )
    goto LABEL_20;
  v13 = UnityEngine_Vector3_TypeInfo->static_fields;
  v14 = v13->zeroVector.fields.z;
  *(_QWORD *)(v7 + 56) = *(_QWORD *)&v13->zeroVector.fields.x;
  *(float *)(v7 + 64) = v14;
  if ( (unsigned int)v8 <= 3
    || (v15 = UnityEngine_Vector3_TypeInfo->static_fields,
        v16 = v15->zeroVector.fields.z,
        *(_QWORD *)(v7 + 68) = *(_QWORD *)&v15->zeroVector.fields.x,
        *(float *)(v7 + 76) = v16,
        (_DWORD)v8 == 4)
    || (*(_DWORD *)(v7 + 88) = 0, *(_QWORD *)(v7 + 80) = 0x41B0000000000000LL, (unsigned int)v8 <= 5) )
  {
LABEL_20:
    sub_1C3E7C8(v3, v4);
  }
  *(_QWORD *)(v7 + 92) = 0x41B0000000000000LL;
  *(_DWORD *)(v7 + 100) = 0;
  this->fields.BASE_VIEW_POSITIONS = (struct UnityEngine_Vector3_array *)v7;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.BASE_VIEW_POSITIONS, v7, v5, v6);
  v3 = sub_1C3E60C(UnityEngine_Vector2___TypeInfo, 6);
  if ( !v3 )
LABEL_21:
    sub_1C3E7C0(v3, v4);
  v19 = *(_DWORD *)(v3 + 24);
  v4 = v3;
  if ( !v19 )
    goto LABEL_20;
  *(_QWORD *)(v3 + 32) = 0xC2C8000000000000LL;
  if ( v19 == 1 )
    goto LABEL_20;
  *(_QWORD *)(v3 + 40) = 0xC2C8000000000000LL;
  if ( v19 <= 2 )
    goto LABEL_20;
  *(_QWORD *)(v3 + 48) = 0xC2C8000000000000LL;
  if ( v19 == 3 )
    goto LABEL_20;
  *(_QWORD *)(v3 + 56) = 0xC2C8000000000000LL;
  if ( v19 <= 4 )
    goto LABEL_20;
  *(_QWORD *)(v3 + 64) = 0xC2BE000000000000LL;
  if ( v19 == 5 )
    goto LABEL_20;
  *(_QWORD *)(v3 + 72) = 0xC29A000000000000LL;
  this->fields.LIST_VIEW_ITEM_SEED_PITCH = (struct UnityEngine_Vector2_array *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.LIST_VIEW_ITEM_SEED_PITCH, v3, v17, v18);
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
  const MethodInfo *v3; // x3
  struct ScriptSelectListViewManager_o *listViewManager; // x20
  ScriptSelectDialog_o *v5; // x19
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  SePlayer_o *v8; // x0
  CGThumbnailListItem_o *p_limitTimeLoopSe; // x19
  SePlayer_o *limitTimeLoopSe; // t1
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( this->fields.isOpen )
  {
    listViewManager = this->fields.listViewManager;
    v5 = this;
    if ( !listViewManager
      || (listViewManager->fields.clickFunc = 0,
          sub_1C3E508((CGThumbnailListItem_o *)&listViewManager->fields.clickFunc, 0, v2, v3),
          ListViewManager__DestroyList((ListViewManager_o *)listViewManager, 0),
          (this = (ScriptSelectDialog_o *)v5->fields.rootObject) == 0) )
    {
      sub_1C3E7C0(this, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    v5->fields.callbackFunc = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&v5->fields.callbackFunc, 0, v6, v7);
    limitTimeLoopSe = v5->fields.limitTimeLoopSe;
    p_limitTimeLoopSe = (CGThumbnailListItem_o *)&v5->fields.limitTimeLoopSe;
    v8 = limitTimeLoopSe;
    LOBYTE(p_limitTimeLoopSe[-1].fields._Id_k__BackingField) = 0;
    if ( limitTimeLoopSe )
    {
      if ( !v8->fields.isStop )
      {
        SePlayer__StopSe(v8, 0.0, 0);
        p_limitTimeLoopSe->klass = 0;
        sub_1C3E508(p_limitTimeLoopSe, 0, v11, v12);
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
  const MethodInfo *v7; // x3
  float maxLimitTimeSeconds; // s0
  struct System_Single_array *changeGaugeTimes; // x8
  float v10; // s1
  int max_length; // w9
  float v12; // s0
  float v13; // s1

  if ( (byte_4C58DA7 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C3E564(&float___TypeInfo);
    byte_4C58DA7 = 1;
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
                                                      (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !rootLimitTimeObject )
    goto LABEL_22;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)rootLimitTimeObject, 0, 0);
  rootLimitTimeObject = this->fields.rootLimitTimeObject;
  if ( !rootLimitTimeObject )
    goto LABEL_22;
  rootLimitTimeObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      rootLimitTimeObject,
                                                      (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
  v5 = (struct System_Single_array *)sub_1C3E60C(float___TypeInfo, 2);
  this->fields.changeGaugeTimes = v5;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.changeGaugeTimes, (int32_t)v5, v6, v7);
  maxLimitTimeSeconds = this->fields.maxLimitTimeSeconds;
  changeGaugeTimes = this->fields.changeGaugeTimes;
  v10 = floorf(maxLimitTimeSeconds * 0.2);
  if ( v10 <= maxLimitTimeSeconds )
    maxLimitTimeSeconds = v10;
  if ( v10 < 1.0 )
    maxLimitTimeSeconds = 1.0;
  if ( !changeGaugeTimes )
LABEL_22:
    sub_1C3E7C0(rootLimitTimeObject, method);
  max_length = changeGaugeTimes->max_length;
  if ( !max_length || (changeGaugeTimes->m_Items[0] = maxLimitTimeSeconds, max_length == 1) )
    sub_1C3E7C8(rootLimitTimeObject, method);
  v12 = this->fields.maxLimitTimeSeconds;
  v13 = floorf(v12 * 0.5);
  if ( v13 <= v12 )
    v12 = v13;
  if ( v13 < 1.0 )
    v12 = 1.0;
  changeGaugeTimes->m_Items[1] = v12;
  ScriptSelectDialog__UpdateLimitTimeUI(this, method);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1C3E7C0(this, *(_QWORD *)&itemCount);
  }
  if ( (unsigned int)v5 >= LODWORD(v7->max_length) )
LABEL_14:
    sub_1C3E7C8(this, *(_QWORD *)&itemCount);
  this = (ScriptSelectDialog_o *)this->fields.baseView;
  if ( !this )
    goto LABEL_13;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v7->m_Items[v5], 0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptSelectDialog__OnClickSelect(ScriptSelectDialog_o *this, int32_t index, const MethodInfo *method)
{
  SePlayer_o *limitTimeLoopSe; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct ScriptSelectDialog_ClickDelegate_o *callbackFunc; // x8

  if ( this->fields.limitTimeMode )
  {
    limitTimeLoopSe = this->fields.limitTimeLoopSe;
    this->fields.limitTimeMode = 0;
    if ( !limitTimeLoopSe )
      sub_1C3E7C0(0, *(_QWORD *)&index);
    SePlayer__StopSe(limitTimeLoopSe, 0.0, 0);
    this->fields.limitTimeLoopSe = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.limitTimeLoopSe, 0, v6, v7);
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
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  ScriptSelectListViewManager_o *listViewManager; // x22
  ScriptSelectListViewManager_ClickDelegate_o *v14; // x23
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x4
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x1

  if ( (byte_4C58DA3 & 1) == 0 )
  {
    sub_1C3E564(&ScriptSelectListViewManager_ClickDelegate_TypeInfo);
    sub_1C3E564(&Method_ScriptSelectDialog_OnClickSelect__);
    byte_4C58DA3 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(rootObject, 1, 0);
  this->fields.callbackFunc = callback;
  this->fields.isOpen = 1;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v10, v11);
  if ( !selectMessageList
    || (ScriptSelectDialog__InitListViewManagerUI(this, selectMessageList->max_length, v12),
        listViewManager = this->fields.listViewManager,
        v14 = (ScriptSelectListViewManager_ClickDelegate_o *)sub_1C3E7B0(ScriptSelectListViewManager_ClickDelegate_TypeInfo),
        ScriptSelectListViewManager_ClickDelegate___ctor(
          v14,
          (Il2CppObject *)this,
          Method_ScriptSelectDialog_OnClickSelect__,
          v15),
        !listViewManager)
    || (ScriptSelectListViewManager__CreateList(listViewManager, selectMessageList, fontType, v14, v16),
        (rootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0) )
  {
LABEL_8:
    sub_1C3E7C0(rootObject, selectMessageList);
  }
  ScriptSelectListViewManager__SetMode((ScriptSelectListViewManager_o *)rootObject, 2, 0, 0, v17);
  this->fields.limitTimeMode = 0;
  ScriptSelectDialog__InitLimitTimeUI(this, v18);
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
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  ScriptSelectListViewManager_o *listViewManager; // x23
  ScriptSelectListViewManager_ClickDelegate_o *v16; // x24
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x5
  const MethodInfo *v19; // x4
  const MethodInfo *v20; // x1

  if ( (byte_4C58DA4 & 1) == 0 )
  {
    sub_1C3E564(&ScriptSelectListViewManager_ClickDelegate_TypeInfo);
    sub_1C3E564(&Method_ScriptSelectDialog_OnClickSelect__);
    byte_4C58DA4 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(rootObject, 1, 0);
  this->fields.callbackFunc = callback;
  this->fields.isOpen = 1;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v12, v13);
  if ( !selectMessageList
    || (ScriptSelectDialog__InitListViewManagerUI(this, selectMessageList->max_length, v14),
        listViewManager = this->fields.listViewManager,
        v16 = (ScriptSelectListViewManager_ClickDelegate_o *)sub_1C3E7B0(ScriptSelectListViewManager_ClickDelegate_TypeInfo),
        ScriptSelectListViewManager_ClickDelegate___ctor(
          v16,
          (Il2CppObject *)this,
          Method_ScriptSelectDialog_OnClickSelect__,
          v17),
        !listViewManager)
    || (ScriptSelectListViewManager__CreateListHidden(listViewManager, selectMessageList, itemIds, fontType, v16, v18),
        (rootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0) )
  {
LABEL_8:
    sub_1C3E7C0(rootObject, selectMessageList);
  }
  ScriptSelectListViewManager__SetMode((ScriptSelectListViewManager_o *)rootObject, 2, 0, 0, v19);
  this->fields.limitTimeMode = 0;
  ScriptSelectDialog__InitLimitTimeUI(this, v20);
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
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  const MethodInfo *v17; // x2
  System_String_array *v18; // x23
  ScriptSelectListViewManager_o *listViewManager; // x24
  ScriptSelectListViewManager_ClickDelegate_o *v20; // x25
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x4
  const MethodInfo *v23; // x4
  il2cpp_array_size_t max_length; // x8
  const MethodInfo *v25; // x1
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  struct SePlayer_o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4C58DA5 & 1) == 0 )
  {
    sub_1C3E564(&ScriptSelectListViewManager_ClickDelegate_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Take_string___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C3E564(&Method_ScriptSelectDialog_OnClickSelect__);
    sub_1C3E564(&Method_ScriptSelectDialog_OpenLimitTime__);
    byte_4C58DA5 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rootObject, 1, 0);
  this->fields.callbackFunc = callback;
  this->fields.isOpen = 1;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v14, v15);
  if ( !selectMessageList )
    goto LABEL_11;
  v16 = System_Linq_Enumerable__Take_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectMessageList,
          LODWORD(selectMessageList->max_length) - 1,
          (const MethodInfo_3137AD4 *)Method_System_Linq_Enumerable_Take_string___);
  rootObject = System_Linq_Enumerable__ToArray_object_(
                 v16,
                 (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_string___);
  if ( !rootObject
    || (v18 = (System_String_array *)rootObject,
        ScriptSelectDialog__InitListViewManagerUI(this, *((_DWORD *)rootObject + 6), v17),
        listViewManager = this->fields.listViewManager,
        v20 = (ScriptSelectListViewManager_ClickDelegate_o *)sub_1C3E7B0(ScriptSelectListViewManager_ClickDelegate_TypeInfo),
        ScriptSelectListViewManager_ClickDelegate___ctor(
          v20,
          (Il2CppObject *)this,
          Method_ScriptSelectDialog_OnClickSelect__,
          v21),
        !listViewManager)
    || (ScriptSelectListViewManager__CreateList(listViewManager, v18, fontType, v20, v22),
        (rootObject = this->fields.listViewManager) == 0) )
  {
LABEL_11:
    sub_1C3E7C0(rootObject, selectMessageList);
  }
  ScriptSelectListViewManager__SetMode((ScriptSelectListViewManager_o *)rootObject, 2, 0, 0, v23);
  this->fields.limitTimeMode = 1;
  max_length = selectMessageList->max_length;
  this->fields.maxLimitTimeSeconds = limitTime;
  this->fields.limitTimeSeconds = limitTime;
  this->fields.selectMessageLength = max_length;
  ScriptSelectDialog__InitLimitTimeUI(this, v25);
  v26 = Method_ScriptSelectDialog_OpenLimitTime__;
  if ( (*((_BYTE *)Method_ScriptSelectDialog_OpenLimitTime__ + 83) & 2) != 0 )
    v26 = (_QWORD *)sub_1C3E57C(Method_ScriptSelectDialog_OpenLimitTime__);
  v27 = (System_Reflection_MethodBase_o *)sub_1C3E548(v26, v26[4]);
  v28 = OverwriteAssetSoundName__PlaySeLoop(v27, seName, 1.0, 0.0, 0, 0);
  this->fields.limitTimeLoopSe = v28;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.limitTimeLoopSe, (int32_t)v28, v29, v30);
}


void ScriptSelectDialog__SelectDecide(
        ScriptSelectDialog_o *this,
        int32_t index,
        ScriptSelectDialog_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  ScriptSelectListViewManager_o *listViewManager; // x21
  System_Action_o *v8; // x22
  UnityEngine_GameObject_o *rootLimitTimeObject; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  UITweener_o *v12; // x19

  if ( (byte_4C58DA6 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1C3E564(&Method_ScriptSelectDialog_EndSelectDecide__);
    byte_4C58DA6 = 1;
  }
  this->fields.index = index;
  this->fields.callbackFunc = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  listViewManager = this->fields.listViewManager;
  v8 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ScriptSelectDialog_EndSelectDecide__, 0);
  if ( !listViewManager )
    goto LABEL_10;
  ScriptSelectListViewManager__SetMode(listViewManager, 3, index, v8, v11);
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
                                                          (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
      if ( rootLimitTimeObject )
      {
        v12 = (UITweener_o *)rootLimitTimeObject;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)rootLimitTimeObject, 1, 0);
        UITweener__ResetToBeginning(v12, 0);
        UITweener__PlayForward(v12, 0);
        return;
      }
    }
LABEL_10:
    sub_1C3E7C0(rootLimitTimeObject, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptSelectDialog__SetActive(ScriptSelectDialog_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0

  if ( this->fields.isOpen )
  {
    rootObject = this->fields.rootObject;
    if ( !rootObject )
      sub_1C3E7C0(0, flag);
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
  if ( (byte_4C58DA8 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_20617/*"img_timer_meter_yellow"*/);
    sub_1C3E564(&StringLiteral_20615/*"img_timer_meter_blue"*/);
    this = (ScriptSelectDialog_o *)sub_1C3E564(&StringLiteral_20616/*"img_timer_meter_red"*/);
    byte_4C58DA8 = 1;
  }
  changeGaugeTimes = v2->fields.changeGaugeTimes;
  if ( !changeGaugeTimes )
LABEL_23:
    sub_1C3E7C0(this, method);
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
      v7 = (System_String_o **)&StringLiteral_20617/*"img_timer_meter_yellow"*/;
      if ( limitTimeSeconds > v6 )
        v7 = (System_String_o **)&StringLiteral_20615/*"img_timer_meter_blue"*/;
      goto LABEL_13;
    }
LABEL_24:
    sub_1C3E7C8(this, method);
  }
  this = (ScriptSelectDialog_o *)v2->fields.limitTimeGaugeSprite;
  if ( !this )
    goto LABEL_23;
  v7 = (System_String_o **)&StringLiteral_20616/*"img_timer_meter_red"*/;
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
  if ( !byte_4C50D68 )
  {
    sub_1C3E564(&System_Math_TypeInfo);
    byte_4C50D68 = 1;
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
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A84A8C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A84A44;
}


System_IAsyncResult_o *ScriptSelectDialog_ClickDelegate__BeginInvoke(
        ScriptSelectDialog_ClickDelegate_o *this,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-34h] BYREF

  v13 = index;
  if ( (byte_4C58DAA & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    byte_4C58DAA = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(int_TypeInfo, &v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v12, callback, object);
}


void ScriptSelectDialog_ClickDelegate__EndInvoke(
        ScriptSelectDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
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