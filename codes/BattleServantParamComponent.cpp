void __fastcall BattleServantParamComponent___cctor(const MethodInfo *method)
{
  if ( (byte_438E1E9 & 1) == 0 )
  {
    sub_B775C4(&BattleServantParamComponent_TypeInfo);
    byte_438E1E9 = 1;
  }
  LODWORD(BattleServantParamComponent_TypeInfo->static_fields->SideEffectShowWaitTime) = (struct BattleServantParamComponent_StaticFields)1065353216;
}


void __fastcall BattleServantParamComponent___ctor(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  float v17; // s4
  float v18; // s5
  float v19; // s6
  float v20; // s7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct UnityEngine_Color_o v35; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438E1E8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
    sub_B775C4(&UnityEngine_GameObject___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__);
    sub_B775C4(&System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo);
    byte_438E1E8 = 1;
  }
  v3 = (struct UnityEngine_GameObject_array *)sub_B775DC(UnityEngine_GameObject___TypeInfo, 1LL);
  this->fields.effectobj = v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.effectobj, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B77694(System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v10,
    (const MethodInfo_2F22A90 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__);
  this->fields.sideEffectShowQueue = (struct System_Collections_Generic_Queue_BattleActionData_BuffData__o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.sideEffectShowQueue,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  *(UnityEngine_Vector3_o *)&v36.fields.r = UnityEngine_Vector3__get_one(0LL);
  this->fields.sideEffectLabelWidth = 100.0;
  this->fields.sideEffectScl.fields.x = v36.fields.r;
  v36.fields.r = 0.3;
  this->fields.sideEffectScl.fields.y = v36.fields.g;
  this->fields.sideEffectScl.fields.z = v36.fields.b;
  v36.fields.a = 1.0;
  v36.fields.g = 0.3;
  v36.fields.b = 0.3;
  v35 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor(v36, v17, v18, v19, v20, (const MethodInfo *)&v35);
  this->fields.GRAY = v35;
  this->fields.isActiveHpBar = 1;
  v21 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v21,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.classIconEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v21;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.classIconEffectDict,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v28,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.commandSpellEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v28;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.commandSpellEffectDict,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleServantParamComponent__AddClassIconEffect(
        BattleServantParamComponent_o *this,
        int32_t effectId,
        int32_t priority,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v6; // x1

  v6 = BattleServantParamComponent__CoAddClassIconEffect(this, effectId, priority, servantData, method);
  UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
}


void __fastcall BattleServantParamComponent__ClassIconEffectStartStop(
        BattleServantParamComponent_o *this,
        bool isStart,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleServantParamComponent__EffectStartStop(this, this->fields.classIconEffectDict, isStart, v3);
}


System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__CoAddClassIconEffect(
        BattleServantParamComponent_o *this,
        int32_t effectId,
        int32_t priority,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_438E1E6 & 1) == 0 )
  {
    sub_B775C4(&BattleServantParamComponent__CoAddClassIconEffect_d__122_TypeInfo);
    byte_438E1E6 = 1;
  }
  v9 = sub_B77694(BattleServantParamComponent__CoAddClassIconEffect_d__122_TypeInfo);
  BattleServantParamComponent__CoAddClassIconEffect_d__122___ctor(
    (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_B7769C(v10, v11);
  *(_QWORD *)(v9 + 40) = this;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 40), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 32) = effectId;
  *(_DWORD *)(v9 + 48) = priority;
  *(_QWORD *)(v9 + 64) = servantData;
  sub_B77560(
    (BattleServantConfConponent_o *)(v9 + 64),
    (System_Int32_array **)servantData,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall BattleServantParamComponent__CommandSpellEffectStartStop(
        BattleServantParamComponent_o *this,
        bool isStart,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleServantParamComponent__EffectStartStop(this, this->fields.commandSpellEffectDict, isStart, v3);
}


void __fastcall BattleServantParamComponent__ComplateUpdateShiftHplabel(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *data; // x0
  int32_t NowHp; // w1
  const MethodInfo *v5; // x2

  data = this->fields.data;
  if ( !data )
    sub_B7769C(0LL, method);
  NowHp = BattleServantData__getNowHp(data, 0LL);
  BattleServantParamComponent__updateShiftHplabel(this, NowHp, v5);
}


void __fastcall BattleServantParamComponent__DelayCoroutine(
        BattleServantParamComponent_o *this,
        float waitTime,
        BattleCallBackBase_o *callBack,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  v5 = BattleServantParamComponent__DelayMethod(this, waitTime, callBack, method);
  UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__DelayMethod(
        BattleServantParamComponent_o *this,
        float waitTime,
        BattleCallBackBase_o *callBack,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_438E1DF & 1) == 0 )
  {
    sub_B775C4(&BattleServantParamComponent__DelayMethod_d__113_TypeInfo);
    byte_438E1DF = 1;
  }
  v6 = sub_B77694(BattleServantParamComponent__DelayMethod_d__113_TypeInfo);
  BattleServantParamComponent__DelayMethod_d__113___ctor(
    (BattleServantParamComponent__DelayMethod_d__113_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B7769C(v7, v8);
  *(float *)(v6 + 32) = waitTime;
  *(_QWORD *)(v6 + 40) = callBack;
  sub_B77560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)callBack, v9, v10, v11, v12, v13, v14);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleServantParamComponent__DeleteSkillRankUpEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  struct BattleServantSkillIConComponent_array *skillIcon; // x19
  int max_length; // w8
  unsigned int v4; // w20
  __int64 v5; // x0

  skillIcon = this->fields.skillIcon;
  if ( !skillIcon )
    goto LABEL_9;
  max_length = skillIcon->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
      {
        v5 = sub_B776C8(this);
        sub_B77668(v5, 0LL);
      }
      this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
      if ( !this )
        break;
      BattleServantSkillIConComponent__DeleteRankUpEffect((BattleServantSkillIConComponent_o *)this, method);
      max_length = skillIcon->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_B7769C(this, method);
  }
}


void __fastcall BattleServantParamComponent__DestroyAllEffect(
        BattleServantParamComponent_o *this,
        System_Collections_Generic_Dictionary_int__GameObject__o *effectDict,
        bool forceDestroy,
        const MethodInfo *method)
{
  System_Int32_array *IsNullOrEmpty; // x0
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  const MethodInfo *v9; // x4
  __int64 v10; // x8
  System_Int32_array *v11; // x21
  unsigned __int64 v12; // x22
  bool v13; // w20
  __int64 v14; // x0

  if ( (byte_438E1E4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_438E1E4 = 1;
  }
  IsNullOrEmpty = (System_Int32_array *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)effectDict, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !effectDict
      || (Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
                   (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)effectDict,
                   (const MethodInfo_2FF3D84 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__),
          (IsNullOrEmpty = System_Linq_Enumerable__ToArray_int_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                             (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___)) == 0LL) )
    {
      sub_B7769C(IsNullOrEmpty, v7);
    }
    v10 = *(_QWORD *)&IsNullOrEmpty->max_length;
    v11 = IsNullOrEmpty;
    if ( (int)v10 >= 1 )
    {
      v12 = 0LL;
      v13 = forceDestroy;
      do
      {
        if ( v12 >= (unsigned int)v10 )
        {
          v14 = sub_B776C8(IsNullOrEmpty);
          sub_B77668(v14, 0LL);
        }
        BattleServantParamComponent__DestroyEffectObject(
          (BattleServantParamComponent_o *)IsNullOrEmpty,
          effectDict,
          v11->m_Items[v12 + 1],
          v13,
          v9);
        LODWORD(v10) = v11->max_length;
        ++v12;
      }
      while ( (__int64)v12 < (int)v10 );
    }
  }
}


void __fastcall BattleServantParamComponent__DestroyEffectObject(
        BattleServantParamComponent_o *this,
        System_Collections_Generic_Dictionary_int__GameObject__o *effectDict,
        int32_t id,
        bool forceDestroy,
        const MethodInfo *method)
{
  __int64 v8; // x19
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  WarBoardEvalValueSquare_EvalValueSquare_o **v17; // x20
  System_Collections_ICollection_o *v18; // x0
  UITexture_o *v19; // x20
  System_Action_o *v20; // x21
  UnityEngine_Object_o *v21; // x21
  UITexture_o *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438E1E5 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_B775C4(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_BattleServantParamComponent___c__DisplayClass120_0__DestroyEffectObject_b__0__);
    sub_B775C4(&BattleServantParamComponent___c__DisplayClass120_0_TypeInfo);
    byte_438E1E5 = 1;
  }
  component = 0LL;
  v8 = sub_B77694(BattleServantParamComponent___c__DisplayClass120_0_TypeInfo);
  BattleServantParamComponent___c__DisplayClass120_0___ctor(
    (BattleServantParamComponent___c__DisplayClass120_0_o *)v8,
    0LL);
  if ( !v8 )
    goto LABEL_20;
  *(_QWORD *)(v8 + 16) = effectDict;
  v17 = (WarBoardEvalValueSquare_EvalValueSquare_o **)(v8 + 16);
  sub_B77560((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)effectDict, v11, v12, v13, v14, v15, v16);
  v18 = *(System_Collections_ICollection_o **)(v8 + 16);
  *(_DWORD *)(v8 + 24) = id;
  if ( !BasicHelper__IsNullOrEmpty(v18, 0LL) )
  {
    Item = *v17;
    if ( !*v17 )
      goto LABEL_20;
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Item,
           *(_DWORD *)(v8 + 24),
           (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    {
      if ( !forceDestroy )
      {
        Item = *v17;
        if ( !*v17 )
          goto LABEL_20;
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Item,
                 *(_DWORD *)(v8 + 24),
                 (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
        if ( !Item )
          goto LABEL_20;
        if ( UnityEngine_GameObject__TryGetComponent_UITexture_(
               (UnityEngine_GameObject_o *)Item,
               &component,
               (const MethodInfo_1DEC764 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
        {
          v19 = component;
          v20 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
          System_Action___ctor(
            v20,
            (Il2CppObject *)v8,
            Method_BattleServantParamComponent___c__DisplayClass120_0__DestroyEffectObject_b__0__,
            0LL);
          if ( v19 )
          {
            ((void (__fastcall *)(UITexture_o *, __int64, System_Action_o *, Il2CppMethodPointer))v19->klass->vtable._8_set_alpha.method)(
              v19,
              1LL,
              v20,
              v19->klass->vtable._9_CalculateFinalAlpha.methodPtr);
            return;
          }
LABEL_20:
          sub_B7769C(Item, v10);
        }
      }
      Item = *v17;
      if ( !*v17 )
        goto LABEL_20;
      v21 = (UnityEngine_Object_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Item,
                                      *(_DWORD *)(v8 + 24),
                                      (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36309980(v21, 0LL);
      Item = *v17;
      if ( !*v17 )
        goto LABEL_20;
      System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
        (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)Item,
        *(_DWORD *)(v8 + 24),
        (const MethodInfo_2FF5B54 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    }
  }
}


void __fastcall BattleServantParamComponent__EffectStartStop(
        BattleServantParamComponent_o *this,
        System_Collections_Generic_Dictionary_int__GameObject__o *effectDict,
        bool isStart,
        const MethodInfo *method)
{
  Il2CppObject *currentValue; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v10; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v11; // [xsp+20h] [xbp-50h] BYREF
  UITexture_o *component; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_438E1E7 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (BattleServantParamComponent_o *)sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
    byte_438E1E7 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  component = 0LL;
  if ( !effectDict
    || (this = (BattleServantParamComponent_o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                                                  (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)effectDict,
                                                  (const MethodInfo_2FF3F1C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
    sub_B7769C(this, effectDict);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v10,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_2648B20 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
            &v11,
            (const MethodInfo_2889594 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    currentValue = v11.fields.currentValue;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)currentValue, 0LL, 0LL);
    if ( !v7 )
    {
      if ( !currentValue )
        sub_B7769C(v7, v8);
      if ( UnityEngine_GameObject__TryGetComponent_UITexture_(
             (UnityEngine_GameObject_o *)currentValue,
             &component,
             (const MethodInfo_1DEC764 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentValue, 1, 0LL);
        if ( isStart )
        {
          if ( !component )
            sub_B7769C(0LL, v9);
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)component, 0LL);
        }
        else
        {
          if ( !component )
            sub_B7769C(0LL, v9);
          ((void (__fastcall *)(UITexture_o *, _QWORD, _QWORD, Il2CppMethodPointer))component->klass->vtable._9_CalculateFinalAlpha.method)(
            component,
            0LL,
            0LL,
            component->klass->vtable._10_get_localCorners.methodPtr);
        }
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentValue, isStart, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
    &v11,
    (const MethodInfo_2889590 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
}


void __fastcall BattleServantParamComponent__ForceDestroyAllEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x3

  BattleServantParamComponent__DestroyAllEffect(this, this->fields.classIconEffectDict, 1, v2);
  BattleServantParamComponent__DestroyAllEffect(this, this->fields.commandSpellEffectDict, 1, v4);
}


void __fastcall BattleServantParamComponent__InitNextTdGauge(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nextTdGauge; // x20
  struct BattleServantData_o *data; // x0
  BattleNextTDgaugeComponent_o *v5; // x19
  int32_t nexttpturn; // w20
  int32_t maxtpturn; // w21
  _BOOL8 isTDSeraled; // x0
  __int64 v9; // x1

  if ( (byte_438E1D5 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1D5 = 1;
  }
  nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nextTdGauge, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( data )
    {
      v5 = this->fields.nextTdGauge;
      nexttpturn = data->fields.nexttpturn;
      maxtpturn = data->fields.maxtpturn;
      isTDSeraled = BattleServantData__isTDSeraled(data, 0LL);
      if ( !v5 )
        sub_B7769C(isTDSeraled, v9);
      BattleNextTDgaugeComponent__setInitGauge(v5, nexttpturn, maxtpturn, isTDSeraled, 0LL);
    }
  }
}


void __fastcall BattleServantParamComponent__OnClick(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x2
  struct BattleServantData_o *data; // x8
  UnityEngine_GameObject_o *v6; // x19
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  int32_t uniqueId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438E1B4 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_21678/*"onClickServant"*/);
    byte_438E1B4 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) && this->fields.uniqueID != -1 )
  {
    data = this->fields.data;
    if ( data )
    {
      v6 = this->fields.target;
      uniqueId = data->fields.uniqueId;
      v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &uniqueId, v4);
      if ( !v6 )
        sub_B7769C(v7, v8);
      UnityEngine_GameObject__SendMessage_41438516(v6, (System_String_o *)StringLiteral_21678/*"onClickServant"*/, v7, 0LL);
    }
  }
}


void __fastcall BattleServantParamComponent__OnCompleteShiftGaugeChangeHp(
        BattleServantParamComponent_o *this,
        BattleAction_BasePlayShiftGauge_o *playShiftGauge,
        const MethodInfo *method)
{
  if ( !playShiftGauge )
    sub_B7769C(this, 0LL);
  BattleServantParamComponent__OnUpdateShiftGaugeChangeHp(
    this,
    playShiftGauge->fields._ChangeToHp_k__BackingField,
    method);
  ((void (__fastcall *)(BattleAction_BasePlayShiftGauge_o *, BattleServantParamComponent_o *, Il2CppMethodPointer))playShiftGauge->klass->vtable._6_OnCompleteChangeHp.method)(
    playShiftGauge,
    this,
    playShiftGauge->klass->vtable._7_Init.methodPtr);
}


void __fastcall BattleServantParamComponent__OnUpdateShiftGaugeChangeHp(
        BattleServantParamComponent_o *this,
        int32_t nowHp,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  UnityEngine_Object_o *hpGauge; // x21
  __int64 v7; // x1
  BattleHpGaugeBarComponent_o *v8; // x0

  if ( (byte_438E1D8 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1D8 = 1;
  }
  BattleServantParamComponent__updateHplabel(this, nowHp, this->fields.shiftGaugeMaxHp, 0, v3);
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL) )
  {
    v8 = this->fields.hpGauge;
    if ( !v8
      || (BattleHpGaugeBarComponent__updateDamageGauge(v8, (float)nowHp / (float)this->fields.shiftGaugeMaxHp, 0LL),
          (v8 = this->fields.hpGauge) == 0LL) )
    {
      sub_B7769C(v8, v7);
    }
    BattleHpGaugeBarComponent__updateNomalGauge(v8, nowHp, 0LL);
  }
}


void __fastcall BattleServantParamComponent__PlayDownShiftEffect(
        BattleServantParamComponent_o *this,
        int32_t index,
        BattleServantHpShiftComponent_EffectData_o *effectData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x6
  BattleServantHpShiftComponent_o *v10; // x0
  const MethodInfo *v11; // x4
  float nextAnimationTime; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438E1D3 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1D3 = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
  {
    v10 = this->fields.hpShift;
    if ( !v10
      || (BattleServantHpShiftComponent__PlayShiftEffectGeneral(
            v10,
            index,
            effectData,
            this,
            &nextAnimationTime,
            0LL,
            v9),
          (v10 = this->fields.hpShift) == 0LL) )
    {
      sub_B7769C(v10, v8);
    }
    BattleServantHpShiftComponent__UpdateIcon(v10, index, 1, 1, v11);
  }
}


float __fastcall BattleServantParamComponent__PlayShiftEffectGeneral(
        BattleServantParamComponent_o *this,
        int32_t index,
        BattleServantHpShiftComponent_EffectData_o *effectData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x22
  bool v8; // w0
  __int64 v9; // x1
  const MethodInfo *v10; // x6
  float result; // s0
  BattleServantHpShiftComponent_o *v12; // x0
  float nextAnimationTime; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438E1D1 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1D1 = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL);
  result = 0.0;
  if ( v8 )
  {
    v12 = this->fields.hpShift;
    if ( !v12 )
      sub_B7769C(0LL, v9);
    BattleServantHpShiftComponent__PlayShiftEffectGeneral(v12, index, effectData, this, &nextAnimationTime, 0LL, v10);
    return nextAnimationTime;
  }
  return result;
}


void __fastcall BattleServantParamComponent__PlayUpShiftEffect(
        BattleServantParamComponent_o *this,
        int32_t index,
        float delayTime,
        BattleServantHpShiftComponent_EffectData_o *effectData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x22
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  BattleServantHpShiftComponent_o *v12; // x0
  const MethodInfo *v13; // x6
  Il2CppObject *v14; // x21
  System_Action_int__bool__bool__o *v15; // x22
  BattleCallBack_int__bool__bool__o *v16; // x21
  BattleServantParamComponent_o *v17; // x0
  const MethodInfo *v18; // x2
  System_Collections_IEnumerator_o *v19; // x0
  float nextAnimationTime; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438E1D2 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_int__bool__bool___ctor__);
    sub_B775C4(&System_Action_int__bool__bool__TypeInfo);
    sub_B775C4(&Method_BattleCallBack_int__bool__bool___ctor__);
    sub_B775C4(&BattleCallBack_int__bool__bool__TypeInfo);
    sub_B775C4(&Method_BattleServantHpShiftComponent_UpdateIcon__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1D2 = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
  {
    v12 = this->fields.hpShift;
    if ( !v12
      || (BattleServantHpShiftComponent__UpdateIconActive(v12, index, 1, v11), (v12 = this->fields.hpShift) == 0LL) )
    {
      sub_B7769C(v12, v10);
    }
    BattleServantHpShiftComponent__PlayShiftEffectGeneral(v12, index, effectData, this, &nextAnimationTime, 0LL, v13);
    v14 = (Il2CppObject *)this->fields.hpShift;
    v15 = (System_Action_int__bool__bool__o *)sub_B77694(System_Action_int__bool__bool__TypeInfo);
    System_Action_int__bool__bool____ctor(
      v15,
      v14,
      Method_BattleServantHpShiftComponent_UpdateIcon__,
      (const MethodInfo_26AF994 *)Method_System_Action_int__bool__bool___ctor__);
    v16 = (BattleCallBack_int__bool__bool__o *)sub_B77694(BattleCallBack_int__bool__bool__TypeInfo);
    BattleCallBack_int__bool__bool____ctor(
      v16,
      index,
      0,
      1,
      (System_Action_T1__T2__T3__o *)v15,
      (const MethodInfo_2CAE284 *)Method_BattleCallBack_int__bool__bool___ctor__);
    v19 = BattleServantParamComponent__DelayMethod(v17, delayTime, (BattleCallBackBase_o *)v16, v18);
    UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v19, 0LL);
  }
}


void __fastcall BattleServantParamComponent__RemoveEffectClearRankUpBuff(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  struct BattleServantSkillIConComponent_array *skillIcon; // x19
  int max_length; // w8
  unsigned int v4; // w20
  __int64 v5; // x0

  skillIcon = this->fields.skillIcon;
  if ( !skillIcon )
    goto LABEL_9;
  max_length = skillIcon->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
      {
        v5 = sub_B776C8(this);
        sub_B77668(v5, 0LL);
      }
      this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
      if ( !this )
        break;
      BattleServantSkillIConComponent__RemoveEffectClearRankUpBuff((BattleServantSkillIConComponent_o *)this, method);
      max_length = skillIcon->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_B7769C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__SetEnemyParamPosition(
        BattleServantParamComponent_o *this,
        BaseEnemyParamPosData_o *paramPosData,
        const MethodInfo *method)
{
  UnityEngine_Component_o *showBuffComponent; // x0
  UnityEngine_Transform_o *v6; // x21
  float v7; // s0
  float v8; // s1
  float v9; // s2
  int v10; // s0
  struct BattleServantShowBuffComponent_o *v13; // x20

  showBuffComponent = (UnityEngine_Component_o *)this->fields.showBuffComponent;
  if ( !showBuffComponent )
    goto LABEL_8;
  showBuffComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(showBuffComponent, 0LL);
  if ( !this->fields.showBuffComponent
    || (v6 = (UnityEngine_Transform_o *)showBuffComponent,
        (showBuffComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)this->fields.showBuffComponent,
                                                          0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)showBuffComponent,
                                          0LL),
        !paramPosData)
    || (showBuffComponent = (UnityEngine_Component_o *)((__int64 (__fastcall *)(BaseEnemyParamPosData_o *, Il2CppMethodPointer, float, float, float))paramPosData->klass->vtable._6_GetSvtBuffLocalPos.method)(
                                                         paramPosData,
                                                         paramPosData->klass->vtable._7_get_BuffIconMaxLine.methodPtr,
                                                         v7,
                                                         v8,
                                                         v9),
        !v6)
    || (UnityEngine_Transform__set_localPosition(v6, *(UnityEngine_Vector3_o *)&v10, 0LL),
        v13 = this->fields.showBuffComponent,
        showBuffComponent = (UnityEngine_Component_o *)((__int64 (__fastcall *)(BaseEnemyParamPosData_o *, void *))paramPosData->klass->vtable._7_get_BuffIconMaxLine.method)(
                                                         paramPosData,
                                                         paramPosData->klass[1]._1.image),
        !v13) )
  {
LABEL_8:
    sub_B7769C(showBuffComponent, paramPosData);
  }
  v13->fields.maxLine = (int)showBuffComponent;
}


void __fastcall BattleServantParamComponent__UpdateClassIconEffect(
        BattleServantParamComponent_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v4; // x19
  System_Collections_ICollection_o *ClassIconEffectBuffList; // x23
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_int__o *v8; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x22
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x27
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x4
  System_Collections_IEnumerator_o *v16; // x0
  UnityEngine_Coroutine_o *started; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *classIconEffectDict; // x0
  int32_t v21; // w20
  _BOOL8 v22; // x0
  const MethodInfo *v23; // x4
  BattleServantParamComponent_o *v24; // x0
  const MethodInfo *v25; // x4
  int v26; // w19
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-B8h] BYREF
  int v28[2]; // [xsp+20h] [xbp-A0h]
  int v29; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+50h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+78h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_438E1E3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_AuraEffectMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    this = (BattleServantParamComponent_o *)sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_438E1E3 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  entity = 0LL;
  memset(&v30, 0, sizeof(v30));
  v29 = 0;
  if ( !servantData )
    goto LABEL_38;
  this = (BattleServantParamComponent_o *)BattleServantData__get_BuffData(servantData, 0LL);
  if ( !this )
    goto LABEL_38;
  ClassIconEffectBuffList = (System_Collections_ICollection_o *)BattleBuffData__GetClassIconEffectBuffList(
                                                                  (BattleBuffData_o *)this,
                                                                  0LL);
  if ( BasicHelper__IsNullOrEmpty(ClassIconEffectBuffList, 0LL) )
  {
    BattleServantParamComponent__DestroyAllEffect(v4, v4->fields.classIconEffectDict, 0, v6);
    BattleServantParamComponent__DestroyAllEffect(v4, v4->fields.commandSpellEffectDict, 0, v7);
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleServantParamComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_AuraEffectMaster___);
  if ( !v4->fields.classIconEffectDict )
    goto LABEL_38;
  v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
  this = (BattleServantParamComponent_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
                                            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v4->fields.classIconEffectDict,
                                            (const MethodInfo_2FF3D74 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
  if ( (int)this <= 0 )
    v4->fields.currentClassIconAuraEffectPriority = 0;
  if ( !ClassIconEffectBuffList )
    goto LABEL_38;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ClassIconEffectBuffList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v31 = v27;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v10 )
      break;
    current = v31.fields.current;
    if ( !v31.fields.current )
      sub_B7769C(v10, v11);
    if ( !v9 )
      sub_B7769C(v10, v11);
    v13 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v9,
            &entity,
            (int32_t)v31.fields.current[21].monitor,
            (const MethodInfo_21FB8F0 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    if ( v13 )
    {
      if ( !entity )
        sub_B7769C(v13, v14);
      v16 = BattleServantParamComponent__CoAddClassIconEffect(
              v4,
              *(&entity->fields.id + 1),
              (int32_t)entity->fields.age,
              servantData,
              v15);
      started = UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)v4, v16, 0LL);
      if ( !v8 )
        sub_B7769C(started, v18);
      if ( !System_Collections_Generic_List_int___Contains(
              v8,
              (int32_t)current[21].monitor,
              (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
        System_Collections_Generic_List_int___Add(
          v8,
          (int32_t)current[21].monitor,
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v28[0] = 182;
  v29 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  v29 = 0;
  if ( !v8 )
LABEL_38:
    sub_B7769C(this, servantData);
  System_Collections_Generic_List_int___GetEnumerator(
    &v27,
    v8,
    (const MethodInfo_30E6C2C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v30 = v27;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v30,
            (const MethodInfo_225A1B4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    classIconEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v4->fields.classIconEffectDict;
    if ( !classIconEffectDict )
      sub_B7769C(0LL, v19);
    v21 = (int32_t)v30.fields.current;
    v22 = System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
            classIconEffectDict,
            (int32_t)v30.fields.current,
            (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    if ( !v22 )
    {
      BattleServantParamComponent__DestroyEffectObject(
        (BattleServantParamComponent_o *)v22,
        v4->fields.classIconEffectDict,
        v21,
        0,
        v23);
      BattleServantParamComponent__DestroyEffectObject(v24, v4->fields.commandSpellEffectDict, v21, 0, v25);
    }
  }
  v28[0] = 271;
  v26 = ++v29;
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v30,
    (const MethodInfo_225A1B0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v26 && v28[v26 - 1] == 271 )
    v29 = v26 - 1;
}


void __fastcall BattleServantParamComponent__UpdateNameLabel(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nameLabel; // x20
  __int64 v4; // x1
  BattleServantData_o *data; // x0
  UILabel_o *v6; // x19

  if ( (byte_438E1E1 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1E1 = 1;
  }
  if ( this->fields.data )
  {
    nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( !data
        || (v6 = this->fields.nameLabel, data = (BattleServantData_o *)BattleServantData__getServantName(data, 0LL), !v6) )
      {
        sub_B7769C(data, v4);
      }
      UILabel__set_text(v6, (System_String_o *)data, 0LL);
    }
  }
}


void __fastcall BattleServantParamComponent__UpdateNpImmediately(
        BattleServantParamComponent_o *this,
        int32_t np,
        const MethodInfo *method)
{
  UnityEngine_Object_o *npcomp; // x21
  __int64 v6; // x1
  BattleNpGaugeSystemComponent_o *v7; // x0

  if ( (byte_438E1BE & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1BE = 1;
  }
  npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL) )
  {
    v7 = this->fields.npcomp;
    if ( !v7 )
      sub_B7769C(0LL, v6);
    BattleNpGaugeSystemComponent__setNowParam(v7, np, 0LL);
  }
}


void __fastcall BattleServantParamComponent__UpdateShiftChange(
        BattleServantParamComponent_o *this,
        int32_t curGaugeIndex,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpChange; // x21
  __int64 v6; // x1
  BattleServantChangeBarComponent_o *v7; // x0

  if ( (byte_438E1D4 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1D4 = 1;
  }
  hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(hpChange, 0LL, 0LL) )
  {
    v7 = this->fields.hpChange;
    if ( !v7 )
      sub_B7769C(0LL, v6);
    BattleServantChangeBarComponent__setBarType(v7, 1, curGaugeIndex, 0LL);
  }
}


void __fastcall BattleServantParamComponent__UpdateShiftGaugeChangeHp(
        BattleServantParamComponent_o *this,
        int32_t fromHp,
        int32_t toHp,
        int32_t maxHp,
        float time,
        BattleAction_BasePlayShiftGauge_o *playShiftGauge,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpGauge; // x24
  BattleHpGaugeBarComponent_o *v14; // x0
  __int64 v15; // x1
  System_Collections_Hashtable_o *v16; // x22
  __int64 v17; // x2
  __int64 v18; // x2
  __int64 v19; // x0
  __int64 v20; // x2
  __int64 v21; // x0
  __int64 v22; // x2
  __int64 v23; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  char v25[4]; // [xsp+8h] [xbp-48h] BYREF
  float v26; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v27; // [xsp+18h] [xbp-38h] BYREF
  int32_t v28; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_438E1D7 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    sub_B775C4(&System_Collections_Hashtable_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&StringLiteral_19296/*"from"*/);
    sub_B775C4(&StringLiteral_19801/*"ignoretimescale"*/);
    sub_B775C4(&StringLiteral_23154/*"time"*/);
    sub_B775C4(&StringLiteral_21703/*"oncompleteparams"*/);
    sub_B775C4(&StringLiteral_21711/*"onupdate"*/);
    sub_B775C4(&StringLiteral_10254/*"OnUpdateShiftGaugeChangeHp"*/);
    sub_B775C4(&StringLiteral_10162/*"OnCompleteShiftGaugeChangeHp"*/);
    sub_B775C4(&StringLiteral_23192/*"to"*/);
    sub_B775C4(&StringLiteral_21702/*"oncomplete"*/);
    sub_B775C4(&iTween_TypeInfo);
    byte_438E1D7 = 1;
  }
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = (BattleHpGaugeBarComponent_o *)UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL);
  if ( ((unsigned __int8)v14 & 1) != 0 )
  {
    v14 = this->fields.hpGauge;
    if ( !v14 )
      goto LABEL_15;
    BattleHpGaugeBarComponent__setInitValue(v14, fromHp, maxHp, 0LL);
  }
  this->fields.shiftGaugeMaxHp = maxHp;
  if ( !playShiftGauge
    || (playShiftGauge->fields._ChangeToHp_k__BackingField = toHp,
        v16 = (System_Collections_Hashtable_o *)sub_B77694(System_Collections_Hashtable_TypeInfo),
        System_Collections_Hashtable___ctor_39511352(v16, 0LL),
        v28 = fromHp,
        v14 = (BattleHpGaugeBarComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v17),
        !v16) )
  {
LABEL_15:
    sub_B7769C(v14, v15);
  }
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, BattleHpGaugeBarComponent_o *, Il2CppMethodPointer))v16->klass->vtable._23_Add.method)(
    v16,
    StringLiteral_19296/*"from"*/,
    v14,
    v16->klass->vtable._24_Clear.methodPtr);
  v27 = toHp;
  v19 = j_il2cpp_value_box_0(int_TypeInfo, &v27, v18);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v16->klass->vtable._23_Add.method)(
    v16,
    StringLiteral_23192/*"to"*/,
    v19,
    v16->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v16->klass->vtable._23_Add.method)(
    v16,
    StringLiteral_21711/*"onupdate"*/,
    StringLiteral_10254/*"OnUpdateShiftGaugeChangeHp"*/,
    v16->klass->vtable._24_Clear.methodPtr);
  v26 = time;
  v21 = j_il2cpp_value_box_0(float_TypeInfo, &v26, v20);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v16->klass->vtable._23_Add.method)(
    v16,
    StringLiteral_23154/*"time"*/,
    v21,
    v16->klass->vtable._24_Clear.methodPtr);
  v25[0] = 1;
  v23 = j_il2cpp_value_box_0(bool_TypeInfo, v25, v22);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v16->klass->vtable._23_Add.method)(
    v16,
    StringLiteral_19801/*"ignoretimescale"*/,
    v23,
    v16->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v16->klass->vtable._23_Add.method)(
    v16,
    StringLiteral_21702/*"oncomplete"*/,
    StringLiteral_10162/*"OnCompleteShiftGaugeChangeHp"*/,
    v16->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, BattleAction_BasePlayShiftGauge_o *, Il2CppMethodPointer))v16->klass->vtable._23_Add.method)(
    v16,
    StringLiteral_21703/*"oncompleteparams"*/,
    playShiftGauge,
    v16->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ValueTo(gameObject, v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__UpdateShortNameLabel(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *shortNameLabel; // x20
  __int64 defaultShortNameLabelWidth; // x1
  BattleServantData_o *data; // x0
  int32_t EnemyNameEffect; // w0
  struct UnityEngine_GameObject_o **p_enemyNameEffectPrefab; // x20
  UnityEngine_Object_o *enemyNameEffectPrefab; // x22
  int32_t v9; // w21
  UnityEngine_Object_o *v10; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *NameEffectPath; // x21
  AssetData_o *AssetStorage; // x0
  UILabel_o *v14; // x21
  UnityEngine_Transform_o *transform; // x22
  System_Int32_array **v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UILabel_o *v23; // x20
  __int64 v24; // x8
  float v25; // s8
  float v26; // s1
  float v27; // s2
  float v28; // s0

  if ( (byte_438E1E2 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject____69541584);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    sub_B775C4(&StringLiteral_16994/*"battle_name"*/);
    byte_438E1E2 = 1;
  }
  if ( this->fields.data )
  {
    shortNameLabel = (UnityEngine_Object_o *)this->fields.shortNameLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(shortNameLabel, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_50;
      EnemyNameEffect = BattleServantData__getEnemyNameEffect(data, 0LL);
      p_enemyNameEffectPrefab = &this->fields.enemyNameEffectPrefab;
      enemyNameEffectPrefab = (UnityEngine_Object_o *)this->fields.enemyNameEffectPrefab;
      v9 = EnemyNameEffect;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(enemyNameEffectPrefab, 0LL, 0LL) )
      {
        v10 = (UnityEngine_Object_o *)*p_enemyNameEffectPrefab;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_36309980(v10, 0LL);
      }
      if ( v9 )
      {
        data = (BattleServantData_o *)this->fields.shortNameLabel;
        if ( !data )
          goto LABEL_50;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
        GameObjectExtensions__ResetLocalScale(gameObject, 0LL);
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v9, 0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        AssetStorage = AssetManager__getAssetStorage(NameEffectPath, 0LL);
        v14 = AssetStorage
            ? (UILabel_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                             AssetStorage,
                             (System_String_o *)StringLiteral_16994/*"battle_name"*/,
                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408)
            : 0LL;
        data = (BattleServantData_o *)this->fields.shortNameLabel;
        if ( !data )
          goto LABEL_50;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v16 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                       v14,
                                       transform,
                                       (const MethodInfo_1DF9A3C *)Method_UnityEngine_Object_Instantiate_GameObject____69541584);
        *p_enemyNameEffectPrefab = (struct UnityEngine_GameObject_o *)v16;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.enemyNameEffectPrefab,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
      }
      data = this->fields.data;
      if ( data )
      {
        v23 = this->fields.shortNameLabel;
        data = (BattleServantData_o *)BattleServantData__getServantShortName(data, 0LL);
        if ( v23 )
        {
          UILabel__set_text(v23, (System_String_o *)data, 0LL);
          defaultShortNameLabelWidth = (unsigned int)this->fields.defaultShortNameLabelWidth;
          data = (BattleServantData_o *)this->fields.shortNameLabel;
          if ( (int)defaultShortNameLabelWidth <= 0 )
          {
            if ( !data )
              goto LABEL_50;
            defaultShortNameLabelWidth = (unsigned int)data->fields._frameType_k__BackingField;
            this->fields.defaultShortNameLabelWidth = defaultShortNameLabelWidth;
          }
          else if ( !data )
          {
            goto LABEL_50;
          }
          v24 = *(_QWORD *)&data->fields.atktdrate;
          if ( !v24 )
            goto LABEL_50;
          v25 = (float)(data->fields.displayType * *(_DWORD *)(v24 + 16));
          if ( (float)(int)defaultShortNameLabelWidth >= v25 )
          {
            UIWidget__set_width((UIWidget_o *)data, defaultShortNameLabelWidth, 0LL);
            data = (BattleServantData_o *)this->fields.shortNameLabel;
            if ( data )
            {
              data = (BattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
              if ( data )
              {
                v28 = 1.0;
                v26 = 1.0;
                v27 = 1.0;
                goto LABEL_49;
              }
            }
          }
          else
          {
            UIWidget__set_width((UIWidget_o *)data, (int)v25, 0LL);
            data = (BattleServantData_o *)this->fields.shortNameLabel;
            if ( data )
            {
              data = (BattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
              if ( data )
              {
                v26 = 1.0;
                v27 = 1.0;
                v28 = (float)this->fields.defaultShortNameLabelWidth / v25;
LABEL_49:
                UnityEngine_Transform__set_localScale(
                  (UnityEngine_Transform_o *)data,
                  *(UnityEngine_Vector3_o *)&v28,
                  0LL);
                return;
              }
            }
          }
        }
      }
LABEL_50:
      sub_B7769C(data, defaultShortNameLabelWidth);
    }
  }
}


void __fastcall BattleServantParamComponent__UpdateSkillRankUpEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *updated; // x1

  if ( this->fields.data )
  {
    updated = BattleServantParamComponent__coroutineUpdateSkillRankUpEffect(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
  }
  else
  {
    BattleServantParamComponent__DeleteSkillRankUpEffect(this, method);
  }
}


void __fastcall BattleServantParamComponent__UpdateStatusByTransform(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  UnityEngine_Object_o *levelLabel; // x20
  __int64 v8; // x1
  BattleServantData_o *data; // x0
  UILabel_o *v10; // x19

  if ( (byte_438E1C6 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1C6 = 1;
  }
  if ( this->fields.data )
  {
    BattleServantParamComponent__UpdateStatusFace(this, method);
    BattleServantParamComponent__setClassIcon(this, v3);
    BattleServantParamComponent__UpdateNameLabel(this, v4);
    BattleServantParamComponent__UpdateShortNameLabel(this, v5);
    BattleServantParamComponent__updateSkillIcon(this, 0, v6);
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( !data
        || (v10 = this->fields.levelLabel,
            data = (BattleServantData_o *)BattleServantData__getLevelLabel(data, 0LL),
            !v10) )
      {
        sub_B7769C(data, v8);
      }
      UILabel__set_text(v10, (System_String_o *)data, 0LL);
    }
  }
}


void __fastcall BattleServantParamComponent__UpdateStatusFace(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_facetex; // x19
  UnityEngine_Object_o *facetex; // x21
  __int64 v5; // x1
  BattleServantData_o *data; // x0
  UITexture_o *v7; // x21
  BattleServantData_o *v8; // x8
  int32_t v9; // w20
  int32_t DispLimitCount; // w22
  System_Int32_array **Manager__loadStatusFace; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_438E1E0 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    byte_438E1E0 = 1;
  }
  if ( this->fields.data )
  {
    p_facetex = (BattleServantConfConponent_o *)&this->fields.facetex;
    facetex = (UnityEngine_Object_o *)this->fields.facetex;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( !data
        || (v7 = this->fields.facetex,
            data = (BattleServantData_o *)BattleServantData__GetDispImageSvtId(data, 0LL),
            (v8 = this->fields.data) == 0LL) )
      {
        sub_B7769C(data, v5);
      }
      v9 = (int)data;
      DispLimitCount = BattleServantData__getDispLimitCount(v8, 1, 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadStatusFace = (System_Int32_array **)ServantAssetLoadManager__loadStatusFace(
                                                         v7,
                                                         v9,
                                                         DispLimitCount,
                                                         0LL);
      p_facetex->klass = (BattleServantConfConponent_c *)Manager__loadStatusFace;
      sub_B77560(p_facetex, Manager__loadStatusFace, v12, v13, v14, v15, v16, v17);
    }
  }
}


void __fastcall BattleServantParamComponent__UpdateTdGauge(
        BattleServantParamComponent_o *this,
        System_Int32_array *nowAndMaxArray,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nextTdGauge; // x21
  BattleServantData_o *data; // x0
  BattleNextTDgaugeComponent_o *v7; // x20
  int32_t v8; // w19
  int32_t v9; // w21
  _BOOL8 isTDSeraled; // x0
  __int64 v11; // x1
  __int64 v12; // x0

  if ( (byte_438E1D6 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1D6 = 1;
  }
  if ( nowAndMaxArray && nowAndMaxArray->max_length == 2 )
  {
    nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(nextTdGauge, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( data )
      {
        if ( nowAndMaxArray->max_length < 2 )
        {
          v12 = sub_B776C8(data);
          sub_B77668(v12, 0LL);
        }
        v7 = this->fields.nextTdGauge;
        v9 = nowAndMaxArray->m_Items[1];
        v8 = nowAndMaxArray->m_Items[2];
        isTDSeraled = BattleServantData__isTDSeraled(data, 0LL);
        if ( !v7 )
          sub_B7769C(isTDSeraled, v11);
        BattleNextTDgaugeComponent__setInitGauge(v7, v9, v8, isTDSeraled, 0LL);
      }
    }
  }
}


void __fastcall BattleServantParamComponent__callSkillIcon(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v2; // x19
  struct BattleServantSkillIConComponent_array *skillIcon; // x8
  __int64 v4; // x20
  char v5; // w22
  int max_length; // w9
  __int64 v7; // x0

  v2 = this;
  if ( (byte_438E1C9 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_B775C4(&SeManager_TypeInfo);
    byte_438E1C9 = 1;
  }
  skillIcon = v2->fields.skillIcon;
  if ( !skillIcon )
LABEL_14:
    sub_B7769C(this, method);
  v4 = 0LL;
  v5 = 0;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      v7 = sub_B776C8(this);
      sub_B77668(v7, 0LL);
    }
    this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
    if ( this )
    {
      this = (BattleServantParamComponent_o *)BattleServantSkillIConComponent__showChageEffect(
                                                (BattleServantSkillIConComponent_o *)this,
                                                method);
      if ( !(v5 & 1 | (((unsigned __int8)this & 1) == 0)) )
      {
        if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        SeManager__PlayCommonSe(2, 0LL);
        v5 = 1;
      }
      skillIcon = v2->fields.skillIcon;
      ++v4;
      if ( skillIcon )
        continue;
    }
    goto LABEL_14;
  }
  if ( v2->fields.modeWindow == 2 )
    BattleServantParamComponent__UpdateSkillRankUpEffect(v2, method);
}


void __fastcall BattleServantParamComponent__changeHp(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  int32_t NowHp; // w21
  int32_t MaxHp; // w0
  const MethodInfo *v7; // x4
  int32_t v8; // w21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( !svtdata )
    sub_B7769C(this, 0LL);
  NowHp = BattleServantData__getNowHp(svtdata, 0LL);
  MaxHp = BattleServantData__getMaxHp(svtdata, 0LL);
  BattleServantParamComponent__updateHplabel(this, NowHp, MaxHp, 1, v7);
  v8 = BattleServantData__getNowHp(svtdata, 0LL);
  v9 = BattleServantData__getMaxHp(svtdata, 0LL);
  BattleServantParamComponent__updateHpbar(this, v8, v9, v10);
}


void __fastcall BattleServantParamComponent__changeUpdateStatus(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleServantData_o *NowHp; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct BattleServantData_o *data; // x8
  int32_t v8; // w20
  int32_t MaxHp; // w2
  const MethodInfo *v10; // x4

  BattleServantParamComponent__initUpdateView(this, 0, v2);
  data = this->fields.data;
  if ( !data
    || (BattleServantParamComponent__updateBuffIcon(this, data->fields.buffData, v6), (NowHp = this->fields.data) == 0LL)
    || (NowHp = (BattleServantData_o *)BattleServantData__getNowHp(NowHp, 0LL), !this->fields.data) )
  {
    sub_B7769C(NowHp, v5);
  }
  v8 = (int)NowHp;
  MaxHp = BattleServantData__getMaxHp(this->fields.data, 0LL);
  BattleServantParamComponent__updateHplabel(this, v8, MaxHp, 1, v10);
}


bool __fastcall BattleServantParamComponent__checkId(
        BattleServantParamComponent_o *this,
        int32_t Id,
        const MethodInfo *method)
{
  BattleServantData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LOBYTE(data) = BattleServantData__checkID(data, Id, 0LL);
  return (char)data;
}


void __fastcall BattleServantParamComponent__clearBuffIconList(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  BattleBuffData_ShowBuffData_array *v4; // x0
  __int64 v5; // x1
  BattleServantShowBuffComponent_o *showBuffComponent; // x19
  const MethodInfo *v7; // x2

  if ( (byte_438E1DE & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
    byte_438E1DE = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  if ( !v3
    || (showBuffComponent = this->fields.showBuffComponent,
        v4 = (BattleBuffData_ShowBuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                                    (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__),
        !showBuffComponent) )
  {
    sub_B7769C(v4, v5);
  }
  BattleServantShowBuffComponent__setBuffList(showBuffComponent, v4, v7);
}


void __fastcall BattleServantParamComponent__clickSkillIcon(
        BattleServantParamComponent_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isLongTap,
        const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x22
  __int64 v8; // x1
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0

  if ( (byte_438E1CB & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1CB = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    Component_srcLineSprite = this->fields.target;
    if ( !Component_srcLineSprite
      || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  Component_srcLineSprite,
                                                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___)) == 0LL )
    {
      sub_B7769C(Component_srcLineSprite, v8);
    }
    BattlePerformancePlayer__onClickSkillIcon(
      (BattlePerformancePlayer_o *)Component_srcLineSprite,
      skillInfo,
      isLongTap,
      0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438E1CA & 1) == 0 )
  {
    sub_B775C4(&BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_TypeInfo);
    byte_438E1CA = 1;
  }
  v3 = sub_B77694(BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_TypeInfo);
  BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82___ctor(
    (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleServantParamComponent__fixUpdateStatus(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleServantParamComponent__initUpdateView(this, 0, v2);
}


BattleServantData_o *__fastcall BattleServantParamComponent__getData(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.data;
}


void __fastcall BattleServantParamComponent__initUpdateView(
        BattleServantParamComponent_o *this,
        int32_t notUpdateFlag,
        const MethodInfo *method)
{
  char v3; // w20
  UnityEngine_Object_o *facetex; // x22
  const MethodInfo *v6; // x1
  BattleServantData_o *data; // x0
  UITexture_o *v8; // x22
  int32_t v9; // w23
  int32_t DispLimitCount; // w24
  struct UITexture_o *Manager__loadStatusFace; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Object_o *levelLabel; // x21
  UILabel_o *v19; // x21
  UnityEngine_Object_o *nameLabel; // x21
  UILabel_o *v21; // x21
  UnityEngine_Object_o *hpGauge; // x21
  BattleHpGaugeBarComponent_o *v23; // x21
  int32_t v24; // w22
  UnityEngine_Object_o *hpChange; // x21
  struct BattleServantData_o *v26; // x8
  struct System_Int32_array *shiftDeckList; // x9
  UnityEngine_Object_o *hpShift; // x21
  const MethodInfo *v29; // x2
  UnityEngine_Object_o *breakSprite; // x21
  int32_t v31; // w21
  int32_t MaxHp; // w0
  const MethodInfo *v33; // x4
  UnityEngine_Object_o *npcomp; // x21
  struct BattleNpGaugeSystemComponent_o *v35; // x8
  struct BattleNpGaugeSystemComponent_o *v36; // x21
  struct BattleServantData_o *v37; // x8
  BattleNpGaugeSystemComponent_o *v38; // x21
  UnityEngine_Object_o *nextTdGauge; // x21
  bool v40; // w0
  const MethodInfo *v41; // x2
  BattleNextTDgaugeComponent_o *v42; // x20
  int32_t nexttpturn; // w21
  int32_t maxtpturn; // w22
  UnityEngine_Object_o *friendIcon; // x20
  struct BattleServantData_o *v46; // x8
  UISprite_o *v47; // x20
  UISprite_o *v48; // x20
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *breakPoint; // x20
  struct BattleServantData_o *v51; // x8

  v3 = notUpdateFlag;
  if ( (byte_438E1C5 & 1) == 0 )
  {
    sub_B775C4(&FileName_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    byte_438E1C5 = 1;
  }
  if ( this->fields.data )
  {
    facetex = (UnityEngine_Object_o *)this->fields.facetex;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_113;
      v8 = this->fields.facetex;
      data = (BattleServantData_o *)BattleServantData__GetDispImageSvtId(data, 0LL);
      if ( !this->fields.data )
        goto LABEL_113;
      v9 = (int)data;
      DispLimitCount = BattleServantData__getDispLimitCount(this->fields.data, 1, 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadStatusFace = ServantAssetLoadManager__loadStatusFace(v8, v9, DispLimitCount, 0LL);
      this->fields.facetex = Manager__loadStatusFace;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.facetex,
        (System_Int32_array **)Manager__loadStatusFace,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    BattleServantParamComponent__setClassIcon(this, v6);
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_113;
      v19 = this->fields.levelLabel;
      data = (BattleServantData_o *)BattleServantData__getLevelLabel(data, 0LL);
      if ( !v19 )
        goto LABEL_113;
      UILabel__set_text(v19, (System_String_o *)data, 0LL);
    }
    nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_113;
      v21 = this->fields.nameLabel;
      data = (BattleServantData_o *)BattleServantData__getServantName(data, 0LL);
      if ( !v21 )
        goto LABEL_113;
      UILabel__set_text(v21, (System_String_o *)data, 0LL);
    }
    BattleServantParamComponent__UpdateShortNameLabel(this, v6);
    hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_113;
      v23 = this->fields.hpGauge;
      data = (BattleServantData_o *)BattleServantData__getNowHp(data, 0LL);
      if ( !this->fields.data )
        goto LABEL_113;
      v24 = (int)data;
      data = (BattleServantData_o *)BattleServantData__getMaxHp(this->fields.data, 0LL);
      if ( !v23 )
        goto LABEL_113;
      BattleHpGaugeBarComponent__setInitValue(v23, v24, (int32_t)data, 0LL);
    }
    hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(hpChange, 0LL, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v26 = this->fields.data;
      if ( !v26 )
        goto LABEL_113;
      shiftDeckList = v26->fields.shiftDeckList;
      if ( !shiftDeckList )
        goto LABEL_113;
      data = (BattleServantData_o *)this->fields.hpChange;
      if ( !data )
        goto LABEL_113;
      BattleServantChangeBarComponent__setBarType(
        (BattleServantChangeBarComponent_o *)data,
        1,
        shiftDeckList->max_length - v26->fields.shiftDeckIndex,
        0LL);
    }
    hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
    {
      data = (BattleServantData_o *)this->fields.hpShift;
      if ( !data )
        goto LABEL_113;
      BattleServantHpShiftComponent__setInitValue((BattleServantHpShiftComponent_o *)data, this->fields.data, v29);
    }
    BattleServantParamComponent__setAtlas(this, v6);
    breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(breakSprite, 0LL, 0LL) )
    {
      data = (BattleServantData_o *)this->fields.breakSprite;
      if ( !data )
        goto LABEL_113;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)data, 0, 0LL);
    }
    data = this->fields.data;
    if ( !data || (data = (BattleServantData_o *)BattleServantData__getNowHp(data, 0LL), !this->fields.data) )
LABEL_113:
      sub_B7769C(data, v6);
    v31 = (int)data;
    MaxHp = BattleServantData__getMaxHp(this->fields.data, 0LL);
    BattleServantParamComponent__updateHplabel(this, v31, MaxHp, 1, v33);
    npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v35 = this->fields.npcomp;
      if ( !v35 )
        goto LABEL_113;
      v35->fields.lineCount = 3;
      data = this->fields.data;
      if ( !data )
        goto LABEL_113;
      v36 = this->fields.npcomp;
      data = (BattleServantData_o *)BattleServantData__getCountMaxNp(data, 0LL);
      if ( !v36 )
        goto LABEL_113;
      v36->fields.maxparam = (int)data;
      data = (BattleServantData_o *)this->fields.npcomp;
      if ( !data )
        goto LABEL_113;
      BattleNpGaugeSystemComponent__InitSliderValue((BattleNpGaugeSystemComponent_o *)data, 0LL);
      v37 = this->fields.data;
      if ( !v37 )
        goto LABEL_113;
      data = (BattleServantData_o *)this->fields.npcomp;
      if ( !data )
        goto LABEL_113;
      BattleNpGaugeSystemComponent__setNowParam((BattleNpGaugeSystemComponent_o *)data, v37->fields.np, 0LL);
      data = this->fields.data;
      if ( !data )
        goto LABEL_113;
      v38 = this->fields.npcomp;
      data = (BattleServantData_o *)BattleServantData__isAddNpGauge(data, 0LL);
      if ( !v38 )
        goto LABEL_113;
      BattleNpGaugeSystemComponent__setUseNp(v38, (unsigned __int8)data & 1, 0LL);
    }
    nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v40 = UnityEngine_Object__op_Inequality(nextTdGauge, 0LL, 0LL);
    if ( (v3 & 1) == 0 && v40 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_113;
      v42 = this->fields.nextTdGauge;
      nexttpturn = data->fields.nexttpturn;
      maxtpturn = data->fields.maxtpturn;
      data = (BattleServantData_o *)BattleServantData__isTDSeraled(data, 0LL);
      if ( !v42 )
        goto LABEL_113;
      BattleNextTDgaugeComponent__setInitGauge(v42, nexttpturn, maxtpturn, (unsigned __int8)data & 1, 0LL);
    }
    BattleServantParamComponent__updateSkillIcon(this, 0, v41);
    friendIcon = (UnityEngine_Object_o *)this->fields.friendIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(friendIcon, 0LL, 0LL) )
    {
      data = (BattleServantData_o *)this->fields.friendIcon;
      if ( !data )
        goto LABEL_113;
      data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
      if ( !data )
        goto LABEL_113;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
      v46 = this->fields.data;
      if ( !v46 )
        goto LABEL_113;
      if ( v46->fields.followerType )
      {
        v47 = this->fields.friendIcon;
        data = (BattleServantData_o *)FileName_TypeInfo;
        if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
        if ( !v47 )
          goto LABEL_113;
        UISprite__set_spriteName(v47, FileName_TypeInfo->static_fields->friendIconName, 0LL);
        data = (BattleServantData_o *)this->fields.friendIcon;
        if ( !data )
          goto LABEL_113;
        data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
        if ( !data )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
        v46 = this->fields.data;
        if ( !v46 )
          goto LABEL_113;
      }
      if ( v46->fields.flgEventJoin )
      {
        v48 = this->fields.friendIcon;
        data = (BattleServantData_o *)FileName_TypeInfo;
        if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
        if ( !v48 )
          goto LABEL_113;
        UISprite__set_spriteName(v48, FileName_TypeInfo->static_fields->eventJoinIconName, 0LL);
        data = (BattleServantData_o *)this->fields.friendIcon;
        if ( !data )
          goto LABEL_113;
        data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
        if ( !data )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
      }
    }
    BattleServantParamComponent__setRoleTyoe(this, v6);
    perf = this->fields.perf;
    if ( !perf )
      goto LABEL_113;
    data = (BattleServantData_o *)perf->fields.data;
    if ( !data )
      goto LABEL_113;
    if ( BattleData__IsWarBoard((BattleData_o *)data, 0LL) )
    {
      breakPoint = (UnityEngine_Object_o *)this->fields.breakPoint;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(breakPoint, 0LL, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v51 = this->fields.data;
        if ( v51 )
        {
          data = (BattleServantData_o *)this->fields.breakPoint;
          if ( data )
          {
            BattleServantBreakPointComponent__Initialize(
              (BattleServantBreakPointComponent_o *)data,
              v51->fields.defeatPoint,
              v51->fields.maxDefeatPoint,
              v51->fields.isEnemy,
              0LL);
            return;
          }
        }
        goto LABEL_113;
      }
    }
  }
}


bool __fastcall BattleServantParamComponent__isNone(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  return this->fields.uniqueID == -1;
}


void __fastcall BattleServantParamComponent__onClickEnemyTarget(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  BattleServantParamComponent_o *v3; // x19
  struct BattlePerformance_o *v4; // x8
  struct BattleData_o *data; // x9
  struct BattlePerformanceStatus_o *statusPerf; // x8
  struct BattlePerformance_o *v7; // x8

  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_17;
  v3 = this;
  this = (BattleServantParamComponent_o *)perf->fields.data;
  if ( !this )
    goto LABEL_17;
  this = (BattleServantParamComponent_o *)BattleData__isTutorial((BattleData_o *)this, 0LL);
  v4 = v3->fields.perf;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !v4 )
      goto LABEL_17;
LABEL_10:
    statusPerf = v4->fields.statusPerf;
    if ( statusPerf )
    {
      this = (BattleServantParamComponent_o *)statusPerf->fields.masterPerf;
      if ( this )
      {
        this = (BattleServantParamComponent_o *)BattlePerformanceMaster__isCloseEnemyConf(
                                                  (BattlePerformanceMaster_o *)this,
                                                  0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          return;
        v7 = v3->fields.perf;
        if ( v7 )
        {
          v7->fields._IsCalledByEnemyNameUI_k__BackingField = 1;
          this = (BattleServantParamComponent_o *)v3->fields.perf;
          if ( this )
          {
            BattlePerformance__clickTarget((BattlePerformance_o *)this, v3->fields.index, 0LL);
            return;
          }
        }
      }
    }
LABEL_17:
    sub_B7769C(this, method);
  }
  if ( !v4 )
    goto LABEL_17;
  data = v4->fields.data;
  if ( !data )
    goto LABEL_17;
  if ( data->fields.tutorialId != 3 || data->fields.tutorialState )
    goto LABEL_10;
}


void __fastcall BattleServantParamComponent__onLongPressEnemyTarget(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  BattlePerformanceMaster_o *masterPerf; // x8

  perf = this->fields.perf;
  if ( !perf || (statusPerf = perf->fields.statusPerf) == 0LL || (masterPerf = statusPerf->fields.masterPerf) == 0LL )
    sub_B7769C(this, method);
  BattlePerformanceMaster__showEnemyServant(masterPerf, this->fields.index, 0LL);
}


void __fastcall BattleServantParamComponent__playAddition(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *data; // x8
  UnityEngine_Component_o *clsIconComponent; // x0
  UnityEngine_Transform_o *transform; // x0
  struct BattleServantData_o *v6; // x8

  if ( (byte_438E1DA & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_2871/*"Battle/Prefab/ef_add_enemy"*/);
    byte_438E1DA = 1;
  }
  data = this->fields.data;
  if ( data && data->fields.isAddition )
  {
    clsIconComponent = (UnityEngine_Component_o *)this->fields.clsIconComponent;
    if ( !clsIconComponent
      || (transform = UnityEngine_Component__get_transform(clsIconComponent, 0LL),
          clsIconComponent = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject_22413920(
                                                          (BaseMonoBehaviour_o *)this,
                                                          (System_String_o *)StringLiteral_2871/*"Battle/Prefab/ef_add_enemy"*/,
                                                          transform,
                                                          0LL,
                                                          0LL),
          (v6 = this->fields.data) == 0LL) )
    {
      sub_B7769C(clsIconComponent, method);
    }
    v6->fields.isAddition = 0;
  }
}


void __fastcall BattleServantParamComponent__playAttackEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *facetex; // x20
  struct UnityEngine_GameObject_array *v8; // x20
  UnityEngine_Transform_o *transform; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x19
  __int64 v17; // x0
  __int64 v18; // x0

  v2 = this;
  if ( (byte_438E1C4 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (BattleServantParamComponent_o *)sub_B775C4(&StringLiteral_18615/*"effect/ef_cwflash01"*/);
    byte_438E1C4 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_27;
  if ( !effectobj->max_length )
    goto LABEL_28;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( !v5 )
      goto LABEL_27;
    if ( !v5->max_length )
      goto LABEL_28;
    v6 = (UnityEngine_Object_o *)v5->m_Items[0];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(v6, 0LL);
  }
  facetex = (UnityEngine_Object_o *)v2->fields.facetex;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    this = (BattleServantParamComponent_o *)v2->fields.facetex;
    if ( this )
    {
      v8 = v2->fields.effectobj;
      this = (BattleServantParamComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
      if ( this )
      {
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        this = (BattleServantParamComponent_o *)BaseMonoBehaviour__createObject_22413920(
                                                  (BaseMonoBehaviour_o *)v2,
                                                  (System_String_o *)StringLiteral_18615/*"effect/ef_cwflash01"*/,
                                                  transform,
                                                  0LL,
                                                  0LL);
        if ( v8 )
        {
          v16 = (System_Int32_array **)this;
          if ( this )
          {
            this = (BattleServantParamComponent_o *)sub_B77684(this, v8->obj.klass->_1.element_class);
            if ( !this )
            {
              v18 = sub_B776BC(0LL);
              sub_B77668(v18, 0LL);
            }
          }
          if ( v8->max_length )
          {
            v8->m_Items[0] = (UnityEngine_GameObject_o *)v16;
            sub_B77560((BattleServantConfConponent_o *)v8->m_Items, v16, v10, v11, v12, v13, v14, v15);
            return;
          }
LABEL_28:
          v17 = sub_B776C8(this);
          sub_B77668(v17, 0LL);
        }
      }
    }
LABEL_27:
    sub_B7769C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__playCloseSelectServant(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  float g; // s5
  float b; // s6
  float a; // s7
  float v11; // s4
  UnityEngine_Color_o gray; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_438E1B6 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1B6 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_B7769C(0LL, v4);
    gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
    gray = UnityEngine_Color__get_gray(0LL);
    g = gray.fields.g;
    b = gray.fields.b;
    a = gray.fields.a;
    gray.fields.g = gray.fields.r;
    gray.fields.b = g;
    gray.fields.a = b;
    v11 = a;
    TweenColor__Begin(gameObject, 0.4, *(UnityEngine_Color_o *)&gray.fields.g, 0LL);
  }
  BattleServantParamComponent__setTouch(this, 1, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__playEndShowServant(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  float g; // s5
  float b; // s6
  float a; // s7
  float v11; // s4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_438E1B7 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1B7 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_B7769C(0LL, v4);
    gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
    white = UnityEngine_Color__get_white(0LL);
    g = white.fields.g;
    b = white.fields.b;
    a = white.fields.a;
    white.fields.g = white.fields.r;
    white.fields.b = g;
    white.fields.a = b;
    v11 = a;
    TweenColor__Begin(gameObject, 0.4, *(UnityEngine_Color_o *)&white.fields.g, 0LL);
  }
  BattleServantParamComponent__setTouch(this, 1, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__playSelectServant(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  float g; // s5
  float b; // s6
  float a; // s7
  float v11; // s4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_438E1B5 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1B5 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_B7769C(0LL, v4);
    gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
    white = UnityEngine_Color__get_white(0LL);
    g = white.fields.g;
    b = white.fields.b;
    a = white.fields.a;
    white.fields.g = white.fields.r;
    white.fields.b = g;
    white.fields.a = b;
    v11 = a;
    TweenColor__Begin(gameObject, 0.4, *(UnityEngine_Color_o *)&white.fields.g, 0LL);
  }
  BattleServantParamComponent__setTouch(this, 1, v5);
}


void __fastcall BattleServantParamComponent__playShiftEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  BattleServantHpShiftComponent_o *v6; // x0

  if ( (byte_438E1D0 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1D0 = 1;
  }
  if ( this->fields.data )
  {
    hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
    {
      v6 = this->fields.hpShift;
      if ( !v6 )
        sub_B7769C(0LL, v4);
      BattleServantHpShiftComponent__playShiftEffect(v6, this->fields.data, v5);
    }
  }
}


float __fastcall BattleServantParamComponent__playShiftEffectBefore(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  BattleServantHpShiftComponent_o *v6; // x0

  if ( (byte_438E1CF & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1CF = 1;
  }
  if ( !this->fields.data )
    return 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
    return 0.0;
  v6 = this->fields.hpShift;
  if ( !v6 )
    sub_B7769C(0LL, v4);
  return BattleServantHpShiftComponent__playShiftEffectBefore(v6, this->fields.data, v5);
}


void __fastcall BattleServantParamComponent__playStartShowServant(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantParamComponent__popBuffLabel(
        BattleServantParamComponent_o *this,
        BattleActionData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  UnityEngine_Object_o *v6; // x19
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  float LabelPrintedWidth; // s10
  float v9; // s8
  float v10; // s9
  UnityEngine_Object_o *ComponentInChildren_SimpleAnimation; // x23
  UnityEngine_Object_c *klass; // x8
  int nestedTypes; // w22
  UnityEngine_Object_c *v14; // x8
  int v15; // w8
  float sideEffectLabelWidth; // s0
  float v17; // s1
  UnityEngine_Component_o *clsIconComponent; // x8
  UnityEngine_Transform_o *v19; // x20
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438E1DD & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E1DD = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_37;
  perf = (BattlePerformance_o *)BattlePerformance__get_WrapPopupCtrl(perf, 0LL);
  if ( !buffData || !perf )
    goto LABEL_37;
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.events)(
                                 perf,
                                 (unsigned int)buffData->fields.popColor,
                                 perf->klass[1]._1.properties);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)perf & 1) == 0 )
  {
    if ( !v6 )
      goto LABEL_37;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)v6,
                                                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( ((unsigned __int8)perf & 1) != 0 )
    {
      if ( !Component_srcLineSprite )
        goto LABEL_37;
      BattleUIRangeLabel__SetAdjustLabelOffset(
        (BattleUIRangeLabel_o *)Component_srcLineSprite,
        buffData->fields.popLabel,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        0LL,
        0,
        0,
        0,
        0LL);
    }
    else if ( !Component_srcLineSprite )
    {
      goto LABEL_37;
    }
    LabelPrintedWidth = BattleUIRangeLabel__GetLabelPrintedWidth((BattleUIRangeLabel_o *)Component_srcLineSprite, 0LL);
    v9 = fminf(this->fields.sideEffectLabelWidth / (float)(LabelPrintedWidth * 0.8), 1.0);
    v10 = 0.0;
    if ( buffData->fields.popIcon >= 1 )
    {
      ComponentInChildren_SimpleAnimation = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_SimpleAnimation_(
                                                                      (UnityEngine_GameObject_o *)v6,
                                                                      1,
                                                                      (const MethodInfo_1DEC094 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality(ComponentInChildren_SimpleAnimation, 0LL, 0LL);
      if ( ((unsigned __int8)perf & 1) != 0 )
      {
        if ( !ComponentInChildren_SimpleAnimation )
          goto LABEL_37;
        BattleServantBuffIconComponent__setImageId(
          (BattleServantBuffIconComponent_o *)ComponentInChildren_SimpleAnimation,
          buffData->fields.popIcon,
          0LL);
        klass = ComponentInChildren_SimpleAnimation[1].klass;
        if ( !klass )
          goto LABEL_37;
        nestedTypes = (int)klass->_1.nestedTypes;
        perf = (BattlePerformance_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)ComponentInChildren_SimpleAnimation,
                                        0LL);
        if ( !perf )
          goto LABEL_37;
        perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)perf, 0LL);
        if ( !perf )
          goto LABEL_37;
        v20.fields.x = -(float)((float)((float)(LabelPrintedWidth * 0.5) + (float)((float)nestedTypes * 0.5)) + 5.0);
        v20.fields.y = 0.0;
        v20.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)perf, v20, 0LL);
        v14 = ComponentInChildren_SimpleAnimation[1].klass;
        if ( !v14 )
          goto LABEL_37;
        v15 = (int)v14->_1.nestedTypes;
        if ( v9 >= 1.0 )
        {
          sideEffectLabelWidth = this->fields.sideEffectLabelWidth;
          v17 = (float)((float)((float)(LabelPrintedWidth * 0.8) + (float)((float)v15 * 0.8)) + 5.0)
              + (float)((float)(sideEffectLabelWidth - (float)(LabelPrintedWidth * 0.8)) * 0.5);
          v10 = 0.0;
          if ( v17 > sideEffectLabelWidth )
            v10 = v17 - sideEffectLabelWidth;
        }
        else
        {
          v10 = (float)(v9 * (float)((float)v15 * 0.8)) + 5.0;
        }
      }
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v6, 0, 0LL);
    perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0LL);
    clsIconComponent = (UnityEngine_Component_o *)this->fields.clsIconComponent;
    if ( clsIconComponent )
    {
      v19 = (UnityEngine_Transform_o *)perf;
      perf = (BattlePerformance_o *)UnityEngine_Component__get_transform(clsIconComponent, 0LL);
      if ( v19 )
      {
        UnityEngine_Transform__SetParent(v19, (UnityEngine_Transform_o *)perf, 0LL);
        perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0LL);
        if ( perf )
        {
          v21.fields.y = 1.0;
          v21.fields.x = v9;
          v21.fields.z = 1.0;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)perf, v21, 0LL);
          perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0LL);
          if ( perf )
          {
            v22.fields.y = 0.0;
            v22.fields.z = 0.0;
            v22.fields.x = v10;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)perf, v22, 0LL);
            BattleUIRangeLabel__AddLabelDepth((BattleUIRangeLabel_o *)Component_srcLineSprite, 100, 0LL);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v6, 1, 0LL);
            return;
          }
        }
      }
    }
LABEL_37:
    sub_B7769C(perf, buffData);
  }
}


void __fastcall BattleServantParamComponent__setAtlas(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  __int64 v4; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  UnityEngine_Object_o *breakSprite; // x21
  UIAtlas_o *v7; // x20
  UISprite_o *v8; // x19
  __int64 v9; // x2
  Il2CppObject *v10; // x0
  int v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438E1C8 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_2862/*"Battle/Common"*/);
    sub_B775C4(&StringLiteral_2880/*"BattleAssetUIAtlas"*/);
    sub_B775C4(&StringLiteral_19570/*"hp_break_"*/);
    byte_438E1C8 = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2862/*"Battle/Common"*/, 0LL);
  if ( !AssetStorage )
    goto LABEL_16;
  AssetStorage = (AssetData_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_2880/*"BattleAssetUIAtlas"*/,
                                  (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
  if ( !AssetStorage )
    goto LABEL_16;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)AssetStorage,
                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  v7 = (UIAtlas_o *)Component_srcLineSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0LL, 0LL) )
  {
    AssetStorage = (AssetData_o *)this->fields.breakSprite;
    if ( AssetStorage )
    {
      UISprite__set_atlas((UISprite_o *)AssetStorage, v7, 0LL);
      v8 = this->fields.breakSprite;
      v11 = 1;
      v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, v9);
      AssetStorage = (AssetData_o *)System_String__Concat((Il2CppObject *)StringLiteral_19570/*"hp_break_"*/, v10, 0LL);
      if ( v8 )
      {
        UISprite__set_spriteName(v8, (System_String_o *)AssetStorage, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B7769C(AssetStorage, v4);
  }
}


void __fastcall BattleServantParamComponent__setClassIcon(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *clsIconComponent; // x20
  __int64 v4; // x1
  BattleServantData_o *data; // x0
  struct BattleServantData_o *v6; // x8

  if ( (byte_438E1C2 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1C2 = 1;
  }
  clsIconComponent = (UnityEngine_Object_o *)this->fields.clsIconComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(clsIconComponent, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data
      || (data = (BattleServantData_o *)BattleServantData__getClassId(data, 0LL), (v6 = this->fields.data) == 0LL)
      || (v4 = (unsigned int)data, (data = (BattleServantData_o *)this->fields.clsIconComponent) == 0LL) )
    {
      sub_B7769C(data, v4);
    }
    ServantClassIconComponent__SetImage(
      (ServantClassIconComponent_o *)data,
      v4,
      v6->fields._frameType_k__BackingField,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__setCloseMode(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *facetex; // x20
  UnityEngine_Component_o *Item; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  float g; // s5
  float b; // s6
  float a; // s7
  float v12; // s4
  int32_t modeWindow; // w8
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_Object_o *v15; // x21
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v17; // x21
  unsigned __int64 v18; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v20; // x0
  UnityEngine_Component_c *v21; // x8
  UnityEngine_Component_o *v22; // x21
  unsigned __int64 v23; // x10
  SimpleAnimation_State_c **v24; // x11
  __int64 v25; // x0
  UnityEngine_Component_c *v26; // x8
  SimpleAnimation_State_c *v27; // x1
  UnityEngine_Component_o *v28; // x21
  unsigned __int64 v29; // x10
  SimpleAnimation_State_c **v30; // x11
  unsigned __int64 v31; // x10
  __int64 v32; // x0
  const MethodInfo *v33; // x2
  UnityEngine_Color_o clear; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_438E1B8 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    sub_B775C4(&StringLiteral_13430/*"SvtW_StartClose"*/);
    byte_438E1B8 = 1;
  }
  BattleServantParamComponent__setSkillFlash(this, 0, v2);
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Item = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    Item = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !Item )
      goto LABEL_58;
    gameObject = UnityEngine_Component__get_gameObject(Item, 0LL);
    clear = UnityEngine_Color__get_clear(0LL);
    g = clear.fields.g;
    b = clear.fields.b;
    a = clear.fields.a;
    clear.fields.g = clear.fields.r;
    clear.fields.b = g;
    clear.fields.a = b;
    v12 = a;
    Item = (UnityEngine_Component_o *)TweenColor__Begin(gameObject, 0.4, *(UnityEngine_Color_o *)&clear.fields.g, 0LL);
    this->fields.isHideFaceTexture = 1;
  }
  modeWindow = this->fields.modeWindow;
  if ( modeWindow != 3 )
  {
    if ( modeWindow == 2 )
    {
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
      v15 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Animation___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Item = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
      if ( ((unsigned __int8)Item & 1) != 0 )
      {
        if ( Component_WebViewObject )
        {
          Item = (UnityEngine_Component_o *)SimpleAnimation__get_Item(
                                              (SimpleAnimation_o *)Component_WebViewObject,
                                              (System_String_o *)StringLiteral_13430/*"SvtW_StartClose"*/,
                                              0LL);
          if ( Item )
          {
            klass = Item->klass;
            v17 = Item;
            if ( *(_WORD *)&Item->klass->_2.bitflags1 )
            {
              v18 = 0LL;
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v18;
                p_offset += 2;
                if ( v18 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                  goto LABEL_21;
              }
              v20 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
            }
            else
            {
LABEL_21:
              v20 = sub_B0F4C0(Item, SimpleAnimation_State_TypeInfo, 4LL);
            }
            (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v20)(v17, *(_QWORD *)(v20 + 8), 0.0);
            Item = (UnityEngine_Component_o *)SimpleAnimation__get_Item(
                                                (SimpleAnimation_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_13430/*"SvtW_StartClose"*/,
                                                0LL);
            if ( Item )
            {
              v26 = Item->klass;
              v27 = SimpleAnimation_State_TypeInfo;
              v28 = Item;
              if ( *(_WORD *)&Item->klass->_2.bitflags1 )
              {
                v29 = 0LL;
                v30 = (SimpleAnimation_State_c **)&v26->_1.interfaceOffsets->offset;
                while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
                {
                  ++v29;
                  v30 += 2;
                  if ( v29 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                    goto LABEL_54;
                }
LABEL_55:
                v32 = (__int64)(&v26[1]._1.castClass + 2 * *(_DWORD *)v30);
                goto LABEL_56;
              }
              goto LABEL_54;
            }
          }
        }
        goto LABEL_58;
      }
    }
    else
    {
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
      v15 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Animation___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Item = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
      if ( ((unsigned __int8)Item & 1) != 0 )
      {
        if ( Component_WebViewObject )
        {
          Item = (UnityEngine_Component_o *)SimpleAnimation__get_Item(
                                              (SimpleAnimation_o *)Component_WebViewObject,
                                              (System_String_o *)StringLiteral_13430/*"SvtW_StartClose"*/,
                                              0LL);
          if ( Item )
          {
            v21 = Item->klass;
            v22 = Item;
            if ( *(_WORD *)&Item->klass->_2.bitflags1 )
            {
              v23 = 0LL;
              v24 = (SimpleAnimation_State_c **)&v21->_1.interfaceOffsets->offset;
              while ( *(v24 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v23;
                v24 += 2;
                if ( v23 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                  goto LABEL_32;
              }
              v25 = (__int64)(&v21[1]._1.gc_desc + 2 * *(_DWORD *)v24);
            }
            else
            {
LABEL_32:
              v25 = sub_B0F4C0(Item, SimpleAnimation_State_TypeInfo, 4LL);
            }
            (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v25)(v22, *(_QWORD *)(v25 + 8), 0.0);
            Item = (UnityEngine_Component_o *)SimpleAnimation__get_Item(
                                                (SimpleAnimation_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_13430/*"SvtW_StartClose"*/,
                                                0LL);
            if ( Item )
            {
              v26 = Item->klass;
              v27 = SimpleAnimation_State_TypeInfo;
              v28 = Item;
              if ( *(_WORD *)&Item->klass->_2.bitflags1 )
              {
                v31 = 0LL;
                v30 = (SimpleAnimation_State_c **)&v26->_1.interfaceOffsets->offset;
                while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
                {
                  ++v31;
                  v30 += 2;
                  if ( v31 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                    goto LABEL_54;
                }
                goto LABEL_55;
              }
LABEL_54:
              v32 = sub_B0F4C0(v28, v27, 8LL);
LABEL_56:
              (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v32)(v28, *(_QWORD *)(v32 + 8), 1.0);
              Item = (UnityEngine_Component_o *)SimpleAnimation__Play_16815192(
                                                  (SimpleAnimation_o *)Component_WebViewObject,
                                                  (System_String_o *)StringLiteral_13430/*"SvtW_StartClose"*/,
                                                  0LL);
              goto LABEL_57;
            }
          }
        }
LABEL_58:
        sub_B7769C(Item, v6);
      }
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Item = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !v15 )
        goto LABEL_58;
      Item = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(
                                          (UnityEngine_Animation_o *)v15,
                                          (System_String_o *)StringLiteral_13430/*"SvtW_StartClose"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_58;
      UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
      Item = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(
                                          (UnityEngine_Animation_o *)v15,
                                          (System_String_o *)StringLiteral_13430/*"SvtW_StartClose"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_58;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 1.0, 0LL);
      Item = (UnityEngine_Component_o *)UnityEngine_Animation__Play_51745976(
                                          (UnityEngine_Animation_o *)v15,
                                          (System_String_o *)StringLiteral_13430/*"SvtW_StartClose"*/,
                                          0LL);
    }
  }
LABEL_57:
  BattleServantParamComponent__EffectStartStop(
    (BattleServantParamComponent_o *)Item,
    this->fields.commandSpellEffectDict,
    0,
    v7);
  this->fields.modeWindow = 3;
  BattleServantParamComponent__setTouch(this, 0, v33);
}


void __fastcall BattleServantParamComponent__setData(
        BattleServantParamComponent_o *this,
        BattleServantData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2
  struct BattleServantData_o *v11; // x8
  int32_t uniqueId; // w8
  UnityEngine_Object_o *npcomp; // x20
  __int64 v14; // x1
  BattleNpGaugeSystemComponent_o *v15; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x3

  if ( (byte_438E1B3 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1B3 = 1;
  }
  this->fields.modeWindow = 1;
  this->fields.data = data;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = this->fields.data;
  if ( v11 )
  {
    uniqueId = v11->fields.uniqueId;
  }
  else
  {
    npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL) )
    {
      v15 = this->fields.npcomp;
      if ( !v15 )
        sub_B7769C(0LL, v14);
      BattleNpGaugeSystemComponent__resetSlider(v15, 0LL);
    }
    uniqueId = -1;
  }
  this->fields.uniqueID = uniqueId;
  BattleServantParamComponent__initUpdateView(this, 0, v10);
  BattleServantParamComponent__updateView(this, v16);
  BattleServantParamComponent__UpdateSkillRankUpEffect(this, v17);
  BattleServantParamComponent__setTargetMark(this, -1, 0, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__setOpenMode(
        BattleServantParamComponent_o *this,
        bool isPlayCommandSpellEffectStartAnim,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x21
  __int64 gameObject; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  UnityEngine_GameObject_o *v10; // x21
  float v11; // s8
  float g; // s5
  float b; // s6
  float a; // s7
  float v15; // s4
  int32_t modeWindow; // w8
  UnityEngine_Object_o *Component_WebViewObject; // x21
  UnityEngine_Object_o *v18; // x22
  SimpleAnimation_State_o *Item; // x22
  __int64 v20; // x8
  __int64 v21; // x23
  unsigned __int64 v22; // x10
  SimpleAnimation_State_c **v23; // x11
  __int64 v24; // x0
  SimpleAnimation_State_o *v25; // x22
  __int64 v26; // x8
  __int64 v27; // x23
  unsigned __int64 v28; // x10
  SimpleAnimation_State_c **v29; // x11
  __int64 v30; // x0
  UnityEngine_AnimationState_o *v31; // x21
  float length; // s0
  long double v33; // q0
  SimpleAnimation_State_c *klass; // x8
  long double v35; // q8
  unsigned __int64 v36; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v39; // x8
  SimpleAnimation_State_c *v40; // x1
  __int64 v41; // x22
  unsigned __int64 v42; // x10
  SimpleAnimation_State_c **v43; // x11
  long double v44; // q0
  SimpleAnimation_State_c *v45; // x8
  long double v46; // q8
  unsigned __int64 v47; // x10
  SimpleAnimation_State_c **v48; // x11
  __int64 v49; // x0
  unsigned __int64 v50; // x10
  __int64 v51; // x0
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x1
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_438E1B9 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    sub_B775C4(&StringLiteral_13430/*"SvtW_StartClose"*/);
    byte_438E1B9 = 1;
  }
  BattleServantParamComponent__setSkillFlash(this, 1, method);
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)this->fields.facetex;
    if ( !gameObject )
      goto LABEL_78;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !this->fields.perf )
      goto LABEL_78;
    v10 = (UnityEngine_GameObject_o *)gameObject;
    gameObject = (__int64)BattlePerformance__get_MotionSkip(this->fields.perf, 0LL);
    if ( !gameObject )
      goto LABEL_78;
    LODWORD(v11) = COERCE_UNSIGNED_INT128(
                     ((long double (__fastcall *)(__int64, _QWORD, float))*(_QWORD *)(*(_QWORD *)gameObject + 488LL))(
                       gameObject,
                       *(_QWORD *)(*(_QWORD *)gameObject + 496LL),
                       0.4));
    white = UnityEngine_Color__get_white(0LL);
    g = white.fields.g;
    b = white.fields.b;
    a = white.fields.a;
    white.fields.g = white.fields.r;
    white.fields.b = g;
    white.fields.a = b;
    v15 = a;
    gameObject = (__int64)TweenColor__Begin(v10, v11, *(UnityEngine_Color_o *)&white.fields.g, 0LL);
    this->fields.isHideFaceTexture = 0;
  }
  modeWindow = this->fields.modeWindow;
  if ( modeWindow == 2 )
    goto LABEL_75;
  if ( modeWindow == 1 )
  {
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v18 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
    if ( (gameObject & 1) != 0 )
    {
      if ( Component_WebViewObject )
      {
        Item = SimpleAnimation__get_Item(
                 (SimpleAnimation_o *)Component_WebViewObject,
                 (System_String_o *)StringLiteral_13430/*"SvtW_StartClose"*/,
                 0LL);
        gameObject = (__int64)SimpleAnimation__get_Item(
                                (SimpleAnimation_o *)Component_WebViewObject,
                                (System_String_o *)StringLiteral_13430/*"SvtW_StartClose"*/,
                                0LL);
        if ( gameObject )
        {
          v20 = *(_QWORD *)gameObject;
          v21 = gameObject;
          if ( *(_WORD *)(*(_QWORD *)gameObject + 298LL) )
          {
            v22 = 0LL;
            v23 = (SimpleAnimation_State_c **)(*(_QWORD *)(v20 + 176) + 8LL);
            while ( *(v23 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v22;
              v23 += 2;
              if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)gameObject + 298LL) )
                goto LABEL_23;
            }
            v24 = v20 + 16LL * (*(_DWORD *)v23 + 13) + 312;
          }
          else
          {
LABEL_23:
            v24 = sub_B0F4C0(gameObject, SimpleAnimation_State_TypeInfo, 13LL);
          }
          gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
          if ( Item )
          {
            klass = Item->klass;
            v35 = v33;
            if ( *(_WORD *)&Item->klass->_2.bitflags1 )
            {
              v36 = 0LL;
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v36;
                p_offset += 2;
                if ( v36 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                  goto LABEL_51;
              }
              p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
            }
            else
            {
LABEL_51:
              p_method = sub_B0F4C0(Item, SimpleAnimation_State_TypeInfo, 4LL);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))p_method)(
              Item,
              *(_QWORD *)(p_method + 8),
              v35);
            gameObject = (__int64)SimpleAnimation__get_Item(
                                    (SimpleAnimation_o *)Component_WebViewObject,
                                    (System_String_o *)StringLiteral_13430/*"SvtW_StartClose"*/,
                                    0LL);
            if ( gameObject )
            {
              v39 = *(_QWORD *)gameObject;
              v40 = SimpleAnimation_State_TypeInfo;
              v41 = gameObject;
              if ( *(_WORD *)(*(_QWORD *)gameObject + 298LL) )
              {
                v42 = 0LL;
                v43 = (SimpleAnimation_State_c **)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *(v43 - 1) != SimpleAnimation_State_TypeInfo )
                {
                  ++v42;
                  v43 += 2;
                  if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)gameObject + 298LL) )
                    goto LABEL_72;
                }
LABEL_73:
                v51 = v39 + 16LL * (*(_DWORD *)v43 + 8) + 312;
                goto LABEL_74;
              }
              goto LABEL_72;
            }
          }
        }
      }
      goto LABEL_78;
    }
  }
  else
  {
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v18 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
    if ( (gameObject & 1) != 0 )
    {
      if ( Component_WebViewObject )
      {
        v25 = SimpleAnimation__get_Item(
                (SimpleAnimation_o *)Component_WebViewObject,
                (System_String_o *)StringLiteral_13430/*"SvtW_StartClose"*/,
                0LL);
        gameObject = (__int64)SimpleAnimation__get_Item(
                                (SimpleAnimation_o *)Component_WebViewObject,
                                (System_String_o *)StringLiteral_13430/*"SvtW_StartClose"*/,
                                0LL);
        if ( gameObject )
        {
          v26 = *(_QWORD *)gameObject;
          v27 = gameObject;
          if ( *(_WORD *)(*(_QWORD *)gameObject + 298LL) )
          {
            v28 = 0LL;
            v29 = (SimpleAnimation_State_c **)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *(v29 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v28;
              v29 += 2;
              if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)gameObject + 298LL) )
                goto LABEL_34;
            }
            v30 = v26 + 16LL * (*(_DWORD *)v29 + 13) + 312;
          }
          else
          {
LABEL_34:
            v30 = sub_B0F4C0(gameObject, SimpleAnimation_State_TypeInfo, 13LL);
          }
          gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
          if ( v25 )
          {
            v45 = v25->klass;
            v46 = v44;
            if ( *(_WORD *)&v25->klass->_2.bitflags1 )
            {
              v47 = 0LL;
              v48 = (SimpleAnimation_State_c **)&v45->_1.interfaceOffsets->offset;
              while ( *(v48 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v47;
                v48 += 2;
                if ( v47 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
                  goto LABEL_65;
              }
              v49 = (__int64)&v45->vtable[*(_DWORD *)v48 + 4].method;
            }
            else
            {
LABEL_65:
              v49 = sub_B0F4C0(v25, SimpleAnimation_State_TypeInfo, 4LL);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))v49)(v25, *(_QWORD *)(v49 + 8), v46);
            gameObject = (__int64)SimpleAnimation__get_Item(
                                    (SimpleAnimation_o *)Component_WebViewObject,
                                    (System_String_o *)StringLiteral_13430/*"SvtW_StartClose"*/,
                                    0LL);
            if ( gameObject )
            {
              v39 = *(_QWORD *)gameObject;
              v40 = SimpleAnimation_State_TypeInfo;
              v41 = gameObject;
              if ( *(_WORD *)(*(_QWORD *)gameObject + 298LL) )
              {
                v50 = 0LL;
                v43 = (SimpleAnimation_State_c **)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *(v43 - 1) != SimpleAnimation_State_TypeInfo )
                {
                  ++v50;
                  v43 += 2;
                  if ( v50 >= *(unsigned __int16 *)(*(_QWORD *)gameObject + 298LL) )
                    goto LABEL_72;
                }
                goto LABEL_73;
              }
LABEL_72:
              v51 = sub_B0F4C0(v41, v40, 8LL);
LABEL_74:
              (*(void (__fastcall **)(__int64, _QWORD, float))v51)(v41, *(_QWORD *)(v51 + 8), -1.0);
              gameObject = SimpleAnimation__Play_16815192(
                             (SimpleAnimation_o *)Component_WebViewObject,
                             (System_String_o *)StringLiteral_13430/*"SvtW_StartClose"*/,
                             0LL);
              goto LABEL_75;
            }
          }
        }
      }
LABEL_78:
      sub_B7769C(gameObject, v7);
    }
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    if ( v18 )
    {
      v31 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v18, (System_String_o *)StringLiteral_13430/*"SvtW_StartClose"*/, 0LL);
      gameObject = (__int64)UnityEngine_Animation__get_Item(
                              (UnityEngine_Animation_o *)v18,
                              (System_String_o *)StringLiteral_13430/*"SvtW_StartClose"*/,
                              0LL);
      if ( gameObject )
      {
        length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)gameObject, 0LL);
        if ( v31 )
        {
          UnityEngine_AnimationState__set_time(v31, length, 0LL);
          gameObject = (__int64)UnityEngine_Animation__get_Item(
                                  (UnityEngine_Animation_o *)v18,
                                  (System_String_o *)StringLiteral_13430/*"SvtW_StartClose"*/,
                                  0LL);
          if ( gameObject )
          {
            UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, -1.0, 0LL);
            gameObject = UnityEngine_Animation__Play_51745976(
                           (UnityEngine_Animation_o *)v18,
                           (System_String_o *)StringLiteral_13430/*"SvtW_StartClose"*/,
                           0LL);
            if ( !isPlayCommandSpellEffectStartAnim )
              goto LABEL_77;
            goto LABEL_76;
          }
        }
      }
    }
    goto LABEL_78;
  }
LABEL_75:
  if ( isPlayCommandSpellEffectStartAnim )
LABEL_76:
    BattleServantParamComponent__EffectStartStop(
      (BattleServantParamComponent_o *)gameObject,
      this->fields.commandSpellEffectDict,
      1,
      v9);
LABEL_77:
  this->fields.modeWindow = 2;
  BattleServantParamComponent__setTouch(this, 1, v8);
  BattleServantParamComponent__updateSkillIcon(this, 0, v52);
  BattleServantParamComponent__RemoveEffectClearRankUpBuff(this, v53);
}


void __fastcall BattleServantParamComponent__setPerf(
        BattleServantParamComponent_o *this,
        BattlePerformance_o *inperf,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.perf = inperf;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.perf,
    (System_Int32_array **)inperf,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__setRoleTyoe(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *roleTypeSprite; // x20
  UISprite_o *gameObject; // x0
  __int64 v5; // x1
  struct BattleServantData_o *data; // x8
  int32_t roleType; // w8
  __int64 *v8; // x8
  UnityEngine_Transform_o *transform; // x20
  int v10; // s0
  bool v13; // w1

  if ( (byte_438E1C3 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_18738/*"enemy_icon_leader"*/);
    sub_B775C4(&StringLiteral_22451/*"servant_icon"*/);
    byte_438E1C3 = 1;
  }
  roleTypeSprite = (UnityEngine_Object_o *)this->fields.roleTypeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UISprite_o *)UnityEngine_Object__op_Inequality(roleTypeSprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_26;
    if ( data->fields.isEnemy )
    {
      roleType = data->fields.roleType;
      gameObject = this->fields.roleTypeSprite;
      if ( roleType == 2 )
      {
        if ( !gameObject )
          goto LABEL_26;
        v8 = &StringLiteral_18738/*"enemy_icon_leader"*/;
        goto LABEL_18;
      }
      if ( !gameObject )
        goto LABEL_26;
      if ( roleType == 3 )
      {
        v8 = &StringLiteral_22451/*"servant_icon"*/;
LABEL_18:
        UISprite__set_spriteName(gameObject, (System_String_o *)*v8, 0LL);
        gameObject = this->fields.roleTypeSprite;
        if ( gameObject )
        {
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
          *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_zero(0LL);
          if ( transform )
          {
            UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v10, 0LL);
            gameObject = this->fields.roleTypeSprite;
            if ( gameObject )
            {
              gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
              if ( gameObject )
              {
                v13 = 1;
LABEL_25:
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v13, 0LL);
                return;
              }
            }
          }
        }
        goto LABEL_26;
      }
    }
    else
    {
      gameObject = this->fields.roleTypeSprite;
      if ( !gameObject )
        goto LABEL_26;
    }
    gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( gameObject )
    {
      v13 = 0;
      goto LABEL_25;
    }
LABEL_26:
    sub_B7769C(gameObject, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__setSkillFlash(
        BattleServantParamComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  struct BattleServantSkillIConComponent_array *skillIcon; // x8
  BattleServantParamComponent_o *v4; // x19
  __int64 v5; // x20
  bool v6; // w21
  int max_length; // w9
  __int64 v8; // x0

  skillIcon = this->fields.skillIcon;
  if ( !skillIcon )
LABEL_7:
    sub_B7769C(this, flg);
  v4 = this;
  v5 = 0LL;
  v6 = flg;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      v8 = sub_B776C8(this);
      sub_B77668(v8, 0LL);
    }
    this = (BattleServantParamComponent_o *)skillIcon->m_Items[v5];
    if ( this )
    {
      LOBYTE(this->fields.hpChange) = v6;
      BattleServantSkillIConComponent__updateFlashSkill(
        (BattleServantSkillIConComponent_o *)this,
        (const MethodInfo *)flg);
      skillIcon = v4->fields.skillIcon;
      ++v5;
      if ( skillIcon )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall BattleServantParamComponent__setTargetMark(
        BattleServantParamComponent_o *this,
        int32_t uniqueId,
        bool isTargetLock,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetMark; // x22
  UnityEngine_Object_o *lockTargetMark; // x22
  const MethodInfo *v9; // x1
  void *data; // x0
  int v11; // w25
  unsigned int localPosition; // s9
  unsigned int v13; // s8
  UIWidget_o *v14; // x23
  UIWidget_o *v15; // x22
  float v16; // s4
  float v17; // s5
  float v18; // s6
  UnityEngine_Object_o *v19; // x24
  float v20; // s4
  float v21; // s5
  float v22; // s6
  UnityEngine_Object_o *v23; // x21
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v25; // x8
  _BOOL4 v26; // w20
  UnityEngine_Transform_o *transform; // x0
  MethodInfo v28; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438E1CE & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1CE = 1;
  }
  if ( this->fields.data )
  {
    targetMark = (UnityEngine_Object_o *)this->fields.targetMark;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(targetMark, 0LL, 0LL) )
    {
      lockTargetMark = (UnityEngine_Object_o *)this->fields.lockTargetMark;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(lockTargetMark, 0LL, 0LL) )
      {
        data = this->fields.data;
        if ( !data )
          goto LABEL_72;
        v11 = *((_DWORD *)data + 6);
        if ( *((_BYTE *)data + 457) || BattleServantData__get_IsSuperBossUi((BattleServantData_o *)data, 0LL) )
        {
          data = this->fields.targetMark;
          if ( !data )
            goto LABEL_72;
          data = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)data, 0LL);
          if ( !data )
            goto LABEL_72;
          localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)data, 0LL);
        }
        else
        {
          localPosition = -1034158080;
        }
        data = this->fields.data;
        if ( !data )
          goto LABEL_72;
        if ( *((_BYTE *)data + 457) || BattleServantData__get_IsSuperBossUi((BattleServantData_o *)data, 0LL) )
        {
          data = this->fields.lockTargetMark;
          if ( !data )
            goto LABEL_72;
          data = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)data, 0LL);
          if ( !data )
            goto LABEL_72;
          v13 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)data, 0LL);
        }
        else
        {
          v13 = -1034289152;
        }
        data = this->fields.targetMark;
        if ( data )
        {
          data = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                   (UnityEngine_GameObject_o *)data,
                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( this->fields.targetMark )
          {
            v14 = (UIWidget_o *)data;
            data = UnityEngine_GameObject__get_transform(this->fields.targetMark, 0LL);
            if ( data )
            {
              v29.fields.y = 22.0;
              v29.fields.z = 0.0;
              LODWORD(v29.fields.x) = localPosition;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)data, v29, 0LL);
              if ( v14 )
              {
                UIWidget__set_depth(v14, -29, 0LL);
                UIWidget__set_width(v14, 74, 0LL);
                UIWidget__set_height(v14, 74, 0LL);
                data = this->fields.lockTargetMark;
                if ( data )
                {
                  data = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           (UnityEngine_GameObject_o *)data,
                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                  if ( this->fields.lockTargetMark )
                  {
                    v15 = (UIWidget_o *)data;
                    data = UnityEngine_GameObject__get_transform(this->fields.lockTargetMark, 0LL);
                    if ( data )
                    {
                      v30.fields.z = 0.0;
                      LODWORD(v30.fields.x) = v13;
                      v30.fields.y = 22.0;
                      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)data, v30, 0LL);
                      if ( v15 )
                      {
                        UIWidget__set_depth(v15, -30, 0LL);
                        UIWidget__set_width(v15, 74, 0LL);
                        UIWidget__set_height(v15, 74, 0LL);
                        v32.fields.r = 1.0;
                        v32.fields.g = 1.0;
                        v32.fields.b = 1.0;
                        v28.methodPointer = 0LL;
                        v28.invoker_method = 0LL;
                        UnityEngine_Color___ctor_41410832(v32, v16, v17, v18, &v28);
                        *(_QWORD *)&v33.fields.r = v28.methodPointer;
                        *(_QWORD *)&v33.fields.b = v28.invoker_method;
                        UIWidget__set_color(v15, v33, 0LL);
                        v19 = (UnityEngine_Object_o *)this->fields.targetMark;
                        if ( isTargetLock )
                        {
                          if ( v19 )
                          {
                            data = UnityEngine_GameObject__get_gameObject(this->fields.targetMark, 0LL);
                            if ( data )
                            {
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, v11 == uniqueId, 0LL);
                              data = this->fields.lockTargetMark;
                              if ( data )
                              {
                                data = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)data, 0LL);
                                if ( data )
                                {
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
                                  data = this->fields.data;
                                  if ( data )
                                  {
                                    if ( !BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL) )
                                    {
                                      data = this->fields.data;
                                      if ( !data )
                                        goto LABEL_72;
                                      if ( !BattleServantData__isGuts((BattleServantData_o *)data, 0LL) )
                                        return;
                                    }
                                    data = this->fields.data;
                                    if ( data )
                                    {
                                      if ( !BattleServantData__isUpHate((BattleServantData_o *)data, 0LL, 0LL) )
                                        return;
                                      data = this->fields.lockTargetMark;
                                      if ( data )
                                      {
                                        data = UnityEngine_GameObject__get_gameObject(
                                                 (UnityEngine_GameObject_o *)data,
                                                 0LL);
                                        if ( data )
                                        {
                                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
                                          if ( v11 != uniqueId )
                                            return;
                                          UIWidget__set_depth(v14, -29, 0LL);
                                          UIWidget__set_width(v14, 70, 0LL);
                                          UIWidget__set_height(v14, 70, 0LL);
                                          data = this->fields.lockTargetMark;
                                          if ( data )
                                          {
                                            data = UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)data,
                                                     0LL);
                                            if ( data )
                                            {
                                              v31.fields.z = 0.0;
                                              LODWORD(v31.fields.x) = v13;
                                              v31.fields.y = 22.0;
                                              UnityEngine_Transform__set_localPosition(
                                                (UnityEngine_Transform_o *)data,
                                                v31,
                                                0LL);
                                              UIWidget__set_depth(v15, -30, 0LL);
                                              UIWidget__set_width(v15, 78, 0LL);
                                              UIWidget__set_height(v15, 78, 0LL);
                                              v34.fields.r = 1.0;
                                              v34.fields.g = 0.0;
                                              v34.fields.b = 0.0;
                                              v28.methodPointer = 0LL;
                                              v28.invoker_method = 0LL;
                                              UnityEngine_Color___ctor_41410832(v34, v20, v21, v22, &v28);
                                              *(_QWORD *)&v35.fields.r = v28.methodPointer;
                                              *(_QWORD *)&v35.fields.b = v28.invoker_method;
                                              UIWidget__set_color(v15, v35, 0LL);
                                              return;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else
                        {
                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          }
                          if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
                          {
                            data = this->fields.targetMark;
                            if ( !data )
                              goto LABEL_72;
                            data = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)data, 0LL);
                            if ( !data )
                              goto LABEL_72;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, v11 == uniqueId, 0LL);
                          }
                          v23 = (UnityEngine_Object_o *)this->fields.lockTargetMark;
                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          }
                          data = (void *)UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
                          if ( ((unsigned __int8)data & 1) != 0 )
                          {
                            data = this->fields.lockTargetMark;
                            if ( !data )
                              goto LABEL_72;
                            data = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)data, 0LL);
                            if ( !data )
                              goto LABEL_72;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
                          }
                          perf = this->fields.perf;
                          if ( perf )
                          {
                            v25 = perf->fields.data;
                            if ( v25 )
                            {
                              if ( !v25->fields.isMultiTargetBattle )
                                return;
                              v26 = uniqueId == -1 || v11 == uniqueId;
                              transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
                              CommonFunction__SetColorAllChild(transform, v26, this->fields.GRAY, 0LL);
                              this->fields.isActiveHpBar = v26;
                              if ( !v26 )
                                return;
                              data = this->fields.showBuffComponent;
                              if ( data )
                              {
                                BattleServantShowBuffComponent__UpdateActiveBuffList(
                                  (BattleServantShowBuffComponent_o *)data,
                                  v9);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_72:
        sub_B7769C(data, v9);
      }
    }
  }
}


void __fastcall BattleServantParamComponent__setTouch(
        BattleServantParamComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Component_WebViewObject; // x20
  BattleServantData_o *data; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_438E1BB & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1BB = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !flg || (data = this->fields.data) != 0LL && BattleServantData__isAlive(data, 0, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
    if ( v7 )
    {
      if ( !Component_WebViewObject )
        sub_B7769C(v7, v8);
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, flg, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__setVisible(
        BattleServantParamComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *root; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x20

  if ( (byte_438E1BA & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1BA = 1;
  }
  root = this->fields.root;
  if ( !root )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(root, flg, 0LL);
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  root = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)root & 1) != 0 )
  {
    if ( Component_WebViewObject )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, flg, 0LL);
      return;
    }
LABEL_11:
    sub_B7769C(root, flg);
  }
}


void __fastcall BattleServantParamComponent__shiftUpdateStatus(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v2; // x21
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v4; // x8
  struct BattleActionData_o *nowAction; // x9
  char v6; // w19
  int32_t NotShiftUpdateFlag; // w0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  struct BattleServantData_o *data; // x8
  struct BattlePerformance_o *v11; // x8
  struct BattleActionData_o *v12; // x8
  int32_t MaxHp; // w0
  const MethodInfo *v14; // x4
  UnityEngine_GameObject_o *gameObject; // x19
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Object_array *v22; // x20
  __int64 v23; // x0
  System_Int32_array **v24; // x1
  __int64 v25; // x2
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  __int64 v40; // x2
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x1
  __int64 v69; // x2
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x21
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x1
  __int64 v84; // x2
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x21
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **v98; // x1
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x1
  System_Collections_Hashtable_o *v106; // x0
  __int64 v107; // x0
  __int64 v108; // x0
  char v109[4]; // [xsp+8h] [xbp-38h] BYREF
  int v110; // [xsp+Ch] [xbp-34h] BYREF
  int32_t NowHp; // [xsp+18h] [xbp-28h] BYREF
  int v112; // [xsp+1Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_438E1D9 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&SeManager_TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&StringLiteral_19296/*"from"*/);
    sub_B775C4(&StringLiteral_19801/*"ignoretimescale"*/);
    sub_B775C4(&StringLiteral_23154/*"time"*/);
    sub_B775C4(&StringLiteral_23422/*"updateShiftHplabel"*/);
    sub_B775C4(&StringLiteral_21711/*"onupdate"*/);
    sub_B775C4(&StringLiteral_23192/*"to"*/);
    sub_B775C4(&StringLiteral_4332/*"ComplateUpdateShiftHplabel"*/);
    sub_B775C4(&StringLiteral_21702/*"oncomplete"*/);
    this = (BattleServantParamComponent_o *)sub_B775C4(&iTween_TypeInfo);
    byte_438E1D9 = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_84;
  this = (BattleServantParamComponent_o *)perf->fields.nowAction;
  if ( !this )
    goto LABEL_84;
  this = (BattleServantParamComponent_o *)BattleActionData__IsUpdateShiftHp((BattleActionData_o *)this, 0LL);
  v4 = v2->fields.perf;
  if ( !v4 )
    goto LABEL_84;
  nowAction = v4->fields.nowAction;
  if ( !nowAction )
    goto LABEL_84;
  v6 = (char)this;
  if ( nowAction->fields.isSkillShift )
  {
    this = (BattleServantParamComponent_o *)v2->fields.data;
    if ( !this )
      goto LABEL_84;
    BattleServantData__updateHp((BattleServantData_o *)this, 0LL);
    v4 = v2->fields.perf;
    if ( !v4 )
      goto LABEL_84;
  }
  this = (BattleServantParamComponent_o *)v4->fields.nowAction;
  if ( !this )
    goto LABEL_84;
  NotShiftUpdateFlag = BattleActionData__get_NotShiftUpdateFlag((BattleActionData_o *)this, 0LL);
  BattleServantParamComponent__initUpdateView(v2, NotShiftUpdateFlag, v8);
  data = v2->fields.data;
  if ( data )
    BattleServantParamComponent__updateBuffIcon(v2, data->fields.buffData, v9);
  if ( (v6 & 1) != 0 )
  {
    v11 = v2->fields.perf;
    if ( v11 )
    {
      v12 = v11->fields.nowAction;
      if ( v12 )
      {
        if ( v12->fields.isSkillShift )
        {
          if ( (WORD1(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SeManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
          }
          SeManager__PlayCommonSe(24, 0LL);
          return;
        }
        if ( (WORD1(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SeManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        }
        SeManager__PlayCommonSe(16, 0LL);
        this = (BattleServantParamComponent_o *)v2->fields.data;
        if ( this )
        {
          MaxHp = BattleServantData__getMaxHp((BattleServantData_o *)this, 0LL);
          BattleServantParamComponent__updateHplabel(v2, 0, MaxHp, 1, v14);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
          this = (BattleServantParamComponent_o *)sub_B775DC(object___TypeInfo, 12LL);
          if ( this )
          {
            v22 = (System_Object_array *)this;
            v23 = StringLiteral_19296/*"from"*/;
            if ( StringLiteral_19296/*"from"*/ )
            {
              v23 = sub_B77684(StringLiteral_19296/*"from"*/, v22->obj.klass->_1.element_class);
              if ( !v23 )
                goto LABEL_86;
              v24 = (System_Int32_array **)StringLiteral_19296/*"from"*/;
            }
            else
            {
              v24 = 0LL;
            }
            if ( !v22->max_length )
              goto LABEL_85;
            v22->m_Items[0] = (Il2CppObject *)v24;
            sub_B77560((BattleServantConfConponent_o *)v22->m_Items, v24, v16, v17, v18, v19, v20, v21);
            v112 = 0;
            v23 = j_il2cpp_value_box_0(int_TypeInfo, &v112, v25);
            v32 = (System_Int32_array **)v23;
            if ( v23 )
            {
              v23 = sub_B77684(v23, v22->obj.klass->_1.element_class);
              if ( !v23 )
                goto LABEL_86;
            }
            if ( v22->max_length <= 1 )
              goto LABEL_85;
            v22->m_Items[1] = (Il2CppObject *)v32;
            sub_B77560((BattleServantConfConponent_o *)&v22->m_Items[1], v32, v26, v27, v28, v29, v30, v31);
            v23 = StringLiteral_23192/*"to"*/;
            if ( StringLiteral_23192/*"to"*/ )
            {
              v23 = sub_B77684(StringLiteral_23192/*"to"*/, v22->obj.klass->_1.element_class);
              if ( !v23 )
                goto LABEL_86;
              v39 = (System_Int32_array **)StringLiteral_23192/*"to"*/;
            }
            else
            {
              v39 = 0LL;
            }
            if ( v22->max_length <= 2 )
              goto LABEL_85;
            v22->m_Items[2] = (Il2CppObject *)v39;
            sub_B77560((BattleServantConfConponent_o *)&v22->m_Items[2], v39, v33, v34, v35, v36, v37, v38);
            this = (BattleServantParamComponent_o *)v2->fields.data;
            if ( this )
            {
              NowHp = BattleServantData__getNowHp((BattleServantData_o *)this, 0LL);
              v23 = j_il2cpp_value_box_0(int_TypeInfo, &NowHp, v40);
              v47 = (System_Int32_array **)v23;
              if ( !v23 || (v23 = sub_B77684(v23, v22->obj.klass->_1.element_class)) != 0 )
              {
                if ( v22->max_length <= 3 )
                  goto LABEL_85;
                v22->m_Items[3] = (Il2CppObject *)v47;
                sub_B77560((BattleServantConfConponent_o *)&v22->m_Items[3], v47, v41, v42, v43, v44, v45, v46);
                v23 = StringLiteral_21711/*"onupdate"*/;
                if ( StringLiteral_21711/*"onupdate"*/ )
                {
                  v23 = sub_B77684(StringLiteral_21711/*"onupdate"*/, v22->obj.klass->_1.element_class);
                  if ( !v23 )
                    goto LABEL_86;
                  v54 = (System_Int32_array **)StringLiteral_21711/*"onupdate"*/;
                }
                else
                {
                  v54 = 0LL;
                }
                if ( v22->max_length <= 4 )
                  goto LABEL_85;
                v22->m_Items[4] = (Il2CppObject *)v54;
                sub_B77560((BattleServantConfConponent_o *)&v22->m_Items[4], v54, v48, v49, v50, v51, v52, v53);
                v23 = StringLiteral_23422/*"updateShiftHplabel"*/;
                if ( StringLiteral_23422/*"updateShiftHplabel"*/ )
                {
                  v23 = sub_B77684(StringLiteral_23422/*"updateShiftHplabel"*/, v22->obj.klass->_1.element_class);
                  if ( !v23 )
                    goto LABEL_86;
                  v61 = (System_Int32_array **)StringLiteral_23422/*"updateShiftHplabel"*/;
                }
                else
                {
                  v61 = 0LL;
                }
                if ( v22->max_length <= 5 )
                  goto LABEL_85;
                v22->m_Items[5] = (Il2CppObject *)v61;
                sub_B77560((BattleServantConfConponent_o *)&v22->m_Items[5], v61, v55, v56, v57, v58, v59, v60);
                v23 = StringLiteral_23154/*"time"*/;
                if ( StringLiteral_23154/*"time"*/ )
                {
                  v23 = sub_B77684(StringLiteral_23154/*"time"*/, v22->obj.klass->_1.element_class);
                  if ( !v23 )
                    goto LABEL_86;
                  v68 = (System_Int32_array **)StringLiteral_23154/*"time"*/;
                }
                else
                {
                  v68 = 0LL;
                }
                if ( v22->max_length <= 6 )
                  goto LABEL_85;
                v22->m_Items[6] = (Il2CppObject *)v68;
                sub_B77560((BattleServantConfConponent_o *)&v22->m_Items[6], v68, v62, v63, v64, v65, v66, v67);
                v110 = 1069547520;
                v23 = j_il2cpp_value_box_0(float_TypeInfo, &v110, v69);
                v76 = (System_Int32_array **)v23;
                if ( !v23 || (v23 = sub_B77684(v23, v22->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v22->max_length <= 7 )
                    goto LABEL_85;
                  v22->m_Items[7] = (Il2CppObject *)v76;
                  sub_B77560((BattleServantConfConponent_o *)&v22->m_Items[7], v76, v70, v71, v72, v73, v74, v75);
                  v23 = StringLiteral_19801/*"ignoretimescale"*/;
                  if ( StringLiteral_19801/*"ignoretimescale"*/ )
                  {
                    v23 = sub_B77684(StringLiteral_19801/*"ignoretimescale"*/, v22->obj.klass->_1.element_class);
                    if ( !v23 )
                      goto LABEL_86;
                    v83 = (System_Int32_array **)StringLiteral_19801/*"ignoretimescale"*/;
                  }
                  else
                  {
                    v83 = 0LL;
                  }
                  if ( v22->max_length <= 8 )
                    goto LABEL_85;
                  v22->m_Items[8] = (Il2CppObject *)v83;
                  sub_B77560((BattleServantConfConponent_o *)&v22->m_Items[8], v83, v77, v78, v79, v80, v81, v82);
                  v109[0] = 1;
                  v23 = j_il2cpp_value_box_0(bool_TypeInfo, v109, v84);
                  v91 = (System_Int32_array **)v23;
                  if ( !v23 || (v23 = sub_B77684(v23, v22->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v22->max_length <= 9 )
                      goto LABEL_85;
                    v22->m_Items[9] = (Il2CppObject *)v91;
                    sub_B77560((BattleServantConfConponent_o *)&v22->m_Items[9], v91, v85, v86, v87, v88, v89, v90);
                    v23 = StringLiteral_21702/*"oncomplete"*/;
                    if ( StringLiteral_21702/*"oncomplete"*/ )
                    {
                      v23 = sub_B77684(StringLiteral_21702/*"oncomplete"*/, v22->obj.klass->_1.element_class);
                      if ( !v23 )
                        goto LABEL_86;
                      v98 = (System_Int32_array **)StringLiteral_21702/*"oncomplete"*/;
                    }
                    else
                    {
                      v98 = 0LL;
                    }
                    if ( v22->max_length <= 0xA )
                      goto LABEL_85;
                    v22->m_Items[10] = (Il2CppObject *)v98;
                    sub_B77560((BattleServantConfConponent_o *)&v22->m_Items[10], v98, v92, v93, v94, v95, v96, v97);
                    v23 = StringLiteral_4332/*"ComplateUpdateShiftHplabel"*/;
                    if ( !StringLiteral_4332/*"ComplateUpdateShiftHplabel"*/ )
                    {
                      v105 = 0LL;
LABEL_78:
                      if ( v22->max_length > 0xB )
                      {
                        v22->m_Items[11] = (Il2CppObject *)v105;
                        sub_B77560(
                          (BattleServantConfConponent_o *)&v22->m_Items[11],
                          v105,
                          v99,
                          v100,
                          v101,
                          v102,
                          v103,
                          v104);
                        if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !iTween_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                        }
                        v106 = iTween__Hash(v22, 0LL);
                        iTween__ValueTo(gameObject, v106, 0LL);
                        return;
                      }
LABEL_85:
                      v107 = sub_B776C8(v23);
                      sub_B77668(v107, 0LL);
                    }
                    v23 = sub_B77684(StringLiteral_4332/*"ComplateUpdateShiftHplabel"*/, v22->obj.klass->_1.element_class);
                    if ( v23 )
                    {
                      v105 = (System_Int32_array **)StringLiteral_4332/*"ComplateUpdateShiftHplabel"*/;
                      goto LABEL_78;
                    }
                  }
                }
              }
LABEL_86:
              v108 = sub_B776BC(v23);
              sub_B77668(v108, 0LL);
            }
          }
        }
      }
    }
LABEL_84:
    sub_B7769C(this, method);
  }
}


void __fastcall BattleServantParamComponent__showSideEffect(
        BattleServantParamComponent_o *this,
        BattleActionData_BuffData_o *buffData,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *sideEffectShowQueue; // x0
  const MethodInfo *v6; // x1
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_438E1DB & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__);
    byte_438E1DB = 1;
  }
  sideEffectShowQueue = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields.sideEffectShowQueue;
  if ( !sideEffectShowQueue )
    sub_B7769C(0LL, buffData);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    sideEffectShowQueue,
    (Mono_Net_CFNetwork_GetProxyData_o *)buffData,
    (const MethodInfo_2F23084 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__);
  if ( !this->fields.isShowingSideEffect )
  {
    this->fields.isShowingSideEffect = 1;
    v7 = BattleServantParamComponent__showSideEffectList(this, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__showSideEffectList(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438E1DC & 1) == 0 )
  {
    sub_B775C4(&BattleServantParamComponent__showSideEffectList_d__109_TypeInfo);
    byte_438E1DC = 1;
  }
  v3 = sub_B77694(BattleServantParamComponent__showSideEffectList_d__109_TypeInfo);
  BattleServantParamComponent__showSideEffectList_d__109___ctor(
    (BattleServantParamComponent__showSideEffectList_d__109_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleServantParamComponent__updateBuffIcon(
        BattleServantParamComponent_o *this,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *showBuffComponent; // x21
  __int64 ShowServantParam; // x0
  const MethodInfo *v7; // x1
  BattleServantShowBuffComponent_o *v8; // x21
  const MethodInfo *v9; // x2
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  struct BattleServantData_o *v12; // x8
  UnityEngine_Transform_o *transform; // x0
  struct BattleServantData_o *v14; // x8
  UnityEngine_Object_o *ServantActor; // x21
  __int64 v16; // x2
  void *monitor; // x8
  System_String_o *v18; // x22
  __int64 v19; // x23
  System_String_o *v20; // x24
  __int64 v21; // x2
  HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_c *v22; // x0
  int v23; // w8
  __int64 v24; // x23
  System_String_o *v25; // x24
  __int64 v26; // x22
  System_String_o *v27; // x23
  struct BattleServantData_o *v28; // x8
  int v29; // w8
  __int64 v30; // x21
  int v31; // w23
  char v32; // w22
  __int64 v33; // x27
  int v34; // w27
  struct BattleServantData_o *v35; // x8
  UnityEngine_Object_o *v36; // x20
  __int64 v37; // x0
  int v38; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_438E1CD & 1) == 0 )
  {
    sub_B775C4(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_13584/*"TAMAMOCAT_STUN_BUFF_ID"*/);
    sub_B775C4(&StringLiteral_23673/*"wait"*/);
    byte_438E1CD = 1;
  }
  v38 = 0;
  showBuffComponent = (UnityEngine_Object_o *)this->fields.showBuffComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  ShowServantParam = UnityEngine_Object__op_Equality(showBuffComponent, 0LL, 0LL);
  if ( (ShowServantParam & 1) != 0 )
    return;
  if ( !buffData )
    goto LABEL_60;
  v8 = this->fields.showBuffComponent;
  ShowServantParam = (__int64)BattleBuffData__getShowServantParam(buffData, 0LL);
  if ( !v8 )
    goto LABEL_60;
  BattleServantShowBuffComponent__setBuffList(v8, (BattleBuffData_ShowBuffData_array *)ShowServantParam, v9);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_60;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_60;
  if ( data->fields.isMultiTargetBattle )
  {
    v12 = this->fields.data;
    if ( !v12 )
      goto LABEL_60;
    if ( v12->fields.isEnemy )
    {
      ShowServantParam = (__int64)this->fields.showBuffComponent;
      if ( !ShowServantParam )
        goto LABEL_60;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ShowServantParam, 0LL);
      CommonFunction__SetColorAllChild(transform, this->fields.isActiveHpBar, this->fields.GRAY, 0LL);
      if ( this->fields.isActiveHpBar )
      {
        ShowServantParam = (__int64)this->fields.showBuffComponent;
        if ( !ShowServantParam )
          goto LABEL_60;
        BattleServantShowBuffComponent__UpdateActiveBuffList((BattleServantShowBuffComponent_o *)ShowServantParam, v7);
      }
    }
  }
  v14 = this->fields.data;
  if ( !v14 || (ShowServantParam = (__int64)this->fields.perf) == 0 )
LABEL_60:
    sub_B7769C(ShowServantParam, v7);
  ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                           (BattlePerformance_o *)ShowServantParam,
                                           v14->fields.uniqueId,
                                           0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  ShowServantParam = UnityEngine_Object__op_Inequality(ServantActor, 0LL, 0LL);
  if ( (ShowServantParam & 1) != 0 )
  {
    ShowServantParam = (__int64)this->fields.data;
    if ( !ShowServantParam )
      goto LABEL_60;
    ShowServantParam = BattleServantData__IsCounterWaitMotion((BattleServantData_o *)ShowServantParam, 0LL);
    if ( !ServantActor )
      goto LABEL_60;
    monitor = ServantActor[1].monitor;
    if ( !monitor )
      goto LABEL_60;
    v18 = (System_String_o *)*((_QWORD *)monitor + 15);
    if ( (ShowServantParam & 1) != 0 )
    {
      v38 = 9;
      ShowServantParam = j_il2cpp_value_box_0(
                           HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo,
                           &v38,
                           v16);
      if ( !ShowServantParam )
        goto LABEL_60;
      v19 = ShowServantParam;
      v20 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ShowServantParam + 360LL))(
                                 ShowServantParam,
                                 *(_QWORD *)(*(_QWORD *)ShowServantParam + 368LL));
      v38 = *(_DWORD *)j_il2cpp_object_unbox_0(v19);
      ShowServantParam = BasicHelper__EqualExceptNullOrEmpty(v18, v20, 0LL);
      if ( (ShowServantParam & 1) == 0 )
        goto LABEL_36;
      v22 = HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
      v23 = 49;
    }
    else
    {
      v38 = 49;
      ShowServantParam = j_il2cpp_value_box_0(
                           HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo,
                           &v38,
                           v16);
      if ( !ShowServantParam )
        goto LABEL_60;
      v24 = ShowServantParam;
      v25 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ShowServantParam + 360LL))(
                                 ShowServantParam,
                                 *(_QWORD *)(*(_QWORD *)ShowServantParam + 368LL));
      v38 = *(_DWORD *)j_il2cpp_object_unbox_0(v24);
      ShowServantParam = BasicHelper__EqualExceptNullOrEmpty(v18, v25, 0LL);
      if ( (ShowServantParam & 1) == 0 )
        goto LABEL_36;
      v22 = HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
      v23 = 9;
    }
    v38 = v23;
    ShowServantParam = j_il2cpp_value_box_0(v22, &v38, v21);
    if ( !ShowServantParam )
      goto LABEL_60;
    v26 = ShowServantParam;
    v27 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ShowServantParam + 360LL))(
                               ShowServantParam,
                               *(_QWORD *)(*(_QWORD *)ShowServantParam + 368LL));
    v38 = *(_DWORD *)j_il2cpp_object_unbox_0(v26);
    BattleActorControl__playAnimation_22508132((BattleActorControl_o *)ServantActor, v27, 0, 0LL);
  }
LABEL_36:
  v28 = this->fields.data;
  if ( !v28 )
    goto LABEL_60;
  if ( !v28->fields.isSleepWaitMode )
    return;
  ShowServantParam = (__int64)BattleBuffData__getActiveList(buffData, 1, 0LL);
  if ( !ShowServantParam )
    goto LABEL_60;
  v29 = *(_DWORD *)(ShowServantParam + 24);
  v30 = ShowServantParam;
  if ( v29 < 1 )
    goto LABEL_64;
  v31 = 0;
  v32 = 0;
  do
  {
    if ( v31 >= (unsigned int)v29 )
    {
      v37 = sub_B776C8(ShowServantParam);
      sub_B77668(v37, 0LL);
    }
    v33 = *(_QWORD *)(v30 + 8LL * v31 + 32);
    if ( !v33 )
      goto LABEL_60;
    if ( !*(_BYTE *)(v33 + 385) )
    {
      ShowServantParam = (__int64)BattleBuffData__get_buffMst(buffData, 0LL);
      if ( !ShowServantParam )
        goto LABEL_60;
      ShowServantParam = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)ShowServantParam,
                                    *(_DWORD *)(v33 + 16),
                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !ShowServantParam )
        goto LABEL_60;
      v34 = *(_DWORD *)(ShowServantParam + 16);
      ShowServantParam = ConstantMaster__getValue((System_String_o *)StringLiteral_13584/*"TAMAMOCAT_STUN_BUFF_ID"*/, 0LL);
      v32 |= v34 == (_DWORD)ShowServantParam;
    }
    v29 = *(_DWORD *)(v30 + 24);
    ++v31;
  }
  while ( v31 < v29 );
  if ( (v32 & 1) == 0 )
  {
LABEL_64:
    ShowServantParam = (__int64)this->fields.data;
    if ( !ShowServantParam )
      goto LABEL_60;
    BattleServantData__SetIsSleepWaitMode((BattleServantData_o *)ShowServantParam, 0, 0LL);
    v35 = this->fields.data;
    if ( !v35 )
      goto LABEL_60;
    ShowServantParam = (__int64)this->fields.perf;
    if ( !ShowServantParam )
      goto LABEL_60;
    v36 = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                    (BattlePerformance_o *)ShowServantParam,
                                    v35->fields.uniqueId,
                                    0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    ShowServantParam = UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
    if ( (ShowServantParam & 1) != 0 )
    {
      if ( v36 )
      {
        if ( BattleActorControl__checkID((BattleActorControl_o *)v36, this->fields.uniqueID, 0LL) )
          BattleActorControl__playAnimation_22508132(
            (BattleActorControl_o *)v36,
            (System_String_o *)StringLiteral_23673/*"wait"*/,
            0,
            0LL);
        return;
      }
      goto LABEL_60;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__updateBuffIconList(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtData,
        bool doAuraUpdate,
        bool doClassIconAuraUpdate,
        const MethodInfo *method)
{
  struct BattleServantData_o *data; // x8
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  BattlePerformance_o *perf; // x0
  BattleActorControl_o *ServantActor; // x20
  System_Int32_array *AuraIdList; // x1

  if ( (byte_438E1CC & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1CC = 1;
  }
  if ( svtData )
  {
    data = this->fields.data;
    if ( data )
    {
      if ( svtData->fields.uniqueId == data->fields.uniqueId )
      {
        BattleServantParamComponent__updateBuffIcon(this, svtData->fields.buffData, (const MethodInfo *)doAuraUpdate);
        if ( doClassIconAuraUpdate )
          BattleServantParamComponent__UpdateClassIconEffect(this, svtData, v11);
        perf = this->fields.perf;
        if ( !perf )
          goto LABEL_18;
        ServantActor = BattlePerformance__getServantActor(perf, svtData->fields.uniqueId, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ServantActor, 0LL, 0LL);
        if ( ((unsigned __int8)perf & 1) == 0 )
        {
          if ( !ServantActor )
            goto LABEL_18;
          BattleActorControl__updateBuffLoopEffect(ServantActor, 0LL);
          BattleActorControl__UpdateActorVisibilityByBuff(ServantActor, 0, 0LL);
          if ( doAuraUpdate )
          {
            perf = (BattlePerformance_o *)ServantActor->fields.battleSvtData;
            if ( perf )
            {
              AuraIdList = BattleServantData__getAuraIdList((BattleServantData_o *)perf, 0LL);
              BattleActorControl__updateAura(ServantActor, AuraIdList, 0LL);
              return;
            }
LABEL_18:
            sub_B7769C(perf, v10);
          }
        }
      }
    }
  }
}


void __fastcall BattleServantParamComponent__updateBuffIconSelf(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleServantData_o *data; // x8

  data = this->fields.data;
  if ( data )
    BattleServantParamComponent__updateBuffIcon(this, data->fields.buffData, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__updateHpbar(
        BattleServantParamComponent_o *this,
        int32_t now,
        int32_t max,
        const MethodInfo *method)
{
  BattleHpGaugeBarComponent_o *data; // x0
  int v8; // w0
  UnityEngine_Object_o *hpGauge; // x22

  if ( (byte_438E1C0 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1C0 = 1;
  }
  data = (BattleHpGaugeBarComponent_o *)this->fields.data;
  if ( !data )
    goto LABEL_18;
  v8 = ((__int64 (__fastcall *)(BattleHpGaugeBarComponent_o *, void *, _QWORD, const MethodInfo *))data->klass[1]._1.parent)(
         data,
         data->klass[1]._1.generic_class,
         *(_QWORD *)&max,
         method);
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( (v8 & 0x80000000) != 0 )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL) )
    {
      data = this->fields.hpGauge;
      if ( !data )
        goto LABEL_18;
      BattleHpGaugeBarComponent__setZero(data, 0LL);
    }
  }
  else
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL) )
    {
      data = this->fields.hpGauge;
      if ( data )
      {
        BattleHpGaugeBarComponent__setValue(data, now, max, 0LL);
        return;
      }
LABEL_18:
      sub_B7769C(data, *(_QWORD *)&now);
    }
  }
}


void __fastcall BattleServantParamComponent__updateHplabel(
        BattleServantParamComponent_o *this,
        int32_t now,
        int32_t max,
        bool isDispBreak,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hplabel; // x24
  __int64 *v10; // x8
  System_String_o *v11; // x23
  __int64 v12; // x2
  UILabel_o *v13; // x24
  Il2CppObject *v14; // x0
  System_String_o *data; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *Component_WebViewObject; // x24
  UnityEngine_Object_o *maxhplabel; // x24
  __int64 v19; // x2
  UILabel_o *v20; // x24
  Il2CppObject *v21; // x0
  UnityEngine_Object_o *totalhplabel; // x23
  __int64 v23; // x2
  UILabel_o *v24; // x23
  Il2CppObject *v25; // x24
  __int64 v26; // x2
  Il2CppObject *v27; // x0
  __int64 *v28; // x8
  __int64 v29; // x2
  UnityEngine_Object_o *breakSprite; // x22
  bool isShiftableServant; // w8
  bool v32; // w9
  bool v33; // w20
  UnityEngine_Object_o *v34; // x21
  UnityEngine_Object_o *v35; // x21
  UnityEngine_Object_o *v36; // x21
  int32_t v37; // [xsp+8h] [xbp-48h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_438E1C1 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_24025/*"{0}"*/);
    sub_B775C4(&StringLiteral_24097/*"{0}/{1}"*/);
    sub_B775C4(&StringLiteral_23975/*"{0:#,0}"*/);
    sub_B775C4(&StringLiteral_23978/*"{0:#,0}/{1:#,0}"*/);
    byte_438E1C1 = 1;
  }
  hplabel = (UnityEngine_Object_o *)this->fields.hplabel;
  if ( this->fields.hpformatflg )
    v10 = &StringLiteral_23975/*"{0:#,0}"*/;
  else
    v10 = &StringLiteral_24025/*"{0}"*/;
  v11 = (System_String_o *)*v10;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(hplabel, 0LL, 0LL) )
  {
    v13 = this->fields.hplabel;
    v38 = now;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v12);
    data = System_String__Format(v11, v14, 0LL);
    if ( !v13 )
      goto LABEL_59;
    UILabel__set_text(v13, data, 0LL);
    data = (System_String_o *)this->fields.hplabel;
    if ( !data )
      goto LABEL_59;
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)data,
                                                        (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    data = (System_String_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( !Component_WebViewObject )
        goto LABEL_59;
      CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)Component_WebViewObject, 0LL);
    }
  }
  maxhplabel = (UnityEngine_Object_o *)this->fields.maxhplabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maxhplabel, 0LL, 0LL) )
  {
    v20 = this->fields.maxhplabel;
    v38 = max;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v19);
    data = System_String__Format(v11, v21, 0LL);
    if ( !v20 )
      goto LABEL_59;
    UILabel__set_text(v20, data, 0LL);
  }
  totalhplabel = (UnityEngine_Object_o *)this->fields.totalhplabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(totalhplabel, 0LL, 0LL) )
  {
    v24 = this->fields.totalhplabel;
    if ( this->fields.hpformatflg )
    {
      v38 = now;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v23);
      v37 = max;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v26);
      v28 = &StringLiteral_23978/*"{0:#,0}/{1:#,0}"*/;
    }
    else
    {
      v38 = now;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v23);
      v37 = max;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v29);
      v28 = &StringLiteral_24097/*"{0}/{1}"*/;
    }
    data = System_String__Format_44897472((System_String_o *)*v28, v25, v27, 0LL);
    if ( !v24 )
      goto LABEL_59;
    UILabel__set_text(v24, data, 0LL);
  }
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0LL, 0LL) && isDispBreak )
  {
    data = (System_String_o *)this->fields.data;
    if ( !data )
      goto LABEL_59;
    isShiftableServant = BattleServantData__isShiftableServant((BattleServantData_o *)data, 0LL);
    data = (System_String_o *)this->fields.breakSprite;
    v32 = now == 0;
    if ( !data )
      goto LABEL_59;
    v33 = v32 && isShiftableServant;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)data, v32 && isShiftableServant, 0LL);
    v34 = (UnityEngine_Object_o *)this->fields.hplabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
    {
      data = (System_String_o *)this->fields.hplabel;
      if ( !data )
        goto LABEL_59;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)data, !v33, 0LL);
    }
    v35 = (UnityEngine_Object_o *)this->fields.maxhplabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
    {
      data = (System_String_o *)this->fields.maxhplabel;
      if ( !data )
        goto LABEL_59;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)data, !v33, 0LL);
    }
    v36 = (UnityEngine_Object_o *)this->fields.totalhplabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
    {
      data = (System_String_o *)this->fields.totalhplabel;
      if ( data )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)data, !v33, 0LL);
        return;
      }
LABEL_59:
      sub_B7769C(data, v16);
    }
  }
}


void __fastcall BattleServantParamComponent__updateNp(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v4; // x20
  struct BattleServantData_o *data; // x8
  UnityEngine_Object_o *npcomp; // x21

  v4 = this;
  if ( (byte_438E1BC & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1BC = 1;
  }
  if ( !svtdata )
    goto LABEL_13;
  data = v4->fields.data;
  if ( !data )
    goto LABEL_13;
  if ( svtdata->fields.uniqueId == data->fields.uniqueId )
  {
    npcomp = (UnityEngine_Object_o *)v4->fields.npcomp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL) )
    {
      this = (BattleServantParamComponent_o *)v4->fields.npcomp;
      if ( this )
      {
        BattleNpGaugeSystemComponent__changeParam((BattleNpGaugeSystemComponent_o *)this, svtdata->fields.np, 0LL);
        return;
      }
LABEL_13:
      sub_B7769C(this, svtdata);
    }
  }
}


void __fastcall BattleServantParamComponent__updateNp_30911048(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtdata,
        System_Int32_array *npArray,
        int32_t index,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v8; // x21
  struct BattleServantData_o *data; // x8
  UnityEngine_Object_o *npcomp; // x22
  _BOOL8 v11; // x0
  int32_t max_length; // w8
  __int64 v13; // x0

  v8 = this;
  if ( (byte_438E1BD & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1BD = 1;
  }
  if ( !svtdata )
    goto LABEL_17;
  data = v8->fields.data;
  if ( !data )
    goto LABEL_17;
  if ( svtdata->fields.uniqueId == data->fields.uniqueId )
  {
    npcomp = (UnityEngine_Object_o *)v8->fields.npcomp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL);
    if ( npArray )
    {
      if ( v11 )
      {
        max_length = npArray->max_length;
        if ( max_length > index )
        {
          if ( max_length <= (unsigned int)index )
          {
            v13 = sub_B776C8(v11);
            sub_B77668(v13, 0LL);
          }
          this = (BattleServantParamComponent_o *)v8->fields.npcomp;
          if ( this )
          {
            BattleNpGaugeSystemComponent__changeParam(
              (BattleNpGaugeSystemComponent_o *)this,
              npArray->m_Items[index + 1],
              0LL);
            return;
          }
LABEL_17:
          sub_B7769C(this, svtdata);
        }
      }
    }
  }
}


void __fastcall BattleServantParamComponent__updateShiftHplabel(
        BattleServantParamComponent_o *this,
        int32_t nowHp,
        const MethodInfo *method)
{
  BattleServantData_o *data; // x0
  int32_t MaxHp; // w2
  const MethodInfo *v7; // x4

  data = this->fields.data;
  if ( !data )
    sub_B7769C(0LL, nowHp);
  MaxHp = BattleServantData__getMaxHp(data, 0LL);
  BattleServantParamComponent__updateHplabel(this, nowHp, MaxHp, 1, v7);
}


void __fastcall BattleServantParamComponent__updateSkillIcon(
        BattleServantParamComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  BattleServantData_o *data; // x0
  BattleBuffData_o *BuffData; // x0
  __int64 v6; // x1
  BattleBuffData_o *v7; // x20
  struct BattleServantSkillIConComponent_array *skillIcon; // x8
  BattleBuffData_o *v9; // x21
  unsigned __int64 v10; // x22
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o **p_activeList; // x28
  unsigned __int64 max_length; // x9
  unsigned __int64 passiveList_low; // x10
  BattleSkillInfoData_o *v14; // x23
  struct BattleServantSkillIConComponent_array *v15; // x8
  int32_t v16; // w24
  BattleServantSkillIConComponent_o *v17; // x25
  char v18; // w26
  const MethodInfo *v19; // x6
  BattleServantSkillIConComponent_o *v20; // x8
  __int64 v21; // x0

  data = this->fields.data;
  if ( data )
  {
    BuffData = BattleServantData__get_BuffData(data, 0LL);
    if ( !BuffData
      || (BattleBuffData__UpdateSkillRelationBuff(BuffData, 0LL),
          (BuffData = (BattleBuffData_o *)this->fields.data) == 0LL)
      || (BuffData = (BattleBuffData_o *)BattleServantData__getActiveSkillInfos((BattleServantData_o *)BuffData, 0LL),
          !this->fields.data)
      || (v7 = BuffData,
          BuffData = (BattleBuffData_o *)BattleServantData__getSkillSealSelect(this->fields.data, 0LL),
          (skillIcon = this->fields.skillIcon) == 0LL) )
    {
LABEL_29:
      sub_B7769C(BuffData, v6);
    }
    v9 = BuffData;
    v10 = 0LL;
    p_activeList = &BuffData->fields.activeList;
    while ( 1 )
    {
      max_length = skillIcon->max_length;
      if ( (__int64)v10 >= (int)max_length )
        break;
      if ( !v7 )
        goto LABEL_29;
      passiveList_low = LODWORD(v7->fields.passiveList);
      if ( (__int64)v10 >= (int)passiveList_low )
      {
        if ( v10 >= max_length )
        {
LABEL_31:
          v21 = sub_B776C8(BuffData);
          sub_B77668(v21, 0LL);
        }
        v20 = skillIcon->m_Items[v10];
        if ( !v20 )
          goto LABEL_29;
        BuffData = (BattleBuffData_o *)v20->fields.root;
        if ( !BuffData )
          goto LABEL_29;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BuffData, 0, 0LL);
      }
      else
      {
        if ( v10 >= passiveList_low )
          goto LABEL_31;
        BuffData = (BattleBuffData_o *)this->fields.data;
        if ( !BuffData )
          goto LABEL_29;
        v14 = (BattleSkillInfoData_o *)*((_QWORD *)&v7->fields.activeList + v10);
        BuffData = (BattleBuffData_o *)BattleServantData__getSkillSealTurn((BattleServantData_o *)BuffData, 0LL);
        if ( !v9 )
          goto LABEL_29;
        if ( v10 >= LODWORD(v9->fields.passiveList) )
          goto LABEL_31;
        if ( *((_BYTE *)p_activeList + v10) )
        {
          BuffData = (BattleBuffData_o *)this->fields.data;
          if ( !BuffData )
            goto LABEL_29;
          BuffData = (BattleBuffData_o *)BattleServantData__getSkillSealSelectTurn(
                                           (BattleServantData_o *)BuffData,
                                           v10,
                                           0LL);
        }
        v15 = this->fields.skillIcon;
        v16 = (int)BuffData;
        if ( !v15 )
          goto LABEL_29;
        if ( v10 >= v15->max_length )
          goto LABEL_31;
        BuffData = (BattleBuffData_o *)this->fields.data;
        if ( !BuffData )
          goto LABEL_29;
        v17 = v15->m_Items[v10];
        BuffData = (BattleBuffData_o *)BattleServantData__canUseSkill((BattleServantData_o *)BuffData, v10, 0LL);
        if ( !this->fields.data )
          goto LABEL_29;
        v18 = (char)BuffData;
        BuffData = (BattleBuffData_o *)BattleServantData__getNotActTurn(this->fields.data, 0LL);
        if ( v10 >= LODWORD(v9->fields.passiveList) )
          goto LABEL_31;
        if ( !v17 )
          goto LABEL_29;
        BattleServantSkillIConComponent__SetSkillInfo(
          v17,
          v14,
          v18 & 1,
          v16,
          (int32_t)BuffData,
          *((_BYTE *)p_activeList + v10),
          v19);
      }
      skillIcon = this->fields.skillIcon;
      ++v10;
      if ( !skillIcon )
        goto LABEL_29;
    }
  }
}


void __fastcall BattleServantParamComponent__updateTDGauge(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nextTdGauge; // x20
  __int64 v5; // x1
  BattleServantData_o *data; // x0
  struct BattleServantData_o *v7; // x8

  if ( (byte_438E1BF & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1BF = 1;
  }
  nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(nextTdGauge, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_16;
    if ( !BattleServantData__hasTreasureDvc(data, 0LL) )
      goto LABEL_11;
    data = this->fields.data;
    if ( !data )
      goto LABEL_16;
    data = (BattleServantData_o *)BattleServantData__isTDSeraled(data, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
LABEL_11:
      data = (BattleServantData_o *)this->fields.nextTdGauge;
      if ( data )
      {
        BattleNextTDgaugeComponent__setHide((BattleNextTDgaugeComponent_o *)data, 0LL);
        return;
      }
LABEL_16:
      sub_B7769C(data, v5);
    }
    v7 = this->fields.data;
    if ( !v7 )
      goto LABEL_16;
    data = (BattleServantData_o *)this->fields.nextTdGauge;
    if ( !data )
      goto LABEL_16;
    BattleNextTDgaugeComponent__setValue((BattleNextTDgaugeComponent_o *)data, v7->fields.nexttpturn, 0LL);
  }
}


void __fastcall BattleServantParamComponent__updateView(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleServantParamComponent_o *v3; // x19
  struct BattlePerformance_o *perf; // x8
  BattleActorControl_o *PartsActor; // x20
  BattleServantData_o *data; // x0
  int32_t v7; // w20
  int32_t MaxHp; // w0
  const MethodInfo *v9; // x4
  int32_t v10; // w20
  int32_t v11; // w0
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *npcomp; // x20
  const MethodInfo *v14; // x2
  struct BattleServantData_o *v15; // x8
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  struct BattleServantData_o *v18; // x8

  v3 = this;
  if ( (byte_438E1C7 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E1C7 = 1;
  }
  perf = v3->fields.perf;
  if ( !perf )
    goto LABEL_35;
  this = (BattleServantParamComponent_o *)perf->fields.data;
  if ( !this )
    goto LABEL_35;
  if ( !BYTE2(this[1].fields.sideEffectLabelWidth) )
    goto LABEL_18;
  PartsActor = BattleData__GetPartsActor((BattleData_o *)this, 1, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Inequality(
                                            (UnityEngine_Object_o *)PartsActor,
                                            0LL,
                                            0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_18;
  if ( !PartsActor )
    goto LABEL_35;
  this = (BattleServantParamComponent_o *)PartsActor->fields.battleSvtData;
  if ( !this )
    goto LABEL_35;
  if ( BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL) )
  {
LABEL_18:
    data = v3->fields.data;
    if ( data )
    {
      if ( BattleServantData__isAlive(data, 0, 0LL) )
        goto LABEL_19;
      this = (BattleServantParamComponent_o *)v3->fields.data;
      if ( !this )
        goto LABEL_35;
      if ( BattleServantData__isGuts((BattleServantData_o *)this, 0LL) )
        goto LABEL_19;
      this = (BattleServantParamComponent_o *)v3->fields.data;
      if ( !this )
        goto LABEL_35;
      if ( BattleServantData__isOverKill((BattleServantData_o *)this, 0LL) )
      {
LABEL_19:
        this = (BattleServantParamComponent_o *)v3->fields.root;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (BattleServantParamComponent_o *)v3->fields.data;
          if ( this )
          {
            this = (BattleServantParamComponent_o *)BattleServantData__getNowHp((BattleServantData_o *)this, 0LL);
            if ( v3->fields.data )
            {
              v7 = (int)this;
              MaxHp = BattleServantData__getMaxHp(v3->fields.data, 0LL);
              BattleServantParamComponent__updateHplabel(v3, v7, MaxHp, 1, v9);
              this = (BattleServantParamComponent_o *)v3->fields.data;
              if ( this )
              {
                this = (BattleServantParamComponent_o *)BattleServantData__getNowHp((BattleServantData_o *)this, 0LL);
                if ( v3->fields.data )
                {
                  v10 = (int)this;
                  v11 = BattleServantData__getMaxHp(v3->fields.data, 0LL);
                  BattleServantParamComponent__updateHpbar(v3, v10, v11, v12);
                  npcomp = (UnityEngine_Object_o *)v3->fields.npcomp;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    v15 = v3->fields.data;
                    if ( !v15 )
                      goto LABEL_35;
                    this = (BattleServantParamComponent_o *)v3->fields.npcomp;
                    if ( !this )
                      goto LABEL_35;
                    BattleNpGaugeSystemComponent__setNowParam(
                      (BattleNpGaugeSystemComponent_o *)this,
                      v15->fields.np,
                      0LL);
                  }
                  BattleServantParamComponent__updateTDGauge(v3, (BattleServantData_o *)method, v14);
                  BattleServantParamComponent__updateSkillIcon(v3, 0, v16);
                  v18 = v3->fields.data;
                  if ( v18 )
                  {
                    BattleServantParamComponent__updateBuffIcon(v3, v18->fields.buffData, v17);
                    return;
                  }
                }
              }
            }
          }
        }
LABEL_35:
        sub_B7769C(this, method);
      }
    }
  }
  BattleServantParamComponent__setTouch(v3, 0, v2);
  this = (BattleServantParamComponent_o *)v3->fields.root;
  if ( !this )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall BattleServantParamComponent__CoAddClassIconEffect_d__122___ctor(
        BattleServantParamComponent__CoAddClassIconEffect_d__122_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantParamComponent__CoAddClassIconEffect_d__122__MoveNext(
        BattleServantParamComponent__CoAddClassIconEffect_d__122_o *this,
        const MethodInfo *method)
{
  BattleServantParamComponent__CoAddClassIconEffect_d__122_o *v2; // x19
  int32_t _1__state; // w8
  struct BattleServantParamComponent_o *_4__this; // x20
  Il2CppObject *v5; // x22
  struct BattleServantParamComponent___c__DisplayClass122_0_o **p__8__1; // x21
  int32_t effectId; // w22
  Il2CppObject *_8__1; // x24
  System_Action_o *v9; // x23
  BattlePerformance_o *perf; // x24
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattleServantData_o *servantData; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x21
  int32_t v15; // w22
  UnityEngine_Object_o *EffectObject; // x21
  UnityEngine_Transform_o *v17; // x22
  UnityEngine_Transform_o *transform; // x22
  int v19; // s0
  UnityEngine_Transform_o *v22; // x22
  int v23; // s0
  System_String_o *v26; // x21
  __int64 v27; // x2
  struct BattlePerformance_o *v28; // x8
  struct BattleData_o *data; // x8
  System_String_o *v30; // x21
  Il2CppObject *v31; // x0
  System_String_o *v32; // x22
  UnityEngine_Object_o *Manager__loadBattleCommonEffect; // x21
  UnityEngine_Object_o *facetex; // x22
  UnityEngine_Transform_o *v35; // x22
  UnityEngine_GameObject_o *v36; // x21
  int32_t battleGenderType; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *name; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *path; // [xsp+10h] [xbp-40h] BYREF
  UITexture_o *component; // [xsp+18h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_43884F7 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&BattleEffectUtility_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_EffectMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_B775C4(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject____69541584);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    sub_B775C4(&Method_BattleServantParamComponent___c__DisplayClass122_0__CoAddClassIconEffect_b__0__);
    sub_B775C4(&BattleServantParamComponent___c__DisplayClass122_0_TypeInfo);
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)sub_B775C4(&StringLiteral_18538/*"ef_commandaura_{0}"*/);
    byte_43884F7 = 1;
  }
  path = 0LL;
  component = 0LL;
  name = 0LL;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    p__8__1 = &v2->fields.__8__1;
    v2->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    v5 = (Il2CppObject *)sub_B77694(BattleServantParamComponent___c__DisplayClass122_0_TypeInfo);
    System_Object___ctor(v5, 0LL);
    p__8__1 = &v2->fields.__8__1;
    v2->fields.__8__1 = (struct BattleServantParamComponent___c__DisplayClass122_0_o *)v5;
    sub_B77560(&v2->fields.__8__1);
    method = (const MethodInfo *)(unsigned int)v2->fields.effectId;
    if ( (int)method < 1 )
      return 0;
    if ( !_4__this )
      goto LABEL_76;
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)_4__this->fields.classIconEffectDict;
    if ( !this )
      goto LABEL_76;
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                                                           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
                                                                           (int32_t)method,
                                                                           (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 0;
    if ( _4__this->fields.currentClassIconAuraEffectPriority < v2->fields.priority )
    {
      BattleServantParamComponent__DestroyAllEffect(_4__this, _4__this->fields.classIconEffectDict, 0, 0LL);
      _4__this->fields.currentClassIconAuraEffectPriority = v2->fields.priority;
    }
    if ( !*p__8__1 )
      goto LABEL_76;
    (*p__8__1)->fields.isLoading = 1;
    effectId = v2->fields.effectId;
    _8__1 = (Il2CppObject *)v2->fields.__8__1;
    v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      _8__1,
      Method_BattleServantParamComponent___c__DisplayClass122_0__CoAddClassIconEffect_b__0__,
      0LL);
    perf = _4__this->fields.perf;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    }
    BattleEffectUtility__LoadEffectAssetIfNotYet(effectId, v9, perf, 0LL);
  }
  if ( !*p__8__1 )
    goto LABEL_76;
  if ( (*p__8__1)->fields.isLoading )
  {
    v2->fields.__2__current = 0LL;
    p__2__current = &v2->fields.__2__current;
    sub_B77560(p__2__current);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  if ( !_4__this )
    goto LABEL_76;
  servantData = v2->fields.servantData;
  if ( !servantData )
    goto LABEL_76;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_76;
  ServantGameObject = BattlePerformance__getServantGameObject(
                        (BattlePerformance_o *)this,
                        servantData->fields.uniqueId,
                        0LL);
  if ( !ServantGameObject )
    ServantGameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
  v15 = v2->fields.effectId;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  EffectObject = (UnityEngine_Object_o *)BattleEffectUtility__getEffectObject(v15, ServantGameObject, 1, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)UnityEngine_Object__op_Equality(
                                                                         EffectObject,
                                                                         0LL,
                                                                         0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !EffectObject )
    goto LABEL_76;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0LL);
  if ( !_4__this->fields.clsIconComponent )
    goto LABEL_76;
  v17 = (UnityEngine_Transform_o *)this;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                                                                         0LL);
  if ( !v17 )
    goto LABEL_76;
  UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)this, 0LL);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EffectObject, 0LL);
  *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform )
    goto LABEL_76;
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v19, 0LL);
  v22 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EffectObject, 0LL);
  *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v22 )
    goto LABEL_76;
  UnityEngine_Transform__set_localPosition(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectObject, 1, 0LL);
  if ( UnityEngine_GameObject__TryGetComponent_UITexture_(
         (UnityEngine_GameObject_o *)EffectObject,
         &component,
         (const MethodInfo_1DEC764 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)component;
    if ( !component )
      goto LABEL_76;
    CommonEffectComponent__Init((CommonEffectComponent_o *)component, 0, 0, 0LL);
  }
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)_4__this->fields.classIconEffectDict;
  if ( !this )
    goto LABEL_76;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
          v2->fields.effectId,
          (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)_4__this->fields.classIconEffectDict;
    if ( !this )
      goto LABEL_76;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
      v2->fields.effectId,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)EffectObject,
      (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
  }
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)_4__this->fields.commandSpellEffectDict;
  if ( !this )
LABEL_76:
    sub_B7769C(this, method);
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
          v2->fields.effectId,
          (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EffectMaster___);
    if ( this )
    {
      this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                                             v2->fields.effectId,
                                                                             (const MethodInfo_21FB894 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( this )
      {
        v26 = (System_String_o *)this->fields.__4__this;
        if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        }
        BattleEffectUtility__GetBattleCommonEffectPathAndName(v26, &path, &name, 0LL);
        v28 = _4__this->fields.perf;
        if ( v28 )
        {
          data = v28->fields.data;
          if ( data )
          {
            v30 = path;
            battleGenderType = data->fields.battleGenderType;
            v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &battleGenderType, v27);
            v32 = System_String__Format((System_String_o *)StringLiteral_18538/*"ef_commandaura_{0}"*/, v31, 0LL);
            if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            }
            Manager__loadBattleCommonEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                        v30,
                                                                        v32,
                                                                        0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(Manager__loadBattleCommonEffect, 0LL, 0LL) )
              return 0;
            facetex = (UnityEngine_Object_o *)_4__this->fields.facetex;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(facetex, 0LL, 0LL) )
              return 0;
            this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)_4__this->fields.facetex;
            if ( this )
            {
              v35 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v36 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                  (UILabel_o *)Manager__loadBattleCommonEffect,
                                                  v35,
                                                  (const MethodInfo_1DF9A3C *)Method_UnityEngine_Object_Instantiate_GameObject____69541584);
              GameObjectExtensions__ResetTransform(v36, 0LL);
              if ( v36 )
              {
                UnityEngine_GameObject__SetActive(v36, !_4__this->fields.isHideFaceTexture, 0LL);
                this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)_4__this->fields.commandSpellEffectDict;
                if ( this )
                {
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                    v2->fields.effectId,
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v36,
                    (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
                  return 0;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_76;
  }
  return 0;
}


Il2CppObject *__fastcall BattleServantParamComponent__CoAddClassIconEffect_d__122__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__CoAddClassIconEffect_d__122_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantParamComponent__CoAddClassIconEffect_d__122__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__CoAddClassIconEffect_d__122_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BattleServantParamComponent__CoAddClassIconEffect_d__122_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall BattleServantParamComponent__CoAddClassIconEffect_d__122__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__CoAddClassIconEffect_d__122_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantParamComponent__CoAddClassIconEffect_d__122__System_IDisposable_Dispose(
        BattleServantParamComponent__CoAddClassIconEffect_d__122_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantParamComponent__DelayMethod_d__113___ctor(
        BattleServantParamComponent__DelayMethod_d__113_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantParamComponent__DelayMethod_d__113__MoveNext(
        BattleServantParamComponent__DelayMethod_d__113_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v5; // x20
  bool result; // w0
  struct BattleCallBackBase_o *callBack; // x0

  if ( (byte_43884F8 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_43884F8 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callBack = this->fields.callBack;
    this->fields.__1__state = -1;
    if ( !callBack )
      sub_B7769C(0LL, method);
    ((void (__fastcall *)(struct BattleCallBackBase_o *, const char *))callBack->klass[1]._1.gc_desc)(
      callBack,
      callBack->klass[1]._1.name);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    waitTime = this->fields.waitTime;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_B77694(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_B77560(&this->fields.__2__current);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleServantParamComponent__DelayMethod_d__113__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__DelayMethod_d__113_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantParamComponent__DelayMethod_d__113__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__DelayMethod_d__113_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BattleServantParamComponent__DelayMethod_d__113_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall BattleServantParamComponent__DelayMethod_d__113__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__DelayMethod_d__113_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantParamComponent__DelayMethod_d__113__System_IDisposable_Dispose(
        BattleServantParamComponent__DelayMethod_d__113_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantParamComponent___c__DisplayClass120_0___ctor(
        BattleServantParamComponent___c__DisplayClass120_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantParamComponent___c__DisplayClass120_0___DestroyEffectObject_b__0(
        BattleServantParamComponent___c__DisplayClass120_0_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *effectDict; // x0

  if ( (byte_43884F6 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    byte_43884F6 = 1;
  }
  effectDict = this->fields.effectDict;
  if ( !effectDict )
    sub_B7769C(0LL, method);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)effectDict,
    this->fields.id,
    (const MethodInfo_2FF5B54 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
}


void __fastcall BattleServantParamComponent___c__DisplayClass122_0___ctor(
        BattleServantParamComponent___c__DisplayClass122_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantParamComponent___c__DisplayClass122_0___CoAddClassIconEffect_b__0(
        BattleServantParamComponent___c__DisplayClass122_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoading = 0;
}


void __fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82___ctor(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82__MoveNext(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *v3; // x19
  int32_t _1__state; // w8
  bool result; // w0
  struct BattleServantParamComponent_o *_4__this; // x20
  struct BattleServantSkillIConComponent_array *skillIcon; // x19
  int max_length; // w8
  int v9; // w22
  char v10; // w21
  __int64 v11; // x0
  int v12; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_43884F9 & 1) == 0 )
  {
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *)sub_B775C4(&int_TypeInfo);
    byte_43884F9 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_22;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *)BattleServantData__get_BuffData(
                                                                                      (BattleServantData_o *)this,
                                                                                      0LL);
    if ( !this )
      goto LABEL_22;
    BattleBuffData__UpdateSkillRelationBuff((BattleBuffData_o *)this, 0LL);
    skillIcon = _4__this->fields.skillIcon;
    if ( !skillIcon )
      goto LABEL_22;
    max_length = skillIcon->max_length;
    if ( max_length < 1 )
      return 0;
    v9 = 0;
    v10 = 0;
    do
    {
      if ( v9 >= (unsigned int)max_length )
      {
        v11 = sub_B776C8(this);
        sub_B77668(v11, 0LL);
      }
      this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *)skillIcon->m_Items[v9];
      if ( !this )
        goto LABEL_22;
      this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *)BattleServantSkillIConComponent__UpdateSkillRankUpEffect(
                                                                                        (BattleServantSkillIConComponent_o *)this,
                                                                                        0LL);
      max_length = skillIcon->max_length;
      ++v9;
      v10 |= (unsigned __int8)this;
    }
    while ( v9 < max_length );
    if ( (v10 & 1) == 0 )
      return 0;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *)_4__this->fields.data;
    if ( !this
      || (this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *)BattleServantData__get_BuffData(
                                                                                            (BattleServantData_o *)this,
                                                                                            0LL)) == 0LL
      || (this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *)this[2].klass) == 0LL )
    {
LABEL_22:
      sub_B7769C(this, method);
    }
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter((BattleBuffData_SkillRankChangeData_o *)this, 0, 0LL);
  }
  else if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    v12 = 0;
    v3->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v2);
    sub_B77560(&v3->fields.__2__current);
    result = 1;
    v3->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82__System_IDisposable_Dispose(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantParamComponent__showSideEffectList_d__109___ctor(
        BattleServantParamComponent__showSideEffectList_d__109_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantParamComponent__showSideEffectList_d__109__MoveNext(
        BattleServantParamComponent__showSideEffectList_d__109_o *this,
        const MethodInfo *method)
{
  BattleServantParamComponent__showSideEffectList_d__109_o *v2; // x19
  struct BattleServantParamComponent_o *_4__this; // x20
  BattleActionData_BuffData_o *v4; // x21
  UnityEngine_Transform_o *v5; // x22
  int32_t statusEffectId; // w23
  float x; // s10
  float y; // s8
  float z; // s9
  BattleServantParamComponent_c *v10; // x0
  float SideEffectShowWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v12; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_43884FA & 1) == 0 )
  {
    sub_B775C4(&BattleEffectUtility_TypeInfo);
    sub_B775C4(&BattleServantParamComponent_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__);
    sub_B775C4(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__get_Count__);
    this = (BattleServantParamComponent__showSideEffectList_d__109_o *)sub_B775C4(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_43884FA = 1;
  }
  if ( v2->fields.__1__state >= 2u )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_18;
  this = (BattleServantParamComponent__showSideEffectList_d__109_o *)_4__this->fields.sideEffectShowQueue;
  if ( !this )
    goto LABEL_18;
  if ( !LODWORD(this->fields.__4__this) )
  {
    result = 0;
    _4__this->fields.isShowingSideEffect = 0;
    return result;
  }
  this = (BattleServantParamComponent__showSideEffectList_d__109_o *)System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                                                                       (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this,
                                                                       (const MethodInfo_2F2329C *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__);
  if ( !_4__this->fields.clsIconComponent
    || (v4 = (BattleActionData_BuffData_o *)this,
        this = (BattleServantParamComponent__showSideEffectList_d__109_o *)UnityEngine_Component__get_transform(
                                                                             (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                                                                             0LL),
        !v4) )
  {
LABEL_18:
    sub_B7769C(this, method);
  }
  v5 = (UnityEngine_Transform_o *)this;
  statusEffectId = v4->fields.statusEffectId;
  x = _4__this->fields.sideEffectScl.fields.x;
  y = _4__this->fields.sideEffectScl.fields.y;
  z = _4__this->fields.sideEffectScl.fields.z;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  v15.fields.x = x;
  v15.fields.y = y;
  v15.fields.z = z;
  BattleEffectUtility__showSideEffect(v5, statusEffectId, v15, 0LL);
  BattleServantParamComponent__popBuffLabel(_4__this, v4, 0LL);
  v10 = BattleServantParamComponent_TypeInfo;
  if ( (BYTE3(BattleServantParamComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v10 = BattleServantParamComponent_TypeInfo;
  }
  SideEffectShowWaitTime = v10->static_fields->SideEffectShowWaitTime;
  v12 = (UnityEngine_WaitForSeconds_o *)sub_B77694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v12, SideEffectShowWaitTime, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v12;
  p__2__current = &v2->fields.__2__current;
  sub_B77560(p__2__current);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall BattleServantParamComponent__showSideEffectList_d__109__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__showSideEffectList_d__109_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantParamComponent__showSideEffectList_d__109__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__showSideEffectList_d__109_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BattleServantParamComponent__showSideEffectList_d__109_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall BattleServantParamComponent__showSideEffectList_d__109__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__showSideEffectList_d__109_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantParamComponent__showSideEffectList_d__109__System_IDisposable_Dispose(
        BattleServantParamComponent__showSideEffectList_d__109_o *this,
        const MethodInfo *method)
{
  ;
}