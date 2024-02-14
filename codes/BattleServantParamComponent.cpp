void __fastcall BattleServantParamComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4217288 & 1) == 0 )
  {
    sub_B0D8A4(&BattleServantParamComponent_TypeInfo, v1);
    byte_4217288 = 1;
  }
  LODWORD(BattleServantParamComponent_TypeInfo->static_fields->SideEffectShowWaitTime) = (struct BattleServantParamComponent_StaticFields)1065353216;
}


void __fastcall BattleServantParamComponent___ctor(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UnityEngine_GameObject_array *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  float v23; // s4
  float v24; // s5
  float v25; // s6
  float v26; // s7
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct UnityEngine_Color_o v45; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4217287 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo, v6);
    byte_4217287 = 1;
  }
  v7 = (struct UnityEngine_GameObject_array *)sub_B0D8BC(UnityEngine_GameObject___TypeInfo, 1LL);
  this->fields.effectobj = v7;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.effectobj,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v16 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B0D974(
                                                                        System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo,
                                                                        v14,
                                                                        v15);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v16,
    (const MethodInfo_2B02AD0 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__);
  this->fields.sideEffectShowQueue = (struct System_Collections_Generic_Queue_BattleActionData_BuffData__o *)v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.sideEffectShowQueue,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  *(UnityEngine_Vector3_o *)&v46.fields.r = UnityEngine_Vector3__get_one(0LL);
  this->fields.sideEffectLabelWidth = 100.0;
  this->fields.sideEffectScl.fields.x = v46.fields.r;
  v46.fields.r = 0.3;
  this->fields.sideEffectScl.fields.y = v46.fields.g;
  this->fields.sideEffectScl.fields.z = v46.fields.b;
  v46.fields.a = 1.0;
  v46.fields.g = 0.3;
  v46.fields.b = 0.3;
  v45 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor(v46, v23, v24, v25, v26, (const MethodInfo *)&v45);
  this->fields.GRAY = v45;
  this->fields.isActiveHpBar = 1;
  v29 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__GameObject__TypeInfo,
                                                                                                   v27,
                                                                                                   v28);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v29,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.classIconEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v29;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.classIconEffectDict,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v38 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__GameObject__TypeInfo,
                                                                                                   v36,
                                                                                                   v37);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v38,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.commandSpellEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v38;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.commandSpellEffectDict,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
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
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
}


void __fastcall BattleServantParamComponent__ClassIconEffectStartStop(
        BattleServantParamComponent_o *this,
        bool isStart,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleServantParamComponent__EffectStartStop(this, this->fields.classIconEffectDict, isStart, v3);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__CoAddClassIconEffect(
        BattleServantParamComponent_o *this,
        int32_t effectId,
        int32_t priority,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_4217285 & 1) == 0 )
  {
    sub_B0D8A4(&BattleServantParamComponent__CoAddClassIconEffect_d__120_TypeInfo, *(_QWORD *)&effectId);
    byte_4217285 = 1;
  }
  v9 = sub_B0D974(
         BattleServantParamComponent__CoAddClassIconEffect_d__120_TypeInfo,
         *(_QWORD *)&effectId,
         *(_QWORD *)&priority);
  BattleServantParamComponent__CoAddClassIconEffect_d__120___ctor(
    (BattleServantParamComponent__CoAddClassIconEffect_d__120_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  *(_QWORD *)(v9 + 40) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 40), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_DWORD *)(v9 + 32) = effectId;
  *(_DWORD *)(v9 + 48) = priority;
  *(_QWORD *)(v9 + 64) = servantData;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v9 + 64),
    (System_Int32_array **)servantData,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
    sub_B0D97C(0LL);
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
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__DelayMethod(
        BattleServantParamComponent_o *this,
        float waitTime,
        BattleCallBackBase_o *callBack,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_421727E & 1) == 0 )
  {
    sub_B0D8A4(&BattleServantParamComponent__DelayMethod_d__111_TypeInfo, callBack);
    byte_421727E = 1;
  }
  v6 = sub_B0D974(BattleServantParamComponent__DelayMethod_d__111_TypeInfo, callBack, method);
  BattleServantParamComponent__DelayMethod_d__111___ctor(
    (BattleServantParamComponent__DelayMethod_d__111_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B0D97C(v7);
  *(float *)(v6 + 32) = waitTime;
  *(_QWORD *)(v6 + 40) = callBack;
  sub_B0D840((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)callBack, v8, v9, v10, v11, v12, v13);
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
        v5 = sub_B0D9A8(this);
        sub_B0D948(v5, 0LL);
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
    sub_B0D97C(this);
  }
}


void __fastcall BattleServantParamComponent__DestroyAllEffect(
        BattleServantParamComponent_o *this,
        System_Collections_Generic_Dictionary_int__GameObject__o *effectDict,
        bool forceDestroy,
        const MethodInfo *method)
{
  __int64 v6; // x1
  System_Int32_array *IsNullOrEmpty; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  const MethodInfo *v9; // x4
  __int64 v10; // x8
  System_Int32_array *v11; // x21
  unsigned __int64 v12; // x22
  bool v13; // w20
  __int64 v14; // x0

  if ( (byte_4217283 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, effectDict);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    byte_4217283 = 1;
  }
  IsNullOrEmpty = (System_Int32_array *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)effectDict, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !effectDict
      || (Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
                   (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)effectDict,
                   (const MethodInfo_2E90034 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__),
          (IsNullOrEmpty = System_Linq_Enumerable__ToArray_int_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                             (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___)) == 0LL) )
    {
      sub_B0D97C(IsNullOrEmpty);
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
          v14 = sub_B0D9A8(IsNullOrEmpty);
          sub_B0D948(v14, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__DestroyEffectObject(
        BattleServantParamComponent_o *this,
        System_Collections_Generic_Dictionary_int__GameObject__o *effectDict,
        int32_t id,
        bool forceDestroy,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x19
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  WarBoardEvalValueSquare_EvalValueSquare_o **v23; // x20
  System_Collections_ICollection_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  UISprite_o *v27; // x20
  System_Action_o *v28; // x21
  UnityEngine_Object_o *v29; // x21
  UISprite_o *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4217284 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, effectDict);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v10);
    sub_B0D8A4(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&Method_BattleServantParamComponent___c__DisplayClass118_0__DestroyEffectObject_b__0__, v13);
    sub_B0D8A4(&BattleServantParamComponent___c__DisplayClass118_0_TypeInfo, v14);
    byte_4217284 = 1;
  }
  component = 0LL;
  v15 = sub_B0D974(BattleServantParamComponent___c__DisplayClass118_0_TypeInfo, effectDict, *(_QWORD *)&id);
  BattleServantParamComponent___c__DisplayClass118_0___ctor(
    (BattleServantParamComponent___c__DisplayClass118_0_o *)v15,
    0LL);
  if ( !v15 )
    goto LABEL_20;
  *(_QWORD *)(v15 + 16) = effectDict;
  v23 = (WarBoardEvalValueSquare_EvalValueSquare_o **)(v15 + 16);
  sub_B0D840(
    (BattleServantConfConponent_o *)(v15 + 16),
    (System_Int32_array **)effectDict,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v24 = *(System_Collections_ICollection_o **)(v15 + 16);
  *(_DWORD *)(v15 + 24) = id;
  if ( !BasicHelper__IsNullOrEmpty(v24, 0LL) )
  {
    Item = *v23;
    if ( !*v23 )
      goto LABEL_20;
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Item,
           *(_DWORD *)(v15 + 24),
           (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    {
      if ( !forceDestroy )
      {
        Item = *v23;
        if ( !*v23 )
          goto LABEL_20;
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Item,
                 *(_DWORD *)(v15 + 24),
                 (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
        if ( !Item )
          goto LABEL_20;
        if ( UnityEngine_GameObject__TryGetComponent_UISprite_(
               (UnityEngine_GameObject_o *)Item,
               &component,
               (const MethodInfo_1B63348 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
        {
          v27 = component;
          v28 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v25, v26);
          System_Action___ctor(
            v28,
            (Il2CppObject *)v15,
            Method_BattleServantParamComponent___c__DisplayClass118_0__DestroyEffectObject_b__0__,
            0LL);
          if ( v27 )
          {
            ((void (__fastcall *)(UISprite_o *, __int64, System_Action_o *, Il2CppMethodPointer))v27->klass->vtable._8_set_alpha.method)(
              v27,
              1LL,
              v28,
              v27->klass->vtable._9_CalculateFinalAlpha.methodPtr);
            return;
          }
LABEL_20:
          sub_B0D97C(Item);
        }
      }
      Item = *v23;
      if ( !*v23 )
        goto LABEL_20;
      v29 = (UnityEngine_Object_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)Item,
                                      *(_DWORD *)(v15 + 24),
                                      (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v29, 0LL);
      Item = *v23;
      if ( !*v23 )
        goto LABEL_20;
      System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
        (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)Item,
        *(_DWORD *)(v15 + 24),
        (const MethodInfo_2E91E04 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    }
  }
}


void __fastcall BattleServantParamComponent__EffectStartStop(
        BattleServantParamComponent_o *this,
        System_Collections_Generic_Dictionary_int__GameObject__o *effectDict,
        bool isStart,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *currentValue; // x20
  _BOOL8 v13; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v15; // [xsp+20h] [xbp-50h] BYREF
  UISprite_o *component; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_4217286 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__, effectDict);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__, v7);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    this = (BattleServantParamComponent_o *)sub_B0D8A4(
                                              &Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__,
                                              v11);
    byte_4217286 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  component = 0LL;
  if ( !effectDict
    || (this = (BattleServantParamComponent_o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                                                  (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)effectDict,
                                                  (const MethodInfo_2E901CC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
    sub_B0D97C(this);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v14,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_22CF168 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  v15 = v14;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
            &v15,
            (const MethodInfo_2811954 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    currentValue = v15.fields.currentValue;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)currentValue, 0LL, 0LL);
    if ( !v13 )
    {
      if ( !currentValue )
        sub_B0D97C(v13);
      if ( UnityEngine_GameObject__TryGetComponent_UISprite_(
             (UnityEngine_GameObject_o *)currentValue,
             &component,
             (const MethodInfo_1B63348 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentValue, 1, 0LL);
        if ( isStart )
        {
          if ( !component )
            sub_B0D97C(0LL);
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)component, 0LL);
        }
        else
        {
          if ( !component )
            sub_B0D97C(0LL);
          ((void (__fastcall *)(UISprite_o *, _QWORD, _QWORD, Il2CppMethodPointer))component->klass->vtable._9_CalculateFinalAlpha.method)(
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
    &v15,
    (const MethodInfo_2811950 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
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

  if ( (byte_4217275 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217275 = 1;
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
        sub_B0D97C(isTDSeraled);
      BattleNextTDgaugeComponent__setInitGauge(v5, nexttpturn, maxtpturn, isTDSeraled, 0LL);
    }
  }
}


void __fastcall BattleServantParamComponent__OnClick(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *target; // x20
  struct BattleServantData_o *data; // x8
  UnityEngine_GameObject_o *v7; // x19
  Il2CppObject *v8; // x0
  int32_t uniqueId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4217256 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_21308/*"onClickServant"*/, v4);
    byte_4217256 = 1;
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
      v7 = this->fields.target;
      uniqueId = data->fields.uniqueId;
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &uniqueId);
      if ( !v7 )
        sub_B0D97C(v8);
      UnityEngine_GameObject__SendMessage_40784812(v7, (System_String_o *)StringLiteral_21308/*"onClickServant"*/, v8, 0LL);
    }
  }
}


void __fastcall BattleServantParamComponent__OnCompleteShiftGaugeChangeHp(
        BattleServantParamComponent_o *this,
        BattleAction_BasePlayShiftGauge_o *playShiftGauge,
        const MethodInfo *method)
{
  if ( !playShiftGauge )
    sub_B0D97C(this);
  BattleServantParamComponent__OnUpdateShiftGaugeChangeHp(
    this,
    playShiftGauge->fields._ChangeToHp_k__BackingField,
    method);
  ((void (__fastcall *)(BattleAction_BasePlayShiftGauge_o *, BattleServantParamComponent_o *, Il2CppMethodPointer))playShiftGauge->klass->vtable._6_OnCompleteChangeHp.method)(
    playShiftGauge,
    this,
    playShiftGauge->klass->vtable._7_Init.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__OnUpdateShiftGaugeChangeHp(
        BattleServantParamComponent_o *this,
        int32_t nowHp,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  UnityEngine_Object_o *hpGauge; // x21
  BattleHpGaugeBarComponent_o *v7; // x0

  if ( (byte_4217277 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&nowHp);
    byte_4217277 = 1;
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
    v7 = this->fields.hpGauge;
    if ( !v7
      || (BattleHpGaugeBarComponent__updateDamageGauge(v7, (float)nowHp / (float)this->fields.shiftGaugeMaxHp, 0LL),
          (v7 = this->fields.hpGauge) == 0LL) )
    {
      sub_B0D97C(v7);
    }
    BattleHpGaugeBarComponent__updateNomalGauge(v7, nowHp, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__PlayDownShiftEffect(
        BattleServantParamComponent_o *this,
        int32_t index,
        BattleServantHpShiftComponent_EffectData_o *effectData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x22
  const MethodInfo *v8; // x6
  BattleServantHpShiftComponent_o *v9; // x0
  const MethodInfo *v10; // x4
  float nextAnimationTime; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4217273 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_4217273 = 1;
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
    v9 = this->fields.hpShift;
    if ( !v9
      || (BattleServantHpShiftComponent__PlayShiftEffectGeneral(
            v9,
            index,
            effectData,
            this,
            &nextAnimationTime,
            0LL,
            v8),
          (v9 = this->fields.hpShift) == 0LL) )
    {
      sub_B0D97C(v9);
    }
    BattleServantHpShiftComponent__UpdateIcon(v9, index, 1, 1, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
float __fastcall BattleServantParamComponent__PlayShiftEffectGeneral(
        BattleServantParamComponent_o *this,
        int32_t index,
        BattleServantHpShiftComponent_EffectData_o *effectData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x22
  bool v8; // w0
  const MethodInfo *v9; // x6
  float result; // s0
  BattleServantHpShiftComponent_o *v11; // x0
  float nextAnimationTime; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4217271 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_4217271 = 1;
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
    v11 = this->fields.hpShift;
    if ( !v11 )
      sub_B0D97C(0LL);
    BattleServantHpShiftComponent__PlayShiftEffectGeneral(v11, index, effectData, this, &nextAnimationTime, 0LL, v9);
    return nextAnimationTime;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__PlayUpShiftEffect(
        BattleServantParamComponent_o *this,
        int32_t index,
        float delayTime,
        BattleServantHpShiftComponent_EffectData_o *effectData,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Object_o *hpShift; // x22
  const MethodInfo *v15; // x3
  BattleServantHpShiftComponent_o *v16; // x0
  const MethodInfo *v17; // x6
  Il2CppObject *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  System_Action_int__bool__bool__o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  BattleCallBack_int__bool__bool__o *v24; // x21
  BattleServantParamComponent_o *v25; // x0
  const MethodInfo *v26; // x2
  System_Collections_IEnumerator_o *v27; // x0
  float nextAnimationTime; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4217272 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int__bool__bool___ctor__, *(_QWORD *)&index);
    sub_B0D8A4(&System_Action_int__bool__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_BattleCallBack_int__bool__bool___ctor__, v10);
    sub_B0D8A4(&BattleCallBack_int__bool__bool__TypeInfo, v11);
    sub_B0D8A4(&Method_BattleServantHpShiftComponent_UpdateIcon__, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    byte_4217272 = 1;
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
    v16 = this->fields.hpShift;
    if ( !v16
      || (BattleServantHpShiftComponent__UpdateIconActive(v16, index, 1, v15), (v16 = this->fields.hpShift) == 0LL) )
    {
      sub_B0D97C(v16);
    }
    BattleServantHpShiftComponent__PlayShiftEffectGeneral(v16, index, effectData, this, &nextAnimationTime, 0LL, v17);
    v18 = (Il2CppObject *)this->fields.hpShift;
    v21 = (System_Action_int__bool__bool__o *)sub_B0D974(System_Action_int__bool__bool__TypeInfo, v19, v20);
    System_Action_int__bool__bool____ctor(
      v21,
      v18,
      Method_BattleServantHpShiftComponent_UpdateIcon__,
      (const MethodInfo_247DB68 *)Method_System_Action_int__bool__bool___ctor__);
    v24 = (BattleCallBack_int__bool__bool__o *)sub_B0D974(BattleCallBack_int__bool__bool__TypeInfo, v22, v23);
    BattleCallBack_int__bool__bool____ctor(
      v24,
      index,
      0,
      1,
      (System_Action_T1__T2__T3__o *)v21,
      (const MethodInfo_2D54FBC *)Method_BattleCallBack_int__bool__bool___ctor__);
    v27 = BattleServantParamComponent__DelayMethod(v25, delayTime, (BattleCallBackBase_o *)v24, v26);
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v27, 0LL);
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
        v5 = sub_B0D9A8(this);
        sub_B0D948(v5, 0LL);
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
    sub_B0D97C(this);
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
    sub_B0D97C(showBuffComponent);
  }
  v13->fields.maxLine = (int)showBuffComponent;
}


void __fastcall BattleServantParamComponent__UpdateClassIconEffect(
        BattleServantParamComponent_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_ICollection_o *ClassIconEffectBuffList; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_int__o *v26; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x22
  _BOOL8 v28; // x0
  Il2CppObject *current; // x27
  _BOOL8 v30; // x0
  const MethodInfo *v31; // x4
  System_Collections_IEnumerator_o *v32; // x0
  UnityEngine_Coroutine_o *started; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *classIconEffectDict; // x0
  int32_t v35; // w20
  _BOOL8 v36; // x0
  const MethodInfo *v37; // x4
  BattleServantParamComponent_o *v38; // x0
  const MethodInfo *v39; // x4
  int v40; // w19
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-B8h] BYREF
  int v42[2]; // [xsp+20h] [xbp-A0h]
  int v43; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+50h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+78h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4217282 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_AuraEffectMaster___, servantData);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v19);
    this = (BattleServantParamComponent_o *)sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v20);
    byte_4217282 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  entity = 0LL;
  memset(&v44, 0, sizeof(v44));
  v43 = 0;
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
    BattleServantParamComponent__DestroyAllEffect(v4, v4->fields.classIconEffectDict, 0, v24);
    BattleServantParamComponent__DestroyAllEffect(v4, v4->fields.commandSpellEffectDict, 0, v25);
  }
  v26 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v22, v23);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleServantParamComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_AuraEffectMaster___);
  if ( !v4->fields.classIconEffectDict )
    goto LABEL_38;
  v27 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
  this = (BattleServantParamComponent_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
                                            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v4->fields.classIconEffectDict,
                                            (const MethodInfo_2E90024 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
  if ( (int)this <= 0 )
    v4->fields.currentClassIconAuraEffectPriority = 0;
  if ( !ClassIconEffectBuffList )
    goto LABEL_38;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ClassIconEffectBuffList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v45 = v41;
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v28 )
      break;
    current = v45.fields.current;
    if ( !v45.fields.current )
      sub_B0D97C(v28);
    if ( !v27 )
      sub_B0D97C(v28);
    v30 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v27,
            &entity,
            (int32_t)v45.fields.current[21].monitor,
            (const MethodInfo_2669C30 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    if ( v30 )
    {
      if ( !entity )
        sub_B0D97C(v30);
      v32 = BattleServantParamComponent__CoAddClassIconEffect(
              v4,
              *(&entity->fields.id + 1),
              (int32_t)entity->fields.age,
              servantData,
              v31);
      started = UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)v4, v32, 0LL);
      if ( !v26 )
        sub_B0D97C(started);
      if ( !System_Collections_Generic_List_int___Contains(
              v26,
              (int32_t)current[21].monitor,
              (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
        System_Collections_Generic_List_int___Add(
          v26,
          (int32_t)current[21].monitor,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v42[0] = 182;
  v43 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  v43 = 0;
  if ( !v26 )
LABEL_38:
    sub_B0D97C(this);
  System_Collections_Generic_List_int___GetEnumerator(
    &v41,
    v26,
    (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v44 = v41;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v44,
            (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    classIconEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v4->fields.classIconEffectDict;
    if ( !classIconEffectDict )
      sub_B0D97C(0LL);
    v35 = (int32_t)v44.fields.current;
    v36 = System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
            classIconEffectDict,
            (int32_t)v44.fields.current,
            (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    if ( !v36 )
    {
      BattleServantParamComponent__DestroyEffectObject(
        (BattleServantParamComponent_o *)v36,
        v4->fields.classIconEffectDict,
        v35,
        0,
        v37);
      BattleServantParamComponent__DestroyEffectObject(v38, v4->fields.commandSpellEffectDict, v35, 0, v39);
    }
  }
  v42[0] = 271;
  v40 = ++v43;
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v44,
    (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v40 && v42[v40 - 1] == 271 )
    v43 = v40 - 1;
}


void __fastcall BattleServantParamComponent__UpdateNameLabel(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nameLabel; // x20
  BattleServantData_o *data; // x0
  UILabel_o *v5; // x19

  if ( (byte_4217280 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217280 = 1;
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
        || (v5 = this->fields.nameLabel, data = (BattleServantData_o *)BattleServantData__getServantName(data, 0LL), !v5) )
      {
        sub_B0D97C(data);
      }
      UILabel__set_text(v5, (System_String_o *)data, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__UpdateShiftChange(
        BattleServantParamComponent_o *this,
        int32_t curGaugeIndex,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpChange; // x21
  BattleServantChangeBarComponent_o *v6; // x0

  if ( (byte_4217274 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&curGaugeIndex);
    byte_4217274 = 1;
  }
  hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(hpChange, 0LL, 0LL) )
  {
    v6 = this->fields.hpChange;
    if ( !v6 )
      sub_B0D97C(0LL);
    BattleServantChangeBarComponent__setBarType(v6, 1, curGaugeIndex, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__UpdateShiftGaugeChangeHp(
        BattleServantParamComponent_o *this,
        int32_t fromHp,
        int32_t toHp,
        int32_t maxHp,
        float time,
        BattleAction_BasePlayShiftGauge_o *playShiftGauge,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  UnityEngine_Object_o *hpGauge; // x24
  BattleHpGaugeBarComponent_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Hashtable_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  char v36[4]; // [xsp+8h] [xbp-48h] BYREF
  float v37; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v38; // [xsp+18h] [xbp-38h] BYREF
  int32_t v39; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4217276 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, *(_QWORD *)&fromHp);
    sub_B0D8A4(&System_Collections_Hashtable_TypeInfo, v13);
    sub_B0D8A4(&int_TypeInfo, v14);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v15);
    sub_B0D8A4(&float_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_18972/*"from"*/, v17);
    sub_B0D8A4(&StringLiteral_19469/*"ignoretimescale"*/, v18);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v19);
    sub_B0D8A4(&StringLiteral_21333/*"oncompleteparams"*/, v20);
    sub_B0D8A4(&StringLiteral_21341/*"onupdate"*/, v21);
    sub_B0D8A4(&StringLiteral_10096/*"OnUpdateShiftGaugeChangeHp"*/, v22);
    sub_B0D8A4(&StringLiteral_10004/*"OnCompleteShiftGaugeChangeHp"*/, v23);
    sub_B0D8A4(&StringLiteral_22790/*"to"*/, v24);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v25);
    sub_B0D8A4(&iTween_TypeInfo, v26);
    byte_4217276 = 1;
  }
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v28 = (BattleHpGaugeBarComponent_o *)UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL);
  if ( ((unsigned __int8)v28 & 1) != 0 )
  {
    v28 = this->fields.hpGauge;
    if ( !v28 )
      goto LABEL_15;
    BattleHpGaugeBarComponent__setInitValue(v28, fromHp, maxHp, 0LL);
  }
  this->fields.shiftGaugeMaxHp = maxHp;
  if ( !playShiftGauge
    || (playShiftGauge->fields._ChangeToHp_k__BackingField = toHp,
        v31 = (System_Collections_Hashtable_o *)sub_B0D974(System_Collections_Hashtable_TypeInfo, v29, v30),
        System_Collections_Hashtable___ctor_38437272(v31, 0LL),
        v39 = fromHp,
        v28 = (BattleHpGaugeBarComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v39),
        !v31) )
  {
LABEL_15:
    sub_B0D97C(v28);
  }
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, BattleHpGaugeBarComponent_o *, Il2CppMethodPointer))v31->klass->vtable._23_Add.method)(
    v31,
    StringLiteral_18972/*"from"*/,
    v28,
    v31->klass->vtable._24_Clear.methodPtr);
  v38 = toHp;
  v32 = j_il2cpp_value_box_0(int_TypeInfo, &v38);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v31->klass->vtable._23_Add.method)(
    v31,
    StringLiteral_22790/*"to"*/,
    v32,
    v31->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v31->klass->vtable._23_Add.method)(
    v31,
    StringLiteral_21341/*"onupdate"*/,
    StringLiteral_10096/*"OnUpdateShiftGaugeChangeHp"*/,
    v31->klass->vtable._24_Clear.methodPtr);
  v37 = time;
  v33 = j_il2cpp_value_box_0(float_TypeInfo, &v37);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v31->klass->vtable._23_Add.method)(
    v31,
    StringLiteral_22753/*"time"*/,
    v33,
    v31->klass->vtable._24_Clear.methodPtr);
  v36[0] = 1;
  v34 = j_il2cpp_value_box_0(bool_TypeInfo, v36);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v31->klass->vtable._23_Add.method)(
    v31,
    StringLiteral_19469/*"ignoretimescale"*/,
    v34,
    v31->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v31->klass->vtable._23_Add.method)(
    v31,
    StringLiteral_21332/*"oncomplete"*/,
    StringLiteral_10004/*"OnCompleteShiftGaugeChangeHp"*/,
    v31->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, BattleAction_BasePlayShiftGauge_o *, Il2CppMethodPointer))v31->klass->vtable._23_Add.method)(
    v31,
    StringLiteral_21333/*"oncompleteparams"*/,
    playShiftGauge,
    v31->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ValueTo(gameObject, v31, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__UpdateShortNameLabel(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *shortNameLabel; // x20
  BattleServantData_o *data; // x0
  int32_t EnemyNameEffect; // w0
  struct UnityEngine_GameObject_o **p_enemyNameEffectPrefab; // x20
  UnityEngine_Object_o *enemyNameEffectPrefab; // x22
  int32_t v13; // w21
  UnityEngine_Object_o *v14; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *NameEffectPath; // x21
  AssetData_o *AssetStorage; // x0
  UILabel_o *v18; // x21
  UnityEngine_Transform_o *transform; // x22
  System_Int32_array **v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UILabel_o *v27; // x20
  int defaultShortNameLabelWidth; // w1
  __int64 v29; // x8
  float v30; // s8
  float v31; // s1
  float v32; // s2
  float v33; // s0

  if ( (byte_4217281 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, method);
    sub_B0D8A4(&AssetManager_TypeInfo, v3);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_16711/*"battle_name"*/, v7);
    byte_4217281 = 1;
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
      v13 = EnemyNameEffect;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(enemyNameEffectPrefab, 0LL, 0LL) )
      {
        v14 = (UnityEngine_Object_o *)*p_enemyNameEffectPrefab;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34935276(v14, 0LL);
      }
      if ( v13 )
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
        NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v13, 0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        AssetStorage = AssetManager__getAssetStorage(NameEffectPath, 0LL);
        v18 = AssetStorage
            ? (UILabel_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                             AssetStorage,
                             (System_String_o *)StringLiteral_16711/*"battle_name"*/,
                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440)
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
        v20 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                       v18,
                                       transform,
                                       (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
        *p_enemyNameEffectPrefab = (struct UnityEngine_GameObject_o *)v20;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.enemyNameEffectPrefab,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
      }
      data = this->fields.data;
      if ( data )
      {
        v27 = this->fields.shortNameLabel;
        data = (BattleServantData_o *)BattleServantData__getServantShortName(data, 0LL);
        if ( v27 )
        {
          UILabel__set_text(v27, (System_String_o *)data, 0LL);
          defaultShortNameLabelWidth = this->fields.defaultShortNameLabelWidth;
          data = (BattleServantData_o *)this->fields.shortNameLabel;
          if ( defaultShortNameLabelWidth <= 0 )
          {
            if ( !data )
              goto LABEL_50;
            defaultShortNameLabelWidth = data->fields._frameType_k__BackingField;
            this->fields.defaultShortNameLabelWidth = defaultShortNameLabelWidth;
          }
          else if ( !data )
          {
            goto LABEL_50;
          }
          v29 = *(_QWORD *)&data->fields.atktdrate;
          if ( !v29 )
            goto LABEL_50;
          v30 = (float)(data->fields.displayType * *(_DWORD *)(v29 + 16));
          if ( (float)defaultShortNameLabelWidth >= v30 )
          {
            UIWidget__set_width((UIWidget_o *)data, defaultShortNameLabelWidth, 0LL);
            data = (BattleServantData_o *)this->fields.shortNameLabel;
            if ( data )
            {
              data = (BattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
              if ( data )
              {
                v33 = 1.0;
                v31 = 1.0;
                v32 = 1.0;
                goto LABEL_49;
              }
            }
          }
          else
          {
            UIWidget__set_width((UIWidget_o *)data, (int)v30, 0LL);
            data = (BattleServantData_o *)this->fields.shortNameLabel;
            if ( data )
            {
              data = (BattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
              if ( data )
              {
                v31 = 1.0;
                v32 = 1.0;
                v33 = (float)this->fields.defaultShortNameLabelWidth / v30;
LABEL_49:
                UnityEngine_Transform__set_localScale(
                  (UnityEngine_Transform_o *)data,
                  *(UnityEngine_Vector3_o *)&v33,
                  0LL);
                return;
              }
            }
          }
        }
      }
LABEL_50:
      sub_B0D97C(data);
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
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
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

  if ( this->fields.data )
  {
    BattleServantParamComponent__UpdateStatusFace(this, method);
    BattleServantParamComponent__setClassIcon(this, v3);
    BattleServantParamComponent__UpdateNameLabel(this, v4);
    BattleServantParamComponent__UpdateShortNameLabel(this, v5);
    BattleServantParamComponent__updateSkillIcon(this, 0, v6);
  }
}


void __fastcall BattleServantParamComponent__UpdateStatusFace(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantConfConponent_o *p_facetex; // x19
  UnityEngine_Object_o *facetex; // x21
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

  if ( (byte_421727F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v3);
    byte_421727F = 1;
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
        sub_B0D97C(data);
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
      sub_B0D840(p_facetex, Manager__loadStatusFace, v12, v13, v14, v15, v16, v17);
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
  if ( (byte_4217269 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_B0D8A4(&SeManager_TypeInfo, method);
    byte_4217269 = 1;
  }
  skillIcon = v2->fields.skillIcon;
  if ( !skillIcon )
LABEL_14:
    sub_B0D97C(this);
  v4 = 0LL;
  v5 = 0;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      v7 = sub_B0D9A8(this);
      sub_B0D948(v7, 0LL);
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
    sub_B0D97C(this);
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
  const MethodInfo *v5; // x2
  struct BattleServantData_o *data; // x8
  int32_t v7; // w20
  int32_t MaxHp; // w2
  const MethodInfo *v9; // x4

  BattleServantParamComponent__initUpdateView(this, 0, v2);
  data = this->fields.data;
  if ( !data
    || (BattleServantParamComponent__updateBuffIcon(this, data->fields.buffData, v5), (NowHp = this->fields.data) == 0LL)
    || (NowHp = (BattleServantData_o *)BattleServantData__getNowHp(NowHp, 0LL), !this->fields.data) )
  {
    sub_B0D97C(NowHp);
  }
  v7 = (int)NowHp;
  MaxHp = BattleServantData__getMaxHp(this->fields.data, 0LL);
  BattleServantParamComponent__updateHplabel(this, v7, MaxHp, 1, v9);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  BattleBuffData_ShowBuffData_array *v7; // x0
  BattleServantShowBuffComponent_o *showBuffComponent; // x19
  const MethodInfo *v9; // x2

  if ( (byte_421727D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo, v5);
    byte_421727D = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  if ( !v6
    || (showBuffComponent = this->fields.showBuffComponent,
        v7 = (BattleBuffData_ShowBuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__),
        !showBuffComponent) )
  {
    sub_B0D97C(v7);
  }
  BattleServantShowBuffComponent__setBuffList(showBuffComponent, v7, v9);
}


void __fastcall BattleServantParamComponent__clickSkillIcon(
        BattleServantParamComponent_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isLongTap,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *target; // x22
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0

  if ( (byte_421726B & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___, skillInfo);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_421726B = 1;
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
                                                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___)) == 0LL )
    {
      sub_B0D97C(Component_srcLineSprite);
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
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_421726A & 1) == 0 )
  {
    sub_B0D8A4(&BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81_TypeInfo, method);
    byte_421726A = 1;
  }
  v4 = sub_B0D974(BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81_TypeInfo, method, v2);
  BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81___ctor(
    (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__initUpdateView(
        BattleServantParamComponent_o *this,
        int32_t notUpdateFlag,
        const MethodInfo *method)
{
  char v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *facetex; // x22
  const MethodInfo *v8; // x1
  BattleServantData_o *data; // x0
  UITexture_o *v10; // x22
  int32_t v11; // w23
  int32_t DispLimitCount; // w24
  struct UITexture_o *Manager__loadStatusFace; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_Object_o *levelLabel; // x21
  UILabel_o *v21; // x21
  UnityEngine_Object_o *nameLabel; // x21
  const MethodInfo *v23; // x1
  UILabel_o *v24; // x21
  UnityEngine_Object_o *hpGauge; // x21
  BattleHpGaugeBarComponent_o *v26; // x21
  int32_t v27; // w22
  UnityEngine_Object_o *hpChange; // x21
  struct BattleServantData_o *v29; // x8
  struct System_Int32_array *shiftDeckList; // x9
  UnityEngine_Object_o *hpShift; // x21
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  UnityEngine_Object_o *breakSprite; // x21
  int32_t v35; // w21
  int32_t MaxHp; // w0
  const MethodInfo *v37; // x4
  UnityEngine_Object_o *npcomp; // x21
  struct BattleNpGaugeSystemComponent_o *v39; // x8
  struct BattleNpGaugeSystemComponent_o *v40; // x21
  struct BattleServantData_o *v41; // x8
  BattleNpGaugeSystemComponent_o *v42; // x21
  UnityEngine_Object_o *nextTdGauge; // x21
  bool v44; // w0
  const MethodInfo *v45; // x2
  BattleNextTDgaugeComponent_o *v46; // x20
  int32_t nexttpturn; // w21
  int32_t maxtpturn; // w22
  UnityEngine_Object_o *friendIcon; // x20
  const MethodInfo *v50; // x1
  struct BattleServantData_o *v51; // x8
  UISprite_o *v52; // x20
  UISprite_o *v53; // x20
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *breakPoint; // x20
  struct BattleServantData_o *v56; // x8

  v3 = notUpdateFlag;
  if ( (byte_4217266 & 1) == 0 )
  {
    sub_B0D8A4(&FileName_TypeInfo, *(_QWORD *)&notUpdateFlag);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v6);
    byte_4217266 = 1;
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
      v10 = this->fields.facetex;
      data = (BattleServantData_o *)BattleServantData__GetDispImageSvtId(data, 0LL);
      if ( !this->fields.data )
        goto LABEL_113;
      v11 = (int)data;
      DispLimitCount = BattleServantData__getDispLimitCount(this->fields.data, 1, 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadStatusFace = ServantAssetLoadManager__loadStatusFace(v10, v11, DispLimitCount, 0LL);
      this->fields.facetex = Manager__loadStatusFace;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.facetex,
        (System_Int32_array **)Manager__loadStatusFace,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    BattleServantParamComponent__setClassIcon(this, v8);
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
      v21 = this->fields.levelLabel;
      data = (BattleServantData_o *)BattleServantData__getLevelLabel(data, 0LL);
      if ( !v21 )
        goto LABEL_113;
      UILabel__set_text(v21, (System_String_o *)data, 0LL);
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
      v24 = this->fields.nameLabel;
      data = (BattleServantData_o *)BattleServantData__getServantName(data, 0LL);
      if ( !v24 )
        goto LABEL_113;
      UILabel__set_text(v24, (System_String_o *)data, 0LL);
    }
    BattleServantParamComponent__UpdateShortNameLabel(this, v23);
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
      v26 = this->fields.hpGauge;
      data = (BattleServantData_o *)BattleServantData__getNowHp(data, 0LL);
      if ( !this->fields.data )
        goto LABEL_113;
      v27 = (int)data;
      data = (BattleServantData_o *)BattleServantData__getMaxHp(this->fields.data, 0LL);
      if ( !v26 )
        goto LABEL_113;
      BattleHpGaugeBarComponent__setInitValue(v26, v27, (int32_t)data, 0LL);
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
      v29 = this->fields.data;
      if ( !v29 )
        goto LABEL_113;
      shiftDeckList = v29->fields.shiftDeckList;
      if ( !shiftDeckList )
        goto LABEL_113;
      data = (BattleServantData_o *)this->fields.hpChange;
      if ( !data )
        goto LABEL_113;
      BattleServantChangeBarComponent__setBarType(
        (BattleServantChangeBarComponent_o *)data,
        1,
        shiftDeckList->max_length - v29->fields.shiftDeckIndex,
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
      BattleServantHpShiftComponent__setInitValue((BattleServantHpShiftComponent_o *)data, this->fields.data, v33);
    }
    BattleServantParamComponent__setAtlas(this, v32);
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
      sub_B0D97C(data);
    v35 = (int)data;
    MaxHp = BattleServantData__getMaxHp(this->fields.data, 0LL);
    BattleServantParamComponent__updateHplabel(this, v35, MaxHp, 1, v37);
    npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v39 = this->fields.npcomp;
      if ( !v39 )
        goto LABEL_113;
      v39->fields.lineCount = 3;
      data = this->fields.data;
      if ( !data )
        goto LABEL_113;
      v40 = this->fields.npcomp;
      data = (BattleServantData_o *)BattleServantData__getCountMaxNp(data, 0LL);
      if ( !v40 )
        goto LABEL_113;
      v40->fields.maxparam = (int)data;
      data = (BattleServantData_o *)this->fields.npcomp;
      if ( !data )
        goto LABEL_113;
      BattleNpGaugeSystemComponent__InitSliderValue((BattleNpGaugeSystemComponent_o *)data, 0LL);
      v41 = this->fields.data;
      if ( !v41 )
        goto LABEL_113;
      data = (BattleServantData_o *)this->fields.npcomp;
      if ( !data )
        goto LABEL_113;
      BattleNpGaugeSystemComponent__setNowParam((BattleNpGaugeSystemComponent_o *)data, v41->fields.np, 0LL);
      data = this->fields.data;
      if ( !data )
        goto LABEL_113;
      v42 = this->fields.npcomp;
      data = (BattleServantData_o *)BattleServantData__isAddNpGauge(data, 0LL);
      if ( !v42 )
        goto LABEL_113;
      BattleNpGaugeSystemComponent__setUseNp(v42, (unsigned __int8)data & 1, 0LL);
    }
    nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v44 = UnityEngine_Object__op_Inequality(nextTdGauge, 0LL, 0LL);
    if ( (v3 & 1) == 0 && v44 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_113;
      v46 = this->fields.nextTdGauge;
      nexttpturn = data->fields.nexttpturn;
      maxtpturn = data->fields.maxtpturn;
      data = (BattleServantData_o *)BattleServantData__isTDSeraled(data, 0LL);
      if ( !v46 )
        goto LABEL_113;
      BattleNextTDgaugeComponent__setInitGauge(v46, nexttpturn, maxtpturn, (unsigned __int8)data & 1, 0LL);
    }
    BattleServantParamComponent__updateSkillIcon(this, 0, v45);
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
      v51 = this->fields.data;
      if ( !v51 )
        goto LABEL_113;
      if ( v51->fields.followerType )
      {
        v52 = this->fields.friendIcon;
        data = (BattleServantData_o *)FileName_TypeInfo;
        if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
        if ( !v52 )
          goto LABEL_113;
        UISprite__set_spriteName(v52, FileName_TypeInfo->static_fields->friendIconName, 0LL);
        data = (BattleServantData_o *)this->fields.friendIcon;
        if ( !data )
          goto LABEL_113;
        data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
        if ( !data )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
        v51 = this->fields.data;
        if ( !v51 )
          goto LABEL_113;
      }
      if ( v51->fields.flgEventJoin )
      {
        v53 = this->fields.friendIcon;
        data = (BattleServantData_o *)FileName_TypeInfo;
        if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
        if ( !v53 )
          goto LABEL_113;
        UISprite__set_spriteName(v53, FileName_TypeInfo->static_fields->eventJoinIconName, 0LL);
        data = (BattleServantData_o *)this->fields.friendIcon;
        if ( !data )
          goto LABEL_113;
        data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
        if ( !data )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
      }
    }
    BattleServantParamComponent__setRoleTyoe(this, v50);
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
        v56 = this->fields.data;
        if ( v56 )
        {
          data = (BattleServantData_o *)this->fields.breakPoint;
          if ( data )
          {
            BattleServantBreakPointComponent__Initialize(
              (BattleServantBreakPointComponent_o *)data,
              v56->fields.defeatPoint,
              v56->fields.maxDefeatPoint,
              v56->fields.isEnemy,
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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

  if ( (byte_4217279 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2774/*"Battle/Prefab/ef_add_enemy"*/, method);
    byte_4217279 = 1;
  }
  data = this->fields.data;
  if ( data && data->fields.isAddition )
  {
    clsIconComponent = (UnityEngine_Component_o *)this->fields.clsIconComponent;
    if ( !clsIconComponent
      || (transform = UnityEngine_Component__get_transform(clsIconComponent, 0LL),
          clsIconComponent = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject_18711800(
                                                          (BaseMonoBehaviour_o *)this,
                                                          (System_String_o *)StringLiteral_2774/*"Battle/Prefab/ef_add_enemy"*/,
                                                          transform,
                                                          0LL,
                                                          0LL),
          (v6 = this->fields.data) == 0LL) )
    {
      sub_B0D97C(clsIconComponent);
    }
    v6->fields.isAddition = 0;
  }
}


void __fastcall BattleServantParamComponent__playAttackEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v2; // x19
  __int64 v3; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_array *v6; // x8
  UnityEngine_Object_o *v7; // x20
  UnityEngine_Object_o *facetex; // x20
  struct UnityEngine_GameObject_array *v9; // x20
  UnityEngine_Transform_o *transform; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x19
  __int64 v18; // x0
  __int64 v19; // x0

  v2 = this;
  if ( (byte_4217265 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    this = (BattleServantParamComponent_o *)sub_B0D8A4(&StringLiteral_18306/*"effect/ef_cwflash01"*/, v3);
    byte_4217265 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_27;
  if ( !effectobj->max_length )
    goto LABEL_28;
  v5 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = v2->fields.effectobj;
    if ( !v6 )
      goto LABEL_27;
    if ( !v6->max_length )
      goto LABEL_28;
    v7 = (UnityEngine_Object_o *)v6->m_Items[0];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v7, 0LL);
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
      v9 = v2->fields.effectobj;
      this = (BattleServantParamComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
      if ( this )
      {
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        this = (BattleServantParamComponent_o *)BaseMonoBehaviour__createObject_18711800(
                                                  (BaseMonoBehaviour_o *)v2,
                                                  (System_String_o *)StringLiteral_18306/*"effect/ef_cwflash01"*/,
                                                  transform,
                                                  0LL,
                                                  0LL);
        if ( v9 )
        {
          v17 = (System_Int32_array **)this;
          if ( this )
          {
            this = (BattleServantParamComponent_o *)sub_B0D964(this, v9->obj.klass->_1.element_class);
            if ( !this )
            {
              v19 = sub_B0D99C(0LL);
              sub_B0D948(v19, 0LL);
            }
          }
          if ( v9->max_length )
          {
            v9->m_Items[0] = (UnityEngine_GameObject_o *)v17;
            sub_B0D840((BattleServantConfConponent_o *)v9->m_Items, v17, v11, v12, v13, v14, v15, v16);
            return;
          }
LABEL_28:
          v18 = sub_B0D9A8(this);
          sub_B0D948(v18, 0LL);
        }
      }
    }
LABEL_27:
    sub_B0D97C(this);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__playCloseSelectServant(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  const MethodInfo *v4; // x2
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  float g; // s5
  float b; // s6
  float a; // s7
  float v10; // s4
  UnityEngine_Color_o gray; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4217258 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217258 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v5 )
      sub_B0D97C(0LL);
    gameObject = UnityEngine_Component__get_gameObject(v5, 0LL);
    gray = UnityEngine_Color__get_gray(0LL);
    g = gray.fields.g;
    b = gray.fields.b;
    a = gray.fields.a;
    gray.fields.g = gray.fields.r;
    gray.fields.b = g;
    gray.fields.a = b;
    v10 = a;
    TweenColor__Begin(gameObject, 0.4, *(UnityEngine_Color_o *)&gray.fields.g, 0LL);
  }
  BattleServantParamComponent__setTouch(this, 1, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__playEndShowServant(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  const MethodInfo *v4; // x2
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  float g; // s5
  float b; // s6
  float a; // s7
  float v10; // s4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4217259 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217259 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v5 )
      sub_B0D97C(0LL);
    gameObject = UnityEngine_Component__get_gameObject(v5, 0LL);
    white = UnityEngine_Color__get_white(0LL);
    g = white.fields.g;
    b = white.fields.b;
    a = white.fields.a;
    white.fields.g = white.fields.r;
    white.fields.b = g;
    white.fields.a = b;
    v10 = a;
    TweenColor__Begin(gameObject, 0.4, *(UnityEngine_Color_o *)&white.fields.g, 0LL);
  }
  BattleServantParamComponent__setTouch(this, 1, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__playSelectServant(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  const MethodInfo *v4; // x2
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  float g; // s5
  float b; // s6
  float a; // s7
  float v10; // s4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4217257 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217257 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v5 )
      sub_B0D97C(0LL);
    gameObject = UnityEngine_Component__get_gameObject(v5, 0LL);
    white = UnityEngine_Color__get_white(0LL);
    g = white.fields.g;
    b = white.fields.b;
    a = white.fields.a;
    white.fields.g = white.fields.r;
    white.fields.b = g;
    white.fields.a = b;
    v10 = a;
    TweenColor__Begin(gameObject, 0.4, *(UnityEngine_Color_o *)&white.fields.g, 0LL);
  }
  BattleServantParamComponent__setTouch(this, 1, v4);
}


void __fastcall BattleServantParamComponent__playShiftEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x20
  const MethodInfo *v4; // x2
  BattleServantHpShiftComponent_o *v5; // x0

  if ( (byte_4217270 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217270 = 1;
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
      v5 = this->fields.hpShift;
      if ( !v5 )
        sub_B0D97C(0LL);
      BattleServantHpShiftComponent__playShiftEffect(v5, this->fields.data, v4);
    }
  }
}


float __fastcall BattleServantParamComponent__playShiftEffectBefore(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x20
  const MethodInfo *v4; // x2
  BattleServantHpShiftComponent_o *v5; // x0

  if ( (byte_421726F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421726F = 1;
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
  v5 = this->fields.hpShift;
  if ( !v5 )
    sub_B0D97C(0LL);
  return BattleServantHpShiftComponent__playShiftEffectBefore(v5, this->fields.data, v4);
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
  BattleServantParamComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *BuffTextClassIconObject; // x19
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  const MethodInfo *v10; // x1
  float LabelPrintedWidth; // s10
  float v12; // s8
  float v13; // s9
  UnityEngine_Object_o *ComponentInChildren_SimpleAnimation; // x23
  UnityEngine_Object_c *klass; // x8
  int nestedTypes; // w22
  UnityEngine_Object_c *v17; // x8
  int v18; // w8
  float sideEffectLabelWidth; // s0
  float v20; // s1
  UnityEngine_Component_o *clsIconComponent; // x8
  UnityEngine_Transform_o *v22; // x20
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // [xsp+0h] [xbp-70h]
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_421727C & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___, buffData);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    this = (BattleServantParamComponent_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_421727C = 1;
  }
  if ( !buffData )
    goto LABEL_36;
  this = (BattleServantParamComponent_o *)v4->fields.battleEffectControl;
  if ( !this )
    goto LABEL_36;
  BuffTextClassIconObject = (UnityEngine_Object_o *)BattleEffectControl__getBuffTextClassIconObject(
                                                      (BattleEffectControl_o *)this,
                                                      buffData->fields.popColor,
                                                      0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Equality(BuffTextClassIconObject, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !BuffTextClassIconObject )
      goto LABEL_36;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)BuffTextClassIconObject,
                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_srcLineSprite )
        goto LABEL_36;
      BattleUIRangeLabel__SetAdjustLabelOffset(
        (BattleUIRangeLabel_o *)Component_srcLineSprite,
        buffData->fields.popLabel,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        0LL,
        0,
        0,
        0,
        v24);
    }
    else if ( !Component_srcLineSprite )
    {
      goto LABEL_36;
    }
    LabelPrintedWidth = BattleUIRangeLabel__GetLabelPrintedWidth((BattleUIRangeLabel_o *)Component_srcLineSprite, v10);
    v12 = fminf(v4->fields.sideEffectLabelWidth / (float)(LabelPrintedWidth * 0.8), 1.0);
    v13 = 0.0;
    if ( buffData->fields.popIcon >= 1 )
    {
      ComponentInChildren_SimpleAnimation = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_SimpleAnimation_(
                                                                      (UnityEngine_GameObject_o *)BuffTextClassIconObject,
                                                                      1,
                                                                      (const MethodInfo_1B62C78 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Inequality(
                                                ComponentInChildren_SimpleAnimation,
                                                0LL,
                                                0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !ComponentInChildren_SimpleAnimation )
          goto LABEL_36;
        BattleServantBuffIconComponent__setImageId(
          (BattleServantBuffIconComponent_o *)ComponentInChildren_SimpleAnimation,
          buffData->fields.popIcon,
          0LL);
        klass = ComponentInChildren_SimpleAnimation[1].klass;
        if ( !klass )
          goto LABEL_36;
        nestedTypes = (int)klass->_1.nestedTypes;
        this = (BattleServantParamComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)ComponentInChildren_SimpleAnimation,
                                                  0LL);
        if ( !this )
          goto LABEL_36;
        this = (BattleServantParamComponent_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)this,
                                                  0LL);
        if ( !this )
          goto LABEL_36;
        v25.fields.x = -(float)((float)((float)(LabelPrintedWidth * 0.5) + (float)((float)nestedTypes * 0.5)) + 5.0);
        v25.fields.y = 0.0;
        v25.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v25, 0LL);
        v17 = ComponentInChildren_SimpleAnimation[1].klass;
        if ( !v17 )
          goto LABEL_36;
        v18 = (int)v17->_1.nestedTypes;
        if ( v12 >= 1.0 )
        {
          sideEffectLabelWidth = v4->fields.sideEffectLabelWidth;
          v20 = (float)((float)((float)(LabelPrintedWidth * 0.8) + (float)((float)v18 * 0.8)) + 5.0)
              + (float)((float)(sideEffectLabelWidth - (float)(LabelPrintedWidth * 0.8)) * 0.5);
          v13 = 0.0;
          if ( v20 > sideEffectLabelWidth )
            v13 = v20 - sideEffectLabelWidth;
        }
        else
        {
          v13 = (float)(v12 * (float)((float)v18 * 0.8)) + 5.0;
        }
      }
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BuffTextClassIconObject, 0, 0LL);
    this = (BattleServantParamComponent_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)BuffTextClassIconObject,
                                              0LL);
    clsIconComponent = (UnityEngine_Component_o *)v4->fields.clsIconComponent;
    if ( clsIconComponent )
    {
      v22 = (UnityEngine_Transform_o *)this;
      this = (BattleServantParamComponent_o *)UnityEngine_Component__get_transform(clsIconComponent, 0LL);
      if ( v22 )
      {
        UnityEngine_Transform__SetParent(v22, (UnityEngine_Transform_o *)this, 0LL);
        this = (BattleServantParamComponent_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)BuffTextClassIconObject,
                                                  0LL);
        if ( this )
        {
          v26.fields.y = 1.0;
          v26.fields.x = v12;
          v26.fields.z = 1.0;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v26, 0LL);
          this = (BattleServantParamComponent_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)BuffTextClassIconObject,
                                                    0LL);
          if ( this )
          {
            v27.fields.y = 0.0;
            v27.fields.z = 0.0;
            v27.fields.x = v13;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v27, 0LL);
            BattleUIRangeLabel__AddLabelDepth((BattleUIRangeLabel_o *)Component_srcLineSprite, 100, v23);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BuffTextClassIconObject, 1, 0LL);
            return;
          }
        }
      }
    }
LABEL_36:
    sub_B0D97C(this);
  }
}


void __fastcall BattleServantParamComponent__setAtlas(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  AssetData_o *AssetStorage; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UnityEngine_Object_o *breakSprite; // x21
  UIAtlas_o *v13; // x20
  UISprite_o *v14; // x19
  Il2CppObject *v15; // x0
  int v16; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4217268 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, method);
    sub_B0D8A4(&AssetManager_TypeInfo, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v4);
    sub_B0D8A4(&int_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_2766/*"Battle/Common"*/, v7);
    sub_B0D8A4(&StringLiteral_2781/*"BattleAssetUIAtlas"*/, v8);
    sub_B0D8A4(&StringLiteral_19240/*"hp_break_"*/, v9);
    byte_4217268 = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2766/*"Battle/Common"*/, 0LL);
  if ( !AssetStorage )
    goto LABEL_16;
  AssetStorage = (AssetData_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_2781/*"BattleAssetUIAtlas"*/,
                                  (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( !AssetStorage )
    goto LABEL_16;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)AssetStorage,
                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  v13 = (UIAtlas_o *)Component_srcLineSprite;
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
      UISprite__set_atlas((UISprite_o *)AssetStorage, v13, 0LL);
      v14 = this->fields.breakSprite;
      v16 = 1;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
      AssetStorage = (AssetData_o *)System_String__Concat((Il2CppObject *)StringLiteral_19240/*"hp_break_"*/, v15, 0LL);
      if ( v14 )
      {
        UISprite__set_spriteName(v14, (System_String_o *)AssetStorage, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B0D97C(AssetStorage);
  }
}


void __fastcall BattleServantParamComponent__setClassIcon(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *clsIconComponent; // x20
  BattleServantData_o *data; // x0
  struct BattleServantData_o *v5; // x8
  int32_t v6; // w1

  if ( (byte_4217263 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217263 = 1;
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
      || (data = (BattleServantData_o *)BattleServantData__getClassId(data, 0LL), (v5 = this->fields.data) == 0LL)
      || (v6 = (int)data, (data = (BattleServantData_o *)this->fields.clsIconComponent) == 0LL) )
    {
      sub_B0D97C(data);
    }
    ServantClassIconComponent__SetImage(
      (ServantClassIconComponent_o *)data,
      v6,
      v5->fields._frameType_k__BackingField,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__setCloseMode(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *facetex; // x20
  UnityEngine_Component_o *Item; // x0
  const MethodInfo *v10; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  float g; // s5
  float b; // s6
  float a; // s7
  float v15; // s4
  int32_t modeWindow; // w8
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_Object_o *v18; // x21
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v20; // x21
  unsigned __int64 v21; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v23; // x0
  UnityEngine_Component_c *v24; // x8
  UnityEngine_Component_o *v25; // x21
  unsigned __int64 v26; // x10
  SimpleAnimation_State_c **v27; // x11
  __int64 v28; // x0
  UnityEngine_Component_c *v29; // x8
  SimpleAnimation_State_c *v30; // x1
  UnityEngine_Component_o *v31; // x21
  unsigned __int64 v32; // x10
  SimpleAnimation_State_c **v33; // x11
  unsigned __int64 v34; // x10
  __int64 v35; // x0
  const MethodInfo *v36; // x2
  UnityEngine_Color_o clear; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_421725A & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_13226/*"SvtW_StartClose"*/, v7);
    byte_421725A = 1;
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
    v15 = a;
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
                                                          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
      v18 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Animation___);
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
                                              (System_String_o *)StringLiteral_13226/*"SvtW_StartClose"*/,
                                              0LL);
          if ( Item )
          {
            klass = Item->klass;
            v20 = Item;
            if ( *(_WORD *)&Item->klass->_2.bitflags1 )
            {
              v21 = 0LL;
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v21;
                p_offset += 2;
                if ( v21 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                  goto LABEL_21;
              }
              v23 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
            }
            else
            {
LABEL_21:
              v23 = sub_AA67A0(Item, SimpleAnimation_State_TypeInfo, 4LL);
            }
            (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v23)(v20, *(_QWORD *)(v23 + 8), 0.0);
            Item = (UnityEngine_Component_o *)SimpleAnimation__get_Item(
                                                (SimpleAnimation_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_13226/*"SvtW_StartClose"*/,
                                                0LL);
            if ( Item )
            {
              v29 = Item->klass;
              v30 = SimpleAnimation_State_TypeInfo;
              v31 = Item;
              if ( *(_WORD *)&Item->klass->_2.bitflags1 )
              {
                v32 = 0LL;
                v33 = (SimpleAnimation_State_c **)&v29->_1.interfaceOffsets->offset;
                while ( *(v33 - 1) != SimpleAnimation_State_TypeInfo )
                {
                  ++v32;
                  v33 += 2;
                  if ( v32 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                    goto LABEL_54;
                }
LABEL_55:
                v35 = (__int64)(&v29[1]._1.castClass + 2 * *(_DWORD *)v33);
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
                                                          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
      v18 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Animation___);
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
                                              (System_String_o *)StringLiteral_13226/*"SvtW_StartClose"*/,
                                              0LL);
          if ( Item )
          {
            v24 = Item->klass;
            v25 = Item;
            if ( *(_WORD *)&Item->klass->_2.bitflags1 )
            {
              v26 = 0LL;
              v27 = (SimpleAnimation_State_c **)&v24->_1.interfaceOffsets->offset;
              while ( *(v27 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v26;
                v27 += 2;
                if ( v26 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                  goto LABEL_32;
              }
              v28 = (__int64)(&v24[1]._1.gc_desc + 2 * *(_DWORD *)v27);
            }
            else
            {
LABEL_32:
              v28 = sub_AA67A0(Item, SimpleAnimation_State_TypeInfo, 4LL);
            }
            (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v28)(v25, *(_QWORD *)(v28 + 8), 0.0);
            Item = (UnityEngine_Component_o *)SimpleAnimation__get_Item(
                                                (SimpleAnimation_o *)Component_WebViewObject,
                                                (System_String_o *)StringLiteral_13226/*"SvtW_StartClose"*/,
                                                0LL);
            if ( Item )
            {
              v29 = Item->klass;
              v30 = SimpleAnimation_State_TypeInfo;
              v31 = Item;
              if ( *(_WORD *)&Item->klass->_2.bitflags1 )
              {
                v34 = 0LL;
                v33 = (SimpleAnimation_State_c **)&v29->_1.interfaceOffsets->offset;
                while ( *(v33 - 1) != SimpleAnimation_State_TypeInfo )
                {
                  ++v34;
                  v33 += 2;
                  if ( v34 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                    goto LABEL_54;
                }
                goto LABEL_55;
              }
LABEL_54:
              v35 = sub_AA67A0(v31, v30, 8LL);
LABEL_56:
              (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v35)(v31, *(_QWORD *)(v35 + 8), 1.0);
              Item = (UnityEngine_Component_o *)SimpleAnimation__Play_50482404(
                                                  (SimpleAnimation_o *)Component_WebViewObject,
                                                  (System_String_o *)StringLiteral_13226/*"SvtW_StartClose"*/,
                                                  0LL);
              goto LABEL_57;
            }
          }
        }
LABEL_58:
        sub_B0D97C(Item);
      }
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Item = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !v18 )
        goto LABEL_58;
      Item = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(
                                          (UnityEngine_Animation_o *)v18,
                                          (System_String_o *)StringLiteral_13226/*"SvtW_StartClose"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_58;
      UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
      Item = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(
                                          (UnityEngine_Animation_o *)v18,
                                          (System_String_o *)StringLiteral_13226/*"SvtW_StartClose"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_58;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 1.0, 0LL);
      Item = (UnityEngine_Component_o *)UnityEngine_Animation__Play_50564840(
                                          (UnityEngine_Animation_o *)v18,
                                          (System_String_o *)StringLiteral_13226/*"SvtW_StartClose"*/,
                                          0LL);
    }
  }
LABEL_57:
  BattleServantParamComponent__EffectStartStop(
    (BattleServantParamComponent_o *)Item,
    this->fields.commandSpellEffectDict,
    0,
    v10);
  this->fields.modeWindow = 3;
  BattleServantParamComponent__setTouch(this, 0, v36);
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
  BattleNpGaugeSystemComponent_o *v14; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x3

  if ( (byte_4217255 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, data);
    byte_4217255 = 1;
  }
  this->fields.modeWindow = 1;
  this->fields.data = data;
  sub_B0D840(
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
      v14 = this->fields.npcomp;
      if ( !v14 )
        sub_B0D97C(0LL);
      BattleNpGaugeSystemComponent__resetSlider(v14, 0LL);
    }
    uniqueId = -1;
  }
  this->fields.uniqueID = uniqueId;
  BattleServantParamComponent__initUpdateView(this, 0, v10);
  BattleServantParamComponent__updateView(this, v15);
  BattleServantParamComponent__UpdateSkillRankUpEffect(this, v16);
  BattleServantParamComponent__setTargetMark(this, -1, 0, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__setOpenMode(
        BattleServantParamComponent_o *this,
        bool isPlayCommandSpellEffectStartAnim,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *facetex; // x21
  __int64 gameObject; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  UnityEngine_GameObject_o *v13; // x21
  float v14; // s8
  float g; // s5
  float b; // s6
  float a; // s7
  float v18; // s4
  int32_t modeWindow; // w8
  UnityEngine_Object_o *Component_WebViewObject; // x21
  UnityEngine_Object_o *v21; // x22
  SimpleAnimation_State_o *Item; // x22
  __int64 v23; // x8
  __int64 v24; // x23
  unsigned __int64 v25; // x10
  SimpleAnimation_State_c **v26; // x11
  __int64 v27; // x0
  SimpleAnimation_State_o *v28; // x22
  __int64 v29; // x8
  __int64 v30; // x23
  unsigned __int64 v31; // x10
  SimpleAnimation_State_c **v32; // x11
  __int64 v33; // x0
  UnityEngine_AnimationState_o *v34; // x21
  float length; // s0
  long double v36; // q0
  SimpleAnimation_State_c *klass; // x8
  long double v38; // q8
  unsigned __int64 v39; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v42; // x8
  SimpleAnimation_State_c *v43; // x1
  __int64 v44; // x22
  unsigned __int64 v45; // x10
  SimpleAnimation_State_c **v46; // x11
  long double v47; // q0
  SimpleAnimation_State_c *v48; // x8
  long double v49; // q8
  unsigned __int64 v50; // x10
  SimpleAnimation_State_c **v51; // x11
  __int64 v52; // x0
  unsigned __int64 v53; // x10
  __int64 v54; // x0
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x1
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_421725B & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Animation___, isPlayCommandSpellEffectStartAnim);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_13226/*"SvtW_StartClose"*/, v8);
    byte_421725B = 1;
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
    v13 = (UnityEngine_GameObject_o *)gameObject;
    gameObject = (__int64)BattlePerformance__get_MotionSkip(this->fields.perf, 0LL);
    if ( !gameObject )
      goto LABEL_78;
    LODWORD(v14) = COERCE_UNSIGNED_INT128(
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
    v18 = a;
    gameObject = (__int64)TweenColor__Begin(v13, v14, *(UnityEngine_Color_o *)&white.fields.g, 0LL);
    this->fields.isHideFaceTexture = 0;
  }
  modeWindow = this->fields.modeWindow;
  if ( modeWindow == 2 )
    goto LABEL_75;
  if ( modeWindow == 1 )
  {
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v21 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Animation___);
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
                 (System_String_o *)StringLiteral_13226/*"SvtW_StartClose"*/,
                 0LL);
        gameObject = (__int64)SimpleAnimation__get_Item(
                                (SimpleAnimation_o *)Component_WebViewObject,
                                (System_String_o *)StringLiteral_13226/*"SvtW_StartClose"*/,
                                0LL);
        if ( gameObject )
        {
          v23 = *(_QWORD *)gameObject;
          v24 = gameObject;
          if ( *(_WORD *)(*(_QWORD *)gameObject + 298LL) )
          {
            v25 = 0LL;
            v26 = (SimpleAnimation_State_c **)(*(_QWORD *)(v23 + 176) + 8LL);
            while ( *(v26 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v25;
              v26 += 2;
              if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)gameObject + 298LL) )
                goto LABEL_23;
            }
            v27 = v23 + 16LL * (*(_DWORD *)v26 + 13) + 312;
          }
          else
          {
LABEL_23:
            v27 = sub_AA67A0(gameObject, SimpleAnimation_State_TypeInfo, 13LL);
          }
          gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
          if ( Item )
          {
            klass = Item->klass;
            v38 = v36;
            if ( *(_WORD *)&Item->klass->_2.bitflags1 )
            {
              v39 = 0LL;
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v39;
                p_offset += 2;
                if ( v39 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                  goto LABEL_51;
              }
              p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
            }
            else
            {
LABEL_51:
              p_method = sub_AA67A0(Item, SimpleAnimation_State_TypeInfo, 4LL);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))p_method)(
              Item,
              *(_QWORD *)(p_method + 8),
              v38);
            gameObject = (__int64)SimpleAnimation__get_Item(
                                    (SimpleAnimation_o *)Component_WebViewObject,
                                    (System_String_o *)StringLiteral_13226/*"SvtW_StartClose"*/,
                                    0LL);
            if ( gameObject )
            {
              v42 = *(_QWORD *)gameObject;
              v43 = SimpleAnimation_State_TypeInfo;
              v44 = gameObject;
              if ( *(_WORD *)(*(_QWORD *)gameObject + 298LL) )
              {
                v45 = 0LL;
                v46 = (SimpleAnimation_State_c **)(*(_QWORD *)(v42 + 176) + 8LL);
                while ( *(v46 - 1) != SimpleAnimation_State_TypeInfo )
                {
                  ++v45;
                  v46 += 2;
                  if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)gameObject + 298LL) )
                    goto LABEL_72;
                }
LABEL_73:
                v54 = v42 + 16LL * (*(_DWORD *)v46 + 8) + 312;
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
                                                        (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v21 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Animation___);
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
        v28 = SimpleAnimation__get_Item(
                (SimpleAnimation_o *)Component_WebViewObject,
                (System_String_o *)StringLiteral_13226/*"SvtW_StartClose"*/,
                0LL);
        gameObject = (__int64)SimpleAnimation__get_Item(
                                (SimpleAnimation_o *)Component_WebViewObject,
                                (System_String_o *)StringLiteral_13226/*"SvtW_StartClose"*/,
                                0LL);
        if ( gameObject )
        {
          v29 = *(_QWORD *)gameObject;
          v30 = gameObject;
          if ( *(_WORD *)(*(_QWORD *)gameObject + 298LL) )
          {
            v31 = 0LL;
            v32 = (SimpleAnimation_State_c **)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *(v32 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v31;
              v32 += 2;
              if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)gameObject + 298LL) )
                goto LABEL_34;
            }
            v33 = v29 + 16LL * (*(_DWORD *)v32 + 13) + 312;
          }
          else
          {
LABEL_34:
            v33 = sub_AA67A0(gameObject, SimpleAnimation_State_TypeInfo, 13LL);
          }
          gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
          if ( v28 )
          {
            v48 = v28->klass;
            v49 = v47;
            if ( *(_WORD *)&v28->klass->_2.bitflags1 )
            {
              v50 = 0LL;
              v51 = (SimpleAnimation_State_c **)&v48->_1.interfaceOffsets->offset;
              while ( *(v51 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v50;
                v51 += 2;
                if ( v50 >= *(unsigned __int16 *)&v28->klass->_2.bitflags1 )
                  goto LABEL_65;
              }
              v52 = (__int64)&v48->vtable[*(_DWORD *)v51 + 4].method;
            }
            else
            {
LABEL_65:
              v52 = sub_AA67A0(v28, SimpleAnimation_State_TypeInfo, 4LL);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))v52)(v28, *(_QWORD *)(v52 + 8), v49);
            gameObject = (__int64)SimpleAnimation__get_Item(
                                    (SimpleAnimation_o *)Component_WebViewObject,
                                    (System_String_o *)StringLiteral_13226/*"SvtW_StartClose"*/,
                                    0LL);
            if ( gameObject )
            {
              v42 = *(_QWORD *)gameObject;
              v43 = SimpleAnimation_State_TypeInfo;
              v44 = gameObject;
              if ( *(_WORD *)(*(_QWORD *)gameObject + 298LL) )
              {
                v53 = 0LL;
                v46 = (SimpleAnimation_State_c **)(*(_QWORD *)(v42 + 176) + 8LL);
                while ( *(v46 - 1) != SimpleAnimation_State_TypeInfo )
                {
                  ++v53;
                  v46 += 2;
                  if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)gameObject + 298LL) )
                    goto LABEL_72;
                }
                goto LABEL_73;
              }
LABEL_72:
              v54 = sub_AA67A0(v44, v43, 8LL);
LABEL_74:
              (*(void (__fastcall **)(__int64, _QWORD, float))v54)(v44, *(_QWORD *)(v54 + 8), -1.0);
              gameObject = SimpleAnimation__Play_50482404(
                             (SimpleAnimation_o *)Component_WebViewObject,
                             (System_String_o *)StringLiteral_13226/*"SvtW_StartClose"*/,
                             0LL);
              goto LABEL_75;
            }
          }
        }
      }
LABEL_78:
      sub_B0D97C(gameObject);
    }
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    if ( v21 )
    {
      v34 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v21, (System_String_o *)StringLiteral_13226/*"SvtW_StartClose"*/, 0LL);
      gameObject = (__int64)UnityEngine_Animation__get_Item(
                              (UnityEngine_Animation_o *)v21,
                              (System_String_o *)StringLiteral_13226/*"SvtW_StartClose"*/,
                              0LL);
      if ( gameObject )
      {
        length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)gameObject, 0LL);
        if ( v34 )
        {
          UnityEngine_AnimationState__set_time(v34, length, 0LL);
          gameObject = (__int64)UnityEngine_Animation__get_Item(
                                  (UnityEngine_Animation_o *)v21,
                                  (System_String_o *)StringLiteral_13226/*"SvtW_StartClose"*/,
                                  0LL);
          if ( gameObject )
          {
            UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, -1.0, 0LL);
            gameObject = UnityEngine_Animation__Play_50564840(
                           (UnityEngine_Animation_o *)v21,
                           (System_String_o *)StringLiteral_13226/*"SvtW_StartClose"*/,
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
      v12);
LABEL_77:
  this->fields.modeWindow = 2;
  BattleServantParamComponent__setTouch(this, 1, v11);
  BattleServantParamComponent__updateSkillIcon(this, 0, v55);
  BattleServantParamComponent__RemoveEffectClearRankUpBuff(this, v56);
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
  sub_B0D840(
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
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *roleTypeSprite; // x20
  UISprite_o *gameObject; // x0
  struct BattleServantData_o *data; // x8
  int32_t roleType; // w8
  __int64 *v9; // x8
  UnityEngine_Transform_o *transform; // x20
  int v11; // s0
  bool v14; // w1

  if ( (byte_4217264 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_18428/*"enemy_icon_leader"*/, v3);
    sub_B0D8A4(&StringLiteral_22056/*"servant_icon"*/, v4);
    byte_4217264 = 1;
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
        v9 = &StringLiteral_18428/*"enemy_icon_leader"*/;
        goto LABEL_18;
      }
      if ( !gameObject )
        goto LABEL_26;
      if ( roleType == 3 )
      {
        v9 = &StringLiteral_22056/*"servant_icon"*/;
LABEL_18:
        UISprite__set_spriteName(gameObject, (System_String_o *)*v9, 0LL);
        gameObject = this->fields.roleTypeSprite;
        if ( gameObject )
        {
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
          *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Vector3__get_zero(0LL);
          if ( transform )
          {
            UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v11, 0LL);
            gameObject = this->fields.roleTypeSprite;
            if ( gameObject )
            {
              gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)gameObject,
                                           0LL);
              if ( gameObject )
              {
                v14 = 1;
LABEL_25:
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v14, 0LL);
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
      v14 = 0;
      goto LABEL_25;
    }
LABEL_26:
    sub_B0D97C(gameObject);
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
    sub_B0D97C(this);
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
      v8 = sub_B0D9A8(this);
      sub_B0D948(v8, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__setTargetMark(
        BattleServantParamComponent_o *this,
        int32_t uniqueId,
        bool isTargetLock,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *targetMark; // x22
  UnityEngine_Object_o *lockTargetMark; // x22
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
  const MethodInfo *v28; // x1
  MethodInfo v29; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_421726E & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, *(_QWORD *)&uniqueId);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_421726E = 1;
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
                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( this->fields.targetMark )
          {
            v14 = (UIWidget_o *)data;
            data = UnityEngine_GameObject__get_transform(this->fields.targetMark, 0LL);
            if ( data )
            {
              v30.fields.y = 22.0;
              v30.fields.z = 0.0;
              LODWORD(v30.fields.x) = localPosition;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)data, v30, 0LL);
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
                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                  if ( this->fields.lockTargetMark )
                  {
                    v15 = (UIWidget_o *)data;
                    data = UnityEngine_GameObject__get_transform(this->fields.lockTargetMark, 0LL);
                    if ( data )
                    {
                      v31.fields.z = 0.0;
                      LODWORD(v31.fields.x) = v13;
                      v31.fields.y = 22.0;
                      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)data, v31, 0LL);
                      if ( v15 )
                      {
                        UIWidget__set_depth(v15, -30, 0LL);
                        UIWidget__set_width(v15, 74, 0LL);
                        UIWidget__set_height(v15, 74, 0LL);
                        v33.fields.r = 1.0;
                        v33.fields.g = 1.0;
                        v33.fields.b = 1.0;
                        v29.methodPointer = 0LL;
                        v29.invoker_method = 0LL;
                        UnityEngine_Color___ctor_40757524(v33, v16, v17, v18, &v29);
                        *(_QWORD *)&v34.fields.r = v29.methodPointer;
                        *(_QWORD *)&v34.fields.b = v29.invoker_method;
                        UIWidget__set_color(v15, v34, 0LL);
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
                                              v32.fields.z = 0.0;
                                              LODWORD(v32.fields.x) = v13;
                                              v32.fields.y = 22.0;
                                              UnityEngine_Transform__set_localPosition(
                                                (UnityEngine_Transform_o *)data,
                                                v32,
                                                0LL);
                                              UIWidget__set_depth(v15, -30, 0LL);
                                              UIWidget__set_width(v15, 78, 0LL);
                                              UIWidget__set_height(v15, 78, 0LL);
                                              v35.fields.r = 1.0;
                                              v35.fields.g = 0.0;
                                              v35.fields.b = 0.0;
                                              v29.methodPointer = 0LL;
                                              v29.invoker_method = 0LL;
                                              UnityEngine_Color___ctor_40757524(v35, v20, v21, v22, &v29);
                                              *(_QWORD *)&v36.fields.r = v29.methodPointer;
                                              *(_QWORD *)&v36.fields.b = v29.invoker_method;
                                              UIWidget__set_color(v15, v36, 0LL);
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
                                  v28);
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
        sub_B0D97C(data);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__setTouch(
        BattleServantParamComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *Component_WebViewObject; // x20
  BattleServantData_o *data; // x0
  _BOOL8 v8; // x0

  if ( (byte_421725D & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Collider___, flg);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_421725D = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !flg || (data = this->fields.data) != 0LL && BattleServantData__isAlive(data, 0, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
    if ( v8 )
    {
      if ( !Component_WebViewObject )
        sub_B0D97C(v8);
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
  __int64 v5; // x1
  UnityEngine_GameObject_o *root; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x20

  if ( (byte_421725C & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Collider___, flg);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_421725C = 1;
  }
  root = this->fields.root;
  if ( !root )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(root, flg, 0LL);
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    sub_B0D97C(root);
  }
}


void __fastcall BattleServantParamComponent__shiftUpdateStatus(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v2; // x21
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v17; // x8
  struct BattleActionData_o *nowAction; // x9
  char v19; // w19
  int32_t NotShiftUpdateFlag; // w0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  struct BattleServantData_o *data; // x8
  struct BattlePerformance_o *v24; // x8
  struct BattleActionData_o *v25; // x8
  int32_t MaxHp; // w0
  const MethodInfo *v27; // x4
  UnityEngine_GameObject_o *gameObject; // x19
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Object_array *v35; // x20
  __int64 v36; // x0
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x22
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x21
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x1
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x1
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **v86; // x21
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **v93; // x1
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_Int32_array **v100; // x21
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Int32_array **v107; // x1
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_Int32_array **v114; // x1
  System_Collections_Hashtable_o *v115; // x0
  __int64 v116; // x0
  __int64 v117; // x0
  char v118[4]; // [xsp+8h] [xbp-38h] BYREF
  int v119; // [xsp+Ch] [xbp-34h] BYREF
  int32_t NowHp; // [xsp+18h] [xbp-28h] BYREF
  int v121; // [xsp+1Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4217278 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, method);
    sub_B0D8A4(&int_TypeInfo, v3);
    sub_B0D8A4(&object___TypeInfo, v4);
    sub_B0D8A4(&SeManager_TypeInfo, v5);
    sub_B0D8A4(&float_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_18972/*"from"*/, v7);
    sub_B0D8A4(&StringLiteral_19469/*"ignoretimescale"*/, v8);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v9);
    sub_B0D8A4(&StringLiteral_23020/*"updateShiftHplabel"*/, v10);
    sub_B0D8A4(&StringLiteral_21341/*"onupdate"*/, v11);
    sub_B0D8A4(&StringLiteral_22790/*"to"*/, v12);
    sub_B0D8A4(&StringLiteral_4215/*"ComplateUpdateShiftHplabel"*/, v13);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v14);
    this = (BattleServantParamComponent_o *)sub_B0D8A4(&iTween_TypeInfo, v15);
    byte_4217278 = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_84;
  this = (BattleServantParamComponent_o *)perf->fields.nowAction;
  if ( !this )
    goto LABEL_84;
  this = (BattleServantParamComponent_o *)BattleActionData__IsUpdateShiftHp((BattleActionData_o *)this, 0LL);
  v17 = v2->fields.perf;
  if ( !v17 )
    goto LABEL_84;
  nowAction = v17->fields.nowAction;
  if ( !nowAction )
    goto LABEL_84;
  v19 = (char)this;
  if ( nowAction->fields.isSkillShift )
  {
    this = (BattleServantParamComponent_o *)v2->fields.data;
    if ( !this )
      goto LABEL_84;
    BattleServantData__updateHp((BattleServantData_o *)this, 0LL);
    v17 = v2->fields.perf;
    if ( !v17 )
      goto LABEL_84;
  }
  this = (BattleServantParamComponent_o *)v17->fields.nowAction;
  if ( !this )
    goto LABEL_84;
  NotShiftUpdateFlag = BattleActionData__get_NotShiftUpdateFlag((BattleActionData_o *)this, 0LL);
  BattleServantParamComponent__initUpdateView(v2, NotShiftUpdateFlag, v21);
  data = v2->fields.data;
  if ( data )
    BattleServantParamComponent__updateBuffIcon(v2, data->fields.buffData, v22);
  if ( (v19 & 1) != 0 )
  {
    v24 = v2->fields.perf;
    if ( v24 )
    {
      v25 = v24->fields.nowAction;
      if ( v25 )
      {
        if ( v25->fields.isSkillShift )
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
          BattleServantParamComponent__updateHplabel(v2, 0, MaxHp, 1, v27);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
          this = (BattleServantParamComponent_o *)sub_B0D8BC(object___TypeInfo, 12LL);
          if ( this )
          {
            v35 = (System_Object_array *)this;
            v36 = StringLiteral_18972/*"from"*/;
            if ( StringLiteral_18972/*"from"*/ )
            {
              v36 = sub_B0D964(StringLiteral_18972/*"from"*/, v35->obj.klass->_1.element_class);
              if ( !v36 )
                goto LABEL_86;
              v37 = (System_Int32_array **)StringLiteral_18972/*"from"*/;
            }
            else
            {
              v37 = 0LL;
            }
            if ( !v35->max_length )
              goto LABEL_85;
            v35->m_Items[0] = (Il2CppObject *)v37;
            sub_B0D840((BattleServantConfConponent_o *)v35->m_Items, v37, v29, v30, v31, v32, v33, v34);
            v121 = 0;
            v36 = j_il2cpp_value_box_0(int_TypeInfo, &v121);
            v44 = (System_Int32_array **)v36;
            if ( v36 )
            {
              v36 = sub_B0D964(v36, v35->obj.klass->_1.element_class);
              if ( !v36 )
                goto LABEL_86;
            }
            if ( v35->max_length <= 1 )
              goto LABEL_85;
            v35->m_Items[1] = (Il2CppObject *)v44;
            sub_B0D840((BattleServantConfConponent_o *)&v35->m_Items[1], v44, v38, v39, v40, v41, v42, v43);
            v36 = StringLiteral_22790/*"to"*/;
            if ( StringLiteral_22790/*"to"*/ )
            {
              v36 = sub_B0D964(StringLiteral_22790/*"to"*/, v35->obj.klass->_1.element_class);
              if ( !v36 )
                goto LABEL_86;
              v51 = (System_Int32_array **)StringLiteral_22790/*"to"*/;
            }
            else
            {
              v51 = 0LL;
            }
            if ( v35->max_length <= 2 )
              goto LABEL_85;
            v35->m_Items[2] = (Il2CppObject *)v51;
            sub_B0D840((BattleServantConfConponent_o *)&v35->m_Items[2], v51, v45, v46, v47, v48, v49, v50);
            this = (BattleServantParamComponent_o *)v2->fields.data;
            if ( this )
            {
              NowHp = BattleServantData__getNowHp((BattleServantData_o *)this, 0LL);
              v36 = j_il2cpp_value_box_0(int_TypeInfo, &NowHp);
              v58 = (System_Int32_array **)v36;
              if ( !v36 || (v36 = sub_B0D964(v36, v35->obj.klass->_1.element_class)) != 0 )
              {
                if ( v35->max_length <= 3 )
                  goto LABEL_85;
                v35->m_Items[3] = (Il2CppObject *)v58;
                sub_B0D840((BattleServantConfConponent_o *)&v35->m_Items[3], v58, v52, v53, v54, v55, v56, v57);
                v36 = StringLiteral_21341/*"onupdate"*/;
                if ( StringLiteral_21341/*"onupdate"*/ )
                {
                  v36 = sub_B0D964(StringLiteral_21341/*"onupdate"*/, v35->obj.klass->_1.element_class);
                  if ( !v36 )
                    goto LABEL_86;
                  v65 = (System_Int32_array **)StringLiteral_21341/*"onupdate"*/;
                }
                else
                {
                  v65 = 0LL;
                }
                if ( v35->max_length <= 4 )
                  goto LABEL_85;
                v35->m_Items[4] = (Il2CppObject *)v65;
                sub_B0D840((BattleServantConfConponent_o *)&v35->m_Items[4], v65, v59, v60, v61, v62, v63, v64);
                v36 = StringLiteral_23020/*"updateShiftHplabel"*/;
                if ( StringLiteral_23020/*"updateShiftHplabel"*/ )
                {
                  v36 = sub_B0D964(StringLiteral_23020/*"updateShiftHplabel"*/, v35->obj.klass->_1.element_class);
                  if ( !v36 )
                    goto LABEL_86;
                  v72 = (System_Int32_array **)StringLiteral_23020/*"updateShiftHplabel"*/;
                }
                else
                {
                  v72 = 0LL;
                }
                if ( v35->max_length <= 5 )
                  goto LABEL_85;
                v35->m_Items[5] = (Il2CppObject *)v72;
                sub_B0D840((BattleServantConfConponent_o *)&v35->m_Items[5], v72, v66, v67, v68, v69, v70, v71);
                v36 = StringLiteral_22753/*"time"*/;
                if ( StringLiteral_22753/*"time"*/ )
                {
                  v36 = sub_B0D964(StringLiteral_22753/*"time"*/, v35->obj.klass->_1.element_class);
                  if ( !v36 )
                    goto LABEL_86;
                  v79 = (System_Int32_array **)StringLiteral_22753/*"time"*/;
                }
                else
                {
                  v79 = 0LL;
                }
                if ( v35->max_length <= 6 )
                  goto LABEL_85;
                v35->m_Items[6] = (Il2CppObject *)v79;
                sub_B0D840((BattleServantConfConponent_o *)&v35->m_Items[6], v79, v73, v74, v75, v76, v77, v78);
                v119 = 1069547520;
                v36 = j_il2cpp_value_box_0(float_TypeInfo, &v119);
                v86 = (System_Int32_array **)v36;
                if ( !v36 || (v36 = sub_B0D964(v36, v35->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v35->max_length <= 7 )
                    goto LABEL_85;
                  v35->m_Items[7] = (Il2CppObject *)v86;
                  sub_B0D840((BattleServantConfConponent_o *)&v35->m_Items[7], v86, v80, v81, v82, v83, v84, v85);
                  v36 = StringLiteral_19469/*"ignoretimescale"*/;
                  if ( StringLiteral_19469/*"ignoretimescale"*/ )
                  {
                    v36 = sub_B0D964(StringLiteral_19469/*"ignoretimescale"*/, v35->obj.klass->_1.element_class);
                    if ( !v36 )
                      goto LABEL_86;
                    v93 = (System_Int32_array **)StringLiteral_19469/*"ignoretimescale"*/;
                  }
                  else
                  {
                    v93 = 0LL;
                  }
                  if ( v35->max_length <= 8 )
                    goto LABEL_85;
                  v35->m_Items[8] = (Il2CppObject *)v93;
                  sub_B0D840((BattleServantConfConponent_o *)&v35->m_Items[8], v93, v87, v88, v89, v90, v91, v92);
                  v118[0] = 1;
                  v36 = j_il2cpp_value_box_0(bool_TypeInfo, v118);
                  v100 = (System_Int32_array **)v36;
                  if ( !v36 || (v36 = sub_B0D964(v36, v35->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v35->max_length <= 9 )
                      goto LABEL_85;
                    v35->m_Items[9] = (Il2CppObject *)v100;
                    sub_B0D840((BattleServantConfConponent_o *)&v35->m_Items[9], v100, v94, v95, v96, v97, v98, v99);
                    v36 = StringLiteral_21332/*"oncomplete"*/;
                    if ( StringLiteral_21332/*"oncomplete"*/ )
                    {
                      v36 = sub_B0D964(StringLiteral_21332/*"oncomplete"*/, v35->obj.klass->_1.element_class);
                      if ( !v36 )
                        goto LABEL_86;
                      v107 = (System_Int32_array **)StringLiteral_21332/*"oncomplete"*/;
                    }
                    else
                    {
                      v107 = 0LL;
                    }
                    if ( v35->max_length <= 0xA )
                      goto LABEL_85;
                    v35->m_Items[10] = (Il2CppObject *)v107;
                    sub_B0D840(
                      (BattleServantConfConponent_o *)&v35->m_Items[10],
                      v107,
                      v101,
                      v102,
                      v103,
                      v104,
                      v105,
                      v106);
                    v36 = StringLiteral_4215/*"ComplateUpdateShiftHplabel"*/;
                    if ( !StringLiteral_4215/*"ComplateUpdateShiftHplabel"*/ )
                    {
                      v114 = 0LL;
LABEL_78:
                      if ( v35->max_length > 0xB )
                      {
                        v35->m_Items[11] = (Il2CppObject *)v114;
                        sub_B0D840(
                          (BattleServantConfConponent_o *)&v35->m_Items[11],
                          v114,
                          v108,
                          v109,
                          v110,
                          v111,
                          v112,
                          v113);
                        if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !iTween_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                        }
                        v115 = iTween__Hash(v35, 0LL);
                        iTween__ValueTo(gameObject, v115, 0LL);
                        return;
                      }
LABEL_85:
                      v116 = sub_B0D9A8(v36);
                      sub_B0D948(v116, 0LL);
                    }
                    v36 = sub_B0D964(StringLiteral_4215/*"ComplateUpdateShiftHplabel"*/, v35->obj.klass->_1.element_class);
                    if ( v36 )
                    {
                      v114 = (System_Int32_array **)StringLiteral_4215/*"ComplateUpdateShiftHplabel"*/;
                      goto LABEL_78;
                    }
                  }
                }
              }
LABEL_86:
              v117 = sub_B0D99C(v36);
              sub_B0D948(v117, 0LL);
            }
          }
        }
      }
    }
LABEL_84:
    sub_B0D97C(this);
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

  if ( (byte_421727A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__, buffData);
    byte_421727A = 1;
  }
  sideEffectShowQueue = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields.sideEffectShowQueue;
  if ( !sideEffectShowQueue )
    sub_B0D97C(0LL);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    sideEffectShowQueue,
    (Mono_Net_CFNetwork_GetProxyData_o *)buffData,
    (const MethodInfo_2B030C4 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__);
  if ( !this->fields.isShowingSideEffect )
  {
    this->fields.isShowingSideEffect = 1;
    v7 = BattleServantParamComponent__showSideEffectList(this, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__showSideEffectList(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_421727B & 1) == 0 )
  {
    sub_B0D8A4(&BattleServantParamComponent__showSideEffectList_d__107_TypeInfo, method);
    byte_421727B = 1;
  }
  v4 = sub_B0D974(BattleServantParamComponent__showSideEffectList_d__107_TypeInfo, method, v2);
  BattleServantParamComponent__showSideEffectList_d__107___ctor(
    (BattleServantParamComponent__showSideEffectList_d__107_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall BattleServantParamComponent__updateBuffIcon(
        BattleServantParamComponent_o *this,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *showBuffComponent; // x21
  __int64 ShowServantParam; // x0
  BattleServantShowBuffComponent_o *v11; // x21
  const MethodInfo *v12; // x2
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  struct BattleServantData_o *v15; // x8
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v17; // x1
  struct BattleServantData_o *v18; // x8
  UnityEngine_Object_o *ServantActor; // x21
  void *monitor; // x8
  System_String_o *v21; // x22
  __int64 v22; // x23
  System_String_o *v23; // x24
  HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_c *v24; // x0
  int v25; // w8
  __int64 v26; // x23
  System_String_o *v27; // x24
  __int64 v28; // x22
  System_String_o *v29; // x23
  struct BattleServantData_o *v30; // x8
  int v31; // w8
  __int64 v32; // x21
  int v33; // w23
  char v34; // w22
  __int64 v35; // x27
  int v36; // w27
  struct BattleServantData_o *v37; // x8
  UnityEngine_Object_o *v38; // x20
  __int64 v39; // x0
  int v40; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_421726D & 1) == 0 )
  {
    sub_B0D8A4(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, buffData);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_13378/*"TAMAMOCAT_STUN_BUFF_ID"*/, v7);
    sub_B0D8A4(&StringLiteral_23268/*"wait"*/, v8);
    byte_421726D = 1;
  }
  v40 = 0;
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
  v11 = this->fields.showBuffComponent;
  ShowServantParam = (__int64)BattleBuffData__getShowServantParam(buffData, 0LL);
  if ( !v11 )
    goto LABEL_60;
  BattleServantShowBuffComponent__setBuffList(v11, (BattleBuffData_ShowBuffData_array *)ShowServantParam, v12);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_60;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_60;
  if ( data->fields.isMultiTargetBattle )
  {
    v15 = this->fields.data;
    if ( !v15 )
      goto LABEL_60;
    if ( v15->fields.isEnemy )
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
        BattleServantShowBuffComponent__UpdateActiveBuffList((BattleServantShowBuffComponent_o *)ShowServantParam, v17);
      }
    }
  }
  v18 = this->fields.data;
  if ( !v18 || (ShowServantParam = (__int64)this->fields.perf) == 0 )
LABEL_60:
    sub_B0D97C(ShowServantParam);
  ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                           (BattlePerformance_o *)ShowServantParam,
                                           v18->fields.uniqueId,
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
    v21 = (System_String_o *)*((_QWORD *)monitor + 15);
    if ( (ShowServantParam & 1) != 0 )
    {
      v40 = 9;
      ShowServantParam = j_il2cpp_value_box_0(
                           HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo,
                           &v40);
      if ( !ShowServantParam )
        goto LABEL_60;
      v22 = ShowServantParam;
      v23 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ShowServantParam + 360LL))(
                                 ShowServantParam,
                                 *(_QWORD *)(*(_QWORD *)ShowServantParam + 368LL));
      v40 = *(_DWORD *)j_il2cpp_object_unbox_0(v22);
      ShowServantParam = BasicHelper__EqualExceptNullOrEmpty(v21, v23, 0LL);
      if ( (ShowServantParam & 1) == 0 )
        goto LABEL_36;
      v24 = HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
      v25 = 49;
    }
    else
    {
      v40 = 49;
      ShowServantParam = j_il2cpp_value_box_0(
                           HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo,
                           &v40);
      if ( !ShowServantParam )
        goto LABEL_60;
      v26 = ShowServantParam;
      v27 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ShowServantParam + 360LL))(
                                 ShowServantParam,
                                 *(_QWORD *)(*(_QWORD *)ShowServantParam + 368LL));
      v40 = *(_DWORD *)j_il2cpp_object_unbox_0(v26);
      ShowServantParam = BasicHelper__EqualExceptNullOrEmpty(v21, v27, 0LL);
      if ( (ShowServantParam & 1) == 0 )
        goto LABEL_36;
      v24 = HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
      v25 = 9;
    }
    v40 = v25;
    ShowServantParam = j_il2cpp_value_box_0(v24, &v40);
    if ( !ShowServantParam )
      goto LABEL_60;
    v28 = ShowServantParam;
    v29 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ShowServantParam + 360LL))(
                               ShowServantParam,
                               *(_QWORD *)(*(_QWORD *)ShowServantParam + 368LL));
    v40 = *(_DWORD *)j_il2cpp_object_unbox_0(v28);
    BattleActorControl__playAnimation_31613668((BattleActorControl_o *)ServantActor, v29, 0, 0LL);
  }
LABEL_36:
  v30 = this->fields.data;
  if ( !v30 )
    goto LABEL_60;
  if ( !v30->fields.isSleepWaitMode )
    return;
  ShowServantParam = (__int64)BattleBuffData__getActiveList(buffData, 1, 0LL);
  if ( !ShowServantParam )
    goto LABEL_60;
  v31 = *(_DWORD *)(ShowServantParam + 24);
  v32 = ShowServantParam;
  if ( v31 < 1 )
    goto LABEL_64;
  v33 = 0;
  v34 = 0;
  do
  {
    if ( v33 >= (unsigned int)v31 )
    {
      v39 = sub_B0D9A8(ShowServantParam);
      sub_B0D948(v39, 0LL);
    }
    v35 = *(_QWORD *)(v32 + 8LL * v33 + 32);
    if ( !v35 )
      goto LABEL_60;
    if ( !*(_BYTE *)(v35 + 370) )
    {
      ShowServantParam = (__int64)BattleBuffData__get_buffMst(buffData, 0LL);
      if ( !ShowServantParam )
        goto LABEL_60;
      ShowServantParam = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)ShowServantParam,
                                    *(_DWORD *)(v35 + 16),
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !ShowServantParam )
        goto LABEL_60;
      v36 = *(_DWORD *)(ShowServantParam + 16);
      ShowServantParam = ConstantMaster__getValue((System_String_o *)StringLiteral_13378/*"TAMAMOCAT_STUN_BUFF_ID"*/, 0LL);
      v34 |= v36 == (_DWORD)ShowServantParam;
    }
    v31 = *(_DWORD *)(v32 + 24);
    ++v33;
  }
  while ( v33 < v31 );
  if ( (v34 & 1) == 0 )
  {
LABEL_64:
    ShowServantParam = (__int64)this->fields.data;
    if ( !ShowServantParam )
      goto LABEL_60;
    BattleServantData__SetIsSleepWaitMode((BattleServantData_o *)ShowServantParam, 0, 0LL);
    v37 = this->fields.data;
    if ( !v37 )
      goto LABEL_60;
    ShowServantParam = (__int64)this->fields.perf;
    if ( !ShowServantParam )
      goto LABEL_60;
    v38 = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                    (BattlePerformance_o *)ShowServantParam,
                                    v37->fields.uniqueId,
                                    0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    ShowServantParam = UnityEngine_Object__op_Inequality(v38, 0LL, 0LL);
    if ( (ShowServantParam & 1) != 0 )
    {
      if ( v38 )
      {
        if ( BattleActorControl__checkID((BattleActorControl_o *)v38, this->fields.uniqueID, 0LL) )
          BattleActorControl__playAnimation_31613668(
            (BattleActorControl_o *)v38,
            (System_String_o *)StringLiteral_23268/*"wait"*/,
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
  const MethodInfo *v10; // x2
  BattlePerformance_o *perf; // x0
  UnityEngine_Object_o *ServantActor; // x20
  System_Int32_array *AuraIdList; // x1

  if ( (byte_421726C & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, svtData);
    byte_421726C = 1;
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
          BattleServantParamComponent__UpdateClassIconEffect(this, svtData, v10);
        perf = this->fields.perf;
        if ( !perf )
          goto LABEL_18;
        ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(perf, svtData->fields.uniqueId, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(ServantActor, 0LL, 0LL);
        if ( ((unsigned __int8)perf & 1) == 0 )
        {
          if ( !ServantActor )
            goto LABEL_18;
          BattleActorControl__updateBuffLoopEffect((BattleActorControl_o *)ServantActor, 0LL);
          BattleActorControl__UpdateActorVisibilityByBuff((BattleActorControl_o *)ServantActor, 0, 0LL);
          if ( doAuraUpdate )
          {
            perf = (BattlePerformance_o *)ServantActor[18].monitor;
            if ( perf )
            {
              AuraIdList = BattleServantData__getAuraIdList((BattleServantData_o *)perf, 0LL);
              BattleActorControl__updateAura((BattleActorControl_o *)ServantActor, AuraIdList, 0LL);
              return;
            }
LABEL_18:
            sub_B0D97C(perf);
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

  if ( (byte_4217261 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&now);
    byte_4217261 = 1;
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
      sub_B0D97C(data);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__updateHplabel(
        BattleServantParamComponent_o *this,
        int32_t now,
        int32_t max,
        bool isDispBreak,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Object_o *hplabel; // x24
  __int64 *v16; // x8
  System_String_o *v17; // x23
  UILabel_o *v18; // x24
  Il2CppObject *v19; // x0
  System_String_o *data; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x24
  UnityEngine_Object_o *maxhplabel; // x24
  UILabel_o *v23; // x24
  Il2CppObject *v24; // x0
  UnityEngine_Object_o *totalhplabel; // x23
  UILabel_o *v26; // x23
  Il2CppObject *v27; // x24
  Il2CppObject *v28; // x0
  __int64 *v29; // x8
  UnityEngine_Object_o *breakSprite; // x22
  bool isShiftableServant; // w8
  bool v32; // w9
  bool v33; // w20
  UnityEngine_Object_o *v34; // x21
  UnityEngine_Object_o *v35; // x21
  UnityEngine_Object_o *v36; // x21
  int32_t v37; // [xsp+8h] [xbp-48h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4217262 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, *(_QWORD *)&now);
    sub_B0D8A4(&int_TypeInfo, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_23617/*"{0}"*/, v11);
    sub_B0D8A4(&StringLiteral_23688/*"{0}/{1}"*/, v12);
    sub_B0D8A4(&StringLiteral_23567/*"{0:#,0}"*/, v13);
    sub_B0D8A4(&StringLiteral_23570/*"{0:#,0}/{1:#,0}"*/, v14);
    byte_4217262 = 1;
  }
  hplabel = (UnityEngine_Object_o *)this->fields.hplabel;
  if ( this->fields.hpformatflg )
    v16 = &StringLiteral_23567/*"{0:#,0}"*/;
  else
    v16 = &StringLiteral_23617/*"{0}"*/;
  v17 = (System_String_o *)*v16;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(hplabel, 0LL, 0LL) )
  {
    v18 = this->fields.hplabel;
    v38 = now;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
    data = System_String__Format(v17, v19, 0LL);
    if ( !v18 )
      goto LABEL_59;
    UILabel__set_text(v18, data, 0LL);
    data = (System_String_o *)this->fields.hplabel;
    if ( !data )
      goto LABEL_59;
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)data,
                                                        (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
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
    v23 = this->fields.maxhplabel;
    v38 = max;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
    data = System_String__Format(v17, v24, 0LL);
    if ( !v23 )
      goto LABEL_59;
    UILabel__set_text(v23, data, 0LL);
  }
  totalhplabel = (UnityEngine_Object_o *)this->fields.totalhplabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(totalhplabel, 0LL, 0LL) )
  {
    v26 = this->fields.totalhplabel;
    if ( this->fields.hpformatflg )
    {
      v38 = now;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
      v37 = max;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
      v29 = &StringLiteral_23570/*"{0:#,0}/{1:#,0}"*/;
    }
    else
    {
      v38 = now;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
      v37 = max;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
      v29 = &StringLiteral_23688/*"{0}/{1}"*/;
    }
    data = System_String__Format_43845440((System_String_o *)*v29, v27, v28, 0LL);
    if ( !v26 )
      goto LABEL_59;
    UILabel__set_text(v26, data, 0LL);
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
      sub_B0D97C(data);
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
  if ( (byte_421725E & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, svtdata);
    byte_421725E = 1;
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
      sub_B0D97C(this);
    }
  }
}


void __fastcall BattleServantParamComponent__updateNp_29259244(
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
  if ( (byte_421725F & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, svtdata);
    byte_421725F = 1;
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
            v13 = sub_B0D9A8(v11);
            sub_B0D948(v13, 0LL);
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
          sub_B0D97C(this);
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
    sub_B0D97C(0LL);
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
  BattleBuffData_o *v6; // x20
  struct BattleServantSkillIConComponent_array *skillIcon; // x8
  BattleBuffData_o *v8; // x21
  unsigned __int64 v9; // x22
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o **p_activeList; // x28
  unsigned __int64 max_length; // x9
  unsigned __int64 passiveList_low; // x10
  BattleSkillInfoData_o *v13; // x23
  struct BattleServantSkillIConComponent_array *v14; // x8
  int32_t v15; // w24
  BattleServantSkillIConComponent_o *v16; // x25
  char v17; // w26
  const MethodInfo *v18; // x6
  BattleServantSkillIConComponent_o *v19; // x8
  __int64 v20; // x0

  data = this->fields.data;
  if ( data )
  {
    BuffData = BattleServantData__get_BuffData(data, 0LL);
    if ( !BuffData
      || (BattleBuffData__UpdateSkillRelationBuff(BuffData, 0LL),
          (BuffData = (BattleBuffData_o *)this->fields.data) == 0LL)
      || (BuffData = (BattleBuffData_o *)BattleServantData__getActiveSkillInfos((BattleServantData_o *)BuffData, 0LL),
          !this->fields.data)
      || (v6 = BuffData,
          BuffData = (BattleBuffData_o *)BattleServantData__getSkillSealSelect(this->fields.data, 0LL),
          (skillIcon = this->fields.skillIcon) == 0LL) )
    {
LABEL_29:
      sub_B0D97C(BuffData);
    }
    v8 = BuffData;
    v9 = 0LL;
    p_activeList = &BuffData->fields.activeList;
    while ( 1 )
    {
      max_length = skillIcon->max_length;
      if ( (__int64)v9 >= (int)max_length )
        break;
      if ( !v6 )
        goto LABEL_29;
      passiveList_low = LODWORD(v6->fields.passiveList);
      if ( (__int64)v9 >= (int)passiveList_low )
      {
        if ( v9 >= max_length )
        {
LABEL_31:
          v20 = sub_B0D9A8(BuffData);
          sub_B0D948(v20, 0LL);
        }
        v19 = skillIcon->m_Items[v9];
        if ( !v19 )
          goto LABEL_29;
        BuffData = (BattleBuffData_o *)v19->fields.root;
        if ( !BuffData )
          goto LABEL_29;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BuffData, 0, 0LL);
      }
      else
      {
        if ( v9 >= passiveList_low )
          goto LABEL_31;
        BuffData = (BattleBuffData_o *)this->fields.data;
        if ( !BuffData )
          goto LABEL_29;
        v13 = (BattleSkillInfoData_o *)*((_QWORD *)&v6->fields.activeList + v9);
        BuffData = (BattleBuffData_o *)BattleServantData__getSkillSealTurn((BattleServantData_o *)BuffData, 0LL);
        if ( !v8 )
          goto LABEL_29;
        if ( v9 >= LODWORD(v8->fields.passiveList) )
          goto LABEL_31;
        if ( *((_BYTE *)p_activeList + v9) )
        {
          BuffData = (BattleBuffData_o *)this->fields.data;
          if ( !BuffData )
            goto LABEL_29;
          BuffData = (BattleBuffData_o *)BattleServantData__getSkillSealSelectTurn(
                                           (BattleServantData_o *)BuffData,
                                           v9,
                                           0LL);
        }
        v14 = this->fields.skillIcon;
        v15 = (int)BuffData;
        if ( !v14 )
          goto LABEL_29;
        if ( v9 >= v14->max_length )
          goto LABEL_31;
        BuffData = (BattleBuffData_o *)this->fields.data;
        if ( !BuffData )
          goto LABEL_29;
        v16 = v14->m_Items[v9];
        BuffData = (BattleBuffData_o *)BattleServantData__canUseSkill((BattleServantData_o *)BuffData, v9, 0LL);
        if ( !this->fields.data )
          goto LABEL_29;
        v17 = (char)BuffData;
        BuffData = (BattleBuffData_o *)BattleServantData__getNotActTurn(this->fields.data, 0LL);
        if ( v9 >= LODWORD(v8->fields.passiveList) )
          goto LABEL_31;
        if ( !v16 )
          goto LABEL_29;
        BattleServantSkillIConComponent__SetSkillInfo(
          v16,
          v13,
          v17 & 1,
          v15,
          (int32_t)BuffData,
          *((_BYTE *)p_activeList + v9),
          v18);
      }
      skillIcon = this->fields.skillIcon;
      ++v9;
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
  BattleServantData_o *data; // x0
  struct BattleServantData_o *v6; // x8

  if ( (byte_4217260 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, svtData);
    byte_4217260 = 1;
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
      sub_B0D97C(data);
    }
    v6 = this->fields.data;
    if ( !v6 )
      goto LABEL_16;
    data = (BattleServantData_o *)this->fields.nextTdGauge;
    if ( !data )
      goto LABEL_16;
    BattleNextTDgaugeComponent__setValue((BattleNextTDgaugeComponent_o *)data, v6->fields.nexttpturn, 0LL);
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
  BattleServantData_o *v14; // x1
  const MethodInfo *v15; // x2
  struct BattleServantData_o *v16; // x8
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  struct BattleServantData_o *v19; // x8

  v3 = this;
  if ( (byte_4217267 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217267 = 1;
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
                    v16 = v3->fields.data;
                    if ( !v16 )
                      goto LABEL_35;
                    this = (BattleServantParamComponent_o *)v3->fields.npcomp;
                    if ( !this )
                      goto LABEL_35;
                    BattleNpGaugeSystemComponent__setNowParam(
                      (BattleNpGaugeSystemComponent_o *)this,
                      v16->fields.np,
                      0LL);
                  }
                  BattleServantParamComponent__updateTDGauge(v3, v14, v15);
                  BattleServantParamComponent__updateSkillIcon(v3, 0, v17);
                  v19 = v3->fields.data;
                  if ( v19 )
                  {
                    BattleServantParamComponent__updateBuffIcon(v3, v19->fields.buffData, v18);
                    return;
                  }
                }
              }
            }
          }
        }
LABEL_35:
        sub_B0D97C(this);
      }
    }
  }
  BattleServantParamComponent__setTouch(v3, 0, v2);
  this = (BattleServantParamComponent_o *)v3->fields.root;
  if ( !this )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall BattleServantParamComponent__CoAddClassIconEffect_d__120___ctor(
        BattleServantParamComponent__CoAddClassIconEffect_d__120_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantParamComponent__CoAddClassIconEffect_d__120__MoveNext(
        BattleServantParamComponent__CoAddClassIconEffect_d__120_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleServantParamComponent__CoAddClassIconEffect_d__120_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  int32_t _1__state; // w8
  struct BattleServantParamComponent_o *_4__this; // x20
  Il2CppObject *v20; // x22
  struct BattleServantParamComponent___c__DisplayClass120_0_o **p__8__1; // x21
  int32_t effectId; // w1
  __int64 v23; // x1
  __int64 v24; // x2
  int32_t v25; // w22
  Il2CppObject *_8__1; // x24
  System_Action_o *v27; // x23
  BattlePerformance_o *perf; // x24
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattleServantData_o *servantData; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x21
  int32_t v33; // w22
  UnityEngine_Object_o *EffectObject; // x21
  UnityEngine_Transform_o *v35; // x22
  UnityEngine_Transform_o *transform; // x22
  int v37; // s0
  UnityEngine_Transform_o *v40; // x22
  int v41; // s0
  System_String_o *v44; // x21
  struct BattlePerformance_o *v45; // x8
  struct BattleData_o *data; // x8
  System_String_o *v47; // x21
  Il2CppObject *v48; // x0
  System_String_o *v49; // x22
  UnityEngine_Object_o *Manager__loadBattleCommonEffect; // x21
  UnityEngine_Object_o *facetex; // x22
  UnityEngine_Transform_o *v52; // x22
  UnityEngine_GameObject_o *v53; // x21
  int32_t battleGenderType; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *name; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *path; // [xsp+10h] [xbp-40h] BYREF
  UISprite_o *component; // [xsp+18h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_4211F03 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_EffectMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__GameObject__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v9);
    sub_B0D8A4(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, v10);
    sub_B0D8A4(&int_TypeInfo, v11);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v14);
    sub_B0D8A4(&Method_BattleServantParamComponent___c__DisplayClass120_0__CoAddClassIconEffect_b__0__, v15);
    sub_B0D8A4(&BattleServantParamComponent___c__DisplayClass120_0_TypeInfo, v16);
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__120_o *)sub_B0D8A4(&StringLiteral_18229/*"ef_commandaura_{0}"*/, v17);
    byte_4211F03 = 1;
  }
  path = 0LL;
  component = 0LL;
  name = 0LL;
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    p__8__1 = &v3->fields.__8__1;
    v3->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    v20 = (Il2CppObject *)sub_B0D974(BattleServantParamComponent___c__DisplayClass120_0_TypeInfo, method, v2);
    System_Object___ctor(v20, 0LL);
    p__8__1 = &v3->fields.__8__1;
    v3->fields.__8__1 = (struct BattleServantParamComponent___c__DisplayClass120_0_o *)v20;
    sub_B0D840(&v3->fields.__8__1, v20);
    effectId = v3->fields.effectId;
    if ( effectId < 1 )
      return 0;
    if ( !_4__this )
      goto LABEL_76;
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__120_o *)_4__this->fields.classIconEffectDict;
    if ( !this )
      goto LABEL_76;
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__120_o *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                                                           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
                                                                           effectId,
                                                                           (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 0;
    if ( _4__this->fields.currentClassIconAuraEffectPriority < v3->fields.priority )
    {
      BattleServantParamComponent__DestroyAllEffect(_4__this, _4__this->fields.classIconEffectDict, 0, 0LL);
      _4__this->fields.currentClassIconAuraEffectPriority = v3->fields.priority;
    }
    if ( !*p__8__1 )
      goto LABEL_76;
    (*p__8__1)->fields.isLoading = 1;
    v25 = v3->fields.effectId;
    _8__1 = (Il2CppObject *)v3->fields.__8__1;
    v27 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v23, v24);
    System_Action___ctor(
      v27,
      _8__1,
      Method_BattleServantParamComponent___c__DisplayClass120_0__CoAddClassIconEffect_b__0__,
      0LL);
    perf = _4__this->fields.perf;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    }
    BattleEffectUtility__LoadEffectAssetIfNotYet(v25, v27, perf, 0LL);
  }
  if ( !*p__8__1 )
    goto LABEL_76;
  if ( (*p__8__1)->fields.isLoading )
  {
    v3->fields.__2__current = 0LL;
    p__2__current = &v3->fields.__2__current;
    sub_B0D840(p__2__current, 0LL);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  if ( !_4__this )
    goto LABEL_76;
  servantData = v3->fields.servantData;
  if ( !servantData )
    goto LABEL_76;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__120_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_76;
  ServantGameObject = BattlePerformance__getServantGameObject(
                        (BattlePerformance_o *)this,
                        servantData->fields.uniqueId,
                        0LL);
  if ( !ServantGameObject )
    ServantGameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
  v33 = v3->fields.effectId;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  EffectObject = (UnityEngine_Object_o *)BattleEffectUtility__getEffectObject(v33, ServantGameObject, 1, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__120_o *)UnityEngine_Object__op_Equality(
                                                                         EffectObject,
                                                                         0LL,
                                                                         0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !EffectObject )
    goto LABEL_76;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__120_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0LL);
  if ( !_4__this->fields.clsIconComponent )
    goto LABEL_76;
  v35 = (UnityEngine_Transform_o *)this;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__120_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                                                                         0LL);
  if ( !v35 )
    goto LABEL_76;
  UnityEngine_Transform__set_parent(v35, (UnityEngine_Transform_o *)this, 0LL);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EffectObject, 0LL);
  *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform )
    goto LABEL_76;
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v37, 0LL);
  v40 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EffectObject, 0LL);
  *(UnityEngine_Vector3_o *)&v41 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v40 )
    goto LABEL_76;
  UnityEngine_Transform__set_localPosition(v40, *(UnityEngine_Vector3_o *)&v41, 0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectObject, 1, 0LL);
  if ( UnityEngine_GameObject__TryGetComponent_UISprite_(
         (UnityEngine_GameObject_o *)EffectObject,
         &component,
         (const MethodInfo_1B63348 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__120_o *)component;
    if ( !component )
      goto LABEL_76;
    CommonEffectComponent__Init((CommonEffectComponent_o *)component, 0, 0, 0LL);
  }
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__120_o *)_4__this->fields.classIconEffectDict;
  if ( !this )
    goto LABEL_76;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
          v3->fields.effectId,
          (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__120_o *)_4__this->fields.classIconEffectDict;
    if ( !this )
      goto LABEL_76;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
      v3->fields.effectId,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)EffectObject,
      (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
  }
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__120_o *)_4__this->fields.commandSpellEffectDict;
  if ( !this )
LABEL_76:
    sub_B0D97C(this);
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
          v3->fields.effectId,
          (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__120_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EffectMaster___);
    if ( this )
    {
      this = (BattleServantParamComponent__CoAddClassIconEffect_d__120_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                                             v3->fields.effectId,
                                                                             (const MethodInfo_2669BD4 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( this )
      {
        v44 = (System_String_o *)this->fields.__4__this;
        if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        }
        BattleEffectUtility__GetBattleCommonEffectPathAndName(v44, &path, &name, 0LL);
        v45 = _4__this->fields.perf;
        if ( v45 )
        {
          data = v45->fields.data;
          if ( data )
          {
            v47 = path;
            battleGenderType = data->fields.battleGenderType;
            v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &battleGenderType);
            v49 = System_String__Format((System_String_o *)StringLiteral_18229/*"ef_commandaura_{0}"*/, v48, 0LL);
            if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            }
            Manager__loadBattleCommonEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                        v47,
                                                                        v49,
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
            this = (BattleServantParamComponent__CoAddClassIconEffect_d__120_o *)_4__this->fields.facetex;
            if ( this )
            {
              v52 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v53 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                  (UILabel_o *)Manager__loadBattleCommonEffect,
                                                  v52,
                                                  (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
              GameObjectExtensions__ResetTransform(v53, 0LL);
              if ( v53 )
              {
                UnityEngine_GameObject__SetActive(v53, !_4__this->fields.isHideFaceTexture, 0LL);
                this = (BattleServantParamComponent__CoAddClassIconEffect_d__120_o *)_4__this->fields.commandSpellEffectDict;
                if ( this )
                {
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                    v3->fields.effectId,
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v53,
                    (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
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


Il2CppObject *__fastcall BattleServantParamComponent__CoAddClassIconEffect_d__120__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__CoAddClassIconEffect_d__120_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantParamComponent__CoAddClassIconEffect_d__120__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__CoAddClassIconEffect_d__120_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleServantParamComponent__CoAddClassIconEffect_d__120_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall BattleServantParamComponent__CoAddClassIconEffect_d__120__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__CoAddClassIconEffect_d__120_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantParamComponent__CoAddClassIconEffect_d__120__System_IDisposable_Dispose(
        BattleServantParamComponent__CoAddClassIconEffect_d__120_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantParamComponent__DelayMethod_d__111___ctor(
        BattleServantParamComponent__DelayMethod_d__111_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantParamComponent__DelayMethod_d__111__MoveNext(
        BattleServantParamComponent__DelayMethod_d__111_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  bool result; // w0
  struct BattleCallBackBase_o *callBack; // x0

  if ( (byte_4211F04 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_4211F04 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callBack = this->fields.callBack;
    this->fields.__1__state = -1;
    if ( !callBack )
      sub_B0D97C(0LL);
    ((void (__fastcall *)(struct BattleCallBackBase_o *, const char *))callBack->klass[1]._1.gc_desc)(
      callBack,
      callBack->klass[1]._1.name);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    waitTime = this->fields.waitTime;
    v6 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
    UnityEngine_WaitForSeconds___ctor(v6, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_B0D840(&this->fields.__2__current, v6);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleServantParamComponent__DelayMethod_d__111__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__DelayMethod_d__111_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantParamComponent__DelayMethod_d__111__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__DelayMethod_d__111_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleServantParamComponent__DelayMethod_d__111_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall BattleServantParamComponent__DelayMethod_d__111__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__DelayMethod_d__111_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantParamComponent__DelayMethod_d__111__System_IDisposable_Dispose(
        BattleServantParamComponent__DelayMethod_d__111_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantParamComponent___c__DisplayClass118_0___ctor(
        BattleServantParamComponent___c__DisplayClass118_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantParamComponent___c__DisplayClass118_0___DestroyEffectObject_b__0(
        BattleServantParamComponent___c__DisplayClass118_0_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *effectDict; // x0

  if ( (byte_4211F02 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, method);
    byte_4211F02 = 1;
  }
  effectDict = this->fields.effectDict;
  if ( !effectDict )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)effectDict,
    this->fields.id,
    (const MethodInfo_2E91E04 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
}


void __fastcall BattleServantParamComponent___c__DisplayClass120_0___ctor(
        BattleServantParamComponent___c__DisplayClass120_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantParamComponent___c__DisplayClass120_0___CoAddClassIconEffect_b__0(
        BattleServantParamComponent___c__DisplayClass120_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoading = 0;
}


void __fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81___ctor(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81__MoveNext(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81_o *this,
        const MethodInfo *method)
{
  BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81_o *v2; // x19
  int32_t _1__state; // w8
  __int64 v4; // x0
  bool result; // w0
  struct BattleServantParamComponent_o *_4__this; // x20
  struct BattleServantSkillIConComponent_array *skillIcon; // x19
  int max_length; // w8
  int v9; // w22
  char v10; // w21
  __int64 v11; // x0
  int v12; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4211F05 & 1) == 0 )
  {
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81_o *)sub_B0D8A4(&int_TypeInfo, method);
    byte_4211F05 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_22;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81_o *)BattleServantData__get_BuffData(
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
        v11 = sub_B0D9A8(this);
        sub_B0D948(v11, 0LL);
      }
      this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81_o *)skillIcon->m_Items[v9];
      if ( !this )
        goto LABEL_22;
      this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81_o *)BattleServantSkillIConComponent__UpdateSkillRankUpEffect(
                                                                                        (BattleServantSkillIConComponent_o *)this,
                                                                                        0LL);
      max_length = skillIcon->max_length;
      ++v9;
      v10 |= (unsigned __int8)this;
    }
    while ( v9 < max_length );
    if ( (v10 & 1) == 0 )
      return 0;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81_o *)_4__this->fields.data;
    if ( !this
      || (this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81_o *)BattleServantData__get_BuffData(
                                                                                            (BattleServantData_o *)this,
                                                                                            0LL)) == 0LL
      || (this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81_o *)this[2].klass) == 0LL )
    {
LABEL_22:
      sub_B0D97C(this);
    }
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter((BattleBuffData_SkillRankChangeData_o *)this, 0, 0LL);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v12 = 0;
    v4 = j_il2cpp_value_box_0(int_TypeInfo, &v12);
    v2->fields.__2__current = (Il2CppObject *)v4;
    sub_B0D840(&v2->fields.__2__current, v4);
    result = 1;
    v2->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81__System_IDisposable_Dispose(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantParamComponent__showSideEffectList_d__107___ctor(
        BattleServantParamComponent__showSideEffectList_d__107_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantParamComponent__showSideEffectList_d__107__MoveNext(
        BattleServantParamComponent__showSideEffectList_d__107_o *this,
        const MethodInfo *method)
{
  BattleServantParamComponent__showSideEffectList_d__107_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleServantParamComponent_o *_4__this; // x20
  BattleActionData_BuffData_o *v8; // x21
  UnityEngine_Transform_o *v9; // x22
  int32_t statusEffectId; // w23
  float x; // s10
  float y; // s8
  float z; // s9
  __int64 v14; // x1
  __int64 v15; // x2
  BattleServantParamComponent_c *v16; // x0
  float SideEffectShowWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v18; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4211F06 & 1) == 0 )
  {
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, method);
    sub_B0D8A4(&BattleServantParamComponent_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__get_Count__, v5);
    this = (BattleServantParamComponent__showSideEffectList_d__107_o *)sub_B0D8A4(
                                                                         &UnityEngine_WaitForSeconds_TypeInfo,
                                                                         v6);
    byte_4211F06 = 1;
  }
  if ( v2->fields.__1__state >= 2u )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_18;
  this = (BattleServantParamComponent__showSideEffectList_d__107_o *)_4__this->fields.sideEffectShowQueue;
  if ( !this )
    goto LABEL_18;
  if ( !LODWORD(this->fields.__4__this) )
  {
    result = 0;
    _4__this->fields.isShowingSideEffect = 0;
    return result;
  }
  this = (BattleServantParamComponent__showSideEffectList_d__107_o *)System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                                                                       (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this,
                                                                       (const MethodInfo_2B032DC *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__);
  if ( !_4__this->fields.clsIconComponent
    || (v8 = (BattleActionData_BuffData_o *)this,
        this = (BattleServantParamComponent__showSideEffectList_d__107_o *)UnityEngine_Component__get_transform(
                                                                             (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                                                                             0LL),
        !v8) )
  {
LABEL_18:
    sub_B0D97C(this);
  }
  v9 = (UnityEngine_Transform_o *)this;
  statusEffectId = v8->fields.statusEffectId;
  x = _4__this->fields.sideEffectScl.fields.x;
  y = _4__this->fields.sideEffectScl.fields.y;
  z = _4__this->fields.sideEffectScl.fields.z;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  v21.fields.x = x;
  v21.fields.y = y;
  v21.fields.z = z;
  BattleEffectUtility__showSideEffect(v9, statusEffectId, v21, 0LL);
  BattleServantParamComponent__popBuffLabel(_4__this, v8, 0LL);
  v16 = BattleServantParamComponent_TypeInfo;
  if ( (BYTE3(BattleServantParamComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v16 = BattleServantParamComponent_TypeInfo;
  }
  SideEffectShowWaitTime = v16->static_fields->SideEffectShowWaitTime;
  v18 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, v14, v15);
  UnityEngine_WaitForSeconds___ctor(v18, SideEffectShowWaitTime, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v18;
  p__2__current = &v2->fields.__2__current;
  sub_B0D840(p__2__current, v18);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall BattleServantParamComponent__showSideEffectList_d__107__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__showSideEffectList_d__107_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantParamComponent__showSideEffectList_d__107__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__showSideEffectList_d__107_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleServantParamComponent__showSideEffectList_d__107_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall BattleServantParamComponent__showSideEffectList_d__107__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__showSideEffectList_d__107_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantParamComponent__showSideEffectList_d__107__System_IDisposable_Dispose(
        BattleServantParamComponent__showSideEffectList_d__107_o *this,
        const MethodInfo *method)
{
  ;
}