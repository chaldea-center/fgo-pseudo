void __fastcall BattleServantParamComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E5712 & 1) == 0 )
  {
    sub_1B00CCC(&BattleServantParamComponent_TypeInfo, v1);
    byte_48E5712 = 1;
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_Queue_T__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v15; // d1
  float z; // s2
  System_Collections_Generic_Dictionary_int__object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_Dictionary_int__object__o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_48E5711 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, method);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v3);
    sub_1B00CCC(&UnityEngine_GameObject___TypeInfo, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__, v5);
    sub_1B00CCC(&System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo, v6);
    byte_48E5711 = 1;
  }
  v7 = (struct UnityEngine_GameObject_array *)sub_1B00D74(UnityEngine_GameObject___TypeInfo, 1LL);
  this->fields.effectobj = v7;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.effectobj, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_Queue_T__o *)sub_1B00F18(System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v10,
    (const MethodInfo_3532CE0 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__);
  this->fields.sideEffectShowQueue = (struct System_Collections_Generic_Queue_BattleActionData_BuffData__o *)v10;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.sideEffectShowQueue, (int32_t)v10, v11, v12);
  if ( !byte_48DD9F6 )
  {
    sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v13);
    byte_48DD9F6 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v15 = *(_QWORD *)&static_fields->oneVector.fields.x;
  z = static_fields->oneVector.fields.z;
  this->fields.sideEffectLabelWidth = 100.0;
  this->fields.GRAY = (struct UnityEngine_Color_o)xmmword_B70310;
  *(_QWORD *)&this->fields.sideEffectScl.fields.x = v15;
  this->fields.sideEffectScl.fields.z = z;
  this->fields.isActiveHpBar = 1;
  v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v17,
    (const MethodInfo_3035B58 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.classIconEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v17;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.classIconEffectDict, (int32_t)v17, v18, v19);
  v20 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v20,
    (const MethodInfo_3035B58 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.commandSpellEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v20;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.commandSpellEffectDict, (int32_t)v20, v21, v22);
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
  UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_48E570F & 1) == 0 )
  {
    sub_1B00CCC(&BattleServantParamComponent__CoAddClassIconEffect_d__122_TypeInfo, *(_QWORD *)&effectId);
    byte_48E570F = 1;
  }
  v9 = sub_1B00F18(BattleServantParamComponent__CoAddClassIconEffect_d__122_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)this, v10, v11);
  *(_DWORD *)(v9 + 32) = effectId;
  *(_DWORD *)(v9 + 48) = priority;
  *(_QWORD *)(v9 + 64) = servantData;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v9 + 64), (int32_t)servantData, v12, v13);
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
    sub_1B00F28(0LL, method);
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
  UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__DelayMethod(
        BattleServantParamComponent_o *this,
        float waitTime,
        BattleCallBackBase_o *callBack,
        const MethodInfo *method)
{
  __int64 v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_48E5708 & 1) == 0 )
  {
    sub_1B00CCC(&BattleServantParamComponent__DelayMethod_d__113_TypeInfo, callBack);
    byte_48E5708 = 1;
  }
  v6 = sub_1B00F18(BattleServantParamComponent__DelayMethod_d__113_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(float *)(v6 + 32) = waitTime;
  *(_QWORD *)(v6 + 40) = callBack;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v6 + 40), (int32_t)callBack, v7, v8);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleServantParamComponent__DeleteSkillRankUpEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  struct BattleServantSkillIConComponent_array *skillIcon; // x19
  int max_length; // w8
  unsigned int v4; // w20

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
        sub_1B00F30(this, method);
      this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
      if ( !this )
        break;
      BattleServantSkillIConComponent__DeleteRankUpEffect((BattleServantSkillIConComponent_o *)this, method);
      max_length = skillIcon->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1B00F28(this, method);
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
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  const MethodInfo *v10; // x4
  __int64 v11; // x8
  System_Int32_array *v12; // x21
  unsigned __int64 v13; // x22
  bool v14; // w20

  if ( (byte_48E570D & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, effectDict);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    byte_48E570D = 1;
  }
  IsNullOrEmpty = (System_Int32_array *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)effectDict, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !effectDict
      || (Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                   (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
                   (const MethodInfo_30361EC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__),
          (IsNullOrEmpty = System_Linq_Enumerable__ToArray_int_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                             (const MethodInfo_2D97524 *)Method_System_Linq_Enumerable_ToArray_int___)) == 0LL) )
    {
      sub_1B00F28(IsNullOrEmpty, v8);
    }
    v11 = *(_QWORD *)&IsNullOrEmpty->max_length;
    v12 = IsNullOrEmpty;
    if ( (int)v11 >= 1 )
    {
      v13 = 0LL;
      v14 = forceDestroy;
      do
      {
        if ( v13 >= (unsigned int)v11 )
          sub_1B00F30(IsNullOrEmpty, v8);
        BattleServantParamComponent__DestroyEffectObject(
          (BattleServantParamComponent_o *)IsNullOrEmpty,
          effectDict,
          v12->m_Items[v13 + 1],
          v14,
          v10);
        LODWORD(v11) = v12->max_length;
        ++v13;
      }
      while ( (__int64)v13 < (int)v11 );
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x19
  Il2CppObject *Item; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject **v20; // x20
  System_Collections_ICollection_o *v21; // x0
  Il2CppObject *v22; // x20
  System_Action_o *v23; // x21
  Il2CppObject *v24; // x21
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_48E570E & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, effectDict);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v10);
    sub_1B00CCC(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, v11);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v12);
    sub_1B00CCC(&Method_BattleServantParamComponent___c__DisplayClass120_0__DestroyEffectObject_b__0__, v13);
    sub_1B00CCC(&BattleServantParamComponent___c__DisplayClass120_0_TypeInfo, v14);
    byte_48E570E = 1;
  }
  component = 0LL;
  v15 = sub_1B00F18(BattleServantParamComponent___c__DisplayClass120_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_19;
  *(_QWORD *)(v15 + 16) = effectDict;
  v20 = (Il2CppObject **)(v15 + 16);
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)effectDict, v18, v19);
  v21 = *(System_Collections_ICollection_o **)(v15 + 16);
  *(_DWORD *)(v15 + 24) = id;
  if ( !BasicHelper__IsNullOrEmpty(v21, 0LL) )
  {
    Item = *v20;
    if ( !*v20 )
      goto LABEL_19;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)Item,
           *(_DWORD *)(v15 + 24),
           (const MethodInfo_3036720 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    {
      if ( !forceDestroy )
      {
        Item = *v20;
        if ( !*v20 )
          goto LABEL_19;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 (System_Collections_Generic_Dictionary_int__object__o *)Item,
                 *(_DWORD *)(v15 + 24),
                 (const MethodInfo_303648C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
        if ( !Item )
          goto LABEL_19;
        if ( UnityEngine_GameObject__TryGetComponent_object_(
               (UnityEngine_GameObject_o *)Item,
               &component,
               (const MethodInfo_2DAF098 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
        {
          v22 = component;
          v23 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
          System_Action___ctor(
            v23,
            (Il2CppObject *)v15,
            Method_BattleServantParamComponent___c__DisplayClass120_0__DestroyEffectObject_b__0__,
            0LL);
          if ( v22 )
          {
            ((void (__fastcall *)(Il2CppObject *, __int64, System_Action_o *, Il2CppMethodPointer))v22->klass->vtable[8].method)(
              v22,
              1LL,
              v23,
              v22->klass->vtable[9].methodPtr);
            return;
          }
LABEL_19:
          sub_1B00F28(Item, v17);
        }
      }
      Item = *v20;
      if ( !*v20 )
        goto LABEL_19;
      v24 = System_Collections_Generic_Dictionary_int__object___get_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)Item,
              *(_DWORD *)(v15 + 24),
              (const MethodInfo_303648C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_68077656((UnityEngine_Object_o *)v24, 0LL);
      Item = *v20;
      if ( !*v20 )
        goto LABEL_19;
      System_Collections_Generic_Dictionary_int__object___Remove(
        (System_Collections_Generic_Dictionary_int__object__o *)Item,
        *(_DWORD *)(v15 + 24),
        (const MethodInfo_30379B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
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
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v17; // [xsp+20h] [xbp-60h] BYREF
  Il2CppObject *component; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_48E5710 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__, effectDict);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__, v6);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__,
      v7);
    sub_1B00CCC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v8);
    sub_1B00CCC(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, v9);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v10);
    this = (BattleServantParamComponent_o *)sub_1B00CCC(
                                              &Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__,
                                              v11);
    byte_48E5710 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  component = 0LL;
  if ( !effectDict
    || (this = (BattleServantParamComponent_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                  (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
                                                  (const MethodInfo_303633C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
    sub_1B00F28(this, effectDict);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v16,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_36C51AC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v17,
            (const MethodInfo_3182110 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    currentValue = v17.fields._currentValue;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)currentValue, 0LL, 0LL);
    if ( !v13 )
    {
      if ( !currentValue )
        sub_1B00F28(v13, v14);
      if ( UnityEngine_GameObject__TryGetComponent_object_(
             (UnityEngine_GameObject_o *)currentValue,
             &component,
             (const MethodInfo_2DAF098 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentValue, 1, 0LL);
        if ( isStart )
        {
          if ( !component )
            sub_1B00F28(0LL, v15);
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)component, 0LL);
        }
        else
        {
          if ( !component )
            sub_1B00F28(0LL, v15);
          ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))component->klass->vtable[9].method)(
            component,
            0LL,
            0LL,
            component->klass->vtable[10].methodPtr);
        }
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentValue, isStart, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v17,
    (const MethodInfo_318210C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
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

  if ( (byte_48E56FE & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E56FE = 1;
  }
  nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        sub_1B00F28(isTDSeraled, v9);
      BattleNextTDgaugeComponent__setInitGauge(v5, nexttpturn, maxtpturn, isTDSeraled, 0LL);
    }
  }
}


void __fastcall BattleServantParamComponent__OnClick(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *target; // x20
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  struct BattleServantData_o *data; // x8
  UnityEngine_GameObject_o *v10; // x19
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  int32_t uniqueId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_48E56DD & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v3);
    sub_1B00CCC(&StringLiteral_21946/*"onClickServant"*/, v4);
    byte_48E56DD = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) && this->fields.uniqueID != -1 )
  {
    data = this->fields.data;
    if ( data )
    {
      v10 = this->fields.target;
      uniqueId = data->fields.uniqueId;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &uniqueId, v6, v7, v8);
      if ( !v10 )
        sub_1B00F28(v11, v12);
      UnityEngine_GameObject__SendMessage_68059028(v10, (System_String_o *)StringLiteral_21946/*"onClickServant"*/, v11, 0LL);
    }
  }
}


void __fastcall BattleServantParamComponent__OnCompleteShiftGaugeChangeHp(
        BattleServantParamComponent_o *this,
        BattleAction_BasePlayShiftGauge_o *playShiftGauge,
        const MethodInfo *method)
{
  if ( !playShiftGauge )
    sub_1B00F28(this, 0LL);
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
  __int64 v7; // x1
  BattleHpGaugeBarComponent_o *v8; // x0

  if ( (byte_48E5701 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&nowHp);
    byte_48E5701 = 1;
  }
  BattleServantParamComponent__updateHplabel(this, nowHp, this->fields.shiftGaugeMaxHp, 0, v3);
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL) )
  {
    v8 = this->fields.hpGauge;
    if ( !v8
      || (BattleHpGaugeBarComponent__updateDamageGauge(v8, (float)nowHp / (float)this->fields.shiftGaugeMaxHp, 0LL),
          (v8 = this->fields.hpGauge) == 0LL) )
    {
      sub_1B00F28(v8, v7);
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
  __int64 v8; // x1
  BattleServantHpShiftComponent_o *v9; // x0
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_48E56FC & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_48E56FC = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            0LL),
          (v9 = this->fields.hpShift) == 0LL) )
    {
      sub_1B00F28(v9, v8);
    }
    BattleServantHpShiftComponent__UpdateIcon(v9, index, 1, 1, 0LL);
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
  __int64 v9; // x1
  float result; // s0
  BattleServantHpShiftComponent_o *v11; // x0
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_48E56FA & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_48E56FA = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL);
  result = 0.0;
  if ( v8 )
  {
    v11 = this->fields.hpShift;
    if ( !v11 )
      sub_1B00F28(0LL, v9);
    BattleServantHpShiftComponent__PlayShiftEffectGeneral(v11, index, effectData, this, &nextAnimationTime, 0LL, 0LL);
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
  UnityEngine_Object_o *hpShift; // x22
  __int64 v14; // x1
  BattleServantHpShiftComponent_o *v15; // x0
  Il2CppObject *v16; // x21
  System_Action_int__bool__bool__o *v17; // x22
  BattleCallBack_int__bool__bool__o *v18; // x21
  BattleServantParamComponent_o *v19; // x0
  const MethodInfo *v20; // x2
  System_Collections_IEnumerator_o *v21; // x0
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_48E56FB & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_int__bool__bool__TypeInfo, *(_QWORD *)&index);
    sub_1B00CCC(&Method_BattleCallBack_int__bool__bool___ctor__, v9);
    sub_1B00CCC(&BattleCallBack_int__bool__bool__TypeInfo, v10);
    sub_1B00CCC(&Method_BattleServantHpShiftComponent_UpdateIcon__, v11);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v12);
    byte_48E56FB = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
  {
    v15 = this->fields.hpShift;
    if ( !v15
      || (BattleServantHpShiftComponent__UpdateIconActive(v15, index, 1, 0LL), (v15 = this->fields.hpShift) == 0LL) )
    {
      sub_1B00F28(v15, v14);
    }
    BattleServantHpShiftComponent__PlayShiftEffectGeneral(v15, index, effectData, this, &nextAnimationTime, 0LL, 0LL);
    v16 = (Il2CppObject *)this->fields.hpShift;
    v17 = (System_Action_int__bool__bool__o *)sub_1B00F18(System_Action_int__bool__bool__TypeInfo);
    System_Action_int__bool__bool____ctor(v17, v16, Method_BattleServantHpShiftComponent_UpdateIcon__, 0LL);
    v18 = (BattleCallBack_int__bool__bool__o *)sub_1B00F18(BattleCallBack_int__bool__bool__TypeInfo);
    BattleCallBack_int__bool__bool____ctor(
      v18,
      index,
      0,
      1,
      (System_Action_T1__T2__T3__o *)v17,
      (const MethodInfo_2F5F5CC *)Method_BattleCallBack_int__bool__bool___ctor__);
    v21 = BattleServantParamComponent__DelayMethod(v19, delayTime, (BattleCallBackBase_o *)v18, v20);
    UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, v21, 0LL);
  }
}


void __fastcall BattleServantParamComponent__RemoveEffectClearRankUpBuff(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  struct BattleServantSkillIConComponent_array *skillIcon; // x19
  int max_length; // w8
  unsigned int v4; // w20

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
        sub_1B00F30(this, method);
      this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
      if ( !this )
        break;
      BattleServantSkillIConComponent__RemoveEffectClearRankUpBuff((BattleServantSkillIConComponent_o *)this, method);
      max_length = skillIcon->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1B00F28(this, method);
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
    sub_1B00F28(showBuffComponent, paramPosData);
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
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_int__o *v24; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x22
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x23
  _BOOL8 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x4
  System_Collections_IEnumerator_o *v32; // x0
  UnityEngine_Coroutine_o *started; // x0
  __int64 v34; // x1
  _BOOL8 v35; // x0
  __int64 monitor_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  __int64 v40; // x1
  System_Collections_Generic_Dictionary_int__object__o *classIconEffectDict; // x0
  int32_t v42; // w20
  _BOOL8 v43; // x0
  const MethodInfo *v44; // x4
  BattleServantParamComponent_o *v45; // x0
  const MethodInfo *v46; // x4
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+40h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_48E570C & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_AuraEffectMaster___, servantData);
    sub_1B00CCC(&DataManager_TypeInfo, v5);
    sub_1B00CCC(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Contains__, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v19);
    this = (BattleServantParamComponent_o *)sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v20);
    byte_48E570C = 1;
  }
  memset(&v50, 0, sizeof(v50));
  entity = 0LL;
  memset(&v48, 0, sizeof(v48));
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
    BattleServantParamComponent__DestroyAllEffect(v4, v4->fields.classIconEffectDict, 0, v22);
    BattleServantParamComponent__DestroyAllEffect(v4, v4->fields.commandSpellEffectDict, 0, v23);
  }
  v24 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleServantParamComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_AuraEffectMaster___);
  if ( !v4->fields.classIconEffectDict )
    goto LABEL_38;
  v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  this = (BattleServantParamComponent_o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                            (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.classIconEffectDict,
                                            (const MethodInfo_30361DC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
  if ( (int)this <= 0 )
    v4->fields.currentClassIconAuraEffectPriority = 0;
  if ( !ClassIconEffectBuffList )
    goto LABEL_38;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    (System_Collections_Generic_List_object__o *)ClassIconEffectBuffList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v50 = v47;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v50,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v26 )
      break;
    current = v50.fields._current;
    if ( !v50.fields._current )
      sub_1B00F28(v26, v27);
    if ( !v25 )
      sub_1B00F28(v26, v27);
    v29 = DataMasterBase_object__object__int___TryGetEntity(
            v25,
            &entity,
            (int32_t)v50.fields._current[21].monitor,
            (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    if ( v29 )
    {
      if ( !entity )
        sub_1B00F28(v29, v30);
      v32 = BattleServantParamComponent__CoAddClassIconEffect(
              v4,
              HIDWORD(entity[1].klass),
              (int32_t)entity[1].monitor,
              servantData,
              v31);
      started = UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)v4, v32, 0LL);
      if ( !v24 )
        sub_1B00F28(started, v34);
      v35 = System_Collections_Generic_List_int___Contains(
              v24,
              (int32_t)current[21].monitor,
              (const MethodInfo_33A4D24 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v35 )
      {
        monitor_low = LODWORD(current[21].monitor);
        items = v24->fields._items;
        v38 = Method_System_Collections_Generic_List_int__Add__;
        ++v24->fields._version;
        if ( !items )
          sub_1B00F28(v35, monitor_low);
        size = v24->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v24,
            monitor_low,
            *(const MethodInfo_33A49AC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v24->fields._size = size + 1;
          items->m_Items[size + 1] = monitor_low;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v24 )
LABEL_38:
    sub_1B00F28(this, servantData);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    v24,
    (const MethodInfo_33A5480 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v48 = v47;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v48,
            (const MethodInfo_313A14C *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    classIconEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.classIconEffectDict;
    if ( !classIconEffectDict )
      sub_1B00F28(0LL, v40);
    v42 = (int32_t)v48.fields._current;
    v43 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
            classIconEffectDict,
            (int32_t)v48.fields._current,
            (const MethodInfo_3036720 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    if ( !v43 )
    {
      BattleServantParamComponent__DestroyEffectObject(
        (BattleServantParamComponent_o *)v43,
        v4->fields.classIconEffectDict,
        v42,
        0,
        v44);
      BattleServantParamComponent__DestroyEffectObject(v45, v4->fields.commandSpellEffectDict, v42, 0, v46);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v48,
    (const MethodInfo_313A148 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void __fastcall BattleServantParamComponent__UpdateNameLabel(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nameLabel; // x20
  __int64 v4; // x1
  BattleServantData_o *data; // x0
  UILabel_o *v6; // x19

  if ( (byte_48E570A & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E570A = 1;
  }
  if ( this->fields.data )
  {
    nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( !data
        || (v6 = this->fields.nameLabel, data = (BattleServantData_o *)BattleServantData__getServantName(data, 0LL), !v6) )
      {
        sub_1B00F28(data, v4);
      }
      UILabel__set_text(v6, (System_String_o *)data, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__UpdateNpImmediately(
        BattleServantParamComponent_o *this,
        int32_t np,
        const MethodInfo *method)
{
  UnityEngine_Object_o *npcomp; // x21
  __int64 v6; // x1
  BattleNpGaugeSystemComponent_o *v7; // x0

  if ( (byte_48E56E7 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&np);
    byte_48E56E7 = 1;
  }
  npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL) )
  {
    v7 = this->fields.npcomp;
    if ( !v7 )
      sub_1B00F28(0LL, v6);
    BattleNpGaugeSystemComponent__setNowParam(v7, np, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__UpdateShiftChange(
        BattleServantParamComponent_o *this,
        int32_t curGaugeIndex,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpChange; // x21
  __int64 v6; // x1
  BattleServantChangeBarComponent_o *v7; // x0

  if ( (byte_48E56FD & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&curGaugeIndex);
    byte_48E56FD = 1;
  }
  hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpChange, 0LL, 0LL) )
  {
    v7 = this->fields.hpChange;
    if ( !v7 )
      sub_1B00F28(0LL, v6);
    BattleServantChangeBarComponent__setBarType(v7, 1, curGaugeIndex, 0LL);
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
  System_Collections_Hashtable_o *v30; // x22
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x0
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x0
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  char v47[4]; // [xsp+8h] [xbp-78h] BYREF
  float v48; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v49; // [xsp+18h] [xbp-68h] BYREF
  int32_t v50; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_48E5700 & 1) == 0 )
  {
    sub_1B00CCC(&bool_TypeInfo, *(_QWORD *)&fromHp);
    sub_1B00CCC(&System_Collections_Hashtable_TypeInfo, v13);
    sub_1B00CCC(&int_TypeInfo, v14);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v15);
    sub_1B00CCC(&float_TypeInfo, v16);
    sub_1B00CCC(&StringLiteral_19387/*"from"*/, v17);
    sub_1B00CCC(&StringLiteral_19954/*"ignoretimescale"*/, v18);
    sub_1B00CCC(&StringLiteral_23574/*"time"*/, v19);
    sub_1B00CCC(&StringLiteral_21972/*"oncompleteparams"*/, v20);
    sub_1B00CCC(&StringLiteral_21979/*"onupdate"*/, v21);
    sub_1B00CCC(&StringLiteral_9862/*"OnUpdateShiftGaugeChangeHp"*/, v22);
    sub_1B00CCC(&StringLiteral_9766/*"OnCompleteShiftGaugeChangeHp"*/, v23);
    sub_1B00CCC(&StringLiteral_23614/*"to"*/, v24);
    sub_1B00CCC(&StringLiteral_21971/*"oncomplete"*/, v25);
    sub_1B00CCC(&iTween_TypeInfo, v26);
    byte_48E5700 = 1;
  }
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v28 = (BattleHpGaugeBarComponent_o *)UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL);
  if ( ((unsigned __int8)v28 & 1) != 0 )
  {
    v28 = this->fields.hpGauge;
    if ( !v28 )
      goto LABEL_13;
    BattleHpGaugeBarComponent__setInitValue(v28, fromHp, maxHp, 0LL);
  }
  this->fields.shiftGaugeMaxHp = maxHp;
  if ( !playShiftGauge
    || (playShiftGauge->fields._ChangeToHp_k__BackingField = toHp,
        v30 = (System_Collections_Hashtable_o *)sub_1B00F18(System_Collections_Hashtable_TypeInfo),
        System_Collections_Hashtable___ctor_60905040(v30, 0LL),
        v50 = fromHp,
        v28 = (BattleHpGaugeBarComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v31, v32, v33),
        !v30) )
  {
LABEL_13:
    sub_1B00F28(v28, v29);
  }
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, BattleHpGaugeBarComponent_o *, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_19387/*"from"*/,
    v28,
    v30->klass->vtable._24_Clear.methodPtr);
  v49 = toHp;
  v37 = j_il2cpp_value_box_0(int_TypeInfo, &v49, v34, v35, v36);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_23614/*"to"*/,
    v37,
    v30->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_21979/*"onupdate"*/,
    StringLiteral_9862/*"OnUpdateShiftGaugeChangeHp"*/,
    v30->klass->vtable._24_Clear.methodPtr);
  v48 = time;
  v41 = j_il2cpp_value_box_0(float_TypeInfo, &v48, v38, v39, v40);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_23574/*"time"*/,
    v41,
    v30->klass->vtable._24_Clear.methodPtr);
  v47[0] = 1;
  v45 = j_il2cpp_value_box_0(bool_TypeInfo, v47, v42, v43, v44);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_19954/*"ignoretimescale"*/,
    v45,
    v30->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_21971/*"oncomplete"*/,
    StringLiteral_9766/*"OnCompleteShiftGaugeChangeHp"*/,
    v30->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, BattleAction_BasePlayShiftGauge_o *, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_21972/*"oncompleteparams"*/,
    playShiftGauge,
    v30->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__ValueTo(gameObject, v30, 0LL);
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
  __int64 defaultShortNameLabelWidth; // x1
  BattleServantData_o *data; // x0
  int32_t EnemyNameEffect; // w0
  struct UnityEngine_GameObject_o **p_enemyNameEffectPrefab; // x20
  UnityEngine_Object_o *enemyNameEffectPrefab; // x22
  int32_t v14; // w21
  UnityEngine_Object_o *v15; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *NameEffectPath; // x21
  AssetData_o *AssetStorage; // x0
  Il2CppObject *v19; // x21
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  UILabel_o *v24; // x20
  __int64 v25; // x8
  float v26; // s8
  float v27; // s1
  float v28; // s0
  float v29; // s2

  if ( (byte_48E570B & 1) == 0 )
  {
    sub_1B00CCC(&Method_AssetData_GetObject_GameObject____74577936, method);
    sub_1B00CCC(&AssetManager_TypeInfo, v3);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject____74661840, v4);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    sub_1B00CCC(&ServantAssetLoadManager_TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_16894/*"battle_name"*/, v7);
    byte_48E570B = 1;
  }
  if ( this->fields.data )
  {
    shortNameLabel = (UnityEngine_Object_o *)this->fields.shortNameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(shortNameLabel, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_44;
      EnemyNameEffect = BattleServantData__getEnemyNameEffect(data, 0LL);
      p_enemyNameEffectPrefab = &this->fields.enemyNameEffectPrefab;
      enemyNameEffectPrefab = (UnityEngine_Object_o *)this->fields.enemyNameEffectPrefab;
      v14 = EnemyNameEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(enemyNameEffectPrefab, 0LL, 0LL) )
      {
        v15 = (UnityEngine_Object_o *)*p_enemyNameEffectPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_68077656(v15, 0LL);
      }
      if ( v14 )
      {
        data = (BattleServantData_o *)this->fields.shortNameLabel;
        if ( !data )
          goto LABEL_44;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
        GameObjectExtensions__ResetLocalScale(gameObject, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v14, 0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetStorage = AssetManager__getAssetStorage(NameEffectPath, 0LL);
        v19 = AssetStorage
            ? AssetData__GetObject_object__47470892(
                AssetStorage,
                (System_String_o *)StringLiteral_16894/*"battle_name"*/,
                (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936)
            : 0LL;
        data = (BattleServantData_o *)this->fields.shortNameLabel;
        if ( !data )
          goto LABEL_44;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v21 = UnityEngine_Object__Instantiate_object__48061460(
                v19,
                transform,
                (const MethodInfo_2DD5C14 *)Method_UnityEngine_Object_Instantiate_GameObject____74661840);
        *p_enemyNameEffectPrefab = (struct UnityEngine_GameObject_o *)v21;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.enemyNameEffectPrefab, (int32_t)v21, v22, v23);
      }
      data = this->fields.data;
      if ( data )
      {
        v24 = this->fields.shortNameLabel;
        data = (BattleServantData_o *)BattleServantData__getServantShortName(data, 0LL);
        if ( v24 )
        {
          UILabel__set_text(v24, (System_String_o *)data, 0LL);
          defaultShortNameLabelWidth = (unsigned int)this->fields.defaultShortNameLabelWidth;
          data = (BattleServantData_o *)this->fields.shortNameLabel;
          if ( (int)defaultShortNameLabelWidth <= 0 )
          {
            if ( !data )
              goto LABEL_44;
            defaultShortNameLabelWidth = LODWORD(data->fields.transformUserSvtId);
            this->fields.defaultShortNameLabelWidth = defaultShortNameLabelWidth;
          }
          else if ( !data )
          {
            goto LABEL_44;
          }
          v25 = *(_QWORD *)&data->fields.displayType;
          if ( !v25 )
            goto LABEL_44;
          v26 = (float)(data->fields.criticalRate * *(_DWORD *)(v25 + 16));
          if ( (float)(int)defaultShortNameLabelWidth >= v26 )
          {
            UIWidget__set_width((UIWidget_o *)data, defaultShortNameLabelWidth, 0LL);
            data = (BattleServantData_o *)this->fields.shortNameLabel;
            if ( data )
            {
              data = (BattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
              if ( data )
              {
                v28 = 1.0;
                v27 = 1.0;
                goto LABEL_43;
              }
            }
          }
          else
          {
            UIWidget__set_width((UIWidget_o *)data, (int)v26, 0LL);
            data = (BattleServantData_o *)this->fields.shortNameLabel;
            if ( data )
            {
              data = (BattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
              if ( data )
              {
                v27 = 1.0;
                v28 = (float)this->fields.defaultShortNameLabelWidth / v26;
LABEL_43:
                v29 = 1.0;
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
LABEL_44:
      sub_1B00F28(data, defaultShortNameLabelWidth);
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
    UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
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

  if ( (byte_48E56EF & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E56EF = 1;
  }
  if ( this->fields.data )
  {
    BattleServantParamComponent__UpdateStatusFace(this, method);
    BattleServantParamComponent__setClassIcon(this, v3);
    BattleServantParamComponent__UpdateNameLabel(this, v4);
    BattleServantParamComponent__UpdateShortNameLabel(this, v5);
    BattleServantParamComponent__updateSkillIcon(this, 0, v6);
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( !data
        || (v10 = this->fields.levelLabel,
            data = (BattleServantData_o *)BattleServantData__getLevelLabel(data, 0LL),
            !v10) )
      {
        sub_1B00F28(data, v8);
      }
      UILabel__set_text(v10, (System_String_o *)data, 0LL);
    }
  }
}


void __fastcall BattleServantParamComponent__UpdateStatusFace(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusBattleListViewItem_o *p_facetex; // x19
  UnityEngine_Object_o *facetex; // x21
  __int64 v6; // x1
  BattleServantData_o *data; // x0
  UITexture_o *v8; // x21
  BattleServantData_o *v9; // x8
  int32_t v10; // w20
  int32_t DispLimitCount; // w22
  UITexture_o *Manager__loadStatusFace; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_48E5709 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    sub_1B00CCC(&ServantAssetLoadManager_TypeInfo, v3);
    byte_48E5709 = 1;
  }
  if ( this->fields.data )
  {
    p_facetex = (ServantStatusBattleListViewItem_o *)&this->fields.facetex;
    facetex = (UnityEngine_Object_o *)this->fields.facetex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( !data
        || (v8 = this->fields.facetex,
            data = (BattleServantData_o *)BattleServantData__GetDispImageSvtId(data, 0LL),
            (v9 = this->fields.data) == 0LL) )
      {
        sub_1B00F28(data, v6);
      }
      v10 = (int)data;
      DispLimitCount = BattleServantData__getDispLimitCount(v9, 1, 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadStatusFace = ServantAssetLoadManager__loadStatusFace(v8, v10, DispLimitCount, 0LL);
      p_facetex->klass = (ServantStatusBattleListViewItem_c *)Manager__loadStatusFace;
      sub_1B00C70(p_facetex, (int32_t)Manager__loadStatusFace, v13, v14);
    }
  }
}


void __fastcall BattleServantParamComponent__UpdateTdGauge(
        BattleServantParamComponent_o *this,
        System_Int32_array *nowAndMaxArray,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nextTdGauge; // x21
  __int64 v6; // x1
  BattleServantData_o *data; // x0
  BattleNextTDgaugeComponent_o *v8; // x20
  int32_t v9; // w19
  int32_t v10; // w21
  _BOOL8 isTDSeraled; // x0
  __int64 v12; // x1

  if ( (byte_48E56FF & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, nowAndMaxArray);
    byte_48E56FF = 1;
  }
  if ( nowAndMaxArray && nowAndMaxArray->max_length == 2 )
  {
    nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(nextTdGauge, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( data )
      {
        if ( nowAndMaxArray->max_length < 2 )
          sub_1B00F30(data, v6);
        v8 = this->fields.nextTdGauge;
        v10 = nowAndMaxArray->m_Items[1];
        v9 = nowAndMaxArray->m_Items[2];
        isTDSeraled = BattleServantData__isTDSeraled(data, 0LL);
        if ( !v8 )
          sub_1B00F28(isTDSeraled, v12);
        BattleNextTDgaugeComponent__setInitGauge(v8, v10, v9, isTDSeraled, 0LL);
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
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  v2 = this;
  if ( (byte_48E56F2 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1B00CCC(&Method_BattleServantParamComponent_callSkillIcon__, method);
    byte_48E56F2 = 1;
  }
  skillIcon = v2->fields.skillIcon;
  if ( !skillIcon )
LABEL_13:
    sub_1B00F28(this, method);
  v4 = 0LL;
  v5 = 0;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B00F30(this, method);
    this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
    if ( this )
    {
      this = (BattleServantParamComponent_o *)BattleServantSkillIConComponent__showChageEffect(
                                                (BattleServantSkillIConComponent_o *)this,
                                                method);
      if ( !(v5 & 1 | (((unsigned __int8)this & 1) == 0)) )
      {
        v7 = Method_BattleServantParamComponent_callSkillIcon__;
        if ( (*((_BYTE *)Method_BattleServantParamComponent_callSkillIcon__ + 83) & 2) != 0 )
          v7 = (_QWORD *)sub_1B00CE4(Method_BattleServantParamComponent_callSkillIcon__);
        v8 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v7, v7[4]);
        OverwriteAssetSoundName__PlayCommonSe(v8, 2, 0LL);
        v5 = 1;
      }
      skillIcon = v2->fields.skillIcon;
      ++v4;
      if ( skillIcon )
        continue;
    }
    goto LABEL_13;
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
    sub_1B00F28(this, 0LL);
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
    sub_1B00F28(NowHp, v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  System_Object_array *v6; // x0
  __int64 v7; // x1
  BattleServantShowBuffComponent_o *showBuffComponent; // x19
  const MethodInfo *v9; // x2

  if ( (byte_48E5707 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__, v3);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo, v4);
    byte_48E5707 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  if ( !v5
    || (showBuffComponent = this->fields.showBuffComponent,
        v6 = System_Collections_Generic_List_object___ToArray(
               v5,
               (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__),
        !showBuffComponent) )
  {
    sub_1B00F28(v6, v7);
  }
  BattleServantShowBuffComponent__setBuffList(showBuffComponent, (BattleBuffData_ShowBuffData_array *)v6, v9);
}


void __fastcall BattleServantParamComponent__clickSkillIcon(
        BattleServantParamComponent_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isLongTap,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *target; // x22
  __int64 v9; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_48E56F4 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___, skillInfo);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v7);
    byte_48E56F4 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    Component_object = this->fields.target;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___)) == 0LL )
    {
      sub_1B00F28(Component_object, v9);
    }
    BattlePerformancePlayer__onClickSkillIcon((BattlePerformancePlayer_o *)Component_object, skillInfo, isLongTap, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_48E56F3 & 1) == 0 )
  {
    sub_1B00CCC(&BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_TypeInfo, method);
    byte_48E56F3 = 1;
  }
  v3 = sub_1B00F18(BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  int32_t v14; // w2
  int32_t v15; // w3
  UnityEngine_Object_o *levelLabel; // x21
  UILabel_o *v17; // x21
  UnityEngine_Object_o *nameLabel; // x21
  UILabel_o *v19; // x21
  UnityEngine_Object_o *hpGauge; // x21
  BattleHpGaugeBarComponent_o *v21; // x21
  int32_t v22; // w22
  UnityEngine_Object_o *hpChange; // x21
  struct BattleServantData_o *v24; // x8
  struct System_Int32_array *shiftDeckList; // x9
  UnityEngine_Object_o *hpShift; // x21
  UnityEngine_Object_o *breakSprite; // x21
  int32_t v28; // w21
  int32_t MaxHp; // w0
  const MethodInfo *v30; // x4
  UnityEngine_Object_o *npcomp; // x21
  struct BattleNpGaugeSystemComponent_o *v32; // x21
  struct BattleServantData_o *v33; // x8
  BattleNpGaugeSystemComponent_o *v34; // x21
  UnityEngine_Object_o *nextTdGauge; // x21
  bool v36; // w0
  const MethodInfo *v37; // x2
  BattleNextTDgaugeComponent_o *v38; // x20
  int32_t nexttpturn; // w21
  int32_t maxtpturn; // w22
  UnityEngine_Object_o *friendIcon; // x20
  struct BattleServantData_o *v42; // x8
  UISprite_o *v43; // x20
  UISprite_o *v44; // x20
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *breakPoint; // x20
  struct BattleServantData_o *v47; // x8

  v3 = notUpdateFlag;
  if ( (byte_48E56EE & 1) == 0 )
  {
    sub_1B00CCC(&FileName_TypeInfo, *(_QWORD *)&notUpdateFlag);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    sub_1B00CCC(&ServantAssetLoadManager_TypeInfo, v6);
    byte_48E56EE = 1;
  }
  if ( this->fields.data )
  {
    facetex = (UnityEngine_Object_o *)this->fields.facetex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_98;
      v10 = this->fields.facetex;
      data = (BattleServantData_o *)BattleServantData__GetDispImageSvtId(data, 0LL);
      if ( !this->fields.data )
        goto LABEL_98;
      v11 = (int)data;
      DispLimitCount = BattleServantData__getDispLimitCount(this->fields.data, 1, 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadStatusFace = ServantAssetLoadManager__loadStatusFace(v10, v11, DispLimitCount, 0LL);
      this->fields.facetex = Manager__loadStatusFace;
      sub_1B00C70(
        (ServantStatusBattleListViewItem_o *)&this->fields.facetex,
        (int32_t)Manager__loadStatusFace,
        v14,
        v15);
    }
    BattleServantParamComponent__setClassIcon(this, v8);
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_98;
      v17 = this->fields.levelLabel;
      data = (BattleServantData_o *)BattleServantData__getLevelLabel(data, 0LL);
      if ( !v17 )
        goto LABEL_98;
      UILabel__set_text(v17, (System_String_o *)data, 0LL);
    }
    nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_98;
      v19 = this->fields.nameLabel;
      data = (BattleServantData_o *)BattleServantData__getServantName(data, 0LL);
      if ( !v19 )
        goto LABEL_98;
      UILabel__set_text(v19, (System_String_o *)data, 0LL);
    }
    BattleServantParamComponent__UpdateShortNameLabel(this, v8);
    hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_98;
      v21 = this->fields.hpGauge;
      data = (BattleServantData_o *)BattleServantData__getNowHp(data, 0LL);
      if ( !this->fields.data )
        goto LABEL_98;
      v22 = (int)data;
      data = (BattleServantData_o *)BattleServantData__getMaxHp(this->fields.data, 0LL);
      if ( !v21 )
        goto LABEL_98;
      BattleHpGaugeBarComponent__setInitValue(v21, v22, (int32_t)data, 0LL);
    }
    hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(hpChange, 0LL, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v24 = this->fields.data;
      if ( !v24 )
        goto LABEL_98;
      shiftDeckList = v24->fields.shiftDeckList;
      if ( !shiftDeckList )
        goto LABEL_98;
      data = (BattleServantData_o *)this->fields.hpChange;
      if ( !data )
        goto LABEL_98;
      BattleServantChangeBarComponent__setBarType(
        (BattleServantChangeBarComponent_o *)data,
        1,
        shiftDeckList->max_length - v24->fields.shiftDeckIndex,
        0LL);
    }
    hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
    {
      data = (BattleServantData_o *)this->fields.hpShift;
      if ( !data )
        goto LABEL_98;
      BattleServantHpShiftComponent__setInitValue((BattleServantHpShiftComponent_o *)data, this->fields.data, 0LL);
    }
    BattleServantParamComponent__setAtlas(this, v8);
    breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(breakSprite, 0LL, 0LL) )
    {
      data = (BattleServantData_o *)this->fields.breakSprite;
      if ( !data )
        goto LABEL_98;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)data, 0, 0LL);
    }
    data = this->fields.data;
    if ( !data || (data = (BattleServantData_o *)BattleServantData__getNowHp(data, 0LL), !this->fields.data) )
LABEL_98:
      sub_1B00F28(data, v8);
    v28 = (int)data;
    MaxHp = BattleServantData__getMaxHp(this->fields.data, 0LL);
    BattleServantParamComponent__updateHplabel(this, v28, MaxHp, 1, v30);
    npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v32 = this->fields.npcomp;
      if ( !v32 )
        goto LABEL_98;
      v32->fields.lineCount = 3;
      data = this->fields.data;
      if ( !data )
        goto LABEL_98;
      v32->fields.maxparam = BattleServantData__getCountMaxNp(data, 0LL);
      data = (BattleServantData_o *)this->fields.npcomp;
      if ( !data )
        goto LABEL_98;
      BattleNpGaugeSystemComponent__InitSliderValue((BattleNpGaugeSystemComponent_o *)data, 0LL);
      v33 = this->fields.data;
      if ( !v33 )
        goto LABEL_98;
      data = (BattleServantData_o *)this->fields.npcomp;
      if ( !data )
        goto LABEL_98;
      BattleNpGaugeSystemComponent__setNowParam((BattleNpGaugeSystemComponent_o *)data, v33->fields.np, 0LL);
      data = this->fields.data;
      if ( !data )
        goto LABEL_98;
      v34 = this->fields.npcomp;
      data = (BattleServantData_o *)BattleServantData__isAddNpGauge(data, 0LL);
      if ( !v34 )
        goto LABEL_98;
      BattleNpGaugeSystemComponent__setUseNp(v34, (unsigned __int8)data & 1, 0LL);
    }
    nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v36 = UnityEngine_Object__op_Inequality(nextTdGauge, 0LL, 0LL);
    if ( (v3 & 1) == 0 && v36 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_98;
      v38 = this->fields.nextTdGauge;
      nexttpturn = data->fields.nexttpturn;
      maxtpturn = data->fields.maxtpturn;
      data = (BattleServantData_o *)BattleServantData__isTDSeraled(data, 0LL);
      if ( !v38 )
        goto LABEL_98;
      BattleNextTDgaugeComponent__setInitGauge(v38, nexttpturn, maxtpturn, (unsigned __int8)data & 1, 0LL);
    }
    BattleServantParamComponent__updateSkillIcon(this, 0, v37);
    friendIcon = (UnityEngine_Object_o *)this->fields.friendIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(friendIcon, 0LL, 0LL) )
    {
      data = (BattleServantData_o *)this->fields.friendIcon;
      if ( !data )
        goto LABEL_98;
      data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
      if ( !data )
        goto LABEL_98;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
      v42 = this->fields.data;
      if ( !v42 )
        goto LABEL_98;
      if ( v42->fields.followerType )
      {
        v43 = this->fields.friendIcon;
        data = (BattleServantData_o *)FileName_TypeInfo;
        if ( !FileName_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
        if ( !v43 )
          goto LABEL_98;
        UISprite__set_spriteName(v43, FileName_TypeInfo->static_fields->friendIconName, 0LL);
        data = (BattleServantData_o *)this->fields.friendIcon;
        if ( !data )
          goto LABEL_98;
        data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
        if ( !data )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
        v42 = this->fields.data;
        if ( !v42 )
          goto LABEL_98;
      }
      if ( v42->fields.flgEventJoin )
      {
        v44 = this->fields.friendIcon;
        data = (BattleServantData_o *)FileName_TypeInfo;
        if ( !FileName_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
        if ( !v44 )
          goto LABEL_98;
        UISprite__set_spriteName(v44, FileName_TypeInfo->static_fields->eventJoinIconName, 0LL);
        data = (BattleServantData_o *)this->fields.friendIcon;
        if ( !data )
          goto LABEL_98;
        data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
        if ( !data )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
      }
    }
    BattleServantParamComponent__setRoleTyoe(this, v8);
    perf = this->fields.perf;
    if ( !perf )
      goto LABEL_98;
    data = (BattleServantData_o *)perf->fields.data;
    if ( !data )
      goto LABEL_98;
    if ( BattleData__IsWarBoard((BattleData_o *)data, 0LL) )
    {
      breakPoint = (UnityEngine_Object_o *)this->fields.breakPoint;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(breakPoint, 0LL, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v47 = this->fields.data;
        if ( v47 )
        {
          data = (BattleServantData_o *)this->fields.breakPoint;
          if ( data )
          {
            BattleServantBreakPointComponent__Initialize(
              (BattleServantBreakPointComponent_o *)data,
              v47->fields.defeatPoint,
              v47->fields.maxDefeatPoint,
              v47->fields.isEnemy,
              0LL);
            return;
          }
        }
        goto LABEL_98;
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

  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_16;
  v3 = this;
  this = (BattleServantParamComponent_o *)perf->fields.data;
  if ( !this )
    goto LABEL_16;
  this = (BattleServantParamComponent_o *)BattleData__isTutorial((BattleData_o *)this, 0LL);
  v4 = v3->fields.perf;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !v4 )
      goto LABEL_16;
LABEL_10:
    statusPerf = v4->fields.statusPerf;
    if ( statusPerf )
    {
      this = (BattleServantParamComponent_o *)statusPerf->fields.masterPerf;
      if ( this )
      {
        if ( !BattlePerformanceMaster__isCloseEnemyConf((BattlePerformanceMaster_o *)this, 0LL) )
          return;
        this = (BattleServantParamComponent_o *)v3->fields.perf;
        if ( this )
        {
          LOBYTE(this[1].fields.data) = 1;
          BattlePerformance__clickTarget((BattlePerformance_o *)this, v3->fields.index, 0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_1B00F28(this, method);
  }
  if ( !v4 )
    goto LABEL_16;
  data = v4->fields.data;
  if ( !data )
    goto LABEL_16;
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
    sub_1B00F28(this, method);
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

  if ( (byte_48E5703 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_3181/*"Battle/Prefab/ef_add_enemy"*/, method);
    byte_48E5703 = 1;
  }
  data = this->fields.data;
  if ( data && data->fields.isAddition )
  {
    clsIconComponent = (UnityEngine_Component_o *)this->fields.clsIconComponent;
    if ( !clsIconComponent
      || (transform = UnityEngine_Component__get_transform(clsIconComponent, 0LL),
          clsIconComponent = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject_37094712(
                                                          (BaseMonoBehaviour_o *)this,
                                                          (System_String_o *)StringLiteral_3181/*"Battle/Prefab/ef_add_enemy"*/,
                                                          transform,
                                                          0LL,
                                                          0LL),
          (v6 = this->fields.data) == 0LL) )
    {
      sub_1B00F28(clsIconComponent, method);
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
  int32_t v11; // w2
  int32_t v12; // w3

  v2 = this;
  if ( (byte_48E56ED & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    this = (BattleServantParamComponent_o *)sub_1B00CCC(&StringLiteral_18644/*"effect/ef_cwflash01"*/, v3);
    byte_48E56ED = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_22;
  if ( !effectobj->max_length )
    goto LABEL_23;
  v5 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = v2->fields.effectobj;
    if ( !v6 )
      goto LABEL_22;
    if ( !v6->max_length )
      goto LABEL_23;
    v7 = (UnityEngine_Object_o *)v6->m_Items[0];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68077656(v7, 0LL);
  }
  facetex = (UnityEngine_Object_o *)v2->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        this = (BattleServantParamComponent_o *)BaseMonoBehaviour__createObject_37094712(
                                                  (BaseMonoBehaviour_o *)v2,
                                                  (System_String_o *)StringLiteral_18644/*"effect/ef_cwflash01"*/,
                                                  transform,
                                                  0LL,
                                                  0LL);
        if ( v9 )
        {
          if ( v9->max_length )
          {
            v9->m_Items[0] = (UnityEngine_GameObject_o *)this;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)v9->m_Items, (int32_t)this, v11, v12);
            return;
          }
LABEL_23:
          sub_1B00F30(this, method);
        }
      }
    }
LABEL_22:
    sub_1B00F28(this, method);
  }
}


void __fastcall BattleServantParamComponent__playCloseSelectServant(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v8; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_48E56DF & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E56DF = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_1B00F28(0LL, v4);
    gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
    v8.fields.r = 0.5;
    v8.fields.g = 0.5;
    v8.fields.b = 0.5;
    v8.fields.a = 1.0;
    TweenColor__Begin(gameObject, 0.4, v8, 0LL);
  }
  BattleServantParamComponent__setTouch(this, 1, v5);
}


void __fastcall BattleServantParamComponent__playEndShowServant(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v8; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_48E56E0 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E56E0 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_1B00F28(0LL, v4);
    gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
    v8.fields.r = 1.0;
    v8.fields.g = 1.0;
    v8.fields.b = 1.0;
    v8.fields.a = 1.0;
    TweenColor__Begin(gameObject, 0.4, v8, 0LL);
  }
  BattleServantParamComponent__setTouch(this, 1, v5);
}


void __fastcall BattleServantParamComponent__playSelectServant(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v8; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_48E56DE & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E56DE = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_1B00F28(0LL, v4);
    gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
    v8.fields.r = 1.0;
    v8.fields.g = 1.0;
    v8.fields.b = 1.0;
    v8.fields.a = 1.0;
    TweenColor__Begin(gameObject, 0.4, v8, 0LL);
  }
  BattleServantParamComponent__setTouch(this, 1, v5);
}


void __fastcall BattleServantParamComponent__playShiftEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x20
  __int64 v4; // x1
  BattleServantHpShiftComponent_o *v5; // x0

  if ( (byte_48E56F9 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E56F9 = 1;
  }
  if ( this->fields.data )
  {
    hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
    {
      v5 = this->fields.hpShift;
      if ( !v5 )
        sub_1B00F28(0LL, v4);
      BattleServantHpShiftComponent__playShiftEffect(v5, this->fields.data, 0LL);
    }
  }
}


float __fastcall BattleServantParamComponent__playShiftEffectBefore(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *hpShift; // x20
  __int64 v4; // x1
  BattleServantHpShiftComponent_o *v5; // x0

  if ( (byte_48E56F8 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E56F8 = 1;
  }
  if ( !this->fields.data )
    return 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
    return 0.0;
  v5 = this->fields.hpShift;
  if ( !v5 )
    sub_1B00F28(0LL, v4);
  return BattleServantHpShiftComponent__playShiftEffectBefore(v5, this->fields.data, 0LL);
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
  BattlePerformance_o *perf; // x0
  UnityEngine_Object_o *v9; // x19
  Il2CppObject *Component_object; // x21
  float LabelPrintedWidth; // s10
  float v12; // s8
  float v13; // s9
  UnityEngine_Object_o *ComponentInChildren_object__47899056; // x23
  _DWORD *monitor; // x8
  int v16; // w22
  _DWORD *v17; // x8
  int v18; // w8
  float sideEffectLabelWidth; // s0
  float v20; // s1
  UnityEngine_Component_o *clsIconComponent; // x8
  UnityEngine_Transform_o *v22; // x20
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_48E5706 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___, buffData);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___, v5);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_1/*""*/, v7);
    byte_48E5706 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_34;
  perf = (BattlePerformance_o *)BattlePerformance__get_WrapPopupCtrl(perf, 0LL);
  if ( !buffData || !perf )
    goto LABEL_34;
  v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.events)(
                                 perf,
                                 (unsigned int)buffData->fields.popColor,
                                 perf->klass[1]._1.properties);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)perf & 1) == 0 )
  {
    if ( !v9 )
      goto LABEL_34;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v9,
                         (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)perf & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_34;
      BattleUIRangeLabel__SetAdjustLabelOffset(
        (BattleUIRangeLabel_o *)Component_object,
        buffData->fields.popLabel,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        0LL,
        0,
        0,
        0,
        0LL);
    }
    else if ( !Component_object )
    {
      goto LABEL_34;
    }
    LabelPrintedWidth = BattleUIRangeLabel__GetLabelPrintedWidth((BattleUIRangeLabel_o *)Component_object, 0LL);
    v12 = fminf(this->fields.sideEffectLabelWidth / (float)(LabelPrintedWidth * 0.8), 1.0);
    v13 = 0.0;
    if ( buffData->fields.popIcon >= 1 )
    {
      ComponentInChildren_object__47899056 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_object__47899056(
                                                                       (UnityEngine_GameObject_o *)v9,
                                                                       1,
                                                                       (const MethodInfo_2DAE1B0 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality(ComponentInChildren_object__47899056, 0LL, 0LL);
      if ( ((unsigned __int8)perf & 1) != 0 )
      {
        if ( !ComponentInChildren_object__47899056 )
          goto LABEL_34;
        BattleServantBuffIconComponent__setImageId(
          (BattleServantBuffIconComponent_o *)ComponentInChildren_object__47899056,
          buffData->fields.popIcon,
          0LL);
        monitor = ComponentInChildren_object__47899056[1].monitor;
        if ( !monitor )
          goto LABEL_34;
        v16 = monitor[42];
        perf = (BattlePerformance_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)ComponentInChildren_object__47899056,
                                        0LL);
        if ( !perf )
          goto LABEL_34;
        perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)perf, 0LL);
        if ( !perf )
          goto LABEL_34;
        v23.fields.x = -(float)((float)((float)(LabelPrintedWidth * 0.5) + (float)((float)v16 * 0.5)) + 5.0);
        v23.fields.y = 0.0;
        v23.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)perf, v23, 0LL);
        v17 = ComponentInChildren_object__47899056[1].monitor;
        if ( !v17 )
          goto LABEL_34;
        v18 = v17[42];
        if ( v12 >= 1.0 )
        {
          sideEffectLabelWidth = this->fields.sideEffectLabelWidth;
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v9, 0, 0LL);
    perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0LL);
    clsIconComponent = (UnityEngine_Component_o *)this->fields.clsIconComponent;
    if ( clsIconComponent )
    {
      v22 = (UnityEngine_Transform_o *)perf;
      perf = (BattlePerformance_o *)UnityEngine_Component__get_transform(clsIconComponent, 0LL);
      if ( v22 )
      {
        UnityEngine_Transform__SetParent(v22, (UnityEngine_Transform_o *)perf, 0LL);
        perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0LL);
        if ( perf )
        {
          v24.fields.y = 1.0;
          v24.fields.z = 1.0;
          v24.fields.x = v12;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)perf, v24, 0LL);
          perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0LL);
          if ( perf )
          {
            v25.fields.y = 0.0;
            v25.fields.z = 0.0;
            v25.fields.x = v13;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)perf, v25, 0LL);
            BattleUIRangeLabel__AddLabelDepth((BattleUIRangeLabel_o *)Component_object, 100, 0LL);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v9, 1, 0LL);
            return;
          }
        }
      }
    }
LABEL_34:
    sub_1B00F28(perf, buffData);
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
  __int64 v11; // x1
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o *breakSprite; // x21
  UIAtlas_o *v14; // x20
  UISprite_o *v15; // x19
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  int v20; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_48E56F1 & 1) == 0 )
  {
    sub_1B00CCC(&Method_AssetData_GetObject_GameObject____74577936, method);
    sub_1B00CCC(&AssetManager_TypeInfo, v3);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v4);
    sub_1B00CCC(&int_TypeInfo, v5);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_3172/*"Battle/Common"*/, v7);
    sub_1B00CCC(&StringLiteral_3190/*"BattleAssetUIAtlas"*/, v8);
    sub_1B00CCC(&StringLiteral_19700/*"hp_break_"*/, v9);
    byte_48E56F1 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3172/*"Battle/Common"*/, 0LL);
  if ( !AssetStorage )
    goto LABEL_14;
  AssetStorage = (AssetData_o *)AssetData__GetObject_object__47470892(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_3190/*"BattleAssetUIAtlas"*/,
                                  (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
  if ( !AssetStorage )
    goto LABEL_14;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)AssetStorage,
                       (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  v14 = (UIAtlas_o *)Component_object;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0LL, 0LL) )
  {
    AssetStorage = (AssetData_o *)this->fields.breakSprite;
    if ( AssetStorage )
    {
      UISprite__set_atlas((UISprite_o *)AssetStorage, v14, 0LL);
      v15 = this->fields.breakSprite;
      v20 = 1;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v16, v17, v18);
      AssetStorage = (AssetData_o *)System_String__Concat((Il2CppObject *)StringLiteral_19700/*"hp_break_"*/, v19, 0LL);
      if ( v15 )
      {
        UISprite__set_spriteName(v15, (System_String_o *)AssetStorage, 0LL);
        return;
      }
    }
LABEL_14:
    sub_1B00F28(AssetStorage, v11);
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

  if ( (byte_48E56EB & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E56EB = 1;
  }
  clsIconComponent = (UnityEngine_Object_o *)this->fields.clsIconComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(clsIconComponent, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data
      || (data = (BattleServantData_o *)BattleServantData__getClassId(data, 0LL), (v6 = this->fields.data) == 0LL)
      || (v4 = (unsigned int)data, (data = (BattleServantData_o *)this->fields.clsIconComponent) == 0LL) )
    {
      sub_1B00F28(data, v4);
    }
    ServantClassIconComponent__SetImage(
      (ServantClassIconComponent_o *)data,
      v4,
      v6->fields._frameType_k__BackingField,
      0LL);
  }
}


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
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t modeWindow; // w8
  Il2CppObject *Component_object; // x20
  Il2CppObject *v15; // x21
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v17; // x21
  __int64 v18; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v20; // x0
  UnityEngine_Component_c *v21; // x8
  UnityEngine_Component_o *v22; // x21
  __int64 v23; // x9
  SimpleAnimation_State_c **v24; // x10
  __int64 v25; // x0
  UnityEngine_Component_c *v26; // x8
  SimpleAnimation_State_c *v27; // x1
  UnityEngine_Component_o *v28; // x21
  __int64 v29; // x9
  SimpleAnimation_State_c **v30; // x10
  __int64 v31; // x9
  __int64 v32; // x0
  const MethodInfo *v33; // x2
  UnityEngine_Color_o v34; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_48E56E1 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v4);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    sub_1B00CCC(&SimpleAnimation_State_TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_12884/*"SvtW_StartClose"*/, v7);
    byte_48E56E1 = 1;
  }
  BattleServantParamComponent__setSkillFlash(this, 0, v2);
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Item = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    Item = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !Item )
      goto LABEL_54;
    gameObject = UnityEngine_Component__get_gameObject(Item, 0LL);
    v34.fields.r = 0.0;
    v34.fields.g = 0.0;
    v34.fields.b = 0.0;
    v34.fields.a = 0.0;
    Item = (UnityEngine_Component_o *)TweenColor__Begin(gameObject, 0.4, v34, 0LL);
    this->fields.isHideFaceTexture = 1;
  }
  modeWindow = this->fields.modeWindow;
  if ( modeWindow != 3 )
  {
    if ( modeWindow == 2 )
    {
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
      v15 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Animation___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Item = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0LL,
                                          0LL);
      if ( ((unsigned __int8)Item & 1) != 0 )
      {
        if ( Component_object )
        {
          Item = (UnityEngine_Component_o *)SimpleAnimation__get_Item(
                                              (SimpleAnimation_o *)Component_object,
                                              (System_String_o *)StringLiteral_12884/*"SvtW_StartClose"*/,
                                              0LL);
          if ( Item )
          {
            klass = Item->klass;
            v17 = Item;
            v18 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
            {
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v18;
                p_offset += 2;
                if ( !v18 )
                  goto LABEL_19;
              }
              v20 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
            }
            else
            {
LABEL_19:
              v20 = sub_1B52CAC(Item, SimpleAnimation_State_TypeInfo, 4LL);
            }
            (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v20)(v17, *(_QWORD *)(v20 + 8), 0.0);
            Item = (UnityEngine_Component_o *)SimpleAnimation__get_Item(
                                                (SimpleAnimation_o *)Component_object,
                                                (System_String_o *)StringLiteral_12884/*"SvtW_StartClose"*/,
                                                0LL);
            if ( Item )
            {
              v26 = Item->klass;
              v27 = SimpleAnimation_State_TypeInfo;
              v28 = Item;
              v29 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
              {
                v30 = (SimpleAnimation_State_c **)&v26->_1.interfaceOffsets->offset;
                while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
                {
                  --v29;
                  v30 += 2;
                  if ( !v29 )
                    goto LABEL_50;
                }
LABEL_51:
                v32 = (__int64)(&v26[1]._1.castClass + 2 * *(_DWORD *)v30);
                goto LABEL_52;
              }
              goto LABEL_50;
            }
          }
        }
        goto LABEL_54;
      }
    }
    else
    {
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
      v15 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Animation___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Item = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0LL,
                                          0LL);
      if ( ((unsigned __int8)Item & 1) != 0 )
      {
        if ( Component_object )
        {
          Item = (UnityEngine_Component_o *)SimpleAnimation__get_Item(
                                              (SimpleAnimation_o *)Component_object,
                                              (System_String_o *)StringLiteral_12884/*"SvtW_StartClose"*/,
                                              0LL);
          if ( Item )
          {
            v21 = Item->klass;
            v22 = Item;
            v23 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
            {
              v24 = (SimpleAnimation_State_c **)&v21->_1.interfaceOffsets->offset;
              while ( *(v24 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v23;
                v24 += 2;
                if ( !v23 )
                  goto LABEL_29;
              }
              v25 = (__int64)(&v21[1]._1.gc_desc + 2 * *(_DWORD *)v24);
            }
            else
            {
LABEL_29:
              v25 = sub_1B52CAC(Item, SimpleAnimation_State_TypeInfo, 4LL);
            }
            (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v25)(v22, *(_QWORD *)(v25 + 8), 0.0);
            Item = (UnityEngine_Component_o *)SimpleAnimation__get_Item(
                                                (SimpleAnimation_o *)Component_object,
                                                (System_String_o *)StringLiteral_12884/*"SvtW_StartClose"*/,
                                                0LL);
            if ( Item )
            {
              v26 = Item->klass;
              v27 = SimpleAnimation_State_TypeInfo;
              v28 = Item;
              v31 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
              {
                v30 = (SimpleAnimation_State_c **)&v26->_1.interfaceOffsets->offset;
                while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
                {
                  --v31;
                  v30 += 2;
                  if ( !v31 )
                    goto LABEL_50;
                }
                goto LABEL_51;
              }
LABEL_50:
              v32 = sub_1B52CAC(v28, v27, 8LL);
LABEL_52:
              (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v32)(v28, *(_QWORD *)(v32 + 8), 1.0);
              Item = (UnityEngine_Component_o *)SimpleAnimation__Play_62462980(
                                                  (SimpleAnimation_o *)Component_object,
                                                  (System_String_o *)StringLiteral_12884/*"SvtW_StartClose"*/,
                                                  0LL);
              goto LABEL_53;
            }
          }
        }
LABEL_54:
        sub_1B00F28(Item, v10);
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Item = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !v15 )
        goto LABEL_54;
      Item = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(
                                          (UnityEngine_Animation_o *)v15,
                                          (System_String_o *)StringLiteral_12884/*"SvtW_StartClose"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_54;
      UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
      Item = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(
                                          (UnityEngine_Animation_o *)v15,
                                          (System_String_o *)StringLiteral_12884/*"SvtW_StartClose"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_54;
      UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 1.0, 0LL);
      Item = (UnityEngine_Component_o *)UnityEngine_Animation__Play_67822748(
                                          (UnityEngine_Animation_o *)v15,
                                          (System_String_o *)StringLiteral_12884/*"SvtW_StartClose"*/,
                                          0LL);
    }
  }
LABEL_53:
  BattleServantParamComponent__EffectStartStop(
    (BattleServantParamComponent_o *)Item,
    this->fields.commandSpellEffectDict,
    0,
    v11);
  this->fields.modeWindow = 3;
  BattleServantParamComponent__setTouch(this, 0, v33);
}


void __fastcall BattleServantParamComponent__setData(
        BattleServantParamComponent_o *this,
        BattleServantData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v6; // x2
  struct BattleServantData_o *v7; // x8
  int32_t uniqueId; // w8
  UnityEngine_Object_o *npcomp; // x20
  __int64 v10; // x1
  BattleNpGaugeSystemComponent_o *v11; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3

  if ( (byte_48E56DC & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, data);
    byte_48E56DC = 1;
  }
  this->fields.modeWindow = 1;
  this->fields.data = data;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.data, (int32_t)data, (int32_t)method, v3);
  v7 = this->fields.data;
  if ( v7 )
  {
    uniqueId = v7->fields.uniqueId;
  }
  else
  {
    npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL) )
    {
      v11 = this->fields.npcomp;
      if ( !v11 )
        sub_1B00F28(0LL, v10);
      BattleNpGaugeSystemComponent__resetSlider(v11, 0LL);
    }
    uniqueId = -1;
  }
  this->fields.uniqueID = uniqueId;
  BattleServantParamComponent__initUpdateView(this, 0, v6);
  BattleServantParamComponent__updateView(this, v12);
  BattleServantParamComponent__UpdateSkillRankUpEffect(this, v13);
  BattleServantParamComponent__setTargetMark(this, -1, 0, v14);
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
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3
  UnityEngine_GameObject_o *v14; // x21
  float v15; // s0
  int32_t modeWindow; // w8
  Il2CppObject *Component_object; // x21
  Il2CppObject *v18; // x22
  SimpleAnimation_State_o *Item; // x22
  __int64 v20; // x8
  __int64 v21; // x23
  __int64 v22; // x9
  SimpleAnimation_State_c **v23; // x10
  __int64 v24; // x0
  SimpleAnimation_State_o *v25; // x22
  __int64 v26; // x8
  __int64 v27; // x23
  __int64 v28; // x9
  SimpleAnimation_State_c **v29; // x10
  __int64 v30; // x0
  UnityEngine_AnimationState_o *v31; // x21
  float length; // s0
  long double v33; // q0
  SimpleAnimation_State_c *klass; // x8
  long double v35; // q8
  __int64 v36; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  long double v39; // q0
  SimpleAnimation_State_c *v40; // x8
  long double v41; // q8
  __int64 v42; // x9
  SimpleAnimation_State_c **v43; // x10
  __int64 v44; // x0
  __int64 v45; // x8
  SimpleAnimation_State_c *v46; // x1
  __int64 v47; // x22
  __int64 v48; // x9
  SimpleAnimation_State_c **v49; // x10
  __int64 v50; // x9
  __int64 v51; // x0
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x1
  UnityEngine_Color_o v54; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_48E56E2 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_Animation___, isPlayCommandSpellEffectStartAnim);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v5);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v6);
    sub_1B00CCC(&SimpleAnimation_State_TypeInfo, v7);
    sub_1B00CCC(&StringLiteral_12884/*"SvtW_StartClose"*/, v8);
    byte_48E56E2 = 1;
  }
  BattleServantParamComponent__setSkillFlash(this, 1, method);
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)this->fields.facetex;
    if ( !gameObject )
      goto LABEL_73;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !this->fields.perf )
      goto LABEL_73;
    v14 = (UnityEngine_GameObject_o *)gameObject;
    gameObject = (__int64)BattlePerformance__get_MotionSkip(this->fields.perf, 0LL);
    if ( !gameObject )
      goto LABEL_73;
    v15 = (*(float (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 488LL))(
            gameObject,
            *(_QWORD *)(*(_QWORD *)gameObject + 496LL),
            0.4);
    v54.fields.r = 1.0;
    v54.fields.g = 1.0;
    v54.fields.b = 1.0;
    v54.fields.a = 1.0;
    gameObject = (__int64)TweenColor__Begin(v14, v15, v54, 0LL);
    this->fields.isHideFaceTexture = 0;
  }
  modeWindow = this->fields.modeWindow;
  if ( modeWindow == 2 )
    goto LABEL_70;
  if ( modeWindow == 1 )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v18 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( (gameObject & 1) != 0 )
    {
      if ( Component_object )
      {
        Item = SimpleAnimation__get_Item(
                 (SimpleAnimation_o *)Component_object,
                 (System_String_o *)StringLiteral_12884/*"SvtW_StartClose"*/,
                 0LL);
        gameObject = (__int64)SimpleAnimation__get_Item(
                                (SimpleAnimation_o *)Component_object,
                                (System_String_o *)StringLiteral_12884/*"SvtW_StartClose"*/,
                                0LL);
        if ( gameObject )
        {
          v20 = *(_QWORD *)gameObject;
          v21 = gameObject;
          v22 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
          if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
          {
            v23 = (SimpleAnimation_State_c **)(*(_QWORD *)(v20 + 176) + 8LL);
            while ( *(v23 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v22;
              v23 += 2;
              if ( !v22 )
                goto LABEL_21;
            }
            v24 = v20 + 16LL * (*(_DWORD *)v23 + 13) + 312;
          }
          else
          {
LABEL_21:
            v24 = sub_1B52CAC(gameObject, SimpleAnimation_State_TypeInfo, 13LL);
          }
          gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
          if ( Item )
          {
            klass = Item->klass;
            v35 = v33;
            v36 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
            {
              p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v36;
                p_offset += 2;
                if ( !v36 )
                  goto LABEL_46;
              }
              p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
            }
            else
            {
LABEL_46:
              p_method = sub_1B52CAC(Item, SimpleAnimation_State_TypeInfo, 4LL);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))p_method)(
              Item,
              *(_QWORD *)(p_method + 8),
              v35);
            gameObject = (__int64)SimpleAnimation__get_Item(
                                    (SimpleAnimation_o *)Component_object,
                                    (System_String_o *)StringLiteral_12884/*"SvtW_StartClose"*/,
                                    0LL);
            if ( gameObject )
            {
              v45 = *(_QWORD *)gameObject;
              v46 = SimpleAnimation_State_TypeInfo;
              v47 = gameObject;
              v48 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
              if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
              {
                v49 = (SimpleAnimation_State_c **)(*(_QWORD *)(v45 + 176) + 8LL);
                while ( *(v49 - 1) != SimpleAnimation_State_TypeInfo )
                {
                  --v48;
                  v49 += 2;
                  if ( !v48 )
                    goto LABEL_67;
                }
LABEL_68:
                v51 = v45 + 16LL * (*(_DWORD *)v49 + 8) + 312;
                goto LABEL_69;
              }
              goto LABEL_67;
            }
          }
        }
      }
      goto LABEL_73;
    }
  }
  else
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v18 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( (gameObject & 1) != 0 )
    {
      if ( Component_object )
      {
        v25 = SimpleAnimation__get_Item(
                (SimpleAnimation_o *)Component_object,
                (System_String_o *)StringLiteral_12884/*"SvtW_StartClose"*/,
                0LL);
        gameObject = (__int64)SimpleAnimation__get_Item(
                                (SimpleAnimation_o *)Component_object,
                                (System_String_o *)StringLiteral_12884/*"SvtW_StartClose"*/,
                                0LL);
        if ( gameObject )
        {
          v26 = *(_QWORD *)gameObject;
          v27 = gameObject;
          v28 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
          if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
          {
            v29 = (SimpleAnimation_State_c **)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *(v29 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v28;
              v29 += 2;
              if ( !v28 )
                goto LABEL_31;
            }
            v30 = v26 + 16LL * (*(_DWORD *)v29 + 13) + 312;
          }
          else
          {
LABEL_31:
            v30 = sub_1B52CAC(gameObject, SimpleAnimation_State_TypeInfo, 13LL);
          }
          gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
          if ( v25 )
          {
            v40 = v25->klass;
            v41 = v39;
            v42 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
            {
              v43 = (SimpleAnimation_State_c **)&v40->_1.interfaceOffsets->offset;
              while ( *(v43 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v42;
                v43 += 2;
                if ( !v42 )
                  goto LABEL_53;
              }
              v44 = (__int64)&v40->vtable[*(_DWORD *)v43 + 4].method;
            }
            else
            {
LABEL_53:
              v44 = sub_1B52CAC(v25, SimpleAnimation_State_TypeInfo, 4LL);
            }
            (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))v44)(v25, *(_QWORD *)(v44 + 8), v41);
            gameObject = (__int64)SimpleAnimation__get_Item(
                                    (SimpleAnimation_o *)Component_object,
                                    (System_String_o *)StringLiteral_12884/*"SvtW_StartClose"*/,
                                    0LL);
            if ( gameObject )
            {
              v45 = *(_QWORD *)gameObject;
              v46 = SimpleAnimation_State_TypeInfo;
              v47 = gameObject;
              v50 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
              if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
              {
                v49 = (SimpleAnimation_State_c **)(*(_QWORD *)(v45 + 176) + 8LL);
                while ( *(v49 - 1) != SimpleAnimation_State_TypeInfo )
                {
                  --v50;
                  v49 += 2;
                  if ( !v50 )
                    goto LABEL_67;
                }
                goto LABEL_68;
              }
LABEL_67:
              v51 = sub_1B52CAC(v47, v46, 8LL);
LABEL_69:
              (*(void (__fastcall **)(__int64, _QWORD, float))v51)(v47, *(_QWORD *)(v51 + 8), -1.0);
              gameObject = SimpleAnimation__Play_62462980(
                             (SimpleAnimation_o *)Component_object,
                             (System_String_o *)StringLiteral_12884/*"SvtW_StartClose"*/,
                             0LL);
              goto LABEL_70;
            }
          }
        }
      }
LABEL_73:
      sub_1B00F28(gameObject, v11);
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    if ( v18 )
    {
      v31 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v18, (System_String_o *)StringLiteral_12884/*"SvtW_StartClose"*/, 0LL);
      gameObject = (__int64)UnityEngine_Animation__get_Item(
                              (UnityEngine_Animation_o *)v18,
                              (System_String_o *)StringLiteral_12884/*"SvtW_StartClose"*/,
                              0LL);
      if ( gameObject )
      {
        length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)gameObject, 0LL);
        if ( v31 )
        {
          UnityEngine_AnimationState__set_time(v31, length, 0LL);
          gameObject = (__int64)UnityEngine_Animation__get_Item(
                                  (UnityEngine_Animation_o *)v18,
                                  (System_String_o *)StringLiteral_12884/*"SvtW_StartClose"*/,
                                  0LL);
          if ( gameObject )
          {
            UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, -1.0, 0LL);
            gameObject = UnityEngine_Animation__Play_67822748(
                           (UnityEngine_Animation_o *)v18,
                           (System_String_o *)StringLiteral_12884/*"SvtW_StartClose"*/,
                           0LL);
            goto LABEL_70;
          }
        }
      }
    }
    goto LABEL_73;
  }
LABEL_70:
  if ( isPlayCommandSpellEffectStartAnim )
    BattleServantParamComponent__EffectStartStop(
      (BattleServantParamComponent_o *)gameObject,
      this->fields.commandSpellEffectDict,
      1,
      v13);
  this->fields.modeWindow = 2;
  BattleServantParamComponent__setTouch(this, 1, v12);
  BattleServantParamComponent__updateSkillIcon(this, 0, v52);
  BattleServantParamComponent__RemoveEffectClearRankUpBuff(this, v53);
}


void __fastcall BattleServantParamComponent__setPerf(
        BattleServantParamComponent_o *this,
        BattlePerformance_o *inperf,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.perf = inperf;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.perf, (int32_t)inperf, (int32_t)method, v3);
}


void __fastcall BattleServantParamComponent__setRoleTyoe(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *roleTypeSprite; // x20
  __int64 transform; // x0
  __int64 v7; // x1
  struct BattleServantData_o *data; // x8
  int32_t roleType; // w8
  __int64 *v10; // x8
  UnityEngine_Transform_o *v11; // x20
  bool v12; // w1

  if ( (byte_48E56EC & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_18776/*"enemy_icon_leader"*/, v3);
    sub_1B00CCC(&StringLiteral_22800/*"servant_icon"*/, v4);
    byte_48E56EC = 1;
  }
  roleTypeSprite = (UnityEngine_Object_o *)this->fields.roleTypeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality(roleTypeSprite, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_27;
    if ( data->fields.isEnemy )
    {
      roleType = data->fields.roleType;
      transform = (__int64)this->fields.roleTypeSprite;
      if ( roleType == 2 )
      {
        if ( !transform )
          goto LABEL_27;
        v10 = &StringLiteral_18776/*"enemy_icon_leader"*/;
        goto LABEL_17;
      }
      if ( !transform )
        goto LABEL_27;
      if ( roleType == 3 )
      {
        v10 = &StringLiteral_22800/*"servant_icon"*/;
LABEL_17:
        UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)*v10, 0LL);
        transform = (__int64)this->fields.roleTypeSprite;
        if ( transform )
        {
          transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
          v11 = (UnityEngine_Transform_o *)transform;
          if ( !byte_48DD9F1 )
          {
            transform = sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v7);
            byte_48DD9F1 = 1;
          }
          if ( v11 )
          {
            UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
            transform = (__int64)this->fields.roleTypeSprite;
            if ( transform )
            {
              transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
              if ( transform )
              {
                v12 = 1;
LABEL_26:
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v12, 0LL);
                return;
              }
            }
          }
        }
        goto LABEL_27;
      }
    }
    else
    {
      transform = (__int64)this->fields.roleTypeSprite;
      if ( !transform )
        goto LABEL_27;
    }
    transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( transform )
    {
      v12 = 0;
      goto LABEL_26;
    }
LABEL_27:
    sub_1B00F28(transform, v7);
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

  skillIcon = this->fields.skillIcon;
  if ( !skillIcon )
LABEL_7:
    sub_1B00F28(this, flg);
  v4 = this;
  v5 = 0LL;
  v6 = flg;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B00F30(this, flg);
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
  const MethodInfo *v10; // x1
  void *data; // x0
  int v12; // w24
  unsigned int localPosition; // s9
  unsigned int v14; // s8
  UIWidget_o *v15; // x22
  UIWidget_o *v16; // x23
  UnityEngine_Object_o *v17; // x21
  UnityEngine_Object_o *v18; // x21
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v20; // x8
  _BOOL4 v21; // w20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_48E56F7 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, *(_QWORD *)&uniqueId);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v7);
    byte_48E56F7 = 1;
  }
  if ( this->fields.data )
  {
    targetMark = (UnityEngine_Object_o *)this->fields.targetMark;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(targetMark, 0LL, 0LL) )
    {
      lockTargetMark = (UnityEngine_Object_o *)this->fields.lockTargetMark;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(lockTargetMark, 0LL, 0LL) )
      {
        data = this->fields.data;
        if ( !data )
          goto LABEL_68;
        v12 = *((_DWORD *)data + 6);
        if ( *((_BYTE *)data + 457) || BattleServantData__get_IsSuperBossUi((BattleServantData_o *)data, 0LL) )
        {
          data = this->fields.targetMark;
          if ( !data )
            goto LABEL_68;
          data = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)data, 0LL);
          if ( !data )
            goto LABEL_68;
          localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)data, 0LL);
        }
        else
        {
          localPosition = -1034158080;
        }
        data = this->fields.data;
        if ( !data )
          goto LABEL_68;
        if ( *((_BYTE *)data + 457) || BattleServantData__get_IsSuperBossUi((BattleServantData_o *)data, 0LL) )
        {
          data = this->fields.lockTargetMark;
          if ( !data )
            goto LABEL_68;
          data = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)data, 0LL);
          if ( !data )
            goto LABEL_68;
          v14 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)data, 0LL);
        }
        else
        {
          v14 = -1034289152;
        }
        data = this->fields.targetMark;
        if ( data )
        {
          data = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)data,
                   (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( this->fields.targetMark )
          {
            v15 = (UIWidget_o *)data;
            data = UnityEngine_GameObject__get_transform(this->fields.targetMark, 0LL);
            if ( data )
            {
              v23.fields.y = 22.0;
              v23.fields.z = 0.0;
              LODWORD(v23.fields.x) = localPosition;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)data, v23, 0LL);
              if ( v15 )
              {
                UIWidget__set_depth(v15, -29, 0LL);
                UIWidget__set_width(v15, 74, 0LL);
                UIWidget__set_height(v15, 74, 0LL);
                data = this->fields.lockTargetMark;
                if ( data )
                {
                  data = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)data,
                           (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                  if ( this->fields.lockTargetMark )
                  {
                    v16 = (UIWidget_o *)data;
                    data = UnityEngine_GameObject__get_transform(this->fields.lockTargetMark, 0LL);
                    if ( data )
                    {
                      v24.fields.y = 22.0;
                      v24.fields.z = 0.0;
                      LODWORD(v24.fields.x) = v14;
                      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)data, v24, 0LL);
                      if ( v16 )
                      {
                        UIWidget__set_depth(v16, -30, 0LL);
                        UIWidget__set_width(v16, 74, 0LL);
                        UIWidget__set_height(v16, 74, 0LL);
                        v26.fields.r = 1.0;
                        v26.fields.g = 1.0;
                        v26.fields.b = 1.0;
                        v26.fields.a = 1.0;
                        UIWidget__set_color(v16, v26, 0LL);
                        if ( isTargetLock )
                        {
                          data = this->fields.targetMark;
                          if ( data )
                          {
                            data = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)data, 0LL);
                            if ( data )
                            {
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, v12 == uniqueId, 0LL);
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
                                        goto LABEL_68;
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
                                          if ( v12 != uniqueId )
                                            return;
                                          UIWidget__set_depth(v15, -29, 0LL);
                                          UIWidget__set_width(v15, 70, 0LL);
                                          UIWidget__set_height(v15, 70, 0LL);
                                          data = this->fields.lockTargetMark;
                                          if ( data )
                                          {
                                            data = UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)data,
                                                     0LL);
                                            if ( data )
                                            {
                                              v25.fields.y = 22.0;
                                              v25.fields.z = 0.0;
                                              LODWORD(v25.fields.x) = v14;
                                              UnityEngine_Transform__set_localPosition(
                                                (UnityEngine_Transform_o *)data,
                                                v25,
                                                0LL);
                                              UIWidget__set_depth(v16, -30, 0LL);
                                              UIWidget__set_width(v16, 78, 0LL);
                                              UIWidget__set_height(v16, 78, 0LL);
                                              v27.fields.r = 1.0;
                                              v27.fields.g = 0.0;
                                              v27.fields.b = 0.0;
                                              v27.fields.a = 1.0;
                                              UIWidget__set_color(v16, v27, 0LL);
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
                          v17 = (UnityEngine_Object_o *)this->fields.targetMark;
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
                          {
                            data = this->fields.targetMark;
                            if ( !data )
                              goto LABEL_68;
                            data = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)data, 0LL);
                            if ( !data )
                              goto LABEL_68;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, v12 == uniqueId, 0LL);
                          }
                          v18 = (UnityEngine_Object_o *)this->fields.lockTargetMark;
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          data = (void *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
                          if ( ((unsigned __int8)data & 1) != 0 )
                          {
                            data = this->fields.lockTargetMark;
                            if ( !data )
                              goto LABEL_68;
                            data = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)data, 0LL);
                            if ( !data )
                              goto LABEL_68;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
                          }
                          perf = this->fields.perf;
                          if ( perf )
                          {
                            v20 = perf->fields.data;
                            if ( v20 )
                            {
                              if ( !v20->fields.isMultiTargetBattle )
                                return;
                              v21 = uniqueId == -1 || v12 == uniqueId;
                              transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
                              CommonFunction__SetColorAllChild(transform, v21, this->fields.GRAY, 0LL);
                              this->fields.isActiveHpBar = v21;
                              if ( !v21 )
                                return;
                              data = this->fields.showBuffComponent;
                              if ( data )
                              {
                                BattleServantShowBuffComponent__UpdateActiveBuffList(
                                  (BattleServantShowBuffComponent_o *)data,
                                  v10);
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
LABEL_68:
        sub_1B00F28(data, v10);
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
  Il2CppObject *Component_object; // x20
  BattleServantData_o *data; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_48E56E4 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_Collider___, flg);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    byte_48E56E4 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !flg || (data = this->fields.data) != 0LL && BattleServantData__isAlive(data, 0, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( v8 )
    {
      if ( !Component_object )
        sub_1B00F28(v8, v9);
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0LL);
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
  Il2CppObject *Component_object; // x20

  if ( (byte_48E56E3 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_Collider___, flg);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    byte_48E56E3 = 1;
  }
  root = this->fields.root;
  if ( !root )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(root, flg, 0LL);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  root = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Component_object,
                                       0LL,
                                       0LL);
  if ( ((unsigned __int8)root & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0LL);
      return;
    }
LABEL_10:
    sub_1B00F28(root, flg);
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
  _BOOL4 isSkillShift; // w19
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  int32_t MaxHp; // w0
  const MethodInfo *v30; // x4
  UnityEngine_GameObject_o *gameObject; // x19
  int32_t v32; // w2
  int32_t v33; // w3
  System_Object_array *v34; // x20
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  int32_t v40; // w2
  int32_t v41; // w3
  Il2CppObject *v42; // x22
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppObject *v50; // x21
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w2
  int32_t v54; // w3
  int32_t v55; // w2
  int32_t v56; // w3
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  int32_t v60; // w2
  int32_t v61; // w3
  Il2CppObject *v62; // x21
  int32_t v63; // w2
  int32_t v64; // w3
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  int32_t v68; // w2
  int32_t v69; // w3
  Il2CppObject *v70; // x21
  int32_t v71; // w2
  int32_t v72; // w3
  int32_t v73; // w2
  int32_t v74; // w3
  System_Collections_Hashtable_o *v75; // x0
  __int64 v76; // x0
  char v77[4]; // [xsp+0h] [xbp-40h] BYREF
  int v78; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t NowHp; // [xsp+8h] [xbp-38h] BYREF
  int v80; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_48E5702 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BattleServantParamComponent_shiftUpdateStatus__, method);
    sub_1B00CCC(&bool_TypeInfo, v3);
    sub_1B00CCC(&int_TypeInfo, v4);
    sub_1B00CCC(&object___TypeInfo, v5);
    sub_1B00CCC(&float_TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_19387/*"from"*/, v7);
    sub_1B00CCC(&StringLiteral_19954/*"ignoretimescale"*/, v8);
    sub_1B00CCC(&StringLiteral_23574/*"time"*/, v9);
    sub_1B00CCC(&StringLiteral_23958/*"updateShiftHplabel"*/, v10);
    sub_1B00CCC(&StringLiteral_21979/*"onupdate"*/, v11);
    sub_1B00CCC(&StringLiteral_23614/*"to"*/, v12);
    sub_1B00CCC(&StringLiteral_4603/*"ComplateUpdateShiftHplabel"*/, v13);
    sub_1B00CCC(&StringLiteral_21971/*"oncomplete"*/, v14);
    this = (BattleServantParamComponent_o *)sub_1B00CCC(&iTween_TypeInfo, v15);
    byte_48E5702 = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_79;
  this = (BattleServantParamComponent_o *)perf->fields.nowAction;
  if ( !this )
    goto LABEL_79;
  this = (BattleServantParamComponent_o *)BattleActionData__IsUpdateShiftHp((BattleActionData_o *)this, 0LL);
  v17 = v2->fields.perf;
  if ( !v17 )
    goto LABEL_79;
  nowAction = v17->fields.nowAction;
  if ( !nowAction )
    goto LABEL_79;
  v19 = (char)this;
  if ( nowAction->fields.isSkillShift )
  {
    this = (BattleServantParamComponent_o *)v2->fields.data;
    if ( !this )
      goto LABEL_79;
    BattleServantData__updateHp((BattleServantData_o *)this, 0LL);
    v17 = v2->fields.perf;
    if ( !v17 )
      goto LABEL_79;
  }
  this = (BattleServantParamComponent_o *)v17->fields.nowAction;
  if ( !this )
    goto LABEL_79;
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
        isSkillShift = v25->fields.isSkillShift;
        v27 = Method_BattleServantParamComponent_shiftUpdateStatus__;
        if ( (*((_BYTE *)Method_BattleServantParamComponent_shiftUpdateStatus__ + 83) & 2) != 0 )
          v27 = (_QWORD *)sub_1B00CE4(Method_BattleServantParamComponent_shiftUpdateStatus__);
        v28 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v27, v27[4]);
        if ( isSkillShift )
        {
          OverwriteAssetSoundName__PlayCommonSe(v28, 24, 0LL);
          return;
        }
        OverwriteAssetSoundName__PlayCommonSe(v28, 16, 0LL);
        this = (BattleServantParamComponent_o *)v2->fields.data;
        if ( this )
        {
          MaxHp = BattleServantData__getMaxHp((BattleServantData_o *)this, 0LL);
          BattleServantParamComponent__updateHplabel(v2, 0, MaxHp, 1, v30);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
          this = (BattleServantParamComponent_o *)sub_1B00D74(object___TypeInfo, 12LL);
          if ( this )
          {
            v34 = (System_Object_array *)this;
            v35 = StringLiteral_19387/*"from"*/;
            if ( StringLiteral_19387/*"from"*/ )
            {
              v35 = sub_1B00E08(StringLiteral_19387/*"from"*/, v34->obj.klass->_1.element_class);
              if ( !v35 )
                goto LABEL_81;
              v36 = StringLiteral_19387/*"from"*/;
            }
            else
            {
              v36 = 0LL;
            }
            if ( !v34->max_length )
              goto LABEL_80;
            v34->m_Items[0] = (Il2CppObject *)v36;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)v34->m_Items, v36, v32, v33);
            v80 = 0;
            v35 = j_il2cpp_value_box_0(int_TypeInfo, &v80, v37, v38, v39);
            v42 = (Il2CppObject *)v35;
            if ( v35 )
            {
              v35 = sub_1B00E08(v35, v34->obj.klass->_1.element_class);
              if ( !v35 )
                goto LABEL_81;
            }
            if ( v34->max_length <= 1 )
              goto LABEL_80;
            v34->m_Items[1] = v42;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v34->m_Items[1], (int32_t)v42, v40, v41);
            v35 = StringLiteral_23614/*"to"*/;
            if ( StringLiteral_23614/*"to"*/ )
            {
              v35 = sub_1B00E08(StringLiteral_23614/*"to"*/, v34->obj.klass->_1.element_class);
              if ( !v35 )
                goto LABEL_81;
              v36 = StringLiteral_23614/*"to"*/;
            }
            else
            {
              v36 = 0LL;
            }
            if ( v34->max_length <= 2 )
              goto LABEL_80;
            v34->m_Items[2] = (Il2CppObject *)v36;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v34->m_Items[2], v36, v43, v44);
            this = (BattleServantParamComponent_o *)v2->fields.data;
            if ( this )
            {
              NowHp = BattleServantData__getNowHp((BattleServantData_o *)this, 0LL);
              v35 = j_il2cpp_value_box_0(int_TypeInfo, &NowHp, v45, v46, v47);
              v50 = (Il2CppObject *)v35;
              if ( !v35 || (v35 = sub_1B00E08(v35, v34->obj.klass->_1.element_class)) != 0 )
              {
                if ( v34->max_length <= 3 )
                  goto LABEL_80;
                v34->m_Items[3] = v50;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)&v34->m_Items[3], (int32_t)v50, v48, v49);
                v35 = StringLiteral_21979/*"onupdate"*/;
                if ( StringLiteral_21979/*"onupdate"*/ )
                {
                  v35 = sub_1B00E08(StringLiteral_21979/*"onupdate"*/, v34->obj.klass->_1.element_class);
                  if ( !v35 )
                    goto LABEL_81;
                  v36 = StringLiteral_21979/*"onupdate"*/;
                }
                else
                {
                  v36 = 0LL;
                }
                if ( v34->max_length <= 4 )
                  goto LABEL_80;
                v34->m_Items[4] = (Il2CppObject *)v36;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)&v34->m_Items[4], v36, v51, v52);
                v35 = StringLiteral_23958/*"updateShiftHplabel"*/;
                if ( StringLiteral_23958/*"updateShiftHplabel"*/ )
                {
                  v35 = sub_1B00E08(StringLiteral_23958/*"updateShiftHplabel"*/, v34->obj.klass->_1.element_class);
                  if ( !v35 )
                    goto LABEL_81;
                  v36 = StringLiteral_23958/*"updateShiftHplabel"*/;
                }
                else
                {
                  v36 = 0LL;
                }
                if ( v34->max_length <= 5 )
                  goto LABEL_80;
                v34->m_Items[5] = (Il2CppObject *)v36;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)&v34->m_Items[5], v36, v53, v54);
                v35 = StringLiteral_23574/*"time"*/;
                if ( StringLiteral_23574/*"time"*/ )
                {
                  v35 = sub_1B00E08(StringLiteral_23574/*"time"*/, v34->obj.klass->_1.element_class);
                  if ( !v35 )
                    goto LABEL_81;
                  v36 = StringLiteral_23574/*"time"*/;
                }
                else
                {
                  v36 = 0LL;
                }
                if ( v34->max_length <= 6 )
                  goto LABEL_80;
                v34->m_Items[6] = (Il2CppObject *)v36;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)&v34->m_Items[6], v36, v55, v56);
                v78 = 1069547520;
                v35 = j_il2cpp_value_box_0(float_TypeInfo, &v78, v57, v58, v59);
                v62 = (Il2CppObject *)v35;
                if ( !v35 || (v35 = sub_1B00E08(v35, v34->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v34->max_length <= 7 )
                    goto LABEL_80;
                  v34->m_Items[7] = v62;
                  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v34->m_Items[7], (int32_t)v62, v60, v61);
                  v35 = StringLiteral_19954/*"ignoretimescale"*/;
                  if ( StringLiteral_19954/*"ignoretimescale"*/ )
                  {
                    v35 = sub_1B00E08(StringLiteral_19954/*"ignoretimescale"*/, v34->obj.klass->_1.element_class);
                    if ( !v35 )
                      goto LABEL_81;
                    v36 = StringLiteral_19954/*"ignoretimescale"*/;
                  }
                  else
                  {
                    v36 = 0LL;
                  }
                  if ( v34->max_length <= 8 )
                    goto LABEL_80;
                  v34->m_Items[8] = (Il2CppObject *)v36;
                  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v34->m_Items[8], v36, v63, v64);
                  v77[0] = 1;
                  v35 = j_il2cpp_value_box_0(bool_TypeInfo, v77, v65, v66, v67);
                  v70 = (Il2CppObject *)v35;
                  if ( !v35 || (v35 = sub_1B00E08(v35, v34->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v34->max_length <= 9 )
                      goto LABEL_80;
                    v34->m_Items[9] = v70;
                    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v34->m_Items[9], (int32_t)v70, v68, v69);
                    v35 = StringLiteral_21971/*"oncomplete"*/;
                    if ( StringLiteral_21971/*"oncomplete"*/ )
                    {
                      v35 = sub_1B00E08(StringLiteral_21971/*"oncomplete"*/, v34->obj.klass->_1.element_class);
                      if ( !v35 )
                        goto LABEL_81;
                      v36 = StringLiteral_21971/*"oncomplete"*/;
                    }
                    else
                    {
                      v36 = 0LL;
                    }
                    if ( v34->max_length <= 0xA )
                      goto LABEL_80;
                    v34->m_Items[10] = (Il2CppObject *)v36;
                    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v34->m_Items[10], v36, v71, v72);
                    v35 = StringLiteral_4603/*"ComplateUpdateShiftHplabel"*/;
                    if ( !StringLiteral_4603/*"ComplateUpdateShiftHplabel"*/ )
                    {
                      v36 = 0LL;
LABEL_74:
                      if ( v34->max_length > 0xB )
                      {
                        v34->m_Items[11] = (Il2CppObject *)v36;
                        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v34->m_Items[11], v36, v73, v74);
                        if ( !iTween_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                        v75 = iTween__Hash(v34, 0LL);
                        iTween__ValueTo(gameObject, v75, 0LL);
                        return;
                      }
LABEL_80:
                      sub_1B00F30(v35, v36);
                    }
                    v35 = sub_1B00E08(StringLiteral_4603/*"ComplateUpdateShiftHplabel"*/, v34->obj.klass->_1.element_class);
                    if ( v35 )
                    {
                      v36 = StringLiteral_4603/*"ComplateUpdateShiftHplabel"*/;
                      goto LABEL_74;
                    }
                  }
                }
              }
LABEL_81:
              v76 = sub_1B00F4C(v35);
              sub_1B00DF4(v76, 0LL);
            }
          }
        }
      }
    }
LABEL_79:
    sub_1B00F28(this, method);
  }
}


void __fastcall BattleServantParamComponent__showSideEffect(
        BattleServantParamComponent_o *this,
        BattleActionData_BuffData_o *buffData,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *sideEffectShowQueue; // x0
  const MethodInfo *v6; // x1
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_48E5704 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__, buffData);
    byte_48E5704 = 1;
  }
  sideEffectShowQueue = (System_Collections_Generic_Queue_T__o *)this->fields.sideEffectShowQueue;
  if ( !sideEffectShowQueue )
    sub_1B00F28(0LL, buffData);
  System_Collections_Generic_Queue_object___Enqueue(
    sideEffectShowQueue,
    (Il2CppObject *)buffData,
    (const MethodInfo_35332A8 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__);
  if ( !this->fields.isShowingSideEffect )
  {
    this->fields.isShowingSideEffect = 1;
    v7 = BattleServantParamComponent__showSideEffectList(this, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__showSideEffectList(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_48E5705 & 1) == 0 )
  {
    sub_1B00CCC(&BattleServantParamComponent__showSideEffectList_d__109_TypeInfo, method);
    byte_48E5705 = 1;
  }
  v3 = sub_1B00F18(BattleServantParamComponent__showSideEffectList_d__109_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
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
  BattleBuffData_ShowBuffData_array *ShowServantParam; // x0
  const MethodInfo *v11; // x1
  BattleServantShowBuffComponent_o *v12; // x21
  const MethodInfo *v13; // x2
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  struct BattleServantData_o *v16; // x8
  UnityEngine_Transform_o *transform; // x0
  struct BattleServantData_o *v18; // x8
  BattleActorControl_o *ServantActor; // x21
  struct BattleFBXComponent_o *fbxcomponent; // x8
  System_String_o *currentCommonAnimName; // x22
  System_String_o *v22; // x0
  HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_c *v23; // x8
  int v24; // w9
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  struct BattleServantData_o *v27; // x8
  int max_length; // w8
  BattleBuffData_ShowBuffData_array *v29; // x21
  int v30; // w24
  char v31; // w22
  BattleBuffData_ShowBuffData_o *v32; // x27
  int bounds; // w27
  struct BattleServantData_o *v34; // x8
  UnityEngine_Object_o *v35; // x20
  System_Enum_o v36; // [xsp+8h] [xbp-68h] BYREF
  int v37; // [xsp+18h] [xbp-58h]

  if ( (byte_48E56F6 & 1) == 0 )
  {
    sub_1B00CCC(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, buffData);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_13050/*"TAMAMOCAT_STUN_BUFF_ID"*/, v7);
    sub_1B00CCC(&StringLiteral_24237/*"wait"*/, v8);
    byte_48E56F6 = 1;
  }
  showBuffComponent = (UnityEngine_Object_o *)this->fields.showBuffComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)UnityEngine_Object__op_Equality(showBuffComponent, 0LL, 0LL);
  if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
    return;
  if ( !buffData )
    goto LABEL_54;
  v12 = this->fields.showBuffComponent;
  ShowServantParam = BattleBuffData__getShowServantParam(buffData, 0LL);
  if ( !v12 )
    goto LABEL_54;
  BattleServantShowBuffComponent__setBuffList(v12, ShowServantParam, v13);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_54;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_54;
  if ( data->fields.isMultiTargetBattle )
  {
    v16 = this->fields.data;
    if ( !v16 )
      goto LABEL_54;
    if ( v16->fields.isEnemy )
    {
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.showBuffComponent;
      if ( !ShowServantParam )
        goto LABEL_54;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ShowServantParam, 0LL);
      CommonFunction__SetColorAllChild(transform, this->fields.isActiveHpBar, this->fields.GRAY, 0LL);
      if ( this->fields.isActiveHpBar )
      {
        ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.showBuffComponent;
        if ( !ShowServantParam )
          goto LABEL_54;
        BattleServantShowBuffComponent__UpdateActiveBuffList((BattleServantShowBuffComponent_o *)ShowServantParam, v11);
      }
    }
  }
  v18 = this->fields.data;
  if ( !v18 || (ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.perf) == 0LL )
LABEL_54:
    sub_1B00F28(ShowServantParam, v11);
  ServantActor = BattlePerformance__getServantActor((BattlePerformance_o *)ShowServantParam, v18->fields.uniqueId, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)UnityEngine_Object__op_Inequality(
                                                            (UnityEngine_Object_o *)ServantActor,
                                                            0LL,
                                                            0LL);
  if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
  {
    ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.data;
    if ( !ShowServantParam )
      goto LABEL_54;
    ShowServantParam = (BattleBuffData_ShowBuffData_array *)BattleServantData__IsCounterWaitMotion(
                                                              (BattleServantData_o *)ShowServantParam,
                                                              0LL);
    if ( !ServantActor )
      goto LABEL_54;
    fbxcomponent = ServantActor->fields.fbxcomponent;
    if ( !fbxcomponent )
      goto LABEL_54;
    currentCommonAnimName = fbxcomponent->fields.currentCommonAnimName;
    if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
    {
      v36.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
      v36.monitor = (void *)-1LL;
      v37 = 9;
      v22 = System_Enum__ToString(&v36, 0LL);
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)BasicHelper__EqualExceptNullOrEmpty(
                                                                currentCommonAnimName,
                                                                v22,
                                                                0LL);
      if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
      {
        v23 = HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
        v24 = 49;
LABEL_30:
        v36.klass = (System_Enum_c *)v23;
        v36.monitor = (void *)-1LL;
        v37 = v24;
        v26 = System_Enum__ToString(&v36, 0LL);
        BattleActorControl__playAnimation_42343872(ServantActor, v26, 0, 0LL);
      }
    }
    else
    {
      v36.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
      v36.monitor = (void *)-1LL;
      v37 = 49;
      v25 = System_Enum__ToString(&v36, 0LL);
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)BasicHelper__EqualExceptNullOrEmpty(
                                                                currentCommonAnimName,
                                                                v25,
                                                                0LL);
      if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
      {
        v23 = HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
        v24 = 9;
        goto LABEL_30;
      }
    }
  }
  v27 = this->fields.data;
  if ( !v27 )
    goto LABEL_54;
  if ( !v27->fields.isSleepWaitMode )
    return;
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)BattleBuffData__getActiveList(buffData, 1, 0LL);
  if ( !ShowServantParam )
    goto LABEL_54;
  max_length = ShowServantParam->max_length;
  v29 = ShowServantParam;
  if ( max_length < 1 )
    goto LABEL_58;
  v30 = 0;
  v31 = 0;
  do
  {
    if ( v30 >= (unsigned int)max_length )
      sub_1B00F30(ShowServantParam, v11);
    v32 = v29->m_Items[v30];
    if ( !v32 )
      goto LABEL_54;
    if ( !BYTE1(v32[6].klass) )
    {
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)BattleBuffData__get_buffMst(buffData, 0LL);
      if ( !ShowServantParam )
        goto LABEL_54;
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)DataMasterBase_object__object__int___GetEntity(
                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)ShowServantParam,
                                                                v32->fields.buffId,
                                                                (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !ShowServantParam )
        goto LABEL_54;
      bounds = (int)ShowServantParam->bounds;
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)ConstantMaster__getValue(
                                                                (System_String_o *)StringLiteral_13050/*"TAMAMOCAT_STUN_BUFF_ID"*/,
                                                                0LL);
      v31 |= bounds == (_DWORD)ShowServantParam;
    }
    max_length = v29->max_length;
    ++v30;
  }
  while ( v30 < max_length );
  if ( (v31 & 1) == 0 )
  {
LABEL_58:
    ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.data;
    if ( !ShowServantParam )
      goto LABEL_54;
    BattleServantData__SetIsSleepWaitMode((BattleServantData_o *)ShowServantParam, 0, 0LL);
    v34 = this->fields.data;
    if ( !v34 )
      goto LABEL_54;
    ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.perf;
    if ( !ShowServantParam )
      goto LABEL_54;
    v35 = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                    (BattlePerformance_o *)ShowServantParam,
                                    v34->fields.uniqueId,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ShowServantParam = (BattleBuffData_ShowBuffData_array *)UnityEngine_Object__op_Inequality(v35, 0LL, 0LL);
    if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
    {
      if ( v35 )
      {
        if ( BattleActorControl__checkID((BattleActorControl_o *)v35, this->fields.uniqueID, 0LL) )
          BattleActorControl__playAnimation_42343872(
            (BattleActorControl_o *)v35,
            (System_String_o *)StringLiteral_24237/*"wait"*/,
            0,
            0LL);
        return;
      }
      goto LABEL_54;
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
  UnityEngine_Object_o *ServantActor; // x20
  System_Int32_array *AuraIdList; // x1

  if ( (byte_48E56F5 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, svtData);
    byte_48E56F5 = 1;
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
          goto LABEL_17;
        ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(perf, svtData->fields.uniqueId, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(ServantActor, 0LL, 0LL);
        if ( ((unsigned __int8)perf & 1) == 0 )
        {
          if ( !ServantActor )
            goto LABEL_17;
          BattleActorControl__updateBuffLoopEffect((BattleActorControl_o *)ServantActor, 0LL);
          BattleActorControl__UpdateActorVisibilityByBuff((BattleActorControl_o *)ServantActor, 0, 0LL);
          if ( doAuraUpdate )
          {
            perf = (BattlePerformance_o *)ServantActor[19].klass;
            if ( perf )
            {
              AuraIdList = BattleServantData__getAuraIdList((BattleServantData_o *)perf, 0LL);
              BattleActorControl__updateAura((BattleActorControl_o *)ServantActor, AuraIdList, 0LL);
              return;
            }
LABEL_17:
            sub_1B00F28(perf, v10);
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
  UnityEngine_Object_o *hpGauge; // x23
  int v10; // w22
  bool v11; // w0

  if ( (byte_48E56E9 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&now);
    byte_48E56E9 = 1;
  }
  data = (BattleHpGaugeBarComponent_o *)this->fields.data;
  if ( !data )
    goto LABEL_14;
  v8 = ((__int64 (__fastcall *)(BattleHpGaugeBarComponent_o *, void *, _QWORD, const MethodInfo *))data->klass[1]._1.parent)(
         data,
         data->klass[1]._1.generic_class,
         *(_QWORD *)&max,
         method);
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  v10 = v8;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL);
  if ( (v10 & 0x80000000) != 0 )
  {
    if ( v11 )
    {
      data = this->fields.hpGauge;
      if ( !data )
        goto LABEL_14;
      BattleHpGaugeBarComponent__setZero(data, 0LL);
    }
  }
  else if ( v11 )
  {
    data = this->fields.hpGauge;
    if ( data )
    {
      BattleHpGaugeBarComponent__setValue(data, now, max, 0LL);
      return;
    }
LABEL_14:
    sub_1B00F28(data, *(_QWORD *)&now);
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
  __int64 *v15; // x9
  System_String_o *v16; // x23
  UnityEngine_Object_o *hplabel; // x24
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  UILabel_o *v21; // x24
  Il2CppObject *v22; // x0
  System_String_o *data; // x0
  __int64 v24; // x1
  Il2CppObject *Component_object; // x24
  UnityEngine_Object_o *maxhplabel; // x24
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  UILabel_o *v30; // x24
  Il2CppObject *v31; // x0
  UnityEngine_Object_o *totalhplabel; // x23
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  UILabel_o *v36; // x23
  Il2CppObject *v37; // x24
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  __int64 *v42; // x8
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  UnityEngine_Object_o *breakSprite; // x22
  bool isShiftableServant; // w8
  bool v48; // w9
  bool v49; // w20
  UnityEngine_Object_o *v50; // x21
  UnityEngine_Object_o *v51; // x21
  UnityEngine_Object_o *v52; // x21
  int32_t v53; // [xsp+8h] [xbp-48h] BYREF
  int32_t v54; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_48E56EA & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, *(_QWORD *)&now);
    sub_1B00CCC(&int_TypeInfo, v9);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v10);
    sub_1B00CCC(&StringLiteral_24618/*"{0}"*/, v11);
    sub_1B00CCC(&StringLiteral_24689/*"{0}/{1}"*/, v12);
    sub_1B00CCC(&StringLiteral_24569/*"{0:#,0}"*/, v13);
    sub_1B00CCC(&StringLiteral_24572/*"{0:#,0}/{1:#,0}"*/, v14);
    byte_48E56EA = 1;
  }
  if ( this->fields.hpformatflg )
    v15 = &StringLiteral_24569/*"{0:#,0}"*/;
  else
    v15 = &StringLiteral_24618/*"{0}"*/;
  v16 = (System_String_o *)*v15;
  hplabel = (UnityEngine_Object_o *)this->fields.hplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hplabel, 0LL, 0LL) )
  {
    v21 = this->fields.hplabel;
    v54 = now;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v18, v19, v20);
    data = System_String__Format(v16, v22, 0LL);
    if ( !v21 )
      goto LABEL_51;
    UILabel__set_text(v21, data, 0LL);
    data = (System_String_o *)this->fields.hplabel;
    if ( !data )
      goto LABEL_51;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)data,
                         (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    data = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_51;
      CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)Component_object, 0LL);
    }
  }
  maxhplabel = (UnityEngine_Object_o *)this->fields.maxhplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maxhplabel, 0LL, 0LL) )
  {
    v30 = this->fields.maxhplabel;
    v54 = max;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v27, v28, v29);
    data = System_String__Format(v16, v31, 0LL);
    if ( !v30 )
      goto LABEL_51;
    UILabel__set_text(v30, data, 0LL);
  }
  totalhplabel = (UnityEngine_Object_o *)this->fields.totalhplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(totalhplabel, 0LL, 0LL) )
  {
    v36 = this->fields.totalhplabel;
    if ( this->fields.hpformatflg )
    {
      v54 = now;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v33, v34, v35);
      v53 = max;
      v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v38, v39, v40);
      v42 = &StringLiteral_24572/*"{0:#,0}/{1:#,0}"*/;
    }
    else
    {
      v54 = now;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v33, v34, v35);
      v53 = max;
      v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v43, v44, v45);
      v42 = &StringLiteral_24689/*"{0}/{1}"*/;
    }
    data = System_String__Format_60340120((System_String_o *)*v42, v37, v41, 0LL);
    if ( !v36 )
      goto LABEL_51;
    UILabel__set_text(v36, data, 0LL);
  }
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0LL, 0LL) && isDispBreak )
  {
    data = (System_String_o *)this->fields.data;
    if ( !data )
      goto LABEL_51;
    isShiftableServant = BattleServantData__isShiftableServant((BattleServantData_o *)data, 0LL);
    data = (System_String_o *)this->fields.breakSprite;
    v48 = now == 0;
    if ( !data )
      goto LABEL_51;
    v49 = v48 && isShiftableServant;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)data, v48 && isShiftableServant, 0LL);
    v50 = (UnityEngine_Object_o *)this->fields.hplabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v50, 0LL, 0LL) )
    {
      data = (System_String_o *)this->fields.hplabel;
      if ( !data )
        goto LABEL_51;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)data, !v49, 0LL);
    }
    v51 = (UnityEngine_Object_o *)this->fields.maxhplabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v51, 0LL, 0LL) )
    {
      data = (System_String_o *)this->fields.maxhplabel;
      if ( !data )
        goto LABEL_51;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)data, !v49, 0LL);
    }
    v52 = (UnityEngine_Object_o *)this->fields.totalhplabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v52, 0LL, 0LL) )
    {
      data = (System_String_o *)this->fields.totalhplabel;
      if ( data )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)data, !v49, 0LL);
        return;
      }
LABEL_51:
      sub_1B00F28(data, v24);
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
  if ( (byte_48E56E5 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1B00CCC(&UnityEngine_Object_TypeInfo, svtdata);
    byte_48E56E5 = 1;
  }
  if ( !svtdata )
    goto LABEL_12;
  data = v4->fields.data;
  if ( !data )
    goto LABEL_12;
  if ( svtdata->fields.uniqueId == data->fields.uniqueId )
  {
    npcomp = (UnityEngine_Object_o *)v4->fields.npcomp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL) )
    {
      this = (BattleServantParamComponent_o *)v4->fields.npcomp;
      if ( this )
      {
        BattleNpGaugeSystemComponent__changeParam((BattleNpGaugeSystemComponent_o *)this, svtdata->fields.np, 0LL);
        return;
      }
LABEL_12:
      sub_1B00F28(this, svtdata);
    }
  }
}


void __fastcall BattleServantParamComponent__updateNp_42639824(
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
  il2cpp_array_size_t max_length; // w8

  v8 = this;
  if ( (byte_48E56E6 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1B00CCC(&UnityEngine_Object_TypeInfo, svtdata);
    byte_48E56E6 = 1;
  }
  if ( !svtdata )
    goto LABEL_16;
  data = v8->fields.data;
  if ( !data )
    goto LABEL_16;
  if ( svtdata->fields.uniqueId == data->fields.uniqueId )
  {
    npcomp = (UnityEngine_Object_o *)v8->fields.npcomp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL);
    if ( npArray )
    {
      if ( v11 )
      {
        max_length = npArray->max_length;
        if ( (int)max_length > index )
        {
          if ( max_length <= index )
            sub_1B00F30(v11, svtdata);
          this = (BattleServantParamComponent_o *)v8->fields.npcomp;
          if ( this )
          {
            BattleNpGaugeSystemComponent__changeParam(
              (BattleNpGaugeSystemComponent_o *)this,
              npArray->m_Items[index + 1],
              0LL);
            return;
          }
LABEL_16:
          sub_1B00F28(this, svtdata);
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
    sub_1B00F28(0LL, nowHp);
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
      sub_1B00F28(BuffData, v6);
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
LABEL_31:
          sub_1B00F30(BuffData, v6);
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

  if ( (byte_48E56E8 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, svtData);
    byte_48E56E8 = 1;
  }
  nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(nextTdGauge, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_15;
    if ( !BattleServantData__hasTreasureDvc(data, 0LL) )
      goto LABEL_10;
    data = this->fields.data;
    if ( !data )
      goto LABEL_15;
    data = (BattleServantData_o *)BattleServantData__isTDSeraled(data, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
LABEL_10:
      data = (BattleServantData_o *)this->fields.nextTdGauge;
      if ( data )
      {
        BattleNextTDgaugeComponent__setHide((BattleNextTDgaugeComponent_o *)data, 0LL);
        return;
      }
LABEL_15:
      sub_1B00F28(data, v5);
    }
    v7 = this->fields.data;
    if ( !v7 )
      goto LABEL_15;
    data = (BattleServantData_o *)this->fields.nextTdGauge;
    if ( !data )
      goto LABEL_15;
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
  if ( (byte_48E56F0 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E56F0 = 1;
  }
  perf = v3->fields.perf;
  if ( !perf )
    goto LABEL_33;
  this = (BattleServantParamComponent_o *)perf->fields.data;
  if ( !this )
    goto LABEL_33;
  if ( !BYTE2(this[1].fields.sideEffectScl.fields.y) )
    goto LABEL_17;
  PartsActor = BattleData__GetPartsActor((BattleData_o *)this, 1, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Inequality(
                                            (UnityEngine_Object_o *)PartsActor,
                                            0LL,
                                            0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_17;
  if ( !PartsActor )
    goto LABEL_33;
  this = (BattleServantParamComponent_o *)PartsActor->fields.battleSvtData;
  if ( !this )
    goto LABEL_33;
  if ( BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL) )
  {
LABEL_17:
    data = v3->fields.data;
    if ( data )
    {
      if ( BattleServantData__isAlive(data, 0, 0LL) )
        goto LABEL_18;
      this = (BattleServantParamComponent_o *)v3->fields.data;
      if ( !this )
        goto LABEL_33;
      if ( BattleServantData__isGuts((BattleServantData_o *)this, 0LL) )
        goto LABEL_18;
      this = (BattleServantParamComponent_o *)v3->fields.data;
      if ( !this )
        goto LABEL_33;
      if ( BattleServantData__isOverKill((BattleServantData_o *)this, 0LL) )
      {
LABEL_18:
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
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    v15 = v3->fields.data;
                    if ( !v15 )
                      goto LABEL_33;
                    this = (BattleServantParamComponent_o *)v3->fields.npcomp;
                    if ( !this )
                      goto LABEL_33;
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
LABEL_33:
        sub_1B00F28(this, method);
      }
    }
  }
  BattleServantParamComponent__setTouch(v3, 0, v2);
  this = (BattleServantParamComponent_o *)v3->fields.root;
  if ( !this )
    goto LABEL_33;
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


bool __fastcall BattleServantParamComponent__CoAddClassIconEffect_d__122__MoveNext(
        BattleServantParamComponent__CoAddClassIconEffect_d__122_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleServantParamComponent__CoAddClassIconEffect_d__122_o *v4; // x19
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
  int32_t _1__state; // w8
  struct BattleServantParamComponent_o *_4__this; // x20
  Il2CppObject *v21; // x22
  struct BattleServantParamComponent___c__DisplayClass122_0_o **p__8__1; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x3
  struct BattleServantParamComponent___c__DisplayClass122_0_o *v26; // x23
  int32_t effectId; // w21
  System_Action_o *v28; // x22
  BattlePerformance_o *perf; // x23
  struct BattleServantParamComponent___c__DisplayClass122_0_o *_8__1; // x8
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  struct BattleServantData_o *servantData; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x21
  int32_t v35; // w22
  UnityEngine_Object_o *EffectObject; // x21
  BattleServantParamComponent__CoAddClassIconEffect_d__122_o *v37; // x22
  BattleServantParamComponent__CoAddClassIconEffect_d__122_o *v38; // x22
  BattleServantParamComponent__CoAddClassIconEffect_d__122_o *v39; // x22
  struct BattleServantParamComponent_o *v40; // x21
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  struct BattlePerformance_o *v44; // x8
  struct BattleData_o *data; // x8
  System_String_o *v46; // x21
  Il2CppObject *v47; // x0
  System_String_o *v48; // x22
  UnityEngine_Object_o *Manager__loadBattleCommonEffect; // x21
  UnityEngine_Object_o *facetex; // x22
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v52; // x21
  int32_t battleGenderType; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *component; // [xsp+28h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_48E5714 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&BattleEffectUtility_TypeInfo, v5);
    sub_1B00CCC(&Method_DataManager_GetMaster_EffectMaster___, v6);
    sub_1B00CCC(&DataManager_TypeInfo, v7);
    sub_1B00CCC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__GameObject__Add__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v10);
    sub_1B00CCC(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, v11);
    sub_1B00CCC(&int_TypeInfo, v12);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject____74661840, v13);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v14);
    sub_1B00CCC(&ServantAssetLoadManager_TypeInfo, v15);
    sub_1B00CCC(&Method_BattleServantParamComponent___c__DisplayClass122_0__CoAddClassIconEffect_b__0__, v16);
    sub_1B00CCC(&BattleServantParamComponent___c__DisplayClass122_0_TypeInfo, v17);
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)sub_1B00CCC(&StringLiteral_18567/*"ef_commandaura_{0}"*/, v18);
    byte_48E5714 = 1;
  }
  component = 0LL;
  name = 0LL;
  path = 0LL;
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    v21 = (Il2CppObject *)sub_1B00F18(BattleServantParamComponent___c__DisplayClass122_0_TypeInfo);
    System_Object___ctor(v21, 0LL);
    v4->fields.__8__1 = (struct BattleServantParamComponent___c__DisplayClass122_0_o *)v21;
    p__8__1 = &v4->fields.__8__1;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v21, v23, v24);
    method = (const MethodInfo *)(unsigned int)v4->fields.effectId;
    if ( (int)method < 1 )
      return 0;
    if ( !_4__this )
      goto LABEL_71;
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)_4__this->fields.classIconEffectDict;
    if ( !this )
      goto LABEL_71;
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                                           (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                           (int32_t)method,
                                                                           (const MethodInfo_3036720 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 0;
    if ( _4__this->fields.currentClassIconAuraEffectPriority < v4->fields.priority )
    {
      BattleServantParamComponent__DestroyAllEffect(_4__this, _4__this->fields.classIconEffectDict, 0, v25);
      _4__this->fields.currentClassIconAuraEffectPriority = v4->fields.priority;
    }
    v26 = *p__8__1;
    if ( !*p__8__1 )
      goto LABEL_71;
    v26->fields.isLoading = 1;
    effectId = v4->fields.effectId;
    v28 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(
      v28,
      (Il2CppObject *)v26,
      Method_BattleServantParamComponent___c__DisplayClass122_0__CoAddClassIconEffect_b__0__,
      0LL);
    perf = _4__this->fields.perf;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    BattleEffectUtility__LoadEffectAssetIfNotYet(effectId, v28, perf, 0LL);
  }
  _8__1 = v4->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_71;
  if ( _8__1->fields.isLoading )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B00C70(p__2__current, 0, v2, v3);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
    return result;
  }
  if ( !_4__this )
    goto LABEL_71;
  servantData = v4->fields.servantData;
  if ( !servantData )
    goto LABEL_71;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_71;
  ServantGameObject = BattlePerformance__getServantGameObject(
                        (BattlePerformance_o *)this,
                        servantData->fields.uniqueId,
                        0LL);
  if ( !ServantGameObject )
    ServantGameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
  v35 = v4->fields.effectId;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectObject = (UnityEngine_Object_o *)BattleEffectUtility__getEffectObject(v35, ServantGameObject, 1, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)UnityEngine_Object__op_Equality(
                                                                         EffectObject,
                                                                         0LL,
                                                                         0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !EffectObject )
    goto LABEL_71;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0LL);
  if ( !_4__this->fields.clsIconComponent )
    goto LABEL_71;
  v37 = this;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                                                                         0LL);
  if ( !v37 )
    goto LABEL_71;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v37, (UnityEngine_Transform_o *)this, 0LL);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0LL);
  v38 = this;
  if ( !byte_48DD9F6 )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)sub_1B00CCC(
                                                                           &UnityEngine_Vector3_TypeInfo,
                                                                           method);
    byte_48DD9F6 = 1;
  }
  if ( !v38 )
    goto LABEL_71;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v38,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0LL);
  v39 = this;
  if ( !byte_48DD9F1 )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)sub_1B00CCC(
                                                                           &UnityEngine_Vector3_TypeInfo,
                                                                           method);
    byte_48DD9F1 = 1;
  }
  if ( !v39 )
    goto LABEL_71;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v39,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectObject, 1, 0LL);
  if ( UnityEngine_GameObject__TryGetComponent_object_(
         (UnityEngine_GameObject_o *)EffectObject,
         &component,
         (const MethodInfo_2DAF098 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)component;
    if ( !component )
      goto LABEL_71;
    CommonEffectComponent__Init((CommonEffectComponent_o *)component, 0, 0, 0LL);
  }
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)_4__this->fields.classIconEffectDict;
  if ( !this )
    goto LABEL_71;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.effectId,
          (const MethodInfo_3036720 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)_4__this->fields.classIconEffectDict;
    if ( !this )
      goto LABEL_71;
    System_Collections_Generic_Dictionary_int__object___Add(
      (System_Collections_Generic_Dictionary_int__object__o *)this,
      v4->fields.effectId,
      (Il2CppObject *)EffectObject,
      (const MethodInfo_303652C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
  }
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)_4__this->fields.commandSpellEffectDict;
  if ( !this )
LABEL_71:
    sub_1B00F28(this, method);
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.effectId,
          (const MethodInfo_3036720 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EffectMaster___);
    if ( this )
    {
      this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)DataMasterBase_object__object__int___GetEntity(
                                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                             v4->fields.effectId,
                                                                             (const MethodInfo_2FE6A4C *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( this )
      {
        v40 = this->fields.__4__this;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        BattleEffectUtility__GetBattleCommonEffectPathAndName((System_String_o *)v40, &path, &name, 0LL);
        v44 = _4__this->fields.perf;
        if ( v44 )
        {
          data = v44->fields.data;
          if ( data )
          {
            v46 = path;
            battleGenderType = data->fields.battleGenderType;
            v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &battleGenderType, v41, v42, v43);
            v48 = System_String__Format((System_String_o *)StringLiteral_18567/*"ef_commandaura_{0}"*/, v47, 0LL);
            if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            Manager__loadBattleCommonEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                        v46,
                                                                        v48,
                                                                        0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(Manager__loadBattleCommonEffect, 0LL, 0LL) )
              return 0;
            facetex = (UnityEngine_Object_o *)_4__this->fields.facetex;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(facetex, 0LL, 0LL) )
              return 0;
            this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)_4__this->fields.facetex;
            if ( this )
            {
              transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v52 = UnityEngine_Object__Instantiate_object__48061460(
                      (Il2CppObject *)Manager__loadBattleCommonEffect,
                      transform,
                      (const MethodInfo_2DD5C14 *)Method_UnityEngine_Object_Instantiate_GameObject____74661840);
              GameObjectExtensions__ResetTransform((UnityEngine_GameObject_o *)v52, 0LL);
              if ( v52 )
              {
                UnityEngine_GameObject__SetActive(
                  (UnityEngine_GameObject_o *)v52,
                  !_4__this->fields.isHideFaceTexture,
                  0LL);
                this = (BattleServantParamComponent__CoAddClassIconEffect_d__122_o *)_4__this->fields.commandSpellEffectDict;
                if ( this )
                {
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)this,
                    v4->fields.effectId,
                    v52,
                    (const MethodInfo_303652C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
                  return 0;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_71;
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

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_BattleServantParamComponent__CoAddClassIconEffect_d__122_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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
  int32_t v6; // w2
  int32_t v7; // w3
  bool result; // w0
  struct BattleCallBackBase_o *callBack; // x0

  if ( (byte_48E5715 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_48E5715 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callBack = this->fields.callBack;
    this->fields.__1__state = -1;
    if ( !callBack )
      sub_1B00F28(0LL, method);
    ((void (__fastcall *)(struct BattleCallBackBase_o *, const char *))callBack->klass[1]._1.gc_desc)(
      callBack,
      callBack->klass[1]._1.name);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    waitTime = this->fields.waitTime;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1B00F18(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v5, v6, v7);
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

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_BattleServantParamComponent__DelayMethod_d__113_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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

  if ( (byte_48E5713 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, method);
    byte_48E5713 = 1;
  }
  effectDict = this->fields.effectDict;
  if ( !effectDict )
    sub_1B00F28(0LL, method);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
    this->fields.id,
    (const MethodInfo_30379B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
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
  __int64 v3; // x3
  __int64 v4; // x4
  BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *v5; // x19
  int32_t _1__state; // w8
  __int64 v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  bool result; // w0
  struct BattleServantParamComponent_o *_4__this; // x20
  struct BattleServantSkillIConComponent_array *skillIcon; // x19
  int max_length; // w8
  int v14; // w22
  char v15; // w21
  int v16; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_48E5716 & 1) == 0 )
  {
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *)sub_1B00CCC(&int_TypeInfo, method);
    byte_48E5716 = 1;
  }
  _1__state = v5->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v5->fields.__4__this;
    v5->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_21;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_21;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *)BattleServantData__get_BuffData(
                                                                                      (BattleServantData_o *)this,
                                                                                      0LL);
    if ( !this )
      goto LABEL_21;
    BattleBuffData__UpdateSkillRelationBuff((BattleBuffData_o *)this, 0LL);
    skillIcon = _4__this->fields.skillIcon;
    if ( !skillIcon )
      goto LABEL_21;
    max_length = skillIcon->max_length;
    if ( max_length < 1 )
      return 0;
    v14 = 0;
    v15 = 0;
    do
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1B00F30(this, method);
      this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *)skillIcon->m_Items[v14];
      if ( !this )
        goto LABEL_21;
      this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *)BattleServantSkillIConComponent__UpdateSkillRankUpEffect(
                                                                                        (BattleServantSkillIConComponent_o *)this,
                                                                                        method);
      max_length = skillIcon->max_length;
      ++v14;
      v15 |= (unsigned __int8)this;
    }
    while ( v14 < max_length );
    if ( (v15 & 1) == 0 )
      return 0;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *)_4__this->fields.data;
    if ( !this
      || (this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *)BattleServantData__get_BuffData(
                                                                                            (BattleServantData_o *)this,
                                                                                            0LL)) == 0LL
      || (this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_o *)this[2].klass) == 0LL )
    {
LABEL_21:
      sub_1B00F28(this, method);
    }
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter((BattleBuffData_SkillRankChangeData_o *)this, 0, 0LL);
  }
  else if ( !_1__state )
  {
    v5->fields.__1__state = -1;
    v16 = 0;
    v7 = j_il2cpp_value_box_0(int_TypeInfo, &v16, v2, v3, v4);
    v5->fields.__2__current = (Il2CppObject *)v7;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v5->fields.__2__current, v7, v8, v9);
    result = 1;
    v5->fields.__1__state = 1;
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

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__82_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleServantParamComponent_o *_4__this; // x20
  BattleActionData_BuffData_o *v8; // x21
  BattleServantParamComponent__showSideEffectList_d__109_o *v9; // x22
  int32_t statusEffectId; // w23
  float x; // s10
  float y; // s8
  float z; // s9
  const MethodInfo *v14; // x2
  BattleServantParamComponent_c *v15; // x0
  float SideEffectShowWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v17; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v19; // w2
  int32_t v20; // w3
  bool result; // w0
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_48E5717 & 1) == 0 )
  {
    sub_1B00CCC(&BattleEffectUtility_TypeInfo, method);
    sub_1B00CCC(&BattleServantParamComponent_TypeInfo, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__get_Count__, v5);
    this = (BattleServantParamComponent__showSideEffectList_d__109_o *)sub_1B00CCC(
                                                                         &UnityEngine_WaitForSeconds_TypeInfo,
                                                                         v6);
    byte_48E5717 = 1;
  }
  if ( v2->fields.__1__state >= 2u )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_16;
  this = (BattleServantParamComponent__showSideEffectList_d__109_o *)_4__this->fields.sideEffectShowQueue;
  if ( !this )
    goto LABEL_16;
  if ( !LODWORD(this->fields.__4__this) )
  {
    result = 0;
    _4__this->fields.isShowingSideEffect = 0;
    return result;
  }
  this = (BattleServantParamComponent__showSideEffectList_d__109_o *)System_Collections_Generic_Queue_object___Dequeue(
                                                                       (System_Collections_Generic_Queue_T__o *)this,
                                                                       (const MethodInfo_3533438 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__);
  if ( !_4__this->fields.clsIconComponent
    || (v8 = (BattleActionData_BuffData_o *)this,
        this = (BattleServantParamComponent__showSideEffectList_d__109_o *)UnityEngine_Component__get_transform(
                                                                             (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                                                                             0LL),
        !v8) )
  {
LABEL_16:
    sub_1B00F28(this, method);
  }
  v9 = this;
  statusEffectId = v8->fields.statusEffectId;
  x = _4__this->fields.sideEffectScl.fields.x;
  y = _4__this->fields.sideEffectScl.fields.y;
  z = _4__this->fields.sideEffectScl.fields.z;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  BattleEffectUtility__showSideEffect((UnityEngine_Transform_o *)v9, statusEffectId, v22, 0LL);
  BattleServantParamComponent__popBuffLabel(_4__this, v8, v14);
  v15 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v15 = BattleServantParamComponent_TypeInfo;
  }
  SideEffectShowWaitTime = v15->static_fields->SideEffectShowWaitTime;
  v17 = (UnityEngine_WaitForSeconds_o *)sub_1B00F18(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v17, SideEffectShowWaitTime, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v17;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B00C70(p__2__current, (int32_t)v17, v19, v20);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_BattleServantParamComponent__showSideEffectList_d__109_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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