void __fastcall ScriptSelectDialog___ctor(ScriptSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
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
  int32_t v18; // w3
  unsigned int v19; // w8

  if ( (byte_4A5CDC6 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Vector2___TypeInfo);
    sub_1B885B0(&UnityEngine_Vector3___TypeInfo);
    byte_4A5CDC6 = 1;
  }
  v3 = sub_1B88658(UnityEngine_Vector3___TypeInfo, 6LL);
  v7 = v3;
  if ( !byte_4A55CE1 )
  {
    v3 = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
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
    sub_1B88814(v3, v4);
  }
  *(_QWORD *)(v7 + 92) = 0x41B0000000000000LL;
  *(_DWORD *)(v7 + 100) = 0;
  this->fields.BASE_VIEW_POSITIONS = (struct UnityEngine_Vector3_array *)v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.BASE_VIEW_POSITIONS, v7, v5, v6);
  v3 = sub_1B88658(UnityEngine_Vector2___TypeInfo, 6LL);
  if ( !v3 )
LABEL_21:
    sub_1B8880C(v3, v4);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.LIST_VIEW_ITEM_SEED_PITCH, v3, v17, v18);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptSelectDialog__Awake(ScriptSelectDialog_o *this, const MethodInfo *method)
{
  ;
}


float __fastcall ScriptSelectDialog__CalcChangeGaugeTime(
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


void __fastcall ScriptSelectDialog__Close(ScriptSelectDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct ScriptSelectListViewManager_o *listViewManager; // x20
  ScriptSelectDialog_o *v5; // x19
  int32_t v6; // w2
  int32_t v7; // w3
  SePlayer_o *v8; // x0
  ServantStatusBattleListViewItem_o *p_limitTimeLoopSe; // x19
  SePlayer_o *limitTimeLoopSe; // t1
  int32_t v11; // w2
  int32_t v12; // w3

  if ( this->fields.isOpen )
  {
    listViewManager = this->fields.listViewManager;
    v5 = this;
    if ( !listViewManager
      || (listViewManager->fields.clickFunc = 0LL,
          sub_1B88554((ServantStatusBattleListViewItem_o *)&listViewManager->fields.clickFunc, 0, v2, v3),
          ListViewManager__DestroyList((ListViewManager_o *)listViewManager, 0LL),
          (this = (ScriptSelectDialog_o *)v5->fields.rootObject) == 0LL) )
    {
      sub_1B8880C(this, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v5->fields.callbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.callbackFunc, 0, v6, v7);
    limitTimeLoopSe = v5->fields.limitTimeLoopSe;
    p_limitTimeLoopSe = (ServantStatusBattleListViewItem_o *)&v5->fields.limitTimeLoopSe;
    v8 = limitTimeLoopSe;
    p_limitTimeLoopSe[-1].fields.isEnabled = 0;
    if ( limitTimeLoopSe )
    {
      if ( !v8->fields.isStop )
      {
        SePlayer__StopSe(v8, 0.0, 0LL);
        p_limitTimeLoopSe->klass = 0LL;
        sub_1B88554(p_limitTimeLoopSe, 0, v11, v12);
      }
    }
  }
}


void __fastcall ScriptSelectDialog__EndSelectDecide(ScriptSelectDialog_o *this, const MethodInfo *method)
{
  struct ScriptSelectDialog_ClickDelegate_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      (unsigned int)this->fields.index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall ScriptSelectDialog__InitLimitTimeUI(ScriptSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootLimitTimeObject; // x0
  UnityEngine_GameObject_o *v4; // x20
  struct System_Single_array *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  float maxLimitTimeSeconds; // s0
  struct System_Single_array *changeGaugeTimes; // x8
  float v10; // s1
  il2cpp_array_size_t max_length; // w9
  float v12; // s0
  float v13; // s1

  if ( (byte_4A5CDC4 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1B885B0(&float___TypeInfo);
    byte_4A5CDC4 = 1;
  }
  rootLimitTimeObject = this->fields.rootLimitTimeObject;
  if ( !rootLimitTimeObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(rootLimitTimeObject, this->fields.limitTimeMode, 0LL);
  if ( !this->fields.limitTimeMode )
    return;
  rootLimitTimeObject = this->fields.rootLimitTimeObject;
  if ( !rootLimitTimeObject )
    goto LABEL_22;
  rootLimitTimeObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      rootLimitTimeObject,
                                                      (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !rootLimitTimeObject )
    goto LABEL_22;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)rootLimitTimeObject, 0, 0LL);
  rootLimitTimeObject = this->fields.rootLimitTimeObject;
  if ( !rootLimitTimeObject )
    goto LABEL_22;
  rootLimitTimeObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      rootLimitTimeObject,
                                                      (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !rootLimitTimeObject )
    goto LABEL_22;
  v4 = rootLimitTimeObject;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))rootLimitTimeObject->klass[1]._1.castClass)(
    rootLimitTimeObject,
    rootLimitTimeObject->klass[1]._1.declaringType,
    1.0);
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, Il2CppClass *))&v4->klass[2]._1.this_arg.bits)(
    v4,
    v4->klass[2]._1.element_class);
  v5 = (struct System_Single_array *)sub_1B88658(float___TypeInfo, 2LL);
  this->fields.changeGaugeTimes = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.changeGaugeTimes, (int32_t)v5, v6, v7);
  maxLimitTimeSeconds = this->fields.maxLimitTimeSeconds;
  changeGaugeTimes = this->fields.changeGaugeTimes;
  v10 = floorf(maxLimitTimeSeconds * 0.2);
  if ( v10 <= maxLimitTimeSeconds )
    maxLimitTimeSeconds = v10;
  if ( v10 < 1.0 )
    maxLimitTimeSeconds = 1.0;
  if ( !changeGaugeTimes )
LABEL_22:
    sub_1B8880C(rootLimitTimeObject, method);
  max_length = changeGaugeTimes->max_length;
  if ( !max_length || (changeGaugeTimes->m_Items[1] = maxLimitTimeSeconds, max_length == 1) )
    sub_1B88814(rootLimitTimeObject, method);
  v12 = this->fields.maxLimitTimeSeconds;
  v13 = floorf(v12 * 0.5);
  if ( v13 <= v12 )
    v12 = v13;
  if ( v13 < 1.0 )
    v12 = 1.0;
  changeGaugeTimes->m_Items[2] = v12;
  ScriptSelectDialog__UpdateLimitTimeUI(this, method);
}


void __fastcall ScriptSelectDialog__InitListViewManagerUI(
        ScriptSelectDialog_o *this,
        int32_t itemCount,
        const MethodInfo *method)
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
  v5 = BASE_VIEW_POSITIONS->max_length - 1;
  if ( v5 >= itemCount )
    v5 = itemCount;
  if ( itemCount < 0 )
    v5 = 0;
  if ( !LIST_VIEW_ITEM_SEED_PITCH )
    goto LABEL_13;
  if ( v5 >= LIST_VIEW_ITEM_SEED_PITCH->max_length )
    goto LABEL_14;
  listViewItemSeed = this->fields.listViewItemSeed;
  if ( !listViewItemSeed
    || (listViewItemSeed->fields.arrangementPich = *(struct UnityEngine_Vector2_o *)&LIST_VIEW_ITEM_SEED_PITCH->m_Items[v5].fields.y,
        (v7 = this->fields.BASE_VIEW_POSITIONS) == 0LL) )
  {
LABEL_13:
    sub_1B8880C(this, itemCount);
  }
  if ( v5 >= v7->max_length )
LABEL_14:
    sub_1B88814(this, itemCount);
  this = (ScriptSelectDialog_o *)this->fields.baseView;
  if ( !this )
    goto LABEL_13;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)this,
    *(UnityEngine_Vector3_o *)&v7->m_Items[v5].fields.y,
    0LL);
}


void __fastcall ScriptSelectDialog__OnClickSelect(ScriptSelectDialog_o *this, int32_t index, const MethodInfo *method)
{
  SePlayer_o *limitTimeLoopSe; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct ScriptSelectDialog_ClickDelegate_o *callbackFunc; // x8

  if ( this->fields.limitTimeMode )
  {
    limitTimeLoopSe = this->fields.limitTimeLoopSe;
    this->fields.limitTimeMode = 0;
    if ( !limitTimeLoopSe )
      sub_1B8880C(0LL, index);
    SePlayer__StopSe(limitTimeLoopSe, 0.0, 0LL);
    this->fields.limitTimeLoopSe = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.limitTimeLoopSe, 0, v6, v7);
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      (unsigned int)index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall ScriptSelectDialog__Open(
        ScriptSelectDialog_o *this,
        System_String_array *selectMessageList,
        UnityEngine_Font_o *fontType,
        ScriptSelectDialog_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x2
  ScriptSelectListViewManager_o *listViewManager; // x22
  ScriptSelectListViewManager_ClickDelegate_o *v14; // x23
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x4
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x1

  if ( (byte_4A5CDC0 & 1) == 0 )
  {
    sub_1B885B0(&ScriptSelectListViewManager_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_ScriptSelectDialog_OnClickSelect__);
    byte_4A5CDC0 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(rootObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  this->fields.isOpen = 1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v10, v11);
  if ( !selectMessageList
    || (ScriptSelectDialog__InitListViewManagerUI(this, selectMessageList->max_length, v12),
        listViewManager = this->fields.listViewManager,
        v14 = (ScriptSelectListViewManager_ClickDelegate_o *)sub_1B887FC(ScriptSelectListViewManager_ClickDelegate_TypeInfo),
        ScriptSelectListViewManager_ClickDelegate___ctor(
          v14,
          (Il2CppObject *)this,
          Method_ScriptSelectDialog_OnClickSelect__,
          v15),
        !listViewManager)
    || (ScriptSelectListViewManager__CreateList(listViewManager, selectMessageList, fontType, v14, v16),
        (rootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0LL) )
  {
LABEL_8:
    sub_1B8880C(rootObject, selectMessageList);
  }
  ScriptSelectListViewManager__SetMode((ScriptSelectListViewManager_o *)rootObject, 2, 0, 0LL, v17);
  this->fields.limitTimeMode = 0;
  ScriptSelectDialog__InitLimitTimeUI(this, v18);
}


void __fastcall ScriptSelectDialog__OpenHidden(
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
  const MethodInfo *v14; // x2
  ScriptSelectListViewManager_o *listViewManager; // x23
  ScriptSelectListViewManager_ClickDelegate_o *v16; // x24
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x5
  const MethodInfo *v19; // x4
  const MethodInfo *v20; // x1

  if ( (byte_4A5CDC1 & 1) == 0 )
  {
    sub_1B885B0(&ScriptSelectListViewManager_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_ScriptSelectDialog_OnClickSelect__);
    byte_4A5CDC1 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(rootObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  this->fields.isOpen = 1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v12, v13);
  if ( !selectMessageList
    || (ScriptSelectDialog__InitListViewManagerUI(this, selectMessageList->max_length, v14),
        listViewManager = this->fields.listViewManager,
        v16 = (ScriptSelectListViewManager_ClickDelegate_o *)sub_1B887FC(ScriptSelectListViewManager_ClickDelegate_TypeInfo),
        ScriptSelectListViewManager_ClickDelegate___ctor(
          v16,
          (Il2CppObject *)this,
          Method_ScriptSelectDialog_OnClickSelect__,
          v17),
        !listViewManager)
    || (ScriptSelectListViewManager__CreateListHidden(listViewManager, selectMessageList, itemIds, fontType, v16, v18),
        (rootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0LL) )
  {
LABEL_8:
    sub_1B8880C(rootObject, selectMessageList);
  }
  ScriptSelectListViewManager__SetMode((ScriptSelectListViewManager_o *)rootObject, 2, 0, 0LL, v19);
  this->fields.limitTimeMode = 0;
  ScriptSelectDialog__InitLimitTimeUI(this, v20);
}


void __fastcall ScriptSelectDialog__OpenLimitTime(
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
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  const MethodInfo *v17; // x2
  System_String_array *v18; // x23
  ScriptSelectListViewManager_o *listViewManager; // x24
  ScriptSelectListViewManager_ClickDelegate_o *v20; // x25
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x4
  const MethodInfo *v23; // x4
  __int64 v24; // x8
  const MethodInfo *v25; // x1
  struct SePlayer_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_4A5CDC2 & 1) == 0 )
  {
    sub_1B885B0(&ScriptSelectListViewManager_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Take_string___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1B885B0(&Method_ScriptSelectDialog_OnClickSelect__);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5CDC2 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rootObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  this->fields.isOpen = 1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v14, v15);
  if ( !selectMessageList )
    goto LABEL_11;
  v16 = System_Linq_Enumerable__Take_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectMessageList,
          selectMessageList->max_length - 1,
          (const MethodInfo_2EB7498 *)Method_System_Linq_Enumerable_Take_string___);
  rootObject = System_Linq_Enumerable__ToArray_object_(
                 v16,
                 (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_string___);
  if ( !rootObject
    || (v18 = (System_String_array *)rootObject,
        ScriptSelectDialog__InitListViewManagerUI(this, *((_DWORD *)rootObject + 6), v17),
        listViewManager = this->fields.listViewManager,
        v20 = (ScriptSelectListViewManager_ClickDelegate_o *)sub_1B887FC(ScriptSelectListViewManager_ClickDelegate_TypeInfo),
        ScriptSelectListViewManager_ClickDelegate___ctor(
          v20,
          (Il2CppObject *)this,
          Method_ScriptSelectDialog_OnClickSelect__,
          v21),
        !listViewManager)
    || (ScriptSelectListViewManager__CreateList(listViewManager, v18, fontType, v20, v22),
        (rootObject = this->fields.listViewManager) == 0LL) )
  {
LABEL_11:
    sub_1B8880C(rootObject, selectMessageList);
  }
  ScriptSelectListViewManager__SetMode((ScriptSelectListViewManager_o *)rootObject, 2, 0, 0LL, v23);
  this->fields.limitTimeMode = 1;
  v24 = *(_QWORD *)&selectMessageList->max_length;
  this->fields.maxLimitTimeSeconds = limitTime;
  this->fields.limitTimeSeconds = limitTime;
  this->fields.selectMessageLength = v24;
  ScriptSelectDialog__InitLimitTimeUI(this, v25);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v26 = SoundManager__playSeLoop(seName, 0LL);
  this->fields.limitTimeLoopSe = v26;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.limitTimeLoopSe, (int32_t)v26, v27, v28);
}


void __fastcall ScriptSelectDialog__SelectDecide(
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

  if ( (byte_4A5CDC3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1B885B0(&Method_ScriptSelectDialog_EndSelectDecide__);
    byte_4A5CDC3 = 1;
  }
  this->fields.index = index;
  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  listViewManager = this->fields.listViewManager;
  v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ScriptSelectDialog_EndSelectDecide__, 0LL);
  if ( !listViewManager )
    goto LABEL_10;
  ScriptSelectListViewManager__SetMode(listViewManager, 3, index, v8, v11);
  rootLimitTimeObject = this->fields.rootLimitTimeObject;
  if ( !rootLimitTimeObject )
    goto LABEL_10;
  if ( UnityEngine_GameObject__get_activeSelf(rootLimitTimeObject, 0LL) )
  {
    rootLimitTimeObject = this->fields.rootLimitTimeObject;
    if ( rootLimitTimeObject )
    {
      rootLimitTimeObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          rootLimitTimeObject,
                                                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
      if ( rootLimitTimeObject )
      {
        v12 = (UITweener_o *)rootLimitTimeObject;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)rootLimitTimeObject, 1, 0LL);
        UITweener__ResetToBeginning(v12, 0LL);
        UITweener__PlayForward(v12, 0LL);
        return;
      }
    }
LABEL_10:
    sub_1B8880C(rootLimitTimeObject, v10);
  }
}


void __fastcall ScriptSelectDialog__SetActive(ScriptSelectDialog_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0

  if ( this->fields.isOpen )
  {
    rootObject = this->fields.rootObject;
    if ( !rootObject )
      sub_1B8880C(0LL, flag);
    UnityEngine_GameObject__SetActive(rootObject, flag, 0LL);
  }
}


// attributes: thunk
void __fastcall ScriptSelectDialog__Update(ScriptSelectDialog_o *this, const MethodInfo *method)
{
  ScriptSelectDialog__UpdateLimitTime(this, method);
}


void __fastcall ScriptSelectDialog__UpdateLimitTime(ScriptSelectDialog_o *this, const MethodInfo *method)
{
  float limitTimeSeconds; // s8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  float v6; // s0
  int32_t selectMessageLength; // w8

  if ( this->fields.limitTimeMode )
  {
    limitTimeSeconds = this->fields.limitTimeSeconds;
    v6 = limitTimeSeconds - UnityEngine_Time__get_deltaTime(0LL);
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


void __fastcall ScriptSelectDialog__UpdateLimitTimeUI(ScriptSelectDialog_o *this, const MethodInfo *method)
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
  if ( (byte_4A5CDC5 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20483/*"img_timer_meter_yellow"*/);
    sub_1B885B0(&StringLiteral_20481/*"img_timer_meter_blue"*/);
    this = (ScriptSelectDialog_o *)sub_1B885B0(&StringLiteral_20482/*"img_timer_meter_red"*/);
    byte_4A5CDC5 = 1;
  }
  changeGaugeTimes = v2->fields.changeGaugeTimes;
  if ( !changeGaugeTimes )
LABEL_23:
    sub_1B8880C(this, method);
  max_length = changeGaugeTimes->max_length;
  if ( !max_length )
    goto LABEL_24;
  limitTimeSeconds = v2->fields.limitTimeSeconds;
  if ( limitTimeSeconds > changeGaugeTimes->m_Items[1] )
  {
    if ( max_length > 1 )
    {
      this = (ScriptSelectDialog_o *)v2->fields.limitTimeGaugeSprite;
      if ( !this )
        goto LABEL_23;
      v6 = changeGaugeTimes->m_Items[2];
      v7 = (System_String_o **)&StringLiteral_20483/*"img_timer_meter_yellow"*/;
      if ( limitTimeSeconds > v6 )
        v7 = (System_String_o **)&StringLiteral_20481/*"img_timer_meter_blue"*/;
      goto LABEL_13;
    }
LABEL_24:
    sub_1B88814(this, method);
  }
  this = (ScriptSelectDialog_o *)v2->fields.limitTimeGaugeSprite;
  if ( !this )
    goto LABEL_23;
  v7 = (System_String_o **)&StringLiteral_20482/*"img_timer_meter_red"*/;
LABEL_13:
  UISprite__set_spriteName((UISprite_o *)this, *v7, 0LL);
  this = (ScriptSelectDialog_o *)v2->fields.limitTimeGaugeSprite;
  if ( !this )
    goto LABEL_23;
  UIBasicSprite__set_fillAmount(
    (UIBasicSprite_o *)this,
    v2->fields.limitTimeSeconds / v2->fields.maxLimitTimeSeconds,
    0LL);
  limitTimeValueLabel = v2->fields.limitTimeValueLabel;
  v9 = v2->fields.limitTimeSeconds;
  if ( !byte_4A5638E )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A5638E = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v10 = vcvtps_s32_f32(v9);
  v11 = ceilf(v9) == INFINITY ? 0x80000000 : v10;
  v12 = v11;
  this = (ScriptSelectDialog_o *)System_Int32__ToString((int32_t)&v12, 0LL);
  if ( !limitTimeValueLabel )
    goto LABEL_23;
  UILabel__set_text(limitTimeValueLabel, (System_String_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectDialog_ClickDelegate___ctor(
        ScriptSelectDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D01EC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D01A4;
}


System_IAsyncResult_o *__fastcall ScriptSelectDialog_ClickDelegate__BeginInvoke(
        ScriptSelectDialog_ClickDelegate_o *this,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = index;
  if ( (byte_4A5CDC7 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    byte_4A5CDC7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall ScriptSelectDialog_ClickDelegate__EndInvoke(
        ScriptSelectDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall ScriptSelectDialog_ClickDelegate__Invoke(
        ScriptSelectDialog_ClickDelegate_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    index,
    *(_QWORD *)&this->fields.extra_arg);
}