// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectDialog___ctor(ScriptSelectDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  int v11; // s0
  int v12; // s1
  int v13; // s2
  int v14; // s0
  int v15; // s1
  int v16; // s2
  int v17; // s0
  int v18; // s1
  int v19; // s2
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int v26; // s0
  int v27; // s1
  int v28; // s2
  unsigned int v29; // w8
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  unsigned int v36; // w8
  __int64 v37; // x0

  if ( (byte_42EE2F3 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Vector2___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Vector3___TypeInfo, v5, v6, v7);
    byte_42EE2F3 = 1;
  }
  v8 = sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 6LL);
  *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v8 )
    goto LABEL_19;
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_18;
  *(_DWORD *)(v8 + 32) = v11;
  *(_DWORD *)(v8 + 36) = v12;
  *(_DWORD *)(v8 + 40) = v13;
  *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL);
  if ( *(_DWORD *)(v8 + 24) <= 1u )
    goto LABEL_18;
  *(_DWORD *)(v8 + 44) = v14;
  *(_DWORD *)(v8 + 48) = v15;
  *(_DWORD *)(v8 + 52) = v16;
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL);
  if ( *(_DWORD *)(v8 + 24) <= 2u )
    goto LABEL_18;
  *(_DWORD *)(v8 + 56) = v17;
  *(_DWORD *)(v8 + 60) = v18;
  *(_DWORD *)(v8 + 64) = v19;
  *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_zero(0LL);
  v29 = *(_DWORD *)(v8 + 24);
  if ( v29 <= 3
    || (*(_DWORD *)(v8 + 68) = v26, *(_DWORD *)(v8 + 72) = v27, *(_DWORD *)(v8 + 76) = v28, v29 == 4)
    || (*(_DWORD *)(v8 + 88) = 0, *(_QWORD *)(v8 + 80) = 0x41B0000000000000LL, v29 <= 5) )
  {
LABEL_18:
    v37 = sub_B5D6C8(v9);
    sub_B5D668(v37, 0LL);
  }
  *(_QWORD *)(v8 + 92) = 0x41B0000000000000LL;
  *(_DWORD *)(v8 + 100) = 0;
  this->fields.BASE_VIEW_POSITIONS = (struct UnityEngine_Vector3_array *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.BASE_VIEW_POSITIONS,
    (System_Int32_array **)v8,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v9 = sub_B5D5DC(UnityEngine_Vector2___TypeInfo, 6LL);
  if ( !v9 )
LABEL_19:
    sub_B5D69C(v9, v10);
  v36 = *(_DWORD *)(v9 + 24);
  if ( !v36 )
    goto LABEL_18;
  *(_QWORD *)(v9 + 32) = 0xC2C8000000000000LL;
  if ( v36 == 1 )
    goto LABEL_18;
  *(_QWORD *)(v9 + 40) = 0xC2C8000000000000LL;
  if ( v36 <= 2 )
    goto LABEL_18;
  *(_QWORD *)(v9 + 48) = 0xC2C8000000000000LL;
  if ( v36 == 3 )
    goto LABEL_18;
  *(_QWORD *)(v9 + 56) = 0xC2C8000000000000LL;
  if ( v36 <= 4 )
    goto LABEL_18;
  *(_QWORD *)(v9 + 64) = 0xC2BE000000000000LL;
  if ( v36 == 5 )
    goto LABEL_18;
  *(_QWORD *)(v9 + 72) = 0xC29A000000000000LL;
  this->fields.LIST_VIEW_ITEM_SEED_PITCH = (struct UnityEngine_Vector2_array *)v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.LIST_VIEW_ITEM_SEED_PITCH,
    (System_Int32_array **)v9,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
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
          sub_B5D560((BattleServantConfConponent_o *)&listViewManager->fields.clickFunc, 0LL, v2, v3, v4, v5, v6, v7),
          ListViewManager__DestroyList((ListViewManager_o *)listViewManager, 0LL),
          (this = (ScriptSelectDialog_o *)v9->fields.rootObject) == 0LL) )
    {
      sub_B5D69C(this, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v9->fields.callbackFunc = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&v9->fields.callbackFunc, 0LL, v10, v11, v12, v13, v14, v15);
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
        sub_B5D560(p_limitTimeLoopSe, 0LL, v20, v21, v22, v23, v24, v25);
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
  int v2; // w2
  __int64 v3; // x3
  long double v4; // q8
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *rootLimitTimeObject; // x0
  UnityEngine_GameObject_o *v13; // x20
  struct System_Single_array *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_Single_array *changeGaugeTimes; // x20
  float v22; // s0
  struct System_Single_array *v23; // x20
  float v24; // s0
  __int64 v25; // x0

  if ( (byte_42EE2F1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v6, v7, v8);
    sub_B5D5C4(&float___TypeInfo, v9, v10, v11);
    byte_42EE2F1 = 1;
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
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
      if ( rootLimitTimeObject )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)rootLimitTimeObject, 0, 0LL);
        rootLimitTimeObject = this->fields.rootLimitTimeObject;
        if ( rootLimitTimeObject )
        {
          rootLimitTimeObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              rootLimitTimeObject,
                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
          if ( rootLimitTimeObject )
          {
            LODWORD(v4) = 1.0;
            v13 = rootLimitTimeObject;
            ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, long double))rootLimitTimeObject->klass[1]._1.castClass)(
              rootLimitTimeObject,
              rootLimitTimeObject->klass[1]._1.declaringType,
              v4);
            (*(void (__fastcall **)(UnityEngine_GameObject_o *, Il2CppClass *))&v13->klass[2]._1.this_arg.bits)(
              v13,
              v13->klass[2]._1.element_class);
            v14 = (struct System_Single_array *)sub_B5D5DC(float___TypeInfo, 2LL);
            this->fields.changeGaugeTimes = v14;
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.changeGaugeTimes,
              (System_Int32_array **)v14,
              v15,
              v16,
              v17,
              v18,
              v19,
              v20);
            changeGaugeTimes = this->fields.changeGaugeTimes;
            v22 = UnityEngine_Mathf__Clamp(
                    floorf(this->fields.maxLimitTimeSeconds * 0.2),
                    1.0,
                    this->fields.maxLimitTimeSeconds,
                    0LL);
            if ( changeGaugeTimes )
            {
              if ( !changeGaugeTimes->max_length )
                goto LABEL_16;
              changeGaugeTimes->m_Items[1] = v22;
              v23 = this->fields.changeGaugeTimes;
              v24 = UnityEngine_Mathf__Clamp(
                      floorf(this->fields.maxLimitTimeSeconds * 0.5),
                      1.0,
                      this->fields.maxLimitTimeSeconds,
                      0LL);
              if ( v23 )
              {
                if ( v23->max_length > 1 )
                {
                  v23->m_Items[2] = v24;
                  ScriptSelectDialog__UpdateLimitTimeUI(this, method);
                  return;
                }
LABEL_16:
                v25 = sub_B5D6C8(rootLimitTimeObject);
                sub_B5D668(v25, 0LL);
              }
            }
          }
        }
      }
    }
LABEL_15:
    sub_B5D69C(rootLimitTimeObject, method);
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
  this = (ScriptSelectDialog_o *)UnityEngine_Mathf__Clamp_41572460(
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
    sub_B5D69C(this, *(_QWORD *)&itemCount);
  }
  if ( (unsigned int)this >= v8->max_length )
  {
LABEL_10:
    v9 = sub_B5D6C8(this);
    sub_B5D668(v9, 0LL);
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
      sub_B5D69C(0LL, index);
    SePlayer__StopSe(limitTimeLoopSe, 0.0, *(const MethodInfo **)&index);
    this->fields.limitTimeLoopSe = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.limitTimeLoopSe, 0LL, v6, v7, v8, v9, v10, v11);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *rootObject; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2
  ScriptSelectListViewManager_o *listViewManager; // x22
  ScriptSelectListViewManager_ClickDelegate_o *v21; // x23
  const MethodInfo *v22; // x4
  const MethodInfo *v23; // x4
  const MethodInfo *v24; // x1

  if ( (byte_42EE2EE & 1) == 0 )
  {
    sub_B5D5C4(
      &ScriptSelectListViewManager_ClickDelegate_TypeInfo,
      (_DWORD)selectMessageList,
      (_DWORD)fontType,
      callback);
    sub_B5D5C4(&Method_ScriptSelectDialog_OnClickSelect__, v9, v10, v11);
    byte_42EE2EE = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(rootObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  this->fields.isOpen = 1;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !selectMessageList
    || (ScriptSelectDialog__InitListViewManagerUI(this, selectMessageList->max_length, v19),
        listViewManager = this->fields.listViewManager,
        v21 = (ScriptSelectListViewManager_ClickDelegate_o *)sub_B5D694(ScriptSelectListViewManager_ClickDelegate_TypeInfo),
        ScriptSelectListViewManager_ClickDelegate___ctor(
          v21,
          (Il2CppObject *)this,
          Method_ScriptSelectDialog_OnClickSelect__,
          0LL),
        !listViewManager)
    || (ScriptSelectListViewManager__CreateList(listViewManager, selectMessageList, fontType, v21, v22),
        (rootObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0LL) )
  {
LABEL_8:
    sub_B5D69C(rootObject, selectMessageList);
  }
  ScriptSelectListViewManager__SetMode((ScriptSelectListViewManager_o *)rootObject, 2, 0, 0LL, v23);
  this->fields.limitTimeMode = 0;
  ScriptSelectDialog__InitLimitTimeUI(this, v24);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  void *rootObject; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  const MethodInfo *v33; // x2
  System_String_array *v34; // x23
  ScriptSelectListViewManager_o *listViewManager; // x24
  ScriptSelectListViewManager_ClickDelegate_o *v36; // x25
  const MethodInfo *v37; // x4
  const MethodInfo *v38; // x4
  __int64 v39; // x8
  const MethodInfo *v40; // x1
  struct SePlayer_o *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7

  if ( (byte_42EE2EF & 1) == 0 )
  {
    sub_B5D5C4(&ScriptSelectListViewManager_ClickDelegate_TypeInfo, (_DWORD)selectMessageList, (_DWORD)fontType, seName);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Take_string___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_string___, v16, v17, v18);
    sub_B5D5C4(&Method_ScriptSelectDialog_OnClickSelect__, v19, v20, v21);
    sub_B5D5C4(&SoundManager_TypeInfo, v22, v23, v24);
    byte_42EE2EF = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rootObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  this->fields.isOpen = 1;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !selectMessageList )
    goto LABEL_12;
  v32 = System_Linq_Enumerable__Take_BattleData_CommandHistory_(
          (System_Collections_Generic_IEnumerable_TSource__o *)selectMessageList,
          selectMessageList->max_length - 1,
          (const MethodInfo_1CB6E50 *)Method_System_Linq_Enumerable_Take_string___);
  rootObject = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                 v32,
                 (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_string___);
  if ( !rootObject
    || (v34 = (System_String_array *)rootObject,
        ScriptSelectDialog__InitListViewManagerUI(this, *((_DWORD *)rootObject + 6), v33),
        listViewManager = this->fields.listViewManager,
        v36 = (ScriptSelectListViewManager_ClickDelegate_o *)sub_B5D694(ScriptSelectListViewManager_ClickDelegate_TypeInfo),
        ScriptSelectListViewManager_ClickDelegate___ctor(
          v36,
          (Il2CppObject *)this,
          Method_ScriptSelectDialog_OnClickSelect__,
          0LL),
        !listViewManager)
    || (ScriptSelectListViewManager__CreateList(listViewManager, v34, fontType, v36, v37),
        (rootObject = this->fields.listViewManager) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(rootObject, selectMessageList);
  }
  ScriptSelectListViewManager__SetMode((ScriptSelectListViewManager_o *)rootObject, 2, 0, 0LL, v38);
  this->fields.limitTimeMode = 1;
  v39 = *(_QWORD *)&selectMessageList->max_length;
  this->fields.maxLimitTimeSeconds = limitTime;
  this->fields.limitTimeSeconds = limitTime;
  this->fields.selectMessageLength = v39;
  ScriptSelectDialog__InitLimitTimeUI(this, v40);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  v41 = SoundManager__playSeLoop(seName, 0LL);
  this->fields.limitTimeLoopSe = v41;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.limitTimeLoopSe,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  ScriptSelectListViewManager_o *listViewManager; // x21
  System_Action_o *v18; // x22
  UnityEngine_GameObject_o *rootLimitTimeObject; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x4
  UITweener_o *v22; // x19

  if ( (byte_42EE2F0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, index, (_DWORD)callback, method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, v11, v12, v13);
    sub_B5D5C4(&Method_ScriptSelectDialog_EndSelectDecide__, v14, v15, v16);
    byte_42EE2F0 = 1;
  }
  this->fields.index = index;
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  listViewManager = this->fields.listViewManager;
  v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_ScriptSelectDialog_EndSelectDecide__, 0LL);
  if ( !listViewManager )
    goto LABEL_10;
  ScriptSelectListViewManager__SetMode(listViewManager, 3, index, v18, v21);
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
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
      if ( rootLimitTimeObject )
      {
        v22 = (UITweener_o *)rootLimitTimeObject;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)rootLimitTimeObject, 1, 0LL);
        UITweener__ResetToBeginning(v22, 0LL);
        UITweener__PlayForward(v22, 0LL);
        return;
      }
    }
LABEL_10:
    sub_B5D69C(rootLimitTimeObject, v20);
  }
}


void __fastcall ScriptSelectDialog__SetActive(ScriptSelectDialog_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0

  if ( this->fields.isOpen )
  {
    rootObject = this->fields.rootObject;
    if ( !rootObject )
      sub_B5D69C(0LL, flag);
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
  int v2; // w2
  __int64 v3; // x3
  ScriptSelectDialog_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Single_array *changeGaugeTimes; // x8
  unsigned int max_length; // w9
  float limitTimeSeconds; // s0
  ScriptSelectDialog_o **p_limitTimeGaugeSprite; // x20
  __int64 *v15; // x8
  UILabel_o *limitTimeValueLabel; // x20
  __int64 v17; // x0
  int32_t v18; // [xsp+Ch] [xbp-14h] BYREF

  v4 = this;
  if ( (byte_42EE2F2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19895/*"img_timer_meter_yellow"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_19893/*"img_timer_meter_blue"*/, v5, v6, v7);
    this = (ScriptSelectDialog_o *)sub_B5D5C4(&StringLiteral_19894/*"img_timer_meter_red"*/, v8, v9, v10);
    byte_42EE2F2 = 1;
  }
  v18 = 0;
  changeGaugeTimes = v4->fields.changeGaugeTimes;
  if ( !changeGaugeTimes )
LABEL_16:
    sub_B5D69C(this, method);
  max_length = changeGaugeTimes->max_length;
  if ( !max_length )
    goto LABEL_17;
  limitTimeSeconds = v4->fields.limitTimeSeconds;
  if ( limitTimeSeconds > changeGaugeTimes->m_Items[1] )
  {
    if ( max_length > 1 )
    {
      p_limitTimeGaugeSprite = (ScriptSelectDialog_o **)&v4->fields.limitTimeGaugeSprite;
      this = (ScriptSelectDialog_o *)v4->fields.limitTimeGaugeSprite;
      if ( !this )
        goto LABEL_16;
      if ( limitTimeSeconds <= changeGaugeTimes->m_Items[2] )
        v15 = &StringLiteral_19895/*"img_timer_meter_yellow"*/;
      else
        v15 = &StringLiteral_19893/*"img_timer_meter_blue"*/;
      goto LABEL_13;
    }
LABEL_17:
    v17 = sub_B5D6C8(this);
    sub_B5D668(v17, 0LL);
  }
  p_limitTimeGaugeSprite = (ScriptSelectDialog_o **)&v4->fields.limitTimeGaugeSprite;
  this = (ScriptSelectDialog_o *)v4->fields.limitTimeGaugeSprite;
  if ( !this )
    goto LABEL_16;
  v15 = &StringLiteral_19894/*"img_timer_meter_red"*/;
LABEL_13:
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v15, 0LL);
  this = *p_limitTimeGaugeSprite;
  if ( !*p_limitTimeGaugeSprite )
    goto LABEL_16;
  UIBasicSprite__set_fillAmount(
    (UIBasicSprite_o *)this,
    v4->fields.limitTimeSeconds / v4->fields.maxLimitTimeSeconds,
    0LL);
  limitTimeValueLabel = v4->fields.limitTimeValueLabel;
  v18 = UnityEngine_Mathf__CeilToInt(v4->fields.limitTimeSeconds, 0LL);
  this = (ScriptSelectDialog_o *)System_Int32__ToString((int32_t)&v18, 0LL);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E5D19 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, index, (_DWORD)callback, object);
    byte_42E5D19 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall ScriptSelectDialog_ClickDelegate__EndInvoke(
        ScriptSelectDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectDialog_ClickDelegate__Invoke(
        ScriptSelectDialog_ClickDelegate_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  ScriptSelectDialog_ClickDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  ScriptSelectDialog_ClickDelegate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(_QWORD, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  ScriptSelectDialog_ClickDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (ScriptSelectDialog_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(_QWORD, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&index, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int)index, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, (unsigned int)index, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, (unsigned int)index, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            (unsigned int)index,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, (unsigned int)index, v21);
    goto LABEL_37;
  }
}