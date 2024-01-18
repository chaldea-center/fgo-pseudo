// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectDialog___ctor(ScriptSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int v7; // s0
  int v8; // s1
  int v9; // s2
  int v10; // s0
  int v11; // s1
  int v12; // s2
  int v13; // s0
  int v14; // s1
  int v15; // s2
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int v22; // s0
  int v23; // s1
  int v24; // s2
  unsigned int v25; // w8
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  unsigned int v32; // w8
  __int64 v33; // x0

  if ( (byte_418D3AA & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Vector2___TypeInfo, method);
    sub_B2C35C(&UnityEngine_Vector3___TypeInfo, v3);
    byte_418D3AA = 1;
  }
  v4 = sub_B2C374(UnityEngine_Vector3___TypeInfo, 6LL);
  *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v4 )
    goto LABEL_19;
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_18;
  *(_DWORD *)(v4 + 32) = v7;
  *(_DWORD *)(v4 + 36) = v8;
  *(_DWORD *)(v4 + 40) = v9;
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_zero(0LL);
  if ( *(_DWORD *)(v4 + 24) <= 1u )
    goto LABEL_18;
  *(_DWORD *)(v4 + 44) = v10;
  *(_DWORD *)(v4 + 48) = v11;
  *(_DWORD *)(v4 + 52) = v12;
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_zero(0LL);
  if ( *(_DWORD *)(v4 + 24) <= 2u )
    goto LABEL_18;
  *(_DWORD *)(v4 + 56) = v13;
  *(_DWORD *)(v4 + 60) = v14;
  *(_DWORD *)(v4 + 64) = v15;
  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_zero(0LL);
  v25 = *(_DWORD *)(v4 + 24);
  if ( v25 <= 3
    || (*(_DWORD *)(v4 + 68) = v22, *(_DWORD *)(v4 + 72) = v23, *(_DWORD *)(v4 + 76) = v24, v25 == 4)
    || (*(_DWORD *)(v4 + 88) = 0, *(_QWORD *)(v4 + 80) = 0x41B0000000000000LL, v25 <= 5) )
  {
LABEL_18:
    v33 = sub_B2C460(v5);
    sub_B2C400(v33, 0LL);
  }
  *(_QWORD *)(v4 + 92) = 0x41B0000000000000LL;
  *(_DWORD *)(v4 + 100) = 0;
  this->fields.BASE_VIEW_POSITIONS = (struct UnityEngine_Vector3_array *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.BASE_VIEW_POSITIONS,
    (System_Int32_array **)v4,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v5 = sub_B2C374(UnityEngine_Vector2___TypeInfo, 6LL);
  if ( !v5 )
LABEL_19:
    sub_B2C434(v5, v6);
  v32 = *(_DWORD *)(v5 + 24);
  if ( !v32 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 32) = 0xC2C8000000000000LL;
  if ( v32 == 1 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 40) = 0xC2C8000000000000LL;
  if ( v32 <= 2 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 48) = 0xC2C8000000000000LL;
  if ( v32 == 3 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 56) = 0xC2C8000000000000LL;
  if ( v32 <= 4 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 64) = 0xC2BE000000000000LL;
  if ( v32 == 5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 72) = 0xC29A000000000000LL;
  this->fields.LIST_VIEW_ITEM_SEED_PITCH = (struct UnityEngine_Vector2_array *)v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.LIST_VIEW_ITEM_SEED_PITCH,
    (System_Int32_array **)v5,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
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
  return UnityEngine_Mathf__Clamp(floorf(maxTime * rate), 1.0, maxTime, 0LL);
}


void __fastcall ScriptSelectDialog__Close(ScriptSelectDialog_o *this, const MethodInfo *method)
{
  ScriptSelectListViewManager_o *listViewManager; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  SePlayer_o *v10; // x0
  BattleServantConfConponent_o *p_limitTimeLoopSe; // x19
  struct SePlayer_o *limitTimeLoopSe; // t1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( this->fields.isOpen )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager
      || (ScriptSelectListViewManager__DestroyList(listViewManager, 0LL),
          (listViewManager = (ScriptSelectListViewManager_o *)this->fields.rootObject) == 0LL) )
    {
      sub_B2C434(listViewManager, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0LL);
    this->fields.callbackFunc = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    limitTimeLoopSe = this->fields.limitTimeLoopSe;
    p_limitTimeLoopSe = (BattleServantConfConponent_o *)&this->fields.limitTimeLoopSe;
    v10 = limitTimeLoopSe;
    p_limitTimeLoopSe[-1].fields.isEquip = 0;
    if ( limitTimeLoopSe )
    {
      if ( !v10->fields.isStop )
      {
        SePlayer__StopSe(v10, 0.0, 0LL);
        p_limitTimeLoopSe->klass = 0LL;
        sub_B2C2F8(p_limitTimeLoopSe, 0LL, v13, v14, v15, v16, v17, v18);
      }
    }
  }
}


void __fastcall ScriptSelectDialog__EndSelectDecide(ScriptSelectDialog_o *this, const MethodInfo *method)
{
  ScriptSelectDialog_ClickDelegate_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ScriptSelectDialog_ClickDelegate__Invoke(callbackFunc, this->fields.index, 0LL);
}


void __fastcall ScriptSelectDialog__InitLimitTimeUI(ScriptSelectDialog_o *this, const MethodInfo *method)
{
  long double v2; // q8
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *rootLimitTimeObject; // x0
  UnityEngine_GameObject_o *v7; // x20
  struct System_Single_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct System_Single_array *changeGaugeTimes; // x20
  float v16; // s0
  struct System_Single_array *v17; // x20
  float v18; // s0
  __int64 v19; // x0

  if ( (byte_418D3A8 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v4);
    sub_B2C35C(&float___TypeInfo, v5);
    byte_418D3A8 = 1;
  }
  rootLimitTimeObject = this->fields.rootLimitTimeObject;
  if ( !rootLimitTimeObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(rootLimitTimeObject, this->fields.limitTimeMode, 0LL);
  if ( this->fields.limitTimeMode )
  {
    rootLimitTimeObject = this->fields.rootLimitTimeObject;
    if ( rootLimitTimeObject )
    {
      rootLimitTimeObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          rootLimitTimeObject,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
      if ( rootLimitTimeObject )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)rootLimitTimeObject, 0, 0LL);
        rootLimitTimeObject = this->fields.rootLimitTimeObject;
        if ( rootLimitTimeObject )
        {
          rootLimitTimeObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              rootLimitTimeObject,
                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
          if ( rootLimitTimeObject )
          {
            LODWORD(v2) = 1.0;
            v7 = rootLimitTimeObject;
            ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, long double))rootLimitTimeObject->klass[1]._1.castClass)(
              rootLimitTimeObject,
              rootLimitTimeObject->klass[1]._1.declaringType,
              v2);
            (*(void (__fastcall **)(UnityEngine_GameObject_o *, Il2CppClass *))&v7->klass[2]._1.this_arg.bits)(
              v7,
              v7->klass[2]._1.element_class);
            v8 = (struct System_Single_array *)sub_B2C374(float___TypeInfo, 2LL);
            this->fields.changeGaugeTimes = v8;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&this->fields.changeGaugeTimes,
              (System_Int32_array **)v8,
              v9,
              v10,
              v11,
              v12,
              v13,
              v14);
            changeGaugeTimes = this->fields.changeGaugeTimes;
            v16 = UnityEngine_Mathf__Clamp(
                    floorf(this->fields.maxLimitTimeSeconds * 0.2),
                    1.0,
                    this->fields.maxLimitTimeSeconds,
                    0LL);
            if ( changeGaugeTimes )
            {
              if ( !changeGaugeTimes->max_length )
                goto LABEL_16;
              changeGaugeTimes->m_Items[1] = v16;
              v17 = this->fields.changeGaugeTimes;
              v18 = UnityEngine_Mathf__Clamp(
                      floorf(this->fields.maxLimitTimeSeconds * 0.5),
                      1.0,
                      this->fields.maxLimitTimeSeconds,
                      0LL);
              if ( v17 )
              {
                if ( v17->max_length > 1 )
                {
                  v17->m_Items[2] = v18;
                  ScriptSelectDialog__UpdateLimitTimeUI(this, method);
                  return;
                }
LABEL_16:
                v19 = sub_B2C460(rootLimitTimeObject);
                sub_B2C400(v19, 0LL);
              }
            }
          }
        }
      }
    }
LABEL_15:
    sub_B2C434(rootLimitTimeObject, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectDialog__InitListViewManagerUI(
        ScriptSelectDialog_o *this,
        int32_t itemCount,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *BASE_VIEW_POSITIONS; // x8
  ScriptSelectDialog_o *v4; // x19
  struct UnityEngine_Vector2_array *LIST_VIEW_ITEM_SEED_PITCH; // x9
  struct ListViewItemSeed_o *listViewItemSeed; // x10
  __int64 v7; // x8
  struct UnityEngine_Vector3_array *v8; // x9
  __int64 v9; // x0

  BASE_VIEW_POSITIONS = this->fields.BASE_VIEW_POSITIONS;
  if ( !BASE_VIEW_POSITIONS )
    goto LABEL_9;
  v4 = this;
  this = (ScriptSelectDialog_o *)UnityEngine_Mathf__Clamp_40637828(
                                   itemCount,
                                   0,
                                   BASE_VIEW_POSITIONS->max_length - 1,
                                   0LL);
  LIST_VIEW_ITEM_SEED_PITCH = v4->fields.LIST_VIEW_ITEM_SEED_PITCH;
  if ( !LIST_VIEW_ITEM_SEED_PITCH )
    goto LABEL_9;
  if ( (unsigned int)this >= LIST_VIEW_ITEM_SEED_PITCH->max_length )
    goto LABEL_10;
  listViewItemSeed = v4->fields.listViewItemSeed;
  if ( !listViewItemSeed
    || (v7 = (int)this,
        listViewItemSeed->fields.arrangementPich = *(struct UnityEngine_Vector2_o *)&LIST_VIEW_ITEM_SEED_PITCH->m_Items[(int)this].fields.y,
        (v8 = v4->fields.BASE_VIEW_POSITIONS) == 0LL) )
  {
LABEL_9:
    sub_B2C434(this, *(_QWORD *)&itemCount);
  }
  if ( (unsigned int)this >= v8->max_length )
  {
LABEL_10:
    v9 = sub_B2C460(this);
    sub_B2C400(v9, 0LL);
  }
  this = (ScriptSelectDialog_o *)v4->fields.baseView;
  if ( !this )
    goto LABEL_9;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)this,
    *(UnityEngine_Vector3_o *)&v8->m_Items[v7].fields.y,
    0LL);
}


void __fastcall ScriptSelectDialog__OnClickSelect(ScriptSelectDialog_o *this, int32_t index, const MethodInfo *method)
{
  SePlayer_o *limitTimeLoopSe; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  ScriptSelectDialog_ClickDelegate_o *callbackFunc; // x0

  if ( this->fields.limitTimeMode )
  {
    limitTimeLoopSe = this->fields.limitTimeLoopSe;
    this->fields.limitTimeMode = 0;
    if ( !limitTimeLoopSe )
      sub_B2C434(0LL, index);
    SePlayer__StopSe(limitTimeLoopSe, 0.0, 0LL);
    this->fields.limitTimeLoopSe = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.limitTimeLoopSe, 0LL, v6, v7, v8, v9, v10, v11);
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ScriptSelectDialog_ClickDelegate__Invoke(callbackFunc, index, 0LL);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2
  ScriptSelectListViewManager_o *listViewManager; // x22
  ScriptSelectListViewManager_ClickDelegate_o *v19; // x23
  const MethodInfo *v20; // x1

  if ( (byte_418D3A5 & 1) == 0 )
  {
    sub_B2C35C(&ScriptSelectListViewManager_ClickDelegate_TypeInfo, selectMessageList);
    sub_B2C35C(&Method_ScriptSelectDialog_OnClickSelect__, v9);
    byte_418D3A5 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(rootObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  this->fields.isOpen = 1;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !selectMessageList
    || (ScriptSelectDialog__InitListViewManagerUI(this, selectMessageList->max_length, v17),
        listViewManager = this->fields.listViewManager,
        v19 = (ScriptSelectListViewManager_ClickDelegate_o *)sub_B2C42C(ScriptSelectListViewManager_ClickDelegate_TypeInfo),
        ScriptSelectListViewManager_ClickDelegate___ctor(
          v19,
          (Il2CppObject *)this,
          Method_ScriptSelectDialog_OnClickSelect__,
          0LL),
        !listViewManager)
    || (ScriptSelectListViewManager__CreateList(listViewManager, selectMessageList, fontType, v19, 0LL),
        (rootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0LL) )
  {
LABEL_8:
    sub_B2C434(rootObject, selectMessageList);
  }
  ScriptSelectListViewManager__SetMode((ScriptSelectListViewManager_o *)rootObject, 2, 0, 0LL, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  void *rootObject; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  const MethodInfo *v25; // x2
  System_String_array *v26; // x23
  ScriptSelectListViewManager_o *listViewManager; // x24
  ScriptSelectListViewManager_ClickDelegate_o *v28; // x25
  __int64 v29; // x8
  const MethodInfo *v30; // x1
  struct SePlayer_o *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_418D3A6 & 1) == 0 )
  {
    sub_B2C35C(&ScriptSelectListViewManager_ClickDelegate_TypeInfo, selectMessageList);
    sub_B2C35C(&Method_System_Linq_Enumerable_Take_string___, v13);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_string___, v14);
    sub_B2C35C(&Method_ScriptSelectDialog_OnClickSelect__, v15);
    sub_B2C35C(&SoundManager_TypeInfo, v16);
    byte_418D3A6 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rootObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  this->fields.isOpen = 1;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( !selectMessageList )
    goto LABEL_12;
  v24 = System_Linq_Enumerable__Take_BattleData_CommandHistory_(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectMessageList,
          selectMessageList->max_length - 1,
          (const MethodInfo_1A9A644 *)Method_System_Linq_Enumerable_Take_string___);
  rootObject = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                 v24,
                 (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_string___);
  if ( !rootObject
    || (v26 = (System_String_array *)rootObject,
        ScriptSelectDialog__InitListViewManagerUI(this, *((_DWORD *)rootObject + 6), v25),
        listViewManager = this->fields.listViewManager,
        v28 = (ScriptSelectListViewManager_ClickDelegate_o *)sub_B2C42C(ScriptSelectListViewManager_ClickDelegate_TypeInfo),
        ScriptSelectListViewManager_ClickDelegate___ctor(
          v28,
          (Il2CppObject *)this,
          Method_ScriptSelectDialog_OnClickSelect__,
          0LL),
        !listViewManager)
    || (ScriptSelectListViewManager__CreateList(listViewManager, v26, fontType, v28, 0LL),
        (rootObject = this->fields.listViewManager) == 0LL) )
  {
LABEL_12:
    sub_B2C434(rootObject, selectMessageList);
  }
  ScriptSelectListViewManager__SetMode((ScriptSelectListViewManager_o *)rootObject, 2, 0, 0LL, 0LL);
  this->fields.limitTimeMode = 1;
  v29 = *(_QWORD *)&selectMessageList->max_length;
  this->fields.maxLimitTimeSeconds = limitTime;
  this->fields.limitTimeSeconds = limitTime;
  this->fields.selectMessageLength = v29;
  ScriptSelectDialog__InitLimitTimeUI(this, v30);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v31 = SoundManager__playSeLoop(seName, 0LL);
  this->fields.limitTimeLoopSe = v31;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.limitTimeLoopSe,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectDialog__SelectDecide(
        ScriptSelectDialog_o *this,
        int32_t index,
        ScriptSelectDialog_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  ScriptSelectListViewManager_o *listViewManager; // x21
  System_Action_o *v14; // x22
  UnityEngine_GameObject_o *rootLimitTimeObject; // x0
  __int64 v16; // x1
  UITweener_o *v17; // x19

  if ( (byte_418D3A7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v11);
    sub_B2C35C(&Method_ScriptSelectDialog_EndSelectDecide__, v12);
    byte_418D3A7 = 1;
  }
  this->fields.index = index;
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  listViewManager = this->fields.listViewManager;
  v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ScriptSelectDialog_EndSelectDecide__, 0LL);
  if ( !listViewManager )
    goto LABEL_10;
  ScriptSelectListViewManager__SetMode(listViewManager, 3, index, v14, 0LL);
  rootLimitTimeObject = this->fields.rootLimitTimeObject;
  if ( !rootLimitTimeObject )
    goto LABEL_10;
  if ( UnityEngine_GameObject__get_activeSelf(rootLimitTimeObject, 0LL) )
  {
    rootLimitTimeObject = this->fields.rootLimitTimeObject;
    if ( rootLimitTimeObject )
    {
      rootLimitTimeObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          rootLimitTimeObject,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
      if ( rootLimitTimeObject )
      {
        v17 = (UITweener_o *)rootLimitTimeObject;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)rootLimitTimeObject, 1, 0LL);
        UITweener__ResetToBeginning(v17, 0LL);
        UITweener__PlayForward(v17, 0LL);
        return;
      }
    }
LABEL_10:
    sub_B2C434(rootLimitTimeObject, v16);
  }
}


void __fastcall ScriptSelectDialog__SetActive(ScriptSelectDialog_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0

  if ( this->fields.isOpen )
  {
    rootObject = this->fields.rootObject;
    if ( !rootObject )
      sub_B2C434(0LL, flag);
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
  ScriptSelectDialog_o **p_limitTimeGaugeSprite; // x20
  __int64 *v9; // x8
  UILabel_o *limitTimeValueLabel; // x20
  __int64 v11; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_418D3A9 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19646/*"img_timer_meter_yellow"*/, method);
    sub_B2C35C(&StringLiteral_19644/*"img_timer_meter_blue"*/, v3);
    this = (ScriptSelectDialog_o *)sub_B2C35C(&StringLiteral_19645/*"img_timer_meter_red"*/, v4);
    byte_418D3A9 = 1;
  }
  v12 = 0;
  changeGaugeTimes = v2->fields.changeGaugeTimes;
  if ( !changeGaugeTimes )
LABEL_16:
    sub_B2C434(this, method);
  max_length = changeGaugeTimes->max_length;
  if ( !max_length )
    goto LABEL_17;
  limitTimeSeconds = v2->fields.limitTimeSeconds;
  if ( limitTimeSeconds > changeGaugeTimes->m_Items[1] )
  {
    if ( max_length > 1 )
    {
      p_limitTimeGaugeSprite = (ScriptSelectDialog_o **)&v2->fields.limitTimeGaugeSprite;
      this = (ScriptSelectDialog_o *)v2->fields.limitTimeGaugeSprite;
      if ( !this )
        goto LABEL_16;
      if ( limitTimeSeconds <= changeGaugeTimes->m_Items[2] )
        v9 = &StringLiteral_19646/*"img_timer_meter_yellow"*/;
      else
        v9 = &StringLiteral_19644/*"img_timer_meter_blue"*/;
      goto LABEL_13;
    }
LABEL_17:
    v11 = sub_B2C460(this);
    sub_B2C400(v11, 0LL);
  }
  p_limitTimeGaugeSprite = (ScriptSelectDialog_o **)&v2->fields.limitTimeGaugeSprite;
  this = (ScriptSelectDialog_o *)v2->fields.limitTimeGaugeSprite;
  if ( !this )
    goto LABEL_16;
  v9 = &StringLiteral_19645/*"img_timer_meter_red"*/;
LABEL_13:
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v9, 0LL);
  this = *p_limitTimeGaugeSprite;
  if ( !*p_limitTimeGaugeSprite )
    goto LABEL_16;
  UIBasicSprite__set_fillAmount(
    (UIBasicSprite_o *)this,
    v2->fields.limitTimeSeconds / v2->fields.maxLimitTimeSeconds,
    0LL);
  limitTimeValueLabel = v2->fields.limitTimeValueLabel;
  v12 = UnityEngine_Mathf__CeilToInt(v2->fields.limitTimeSeconds, 0LL);
  this = (ScriptSelectDialog_o *)System_Int32__ToString((int32_t)&v12, 0LL);
  if ( !limitTimeValueLabel )
    goto LABEL_16;
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ScriptSelectDialog_ClickDelegate__BeginInvoke(
        ScriptSelectDialog_ClickDelegate_o *this,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = index;
  if ( (byte_4185547 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&index);
    byte_4185547 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall ScriptSelectDialog_ClickDelegate__EndInvoke(
        ScriptSelectDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectDialog_ClickDelegate__Invoke(
        ScriptSelectDialog_ClickDelegate_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ScriptSelectDialog_ClickDelegate_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  ScriptSelectDialog_ClickDelegate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(_QWORD, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  ScriptSelectDialog_ClickDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ScriptSelectDialog_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(_QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&index, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int)index, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, (unsigned int)index, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, (unsigned int)index, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            (unsigned int)index,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, (unsigned int)index, v22);
    goto LABEL_37;
  }
}