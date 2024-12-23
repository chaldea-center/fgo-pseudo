void __fastcall ScriptSelectDialog___ctor(ScriptSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x20
  __int64 v13; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x10
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v16; // x10
  float v17; // s1
  struct UnityEngine_Vector3_StaticFields *v18; // x10
  float v19; // s1
  struct UnityEngine_Vector3_StaticFields *v20; // x9
  float v21; // s1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  unsigned int v28; // w8

  if ( (byte_4B688BD & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Vector2___TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_Vector3___TypeInfo, v3);
    byte_4B688BD = 1;
  }
  v4 = sub_1BE4B74(UnityEngine_Vector3___TypeInfo, 6LL);
  v12 = v4;
  if ( !byte_4B612E1 )
  {
    v4 = sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v5);
    byte_4B612E1 = 1;
  }
  if ( !v12 )
    goto LABEL_21;
  v13 = *(_QWORD *)(v12 + 24);
  if ( !(_DWORD)v13 )
    goto LABEL_20;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)(v12 + 32) = *(_QWORD *)&static_fields->zeroVector.fields.x;
  *(float *)(v12 + 40) = z;
  if ( (_DWORD)v13 == 1 )
    goto LABEL_20;
  v16 = UnityEngine_Vector3_TypeInfo->static_fields;
  v17 = v16->zeroVector.fields.z;
  *(_QWORD *)(v12 + 44) = *(_QWORD *)&v16->zeroVector.fields.x;
  *(float *)(v12 + 52) = v17;
  if ( (unsigned int)v13 <= 2 )
    goto LABEL_20;
  v18 = UnityEngine_Vector3_TypeInfo->static_fields;
  v19 = v18->zeroVector.fields.z;
  *(_QWORD *)(v12 + 56) = *(_QWORD *)&v18->zeroVector.fields.x;
  *(float *)(v12 + 64) = v19;
  if ( (unsigned int)v13 <= 3
    || (v20 = UnityEngine_Vector3_TypeInfo->static_fields,
        v21 = v20->zeroVector.fields.z,
        *(_QWORD *)(v12 + 68) = *(_QWORD *)&v20->zeroVector.fields.x,
        *(float *)(v12 + 76) = v21,
        (_DWORD)v13 == 4)
    || (*(_DWORD *)(v12 + 88) = 0, *(_QWORD *)(v12 + 80) = 0x41B0000000000000LL, (unsigned int)v13 <= 5) )
  {
LABEL_20:
    sub_1BE4D30(v4, v5);
  }
  *(_QWORD *)(v12 + 92) = 0x41B0000000000000LL;
  *(_DWORD *)(v12 + 100) = 0;
  this->fields.BASE_VIEW_POSITIONS = (struct UnityEngine_Vector3_array *)v12;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.BASE_VIEW_POSITIONS, v12, v6, v7, v8, v9, v10, v11);
  v4 = sub_1BE4B74(UnityEngine_Vector2___TypeInfo, 6LL);
  if ( !v4 )
LABEL_21:
    sub_1BE4D28(v4, v5);
  v28 = *(_DWORD *)(v4 + 24);
  v5 = v4;
  if ( !v28 )
    goto LABEL_20;
  *(_QWORD *)(v4 + 32) = 0xC2C8000000000000LL;
  if ( v28 == 1 )
    goto LABEL_20;
  *(_QWORD *)(v4 + 40) = 0xC2C8000000000000LL;
  if ( v28 <= 2 )
    goto LABEL_20;
  *(_QWORD *)(v4 + 48) = 0xC2C8000000000000LL;
  if ( v28 == 3 )
    goto LABEL_20;
  *(_QWORD *)(v4 + 56) = 0xC2C8000000000000LL;
  if ( v28 <= 4 )
    goto LABEL_20;
  *(_QWORD *)(v4 + 64) = 0xC2BE000000000000LL;
  if ( v28 == 5 )
    goto LABEL_20;
  *(_QWORD *)(v4 + 72) = 0xC29A000000000000LL;
  this->fields.LIST_VIEW_ITEM_SEED_PITCH = (struct UnityEngine_Vector2_array *)v4;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.LIST_VIEW_ITEM_SEED_PITCH, v4, v22, v23, v24, v25, v26, v27);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct ScriptSelectListViewManager_o *listViewManager; // x20
  ScriptSelectDialog_o *v9; // x19
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  SePlayer_o *v16; // x0
  PartyOrganizationUtility_o *p_limitTimeLoopSe; // x19
  SePlayer_o *limitTimeLoopSe; // t1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( this->fields.isOpen )
  {
    listViewManager = this->fields.listViewManager;
    v9 = this;
    if ( !listViewManager
      || (listViewManager->fields.clickFunc = 0LL,
          sub_1BE4A70((PartyOrganizationUtility_o *)&listViewManager->fields.clickFunc, 0LL, v2, v3, v4, v5, v6, v7),
          ListViewManager__DestroyList((ListViewManager_o *)listViewManager, 0LL),
          (this = (ScriptSelectDialog_o *)v9->fields.rootObject) == 0LL) )
    {
      sub_1BE4D28(this, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v9->fields.callbackFunc = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v9->fields.callbackFunc, 0LL, v10, v11, v12, v13, v14, v15);
    limitTimeLoopSe = v9->fields.limitTimeLoopSe;
    p_limitTimeLoopSe = (PartyOrganizationUtility_o *)&v9->fields.limitTimeLoopSe;
    v16 = limitTimeLoopSe;
    LOBYTE(p_limitTimeLoopSe[-1].fields.temporaryPartyInfo) = 0;
    if ( limitTimeLoopSe )
    {
      if ( !v16->fields.isStop )
      {
        SePlayer__StopSe(v16, 0.0, 0LL);
        p_limitTimeLoopSe->klass = 0LL;
        sub_1BE4A70(p_limitTimeLoopSe, 0LL, v19, v20, v21, v22, v23, v24);
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
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *rootLimitTimeObject; // x0
  UnityEngine_GameObject_o *v6; // x20
  struct System_Single_array *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  float maxLimitTimeSeconds; // s0
  struct System_Single_array *changeGaugeTimes; // x8
  float v16; // s1
  il2cpp_array_size_t max_length; // w9
  float v18; // s0
  float v19; // s1

  if ( (byte_4B688BB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, method);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    sub_1BE4ACC(&float___TypeInfo, v4);
    byte_4B688BB = 1;
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
                                                      (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
  if ( !rootLimitTimeObject )
    goto LABEL_22;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)rootLimitTimeObject, 0, 0LL);
  rootLimitTimeObject = this->fields.rootLimitTimeObject;
  if ( !rootLimitTimeObject )
    goto LABEL_22;
  rootLimitTimeObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      rootLimitTimeObject,
                                                      (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !rootLimitTimeObject )
    goto LABEL_22;
  v6 = rootLimitTimeObject;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))rootLimitTimeObject->klass[1]._1.castClass)(
    rootLimitTimeObject,
    rootLimitTimeObject->klass[1]._1.declaringType,
    1.0);
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, Il2CppClass *))&v6->klass[2]._1.this_arg.bits)(
    v6,
    v6->klass[2]._1.element_class);
  v7 = (struct System_Single_array *)sub_1BE4B74(float___TypeInfo, 2LL);
  this->fields.changeGaugeTimes = v7;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.changeGaugeTimes, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  maxLimitTimeSeconds = this->fields.maxLimitTimeSeconds;
  changeGaugeTimes = this->fields.changeGaugeTimes;
  v16 = floorf(maxLimitTimeSeconds * 0.2);
  if ( v16 <= maxLimitTimeSeconds )
    maxLimitTimeSeconds = v16;
  if ( v16 < 1.0 )
    maxLimitTimeSeconds = 1.0;
  if ( !changeGaugeTimes )
LABEL_22:
    sub_1BE4D28(rootLimitTimeObject, method);
  max_length = changeGaugeTimes->max_length;
  if ( !max_length || (changeGaugeTimes->m_Items[1] = maxLimitTimeSeconds, max_length == 1) )
    sub_1BE4D30(rootLimitTimeObject, method);
  v18 = this->fields.maxLimitTimeSeconds;
  v19 = floorf(v18 * 0.5);
  if ( v19 <= v18 )
    v18 = v19;
  if ( v19 < 1.0 )
    v18 = 1.0;
  changeGaugeTimes->m_Items[2] = v18;
  ScriptSelectDialog__UpdateLimitTimeUI(this, method);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BE4D28(this, itemCount);
  }
  if ( v5 >= v7->max_length )
LABEL_14:
    sub_1BE4D30(this, *(_QWORD *)&itemCount);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct ScriptSelectDialog_ClickDelegate_o *callbackFunc; // x8

  if ( this->fields.limitTimeMode )
  {
    limitTimeLoopSe = this->fields.limitTimeLoopSe;
    this->fields.limitTimeMode = 0;
    if ( !limitTimeLoopSe )
      sub_1BE4D28(0LL, index);
    SePlayer__StopSe(limitTimeLoopSe, 0.0, 0LL);
    this->fields.limitTimeLoopSe = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.limitTimeLoopSe, 0LL, v6, v7, v8, v9, v10, v11);
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
  __int64 v9; // x1
  UnityEngine_GameObject_o *rootObject; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x2
  ScriptSelectListViewManager_o *listViewManager; // x22
  ScriptSelectListViewManager_ClickDelegate_o *v19; // x23
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x4
  const MethodInfo *v22; // x4
  const MethodInfo *v23; // x1

  if ( (byte_4B688B7 & 1) == 0 )
  {
    sub_1BE4ACC(&ScriptSelectListViewManager_ClickDelegate_TypeInfo, selectMessageList);
    sub_1BE4ACC(&Method_ScriptSelectDialog_OnClickSelect__, v9);
    byte_4B688B7 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(rootObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  this->fields.isOpen = 1;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v11, v12, v13, v14, v15, v16);
  if ( !selectMessageList
    || (ScriptSelectDialog__InitListViewManagerUI(this, selectMessageList->max_length, v17),
        listViewManager = this->fields.listViewManager,
        v19 = (ScriptSelectListViewManager_ClickDelegate_o *)sub_1BE4D18(ScriptSelectListViewManager_ClickDelegate_TypeInfo),
        ScriptSelectListViewManager_ClickDelegate___ctor(
          v19,
          (Il2CppObject *)this,
          Method_ScriptSelectDialog_OnClickSelect__,
          v20),
        !listViewManager)
    || (ScriptSelectListViewManager__CreateList(listViewManager, selectMessageList, fontType, v19, v21),
        (rootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0LL) )
  {
LABEL_8:
    sub_1BE4D28(rootObject, selectMessageList);
  }
  ScriptSelectListViewManager__SetMode((ScriptSelectListViewManager_o *)rootObject, 2, 0, 0LL, v22);
  this->fields.limitTimeMode = 0;
  ScriptSelectDialog__InitLimitTimeUI(this, v23);
}


void __fastcall ScriptSelectDialog__OpenHidden(
        ScriptSelectDialog_o *this,
        System_String_array *selectMessageList,
        System_Int32_array *itemIds,
        UnityEngine_Font_o *fontType,
        ScriptSelectDialog_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  UnityEngine_GameObject_o *rootObject; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x2
  ScriptSelectListViewManager_o *listViewManager; // x23
  ScriptSelectListViewManager_ClickDelegate_o *v21; // x24
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x5
  const MethodInfo *v24; // x4
  const MethodInfo *v25; // x1

  if ( (byte_4B688B8 & 1) == 0 )
  {
    sub_1BE4ACC(&ScriptSelectListViewManager_ClickDelegate_TypeInfo, selectMessageList);
    sub_1BE4ACC(&Method_ScriptSelectDialog_OnClickSelect__, v11);
    byte_4B688B8 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(rootObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  this->fields.isOpen = 1;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v13, v14, v15, v16, v17, v18);
  if ( !selectMessageList
    || (ScriptSelectDialog__InitListViewManagerUI(this, selectMessageList->max_length, v19),
        listViewManager = this->fields.listViewManager,
        v21 = (ScriptSelectListViewManager_ClickDelegate_o *)sub_1BE4D18(ScriptSelectListViewManager_ClickDelegate_TypeInfo),
        ScriptSelectListViewManager_ClickDelegate___ctor(
          v21,
          (Il2CppObject *)this,
          Method_ScriptSelectDialog_OnClickSelect__,
          v22),
        !listViewManager)
    || (ScriptSelectListViewManager__CreateListHidden(listViewManager, selectMessageList, itemIds, fontType, v21, v23),
        (rootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0LL) )
  {
LABEL_8:
    sub_1BE4D28(rootObject, selectMessageList);
  }
  ScriptSelectListViewManager__SetMode((ScriptSelectListViewManager_o *)rootObject, 2, 0, 0LL, v24);
  this->fields.limitTimeMode = 0;
  ScriptSelectDialog__InitLimitTimeUI(this, v25);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  void *rootObject; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  const MethodInfo *v25; // x2
  System_String_array *v26; // x23
  ScriptSelectListViewManager_o *listViewManager; // x24
  ScriptSelectListViewManager_ClickDelegate_o *v28; // x25
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x4
  const MethodInfo *v31; // x4
  __int64 v32; // x8
  const MethodInfo *v33; // x1
  struct SePlayer_o *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  if ( (byte_4B688B9 & 1) == 0 )
  {
    sub_1BE4ACC(&ScriptSelectListViewManager_ClickDelegate_TypeInfo, selectMessageList);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Take_string___, v13);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_string___, v14);
    sub_1BE4ACC(&Method_ScriptSelectDialog_OnClickSelect__, v15);
    sub_1BE4ACC(&SoundManager_TypeInfo, v16);
    byte_4B688B9 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rootObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  this->fields.isOpen = 1;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v18, v19, v20, v21, v22, v23);
  if ( !selectMessageList )
    goto LABEL_11;
  v24 = System_Linq_Enumerable__Take_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectMessageList,
          selectMessageList->max_length - 1,
          (const MethodInfo_2F91888 *)Method_System_Linq_Enumerable_Take_string___);
  rootObject = System_Linq_Enumerable__ToArray_object_(
                 v24,
                 (const MethodInfo_2F92AD4 *)Method_System_Linq_Enumerable_ToArray_string___);
  if ( !rootObject
    || (v26 = (System_String_array *)rootObject,
        ScriptSelectDialog__InitListViewManagerUI(this, *((_DWORD *)rootObject + 6), v25),
        listViewManager = this->fields.listViewManager,
        v28 = (ScriptSelectListViewManager_ClickDelegate_o *)sub_1BE4D18(ScriptSelectListViewManager_ClickDelegate_TypeInfo),
        ScriptSelectListViewManager_ClickDelegate___ctor(
          v28,
          (Il2CppObject *)this,
          Method_ScriptSelectDialog_OnClickSelect__,
          v29),
        !listViewManager)
    || (ScriptSelectListViewManager__CreateList(listViewManager, v26, fontType, v28, v30),
        (rootObject = this->fields.listViewManager) == 0LL) )
  {
LABEL_11:
    sub_1BE4D28(rootObject, selectMessageList);
  }
  ScriptSelectListViewManager__SetMode((ScriptSelectListViewManager_o *)rootObject, 2, 0, 0LL, v31);
  this->fields.limitTimeMode = 1;
  v32 = *(_QWORD *)&selectMessageList->max_length;
  this->fields.maxLimitTimeSeconds = limitTime;
  this->fields.limitTimeSeconds = limitTime;
  this->fields.selectMessageLength = v32;
  ScriptSelectDialog__InitLimitTimeUI(this, v33);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v34 = SoundManager__playSeLoop(seName, 0LL);
  this->fields.limitTimeLoopSe = v34;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.limitTimeLoopSe, (int64_t)v34, v35, v36, v37, v38, v39, v40);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectDialog__SelectDecide(
        ScriptSelectDialog_o *this,
        int32_t index,
        ScriptSelectDialog_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  ScriptSelectListViewManager_o *listViewManager; // x21
  System_Action_o *v14; // x22
  UnityEngine_GameObject_o *rootLimitTimeObject; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x4
  UITweener_o *v18; // x19

  if ( (byte_4B688BA & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v11);
    sub_1BE4ACC(&Method_ScriptSelectDialog_EndSelectDecide__, v12);
    byte_4B688BA = 1;
  }
  this->fields.index = index;
  this->fields.callbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  listViewManager = this->fields.listViewManager;
  v14 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ScriptSelectDialog_EndSelectDecide__, 0LL);
  if ( !listViewManager )
    goto LABEL_10;
  ScriptSelectListViewManager__SetMode(listViewManager, 3, index, v14, v17);
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
                                                          (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
      if ( rootLimitTimeObject )
      {
        v18 = (UITweener_o *)rootLimitTimeObject;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)rootLimitTimeObject, 1, 0LL);
        UITweener__ResetToBeginning(v18, 0LL);
        UITweener__PlayForward(v18, 0LL);
        return;
      }
    }
LABEL_10:
    sub_1BE4D28(rootLimitTimeObject, v16);
  }
}


void __fastcall ScriptSelectDialog__SetActive(ScriptSelectDialog_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0

  if ( this->fields.isOpen )
  {
    rootObject = this->fields.rootObject;
    if ( !rootObject )
      sub_1BE4D28(0LL, flag);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Single_array *changeGaugeTimes; // x8
  unsigned int max_length; // w9
  float limitTimeSeconds; // s0
  float v8; // s1
  System_String_o **v9; // x8
  __int64 v10; // x1
  UILabel_o *limitTimeValueLabel; // x20
  float v12; // s8
  unsigned int v13; // w9
  unsigned int v14; // w8
  unsigned int v15; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4B688BC & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_20772/*"img_timer_meter_yellow"*/, method);
    sub_1BE4ACC(&StringLiteral_20770/*"img_timer_meter_blue"*/, v3);
    this = (ScriptSelectDialog_o *)sub_1BE4ACC(&StringLiteral_20771/*"img_timer_meter_red"*/, v4);
    byte_4B688BC = 1;
  }
  changeGaugeTimes = v2->fields.changeGaugeTimes;
  if ( !changeGaugeTimes )
LABEL_23:
    sub_1BE4D28(this, method);
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
      v8 = changeGaugeTimes->m_Items[2];
      v9 = (System_String_o **)&StringLiteral_20772/*"img_timer_meter_yellow"*/;
      if ( limitTimeSeconds > v8 )
        v9 = (System_String_o **)&StringLiteral_20770/*"img_timer_meter_blue"*/;
      goto LABEL_13;
    }
LABEL_24:
    sub_1BE4D30(this, method);
  }
  this = (ScriptSelectDialog_o *)v2->fields.limitTimeGaugeSprite;
  if ( !this )
    goto LABEL_23;
  v9 = (System_String_o **)&StringLiteral_20771/*"img_timer_meter_red"*/;
LABEL_13:
  UISprite__set_spriteName((UISprite_o *)this, *v9, 0LL);
  this = (ScriptSelectDialog_o *)v2->fields.limitTimeGaugeSprite;
  if ( !this )
    goto LABEL_23;
  UIBasicSprite__set_fillAmount(
    (UIBasicSprite_o *)this,
    v2->fields.limitTimeSeconds / v2->fields.maxLimitTimeSeconds,
    0LL);
  limitTimeValueLabel = v2->fields.limitTimeValueLabel;
  v12 = v2->fields.limitTimeSeconds;
  if ( !byte_4B6195E )
  {
    sub_1BE4ACC(&System_Math_TypeInfo, v10);
    byte_4B6195E = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v13 = vcvtps_s32_f32(v12);
  v14 = ceilf(v12) == INFINITY ? 0x80000000 : v13;
  v15 = v14;
  this = (ScriptSelectDialog_o *)System_Int32__ToString((int32_t)&v15, 0LL);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A2852C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A284E4;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B688BE & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&index);
    byte_4B688BE = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v9, callback, object);
}


void __fastcall ScriptSelectDialog_ClickDelegate__EndInvoke(
        ScriptSelectDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
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