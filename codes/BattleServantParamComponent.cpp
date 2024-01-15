void __fastcall BattleServantParamComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FCD1B & 1) == 0 )
  {
    sub_B16FFC(&BattleServantParamComponent_TypeInfo, v1);
    byte_40FCD1B = 1;
  }
  LODWORD(BattleServantParamComponent_TypeInfo->static_fields->SideEffectShowWaitTime) = (struct BattleServantParamComponent_StaticFields)1065353216;
}


void __fastcall BattleServantParamComponent___ctor(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UnityEngine_GameObject_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  float v26; // s4
  float v27; // s5
  float v28; // s6
  float v29; // s7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct UnityEngine_Color_o v52; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FCD1A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v4);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo, v7);
    byte_40FCD1A = 1;
  }
  v8 = (struct UnityEngine_GameObject_array *)sub_B17014(UnityEngine_GameObject___TypeInfo, 1LL, v2);
  this->fields.effectobj = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effectobj,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v19 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B170CC(
                                                                        System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo,
                                                                        v15,
                                                                        v16,
                                                                        v17,
                                                                        v18);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v19,
    (const MethodInfo_2B15EA4 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__);
  this->fields.sideEffectShowQueue = (struct System_Collections_Generic_Queue_BattleActionData_BuffData__o *)v19;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sideEffectShowQueue,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  *(UnityEngine_Vector3_o *)&v53.fields.r = UnityEngine_Vector3__get_one(0LL);
  this->fields.sideEffectLabelWidth = 100.0;
  this->fields.sideEffectScl.fields.x = v53.fields.r;
  v53.fields.r = 0.3;
  this->fields.sideEffectScl.fields.y = v53.fields.g;
  this->fields.sideEffectScl.fields.z = v53.fields.b;
  v53.fields.a = 1.0;
  v53.fields.g = 0.3;
  v53.fields.b = 0.3;
  v52 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor(v53, v26, v27, v28, v29, (const MethodInfo *)&v52);
  this->fields.GRAY = v52;
  this->fields.isActiveHpBar = 1;
  v34 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__GameObject__TypeInfo,
                                                                                                   v30,
                                                                                                   v31,
                                                                                                   v32,
                                                                                                   v33);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v34,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.classIconEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v34;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.classIconEffectDict,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v45 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__GameObject__TypeInfo,
                                                                                                   v41,
                                                                                                   v42,
                                                                                                   v43,
                                                                                                   v44);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v45,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.commandSpellEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v45;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandSpellEffectDict,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
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
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40FCD18 & 1) == 0 )
  {
    sub_B16FFC(&BattleServantParamComponent__CoAddClassIconEffect_d__120_TypeInfo, *(_QWORD *)&effectId);
    byte_40FCD18 = 1;
  }
  v9 = sub_B170CC(
         BattleServantParamComponent__CoAddClassIconEffect_d__120_TypeInfo,
         *(_QWORD *)&effectId,
         *(_QWORD *)&priority,
         servantData,
         method);
  BattleServantParamComponent__CoAddClassIconEffect_d__120___ctor(
    (BattleServantParamComponent__CoAddClassIconEffect_d__120_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_B170D4();
  *(_QWORD *)(v9 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v9 + 32) = effectId;
  *(_DWORD *)(v9 + 48) = priority;
  *(_QWORD *)(v9 + 64) = servantData;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v9 + 64),
    (System_Int32_array **)servantData,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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
    sub_B170D4();
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
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__DelayMethod(
        BattleServantParamComponent_o *this,
        float waitTime,
        BattleCallBackBase_o *callBack,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FCD11 & 1) == 0 )
  {
    sub_B16FFC(&BattleServantParamComponent__DelayMethod_d__111_TypeInfo, callBack);
    byte_40FCD11 = 1;
  }
  v8 = sub_B170CC(BattleServantParamComponent__DelayMethod_d__111_TypeInfo, callBack, method, v4, v5);
  BattleServantParamComponent__DelayMethod_d__111___ctor(
    (BattleServantParamComponent__DelayMethod_d__111_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B170D4();
  *(float *)(v8 + 32) = waitTime;
  *(_QWORD *)(v8 + 40) = callBack;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)callBack, v9, v10, v11, v12, v13, v14);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall BattleServantParamComponent__DeleteSkillRankUpEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleServantSkillIConComponent_array *skillIcon; // x19
  int max_length; // w8
  unsigned int v5; // w20
  BattleServantSkillIConComponent_o *v6; // x0

  skillIcon = this->fields.skillIcon;
  if ( !skillIcon )
    goto LABEL_9;
  max_length = skillIcon->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v6 = skillIcon->m_Items[v5];
      if ( !v6 )
        break;
      BattleServantSkillIConComponent__DeleteRankUpEffect(v6, method);
      max_length = skillIcon->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_B170D4();
  }
}


void __fastcall BattleServantParamComponent__DestroyAllEffect(
        BattleServantParamComponent_o *this,
        System_Collections_Generic_Dictionary_int__GameObject__o *effectDict,
        bool forceDestroy,
        const MethodInfo *method)
{
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  BattleServantParamComponent_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x4
  struct UnityEngine_GameObject_o *root; // x8
  BattleServantParamComponent_o *v13; // x21
  unsigned __int64 v14; // x22
  bool v15; // w20

  if ( (byte_40FCD16 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, effectDict);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    byte_40FCD16 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)effectDict, 0LL) )
  {
    if ( !effectDict
      || (Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
                   (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)effectDict,
                   (const MethodInfo_2DE8FC8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__),
          (v8 = (BattleServantParamComponent_o *)System_Linq_Enumerable__ToArray_int_(
                                                   (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                   (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___)) == 0LL) )
    {
      sub_B170D4();
    }
    root = v8->fields.root;
    v13 = v8;
    if ( (int)root >= 1 )
    {
      v14 = 0LL;
      v15 = forceDestroy;
      do
      {
        if ( v14 >= (unsigned int)root )
        {
          sub_B17100(v8, v9, v10);
          sub_B170A0();
        }
        BattleServantParamComponent__DestroyEffectObject(
          v8,
          effectDict,
          *((_DWORD *)&v13->fields.target + v14),
          v15,
          v11);
        LODWORD(root) = v13->fields.root;
        ++v14;
      }
      while ( (__int64)v14 < (int)root );
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **v22; // x20
  System_Collections_ICollection_o *v23; // x0
  UnityEngine_GameObject_o *Item; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  UIButton_o *v29; // x20
  System_Action_o *v30; // x21
  UnityEngine_Object_o *v31; // x21
  UIButton_o *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FCD17 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, effectDict);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&Method_BattleServantParamComponent___c__DisplayClass118_0__DestroyEffectObject_b__0__, v13);
    sub_B16FFC(&BattleServantParamComponent___c__DisplayClass118_0_TypeInfo, v14);
    byte_40FCD17 = 1;
  }
  component = 0LL;
  v15 = sub_B170CC(
          BattleServantParamComponent___c__DisplayClass118_0_TypeInfo,
          effectDict,
          *(_QWORD *)&id,
          forceDestroy,
          method);
  BattleServantParamComponent___c__DisplayClass118_0___ctor(
    (BattleServantParamComponent___c__DisplayClass118_0_o *)v15,
    0LL);
  if ( !v15 )
    goto LABEL_20;
  *(_QWORD *)(v15 + 16) = effectDict;
  v22 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)(v15 + 16);
  sub_B16F98(
    (BattleServantConfConponent_o *)(v15 + 16),
    (System_Int32_array **)effectDict,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v23 = *(System_Collections_ICollection_o **)(v15 + 16);
  *(_DWORD *)(v15 + 24) = id;
  if ( !BasicHelper__IsNullOrEmpty(v23, 0LL) )
  {
    if ( !*v22 )
      goto LABEL_20;
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)*v22,
           *(_DWORD *)(v15 + 24),
           (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    {
      if ( !forceDestroy )
      {
        if ( !*v22 )
          goto LABEL_20;
        Item = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                             *v22,
                                             *(_DWORD *)(v15 + 24),
                                             (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
        if ( !Item )
          goto LABEL_20;
        if ( UnityEngine_GameObject__TryGetComponent_UIButton_(
               Item,
               &component,
               (const MethodInfo_19D1C80 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
        {
          v29 = component;
          v30 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
          System_Action___ctor(
            v30,
            (Il2CppObject *)v15,
            Method_BattleServantParamComponent___c__DisplayClass118_0__DestroyEffectObject_b__0__,
            0LL);
          if ( v29 )
          {
            ((void (__fastcall *)(UIButton_o *, __int64, System_Action_o *, Il2CppMethodPointer))v29->klass->vtable._8_OnDisable.method)(
              v29,
              1LL,
              v30,
              v29->klass->vtable._9_OnHover.methodPtr);
            return;
          }
LABEL_20:
          sub_B170D4();
        }
      }
      if ( !*v22 )
        goto LABEL_20;
      v31 = (UnityEngine_Object_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                      *v22,
                                      *(_DWORD *)(v15 + 24),
                                      (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v31, 0LL);
      if ( !*v22 )
        goto LABEL_20;
      System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
        (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)*v22,
        *(_DWORD *)(v15 + 24),
        (const MethodInfo_2DEAD98 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
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
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  Il2CppObject *currentValue; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v15; // [xsp+20h] [xbp-50h] BYREF
  UIButton_o *component; // [xsp+48h] [xbp-28h] BYREF

  if ( (byte_40FCD19 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__, effectDict);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__, v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__, v11);
    byte_40FCD19 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  component = 0LL;
  if ( !effectDict
    || (Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                   (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)effectDict,
                   (const MethodInfo_2DE9160 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v14,
    Values,
    (const MethodInfo_227BDC0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  v15 = v14;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
            &v15,
            (const MethodInfo_27297EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    currentValue = v15.fields.currentValue;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)currentValue, 0LL, 0LL) )
    {
      if ( !currentValue )
        sub_B170D4();
      if ( UnityEngine_GameObject__TryGetComponent_UIButton_(
             (UnityEngine_GameObject_o *)currentValue,
             &component,
             (const MethodInfo_19D1C80 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentValue, 1, 0LL);
        if ( isStart )
        {
          if ( !component )
            sub_B170D4();
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)component, 0LL);
        }
        else
        {
          if ( !component )
            sub_B170D4();
          ((void (__fastcall *)(UIButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))component->klass->vtable._9_OnHover.method)(
            component,
            0LL,
            0LL,
            component->klass->vtable._10_OnPress.methodPtr);
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
    (const MethodInfo_27297E8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
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
  bool isTDSeraled; // w0

  if ( (byte_40FCD08 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCD08 = 1;
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
        sub_B170D4();
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

  if ( (byte_40FCCE9 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_21149/*"onClickServant"*/, v4);
    byte_40FCCE9 = 1;
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
        sub_B170D4();
      UnityEngine_GameObject__SendMessage_40693300(v7, (System_String_o *)StringLiteral_21149/*"onClickServant"*/, v8, 0LL);
    }
  }
}


void __fastcall BattleServantParamComponent__OnCompleteShiftGaugeChangeHp(
        BattleServantParamComponent_o *this,
        BattleAction_BasePlayShiftGauge_o *playShiftGauge,
        const MethodInfo *method)
{
  if ( !playShiftGauge )
    sub_B170D4();
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
  BattleHpGaugeBarComponent_o *v8; // x0

  if ( (byte_40FCD0A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&nowHp);
    byte_40FCD0A = 1;
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
          (v8 = this->fields.hpGauge) == 0LL) )
    {
      sub_B170D4();
    }
    BattleHpGaugeBarComponent__updateNomalGauge(v8, nowHp, 0LL);
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
  BattleServantHpShiftComponent_o *v11; // x0
  float nextAnimationTime; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FCD06 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_40FCD06 = 1;
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
          (v11 = this->fields.hpShift) == 0LL) )
    {
      sub_B170D4();
    }
    BattleServantHpShiftComponent__UpdateIcon(v11, index, 1, 1, v10);
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

  if ( (byte_40FCD04 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_40FCD04 = 1;
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
      sub_B170D4();
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
  BattleServantHpShiftComponent_o *v18; // x0
  Il2CppObject *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Action_int__bool__bool__o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  BattleCallBack_int__bool__bool__o *v29; // x21
  BattleServantParamComponent_o *v30; // x0
  const MethodInfo *v31; // x2
  System_Collections_IEnumerator_o *v32; // x0
  float nextAnimationTime; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FCD05 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__bool__bool___ctor__, *(_QWORD *)&index);
    sub_B16FFC(&System_Action_int__bool__bool__TypeInfo, v9);
    sub_B16FFC(&Method_BattleCallBack_int__bool__bool___ctor__, v10);
    sub_B16FFC(&BattleCallBack_int__bool__bool__TypeInfo, v11);
    sub_B16FFC(&Method_BattleServantHpShiftComponent_UpdateIcon__, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FCD05 = 1;
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
      || (BattleServantHpShiftComponent__UpdateIconActive(v16, index, 1, v15), (v18 = this->fields.hpShift) == 0LL) )
    {
      sub_B170D4();
    }
    BattleServantHpShiftComponent__PlayShiftEffectGeneral(v18, index, effectData, this, &nextAnimationTime, 0LL, v17);
    v19 = (Il2CppObject *)this->fields.hpShift;
    v24 = (System_Action_int__bool__bool__o *)sub_B170CC(System_Action_int__bool__bool__TypeInfo, v20, v21, v22, v23);
    System_Action_int__bool__bool____ctor(
      v24,
      v19,
      Method_BattleServantHpShiftComponent_UpdateIcon__,
      (const MethodInfo_24C5DD8 *)Method_System_Action_int__bool__bool___ctor__);
    v29 = (BattleCallBack_int__bool__bool__o *)sub_B170CC(BattleCallBack_int__bool__bool__TypeInfo, v25, v26, v27, v28);
    BattleCallBack_int__bool__bool____ctor(
      v29,
      index,
      0,
      1,
      (System_Action_T1__T2__T3__o *)v24,
      (const MethodInfo_2D34028 *)Method_BattleCallBack_int__bool__bool___ctor__);
    v32 = BattleServantParamComponent__DelayMethod(v30, delayTime, (BattleCallBackBase_o *)v29, v31);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v32, 0LL);
  }
}


void __fastcall BattleServantParamComponent__RemoveEffectClearRankUpBuff(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleServantSkillIConComponent_array *skillIcon; // x19
  int max_length; // w8
  unsigned int v5; // w20
  BattleServantSkillIConComponent_o *v6; // x0

  skillIcon = this->fields.skillIcon;
  if ( !skillIcon )
    goto LABEL_9;
  max_length = skillIcon->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v6 = skillIcon->m_Items[v5];
      if ( !v6 )
        break;
      BattleServantSkillIConComponent__RemoveEffectClearRankUpBuff(v6, method);
      max_length = skillIcon->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__SetEnemyParamPosition(
        BattleServantParamComponent_o *this,
        BaseEnemyParamPosData_o *paramPosData,
        const MethodInfo *method)
{
  UnityEngine_Component_o *showBuffComponent; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v7; // x21
  UnityEngine_Transform_o *v8; // x0
  float v9; // s0
  float v10; // s1
  float v11; // s2
  int v12; // s0
  struct BattleServantShowBuffComponent_o *v15; // x20
  int32_t v16; // w0

  showBuffComponent = (UnityEngine_Component_o *)this->fields.showBuffComponent;
  if ( !showBuffComponent )
    goto LABEL_8;
  transform = UnityEngine_Component__get_transform(showBuffComponent, 0LL);
  if ( !this->fields.showBuffComponent
    || (v7 = transform,
        (v8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.showBuffComponent, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v9 = UnityEngine_Transform__get_localPosition(v8, 0LL), !paramPosData)
    || (((void (__fastcall *)(BaseEnemyParamPosData_o *, Il2CppMethodPointer, float, float, float))paramPosData->klass->vtable._6_GetSvtBuffLocalPos.method)(
          paramPosData,
          paramPosData->klass->vtable._7_get_BuffIconMaxLine.methodPtr,
          v9,
          v10,
          v11),
        !v7)
    || (UnityEngine_Transform__set_localPosition(v7, *(UnityEngine_Vector3_o *)&v12, 0LL),
        v15 = this->fields.showBuffComponent,
        v16 = ((__int64 (__fastcall *)(BaseEnemyParamPosData_o *, void *))paramPosData->klass->vtable._7_get_BuffIconMaxLine.method)(
                paramPosData,
                paramPosData->klass[1]._1.image),
        !v15) )
  {
LABEL_8:
    sub_B170D4();
  }
  v15->fields.maxLine = v16;
}


void __fastcall BattleServantParamComponent__UpdateClassIconEffect(
        BattleServantParamComponent_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
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
  BattleBuffData_o *BuffData; // x0
  System_Collections_ICollection_o *ClassIconEffectBuffList; // x23
  __int64 v23; // x1
  __int64 v24; // x2
  const MethodInfo *v25; // x3
  __int64 v26; // x4
  const MethodInfo *v27; // x3
  System_Collections_Generic_List_int__o *v28; // x21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v30; // x22
  Il2CppObject *current; // x27
  const MethodInfo *v32; // x4
  System_Collections_IEnumerator_o *v33; // x0
  struct System_Collections_Generic_Dictionary_int__GameObject__o *classIconEffectDict; // x0
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

  if ( (byte_40FCD15 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_AuraEffectMaster___, servantData);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v19);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v20);
    byte_40FCD15 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  entity = 0LL;
  memset(&v44, 0, sizeof(v44));
  v43 = 0;
  if ( !servantData )
    goto LABEL_38;
  BuffData = BattleServantData__get_BuffData(servantData, 0LL);
  if ( !BuffData )
    goto LABEL_38;
  ClassIconEffectBuffList = (System_Collections_ICollection_o *)BattleBuffData__GetClassIconEffectBuffList(
                                                                  BuffData,
                                                                  0LL);
  if ( BasicHelper__IsNullOrEmpty(ClassIconEffectBuffList, 0LL) )
  {
    BattleServantParamComponent__DestroyAllEffect(this, this->fields.classIconEffectDict, 0, v25);
    BattleServantParamComponent__DestroyAllEffect(this, this->fields.commandSpellEffectDict, 0, v27);
  }
  v28 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v23,
                                                    v24,
                                                    v25,
                                                    v26);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_AuraEffectMaster___);
  if ( !this->fields.classIconEffectDict )
    goto LABEL_38;
  v30 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.classIconEffectDict,
         (const MethodInfo_2DE8FB8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__) <= 0 )
    this->fields.currentClassIconAuraEffectPriority = 0;
  if ( !ClassIconEffectBuffList )
    goto LABEL_38;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ClassIconEffectBuffList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v45 = v41;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v45.fields.current;
    if ( !v45.fields.current )
      sub_B170D4();
    if ( !v30 )
      sub_B170D4();
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           v30,
           &entity,
           (int32_t)v45.fields.current[21].monitor,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__) )
    {
      if ( !entity )
        sub_B170D4();
      v33 = BattleServantParamComponent__CoAddClassIconEffect(
              this,
              *(&entity->fields.id + 1),
              (int32_t)entity->fields.age,
              servantData,
              v32);
      UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v33, 0LL);
      if ( !v28 )
        sub_B170D4();
      if ( !System_Collections_Generic_List_int___Contains(
              v28,
              (int32_t)current[21].monitor,
              (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
        System_Collections_Generic_List_int___Add(
          v28,
          (int32_t)current[21].monitor,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    }
  }
  v42[0] = 182;
  v43 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  v43 = 0;
  if ( !v28 )
LABEL_38:
    sub_B170D4();
  System_Collections_Generic_List_int___GetEnumerator(
    &v41,
    v28,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v44 = v41;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v44,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    classIconEffectDict = this->fields.classIconEffectDict;
    if ( !classIconEffectDict )
      sub_B170D4();
    v35 = (int32_t)v44.fields.current;
    v36 = System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)classIconEffectDict,
            (int32_t)v44.fields.current,
            (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    if ( !v36 )
    {
      BattleServantParamComponent__DestroyEffectObject(
        (BattleServantParamComponent_o *)v36,
        this->fields.classIconEffectDict,
        v35,
        0,
        v37);
      BattleServantParamComponent__DestroyEffectObject(v38, this->fields.commandSpellEffectDict, v35, 0, v39);
    }
  }
  v42[0] = 271;
  v40 = ++v43;
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v44,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  System_String_o *ServantName; // x0

  if ( (byte_40FCD13 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCD13 = 1;
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
      if ( !data || (v5 = this->fields.nameLabel, ServantName = BattleServantData__getServantName(data, 0LL), !v5) )
        sub_B170D4();
      UILabel__set_text(v5, ServantName, 0LL);
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

  if ( (byte_40FCD07 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&curGaugeIndex);
    byte_40FCD07 = 1;
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
      sub_B170D4();
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
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  BattleHpGaugeBarComponent_o *v32; // x0
  System_Collections_Hashtable_o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  char v39[4]; // [xsp+8h] [xbp-48h] BYREF
  float v40; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v41; // [xsp+18h] [xbp-38h] BYREF
  int32_t v42; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_40FCD09 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, *(_QWORD *)&fromHp);
    sub_B16FFC(&System_Collections_Hashtable_TypeInfo, v13);
    sub_B16FFC(&int_TypeInfo, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&float_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_18842/*"from"*/, v17);
    sub_B16FFC(&StringLiteral_19333/*"ignoretimescale"*/, v18);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v19);
    sub_B16FFC(&StringLiteral_21174/*"oncompleteparams"*/, v20);
    sub_B16FFC(&StringLiteral_21182/*"onupdate"*/, v21);
    sub_B16FFC(&StringLiteral_10040/*"OnUpdateShiftGaugeChangeHp"*/, v22);
    sub_B16FFC(&StringLiteral_9948/*"OnCompleteShiftGaugeChangeHp"*/, v23);
    sub_B16FFC(&StringLiteral_22621/*"to"*/, v24);
    sub_B16FFC(&StringLiteral_21173/*"oncomplete"*/, v25);
    sub_B16FFC(&iTween_TypeInfo, v26);
    byte_40FCD09 = 1;
  }
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL) )
  {
    v32 = this->fields.hpGauge;
    if ( !v32 )
      goto LABEL_15;
    BattleHpGaugeBarComponent__setInitValue(v32, fromHp, maxHp, 0LL);
  }
  this->fields.shiftGaugeMaxHp = maxHp;
  if ( !playShiftGauge
    || (playShiftGauge->fields._ChangeToHp_k__BackingField = toHp,
        v33 = (System_Collections_Hashtable_o *)sub_B170CC(System_Collections_Hashtable_TypeInfo, v28, v29, v30, v31),
        System_Collections_Hashtable___ctor_38240048(v33, 0LL),
        v42 = fromHp,
        v34 = j_il2cpp_value_box_0(int_TypeInfo, &v42),
        !v33) )
  {
LABEL_15:
    sub_B170D4();
  }
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
    v33,
    StringLiteral_18842/*"from"*/,
    v34,
    v33->klass->vtable._24_Clear.methodPtr);
  v41 = toHp;
  v35 = j_il2cpp_value_box_0(int_TypeInfo, &v41);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
    v33,
    StringLiteral_22621/*"to"*/,
    v35,
    v33->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
    v33,
    StringLiteral_21182/*"onupdate"*/,
    StringLiteral_10040/*"OnUpdateShiftGaugeChangeHp"*/,
    v33->klass->vtable._24_Clear.methodPtr);
  v40 = time;
  v36 = j_il2cpp_value_box_0(float_TypeInfo, &v40);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
    v33,
    StringLiteral_22584/*"time"*/,
    v36,
    v33->klass->vtable._24_Clear.methodPtr);
  v39[0] = 1;
  v37 = j_il2cpp_value_box_0(bool_TypeInfo, v39);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
    v33,
    StringLiteral_19333/*"ignoretimescale"*/,
    v37,
    v33->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
    v33,
    StringLiteral_21173/*"oncomplete"*/,
    StringLiteral_9948/*"OnCompleteShiftGaugeChangeHp"*/,
    v33->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, BattleAction_BasePlayShiftGauge_o *, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
    v33,
    StringLiteral_21174/*"oncompleteparams"*/,
    playShiftGauge,
    v33->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ValueTo(gameObject, v33, 0LL);
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
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *NameEffectPath; // x21
  AssetData_o *AssetStorage; // x0
  UILabel_o *v19; // x21
  UnityEngine_Component_o *v20; // x0
  UnityEngine_Transform_o *transform; // x22
  System_Int32_array **v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  BattleServantData_o *v29; // x0
  UILabel_o *v30; // x20
  System_String_o *ServantShortName; // x0
  int defaultShortNameLabelWidth; // w1
  struct UILabel_o *v33; // x0
  struct System_String_o *mText; // x8
  float v35; // s8
  UnityEngine_Component_o *v36; // x0
  UnityEngine_Transform_o *v37; // x0
  float v38; // s1
  float v39; // s2
  float v40; // s0
  UnityEngine_Component_o *v41; // x0

  if ( (byte_40FCD14 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, method);
    sub_B16FFC(&AssetManager_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_16598/*"battle_name"*/, v7);
    byte_40FCD14 = 1;
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
        UnityEngine_Object__Destroy_34809464(v14, 0LL);
      }
      if ( v13 )
      {
        v15 = (UnityEngine_Component_o *)this->fields.shortNameLabel;
        if ( !v15 )
          goto LABEL_50;
        gameObject = UnityEngine_Component__get_gameObject(v15, 0LL);
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
        v19 = AssetStorage
            ? (UILabel_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                             AssetStorage,
                             (System_String_o *)StringLiteral_16598/*"battle_name"*/,
                             (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784)
            : 0LL;
        v20 = (UnityEngine_Component_o *)this->fields.shortNameLabel;
        if ( !v20 )
          goto LABEL_50;
        transform = UnityEngine_Component__get_transform(v20, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v22 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                       v19,
                                       transform,
                                       (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
        *p_enemyNameEffectPrefab = (struct UnityEngine_GameObject_o *)v22;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.enemyNameEffectPrefab,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
      }
      v29 = this->fields.data;
      if ( v29 )
      {
        v30 = this->fields.shortNameLabel;
        ServantShortName = BattleServantData__getServantShortName(v29, 0LL);
        if ( v30 )
        {
          UILabel__set_text(v30, ServantShortName, 0LL);
          defaultShortNameLabelWidth = this->fields.defaultShortNameLabelWidth;
          v33 = this->fields.shortNameLabel;
          if ( defaultShortNameLabelWidth <= 0 )
          {
            if ( !v33 )
              goto LABEL_50;
            defaultShortNameLabelWidth = v33->fields.mWidth;
            this->fields.defaultShortNameLabelWidth = defaultShortNameLabelWidth;
          }
          else if ( !v33 )
          {
            goto LABEL_50;
          }
          mText = v33->fields.mText;
          if ( !mText )
            goto LABEL_50;
          v35 = (float)(v33->fields.mFontSize * mText->fields.m_stringLength);
          if ( (float)defaultShortNameLabelWidth >= v35 )
          {
            UIWidget__set_width((UIWidget_o *)v33, defaultShortNameLabelWidth, 0LL);
            v41 = (UnityEngine_Component_o *)this->fields.shortNameLabel;
            if ( v41 )
            {
              v37 = UnityEngine_Component__get_transform(v41, 0LL);
              if ( v37 )
              {
                v40 = 1.0;
                v38 = 1.0;
                v39 = 1.0;
                goto LABEL_49;
              }
            }
          }
          else
          {
            UIWidget__set_width((UIWidget_o *)v33, (int)v35, 0LL);
            v36 = (UnityEngine_Component_o *)this->fields.shortNameLabel;
            if ( v36 )
            {
              v37 = UnityEngine_Component__get_transform(v36, 0LL);
              if ( v37 )
              {
                v38 = 1.0;
                v39 = 1.0;
                v40 = (float)this->fields.defaultShortNameLabelWidth / v35;
LABEL_49:
                UnityEngine_Transform__set_localScale(v37, *(UnityEngine_Vector3_o *)&v40, 0LL);
                return;
              }
            }
          }
        }
      }
LABEL_50:
      sub_B170D4();
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
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
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
  int32_t DispImageSvtId; // w0
  BattleServantData_o *v9; // x8
  int32_t v10; // w20
  int32_t DispLimitCount; // w22
  System_Int32_array **Manager__loadStatusFace; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40FCD12 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v3);
    byte_40FCD12 = 1;
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
            DispImageSvtId = BattleServantData__GetDispImageSvtId(data, 0LL),
            (v9 = this->fields.data) == 0LL) )
      {
        sub_B170D4();
      }
      v10 = DispImageSvtId;
      DispLimitCount = BattleServantData__getDispLimitCount(v9, 1, 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadStatusFace = (System_Int32_array **)ServantAssetLoadManager__loadStatusFace(
                                                         v7,
                                                         v10,
                                                         DispLimitCount,
                                                         0LL);
      p_facetex->klass = (BattleServantConfConponent_c *)Manager__loadStatusFace;
      sub_B16F98(p_facetex, Manager__loadStatusFace, v13, v14, v15, v16, v17, v18);
    }
  }
}


void __fastcall BattleServantParamComponent__callSkillIcon(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleServantParamComponent_o *v3; // x19
  struct BattleServantSkillIConComponent_array *skillIcon; // x8
  __int64 v5; // x20
  char v6; // w22
  int max_length; // w9
  BattleServantSkillIConComponent_o *v8; // x0

  v3 = this;
  if ( (byte_40FCCFC & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_B16FFC(&SeManager_TypeInfo, method);
    byte_40FCCFC = 1;
  }
  skillIcon = v3->fields.skillIcon;
  if ( !skillIcon )
LABEL_14:
    sub_B170D4();
  v5 = 0LL;
  v6 = 0;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v8 = skillIcon->m_Items[v5];
    if ( v8 )
    {
      this = (BattleServantParamComponent_o *)BattleServantSkillIConComponent__showChageEffect(v8, method);
      if ( !(v6 & 1 | (((unsigned __int8)this & 1) == 0)) )
      {
        if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        SeManager__PlayCommonSe(2, 0LL);
        v6 = 1;
      }
      skillIcon = v3->fields.skillIcon;
      ++v5;
      if ( skillIcon )
        continue;
    }
    goto LABEL_14;
  }
  if ( v3->fields.modeWindow == 2 )
    BattleServantParamComponent__UpdateSkillRankUpEffect(v3, method);
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
    sub_B170D4();
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
  const MethodInfo *v4; // x2
  struct BattleServantData_o *data; // x8
  BattleServantData_o *v6; // x0
  int32_t NowHp; // w0
  int32_t v8; // w20
  int32_t MaxHp; // w2
  const MethodInfo *v10; // x4

  BattleServantParamComponent__initUpdateView(this, 0, v2);
  data = this->fields.data;
  if ( !data
    || (BattleServantParamComponent__updateBuffIcon(this, data->fields.buffData, v4), (v6 = this->fields.data) == 0LL)
    || (NowHp = BattleServantData__getNowHp(v6, 0LL), !this->fields.data) )
  {
    sub_B170D4();
  }
  v8 = NowHp;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  BattleServantShowBuffComponent_o *showBuffComponent; // x19
  BattleBuffData_ShowBuffData_array *v10; // x0
  const MethodInfo *v11; // x2

  if ( (byte_40FCD10 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo, v7);
    byte_40FCD10 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  if ( !v8
    || (showBuffComponent = this->fields.showBuffComponent,
        v10 = (BattleBuffData_ShowBuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                                     (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__),
        !showBuffComponent) )
  {
    sub_B170D4();
  }
  BattleServantShowBuffComponent__setBuffList(showBuffComponent, v10, v11);
}


void __fastcall BattleServantParamComponent__clickSkillIcon(
        BattleServantParamComponent_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isLongTap,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *target; // x22
  UnityEngine_GameObject_o *v9; // x0
  BattlePerformancePlayer_o *Component_srcLineSprite; // x0

  if ( (byte_40FCCFE & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___, skillInfo);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FCCFE = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    v9 = this->fields.target;
    if ( !v9
      || (Component_srcLineSprite = (BattlePerformancePlayer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   v9,
                                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___)) == 0LL )
    {
      sub_B170D4();
    }
    BattlePerformancePlayer__onClickSkillIcon(Component_srcLineSprite, skillInfo, isLongTap, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FCCFD & 1) == 0 )
  {
    sub_B16FFC(&BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81_TypeInfo, method);
    byte_40FCCFD = 1;
  }
  v6 = sub_B170CC(BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81_TypeInfo, method, v2, v3, v4);
  BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81___ctor(
    (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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
  int32_t DispImageSvtId; // w0
  int32_t v12; // w23
  int32_t DispLimitCount; // w24
  struct UITexture_o *Manager__loadStatusFace; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_Object_o *levelLabel; // x21
  BattleServantData_o *v22; // x0
  UILabel_o *v23; // x21
  System_String_o *v24; // x0
  UnityEngine_Object_o *nameLabel; // x21
  const MethodInfo *v26; // x1
  BattleServantData_o *v27; // x0
  UILabel_o *v28; // x21
  System_String_o *ServantName; // x0
  UnityEngine_Object_o *hpGauge; // x21
  BattleServantData_o *v31; // x0
  BattleHpGaugeBarComponent_o *v32; // x21
  int32_t NowHp; // w0
  int32_t v34; // w22
  int32_t MaxHp; // w0
  UnityEngine_Object_o *hpChange; // x21
  struct BattleServantData_o *v37; // x8
  struct System_Int32_array *shiftDeckList; // x9
  BattleServantChangeBarComponent_o *v39; // x0
  UnityEngine_Object_o *hpShift; // x21
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x2
  BattleServantHpShiftComponent_o *v43; // x0
  UnityEngine_Object_o *breakSprite; // x21
  UnityEngine_Behaviour_o *v45; // x0
  BattleServantData_o *v46; // x0
  int32_t v47; // w0
  int32_t v48; // w21
  int32_t v49; // w0
  const MethodInfo *v50; // x4
  UnityEngine_Object_o *npcomp; // x21
  struct BattleNpGaugeSystemComponent_o *v52; // x8
  BattleServantData_o *v53; // x0
  struct BattleNpGaugeSystemComponent_o *v54; // x21
  int32_t CountMaxNp; // w0
  BattleNpGaugeSystemComponent_o *v56; // x0
  struct BattleServantData_o *v57; // x8
  BattleNpGaugeSystemComponent_o *v58; // x0
  BattleServantData_o *v59; // x0
  BattleNpGaugeSystemComponent_o *v60; // x21
  bool isAddNpGauge; // w0
  UnityEngine_Object_o *nextTdGauge; // x21
  bool v63; // w0
  const MethodInfo *v64; // x2
  struct BattleServantData_o *v65; // x0
  BattleNextTDgaugeComponent_o *v66; // x20
  int32_t nexttpturn; // w21
  int32_t maxtpturn; // w22
  bool isTDSeraled; // w0
  UnityEngine_Object_o *friendIcon; // x20
  const MethodInfo *v71; // x1
  UnityEngine_Component_o *v72; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleServantData_o *v74; // x8
  UISprite_o *v75; // x20
  UnityEngine_Component_o *v76; // x0
  UnityEngine_GameObject_o *v77; // x0
  UISprite_o *v78; // x20
  UnityEngine_Component_o *v79; // x0
  UnityEngine_GameObject_o *v80; // x0
  struct BattlePerformance_o *perf; // x8
  BattleData_o *v82; // x0
  UnityEngine_Object_o *breakPoint; // x20
  struct BattleServantData_o *v84; // x8
  BattleServantBreakPointComponent_o *v85; // x0

  v3 = notUpdateFlag;
  if ( (byte_40FCCF9 & 1) == 0 )
  {
    sub_B16FFC(&FileName_TypeInfo, *(_QWORD *)&notUpdateFlag);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v6);
    byte_40FCCF9 = 1;
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
      DispImageSvtId = BattleServantData__GetDispImageSvtId(data, 0LL);
      if ( !this->fields.data )
        goto LABEL_113;
      v12 = DispImageSvtId;
      DispLimitCount = BattleServantData__getDispLimitCount(this->fields.data, 1, 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadStatusFace = ServantAssetLoadManager__loadStatusFace(v10, v12, DispLimitCount, 0LL);
      this->fields.facetex = Manager__loadStatusFace;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.facetex,
        (System_Int32_array **)Manager__loadStatusFace,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
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
      v22 = this->fields.data;
      if ( !v22 )
        goto LABEL_113;
      v23 = this->fields.levelLabel;
      v24 = BattleServantData__getLevelLabel(v22, 0LL);
      if ( !v23 )
        goto LABEL_113;
      UILabel__set_text(v23, v24, 0LL);
    }
    nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
    {
      v27 = this->fields.data;
      if ( !v27 )
        goto LABEL_113;
      v28 = this->fields.nameLabel;
      ServantName = BattleServantData__getServantName(v27, 0LL);
      if ( !v28 )
        goto LABEL_113;
      UILabel__set_text(v28, ServantName, 0LL);
    }
    BattleServantParamComponent__UpdateShortNameLabel(this, v26);
    hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL) )
    {
      v31 = this->fields.data;
      if ( !v31 )
        goto LABEL_113;
      v32 = this->fields.hpGauge;
      NowHp = BattleServantData__getNowHp(v31, 0LL);
      if ( !this->fields.data )
        goto LABEL_113;
      v34 = NowHp;
      MaxHp = BattleServantData__getMaxHp(this->fields.data, 0LL);
      if ( !v32 )
        goto LABEL_113;
      BattleHpGaugeBarComponent__setInitValue(v32, v34, MaxHp, 0LL);
    }
    hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(hpChange, 0LL, 0LL) )
    {
      v37 = this->fields.data;
      if ( !v37 )
        goto LABEL_113;
      shiftDeckList = v37->fields.shiftDeckList;
      if ( !shiftDeckList )
        goto LABEL_113;
      v39 = this->fields.hpChange;
      if ( !v39 )
        goto LABEL_113;
      BattleServantChangeBarComponent__setBarType(v39, 1, shiftDeckList->max_length - v37->fields.shiftDeckIndex, 0LL);
    }
    hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
    {
      v43 = this->fields.hpShift;
      if ( !v43 )
        goto LABEL_113;
      BattleServantHpShiftComponent__setInitValue(v43, this->fields.data, v42);
    }
    BattleServantParamComponent__setAtlas(this, v41);
    breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(breakSprite, 0LL, 0LL) )
    {
      v45 = (UnityEngine_Behaviour_o *)this->fields.breakSprite;
      if ( !v45 )
        goto LABEL_113;
      UnityEngine_Behaviour__set_enabled(v45, 0, 0LL);
    }
    v46 = this->fields.data;
    if ( !v46 || (v47 = BattleServantData__getNowHp(v46, 0LL), !this->fields.data) )
LABEL_113:
      sub_B170D4();
    v48 = v47;
    v49 = BattleServantData__getMaxHp(this->fields.data, 0LL);
    BattleServantParamComponent__updateHplabel(this, v48, v49, 1, v50);
    npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL) )
    {
      v52 = this->fields.npcomp;
      if ( !v52 )
        goto LABEL_113;
      v52->fields.lineCount = 3;
      v53 = this->fields.data;
      if ( !v53 )
        goto LABEL_113;
      v54 = this->fields.npcomp;
      CountMaxNp = BattleServantData__getCountMaxNp(v53, 0LL);
      if ( !v54 )
        goto LABEL_113;
      v54->fields.maxparam = CountMaxNp;
      v56 = this->fields.npcomp;
      if ( !v56 )
        goto LABEL_113;
      BattleNpGaugeSystemComponent__InitSliderValue(v56, 0LL);
      v57 = this->fields.data;
      if ( !v57 )
        goto LABEL_113;
      v58 = this->fields.npcomp;
      if ( !v58 )
        goto LABEL_113;
      BattleNpGaugeSystemComponent__setNowParam(v58, v57->fields.np, 0LL);
      v59 = this->fields.data;
      if ( !v59 )
        goto LABEL_113;
      v60 = this->fields.npcomp;
      isAddNpGauge = BattleServantData__isAddNpGauge(v59, 0LL);
      if ( !v60 )
        goto LABEL_113;
      BattleNpGaugeSystemComponent__setUseNp(v60, isAddNpGauge, 0LL);
    }
    nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v63 = UnityEngine_Object__op_Inequality(nextTdGauge, 0LL, 0LL);
    if ( (v3 & 1) == 0 && v63 )
    {
      v65 = this->fields.data;
      if ( !v65 )
        goto LABEL_113;
      v66 = this->fields.nextTdGauge;
      nexttpturn = v65->fields.nexttpturn;
      maxtpturn = v65->fields.maxtpturn;
      isTDSeraled = BattleServantData__isTDSeraled(v65, 0LL);
      if ( !v66 )
        goto LABEL_113;
      BattleNextTDgaugeComponent__setInitGauge(v66, nexttpturn, maxtpturn, isTDSeraled, 0LL);
    }
    BattleServantParamComponent__updateSkillIcon(this, 0, v64);
    friendIcon = (UnityEngine_Object_o *)this->fields.friendIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(friendIcon, 0LL, 0LL) )
    {
      v72 = (UnityEngine_Component_o *)this->fields.friendIcon;
      if ( !v72 )
        goto LABEL_113;
      gameObject = UnityEngine_Component__get_gameObject(v72, 0LL);
      if ( !gameObject )
        goto LABEL_113;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      v74 = this->fields.data;
      if ( !v74 )
        goto LABEL_113;
      if ( v74->fields.followerType )
      {
        v75 = this->fields.friendIcon;
        if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
        if ( !v75 )
          goto LABEL_113;
        UISprite__set_spriteName(v75, FileName_TypeInfo->static_fields->friendIconName, 0LL);
        v76 = (UnityEngine_Component_o *)this->fields.friendIcon;
        if ( !v76 )
          goto LABEL_113;
        v77 = UnityEngine_Component__get_gameObject(v76, 0LL);
        if ( !v77 )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(v77, 1, 0LL);
        v74 = this->fields.data;
        if ( !v74 )
          goto LABEL_113;
      }
      if ( v74->fields.flgEventJoin )
      {
        v78 = this->fields.friendIcon;
        if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
        if ( !v78 )
          goto LABEL_113;
        UISprite__set_spriteName(v78, FileName_TypeInfo->static_fields->eventJoinIconName, 0LL);
        v79 = (UnityEngine_Component_o *)this->fields.friendIcon;
        if ( !v79 )
          goto LABEL_113;
        v80 = UnityEngine_Component__get_gameObject(v79, 0LL);
        if ( !v80 )
          goto LABEL_113;
        UnityEngine_GameObject__SetActive(v80, 1, 0LL);
      }
    }
    BattleServantParamComponent__setRoleTyoe(this, v71);
    perf = this->fields.perf;
    if ( !perf )
      goto LABEL_113;
    v82 = perf->fields.data;
    if ( !v82 )
      goto LABEL_113;
    if ( BattleData__IsWarBoard(v82, 0LL) )
    {
      breakPoint = (UnityEngine_Object_o *)this->fields.breakPoint;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(breakPoint, 0LL, 0LL) )
      {
        v84 = this->fields.data;
        if ( v84 )
        {
          v85 = this->fields.breakPoint;
          if ( v85 )
          {
            BattleServantBreakPointComponent__Initialize(
              v85,
              v84->fields.defeatPoint,
              v84->fields.maxDefeatPoint,
              v84->fields.isEnemy,
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
  BattleData_o *data; // x0
  bool isTutorial; // w0
  struct BattlePerformance_o *v6; // x8
  struct BattleData_o *v7; // x9
  struct BattlePerformanceStatus_o *statusPerf; // x8
  BattlePerformanceMaster_o *masterPerf; // x0
  struct BattlePerformance_o *v10; // x8
  BattlePerformance_o *v11; // x0

  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_17;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_17;
  isTutorial = BattleData__isTutorial(data, 0LL);
  v6 = this->fields.perf;
  if ( !isTutorial )
  {
    if ( !v6 )
      goto LABEL_17;
LABEL_10:
    statusPerf = v6->fields.statusPerf;
    if ( statusPerf )
    {
      masterPerf = statusPerf->fields.masterPerf;
      if ( masterPerf )
      {
        if ( !BattlePerformanceMaster__isCloseEnemyConf(masterPerf, 0LL) )
          return;
        v10 = this->fields.perf;
        if ( v10 )
        {
          v10->fields._IsCalledByEnemyNameUI_k__BackingField = 1;
          v11 = this->fields.perf;
          if ( v11 )
          {
            BattlePerformance__clickTarget(v11, this->fields.index, 0LL);
            return;
          }
        }
      }
    }
LABEL_17:
    sub_B170D4();
  }
  if ( !v6 )
    goto LABEL_17;
  v7 = v6->fields.data;
  if ( !v7 )
    goto LABEL_17;
  if ( v7->fields.tutorialId != 3 || v7->fields.tutorialState )
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
    sub_B170D4();
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

  if ( (byte_40FCD0C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2751/*"Battle/Prefab/ef_add_enemy"*/, method);
    byte_40FCD0C = 1;
  }
  data = this->fields.data;
  if ( data && data->fields.isAddition )
  {
    clsIconComponent = (UnityEngine_Component_o *)this->fields.clsIconComponent;
    if ( !clsIconComponent
      || (transform = UnityEngine_Component__get_transform(clsIconComponent, 0LL),
          BaseMonoBehaviour__createObject_19257936(
            (BaseMonoBehaviour_o *)this,
            (System_String_o *)StringLiteral_2751/*"Battle/Prefab/ef_add_enemy"*/,
            transform,
            0LL,
            0LL),
          (v6 = this->fields.data) == 0LL) )
    {
      sub_B170D4();
    }
    v6->fields.isAddition = 0;
  }
}


void __fastcall BattleServantParamComponent__playAttackEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  BaseMonoBehaviour_o *v3; // x19
  __int64 v4; // x1
  void *monitor; // x8
  UnityEngine_Object_o *v6; // x20
  void *v7; // x8
  UnityEngine_Object_o *v8; // x20
  UnityEngine_Object_o *v9; // x20
  UnityEngine_Component_o *v10; // x0
  char *v11; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x19

  v3 = (BaseMonoBehaviour_o *)this;
  if ( (byte_40FCCF8 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    this = (BattleServantParamComponent_o *)sub_B16FFC(&StringLiteral_18181/*"effect/ef_cwflash01"*/, v4);
    byte_40FCCF8 = 1;
  }
  monitor = v3[11].monitor;
  if ( !monitor )
    goto LABEL_27;
  if ( !*((_DWORD *)monitor + 6) )
    goto LABEL_28;
  v6 = (UnityEngine_Object_o *)*((_QWORD *)monitor + 4);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = v3[11].monitor;
    if ( !v7 )
      goto LABEL_27;
    if ( !*((_DWORD *)v7 + 6) )
      goto LABEL_28;
    v8 = (UnityEngine_Object_o *)*((_QWORD *)v7 + 4);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v8, 0LL);
  }
  v9 = (UnityEngine_Object_o *)v3[7].monitor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    v10 = (UnityEngine_Component_o *)v3[7].monitor;
    if ( v10 )
    {
      v11 = (char *)v3[11].monitor;
      gameObject = UnityEngine_Component__get_gameObject(v10, 0LL);
      if ( gameObject )
      {
        transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
        this = (BattleServantParamComponent_o *)BaseMonoBehaviour__createObject_19257936(
                                                  v3,
                                                  (System_String_o *)StringLiteral_18181/*"effect/ef_cwflash01"*/,
                                                  transform,
                                                  0LL,
                                                  0LL);
        if ( v11 )
        {
          v19 = (System_Int32_array **)this;
          if ( this )
          {
            this = (BattleServantParamComponent_o *)sub_B170BC(this, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
            if ( !this )
            {
              sub_B170F4(0LL);
              sub_B170A0();
            }
          }
          if ( *((_DWORD *)v11 + 6) )
          {
            *((_QWORD *)v11 + 4) = v19;
            sub_B16F98((BattleServantConfConponent_o *)(v11 + 32), v19, v2, v14, v15, v16, v17, v18);
            return;
          }
LABEL_28:
          sub_B17100(this, method, v2);
          sub_B170A0();
        }
      }
    }
LABEL_27:
    sub_B170D4();
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

  if ( (byte_40FCCEB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCCEB = 1;
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
      sub_B170D4();
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

  if ( (byte_40FCCEC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCCEC = 1;
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
      sub_B170D4();
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

  if ( (byte_40FCCEA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCCEA = 1;
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
      sub_B170D4();
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

  if ( (byte_40FCD03 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCD03 = 1;
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
        sub_B170D4();
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

  if ( (byte_40FCD02 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCD02 = 1;
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
    sub_B170D4();
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleEffectControl_o *battleEffectControl; // x0
  UnityEngine_GameObject_o *BuffTextClassIconObject; // x19
  BattleUIRangeLabel_o *Component_srcLineSprite; // x21
  const MethodInfo *v11; // x1
  float LabelPrintedWidth; // s10
  float v13; // s8
  float v14; // s9
  BattleServantBuffIconComponent_o *ComponentInChildren_SimpleAnimation; // x23
  struct UISprite_o *iconSprite; // x8
  int mWidth; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  struct UISprite_o *v20; // x8
  int v21; // w8
  float sideEffectLabelWidth; // s0
  float v23; // s1
  UnityEngine_Transform_o *v24; // x0
  UnityEngine_Component_o *clsIconComponent; // x8
  UnityEngine_Transform_o *v26; // x20
  UnityEngine_Transform_o *v27; // x0
  UnityEngine_Transform_o *v28; // x0
  UnityEngine_Transform_o *v29; // x0
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // [xsp+0h] [xbp-70h]
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FCD0F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___, buffData);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_1/*""*/, v7);
    byte_40FCD0F = 1;
  }
  if ( !buffData )
    goto LABEL_36;
  battleEffectControl = this->fields.battleEffectControl;
  if ( !battleEffectControl )
    goto LABEL_36;
  BuffTextClassIconObject = BattleEffectControl__getBuffTextClassIconObject(
                              battleEffectControl,
                              buffData->fields.popColor,
                              0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)BuffTextClassIconObject, 0LL, 0LL) )
  {
    if ( !BuffTextClassIconObject )
      goto LABEL_36;
    Component_srcLineSprite = (BattleUIRangeLabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        BuffTextClassIconObject,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      if ( !Component_srcLineSprite )
        goto LABEL_36;
      BattleUIRangeLabel__SetAdjustLabelOffset(
        Component_srcLineSprite,
        buffData->fields.popLabel,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        0LL,
        0,
        0,
        0,
        v31);
    }
    else if ( !Component_srcLineSprite )
    {
      goto LABEL_36;
    }
    LabelPrintedWidth = BattleUIRangeLabel__GetLabelPrintedWidth(Component_srcLineSprite, v11);
    v13 = fminf(this->fields.sideEffectLabelWidth / (float)(LabelPrintedWidth * 0.8), 1.0);
    v14 = 0.0;
    if ( buffData->fields.popIcon >= 1 )
    {
      ComponentInChildren_SimpleAnimation = (BattleServantBuffIconComponent_o *)UnityEngine_GameObject__GetComponentInChildren_SimpleAnimation_(
                                                                                  BuffTextClassIconObject,
                                                                                  1,
                                                                                  (const MethodInfo_19D15B0 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_SimpleAnimation, 0LL, 0LL) )
      {
        if ( !ComponentInChildren_SimpleAnimation )
          goto LABEL_36;
        BattleServantBuffIconComponent__setImageId(ComponentInChildren_SimpleAnimation, buffData->fields.popIcon, 0LL);
        iconSprite = ComponentInChildren_SimpleAnimation->fields.iconSprite;
        if ( !iconSprite )
          goto LABEL_36;
        mWidth = iconSprite->fields.mWidth;
        gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)ComponentInChildren_SimpleAnimation,
                       0LL);
        if ( !gameObject )
          goto LABEL_36;
        transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
        if ( !transform )
          goto LABEL_36;
        v32.fields.x = -(float)((float)((float)(LabelPrintedWidth * 0.5) + (float)((float)mWidth * 0.5)) + 5.0);
        v32.fields.y = 0.0;
        v32.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(transform, v32, 0LL);
        v20 = ComponentInChildren_SimpleAnimation->fields.iconSprite;
        if ( !v20 )
          goto LABEL_36;
        v21 = v20->fields.mWidth;
        if ( v13 >= 1.0 )
        {
          sideEffectLabelWidth = this->fields.sideEffectLabelWidth;
          v23 = (float)((float)((float)(LabelPrintedWidth * 0.8) + (float)((float)v21 * 0.8)) + 5.0)
              + (float)((float)(sideEffectLabelWidth - (float)(LabelPrintedWidth * 0.8)) * 0.5);
          v14 = 0.0;
          if ( v23 > sideEffectLabelWidth )
            v14 = v23 - sideEffectLabelWidth;
        }
        else
        {
          v14 = (float)(v13 * (float)((float)v21 * 0.8)) + 5.0;
        }
      }
    }
    UnityEngine_GameObject__SetActive(BuffTextClassIconObject, 0, 0LL);
    v24 = UnityEngine_GameObject__get_transform(BuffTextClassIconObject, 0LL);
    clsIconComponent = (UnityEngine_Component_o *)this->fields.clsIconComponent;
    if ( clsIconComponent )
    {
      v26 = v24;
      v27 = UnityEngine_Component__get_transform(clsIconComponent, 0LL);
      if ( v26 )
      {
        UnityEngine_Transform__SetParent(v26, v27, 0LL);
        v28 = UnityEngine_GameObject__get_transform(BuffTextClassIconObject, 0LL);
        if ( v28 )
        {
          v33.fields.y = 1.0;
          v33.fields.x = v13;
          v33.fields.z = 1.0;
          UnityEngine_Transform__set_localScale(v28, v33, 0LL);
          v29 = UnityEngine_GameObject__get_transform(BuffTextClassIconObject, 0LL);
          if ( v29 )
          {
            v34.fields.y = 0.0;
            v34.fields.z = 0.0;
            v34.fields.x = v14;
            UnityEngine_Transform__set_localPosition(v29, v34, 0LL);
            BattleUIRangeLabel__AddLabelDepth(Component_srcLineSprite, 100, v30);
            UnityEngine_GameObject__SetActive(BuffTextClassIconObject, 1, 0LL);
            return;
          }
        }
      }
    }
LABEL_36:
    sub_B170D4();
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
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UnityEngine_Object_o *breakSprite; // x21
  UIAtlas_o *v14; // x20
  UISprite_o *v15; // x0
  UISprite_o *v16; // x19
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  int v19; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FCCFB & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, method);
    sub_B16FFC(&AssetManager_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v4);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_2743/*"Battle/Common"*/, v7);
    sub_B16FFC(&StringLiteral_2758/*"BattleAssetUIAtlas"*/, v8);
    sub_B16FFC(&StringLiteral_19105/*"hp_break_"*/, v9);
    byte_40FCCFB = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2743/*"Battle/Common"*/, 0LL);
  if ( !AssetStorage )
    goto LABEL_16;
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 AssetStorage,
                                                                 (System_String_o *)StringLiteral_2758/*"BattleAssetUIAtlas"*/,
                                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !Object_WarBoardWaitTimeSetting )
    goto LABEL_16;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              Object_WarBoardWaitTimeSetting,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  v14 = (UIAtlas_o *)Component_srcLineSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0LL, 0LL) )
  {
    v15 = this->fields.breakSprite;
    if ( v15 )
    {
      UISprite__set_atlas(v15, v14, 0LL);
      v16 = this->fields.breakSprite;
      v19 = 1;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
      v18 = System_String__Concat((Il2CppObject *)StringLiteral_19105/*"hp_break_"*/, v17, 0LL);
      if ( v16 )
      {
        UISprite__set_spriteName(v16, v18, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B170D4();
  }
}


void __fastcall BattleServantParamComponent__setClassIcon(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *clsIconComponent; // x20
  BattleServantData_o *data; // x0
  int32_t ClassId; // w0
  struct BattleServantData_o *v6; // x8
  int32_t v7; // w1
  ServantClassIconComponent_o *v8; // x0

  if ( (byte_40FCCF6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCCF6 = 1;
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
      || (ClassId = BattleServantData__getClassId(data, 0LL), (v6 = this->fields.data) == 0LL)
      || (v7 = ClassId, (v8 = this->fields.clsIconComponent) == 0LL) )
    {
      sub_B170D4();
    }
    ServantClassIconComponent__SetImage(v8, v7, v6->fields._frameType_k__BackingField, 0LL);
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
  TweenColor_o *v9; // x0
  const MethodInfo *v10; // x3
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  float g; // s5
  float b; // s6
  float a; // s7
  float v16; // s4
  int32_t modeWindow; // w8
  SimpleAnimation_o *Component_WebViewObject; // x20
  UnityEngine_Object_o *v19; // x21
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v22; // x21
  unsigned __int64 v23; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  SimpleAnimation_State_o *v26; // x0
  SimpleAnimation_State_c *v27; // x8
  SimpleAnimation_State_o *v28; // x21
  unsigned __int64 v29; // x10
  SimpleAnimation_State_c **v30; // x11
  __int64 v31; // x0
  UnityEngine_AnimationState_o *v32; // x0
  UnityEngine_AnimationState_o *v33; // x0
  SimpleAnimation_State_o *v34; // x0
  SimpleAnimation_State_c *v35; // x8
  SimpleAnimation_State_c *v36; // x1
  SimpleAnimation_State_o *v37; // x21
  unsigned __int64 v38; // x10
  SimpleAnimation_State_c **v39; // x11
  SimpleAnimation_State_o *v40; // x0
  unsigned __int64 v41; // x10
  __int64 v42; // x0
  const MethodInfo *v43; // x2
  UnityEngine_Color_o clear; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_40FCCED & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_13126/*"SvtW_StartClose"*/, v7);
    byte_40FCCED = 1;
  }
  BattleServantParamComponent__setSkillFlash(this, 0, v2);
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (TweenColor_o *)UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v11 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v11 )
      goto LABEL_58;
    gameObject = UnityEngine_Component__get_gameObject(v11, 0LL);
    clear = UnityEngine_Color__get_clear(0LL);
    g = clear.fields.g;
    b = clear.fields.b;
    a = clear.fields.a;
    clear.fields.g = clear.fields.r;
    clear.fields.b = g;
    clear.fields.a = b;
    v16 = a;
    v9 = TweenColor__Begin(gameObject, 0.4, *(UnityEngine_Color_o *)&clear.fields.g, 0LL);
    this->fields.isHideFaceTexture = 1;
  }
  modeWindow = this->fields.modeWindow;
  if ( modeWindow != 3 )
  {
    if ( modeWindow == 2 )
    {
      Component_WebViewObject = (SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
      v19 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Animation___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
      {
        if ( Component_WebViewObject )
        {
          Item = SimpleAnimation__get_Item(Component_WebViewObject, (System_String_o *)StringLiteral_13126/*"SvtW_StartClose"*/, 0LL);
          if ( Item )
          {
            klass = Item->klass;
            v22 = Item;
            if ( *(_WORD *)&Item->klass->_2.bitflags1 )
            {
              v23 = 0LL;
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v23;
                p_offset += 2;
                if ( v23 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                  goto LABEL_21;
              }
              p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
            }
            else
            {
LABEL_21:
              p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 4LL);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(
              v22,
              *(_QWORD *)(p_method + 8),
              0.0);
            v34 = SimpleAnimation__get_Item(Component_WebViewObject, (System_String_o *)StringLiteral_13126/*"SvtW_StartClose"*/, 0LL);
            if ( v34 )
            {
              v35 = v34->klass;
              v36 = SimpleAnimation_State_TypeInfo;
              v37 = v34;
              if ( *(_WORD *)&v34->klass->_2.bitflags1 )
              {
                v38 = 0LL;
                v39 = (SimpleAnimation_State_c **)&v35->_1.interfaceOffsets->offset;
                while ( *(v39 - 1) != SimpleAnimation_State_TypeInfo )
                {
                  ++v38;
                  v39 += 2;
                  if ( v38 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
                    goto LABEL_54;
                }
LABEL_55:
                v42 = (__int64)&v35->vtable[*(_DWORD *)v39 + 8].method;
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
      Component_WebViewObject = (SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
      v19 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Animation___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
      {
        if ( Component_WebViewObject )
        {
          v26 = SimpleAnimation__get_Item(Component_WebViewObject, (System_String_o *)StringLiteral_13126/*"SvtW_StartClose"*/, 0LL);
          if ( v26 )
          {
            v27 = v26->klass;
            v28 = v26;
            if ( *(_WORD *)&v26->klass->_2.bitflags1 )
            {
              v29 = 0LL;
              v30 = (SimpleAnimation_State_c **)&v27->_1.interfaceOffsets->offset;
              while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v29;
                v30 += 2;
                if ( v29 >= *(unsigned __int16 *)&v26->klass->_2.bitflags1 )
                  goto LABEL_32;
              }
              v31 = (__int64)&v27->vtable[*(_DWORD *)v30 + 4].method;
            }
            else
            {
LABEL_32:
              v31 = sub_AAFEF8(v26, SimpleAnimation_State_TypeInfo, 4LL);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))v31)(v28, *(_QWORD *)(v31 + 8), 0.0);
            v40 = SimpleAnimation__get_Item(Component_WebViewObject, (System_String_o *)StringLiteral_13126/*"SvtW_StartClose"*/, 0LL);
            if ( v40 )
            {
              v35 = v40->klass;
              v36 = SimpleAnimation_State_TypeInfo;
              v37 = v40;
              if ( *(_WORD *)&v40->klass->_2.bitflags1 )
              {
                v41 = 0LL;
                v39 = (SimpleAnimation_State_c **)&v35->_1.interfaceOffsets->offset;
                while ( *(v39 - 1) != SimpleAnimation_State_TypeInfo )
                {
                  ++v41;
                  v39 += 2;
                  if ( v41 >= *(unsigned __int16 *)&v40->klass->_2.bitflags1 )
                    goto LABEL_54;
                }
                goto LABEL_55;
              }
LABEL_54:
              v42 = sub_AAFEF8(v37, v36, 8LL);
LABEL_56:
              (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))v42)(v37, *(_QWORD *)(v42 + 8), 1.0);
              v9 = (TweenColor_o *)SimpleAnimation__Play_16380456(
                                     Component_WebViewObject,
                                     (System_String_o *)StringLiteral_13126/*"SvtW_StartClose"*/,
                                     0LL);
              goto LABEL_57;
            }
          }
        }
LABEL_58:
        sub_B170D4();
      }
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = (TweenColor_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
    if ( ((unsigned __int8)v9 & 1) != 0 )
    {
      if ( !v19 )
        goto LABEL_58;
      v32 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v19, (System_String_o *)StringLiteral_13126/*"SvtW_StartClose"*/, 0LL);
      if ( !v32 )
        goto LABEL_58;
      UnityEngine_AnimationState__set_time(v32, 0.0, 0LL);
      v33 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v19, (System_String_o *)StringLiteral_13126/*"SvtW_StartClose"*/, 0LL);
      if ( !v33 )
        goto LABEL_58;
      UnityEngine_AnimationState__set_speed(v33, 1.0, 0LL);
      v9 = (TweenColor_o *)UnityEngine_Animation__Play_49744236(
                             (UnityEngine_Animation_o *)v19,
                             (System_String_o *)StringLiteral_13126/*"SvtW_StartClose"*/,
                             0LL);
    }
  }
LABEL_57:
  BattleServantParamComponent__EffectStartStop(
    (BattleServantParamComponent_o *)v9,
    this->fields.commandSpellEffectDict,
    0,
    v10);
  this->fields.modeWindow = 3;
  BattleServantParamComponent__setTouch(this, 0, v43);
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

  if ( (byte_40FCCE8 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, data);
    byte_40FCCE8 = 1;
  }
  this->fields.modeWindow = 1;
  this->fields.data = data;
  sub_B16F98(
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
        sub_B170D4();
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
  TweenColor_o *v10; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  UnityEngine_Component_o *v13; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v15; // x21
  BaseMotionSkip_o *MotionSkip; // x0
  float v17; // s8
  float g; // s5
  float b; // s6
  float a; // s7
  float v21; // s4
  int32_t modeWindow; // w8
  SimpleAnimation_o *Component_WebViewObject; // x21
  UnityEngine_Object_o *v24; // x22
  SimpleAnimation_State_o *Item; // x22
  SimpleAnimation_State_o *v26; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v28; // x23
  unsigned __int64 v29; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  SimpleAnimation_State_o *v32; // x22
  SimpleAnimation_State_o *v33; // x0
  SimpleAnimation_State_c *v34; // x8
  SimpleAnimation_State_o *v35; // x23
  unsigned __int64 v36; // x10
  SimpleAnimation_State_c **v37; // x11
  __int64 v38; // x0
  UnityEngine_AnimationState_o *v39; // x21
  UnityEngine_AnimationState_o *v40; // x0
  float length; // s0
  UnityEngine_AnimationState_o *v42; // x0
  long double v43; // q0
  SimpleAnimation_State_c *v44; // x8
  long double v45; // q8
  unsigned __int64 v46; // x10
  SimpleAnimation_State_c **v47; // x11
  __int64 v48; // x0
  SimpleAnimation_State_o *v49; // x0
  SimpleAnimation_State_c *v50; // x8
  SimpleAnimation_State_c *v51; // x1
  SimpleAnimation_State_o *v52; // x22
  unsigned __int64 v53; // x10
  SimpleAnimation_State_c **v54; // x11
  long double v55; // q0
  SimpleAnimation_State_c *v56; // x8
  long double v57; // q8
  unsigned __int64 v58; // x10
  SimpleAnimation_State_c **v59; // x11
  __int64 v60; // x0
  SimpleAnimation_State_o *v61; // x0
  unsigned __int64 v62; // x10
  __int64 v63; // x0
  const MethodInfo *v64; // x2
  const MethodInfo *v65; // x1
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_40FCCEE & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Animation___, isPlayCommandSpellEffectStartAnim);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_13126/*"SvtW_StartClose"*/, v8);
    byte_40FCCEE = 1;
  }
  BattleServantParamComponent__setSkillFlash(this, 1, method);
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = (TweenColor_o *)UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    v13 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v13 )
      goto LABEL_78;
    gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
    if ( !this->fields.perf )
      goto LABEL_78;
    v15 = gameObject;
    MotionSkip = BattlePerformance__get_MotionSkip(this->fields.perf, 0LL);
    if ( !MotionSkip )
      goto LABEL_78;
    LODWORD(v17) = COERCE_UNSIGNED_INT128(
                     ((long double (__fastcall *)(BaseMotionSkip_o *, void *, float))MotionSkip->klass->vtable._11_ConvertSkipDuration.method)(
                       MotionSkip,
                       MotionSkip->klass[1]._1.image,
                       0.4));
    white = UnityEngine_Color__get_white(0LL);
    g = white.fields.g;
    b = white.fields.b;
    a = white.fields.a;
    white.fields.g = white.fields.r;
    white.fields.b = g;
    white.fields.a = b;
    v21 = a;
    v10 = TweenColor__Begin(v15, v17, *(UnityEngine_Color_o *)&white.fields.g, 0LL);
    this->fields.isHideFaceTexture = 0;
  }
  modeWindow = this->fields.modeWindow;
  if ( modeWindow == 2 )
    goto LABEL_75;
  if ( modeWindow == 1 )
  {
    Component_WebViewObject = (SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v24 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
    {
      if ( Component_WebViewObject )
      {
        Item = SimpleAnimation__get_Item(Component_WebViewObject, (System_String_o *)StringLiteral_13126/*"SvtW_StartClose"*/, 0LL);
        v26 = SimpleAnimation__get_Item(Component_WebViewObject, (System_String_o *)StringLiteral_13126/*"SvtW_StartClose"*/, 0LL);
        if ( v26 )
        {
          klass = v26->klass;
          v28 = v26;
          if ( *(_WORD *)&v26->klass->_2.bitflags1 )
          {
            v29 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v29;
              p_offset += 2;
              if ( v29 >= *(unsigned __int16 *)&v26->klass->_2.bitflags1 )
                goto LABEL_23;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
          }
          else
          {
LABEL_23:
            p_method = sub_AAFEF8(v26, SimpleAnimation_State_TypeInfo, 13LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v28, *(_QWORD *)(p_method + 8));
          if ( Item )
          {
            v44 = Item->klass;
            v45 = v43;
            if ( *(_WORD *)&Item->klass->_2.bitflags1 )
            {
              v46 = 0LL;
              v47 = (SimpleAnimation_State_c **)&v44->_1.interfaceOffsets->offset;
              while ( *(v47 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v46;
                v47 += 2;
                if ( v46 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
                  goto LABEL_51;
              }
              v48 = (__int64)&v44->vtable[*(_DWORD *)v47 + 4].method;
            }
            else
            {
LABEL_51:
              v48 = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 4LL);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))v48)(
              Item,
              *(_QWORD *)(v48 + 8),
              v45);
            v49 = SimpleAnimation__get_Item(Component_WebViewObject, (System_String_o *)StringLiteral_13126/*"SvtW_StartClose"*/, 0LL);
            if ( v49 )
            {
              v50 = v49->klass;
              v51 = SimpleAnimation_State_TypeInfo;
              v52 = v49;
              if ( *(_WORD *)&v49->klass->_2.bitflags1 )
              {
                v53 = 0LL;
                v54 = (SimpleAnimation_State_c **)&v50->_1.interfaceOffsets->offset;
                while ( *(v54 - 1) != SimpleAnimation_State_TypeInfo )
                {
                  ++v53;
                  v54 += 2;
                  if ( v53 >= *(unsigned __int16 *)&v49->klass->_2.bitflags1 )
                    goto LABEL_72;
                }
LABEL_73:
                v63 = (__int64)&v50->vtable[*(_DWORD *)v54 + 8].method;
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
    Component_WebViewObject = (SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v24 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
    {
      if ( Component_WebViewObject )
      {
        v32 = SimpleAnimation__get_Item(Component_WebViewObject, (System_String_o *)StringLiteral_13126/*"SvtW_StartClose"*/, 0LL);
        v33 = SimpleAnimation__get_Item(Component_WebViewObject, (System_String_o *)StringLiteral_13126/*"SvtW_StartClose"*/, 0LL);
        if ( v33 )
        {
          v34 = v33->klass;
          v35 = v33;
          if ( *(_WORD *)&v33->klass->_2.bitflags1 )
          {
            v36 = 0LL;
            v37 = (SimpleAnimation_State_c **)&v34->_1.interfaceOffsets->offset;
            while ( *(v37 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v36;
              v37 += 2;
              if ( v36 >= *(unsigned __int16 *)&v33->klass->_2.bitflags1 )
                goto LABEL_34;
            }
            v38 = (__int64)&v34->vtable[*(_DWORD *)v37 + 13].method;
          }
          else
          {
LABEL_34:
            v38 = sub_AAFEF8(v33, SimpleAnimation_State_TypeInfo, 13LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
          if ( v32 )
          {
            v56 = v32->klass;
            v57 = v55;
            if ( *(_WORD *)&v32->klass->_2.bitflags1 )
            {
              v58 = 0LL;
              v59 = (SimpleAnimation_State_c **)&v56->_1.interfaceOffsets->offset;
              while ( *(v59 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v58;
                v59 += 2;
                if ( v58 >= *(unsigned __int16 *)&v32->klass->_2.bitflags1 )
                  goto LABEL_65;
              }
              v60 = (__int64)&v56->vtable[*(_DWORD *)v59 + 4].method;
            }
            else
            {
LABEL_65:
              v60 = sub_AAFEF8(v32, SimpleAnimation_State_TypeInfo, 4LL);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))v60)(v32, *(_QWORD *)(v60 + 8), v57);
            v61 = SimpleAnimation__get_Item(Component_WebViewObject, (System_String_o *)StringLiteral_13126/*"SvtW_StartClose"*/, 0LL);
            if ( v61 )
            {
              v50 = v61->klass;
              v51 = SimpleAnimation_State_TypeInfo;
              v52 = v61;
              if ( *(_WORD *)&v61->klass->_2.bitflags1 )
              {
                v62 = 0LL;
                v54 = (SimpleAnimation_State_c **)&v50->_1.interfaceOffsets->offset;
                while ( *(v54 - 1) != SimpleAnimation_State_TypeInfo )
                {
                  ++v62;
                  v54 += 2;
                  if ( v62 >= *(unsigned __int16 *)&v61->klass->_2.bitflags1 )
                    goto LABEL_72;
                }
                goto LABEL_73;
              }
LABEL_72:
              v63 = sub_AAFEF8(v52, v51, 8LL);
LABEL_74:
              (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))v63)(v52, *(_QWORD *)(v63 + 8), -1.0);
              v10 = (TweenColor_o *)SimpleAnimation__Play_16380456(
                                      Component_WebViewObject,
                                      (System_String_o *)StringLiteral_13126/*"SvtW_StartClose"*/,
                                      0LL);
              goto LABEL_75;
            }
          }
        }
      }
LABEL_78:
      sub_B170D4();
    }
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = (TweenColor_o *)UnityEngine_Object__op_Inequality(v24, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    if ( v24 )
    {
      v39 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v24, (System_String_o *)StringLiteral_13126/*"SvtW_StartClose"*/, 0LL);
      v40 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v24, (System_String_o *)StringLiteral_13126/*"SvtW_StartClose"*/, 0LL);
      if ( v40 )
      {
        length = UnityEngine_AnimationState__get_length(v40, 0LL);
        if ( v39 )
        {
          UnityEngine_AnimationState__set_time(v39, length, 0LL);
          v42 = UnityEngine_Animation__get_Item(
                  (UnityEngine_Animation_o *)v24,
                  (System_String_o *)StringLiteral_13126/*"SvtW_StartClose"*/,
                  0LL);
          if ( v42 )
          {
            UnityEngine_AnimationState__set_speed(v42, -1.0, 0LL);
            v10 = (TweenColor_o *)UnityEngine_Animation__Play_49744236(
                                    (UnityEngine_Animation_o *)v24,
                                    (System_String_o *)StringLiteral_13126/*"SvtW_StartClose"*/,
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
      (BattleServantParamComponent_o *)v10,
      this->fields.commandSpellEffectDict,
      1,
      v12);
LABEL_77:
  this->fields.modeWindow = 2;
  BattleServantParamComponent__setTouch(this, 1, v11);
  BattleServantParamComponent__updateSkillIcon(this, 0, v64);
  BattleServantParamComponent__RemoveEffectClearRankUpBuff(this, v65);
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
  sub_B16F98(
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
  struct BattleServantData_o *data; // x8
  int32_t roleType; // w8
  UISprite_o *v8; // x0
  __int64 *v9; // x8
  UnityEngine_Component_o *v10; // x0
  UnityEngine_Transform_o *transform; // x20
  int v12; // s0
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool v17; // w1

  if ( (byte_40FCCF7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_18302/*"enemy_icon_leader"*/, v3);
    sub_B16FFC(&StringLiteral_21891/*"servant_icon"*/, v4);
    byte_40FCCF7 = 1;
  }
  roleTypeSprite = (UnityEngine_Object_o *)this->fields.roleTypeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(roleTypeSprite, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_26;
    if ( data->fields.isEnemy )
    {
      roleType = data->fields.roleType;
      v8 = this->fields.roleTypeSprite;
      if ( roleType == 2 )
      {
        if ( !v8 )
          goto LABEL_26;
        v9 = &StringLiteral_18302/*"enemy_icon_leader"*/;
        goto LABEL_18;
      }
      if ( !v8 )
        goto LABEL_26;
      if ( roleType == 3 )
      {
        v9 = &StringLiteral_21891/*"servant_icon"*/;
LABEL_18:
        UISprite__set_spriteName(v8, (System_String_o *)*v9, 0LL);
        v10 = (UnityEngine_Component_o *)this->fields.roleTypeSprite;
        if ( v10 )
        {
          transform = UnityEngine_Component__get_transform(v10, 0LL);
          *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL);
          if ( transform )
          {
            UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v12, 0LL);
            v15 = (UnityEngine_Component_o *)this->fields.roleTypeSprite;
            if ( v15 )
            {
              gameObject = UnityEngine_Component__get_gameObject(v15, 0LL);
              if ( gameObject )
              {
                v17 = 1;
LABEL_25:
                UnityEngine_GameObject__SetActive(gameObject, v17, 0LL);
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
      v8 = this->fields.roleTypeSprite;
      if ( !v8 )
        goto LABEL_26;
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0LL);
    if ( gameObject )
    {
      v17 = 0;
      goto LABEL_25;
    }
LABEL_26:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__setSkillFlash(
        BattleServantParamComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  struct BattleServantSkillIConComponent_array *skillIcon; // x8
  __int64 v5; // x20
  bool v6; // w21
  int max_length; // w9
  BattleServantSkillIConComponent_o *v8; // x0

  skillIcon = this->fields.skillIcon;
  if ( !skillIcon )
LABEL_7:
    sub_B170D4();
  v5 = 0LL;
  v6 = flg;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, flg, method);
      sub_B170A0();
    }
    v8 = skillIcon->m_Items[v5];
    if ( v8 )
    {
      v8->fields.flashFlg = v6;
      BattleServantSkillIConComponent__updateFlashSkill(v8, (const MethodInfo *)flg);
      skillIcon = this->fields.skillIcon;
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
  struct BattleServantData_o *data; // x0
  int32_t v11; // w25
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Transform_o *transform; // x0
  unsigned int localPosition; // s9
  struct BattleServantData_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Transform_o *v17; // x0
  unsigned int v18; // s8
  UnityEngine_GameObject_o *v19; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UIWidget_o *v21; // x23
  UnityEngine_Transform_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  srcLineSprite_o *v24; // x0
  UIWidget_o *v25; // x22
  UnityEngine_Transform_o *v26; // x0
  float v27; // s4
  float v28; // s5
  float v29; // s6
  UnityEngine_Object_o *v30; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  BattleServantData_o *v34; // x0
  BattleServantData_o *v35; // x0
  BattleServantData_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_Transform_o *v40; // x0
  float v41; // s4
  float v42; // s5
  float v43; // s6
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_Object_o *v46; // x21
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v50; // x8
  _BOOL4 v51; // w20
  UnityEngine_Transform_o *v52; // x0
  const MethodInfo *v53; // x1
  BattleServantShowBuffComponent_o *showBuffComponent; // x0
  MethodInfo v55; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FCD01 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, *(_QWORD *)&uniqueId);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FCD01 = 1;
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
        v11 = data->fields.uniqueId;
        if ( data->fields.isRaid || BattleServantData__get_IsSuperBossUi(data, 0LL) )
        {
          v12 = this->fields.targetMark;
          if ( !v12 )
            goto LABEL_72;
          transform = UnityEngine_GameObject__get_transform(v12, 0LL);
          if ( !transform )
            goto LABEL_72;
          localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0LL);
        }
        else
        {
          localPosition = -1034158080;
        }
        v15 = this->fields.data;
        if ( !v15 )
          goto LABEL_72;
        if ( v15->fields.isRaid || BattleServantData__get_IsSuperBossUi(v15, 0LL) )
        {
          v16 = this->fields.lockTargetMark;
          if ( !v16 )
            goto LABEL_72;
          v17 = UnityEngine_GameObject__get_transform(v16, 0LL);
          if ( !v17 )
            goto LABEL_72;
          v18 = (unsigned int)UnityEngine_Transform__get_localPosition(v17, 0LL);
        }
        else
        {
          v18 = -1034289152;
        }
        v19 = this->fields.targetMark;
        if ( v19 )
        {
          Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      v19,
                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( this->fields.targetMark )
          {
            v21 = (UIWidget_o *)Component_srcLineSprite;
            v22 = UnityEngine_GameObject__get_transform(this->fields.targetMark, 0LL);
            if ( v22 )
            {
              v56.fields.y = 22.0;
              v56.fields.z = 0.0;
              LODWORD(v56.fields.x) = localPosition;
              UnityEngine_Transform__set_localPosition(v22, v56, 0LL);
              if ( v21 )
              {
                UIWidget__set_depth(v21, -29, 0LL);
                UIWidget__set_width(v21, 74, 0LL);
                UIWidget__set_height(v21, 74, 0LL);
                v23 = this->fields.lockTargetMark;
                if ( v23 )
                {
                  v24 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          v23,
                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                  if ( this->fields.lockTargetMark )
                  {
                    v25 = (UIWidget_o *)v24;
                    v26 = UnityEngine_GameObject__get_transform(this->fields.lockTargetMark, 0LL);
                    if ( v26 )
                    {
                      v57.fields.z = 0.0;
                      LODWORD(v57.fields.x) = v18;
                      v57.fields.y = 22.0;
                      UnityEngine_Transform__set_localPosition(v26, v57, 0LL);
                      if ( v25 )
                      {
                        UIWidget__set_depth(v25, -30, 0LL);
                        UIWidget__set_width(v25, 74, 0LL);
                        UIWidget__set_height(v25, 74, 0LL);
                        v59.fields.r = 1.0;
                        v59.fields.g = 1.0;
                        v59.fields.b = 1.0;
                        v55.methodPointer = 0LL;
                        v55.invoker_method = 0LL;
                        UnityEngine_Color___ctor_40666012(v59, v27, v28, v29, &v55);
                        *(_QWORD *)&v60.fields.r = v55.methodPointer;
                        *(_QWORD *)&v60.fields.b = v55.invoker_method;
                        UIWidget__set_color(v25, v60, 0LL);
                        v30 = (UnityEngine_Object_o *)this->fields.targetMark;
                        if ( isTargetLock )
                        {
                          if ( v30 )
                          {
                            gameObject = UnityEngine_GameObject__get_gameObject(this->fields.targetMark, 0LL);
                            if ( gameObject )
                            {
                              UnityEngine_GameObject__SetActive(gameObject, v11 == uniqueId, 0LL);
                              v32 = this->fields.lockTargetMark;
                              if ( v32 )
                              {
                                v33 = UnityEngine_GameObject__get_gameObject(v32, 0LL);
                                if ( v33 )
                                {
                                  UnityEngine_GameObject__SetActive(v33, 0, 0LL);
                                  v34 = this->fields.data;
                                  if ( v34 )
                                  {
                                    if ( !BattleServantData__isAlive(v34, 0, 0LL) )
                                    {
                                      v35 = this->fields.data;
                                      if ( !v35 )
                                        goto LABEL_72;
                                      if ( !BattleServantData__isGuts(v35, 0LL) )
                                        return;
                                    }
                                    v36 = this->fields.data;
                                    if ( v36 )
                                    {
                                      if ( !BattleServantData__isUpHate(v36, 0LL, 0LL) )
                                        return;
                                      v37 = this->fields.lockTargetMark;
                                      if ( v37 )
                                      {
                                        v38 = UnityEngine_GameObject__get_gameObject(v37, 0LL);
                                        if ( v38 )
                                        {
                                          UnityEngine_GameObject__SetActive(v38, 1, 0LL);
                                          if ( v11 != uniqueId )
                                            return;
                                          UIWidget__set_depth(v21, -29, 0LL);
                                          UIWidget__set_width(v21, 70, 0LL);
                                          UIWidget__set_height(v21, 70, 0LL);
                                          v39 = this->fields.lockTargetMark;
                                          if ( v39 )
                                          {
                                            v40 = UnityEngine_GameObject__get_transform(v39, 0LL);
                                            if ( v40 )
                                            {
                                              v58.fields.z = 0.0;
                                              LODWORD(v58.fields.x) = v18;
                                              v58.fields.y = 22.0;
                                              UnityEngine_Transform__set_localPosition(v40, v58, 0LL);
                                              UIWidget__set_depth(v25, -30, 0LL);
                                              UIWidget__set_width(v25, 78, 0LL);
                                              UIWidget__set_height(v25, 78, 0LL);
                                              v61.fields.r = 1.0;
                                              v61.fields.g = 0.0;
                                              v61.fields.b = 0.0;
                                              v55.methodPointer = 0LL;
                                              v55.invoker_method = 0LL;
                                              UnityEngine_Color___ctor_40666012(v61, v41, v42, v43, &v55);
                                              *(_QWORD *)&v62.fields.r = v55.methodPointer;
                                              *(_QWORD *)&v62.fields.b = v55.invoker_method;
                                              UIWidget__set_color(v25, v62, 0LL);
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
                          if ( UnityEngine_Object__op_Inequality(v30, 0LL, 0LL) )
                          {
                            v44 = this->fields.targetMark;
                            if ( !v44 )
                              goto LABEL_72;
                            v45 = UnityEngine_GameObject__get_gameObject(v44, 0LL);
                            if ( !v45 )
                              goto LABEL_72;
                            UnityEngine_GameObject__SetActive(v45, v11 == uniqueId, 0LL);
                          }
                          v46 = (UnityEngine_Object_o *)this->fields.lockTargetMark;
                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          }
                          if ( UnityEngine_Object__op_Inequality(v46, 0LL, 0LL) )
                          {
                            v47 = this->fields.lockTargetMark;
                            if ( !v47 )
                              goto LABEL_72;
                            v48 = UnityEngine_GameObject__get_gameObject(v47, 0LL);
                            if ( !v48 )
                              goto LABEL_72;
                            UnityEngine_GameObject__SetActive(v48, 0, 0LL);
                          }
                          perf = this->fields.perf;
                          if ( perf )
                          {
                            v50 = perf->fields.data;
                            if ( v50 )
                            {
                              if ( !v50->fields.isMultiTargetBattle )
                                return;
                              v51 = uniqueId == -1 || v11 == uniqueId;
                              v52 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
                              CommonFunction__SetColorAllChild(v52, v51, this->fields.GRAY, 0LL);
                              this->fields.isActiveHpBar = v51;
                              if ( !v51 )
                                return;
                              showBuffComponent = this->fields.showBuffComponent;
                              if ( showBuffComponent )
                              {
                                BattleServantShowBuffComponent__UpdateActiveBuffList(showBuffComponent, v53);
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
        sub_B170D4();
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
  UnityEngine_Collider_o *Component_WebViewObject; // x20
  BattleServantData_o *data; // x0

  if ( (byte_40FCCF0 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, flg);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FCCF0 = 1;
  }
  Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !flg || (data = this->fields.data) != 0LL && BattleServantData__isAlive(data, 0, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
    {
      if ( !Component_WebViewObject )
        sub_B170D4();
      UnityEngine_Collider__set_enabled(Component_WebViewObject, flg, 0LL);
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
  UnityEngine_Collider_o *Component_WebViewObject; // x20

  if ( (byte_40FCCEF & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, flg);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FCCEF = 1;
  }
  root = this->fields.root;
  if ( !root )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(root, flg, 0LL);
  Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    if ( Component_WebViewObject )
    {
      UnityEngine_Collider__set_enabled(Component_WebViewObject, flg, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
}


void __fastcall BattleServantParamComponent__shiftUpdateStatus(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
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
  BattleActionData_o *nowAction; // x0
  bool IsUpdateShiftHp; // w0
  struct BattlePerformance_o *v19; // x8
  struct BattleActionData_o *v20; // x9
  bool v21; // w19
  BattleServantData_o *data; // x0
  BattleActionData_o *v23; // x0
  int32_t NotShiftUpdateFlag; // w0
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  struct BattleServantData_o *v27; // x8
  struct BattlePerformance_o *v28; // x8
  struct BattleActionData_o *v29; // x8
  BattleServantData_o *v30; // x0
  int32_t MaxHp; // w0
  const MethodInfo *v32; // x4
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v34; // x2
  __int64 v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Object_array *v42; // x20
  __int64 v43; // x0
  System_Int32_array **v44; // x1
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x22
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  BattleServantData_o *v56; // x0
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x21
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x21
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x21
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Collections_Hashtable_o *v105; // x0
  char v106[4]; // [xsp+8h] [xbp-38h] BYREF
  int v107; // [xsp+Ch] [xbp-34h] BYREF
  int32_t NowHp; // [xsp+18h] [xbp-28h] BYREF
  int v109; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_40FCD0B & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, method);
    sub_B16FFC(&int_TypeInfo, v3);
    sub_B16FFC(&object___TypeInfo, v4);
    sub_B16FFC(&SeManager_TypeInfo, v5);
    sub_B16FFC(&float_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_18842/*"from"*/, v7);
    sub_B16FFC(&StringLiteral_19333/*"ignoretimescale"*/, v8);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v9);
    sub_B16FFC(&StringLiteral_22851/*"updateShiftHplabel"*/, v10);
    sub_B16FFC(&StringLiteral_21182/*"onupdate"*/, v11);
    sub_B16FFC(&StringLiteral_22621/*"to"*/, v12);
    sub_B16FFC(&StringLiteral_4182/*"ComplateUpdateShiftHplabel"*/, v13);
    sub_B16FFC(&StringLiteral_21173/*"oncomplete"*/, v14);
    sub_B16FFC(&iTween_TypeInfo, v15);
    byte_40FCD0B = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_84;
  nowAction = perf->fields.nowAction;
  if ( !nowAction )
    goto LABEL_84;
  IsUpdateShiftHp = BattleActionData__IsUpdateShiftHp(nowAction, 0LL);
  v19 = this->fields.perf;
  if ( !v19 )
    goto LABEL_84;
  v20 = v19->fields.nowAction;
  if ( !v20 )
    goto LABEL_84;
  v21 = IsUpdateShiftHp;
  if ( v20->fields.isSkillShift )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_84;
    BattleServantData__updateHp(data, 0LL);
    v19 = this->fields.perf;
    if ( !v19 )
      goto LABEL_84;
  }
  v23 = v19->fields.nowAction;
  if ( !v23 )
    goto LABEL_84;
  NotShiftUpdateFlag = BattleActionData__get_NotShiftUpdateFlag(v23, 0LL);
  BattleServantParamComponent__initUpdateView(this, NotShiftUpdateFlag, v25);
  v27 = this->fields.data;
  if ( v27 )
    BattleServantParamComponent__updateBuffIcon(this, v27->fields.buffData, v26);
  if ( v21 )
  {
    v28 = this->fields.perf;
    if ( v28 )
    {
      v29 = v28->fields.nowAction;
      if ( v29 )
      {
        if ( v29->fields.isSkillShift )
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
        v30 = this->fields.data;
        if ( v30 )
        {
          MaxHp = BattleServantData__getMaxHp(v30, 0LL);
          BattleServantParamComponent__updateHplabel(this, 0, MaxHp, 1, v32);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v35 = sub_B17014(object___TypeInfo, 12LL, v34);
          if ( v35 )
          {
            v42 = (System_Object_array *)v35;
            v43 = StringLiteral_18842/*"from"*/;
            if ( StringLiteral_18842/*"from"*/ )
            {
              v43 = sub_B170BC(StringLiteral_18842/*"from"*/, v42->obj.klass->_1.element_class);
              if ( !v43 )
                goto LABEL_86;
              v44 = (System_Int32_array **)StringLiteral_18842/*"from"*/;
            }
            else
            {
              v44 = 0LL;
            }
            if ( !v42->max_length )
              goto LABEL_85;
            v42->m_Items[0] = (Il2CppObject *)v44;
            sub_B16F98((BattleServantConfConponent_o *)v42->m_Items, v44, v36, v37, v38, v39, v40, v41);
            v109 = 0;
            v43 = j_il2cpp_value_box_0(int_TypeInfo, &v109);
            v50 = (System_Int32_array **)v43;
            if ( v43 )
            {
              v43 = sub_B170BC(v43, v42->obj.klass->_1.element_class);
              if ( !v43 )
                goto LABEL_86;
            }
            if ( v42->max_length <= 1 )
              goto LABEL_85;
            v42->m_Items[1] = (Il2CppObject *)v50;
            sub_B16F98((BattleServantConfConponent_o *)&v42->m_Items[1], v50, v36, v45, v46, v47, v48, v49);
            v43 = StringLiteral_22621/*"to"*/;
            if ( StringLiteral_22621/*"to"*/ )
            {
              v43 = sub_B170BC(StringLiteral_22621/*"to"*/, v42->obj.klass->_1.element_class);
              if ( !v43 )
                goto LABEL_86;
              v44 = (System_Int32_array **)StringLiteral_22621/*"to"*/;
            }
            else
            {
              v44 = 0LL;
            }
            if ( v42->max_length <= 2 )
              goto LABEL_85;
            v42->m_Items[2] = (Il2CppObject *)v44;
            sub_B16F98((BattleServantConfConponent_o *)&v42->m_Items[2], v44, v36, v51, v52, v53, v54, v55);
            v56 = this->fields.data;
            if ( v56 )
            {
              NowHp = BattleServantData__getNowHp(v56, 0LL);
              v43 = j_il2cpp_value_box_0(int_TypeInfo, &NowHp);
              v62 = (System_Int32_array **)v43;
              if ( !v43 || (v43 = sub_B170BC(v43, v42->obj.klass->_1.element_class)) != 0 )
              {
                if ( v42->max_length <= 3 )
                  goto LABEL_85;
                v42->m_Items[3] = (Il2CppObject *)v62;
                sub_B16F98((BattleServantConfConponent_o *)&v42->m_Items[3], v62, v36, v57, v58, v59, v60, v61);
                v43 = StringLiteral_21182/*"onupdate"*/;
                if ( StringLiteral_21182/*"onupdate"*/ )
                {
                  v43 = sub_B170BC(StringLiteral_21182/*"onupdate"*/, v42->obj.klass->_1.element_class);
                  if ( !v43 )
                    goto LABEL_86;
                  v44 = (System_Int32_array **)StringLiteral_21182/*"onupdate"*/;
                }
                else
                {
                  v44 = 0LL;
                }
                if ( v42->max_length <= 4 )
                  goto LABEL_85;
                v42->m_Items[4] = (Il2CppObject *)v44;
                sub_B16F98((BattleServantConfConponent_o *)&v42->m_Items[4], v44, v36, v63, v64, v65, v66, v67);
                v43 = StringLiteral_22851/*"updateShiftHplabel"*/;
                if ( StringLiteral_22851/*"updateShiftHplabel"*/ )
                {
                  v43 = sub_B170BC(StringLiteral_22851/*"updateShiftHplabel"*/, v42->obj.klass->_1.element_class);
                  if ( !v43 )
                    goto LABEL_86;
                  v44 = (System_Int32_array **)StringLiteral_22851/*"updateShiftHplabel"*/;
                }
                else
                {
                  v44 = 0LL;
                }
                if ( v42->max_length <= 5 )
                  goto LABEL_85;
                v42->m_Items[5] = (Il2CppObject *)v44;
                sub_B16F98((BattleServantConfConponent_o *)&v42->m_Items[5], v44, v36, v68, v69, v70, v71, v72);
                v43 = StringLiteral_22584/*"time"*/;
                if ( StringLiteral_22584/*"time"*/ )
                {
                  v43 = sub_B170BC(StringLiteral_22584/*"time"*/, v42->obj.klass->_1.element_class);
                  if ( !v43 )
                    goto LABEL_86;
                  v44 = (System_Int32_array **)StringLiteral_22584/*"time"*/;
                }
                else
                {
                  v44 = 0LL;
                }
                if ( v42->max_length <= 6 )
                  goto LABEL_85;
                v42->m_Items[6] = (Il2CppObject *)v44;
                sub_B16F98((BattleServantConfConponent_o *)&v42->m_Items[6], v44, v36, v73, v74, v75, v76, v77);
                v107 = 1069547520;
                v43 = j_il2cpp_value_box_0(float_TypeInfo, &v107);
                v83 = (System_Int32_array **)v43;
                if ( !v43 || (v43 = sub_B170BC(v43, v42->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v42->max_length <= 7 )
                    goto LABEL_85;
                  v42->m_Items[7] = (Il2CppObject *)v83;
                  sub_B16F98((BattleServantConfConponent_o *)&v42->m_Items[7], v83, v36, v78, v79, v80, v81, v82);
                  v43 = StringLiteral_19333/*"ignoretimescale"*/;
                  if ( StringLiteral_19333/*"ignoretimescale"*/ )
                  {
                    v43 = sub_B170BC(StringLiteral_19333/*"ignoretimescale"*/, v42->obj.klass->_1.element_class);
                    if ( !v43 )
                      goto LABEL_86;
                    v44 = (System_Int32_array **)StringLiteral_19333/*"ignoretimescale"*/;
                  }
                  else
                  {
                    v44 = 0LL;
                  }
                  if ( v42->max_length <= 8 )
                    goto LABEL_85;
                  v42->m_Items[8] = (Il2CppObject *)v44;
                  sub_B16F98((BattleServantConfConponent_o *)&v42->m_Items[8], v44, v36, v84, v85, v86, v87, v88);
                  v106[0] = 1;
                  v43 = j_il2cpp_value_box_0(bool_TypeInfo, v106);
                  v94 = (System_Int32_array **)v43;
                  if ( !v43 || (v43 = sub_B170BC(v43, v42->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v42->max_length <= 9 )
                      goto LABEL_85;
                    v42->m_Items[9] = (Il2CppObject *)v94;
                    sub_B16F98((BattleServantConfConponent_o *)&v42->m_Items[9], v94, v36, v89, v90, v91, v92, v93);
                    v43 = StringLiteral_21173/*"oncomplete"*/;
                    if ( StringLiteral_21173/*"oncomplete"*/ )
                    {
                      v43 = sub_B170BC(StringLiteral_21173/*"oncomplete"*/, v42->obj.klass->_1.element_class);
                      if ( !v43 )
                        goto LABEL_86;
                      v44 = (System_Int32_array **)StringLiteral_21173/*"oncomplete"*/;
                    }
                    else
                    {
                      v44 = 0LL;
                    }
                    if ( v42->max_length <= 0xA )
                      goto LABEL_85;
                    v42->m_Items[10] = (Il2CppObject *)v44;
                    sub_B16F98((BattleServantConfConponent_o *)&v42->m_Items[10], v44, v36, v95, v96, v97, v98, v99);
                    v43 = StringLiteral_4182/*"ComplateUpdateShiftHplabel"*/;
                    if ( !StringLiteral_4182/*"ComplateUpdateShiftHplabel"*/ )
                    {
                      v44 = 0LL;
LABEL_78:
                      if ( v42->max_length > 0xB )
                      {
                        v42->m_Items[11] = (Il2CppObject *)v44;
                        sub_B16F98(
                          (BattleServantConfConponent_o *)&v42->m_Items[11],
                          v44,
                          v36,
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
                        v105 = iTween__Hash(v42, 0LL);
                        iTween__ValueTo(gameObject, v105, 0LL);
                        return;
                      }
LABEL_85:
                      sub_B17100(v43, v44, v36);
                      sub_B170A0();
                    }
                    v43 = sub_B170BC(StringLiteral_4182/*"ComplateUpdateShiftHplabel"*/, v42->obj.klass->_1.element_class);
                    if ( v43 )
                    {
                      v44 = (System_Int32_array **)StringLiteral_4182/*"ComplateUpdateShiftHplabel"*/;
                      goto LABEL_78;
                    }
                  }
                }
              }
LABEL_86:
              sub_B170F4(v43);
              sub_B170A0();
            }
          }
        }
      }
    }
LABEL_84:
    sub_B170D4();
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

  if ( (byte_40FCD0D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__, buffData);
    byte_40FCD0D = 1;
  }
  sideEffectShowQueue = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields.sideEffectShowQueue;
  if ( !sideEffectShowQueue )
    sub_B170D4();
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    sideEffectShowQueue,
    (Mono_Net_CFNetwork_GetProxyData_o *)buffData,
    (const MethodInfo_2B16498 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__);
  if ( !this->fields.isShowingSideEffect )
  {
    this->fields.isShowingSideEffect = 1;
    v7 = BattleServantParamComponent__showSideEffectList(this, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__showSideEffectList(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FCD0E & 1) == 0 )
  {
    sub_B16FFC(&BattleServantParamComponent__showSideEffectList_d__107_TypeInfo, method);
    byte_40FCD0E = 1;
  }
  v6 = sub_B170CC(BattleServantParamComponent__showSideEffectList_d__107_TypeInfo, method, v2, v3, v4);
  BattleServantParamComponent__showSideEffectList_d__107___ctor(
    (BattleServantParamComponent__showSideEffectList_d__107_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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
  BattleServantShowBuffComponent_o *v10; // x21
  BattleBuffData_ShowBuffData_array *ShowServantParam; // x0
  const MethodInfo *v12; // x2
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  struct BattleServantData_o *v15; // x8
  UnityEngine_Component_o *v16; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v18; // x1
  BattleServantShowBuffComponent_o *v19; // x0
  struct BattleServantData_o *v20; // x8
  BattlePerformance_o *v21; // x0
  BattleActorControl_o *ServantActor; // x21
  BattleServantData_o *v23; // x0
  bool IsCounterWaitMotion; // w0
  struct BattleFBXComponent_o *fbxcomponent; // x8
  System_String_o *currentCommonAnimName; // x22
  __int64 v27; // x0
  __int64 v28; // x23
  System_String_o *v29; // x24
  HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_c *v30; // x0
  int v31; // w8
  __int64 v32; // x0
  __int64 v33; // x23
  System_String_o *v34; // x24
  __int64 v35; // x0
  __int64 v36; // x22
  System_String_o *v37; // x23
  struct BattleServantData_o *v38; // x8
  BattleBuffData_BuffData_array *ActiveList; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  int max_length; // w8
  BattleBuffData_BuffData_array *v43; // x21
  int v44; // w23
  char v45; // w22
  BattleBuffData_BuffData_o *v46; // x27
  BuffMaster_o *buffMst; // x0
  WarEntity_o *Entity; // x0
  int32_t id; // w27
  BattleServantData_o *v50; // x0
  struct BattleServantData_o *v51; // x8
  BattlePerformance_o *v52; // x0
  BattleActorControl_o *v53; // x20
  int v54; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FCD00 & 1) == 0 )
  {
    sub_B16FFC(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, buffData);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_13278/*"TAMAMOCAT_STUN_BUFF_ID"*/, v7);
    sub_B16FFC(&StringLiteral_23096/*"wait"*/, v8);
    byte_40FCD00 = 1;
  }
  v54 = 0;
  showBuffComponent = (UnityEngine_Object_o *)this->fields.showBuffComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(showBuffComponent, 0LL, 0LL) )
    return;
  if ( !buffData )
    goto LABEL_60;
  v10 = this->fields.showBuffComponent;
  ShowServantParam = BattleBuffData__getShowServantParam(buffData, 0LL);
  if ( !v10 )
    goto LABEL_60;
  BattleServantShowBuffComponent__setBuffList(v10, ShowServantParam, v12);
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
      v16 = (UnityEngine_Component_o *)this->fields.showBuffComponent;
      if ( !v16 )
        goto LABEL_60;
      transform = UnityEngine_Component__get_transform(v16, 0LL);
      CommonFunction__SetColorAllChild(transform, this->fields.isActiveHpBar, this->fields.GRAY, 0LL);
      if ( this->fields.isActiveHpBar )
      {
        v19 = this->fields.showBuffComponent;
        if ( !v19 )
          goto LABEL_60;
        BattleServantShowBuffComponent__UpdateActiveBuffList(v19, v18);
      }
    }
  }
  v20 = this->fields.data;
  if ( !v20 || (v21 = this->fields.perf) == 0LL )
LABEL_60:
    sub_B170D4();
  ServantActor = BattlePerformance__getServantActor(v21, v20->fields.uniqueId, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ServantActor, 0LL, 0LL) )
  {
    v23 = this->fields.data;
    if ( !v23 )
      goto LABEL_60;
    IsCounterWaitMotion = BattleServantData__IsCounterWaitMotion(v23, 0LL);
    if ( !ServantActor )
      goto LABEL_60;
    fbxcomponent = ServantActor->fields.fbxcomponent;
    if ( !fbxcomponent )
      goto LABEL_60;
    currentCommonAnimName = fbxcomponent->fields.currentCommonAnimName;
    if ( IsCounterWaitMotion )
    {
      v54 = 9;
      v27 = j_il2cpp_value_box_0(HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, &v54);
      if ( !v27 )
        goto LABEL_60;
      v28 = v27;
      v29 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 360LL))(
                                 v27,
                                 *(_QWORD *)(*(_QWORD *)v27 + 368LL));
      v54 = *(_DWORD *)j_il2cpp_object_unbox_0(v28);
      if ( !BasicHelper__EqualExceptNullOrEmpty(currentCommonAnimName, v29, 0LL) )
        goto LABEL_36;
      v30 = HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
      v31 = 49;
    }
    else
    {
      v54 = 49;
      v32 = j_il2cpp_value_box_0(HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, &v54);
      if ( !v32 )
        goto LABEL_60;
      v33 = v32;
      v34 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v32 + 360LL))(
                                 v32,
                                 *(_QWORD *)(*(_QWORD *)v32 + 368LL));
      v54 = *(_DWORD *)j_il2cpp_object_unbox_0(v33);
      if ( !BasicHelper__EqualExceptNullOrEmpty(currentCommonAnimName, v34, 0LL) )
        goto LABEL_36;
      v30 = HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
      v31 = 9;
    }
    v54 = v31;
    v35 = j_il2cpp_value_box_0(v30, &v54);
    if ( !v35 )
      goto LABEL_60;
    v36 = v35;
    v37 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v35 + 360LL))(
                               v35,
                               *(_QWORD *)(*(_QWORD *)v35 + 368LL));
    v54 = *(_DWORD *)j_il2cpp_object_unbox_0(v36);
    BattleActorControl__playAnimation_32029680(ServantActor, v37, 0, 0LL);
  }
LABEL_36:
  v38 = this->fields.data;
  if ( !v38 )
    goto LABEL_60;
  if ( !v38->fields.isSleepWaitMode )
    return;
  ActiveList = BattleBuffData__getActiveList(buffData, 1, 0LL);
  if ( !ActiveList )
    goto LABEL_60;
  max_length = ActiveList->max_length;
  v43 = ActiveList;
  if ( max_length < 1 )
    goto LABEL_55;
  v44 = 0;
  v45 = 0;
  do
  {
    if ( v44 >= (unsigned int)max_length )
    {
      sub_B17100(ActiveList, v40, v41);
      sub_B170A0();
    }
    v46 = v43->m_Items[v44];
    if ( !v46 )
      goto LABEL_60;
    if ( !v46->fields._isRemove )
    {
      buffMst = BattleBuffData__get_buffMst(buffData, 0LL);
      if ( !buffMst )
        goto LABEL_60;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                 v46->fields.buffId,
                 (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_60;
      id = Entity->fields.id;
      ActiveList = (BattleBuffData_BuffData_array *)ConstantMaster__getValue(
                                                      (System_String_o *)StringLiteral_13278/*"TAMAMOCAT_STUN_BUFF_ID"*/,
                                                      0LL);
      v45 |= id == (_DWORD)ActiveList;
    }
    max_length = v43->max_length;
    ++v44;
  }
  while ( v44 < max_length );
  if ( (v45 & 1) == 0 )
  {
LABEL_55:
    v50 = this->fields.data;
    if ( !v50 )
      goto LABEL_60;
    BattleServantData__SetIsSleepWaitMode(v50, 0, 0LL);
    v51 = this->fields.data;
    if ( !v51 )
      goto LABEL_60;
    v52 = this->fields.perf;
    if ( !v52 )
      goto LABEL_60;
    v53 = BattlePerformance__getServantActor(v52, v51->fields.uniqueId, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v53, 0LL, 0LL) )
    {
      if ( v53 )
      {
        if ( BattleActorControl__checkID(v53, this->fields.uniqueID, 0LL) )
          BattleActorControl__playAnimation_32029680(v53, (System_String_o *)StringLiteral_23096/*"wait"*/, 0, 0LL);
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
  BattleActorControl_o *ServantActor; // x20
  BattleServantData_o *battleSvtData; // x0
  System_Int32_array *AuraIdList; // x1

  if ( (byte_40FCCFF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, svtData);
    byte_40FCCFF = 1;
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
        ServantActor = BattlePerformance__getServantActor(perf, svtData->fields.uniqueId, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ServantActor, 0LL, 0LL) )
        {
          if ( !ServantActor )
            goto LABEL_18;
          BattleActorControl__updateBuffLoopEffect(ServantActor, 0LL);
          BattleActorControl__UpdateActorVisibilityByBuff(ServantActor, 0, 0LL);
          if ( doAuraUpdate )
          {
            battleSvtData = ServantActor->fields.battleSvtData;
            if ( battleSvtData )
            {
              AuraIdList = BattleServantData__getAuraIdList(battleSvtData, 0LL);
              BattleActorControl__updateAura(ServantActor, AuraIdList, 0LL);
              return;
            }
LABEL_18:
            sub_B170D4();
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
  struct BattleServantData_o *data; // x0
  int v8; // w0
  UnityEngine_Object_o *hpGauge; // x22
  BattleHpGaugeBarComponent_o *v10; // x0
  BattleHpGaugeBarComponent_o *v11; // x0

  if ( (byte_40FCCF4 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&now);
    byte_40FCCF4 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_18;
  v8 = ((__int64 (__fastcall *)(struct BattleServantData_o *, Il2CppMethodPointer, _QWORD, const MethodInfo *))data->klass->vtable._9_get_hp.method)(
         data,
         data->klass->vtable._10_set_hp.methodPtr,
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
      v11 = this->fields.hpGauge;
      if ( !v11 )
        goto LABEL_18;
      BattleHpGaugeBarComponent__setZero(v11, 0LL);
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
      v10 = this->fields.hpGauge;
      if ( v10 )
      {
        BattleHpGaugeBarComponent__setValue(v10, now, max, 0LL);
        return;
      }
LABEL_18:
      sub_B170D4();
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
  System_String_o *v20; // x0
  UnityEngine_Component_o *v21; // x0
  WebViewObject_o *Component_WebViewObject; // x24
  UnityEngine_Object_o *maxhplabel; // x24
  UILabel_o *v24; // x24
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  UnityEngine_Object_o *totalhplabel; // x23
  UILabel_o *v28; // x23
  Il2CppObject *v29; // x24
  Il2CppObject *v30; // x0
  __int64 *v31; // x8
  System_String_o *v32; // x0
  UnityEngine_Object_o *breakSprite; // x22
  BattleServantData_o *data; // x0
  bool isShiftableServant; // w8
  UnityEngine_Behaviour_o *v36; // x0
  bool v37; // w9
  bool v38; // w20
  UnityEngine_Object_o *v39; // x21
  UnityEngine_Behaviour_o *v40; // x0
  UnityEngine_Object_o *v41; // x21
  UnityEngine_Behaviour_o *v42; // x0
  UnityEngine_Object_o *v43; // x21
  UnityEngine_Behaviour_o *v44; // x0
  int32_t v45; // [xsp+8h] [xbp-48h] BYREF
  int32_t v46; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FCCF5 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, *(_QWORD *)&now);
    sub_B16FFC(&int_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_23445/*"{0}"*/, v11);
    sub_B16FFC(&StringLiteral_23516/*"{0}/{1}"*/, v12);
    sub_B16FFC(&StringLiteral_23395/*"{0:#,0}"*/, v13);
    sub_B16FFC(&StringLiteral_23398/*"{0:#,0}/{1:#,0}"*/, v14);
    byte_40FCCF5 = 1;
  }
  hplabel = (UnityEngine_Object_o *)this->fields.hplabel;
  if ( this->fields.hpformatflg )
    v16 = &StringLiteral_23395/*"{0:#,0}"*/;
  else
    v16 = &StringLiteral_23445/*"{0}"*/;
  v17 = (System_String_o *)*v16;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(hplabel, 0LL, 0LL) )
  {
    v18 = this->fields.hplabel;
    v46 = now;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
    v20 = System_String__Format(v17, v19, 0LL);
    if ( !v18 )
      goto LABEL_59;
    UILabel__set_text(v18, v20, 0LL);
    v21 = (UnityEngine_Component_o *)this->fields.hplabel;
    if ( !v21 )
      goto LABEL_59;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                v21,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
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
    v24 = this->fields.maxhplabel;
    v46 = max;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
    v26 = System_String__Format(v17, v25, 0LL);
    if ( !v24 )
      goto LABEL_59;
    UILabel__set_text(v24, v26, 0LL);
  }
  totalhplabel = (UnityEngine_Object_o *)this->fields.totalhplabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(totalhplabel, 0LL, 0LL) )
  {
    v28 = this->fields.totalhplabel;
    if ( this->fields.hpformatflg )
    {
      v46 = now;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
      v45 = max;
      v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
      v31 = &StringLiteral_23398/*"{0:#,0}/{1:#,0}"*/;
    }
    else
    {
      v46 = now;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
      v45 = max;
      v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
      v31 = &StringLiteral_23516/*"{0}/{1}"*/;
    }
    v32 = System_String__Format_43739268((System_String_o *)*v31, v29, v30, 0LL);
    if ( !v28 )
      goto LABEL_59;
    UILabel__set_text(v28, v32, 0LL);
  }
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0LL, 0LL) && isDispBreak )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_59;
    isShiftableServant = BattleServantData__isShiftableServant(data, 0LL);
    v36 = (UnityEngine_Behaviour_o *)this->fields.breakSprite;
    v37 = now == 0;
    if ( !v36 )
      goto LABEL_59;
    v38 = v37 && isShiftableServant;
    UnityEngine_Behaviour__set_enabled(v36, v37 && isShiftableServant, 0LL);
    v39 = (UnityEngine_Object_o *)this->fields.hplabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
    {
      v40 = (UnityEngine_Behaviour_o *)this->fields.hplabel;
      if ( !v40 )
        goto LABEL_59;
      UnityEngine_Behaviour__set_enabled(v40, !v38, 0LL);
    }
    v41 = (UnityEngine_Object_o *)this->fields.maxhplabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v41, 0LL, 0LL) )
    {
      v42 = (UnityEngine_Behaviour_o *)this->fields.maxhplabel;
      if ( !v42 )
        goto LABEL_59;
      UnityEngine_Behaviour__set_enabled(v42, !v38, 0LL);
    }
    v43 = (UnityEngine_Object_o *)this->fields.totalhplabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v43, 0LL, 0LL) )
    {
      v44 = (UnityEngine_Behaviour_o *)this->fields.totalhplabel;
      if ( v44 )
      {
        UnityEngine_Behaviour__set_enabled(v44, !v38, 0LL);
        return;
      }
LABEL_59:
      sub_B170D4();
    }
  }
}


void __fastcall BattleServantParamComponent__updateNp(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  struct BattleServantData_o *data; // x8
  UnityEngine_Object_o *npcomp; // x21
  BattleNpGaugeSystemComponent_o *v7; // x0

  if ( (byte_40FCCF1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, svtdata);
    byte_40FCCF1 = 1;
  }
  if ( !svtdata )
    goto LABEL_13;
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  if ( svtdata->fields.uniqueId == data->fields.uniqueId )
  {
    npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL) )
    {
      v7 = this->fields.npcomp;
      if ( v7 )
      {
        BattleNpGaugeSystemComponent__changeParam(v7, svtdata->fields.np, 0LL);
        return;
      }
LABEL_13:
      sub_B170D4();
    }
  }
}


void __fastcall BattleServantParamComponent__updateNp_30278428(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtdata,
        System_Int32_array *npArray,
        int32_t index,
        const MethodInfo *method)
{
  struct BattleServantData_o *data; // x8
  UnityEngine_Object_o *npcomp; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t max_length; // w8
  BattleNpGaugeSystemComponent_o *v15; // x0

  if ( (byte_40FCCF2 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, svtdata);
    byte_40FCCF2 = 1;
  }
  if ( !svtdata )
    goto LABEL_17;
  data = this->fields.data;
  if ( !data )
    goto LABEL_17;
  if ( svtdata->fields.uniqueId == data->fields.uniqueId )
  {
    npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
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
            sub_B17100(v11, v12, v13);
            sub_B170A0();
          }
          v15 = this->fields.npcomp;
          if ( v15 )
          {
            BattleNpGaugeSystemComponent__changeParam(v15, npArray->m_Items[index + 1], 0LL);
            return;
          }
LABEL_17:
          sub_B170D4();
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
    sub_B170D4();
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
  BattleServantData_o *v6; // x0
  BattleSkillInfoData_array *ActiveSkillInfos; // x0
  BattleSkillInfoData_array *v8; // x20
  System_Boolean_array *SkillSealSelect; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct BattleServantSkillIConComponent_array *skillIcon; // x8
  System_Boolean_array *v13; // x21
  unsigned __int64 v14; // x22
  bool *v15; // x28
  unsigned __int64 max_length; // x9
  unsigned __int64 v17; // x10
  BattleServantData_o *v18; // x0
  BattleSkillInfoData_o *v19; // x23
  BattleServantData_o *v20; // x0
  struct BattleServantSkillIConComponent_array *v21; // x8
  int32_t v22; // w24
  BattleServantData_o *v23; // x0
  BattleServantSkillIConComponent_o *v24; // x25
  bool canUseSkill; // w0
  bool v26; // w26
  const MethodInfo *v27; // x6
  BattleServantSkillIConComponent_o *v28; // x8
  UnityEngine_GameObject_o *root; // x0

  data = this->fields.data;
  if ( data )
  {
    BuffData = BattleServantData__get_BuffData(data, 0LL);
    if ( !BuffData
      || (BattleBuffData__UpdateSkillRelationBuff(BuffData, 0LL), (v6 = this->fields.data) == 0LL)
      || (ActiveSkillInfos = BattleServantData__getActiveSkillInfos(v6, 0LL), !this->fields.data)
      || (v8 = ActiveSkillInfos,
          SkillSealSelect = BattleServantData__getSkillSealSelect(this->fields.data, 0LL),
          (skillIcon = this->fields.skillIcon) == 0LL) )
    {
LABEL_29:
      sub_B170D4();
    }
    v13 = SkillSealSelect;
    v14 = 0LL;
    v15 = &SkillSealSelect->m_Items[4];
    while ( 1 )
    {
      max_length = skillIcon->max_length;
      if ( (__int64)v14 >= (int)max_length )
        break;
      if ( !v8 )
        goto LABEL_29;
      v17 = v8->max_length;
      if ( (__int64)v14 >= (int)v17 )
      {
        if ( v14 >= max_length )
        {
LABEL_31:
          sub_B17100(SkillSealSelect, v10, v11);
          sub_B170A0();
        }
        v28 = skillIcon->m_Items[v14];
        if ( !v28 )
          goto LABEL_29;
        root = v28->fields.root;
        if ( !root )
          goto LABEL_29;
        UnityEngine_GameObject__SetActive(root, 0, 0LL);
      }
      else
      {
        if ( v14 >= v17 )
          goto LABEL_31;
        v18 = this->fields.data;
        if ( !v18 )
          goto LABEL_29;
        v19 = v8->m_Items[v14];
        SkillSealSelect = (System_Boolean_array *)BattleServantData__getSkillSealTurn(v18, 0LL);
        if ( !v13 )
          goto LABEL_29;
        if ( v14 >= v13->max_length )
          goto LABEL_31;
        if ( v15[v14] )
        {
          v20 = this->fields.data;
          if ( !v20 )
            goto LABEL_29;
          SkillSealSelect = (System_Boolean_array *)BattleServantData__getSkillSealSelectTurn(v20, v14, 0LL);
        }
        v21 = this->fields.skillIcon;
        v22 = (int)SkillSealSelect;
        if ( !v21 )
          goto LABEL_29;
        if ( v14 >= v21->max_length )
          goto LABEL_31;
        v23 = this->fields.data;
        if ( !v23 )
          goto LABEL_29;
        v24 = v21->m_Items[v14];
        canUseSkill = BattleServantData__canUseSkill(v23, v14, 0LL);
        if ( !this->fields.data )
          goto LABEL_29;
        v26 = canUseSkill;
        SkillSealSelect = (System_Boolean_array *)BattleServantData__getNotActTurn(this->fields.data, 0LL);
        if ( v14 >= v13->max_length )
          goto LABEL_31;
        if ( !v24 )
          goto LABEL_29;
        BattleServantSkillIConComponent__SetSkillInfo(v24, v19, v26, v22, (int32_t)SkillSealSelect, v15[v14], v27);
      }
      skillIcon = this->fields.skillIcon;
      ++v14;
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
  BattleServantData_o *v6; // x0
  BattleNextTDgaugeComponent_o *v7; // x0
  struct BattleServantData_o *v8; // x8
  BattleNextTDgaugeComponent_o *v9; // x0

  if ( (byte_40FCCF3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, svtData);
    byte_40FCCF3 = 1;
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
    v6 = this->fields.data;
    if ( !v6 )
      goto LABEL_16;
    if ( BattleServantData__isTDSeraled(v6, 0LL) )
    {
LABEL_11:
      v7 = this->fields.nextTdGauge;
      if ( v7 )
      {
        BattleNextTDgaugeComponent__setHide(v7, 0LL);
        return;
      }
LABEL_16:
      sub_B170D4();
    }
    v8 = this->fields.data;
    if ( !v8 )
      goto LABEL_16;
    v9 = this->fields.nextTdGauge;
    if ( !v9 )
      goto LABEL_16;
    BattleNextTDgaugeComponent__setValue(v9, v8->fields.nexttpturn, 0LL);
  }
}


void __fastcall BattleServantParamComponent__updateView(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattlePerformance_o *perf; // x8
  BattleData_o *data; // x0
  UnityEngine_Object_o *PartsActor; // x20
  BattleServantData_o *monitor; // x0
  BattleServantData_o *v8; // x0
  BattleServantData_o *v9; // x0
  UnityEngine_GameObject_o *root; // x0
  BattleServantData_o *v11; // x0
  int32_t NowHp; // w0
  int32_t v13; // w20
  int32_t MaxHp; // w0
  const MethodInfo *v15; // x4
  BattleServantData_o *v16; // x0
  int32_t v17; // w0
  int32_t v18; // w20
  int32_t v19; // w0
  const MethodInfo *v20; // x3
  UnityEngine_Object_o *npcomp; // x20
  BattleServantData_o *v22; // x1
  const MethodInfo *v23; // x2
  struct BattleServantData_o *v24; // x8
  BattleNpGaugeSystemComponent_o *v25; // x0
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  struct BattleServantData_o *v28; // x8
  UnityEngine_GameObject_o *v29; // x0

  if ( (byte_40FCCFA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FCCFA = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_33;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_33;
  if ( !data->fields.isMultiTargetBattle )
    goto LABEL_16;
  PartsActor = (UnityEngine_Object_o *)BattleData__GetPartsActor(data, 1, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(PartsActor, 0LL, 0LL) )
    goto LABEL_16;
  if ( !PartsActor )
    goto LABEL_33;
  monitor = (BattleServantData_o *)PartsActor[17].monitor;
  if ( !monitor )
    goto LABEL_33;
  if ( BattleServantData__isAlive(monitor, 0, 0LL) )
  {
LABEL_16:
    v8 = this->fields.data;
    if ( v8 )
    {
      if ( BattleServantData__isAlive(v8, 0, 0LL) )
        goto LABEL_17;
      v9 = this->fields.data;
      if ( !v9 )
        goto LABEL_33;
      if ( BattleServantData__isGuts(v9, 0LL) )
      {
LABEL_17:
        root = this->fields.root;
        if ( root )
        {
          UnityEngine_GameObject__SetActive(root, 1, 0LL);
          v11 = this->fields.data;
          if ( v11 )
          {
            NowHp = BattleServantData__getNowHp(v11, 0LL);
            if ( this->fields.data )
            {
              v13 = NowHp;
              MaxHp = BattleServantData__getMaxHp(this->fields.data, 0LL);
              BattleServantParamComponent__updateHplabel(this, v13, MaxHp, 1, v15);
              v16 = this->fields.data;
              if ( v16 )
              {
                v17 = BattleServantData__getNowHp(v16, 0LL);
                if ( this->fields.data )
                {
                  v18 = v17;
                  v19 = BattleServantData__getMaxHp(this->fields.data, 0LL);
                  BattleServantParamComponent__updateHpbar(this, v18, v19, v20);
                  npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL) )
                  {
                    v24 = this->fields.data;
                    if ( !v24 )
                      goto LABEL_33;
                    v25 = this->fields.npcomp;
                    if ( !v25 )
                      goto LABEL_33;
                    BattleNpGaugeSystemComponent__setNowParam(v25, v24->fields.np, 0LL);
                  }
                  BattleServantParamComponent__updateTDGauge(this, v22, v23);
                  BattleServantParamComponent__updateSkillIcon(this, 0, v26);
                  v28 = this->fields.data;
                  if ( v28 )
                  {
                    BattleServantParamComponent__updateBuffIcon(this, v28->fields.buffData, v27);
                    return;
                  }
                }
              }
            }
          }
        }
LABEL_33:
        sub_B170D4();
      }
    }
  }
  BattleServantParamComponent__setTouch(this, 0, v2);
  v29 = this->fields.root;
  if ( !v29 )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(v29, 0, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  int32_t _1__state; // w8
  struct BattleServantParamComponent_o *_4__this; // x20
  Il2CppObject *v22; // x22
  struct BattleServantParamComponent___c__DisplayClass120_0_o **p__8__1; // x21
  int effectId; // w1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *classIconEffectDict; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  int32_t v30; // w22
  Il2CppObject *_8__1; // x24
  System_Action_o *v32; // x23
  BattlePerformance_o *perf; // x24
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattleServantData_o *servantData; // x8
  BattlePerformance_o *v37; // x0
  UnityEngine_GameObject_o *ServantGameObject; // x21
  int32_t v39; // w22
  UnityEngine_Object_o *EffectObject; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v42; // x22
  UnityEngine_Transform_o *v43; // x0
  UnityEngine_Transform_o *v44; // x22
  int v45; // s0
  UnityEngine_Transform_o *v48; // x22
  int v49; // s0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v52; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v53; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *commandSpellEffectDict; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  System_String_o *longName; // x21
  struct BattlePerformance_o *v58; // x8
  struct BattleData_o *data; // x8
  System_String_o *v60; // x21
  Il2CppObject *v61; // x0
  System_String_o *v62; // x22
  UnityEngine_Object_o *Manager__loadBattleCommonEffect; // x21
  UnityEngine_Object_o *facetex; // x22
  UnityEngine_Component_o *v65; // x0
  UnityEngine_Transform_o *v66; // x22
  UnityEngine_GameObject_o *v67; // x21
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v68; // x0
  int32_t battleGenderType; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *name; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *path; // [xsp+10h] [xbp-40h] BYREF
  UIButton_o *component; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_40F71CC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&BattleEffectUtility_TypeInfo, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_EffectMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v11);
    sub_B16FFC(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, v12);
    sub_B16FFC(&int_TypeInfo, v13);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v16);
    sub_B16FFC(&Method_BattleServantParamComponent___c__DisplayClass120_0__CoAddClassIconEffect_b__0__, v17);
    sub_B16FFC(&BattleServantParamComponent___c__DisplayClass120_0_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_18105/*"ef_commandaura_{0}"*/, v19);
    byte_40F71CC = 1;
  }
  path = 0LL;
  component = 0LL;
  name = 0LL;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    p__8__1 = &this->fields.__8__1;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    v22 = (Il2CppObject *)sub_B170CC(BattleServantParamComponent___c__DisplayClass120_0_TypeInfo, method, v2, v3, v4);
    System_Object___ctor(v22, 0LL);
    p__8__1 = &this->fields.__8__1;
    this->fields.__8__1 = (struct BattleServantParamComponent___c__DisplayClass120_0_o *)v22;
    sub_B16F98(&this->fields.__8__1, v22);
    effectId = this->fields.effectId;
    if ( effectId < 1 )
      return 0;
    if ( !_4__this )
      goto LABEL_76;
    classIconEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)_4__this->fields.classIconEffectDict;
    if ( !classIconEffectDict )
      goto LABEL_76;
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           classIconEffectDict,
           effectId,
           (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    {
      return 0;
    }
    if ( _4__this->fields.currentClassIconAuraEffectPriority < this->fields.priority )
    {
      BattleServantParamComponent__DestroyAllEffect(_4__this, _4__this->fields.classIconEffectDict, 0, 0LL);
      _4__this->fields.currentClassIconAuraEffectPriority = this->fields.priority;
    }
    if ( !*p__8__1 )
      goto LABEL_76;
    (*p__8__1)->fields.isLoading = 1;
    v30 = this->fields.effectId;
    _8__1 = (Il2CppObject *)this->fields.__8__1;
    v32 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v26, v27, v28, v29);
    System_Action___ctor(
      v32,
      _8__1,
      Method_BattleServantParamComponent___c__DisplayClass120_0__CoAddClassIconEffect_b__0__,
      0LL);
    perf = _4__this->fields.perf;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    }
    BattleEffectUtility__LoadEffectAssetIfNotYet(v30, v32, perf, 0LL);
  }
  if ( !*p__8__1 )
    goto LABEL_76;
  if ( (*p__8__1)->fields.isLoading )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_B16F98(p__2__current, 0LL);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  if ( !_4__this )
    goto LABEL_76;
  servantData = this->fields.servantData;
  if ( !servantData )
    goto LABEL_76;
  v37 = _4__this->fields.perf;
  if ( !v37 )
    goto LABEL_76;
  ServantGameObject = BattlePerformance__getServantGameObject(v37, servantData->fields.uniqueId, 0LL);
  if ( !ServantGameObject )
    ServantGameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
  v39 = this->fields.effectId;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  EffectObject = (UnityEngine_Object_o *)BattleEffectUtility__getEffectObject(v39, ServantGameObject, 1, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(EffectObject, 0LL, 0LL) )
    return 0;
  if ( !EffectObject )
    goto LABEL_76;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EffectObject, 0LL);
  if ( !_4__this->fields.clsIconComponent )
    goto LABEL_76;
  v42 = transform;
  v43 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)_4__this->fields.clsIconComponent, 0LL);
  if ( !v42 )
    goto LABEL_76;
  UnityEngine_Transform__set_parent(v42, v43, 0LL);
  v44 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EffectObject, 0LL);
  *(UnityEngine_Vector3_o *)&v45 = UnityEngine_Vector3__get_one(0LL);
  if ( !v44 )
    goto LABEL_76;
  UnityEngine_Transform__set_localScale(v44, *(UnityEngine_Vector3_o *)&v45, 0LL);
  v48 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EffectObject, 0LL);
  *(UnityEngine_Vector3_o *)&v49 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v48 )
    goto LABEL_76;
  UnityEngine_Transform__set_localPosition(v48, *(UnityEngine_Vector3_o *)&v49, 0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectObject, 1, 0LL);
  if ( UnityEngine_GameObject__TryGetComponent_UIButton_(
         (UnityEngine_GameObject_o *)EffectObject,
         &component,
         (const MethodInfo_19D1C80 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
  {
    if ( !component )
      goto LABEL_76;
    CommonEffectComponent__Init((CommonEffectComponent_o *)component, 0, 0, 0LL);
  }
  v52 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)_4__this->fields.classIconEffectDict;
  if ( !v52 )
    goto LABEL_76;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          v52,
          this->fields.effectId,
          (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    v53 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)_4__this->fields.classIconEffectDict;
    if ( !v53 )
      goto LABEL_76;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v53,
      this->fields.effectId,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)EffectObject,
      (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
  }
  commandSpellEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)_4__this->fields.commandSpellEffectDict;
  if ( !commandSpellEffectDict )
LABEL_76:
    sub_B170D4();
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          commandSpellEffectDict,
          this->fields.effectId,
          (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EffectMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 Master_WarQuestSelectionMaster,
                 this->fields.effectId,
                 (const MethodInfo_266F388 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( Entity )
      {
        longName = Entity->fields.longName;
        if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        }
        BattleEffectUtility__GetBattleCommonEffectPathAndName(longName, &path, &name, 0LL);
        v58 = _4__this->fields.perf;
        if ( v58 )
        {
          data = v58->fields.data;
          if ( data )
          {
            v60 = path;
            battleGenderType = data->fields.battleGenderType;
            v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &battleGenderType);
            v62 = System_String__Format((System_String_o *)StringLiteral_18105/*"ef_commandaura_{0}"*/, v61, 0LL);
            if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            }
            Manager__loadBattleCommonEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                        v60,
                                                                        v62,
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
            v65 = (UnityEngine_Component_o *)_4__this->fields.facetex;
            if ( v65 )
            {
              v66 = UnityEngine_Component__get_transform(v65, 0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v67 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                  (UILabel_o *)Manager__loadBattleCommonEffect,
                                                  v66,
                                                  (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
              GameObjectExtensions__ResetTransform(v67, 0LL);
              if ( v67 )
              {
                UnityEngine_GameObject__SetActive(v67, !_4__this->fields.isHideFaceTexture, 0LL);
                v68 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)_4__this->fields.commandSpellEffectDict;
                if ( v68 )
                {
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    v68,
                    this->fields.effectId,
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)v67,
                    (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_BattleServantParamComponent__CoAddClassIconEffect_d__120_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v8; // x20
  bool result; // w0
  struct BattleCallBackBase_o *callBack; // x0

  if ( (byte_40F71CD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_40F71CD = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callBack = this->fields.callBack;
    this->fields.__1__state = -1;
    if ( !callBack )
      sub_B170D4();
    ((void (__fastcall *)(struct BattleCallBackBase_o *, const char *))callBack->klass[1]._1.gc_desc)(
      callBack,
      callBack->klass[1]._1.name);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    waitTime = this->fields.waitTime;
    v8 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
    UnityEngine_WaitForSeconds___ctor(v8, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v8;
    sub_B16F98(&this->fields.__2__current, v8);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleServantParamComponent__DelayMethod_d__111_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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

  if ( (byte_40F71CB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, method);
    byte_40F71CB = 1;
  }
  effectDict = this->fields.effectDict;
  if ( !effectDict )
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)effectDict,
    this->fields.id,
    (const MethodInfo_2DEAD98 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
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
  int32_t _1__state; // w8
  Il2CppObject *v4; // x0
  bool result; // w0
  struct BattleServantParamComponent_o *_4__this; // x20
  BattleServantData_o *data; // x0
  BattleBuffData_o *BuffData; // x0
  _BOOL8 updated; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct BattleServantSkillIConComponent_array *skillIcon; // x19
  int max_length; // w8
  int v14; // w22
  char v15; // w21
  BattleServantSkillIConComponent_o *v16; // x0
  BattleServantData_o *v17; // x0
  BattleBuffData_o *v18; // x0
  BattleBuffData_SkillRankChangeData_o *skillChangeData; // x0
  int v20; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F71CE & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    byte_40F71CE = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    data = _4__this->fields.data;
    if ( !data )
      goto LABEL_22;
    BuffData = BattleServantData__get_BuffData(data, 0LL);
    if ( !BuffData )
      goto LABEL_22;
    BattleBuffData__UpdateSkillRelationBuff(BuffData, 0LL);
    skillIcon = _4__this->fields.skillIcon;
    if ( !skillIcon )
      goto LABEL_22;
    max_length = skillIcon->max_length;
    if ( max_length < 1 )
      return 0;
    v14 = 0;
    v15 = 0;
    do
    {
      if ( v14 >= (unsigned int)max_length )
      {
        sub_B17100(updated, v10, v11);
        sub_B170A0();
      }
      v16 = skillIcon->m_Items[v14];
      if ( !v16 )
        goto LABEL_22;
      updated = BattleServantSkillIConComponent__UpdateSkillRankUpEffect(v16, 0LL);
      max_length = skillIcon->max_length;
      ++v14;
      v15 |= updated;
    }
    while ( v14 < max_length );
    if ( (v15 & 1) == 0 )
      return 0;
    v17 = _4__this->fields.data;
    if ( !v17
      || (v18 = BattleServantData__get_BuffData(v17, 0LL)) == 0LL
      || (skillChangeData = v18->fields.skillChangeData) == 0LL )
    {
LABEL_22:
      sub_B170D4();
    }
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter(skillChangeData, 0, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v20 = 0;
    v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
    this->fields.__2__current = v4;
    sub_B16F98(&this->fields.__2__current, v4);
    result = 1;
    this->fields.__1__state = 1;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__81_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleServantParamComponent_o *_4__this; // x20
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *sideEffectShowQueue; // x0
  Mono_Net_CFNetwork_GetProxyData_o *ProxyData___Dequeue; // x0
  BattleActionData_BuffData_o *v10; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v12; // x22
  int32_t statusEffectId; // w23
  float x; // s10
  float y; // s8
  float z; // s9
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  BattleServantParamComponent_c *v21; // x0
  float SideEffectShowWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v23; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F71CF & 1) == 0 )
  {
    sub_B16FFC(&BattleEffectUtility_TypeInfo, method);
    sub_B16FFC(&BattleServantParamComponent_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__get_Count__, v5);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v6);
    byte_40F71CF = 1;
  }
  if ( this->fields.__1__state >= 2u )
    return 0;
  _4__this = this->fields.__4__this;
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_18;
  sideEffectShowQueue = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)_4__this->fields.sideEffectShowQueue;
  if ( !sideEffectShowQueue )
    goto LABEL_18;
  if ( !sideEffectShowQueue->fields._size )
  {
    result = 0;
    _4__this->fields.isShowingSideEffect = 0;
    return result;
  }
  ProxyData___Dequeue = System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                          sideEffectShowQueue,
                          (const MethodInfo_2B166B0 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__);
  if ( !_4__this->fields.clsIconComponent
    || (v10 = (BattleActionData_BuffData_o *)ProxyData___Dequeue,
        transform = UnityEngine_Component__get_transform(
                      (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                      0LL),
        !v10) )
  {
LABEL_18:
    sub_B170D4();
  }
  v12 = transform;
  statusEffectId = v10->fields.statusEffectId;
  x = _4__this->fields.sideEffectScl.fields.x;
  y = _4__this->fields.sideEffectScl.fields.y;
  z = _4__this->fields.sideEffectScl.fields.z;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  v26.fields.x = x;
  v26.fields.y = y;
  v26.fields.z = z;
  BattleEffectUtility__showSideEffect(v12, statusEffectId, v26, 0LL);
  BattleServantParamComponent__popBuffLabel(_4__this, v10, 0LL);
  v21 = BattleServantParamComponent_TypeInfo;
  if ( (BYTE3(BattleServantParamComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v21 = BattleServantParamComponent_TypeInfo;
  }
  SideEffectShowWaitTime = v21->static_fields->SideEffectShowWaitTime;
  v23 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, v17, v18, v19, v20);
  UnityEngine_WaitForSeconds___ctor(v23, SideEffectShowWaitTime, 0LL);
  this->fields.__2__current = (Il2CppObject *)v23;
  p__2__current = &this->fields.__2__current;
  sub_B16F98(p__2__current, v23);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleServantParamComponent__showSideEffectList_d__107_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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