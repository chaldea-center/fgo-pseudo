// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectDialog___ctor(ScriptSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int v6; // s0
  int v7; // s1
  int v8; // s2
  int v9; // s0
  int v10; // s1
  int v11; // s2
  int v12; // s0
  int v13; // s1
  int v14; // s2
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int v21; // s0
  int v22; // s1
  int v23; // s2
  unsigned int v24; // w8
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  unsigned int v31; // w8
  __int64 v32; // x0

  if ( (byte_42B5963 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Vector2___TypeInfo);
    sub_B52984(&UnityEngine_Vector3___TypeInfo);
    byte_42B5963 = 1;
  }
  v3 = sub_B5299C(UnityEngine_Vector3___TypeInfo, 6LL);
  *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v3 )
    goto LABEL_19;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_18;
  *(_DWORD *)(v3 + 32) = v6;
  *(_DWORD *)(v3 + 36) = v7;
  *(_DWORD *)(v3 + 40) = v8;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( *(_DWORD *)(v3 + 24) <= 1u )
    goto LABEL_18;
  *(_DWORD *)(v3 + 44) = v9;
  *(_DWORD *)(v3 + 48) = v10;
  *(_DWORD *)(v3 + 52) = v11;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL);
  if ( *(_DWORD *)(v3 + 24) <= 2u )
    goto LABEL_18;
  *(_DWORD *)(v3 + 56) = v12;
  *(_DWORD *)(v3 + 60) = v13;
  *(_DWORD *)(v3 + 64) = v14;
  *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_zero(0LL);
  v24 = *(_DWORD *)(v3 + 24);
  if ( v24 <= 3
    || (*(_DWORD *)(v3 + 68) = v21, *(_DWORD *)(v3 + 72) = v22, *(_DWORD *)(v3 + 76) = v23, v24 == 4)
    || (*(_DWORD *)(v3 + 88) = 0, *(_QWORD *)(v3 + 80) = 0x41B0000000000000LL, v24 <= 5) )
  {
LABEL_18:
    v32 = sub_B52A88(v4);
    sub_B52A28(v32, 0LL);
  }
  *(_QWORD *)(v3 + 92) = 0x41B0000000000000LL;
  *(_DWORD *)(v3 + 100) = 0;
  this->fields.BASE_VIEW_POSITIONS = (struct UnityEngine_Vector3_array *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.BASE_VIEW_POSITIONS,
    (System_Int32_array **)v3,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v4 = sub_B5299C(UnityEngine_Vector2___TypeInfo, 6LL);
  if ( !v4 )
LABEL_19:
    sub_B52A5C(v4, v5);
  v31 = *(_DWORD *)(v4 + 24);
  if ( !v31 )
    goto LABEL_18;
  *(_QWORD *)(v4 + 32) = 0xC2C8000000000000LL;
  if ( v31 == 1 )
    goto LABEL_18;
  *(_QWORD *)(v4 + 40) = 0xC2C8000000000000LL;
  if ( v31 <= 2 )
    goto LABEL_18;
  *(_QWORD *)(v4 + 48) = 0xC2C8000000000000LL;
  if ( v31 == 3 )
    goto LABEL_18;
  *(_QWORD *)(v4 + 56) = 0xC2C8000000000000LL;
  if ( v31 <= 4 )
    goto LABEL_18;
  *(_QWORD *)(v4 + 64) = 0xC2BE000000000000LL;
  if ( v31 == 5 )
    goto LABEL_18;
  *(_QWORD *)(v4 + 72) = 0xC29A000000000000LL;
  this->fields.LIST_VIEW_ITEM_SEED_PITCH = (struct UnityEngine_Vector2_array *)v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.LIST_VIEW_ITEM_SEED_PITCH,
    (System_Int32_array **)v4,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct ScriptSelectListViewManager_o *listViewManager; // x20
  ScriptSelectDialog_o *v9; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x1
  SePlayer_o *v17; // x0
  BattleServantConfConponent_o *p_limitTimeLoopSe; // x19
  SePlayer_o *limitTimeLoopSe; // t1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( this->fields.isOpen )
  {
    listViewManager = this->fields.listViewManager;
    v9 = this;
    if ( !listViewManager
      || (listViewManager->fields.clickFunc = 0LL,
          sub_B52920((BattleServantConfConponent_o *)&listViewManager->fields.clickFunc, 0LL, v2, v3, v4, v5, v6, v7),
          ListViewManager__DestroyList((ListViewManager_o *)listViewManager, 0LL),
          (this = (ScriptSelectDialog_o *)v9->fields.rootObject) == 0LL) )
    {
      sub_B52A5C(this, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v9->fields.callbackFunc = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&v9->fields.callbackFunc, 0LL, v10, v11, v12, v13, v14, v15);
    limitTimeLoopSe = v9->fields.limitTimeLoopSe;
    p_limitTimeLoopSe = (BattleServantConfConponent_o *)&v9->fields.limitTimeLoopSe;
    v17 = limitTimeLoopSe;
    p_limitTimeLoopSe[-1].fields.isEquip = 0;
    if ( limitTimeLoopSe )
    {
      if ( !v17->fields.isStop )
      {
        SePlayer__StopSe(v17, 0.0, v16);
        p_limitTimeLoopSe->klass = 0LL;
        sub_B52920(p_limitTimeLoopSe, 0LL, v20, v21, v22, v23, v24, v25);
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
  UnityEngine_GameObject_o *rootLimitTimeObject; // x0
  UnityEngine_GameObject_o *v5; // x20
  struct System_Single_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_Single_array *changeGaugeTimes; // x20
  float v14; // s0
  struct System_Single_array *v15; // x20
  float v16; // s0
  __int64 v17; // x0

  if ( (byte_42B5961 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B52984(&float___TypeInfo);
    byte_42B5961 = 1;
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
                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
      if ( rootLimitTimeObject )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)rootLimitTimeObject, 0, 0LL);
        rootLimitTimeObject = this->fields.rootLimitTimeObject;
        if ( rootLimitTimeObject )
        {
          rootLimitTimeObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              rootLimitTimeObject,
                                                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
          if ( rootLimitTimeObject )
          {
            LODWORD(v2) = 1.0;
            v5 = rootLimitTimeObject;
            ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, long double))rootLimitTimeObject->klass[1]._1.castClass)(
              rootLimitTimeObject,
              rootLimitTimeObject->klass[1]._1.declaringType,
              v2);
            (*(void (__fastcall **)(UnityEngine_GameObject_o *, Il2CppClass *))&v5->klass[2]._1.this_arg.bits)(
              v5,
              v5->klass[2]._1.element_class);
            v6 = (struct System_Single_array *)sub_B5299C(float___TypeInfo, 2LL);
            this->fields.changeGaugeTimes = v6;
            sub_B52920(
              (BattleServantConfConponent_o *)&this->fields.changeGaugeTimes,
              (System_Int32_array **)v6,
              v7,
              v8,
              v9,
              v10,
              v11,
              v12);
            changeGaugeTimes = this->fields.changeGaugeTimes;
            v14 = UnityEngine_Mathf__Clamp(
                    floorf(this->fields.maxLimitTimeSeconds * 0.2),
                    1.0,
                    this->fields.maxLimitTimeSeconds,
                    0LL);
            if ( changeGaugeTimes )
            {
              if ( !changeGaugeTimes->max_length )
                goto LABEL_16;
              changeGaugeTimes->m_Items[1] = v14;
              v15 = this->fields.changeGaugeTimes;
              v16 = UnityEngine_Mathf__Clamp(
                      floorf(this->fields.maxLimitTimeSeconds * 0.5),
                      1.0,
                      this->fields.maxLimitTimeSeconds,
                      0LL);
              if ( v15 )
              {
                if ( v15->max_length > 1 )
                {
                  v15->m_Items[2] = v16;
                  ScriptSelectDialog__UpdateLimitTimeUI(this, method);
                  return;
                }
LABEL_16:
                v17 = sub_B52A88(rootLimitTimeObject);
                sub_B52A28(v17, 0LL);
              }
            }
          }
        }
      }
    }
LABEL_15:
    sub_B52A5C(rootLimitTimeObject, method);
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
  this = (ScriptSelectDialog_o *)UnityEngine_Mathf__Clamp_41468312(
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
    sub_B52A5C(this, *(_QWORD *)&itemCount);
  }
  if ( (unsigned int)this >= v8->max_length )
  {
LABEL_10:
    v9 = sub_B52A88(this);
    sub_B52A28(v9, 0LL);
  }
  this = (ScriptSelectDialog_o *)v4->fields.baseView;
  if ( !this )
    goto LABEL_9;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)this,
    *(UnityEngine_Vector3_o *)&v8->m_Items[v7].fields.y,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_B52A5C(0LL, index);
    SePlayer__StopSe(limitTimeLoopSe, 0.0, *(const MethodInfo **)&index);
    this->fields.limitTimeLoopSe = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.limitTimeLoopSe, 0LL, v6, v7, v8, v9, v10, v11);
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
  UnityEngine_GameObject_o *rootObject; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2
  ScriptSelectListViewManager_o *listViewManager; // x22
  ScriptSelectListViewManager_ClickDelegate_o *v18; // x23
  const MethodInfo *v19; // x4
  const MethodInfo *v20; // x4
  const MethodInfo *v21; // x1

  if ( (byte_42B595E & 1) == 0 )
  {
    sub_B52984(&ScriptSelectListViewManager_ClickDelegate_TypeInfo);
    sub_B52984(&Method_ScriptSelectDialog_OnClickSelect__);
    byte_42B595E = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(rootObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  this->fields.isOpen = 1;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( !selectMessageList
    || (ScriptSelectDialog__InitListViewManagerUI(this, selectMessageList->max_length, v16),
        listViewManager = this->fields.listViewManager,
        v18 = (ScriptSelectListViewManager_ClickDelegate_o *)sub_B52A54(ScriptSelectListViewManager_ClickDelegate_TypeInfo),
        ScriptSelectListViewManager_ClickDelegate___ctor(
          v18,
          (Il2CppObject *)this,
          Method_ScriptSelectDialog_OnClickSelect__,
          0LL),
        !listViewManager)
    || (ScriptSelectListViewManager__CreateList(listViewManager, selectMessageList, fontType, v18, v19),
        (rootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0LL) )
  {
LABEL_8:
    sub_B52A5C(rootObject, selectMessageList);
  }
  ScriptSelectListViewManager__SetMode((ScriptSelectListViewManager_o *)rootObject, 2, 0, 0LL, v20);
  this->fields.limitTimeMode = 0;
  ScriptSelectDialog__InitLimitTimeUI(this, v21);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  const MethodInfo *v21; // x2
  System_String_array *v22; // x23
  ScriptSelectListViewManager_o *listViewManager; // x24
  ScriptSelectListViewManager_ClickDelegate_o *v24; // x25
  const MethodInfo *v25; // x4
  const MethodInfo *v26; // x4
  __int64 v27; // x8
  const MethodInfo *v28; // x1
  struct SePlayer_o *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_42B595F & 1) == 0 )
  {
    sub_B52984(&ScriptSelectListViewManager_ClickDelegate_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Take_string___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_B52984(&Method_ScriptSelectDialog_OnClickSelect__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B595F = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rootObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  this->fields.isOpen = 1;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !selectMessageList )
    goto LABEL_12;
  v20 = System_Linq_Enumerable__Take_BattleData_CommandHistory_(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectMessageList,
          selectMessageList->max_length - 1,
          (const MethodInfo_1B6DC00 *)Method_System_Linq_Enumerable_Take_string___);
  rootObject = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                 v20,
                 (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_string___);
  if ( !rootObject
    || (v22 = (System_String_array *)rootObject,
        ScriptSelectDialog__InitListViewManagerUI(this, *((_DWORD *)rootObject + 6), v21),
        listViewManager = this->fields.listViewManager,
        v24 = (ScriptSelectListViewManager_ClickDelegate_o *)sub_B52A54(ScriptSelectListViewManager_ClickDelegate_TypeInfo),
        ScriptSelectListViewManager_ClickDelegate___ctor(
          v24,
          (Il2CppObject *)this,
          Method_ScriptSelectDialog_OnClickSelect__,
          0LL),
        !listViewManager)
    || (ScriptSelectListViewManager__CreateList(listViewManager, v22, fontType, v24, v25),
        (rootObject = this->fields.listViewManager) == 0LL) )
  {
LABEL_12:
    sub_B52A5C(rootObject, selectMessageList);
  }
  ScriptSelectListViewManager__SetMode((ScriptSelectListViewManager_o *)rootObject, 2, 0, 0LL, v26);
  this->fields.limitTimeMode = 1;
  v27 = *(_QWORD *)&selectMessageList->max_length;
  this->fields.maxLimitTimeSeconds = limitTime;
  this->fields.limitTimeSeconds = limitTime;
  this->fields.selectMessageLength = v27;
  ScriptSelectDialog__InitLimitTimeUI(this, v28);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v29 = SoundManager__playSeLoop(seName, 0LL);
  this->fields.limitTimeLoopSe = v29;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.limitTimeLoopSe,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
}


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
  ScriptSelectListViewManager_o *listViewManager; // x21
  System_Action_o *v12; // x22
  UnityEngine_GameObject_o *rootLimitTimeObject; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x4
  UITweener_o *v16; // x19

  if ( (byte_42B5960 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_B52984(&Method_ScriptSelectDialog_EndSelectDecide__);
    byte_42B5960 = 1;
  }
  this->fields.index = index;
  this->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  listViewManager = this->fields.listViewManager;
  v12 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ScriptSelectDialog_EndSelectDecide__, 0LL);
  if ( !listViewManager )
    goto LABEL_10;
  ScriptSelectListViewManager__SetMode(listViewManager, 3, index, v12, v15);
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
                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
      if ( rootLimitTimeObject )
      {
        v16 = (UITweener_o *)rootLimitTimeObject;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)rootLimitTimeObject, 1, 0LL);
        UITweener__ResetToBeginning(v16, 0LL);
        UITweener__PlayForward(v16, 0LL);
        return;
      }
    }
LABEL_10:
    sub_B52A5C(rootLimitTimeObject, v14);
  }
}


void __fastcall ScriptSelectDialog__SetActive(ScriptSelectDialog_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0

  if ( this->fields.isOpen )
  {
    rootObject = this->fields.rootObject;
    if ( !rootObject )
      sub_B52A5C(0LL, flag);
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
  ScriptSelectDialog_o **p_limitTimeGaugeSprite; // x20
  __int64 *v7; // x8
  UILabel_o *limitTimeValueLabel; // x20
  __int64 v9; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_42B5962 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_19793/*"img_timer_meter_yellow"*/);
    sub_B52984(&StringLiteral_19791/*"img_timer_meter_blue"*/);
    this = (ScriptSelectDialog_o *)sub_B52984(&StringLiteral_19792/*"img_timer_meter_red"*/);
    byte_42B5962 = 1;
  }
  v10 = 0;
  changeGaugeTimes = v2->fields.changeGaugeTimes;
  if ( !changeGaugeTimes )
LABEL_16:
    sub_B52A5C(this, method);
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
        v7 = &StringLiteral_19793/*"img_timer_meter_yellow"*/;
      else
        v7 = &StringLiteral_19791/*"img_timer_meter_blue"*/;
      goto LABEL_13;
    }
LABEL_17:
    v9 = sub_B52A88(this);
    sub_B52A28(v9, 0LL);
  }
  p_limitTimeGaugeSprite = (ScriptSelectDialog_o **)&v2->fields.limitTimeGaugeSprite;
  this = (ScriptSelectDialog_o *)v2->fields.limitTimeGaugeSprite;
  if ( !this )
    goto LABEL_16;
  v7 = &StringLiteral_19792/*"img_timer_meter_red"*/;
LABEL_13:
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v7, 0LL);
  this = *p_limitTimeGaugeSprite;
  if ( !*p_limitTimeGaugeSprite )
    goto LABEL_16;
  UIBasicSprite__set_fillAmount(
    (UIBasicSprite_o *)this,
    v2->fields.limitTimeSeconds / v2->fields.maxLimitTimeSeconds,
    0LL);
  limitTimeValueLabel = v2->fields.limitTimeValueLabel;
  v10 = UnityEngine_Mathf__CeilToInt(v2->fields.limitTimeSeconds, 0LL);
  this = (ScriptSelectDialog_o *)System_Int32__ToString((int32_t)&v10, 0LL);
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
  sub_B52920(p_method);
}


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
  if ( (byte_42AD301 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    byte_42AD301 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall ScriptSelectDialog_ClickDelegate__EndInvoke(
        ScriptSelectDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&index, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
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
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
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
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B52A34(v17, v22);
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
            v16 = sub_AEB880(v21, class_0, v10, v12);
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