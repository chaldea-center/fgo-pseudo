void __fastcall BattleServantParamComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FF407 & 1) == 0 )
  {
    sub_1B640C8(&BattleServantParamComponent_TypeInfo, v1);
    byte_49FF407 = 1;
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_Queue_T__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  __int64 v16; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v18; // d1
  float z; // s2
  System_Collections_Generic_Dictionary_int__object__o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_Dictionary_int__object__o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3

  if ( (byte_49FF406 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v3);
    sub_1B640C8(&UnityEngine_GameObject___TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo, v6);
    byte_49FF406 = 1;
  }
  v7 = (struct UnityEngine_GameObject_array *)sub_1B64170(UnityEngine_GameObject___TypeInfo, 1LL);
  this->fields.effectobj = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectobj, (int32_t)v7, v8, v9);
  v12 = (System_Collections_Generic_Queue_T__o *)sub_1B64314(
                                                   System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo,
                                                   v10,
                                                   v11);
  System_Collections_Generic_Queue_object____ctor(
    v12,
    (const MethodInfo_362251C *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__);
  this->fields.sideEffectShowQueue = (struct System_Collections_Generic_Queue_BattleActionData_BuffData__o *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.sideEffectShowQueue, (int32_t)v12, v13, v14);
  if ( !byte_49F7116 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v15);
    byte_49F7116 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v18 = *(_QWORD *)&static_fields->oneVector.fields.x;
  z = static_fields->oneVector.fields.z;
  this->fields.sideEffectLabelWidth = 100.0;
  this->fields.GRAY = (struct UnityEngine_Color_o)xmmword_BA2720;
  *(_QWORD *)&this->fields.sideEffectScl.fields.x = v18;
  this->fields.sideEffectScl.fields.z = z;
  this->fields.isActiveHpBar = 1;
  v20 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__GameObject__TypeInfo,
                                                                  v15,
                                                                  v16);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v20,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.classIconEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.classIconEffectDict, (int32_t)v20, v21, v22);
  v25 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__GameObject__TypeInfo,
                                                                  v23,
                                                                  v24);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v25,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.commandSpellEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.commandSpellEffectDict, (int32_t)v25, v26, v27);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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

  if ( (byte_49FF401 & 1) == 0 )
  {
    sub_1B640C8(&BattleServantParamComponent__CoAddClassIconEffect_d__124_TypeInfo, *(_QWORD *)&effectId);
    byte_49FF401 = 1;
  }
  v9 = sub_1B64314(
         BattleServantParamComponent__CoAddClassIconEffect_d__124_TypeInfo,
         *(_QWORD *)&effectId,
         *(_QWORD *)&priority);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)this, v10, v11);
  *(_DWORD *)(v9 + 32) = effectId;
  *(_DWORD *)(v9 + 48) = priority;
  *(_QWORD *)(v9 + 64) = servantData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 64), (int32_t)servantData, v12, v13);
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
    sub_1B64324(0LL);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
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

  if ( (byte_49FF3FA & 1) == 0 )
  {
    sub_1B640C8(&BattleServantParamComponent__DelayMethod_d__115_TypeInfo, callBack);
    byte_49FF3FA = 1;
  }
  v6 = sub_1B64314(BattleServantParamComponent__DelayMethod_d__115_TypeInfo, callBack, method);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(float *)(v6 + 32) = waitTime;
  *(_QWORD *)(v6 + 40) = callBack;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v6 + 40), (int32_t)callBack, v7, v8);
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
        sub_1B6432C(this, method);
      this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
      if ( !this )
        break;
      BattleServantSkillIConComponent__DeleteRankUpEffect((BattleServantSkillIConComponent_o *)this, method);
      max_length = skillIcon->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1B64324(this);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  __int64 v11; // x8
  System_Int32_array *v12; // x21
  unsigned __int64 v13; // x22
  bool v14; // w20

  if ( (byte_49FF3FF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, effectDict);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    byte_49FF3FF = 1;
  }
  IsNullOrEmpty = (System_Int32_array *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)effectDict, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !effectDict
      || (Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                   (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
                   (const MethodInfo_3123644 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__),
          (IsNullOrEmpty = System_Linq_Enumerable__ToArray_int_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                             (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___)) == 0LL) )
    {
      sub_1B64324(IsNullOrEmpty);
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
          sub_1B6432C(IsNullOrEmpty, v9);
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


void __fastcall BattleServantParamComponent__DestroyBattlePointGauge(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battlePointGaugeComponent; // x20
  UnityEngine_Component_o **p_battlePointGaugeComponent; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FF405 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF405 = 1;
  }
  battlePointGaugeComponent = (UnityEngine_Object_o *)this->fields.battlePointGaugeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battlePointGaugeComponent, 0LL, 0LL) )
  {
    p_battlePointGaugeComponent = (UnityEngine_Component_o **)&this->fields.battlePointGaugeComponent;
    if ( !*p_battlePointGaugeComponent )
      sub_1B64324(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_battlePointGaugeComponent, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    *p_battlePointGaugeComponent = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_battlePointGaugeComponent, 0, v6, v7);
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
  Il2CppObject *Item; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject **v19; // x20
  System_Collections_ICollection_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *v23; // x20
  System_Action_o *v24; // x21
  Il2CppObject *v25; // x21
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FF400 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, effectDict);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v10);
    sub_1B640C8(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&Method_BattleServantParamComponent___c__DisplayClass122_0__DestroyEffectObject_b__0__, v13);
    sub_1B640C8(&BattleServantParamComponent___c__DisplayClass122_0_TypeInfo, v14);
    byte_49FF400 = 1;
  }
  component = 0LL;
  v15 = sub_1B64314(BattleServantParamComponent___c__DisplayClass122_0_TypeInfo, effectDict, *(_QWORD *)&id);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_19;
  *(_QWORD *)(v15 + 16) = effectDict;
  v19 = (Il2CppObject **)(v15 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)effectDict, v17, v18);
  v20 = *(System_Collections_ICollection_o **)(v15 + 16);
  *(_DWORD *)(v15 + 24) = id;
  if ( !BasicHelper__IsNullOrEmpty(v20, 0LL) )
  {
    Item = *v19;
    if ( !*v19 )
      goto LABEL_19;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)Item,
           *(_DWORD *)(v15 + 24),
           (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    {
      if ( !forceDestroy )
      {
        Item = *v19;
        if ( !*v19 )
          goto LABEL_19;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 (System_Collections_Generic_Dictionary_int__object__o *)Item,
                 *(_DWORD *)(v15 + 24),
                 (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
        if ( !Item )
          goto LABEL_19;
        if ( UnityEngine_GameObject__TryGetComponent_object_(
               (UnityEngine_GameObject_o *)Item,
               &component,
               (const MethodInfo_2E89168 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
        {
          v23 = component;
          v24 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v21, v22);
          System_Action___ctor(
            v24,
            (Il2CppObject *)v15,
            Method_BattleServantParamComponent___c__DisplayClass122_0__DestroyEffectObject_b__0__,
            0LL);
          if ( v23 )
          {
            ((void (__fastcall *)(Il2CppObject *, __int64, System_Action_o *, Il2CppMethodPointer))v23->klass->vtable[8].method)(
              v23,
              1LL,
              v24,
              v23->klass->vtable[9].methodPtr);
            return;
          }
LABEL_19:
          sub_1B64324(Item);
        }
      }
      Item = *v19;
      if ( !*v19 )
        goto LABEL_19;
      v25 = System_Collections_Generic_Dictionary_int__object___get_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)Item,
              *(_DWORD *)(v15 + 24),
              (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)v25, 0LL);
      Item = *v19;
      if ( !*v19 )
        goto LABEL_19;
      System_Collections_Generic_Dictionary_int__object___Remove(
        (System_Collections_Generic_Dictionary_int__object__o *)Item,
        *(_DWORD *)(v15 + 24),
        (const MethodInfo_3124E0C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
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
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v14; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v15; // [xsp+20h] [xbp-60h] BYREF
  Il2CppObject *component; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_49FF402 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__, effectDict);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__, v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__,
      v7);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v8);
    sub_1B640C8(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    this = (BattleServantParamComponent_o *)sub_1B640C8(
                                              &Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__,
                                              v11);
    byte_49FF402 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  component = 0LL;
  if ( !effectDict
    || (this = (BattleServantParamComponent_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                  (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
                                                  (const MethodInfo_3123794 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
    sub_1B64324(this);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v14,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_37B55F8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  v15 = v14;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v15,
            (const MethodInfo_326A8E8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    currentValue = v15.fields._currentValue;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)currentValue, 0LL, 0LL);
    if ( !v13 )
    {
      if ( !currentValue )
        sub_1B64324(v13);
      if ( UnityEngine_GameObject__TryGetComponent_object_(
             (UnityEngine_GameObject_o *)currentValue,
             &component,
             (const MethodInfo_2E89168 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentValue, 1, 0LL);
        if ( isStart )
        {
          if ( !component )
            sub_1B64324(0LL);
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)component, 0LL);
        }
        else
        {
          if ( !component )
            sub_1B64324(0LL);
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
    &v15,
    (const MethodInfo_326A8E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
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

  if ( (byte_49FF3F0 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF3F0 = 1;
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
        sub_1B64324(isTDSeraled);
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
  int32_t uniqueId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FF3CF & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_22160/*"onClickServant"*/, v4);
    byte_49FF3CF = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) && this->fields.uniqueID != -1 )
  {
    data = this->fields.data;
    if ( data )
    {
      v7 = this->fields.target;
      uniqueId = data->fields.uniqueId;
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &uniqueId);
      if ( !v7 )
        sub_1B64324(v8);
      UnityEngine_GameObject__SendMessage_69109108(v7, (System_String_o *)StringLiteral_22160/*"onClickServant"*/, v8, 0LL);
    }
  }
}


void __fastcall BattleServantParamComponent__OnCompleteShiftGaugeChangeHp(
        BattleServantParamComponent_o *this,
        BattleAction_BasePlayShiftGauge_o *playShiftGauge,
        const MethodInfo *method)
{
  if ( !playShiftGauge )
    sub_1B64324(this);
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

  if ( (byte_49FF3F3 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&nowHp);
    byte_49FF3F3 = 1;
  }
  BattleServantParamComponent__updateHplabel(this, nowHp, this->fields.shiftGaugeMaxHp, 0, v3);
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL) )
  {
    v7 = this->fields.hpGauge;
    if ( !v7
      || (BattleHpGaugeBarComponent__updateDamageGauge(v7, (float)nowHp / (float)this->fields.shiftGaugeMaxHp, 0LL),
          (v7 = this->fields.hpGauge) == 0LL) )
    {
      sub_1B64324(v7);
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
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF3EE & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_49FF3EE = 1;
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
            v8),
          (v9 = this->fields.hpShift) == 0LL) )
    {
      sub_1B64324(v9);
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
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF3EC & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_49FF3EC = 1;
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
      sub_1B64324(0LL);
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
  UnityEngine_Object_o *hpShift; // x22
  const MethodInfo *v14; // x3
  BattleServantHpShiftComponent_o *v15; // x0
  const MethodInfo *v16; // x6
  Il2CppObject *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_int__bool__bool__o *v20; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  BattleCallBack_int__bool__bool__o *v23; // x21
  BattleServantParamComponent_o *v24; // x0
  const MethodInfo *v25; // x2
  System_Collections_IEnumerator_o *v26; // x0
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF3ED & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__bool__bool__TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&Method_BattleCallBack_int__bool__bool___ctor__, v9);
    sub_1B640C8(&BattleCallBack_int__bool__bool__TypeInfo, v10);
    sub_1B640C8(&Method_BattleServantHpShiftComponent_UpdateIcon__, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    byte_49FF3ED = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
  {
    v15 = this->fields.hpShift;
    if ( !v15
      || (BattleServantHpShiftComponent__UpdateIconActive(v15, index, 1, v14), (v15 = this->fields.hpShift) == 0LL) )
    {
      sub_1B64324(v15);
    }
    BattleServantHpShiftComponent__PlayShiftEffectGeneral(v15, index, effectData, this, &nextAnimationTime, 0LL, v16);
    v17 = (Il2CppObject *)this->fields.hpShift;
    v20 = (System_Action_int__bool__bool__o *)sub_1B64314(System_Action_int__bool__bool__TypeInfo, v18, v19);
    System_Action_int__bool__bool____ctor(v20, v17, Method_BattleServantHpShiftComponent_UpdateIcon__, 0LL);
    v23 = (BattleCallBack_int__bool__bool__o *)sub_1B64314(BattleCallBack_int__bool__bool__TypeInfo, v21, v22);
    BattleCallBack_int__bool__bool____ctor(
      v23,
      index,
      0,
      1,
      (System_Action_T1__T2__T3__o *)v20,
      (const MethodInfo_304CA24 *)Method_BattleCallBack_int__bool__bool___ctor__);
    v26 = BattleServantParamComponent__DelayMethod(v24, delayTime, (BattleCallBackBase_o *)v23, v25);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v26, 0LL);
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
        sub_1B6432C(this, method);
      this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
      if ( !this )
        break;
      BattleServantSkillIConComponent__RemoveEffectClearRankUpBuff((BattleServantSkillIConComponent_o *)this, method);
      max_length = skillIcon->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1B64324(this);
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
    sub_1B64324(showBuffComponent);
  }
  v13->fields.maxLine = (int)showBuffComponent;
}


void __fastcall BattleServantParamComponent__UpdateBattlePoint(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v4; // x19
  struct BattleServantData_o *data; // x8
  UnityEngine_Object_o *battlePointGaugeComponent; // x20
  struct BattlePointGaugeComponent_o *v7; // x8
  BattlePointGaugeComponent_o *v8; // x8

  v4 = this;
  if ( (byte_49FF403 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, svtdata);
    byte_49FF403 = 1;
  }
  if ( !svtdata )
    goto LABEL_15;
  data = v4->fields.data;
  if ( !data )
    goto LABEL_15;
  if ( svtdata->fields.uniqueId == data->fields.uniqueId )
  {
    battlePointGaugeComponent = (UnityEngine_Object_o *)v4->fields.battlePointGaugeComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Equality(battlePointGaugeComponent, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v7 = v4->fields.battlePointGaugeComponent;
      if ( !v7 )
        goto LABEL_15;
      this = (BattleServantParamComponent_o *)v4->fields.data;
      if ( !this )
        goto LABEL_15;
      this = (BattleServantParamComponent_o *)BattleServantData__GetBattlePointData(
                                                (BattleServantData_o *)this,
                                                v7->fields.battlePointId,
                                                0LL);
      if ( this )
      {
        v8 = v4->fields.battlePointGaugeComponent;
        if ( v8 )
        {
          BattlePointGaugeComponent__UpdateBattlePoint(
            v8,
            *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1),
            0LL);
          return;
        }
LABEL_15:
        sub_1B64324(this);
      }
    }
  }
}


void __fastcall BattleServantParamComponent__UpdateBattlePointImmediately(
        BattleServantParamComponent_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  BattleServantParamComponent_o *v4; // x19
  struct BattleServantData_o *data; // x8
  UnityEngine_Object_o *battlePointGaugeComponent; // x20
  struct BattlePointGaugeComponent_o *v7; // x8
  BattlePointGaugeComponent_o *v8; // x8

  v4 = this;
  if ( (byte_49FF404 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, svtdata);
    byte_49FF404 = 1;
  }
  if ( !svtdata )
    goto LABEL_15;
  data = v4->fields.data;
  if ( !data )
    goto LABEL_15;
  if ( svtdata->fields.uniqueId == data->fields.uniqueId )
  {
    battlePointGaugeComponent = (UnityEngine_Object_o *)v4->fields.battlePointGaugeComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Equality(battlePointGaugeComponent, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v7 = v4->fields.battlePointGaugeComponent;
      if ( !v7 )
        goto LABEL_15;
      this = (BattleServantParamComponent_o *)v4->fields.data;
      if ( !this )
        goto LABEL_15;
      this = (BattleServantParamComponent_o *)BattleServantData__GetBattlePointData(
                                                (BattleServantData_o *)this,
                                                v7->fields.battlePointId,
                                                0LL);
      if ( this )
      {
        v8 = v4->fields.battlePointGaugeComponent;
        if ( v8 )
        {
          BattlePointGaugeComponent__UpdateBattlePointImmediately(
            v8,
            *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1),
            0LL);
          return;
        }
LABEL_15:
        sub_1B64324(this);
      }
    }
  }
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
  System_Collections_Generic_List_int__o *v26; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x22
  _BOOL8 v28; // x0
  Il2CppObject *current; // x23
  _BOOL8 v30; // x0
  const MethodInfo *v31; // x4
  System_Collections_IEnumerator_o *v32; // x0
  UnityEngine_Coroutine_o *started; // x0
  _BOOL8 v34; // x0
  int32_t monitor; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_int__object__o *classIconEffectDict; // x0
  int32_t v40; // w20
  _BOOL8 v41; // x0
  const MethodInfo *v42; // x4
  BattleServantParamComponent_o *v43; // x0
  const MethodInfo *v44; // x4
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+40h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_49FF3FE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_AuraEffectMaster___, servantData);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v19);
    this = (BattleServantParamComponent_o *)sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v20);
    byte_49FF3FE = 1;
  }
  memset(&v48, 0, sizeof(v48));
  entity = 0LL;
  memset(&v46, 0, sizeof(v46));
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
  v26 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v22, v23);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleServantParamComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_AuraEffectMaster___);
  if ( !v4->fields.classIconEffectDict )
    goto LABEL_38;
  v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  this = (BattleServantParamComponent_o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                            (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.classIconEffectDict,
                                            (const MethodInfo_3123634 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
  if ( (int)this <= 0 )
    v4->fields.currentClassIconAuraEffectPriority = 0;
  if ( !ClassIconEffectBuffList )
    goto LABEL_38;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    (System_Collections_Generic_List_object__o *)ClassIconEffectBuffList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v48 = v45;
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v28 )
      break;
    current = v48.fields._current;
    if ( !v48.fields._current )
      sub_1B64324(v28);
    if ( !v27 )
      sub_1B64324(v28);
    v30 = DataMasterBase_object__object__int___TryGetEntity(
            v27,
            &entity,
            (int32_t)v48.fields._current[21].monitor,
            (const MethodInfo_30D3EF8 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    if ( v30 )
    {
      if ( !entity )
        sub_1B64324(v30);
      v32 = BattleServantParamComponent__CoAddClassIconEffect(
              v4,
              HIDWORD(entity[1].klass),
              (int32_t)entity[1].monitor,
              servantData,
              v31);
      started = UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)v4, v32, 0LL);
      if ( !v26 )
        sub_1B64324(started);
      v34 = System_Collections_Generic_List_int___Contains(
              v26,
              (int32_t)current[21].monitor,
              (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v34 )
      {
        monitor = (int32_t)current[21].monitor;
        items = v26->fields._items;
        v37 = Method_System_Collections_Generic_List_int__Add__;
        ++v26->fields._version;
        if ( !items )
          sub_1B64324(v34);
        size = v26->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v26,
            monitor,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v26->fields._size = size + 1;
          items->m_Items[size + 1] = monitor;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v26 )
LABEL_38:
    sub_1B64324(this);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    v26,
    (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v46 = v45;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v46,
            (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    classIconEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.classIconEffectDict;
    if ( !classIconEffectDict )
      sub_1B64324(0LL);
    v40 = (int32_t)v46.fields._current;
    v41 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
            classIconEffectDict,
            (int32_t)v46.fields._current,
            (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    if ( !v41 )
    {
      BattleServantParamComponent__DestroyEffectObject(
        (BattleServantParamComponent_o *)v41,
        v4->fields.classIconEffectDict,
        v40,
        0,
        v42);
      BattleServantParamComponent__DestroyEffectObject(v43, v4->fields.commandSpellEffectDict, v40, 0, v44);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v46,
    (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void __fastcall BattleServantParamComponent__UpdateNameLabel(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nameLabel; // x20
  BattleServantData_o *data; // x0
  UILabel_o *v5; // x19

  if ( (byte_49FF3FC & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF3FC = 1;
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
        || (v5 = this->fields.nameLabel, data = (BattleServantData_o *)BattleServantData__getServantName(data, 0LL), !v5) )
      {
        sub_1B64324(data);
      }
      UILabel__set_text(v5, (System_String_o *)data, 0LL);
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
  BattleNpGaugeSystemComponent_o *v6; // x0

  if ( (byte_49FF3D9 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&np);
    byte_49FF3D9 = 1;
  }
  npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL) )
  {
    v6 = this->fields.npcomp;
    if ( !v6 )
      sub_1B64324(0LL);
    BattleNpGaugeSystemComponent__setNowParam(v6, np, 0LL);
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

  if ( (byte_49FF3EF & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&curGaugeIndex);
    byte_49FF3EF = 1;
  }
  hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpChange, 0LL, 0LL) )
  {
    v6 = this->fields.hpChange;
    if ( !v6 )
      sub_1B64324(0LL);
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
  char v36[4]; // [xsp+8h] [xbp-78h] BYREF
  float v37; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v38; // [xsp+18h] [xbp-68h] BYREF
  int32_t v39; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_49FF3F2 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, *(_QWORD *)&fromHp);
    sub_1B640C8(&System_Collections_Hashtable_TypeInfo, v13);
    sub_1B640C8(&int_TypeInfo, v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&float_TypeInfo, v16);
    sub_1B640C8(&StringLiteral_19577/*"from"*/, v17);
    sub_1B640C8(&StringLiteral_20148/*"ignoretimescale"*/, v18);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v19);
    sub_1B640C8(&StringLiteral_22186/*"oncompleteparams"*/, v20);
    sub_1B640C8(&StringLiteral_22193/*"onupdate"*/, v21);
    sub_1B640C8(&StringLiteral_9927/*"OnUpdateShiftGaugeChangeHp"*/, v22);
    sub_1B640C8(&StringLiteral_9831/*"OnCompleteShiftGaugeChangeHp"*/, v23);
    sub_1B640C8(&StringLiteral_23870/*"to"*/, v24);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v25);
    sub_1B640C8(&iTween_TypeInfo, v26);
    byte_49FF3F2 = 1;
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
        v31 = (System_Collections_Hashtable_o *)sub_1B64314(System_Collections_Hashtable_TypeInfo, v29, v30),
        System_Collections_Hashtable___ctor_61954820(v31, 0LL),
        v39 = fromHp,
        v28 = (BattleHpGaugeBarComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v39),
        !v31) )
  {
LABEL_13:
    sub_1B64324(v28);
  }
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, BattleHpGaugeBarComponent_o *, Il2CppMethodPointer))v31->klass->vtable._23_Add.method)(
    v31,
    StringLiteral_19577/*"from"*/,
    v28,
    v31->klass->vtable._24_Clear.methodPtr);
  v38 = toHp;
  v32 = j_il2cpp_value_box_0(int_TypeInfo, &v38);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v31->klass->vtable._23_Add.method)(
    v31,
    StringLiteral_23870/*"to"*/,
    v32,
    v31->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v31->klass->vtable._23_Add.method)(
    v31,
    StringLiteral_22193/*"onupdate"*/,
    StringLiteral_9927/*"OnUpdateShiftGaugeChangeHp"*/,
    v31->klass->vtable._24_Clear.methodPtr);
  v37 = time;
  v33 = j_il2cpp_value_box_0(float_TypeInfo, &v37);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v31->klass->vtable._23_Add.method)(
    v31,
    StringLiteral_23830/*"time"*/,
    v33,
    v31->klass->vtable._24_Clear.methodPtr);
  v36[0] = 1;
  v34 = j_il2cpp_value_box_0(bool_TypeInfo, v36);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v31->klass->vtable._23_Add.method)(
    v31,
    StringLiteral_20148/*"ignoretimescale"*/,
    v34,
    v31->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v31->klass->vtable._23_Add.method)(
    v31,
    StringLiteral_22185/*"oncomplete"*/,
    StringLiteral_9831/*"OnCompleteShiftGaugeChangeHp"*/,
    v31->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, BattleAction_BasePlayShiftGauge_o *, Il2CppMethodPointer))v31->klass->vtable._23_Add.method)(
    v31,
    StringLiteral_22186/*"oncompleteparams"*/,
    playShiftGauge,
    v31->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
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
  Il2CppObject *v18; // x21
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  UILabel_o *v23; // x20
  int defaultShortNameLabelWidth; // w1
  struct System_String_o *svtOverwriteBattleName; // x8
  float v26; // s8
  float v27; // s1
  float v28; // s0
  float v29; // s2

  if ( (byte_49FF3FD & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, method);
    sub_1B640C8(&AssetManager_TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_17060/*"battle_name"*/, v7);
    byte_49FF3FD = 1;
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
      v13 = EnemyNameEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(enemyNameEffectPrefab, 0LL, 0LL) )
      {
        v14 = (UnityEngine_Object_o *)*p_enemyNameEffectPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69127736(v14, 0LL);
      }
      if ( v13 )
      {
        data = (BattleServantData_o *)this->fields.shortNameLabel;
        if ( !data )
          goto LABEL_44;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
        GameObjectExtensions__ResetLocalScale(gameObject, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v13, 0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetStorage = AssetManager__getAssetStorage(NameEffectPath, 0LL);
        v18 = AssetStorage
            ? AssetData__GetObject_object__48347676(
                AssetStorage,
                (System_String_o *)StringLiteral_17060/*"battle_name"*/,
                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960)
            : 0LL;
        data = (BattleServantData_o *)this->fields.shortNameLabel;
        if ( !data )
          goto LABEL_44;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v20 = UnityEngine_Object__Instantiate_object__49003980(
                v18,
                transform,
                (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
        *p_enemyNameEffectPrefab = (struct UnityEngine_GameObject_o *)v20;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.enemyNameEffectPrefab, (int32_t)v20, v21, v22);
      }
      data = this->fields.data;
      if ( data )
      {
        v23 = this->fields.shortNameLabel;
        data = (BattleServantData_o *)BattleServantData__getServantShortName(data, 0LL);
        if ( v23 )
        {
          UILabel__set_text(v23, (System_String_o *)data, 0LL);
          defaultShortNameLabelWidth = this->fields.defaultShortNameLabelWidth;
          data = (BattleServantData_o *)this->fields.shortNameLabel;
          if ( defaultShortNameLabelWidth <= 0 )
          {
            if ( !data )
              goto LABEL_44;
            defaultShortNameLabelWidth = data->fields._iconLimitCount_k__BackingField.fields.fakeValue;
            this->fields.defaultShortNameLabelWidth = defaultShortNameLabelWidth;
          }
          else if ( !data )
          {
            goto LABEL_44;
          }
          svtOverwriteBattleName = data->fields.svtOverwriteBattleName;
          if ( !svtOverwriteBattleName )
            goto LABEL_44;
          v26 = (float)(data->fields.atktdrate * svtOverwriteBattleName->fields._stringLength);
          if ( (float)defaultShortNameLabelWidth >= v26 )
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
      sub_1B64324(data);
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
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
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
  BattleServantData_o *data; // x0
  UILabel_o *v9; // x19

  if ( (byte_49FF3E1 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF3E1 = 1;
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
        || (v9 = this->fields.levelLabel, data = (BattleServantData_o *)BattleServantData__getLevelLabel(data, 0LL), !v9) )
      {
        sub_1B64324(data);
      }
      UILabel__set_text(v9, (System_String_o *)data, 0LL);
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
  BattleServantData_o *data; // x0
  UITexture_o *v7; // x21
  BattleServantData_o *v8; // x8
  int32_t v9; // w20
  int32_t DispLimitCount; // w22
  UITexture_o *Manager__loadStatusFace; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FF3FB & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v3);
    byte_49FF3FB = 1;
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
        || (v7 = this->fields.facetex,
            data = (BattleServantData_o *)BattleServantData__GetDispImageSvtId(data, 0LL),
            (v8 = this->fields.data) == 0LL) )
      {
        sub_1B64324(data);
      }
      v9 = (int)data;
      DispLimitCount = BattleServantData__getDispLimitCount(v8, 1, 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadStatusFace = ServantAssetLoadManager__loadStatusFace(v7, v9, DispLimitCount, 0LL);
      p_facetex->klass = (ServantStatusBattleListViewItem_c *)Manager__loadStatusFace;
      sub_1B6406C(p_facetex, (int32_t)Manager__loadStatusFace, v12, v13);
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

  if ( (byte_49FF3F1 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, nowAndMaxArray);
    byte_49FF3F1 = 1;
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
          sub_1B6432C(data, v6);
        v8 = this->fields.nextTdGauge;
        v10 = nowAndMaxArray->m_Items[1];
        v9 = nowAndMaxArray->m_Items[2];
        isTDSeraled = BattleServantData__isTDSeraled(data, 0LL);
        if ( !v8 )
          sub_1B64324(isTDSeraled);
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
  if ( (byte_49FF3E4 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1B640C8(&Method_BattleServantParamComponent_callSkillIcon__, method);
    byte_49FF3E4 = 1;
  }
  skillIcon = v2->fields.skillIcon;
  if ( !skillIcon )
LABEL_13:
    sub_1B64324(this);
  v4 = 0LL;
  v5 = 0;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B6432C(this, method);
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
          v7 = (_QWORD *)sub_1B640E0(Method_BattleServantParamComponent_callSkillIcon__);
        v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
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
    sub_1B64324(this);
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
    sub_1B64324(NowHp);
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
  System_Collections_Generic_List_object__o *v6; // x20
  System_Object_array *v7; // x0
  BattleServantShowBuffComponent_o *showBuffComponent; // x19
  const MethodInfo *v9; // x2

  if ( (byte_49FF3F9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo, v5);
    byte_49FF3F9 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  if ( !v6
    || (showBuffComponent = this->fields.showBuffComponent,
        v7 = System_Collections_Generic_List_object___ToArray(
               v6,
               (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__),
        !showBuffComponent) )
  {
    sub_1B64324(v7);
  }
  BattleServantShowBuffComponent__setBuffList(showBuffComponent, (BattleBuffData_ShowBuffData_array *)v7, v9);
}


void __fastcall BattleServantParamComponent__clickSkillIcon(
        BattleServantParamComponent_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isLongTap,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *target; // x22
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_49FF3E6 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___, skillInfo);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49FF3E6 = 1;
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
                                                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___)) == 0LL )
    {
      sub_1B64324(Component_object);
    }
    BattlePerformancePlayer__onClickSkillIcon((BattlePerformancePlayer_o *)Component_object, skillInfo, isLongTap, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FF3E5 & 1) == 0 )
  {
    sub_1B640C8(&BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_TypeInfo, method);
    byte_49FF3E5 = 1;
  }
  v4 = sub_1B64314(BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
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
  UnityEngine_Object_o *facetex; // x22
  const MethodInfo *v21; // x1
  BattleServantData_o *data; // x0
  UITexture_o *v23; // x22
  int32_t v24; // w23
  int32_t DispLimitCount; // w24
  struct UITexture_o *Manager__loadStatusFace; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  UnityEngine_Object_o *levelLabel; // x21
  UILabel_o *v30; // x21
  UnityEngine_Object_o *nameLabel; // x21
  const MethodInfo *v32; // x1
  UILabel_o *v33; // x21
  UnityEngine_Object_o *hpGauge; // x21
  BattleHpGaugeBarComponent_o *v35; // x21
  int32_t v36; // w22
  UnityEngine_Object_o *hpChange; // x21
  struct BattleServantData_o *v38; // x8
  struct System_Int32_array *shiftDeckList; // x9
  UnityEngine_Object_o *hpShift; // x21
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x2
  UnityEngine_Object_o *breakSprite; // x21
  int32_t v44; // w21
  int32_t MaxHp; // w0
  const MethodInfo *v46; // x4
  UnityEngine_Object_o *npcomp; // x21
  struct BattleNpGaugeSystemComponent_o *v48; // x21
  struct BattleServantData_o *v49; // x8
  BattleNpGaugeSystemComponent_o *v50; // x21
  UnityEngine_Object_o *nextTdGauge; // x21
  bool v52; // w0
  const MethodInfo *v53; // x2
  BattleNextTDgaugeComponent_o *v54; // x20
  int32_t nexttpturn; // w21
  int32_t maxtpturn; // w22
  UnityEngine_Object_o *friendIcon; // x20
  const MethodInfo *v58; // x1
  struct BattleServantData_o *v59; // x8
  UISprite_o *v60; // x20
  UISprite_o *v61; // x20
  struct BattlePerformance_o *perf; // x8
  const MethodInfo *v63; // x1
  UnityEngine_Object_o *breakPoint; // x20
  struct BattleServantData_o *v65; // x8
  struct BattleServantData_o *v66; // x8
  ServantBattlePointMaster_o *v67; // x20
  __int64 v68; // x21
  __int64 v69; // x22
  BattleServantData_c *klass; // x8
  BattleServantData_o *v71; // x20
  __int64 v72; // x9
  int32_t *p_offset; // x10
  __int64 v74; // x0
  __int64 v75; // x20
  BattlePointData_o *v76; // x23
  __int64 v77; // x8
  __int64 v78; // x9
  int *v79; // x10
  __int64 v80; // x0
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x21
  __int64 v84; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  __int64 v87; // x8
  __int64 v88; // x9
  int *v89; // x10
  __int64 v90; // x0
  __int64 v91; // x0
  __int64 v92; // x22
  int32_t v93; // w2
  int32_t v94; // w3
  __int64 v95; // x0
  BattleServantData_o *v96; // x0
  BattlePointData_o *BattlePointData; // x0
  BattlePointData_o *v98; // x28
  struct BattleServantData_o *v99; // x8
  UnityEngine_Object_o *battlePointRoot; // x23
  _BOOL8 v101; // x0
  Il2CppObject *v102; // x1
  System_String_o *v103; // x19
  __int64 v104; // x1
  __int64 v105; // x2
  AssetLoader_LoadEndDataHandler_o *v106; // x22
  __int64 v107; // x8
  __int64 v108; // x9
  int *v109; // x10
  __int64 v110; // x0
  int v111; // [xsp+Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16

  v3 = notUpdateFlag;
  if ( (byte_49FF3E0 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&notUpdateFlag);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantBattlePointMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&FileName_TypeInfo, v7);
    sub_1B640C8(&System_IDisposable_TypeInfo, v8);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo, v9);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo, v10);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B640C8(&int_TypeInfo, v12);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v13);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v14);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v16);
    sub_1B640C8(&Method_BattleServantParamComponent___c__DisplayClass77_0__initUpdateView_b__0__, v17);
    sub_1B640C8(&BattleServantParamComponent___c__DisplayClass77_0_TypeInfo, v18);
    sub_1B640C8(&StringLiteral_3187/*"Battle/BattlePoint/Prefab/{0}"*/, v19);
    byte_49FF3E0 = 1;
  }
  if ( !this->fields.data )
    return;
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_154;
    v23 = this->fields.facetex;
    data = (BattleServantData_o *)BattleServantData__GetDispImageSvtId(data, 0LL);
    if ( !this->fields.data )
      goto LABEL_154;
    v24 = (int)data;
    DispLimitCount = BattleServantData__getDispLimitCount(this->fields.data, 1, 0LL);
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    Manager__loadStatusFace = ServantAssetLoadManager__loadStatusFace(v23, v24, DispLimitCount, 0LL);
    this->fields.facetex = Manager__loadStatusFace;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.facetex, (int32_t)Manager__loadStatusFace, v27, v28);
  }
  BattleServantParamComponent__setClassIcon(this, v21);
  levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_154;
    v30 = this->fields.levelLabel;
    data = (BattleServantData_o *)BattleServantData__getLevelLabel(data, 0LL);
    if ( !v30 )
      goto LABEL_154;
    UILabel__set_text(v30, (System_String_o *)data, 0LL);
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_154;
    v33 = this->fields.nameLabel;
    data = (BattleServantData_o *)BattleServantData__getServantName(data, 0LL);
    if ( !v33 )
      goto LABEL_154;
    UILabel__set_text(v33, (System_String_o *)data, 0LL);
  }
  BattleServantParamComponent__UpdateShortNameLabel(this, v32);
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_154;
    v35 = this->fields.hpGauge;
    data = (BattleServantData_o *)BattleServantData__getNowHp(data, 0LL);
    if ( !this->fields.data )
      goto LABEL_154;
    v36 = (int)data;
    data = (BattleServantData_o *)BattleServantData__getMaxHp(this->fields.data, 0LL);
    if ( !v35 )
      goto LABEL_154;
    BattleHpGaugeBarComponent__setInitValue(v35, v36, (int32_t)data, 0LL);
  }
  hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(hpChange, 0LL, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    v38 = this->fields.data;
    if ( !v38 )
      goto LABEL_154;
    shiftDeckList = v38->fields.shiftDeckList;
    if ( !shiftDeckList )
      goto LABEL_154;
    data = (BattleServantData_o *)this->fields.hpChange;
    if ( !data )
      goto LABEL_154;
    BattleServantChangeBarComponent__setBarType(
      (BattleServantChangeBarComponent_o *)data,
      1,
      shiftDeckList->max_length - v38->fields.shiftDeckIndex,
      0LL);
  }
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
  {
    data = (BattleServantData_o *)this->fields.hpShift;
    if ( !data )
      goto LABEL_154;
    BattleServantHpShiftComponent__setInitValue((BattleServantHpShiftComponent_o *)data, this->fields.data, v42);
  }
  BattleServantParamComponent__setAtlas(this, v41);
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0LL, 0LL) )
  {
    data = (BattleServantData_o *)this->fields.breakSprite;
    if ( !data )
      goto LABEL_154;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)data, 0, 0LL);
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_154;
  data = (BattleServantData_o *)BattleServantData__getNowHp(data, 0LL);
  if ( !this->fields.data )
    goto LABEL_154;
  v44 = (int)data;
  MaxHp = BattleServantData__getMaxHp(this->fields.data, 0LL);
  BattleServantParamComponent__updateHplabel(this, v44, MaxHp, 1, v46);
  npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    v48 = this->fields.npcomp;
    if ( !v48 )
      goto LABEL_154;
    v48->fields.lineCount = 3;
    data = this->fields.data;
    if ( !data )
      goto LABEL_154;
    v48->fields.maxparam = BattleServantData__getCountMaxNp(data, 0LL);
    data = (BattleServantData_o *)this->fields.npcomp;
    if ( !data )
      goto LABEL_154;
    BattleNpGaugeSystemComponent__InitSliderValue((BattleNpGaugeSystemComponent_o *)data, 0LL);
    v49 = this->fields.data;
    if ( !v49 )
      goto LABEL_154;
    data = (BattleServantData_o *)this->fields.npcomp;
    if ( !data )
      goto LABEL_154;
    BattleNpGaugeSystemComponent__setNowParam((BattleNpGaugeSystemComponent_o *)data, v49->fields.np, 0LL);
    data = this->fields.data;
    if ( !data )
      goto LABEL_154;
    v50 = this->fields.npcomp;
    data = (BattleServantData_o *)BattleServantData__isAddNpGauge(data, 0LL);
    if ( !v50 )
      goto LABEL_154;
    BattleNpGaugeSystemComponent__setUseNp(v50, (unsigned __int8)data & 1, 0LL);
  }
  nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v52 = UnityEngine_Object__op_Inequality(nextTdGauge, 0LL, 0LL);
  if ( (v3 & 1) == 0 && v52 )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_154;
    v54 = this->fields.nextTdGauge;
    nexttpturn = data->fields.nexttpturn;
    maxtpturn = data->fields.maxtpturn;
    data = (BattleServantData_o *)BattleServantData__isTDSeraled(data, 0LL);
    if ( !v54 )
      goto LABEL_154;
    BattleNextTDgaugeComponent__setInitGauge(v54, nexttpturn, maxtpturn, (unsigned __int8)data & 1, 0LL);
  }
  BattleServantParamComponent__updateSkillIcon(this, 0, v53);
  friendIcon = (UnityEngine_Object_o *)this->fields.friendIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendIcon, 0LL, 0LL) )
  {
    data = (BattleServantData_o *)this->fields.friendIcon;
    if ( !data )
      goto LABEL_154;
    data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( !data )
      goto LABEL_154;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
    v59 = this->fields.data;
    if ( !v59 )
      goto LABEL_154;
    if ( v59->fields.followerType )
    {
      v60 = this->fields.friendIcon;
      data = (BattleServantData_o *)FileName_TypeInfo;
      if ( !FileName_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      if ( !v60 )
        goto LABEL_154;
      UISprite__set_spriteName(v60, FileName_TypeInfo->static_fields->friendIconName, 0LL);
      data = (BattleServantData_o *)this->fields.friendIcon;
      if ( !data )
        goto LABEL_154;
      data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
      if ( !data )
        goto LABEL_154;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
      v59 = this->fields.data;
      if ( !v59 )
        goto LABEL_154;
    }
    if ( v59->fields.flgEventJoin )
    {
      v61 = this->fields.friendIcon;
      data = (BattleServantData_o *)FileName_TypeInfo;
      if ( !FileName_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      if ( !v61 )
        goto LABEL_154;
      UISprite__set_spriteName(v61, FileName_TypeInfo->static_fields->eventJoinIconName, 0LL);
      data = (BattleServantData_o *)this->fields.friendIcon;
      if ( !data )
        goto LABEL_154;
      data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
      if ( !data )
        goto LABEL_154;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
    }
  }
  BattleServantParamComponent__setRoleTyoe(this, v58);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_154;
  data = (BattleServantData_o *)perf->fields.data;
  if ( !data )
    goto LABEL_154;
  if ( BattleData__IsWarBoard((BattleData_o *)data, 0LL) )
  {
    breakPoint = (UnityEngine_Object_o *)this->fields.breakPoint;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(breakPoint, 0LL, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v65 = this->fields.data;
      if ( !v65 )
        goto LABEL_154;
      data = (BattleServantData_o *)this->fields.breakPoint;
      if ( !data )
        goto LABEL_154;
      BattleServantBreakPointComponent__Initialize(
        (BattleServantBreakPointComponent_o *)data,
        v65->fields.defeatPoint,
        v65->fields.maxDefeatPoint,
        v65->fields.isEnemy,
        0LL);
    }
  }
  BattleServantParamComponent__DestroyBattlePointGauge(this, v63);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  data = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantBattlePointMaster___);
  v66 = this->fields.data;
  if ( !v66 )
    goto LABEL_154;
  v67 = (ServantBattlePointMaster_o *)data;
  v69 = *(_QWORD *)&v66->fields.svtId.fields.currentCryptoKey;
  v68 = *(_QWORD *)&v66->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v112.fields.currentCryptoKey = v69;
  *(_QWORD *)&v112.fields.fakeValue = v68;
  data = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v112, 0LL);
  if ( !v67
    || (data = (BattleServantData_o *)ServantBattlePointMaster__GetBattlePointEntities(v67, (int32_t)data, 0LL)) == 0LL )
  {
LABEL_154:
    sub_1B64324(data);
  }
  klass = data->klass;
  v71 = data;
  v72 = *(unsigned __int16 *)(&data->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&data->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ServantBattlePointEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo )
    {
      --v72;
      p_offset += 4;
      if ( !v72 )
        goto LABEL_108;
    }
    v74 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_108:
    v74 = sub_1BB60A8(data, System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo, 0LL);
  }
  v75 = (*(__int64 (__fastcall **)(BattleServantData_o *, _QWORD))v74)(v71, *(_QWORD *)(v74 + 8));
  if ( !v75 )
    sub_1B64324(0LL);
  v76 = 0LL;
  while ( 1 )
  {
    v77 = *(_QWORD *)v75;
    v78 = *(unsigned __int16 *)(*(_QWORD *)v75 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v75 + 302LL) )
    {
      v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v79 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v78;
        v79 += 4;
        if ( !v78 )
          goto LABEL_116;
      }
      v80 = v77 + 16LL * *v79 + 312;
    }
    else
    {
LABEL_116:
      v80 = sub_1BB60A8(v75, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v80)(v75, *(_QWORD *)(v80 + 8)) & 1) == 0 )
      break;
    v83 = sub_1B64314(BattleServantParamComponent___c__DisplayClass77_0_TypeInfo, v81, v82);
    System_Object___ctor((Il2CppObject *)v83, 0LL);
    if ( !v83 )
      sub_1B64324(v84);
    *(_QWORD *)(v83 + 24) = this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v83 + 24), (int32_t)this, v85, v86);
    v87 = *(_QWORD *)v75;
    v88 = *(unsigned __int16 *)(*(_QWORD *)v75 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v75 + 302LL) )
    {
      v89 = (int *)(*(_QWORD *)(v87 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ServantBattlePointEntity__c **)v89 - 1) != System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo )
      {
        --v88;
        v89 += 4;
        if ( !v88 )
          goto LABEL_124;
      }
      v90 = v87 + 16LL * *v89 + 312;
    }
    else
    {
LABEL_124:
      v90 = sub_1BB60A8(v75, System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo, 0LL);
    }
    v91 = (*(__int64 (__fastcall **)(__int64, _QWORD))v90)(v75, *(_QWORD *)(v90 + 8));
    *(_QWORD *)(v83 + 16) = v91;
    v92 = v83 + 16;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v83 + 16), v91, v93, v94);
    if ( !*(_QWORD *)(v83 + 16) )
      sub_1B64324(v95);
    v96 = this->fields.data;
    if ( !v96 )
      sub_1B64324(0LL);
    BattlePointData = BattleServantData__GetBattlePointData(v96, *(_DWORD *)(*(_QWORD *)(v83 + 16) + 20LL), 0LL);
    if ( BattlePointData )
      v98 = BattlePointData;
    else
      v98 = v76;
    if ( !BattlePointData )
      goto LABEL_161;
    if ( !v98 )
      sub_1B64324(BattlePointData);
    v76 = BattlePointData;
    if ( !v98->fields._IsHideBattlePointGauge_k__BackingField )
    {
LABEL_161:
      v99 = this->fields.data;
      if ( !v99 )
        sub_1B64324(BattlePointData);
      v76 = v98;
      if ( !v99->fields.isEnemy )
      {
        battlePointRoot = (UnityEngine_Object_o *)this->fields.battlePointRoot;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v101 = UnityEngine_Object__op_Inequality(battlePointRoot, 0LL, 0LL);
        v76 = v98;
        if ( v101 )
        {
          if ( !*(_QWORD *)v92 )
            sub_1B64324(v101);
          v111 = *(_DWORD *)(*(_QWORD *)v92 + 20LL);
          v102 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v111);
          v103 = System_String__Format((System_String_o *)StringLiteral_3187/*"Battle/BattlePoint/Prefab/{0}"*/, v102, 0LL);
          v106 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v104, v105);
          AssetLoader_LoadEndDataHandler___ctor(
            v106,
            (Il2CppObject *)v83,
            Method_BattleServantParamComponent___c__DisplayClass77_0__initUpdateView_b__0__,
            0LL);
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__loadAssetStorage(v103, v106, 1, 0LL);
          break;
        }
      }
    }
  }
  v107 = *(_QWORD *)v75;
  v108 = *(unsigned __int16 *)(*(_QWORD *)v75 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v75 + 302LL) )
  {
    v109 = (int *)(*(_QWORD *)(v107 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v109 - 1) != System_IDisposable_TypeInfo )
    {
      --v108;
      v109 += 4;
      if ( !v108 )
        goto LABEL_147;
    }
    v110 = v107 + 16LL * *v109 + 312;
  }
  else
  {
LABEL_147:
    v110 = sub_1BB60A8(v75, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v110)(v75, *(_QWORD *)(v110 + 8));
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
          LOBYTE(this[1].fields.lockTargetMark) = 1;
          BattlePerformance__clickTarget((BattlePerformance_o *)this, v3->fields.index, 0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_1B64324(this);
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
    sub_1B64324(this);
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

  if ( (byte_49FF3F5 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3198/*"Battle/Prefab/ef_add_enemy"*/, method);
    byte_49FF3F5 = 1;
  }
  data = this->fields.data;
  if ( data && data->fields.isAddition )
  {
    clsIconComponent = (UnityEngine_Component_o *)this->fields.clsIconComponent;
    if ( !clsIconComponent
      || (transform = UnityEngine_Component__get_transform(clsIconComponent, 0LL),
          clsIconComponent = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject_37994916(
                                                          (BaseMonoBehaviour_o *)this,
                                                          (System_String_o *)StringLiteral_3198/*"Battle/Prefab/ef_add_enemy"*/,
                                                          transform,
                                                          0LL,
                                                          0LL),
          (v6 = this->fields.data) == 0LL) )
    {
      sub_1B64324(clsIconComponent);
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
  if ( (byte_49FF3DF & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    this = (BattleServantParamComponent_o *)sub_1B640C8(&StringLiteral_18823/*"effect/ef_cwflash01"*/, v3);
    byte_49FF3DF = 1;
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
    UnityEngine_Object__Destroy_69127736(v7, 0LL);
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
        this = (BattleServantParamComponent_o *)BaseMonoBehaviour__createObject_37994916(
                                                  (BaseMonoBehaviour_o *)v2,
                                                  (System_String_o *)StringLiteral_18823/*"effect/ef_cwflash01"*/,
                                                  transform,
                                                  0LL,
                                                  0LL);
        if ( v9 )
        {
          if ( v9->max_length )
          {
            v9->m_Items[0] = (UnityEngine_GameObject_o *)this;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)v9->m_Items, (int32_t)this, v11, v12);
            return;
          }
LABEL_23:
          sub_1B6432C(this, method);
        }
      }
    }
LABEL_22:
    sub_1B64324(this);
  }
}


void __fastcall BattleServantParamComponent__playCloseSelectServant(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  const MethodInfo *v4; // x2
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v7; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_49FF3D1 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF3D1 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v5 )
      sub_1B64324(0LL);
    gameObject = UnityEngine_Component__get_gameObject(v5, 0LL);
    v7.fields.r = 0.5;
    v7.fields.g = 0.5;
    v7.fields.b = 0.5;
    v7.fields.a = 1.0;
    TweenColor__Begin(gameObject, 0.4, v7, 0LL);
  }
  BattleServantParamComponent__setTouch(this, 1, v4);
}


void __fastcall BattleServantParamComponent__playEndShowServant(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  const MethodInfo *v4; // x2
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v7; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_49FF3D2 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF3D2 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v5 )
      sub_1B64324(0LL);
    gameObject = UnityEngine_Component__get_gameObject(v5, 0LL);
    v7.fields.r = 1.0;
    v7.fields.g = 1.0;
    v7.fields.b = 1.0;
    v7.fields.a = 1.0;
    TweenColor__Begin(gameObject, 0.4, v7, 0LL);
  }
  BattleServantParamComponent__setTouch(this, 1, v4);
}


void __fastcall BattleServantParamComponent__playSelectServant(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  const MethodInfo *v4; // x2
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v7; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_49FF3D0 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF3D0 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v5 )
      sub_1B64324(0LL);
    gameObject = UnityEngine_Component__get_gameObject(v5, 0LL);
    v7.fields.r = 1.0;
    v7.fields.g = 1.0;
    v7.fields.b = 1.0;
    v7.fields.a = 1.0;
    TweenColor__Begin(gameObject, 0.4, v7, 0LL);
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

  if ( (byte_49FF3EB & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF3EB = 1;
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
        sub_1B64324(0LL);
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

  if ( (byte_49FF3EA & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF3EA = 1;
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
    sub_1B64324(0LL);
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
  BattlePerformance_o *perf; // x0
  UnityEngine_Object_o *v9; // x19
  Il2CppObject *Component_object; // x21
  float LabelPrintedWidth; // s10
  float v12; // s8
  float v13; // s9
  UnityEngine_Object_o *ComponentInChildren_object__48792192; // x23
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

  if ( (byte_49FF3F8 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___, buffData);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    byte_49FF3F8 = 1;
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
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
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
      ComponentInChildren_object__48792192 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_object__48792192(
                                                                       (UnityEngine_GameObject_o *)v9,
                                                                       1,
                                                                       (const MethodInfo_2E88280 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality(ComponentInChildren_object__48792192, 0LL, 0LL);
      if ( ((unsigned __int8)perf & 1) != 0 )
      {
        if ( !ComponentInChildren_object__48792192 )
          goto LABEL_34;
        BattleServantBuffIconComponent__setImageId(
          (BattleServantBuffIconComponent_o *)ComponentInChildren_object__48792192,
          buffData->fields.popIcon,
          0LL);
        monitor = ComponentInChildren_object__48792192[1].monitor;
        if ( !monitor )
          goto LABEL_34;
        v16 = monitor[42];
        perf = (BattlePerformance_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)ComponentInChildren_object__48792192,
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
        v17 = ComponentInChildren_object__48792192[1].monitor;
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
    sub_1B64324(perf);
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
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o *breakSprite; // x21
  UIAtlas_o *v13; // x20
  UISprite_o *v14; // x19
  Il2CppObject *v15; // x0
  int v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FF3E3 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, method);
    sub_1B640C8(&AssetManager_TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v4);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_3189/*"Battle/Common"*/, v7);
    sub_1B640C8(&StringLiteral_3207/*"BattleAssetUIAtlas"*/, v8);
    sub_1B640C8(&StringLiteral_19892/*"hp_break_"*/, v9);
    byte_49FF3E3 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3189/*"Battle/Common"*/, 0LL);
  if ( !AssetStorage )
    goto LABEL_14;
  AssetStorage = (AssetData_o *)AssetData__GetObject_object__48347676(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_3207/*"BattleAssetUIAtlas"*/,
                                  (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !AssetStorage )
    goto LABEL_14;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)AssetStorage,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  v13 = (UIAtlas_o *)Component_object;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0LL, 0LL) )
  {
    AssetStorage = (AssetData_o *)this->fields.breakSprite;
    if ( AssetStorage )
    {
      UISprite__set_atlas((UISprite_o *)AssetStorage, v13, 0LL);
      v14 = this->fields.breakSprite;
      v16 = 1;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
      AssetStorage = (AssetData_o *)System_String__Concat((Il2CppObject *)StringLiteral_19892/*"hp_break_"*/, v15, 0LL);
      if ( v14 )
      {
        UISprite__set_spriteName(v14, (System_String_o *)AssetStorage, 0LL);
        return;
      }
    }
LABEL_14:
    sub_1B64324(AssetStorage);
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

  if ( (byte_49FF3DD & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF3DD = 1;
  }
  clsIconComponent = (UnityEngine_Object_o *)this->fields.clsIconComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(clsIconComponent, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data
      || (data = (BattleServantData_o *)BattleServantData__getClassId(data, 0LL), (v5 = this->fields.data) == 0LL)
      || (v6 = (int)data, (data = (BattleServantData_o *)this->fields.clsIconComponent) == 0LL) )
    {
      sub_1B64324(data);
    }
    ServantClassIconComponent__SetImage(
      (ServantClassIconComponent_o *)data,
      v6,
      v5->fields._frameType_k__BackingField,
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
  TweenColor_o *v9; // x0
  const MethodInfo *v10; // x3
  UnityEngine_Component_o *Item; // x0
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
  UnityEngine_Object_o *battlePointGaugeComponent; // x20
  const MethodInfo *v34; // x2
  UnityEngine_Color_o v35; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_49FF3D3 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_13037/*"SvtW_StartClose"*/, v7);
    byte_49FF3D3 = 1;
  }
  BattleServantParamComponent__setSkillFlash(this, 0, v2);
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (TweenColor_o *)UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    Item = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !Item )
      goto LABEL_59;
    gameObject = UnityEngine_Component__get_gameObject(Item, 0LL);
    v35.fields.r = 0.0;
    v35.fields.g = 0.0;
    v35.fields.b = 0.0;
    v35.fields.a = 0.0;
    v9 = TweenColor__Begin(gameObject, 0.4, v35, 0LL);
    this->fields.isHideFaceTexture = 1;
  }
  modeWindow = this->fields.modeWindow;
  if ( modeWindow == 3 )
    goto LABEL_58;
  if ( modeWindow == 2 )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v15 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Item = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                        (UnityEngine_Object_o *)Component_object,
                                        0LL,
                                        0LL);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_59;
      Item = (UnityEngine_Component_o *)SimpleAnimation__get_Item(
                                          (SimpleAnimation_o *)Component_object,
                                          (System_String_o *)StringLiteral_13037/*"SvtW_StartClose"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_59;
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
        v20 = sub_1BB60A8(Item, SimpleAnimation_State_TypeInfo, 4LL);
      }
      (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v20)(v17, *(_QWORD *)(v20 + 8), 0.0);
      Item = (UnityEngine_Component_o *)SimpleAnimation__get_Item(
                                          (SimpleAnimation_o *)Component_object,
                                          (System_String_o *)StringLiteral_13037/*"SvtW_StartClose"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_59;
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
  else
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v15 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Item = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                        (UnityEngine_Object_o *)Component_object,
                                        0LL,
                                        0LL);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_59;
      Item = (UnityEngine_Component_o *)SimpleAnimation__get_Item(
                                          (SimpleAnimation_o *)Component_object,
                                          (System_String_o *)StringLiteral_13037/*"SvtW_StartClose"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_59;
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
        v25 = sub_1BB60A8(Item, SimpleAnimation_State_TypeInfo, 4LL);
      }
      (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v25)(v22, *(_QWORD *)(v25 + 8), 0.0);
      Item = (UnityEngine_Component_o *)SimpleAnimation__get_Item(
                                          (SimpleAnimation_o *)Component_object,
                                          (System_String_o *)StringLiteral_13037/*"SvtW_StartClose"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_59;
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
      v32 = sub_1BB60A8(v28, v27, 8LL);
LABEL_52:
      (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v32)(v28, *(_QWORD *)(v32 + 8), 1.0);
      SimpleAnimation__Play_63513060((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13037/*"SvtW_StartClose"*/, 0LL);
      goto LABEL_53;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Item = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    if ( !v15 )
      goto LABEL_59;
    Item = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(
                                        (UnityEngine_Animation_o *)v15,
                                        (System_String_o *)StringLiteral_13037/*"SvtW_StartClose"*/,
                                        0LL);
    if ( !Item )
      goto LABEL_59;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
    Item = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(
                                        (UnityEngine_Animation_o *)v15,
                                        (System_String_o *)StringLiteral_13037/*"SvtW_StartClose"*/,
                                        0LL);
    if ( !Item )
      goto LABEL_59;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 1.0, 0LL);
    UnityEngine_Animation__Play_68872828((UnityEngine_Animation_o *)v15, (System_String_o *)StringLiteral_13037/*"SvtW_StartClose"*/, 0LL);
  }
LABEL_53:
  battlePointGaugeComponent = (UnityEngine_Object_o *)this->fields.battlePointGaugeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (TweenColor_o *)UnityEngine_Object__op_Inequality(battlePointGaugeComponent, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    Item = (UnityEngine_Component_o *)this->fields.battlePointGaugeComponent;
    if ( Item )
    {
      BattlePointGaugeComponent__StartClose((BattlePointGaugeComponent_o *)Item, 0, 0LL);
      goto LABEL_58;
    }
LABEL_59:
    sub_1B64324(Item);
  }
LABEL_58:
  BattleServantParamComponent__EffectStartStop(
    (BattleServantParamComponent_o *)v9,
    this->fields.commandSpellEffectDict,
    0,
    v10);
  this->fields.modeWindow = 3;
  BattleServantParamComponent__setTouch(this, 0, v34);
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
  BattleNpGaugeSystemComponent_o *v10; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x3

  if ( (byte_49FF3CE & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, data);
    byte_49FF3CE = 1;
  }
  this->fields.modeWindow = 1;
  this->fields.data = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.data, (int32_t)data, (int32_t)method, v3);
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
      v10 = this->fields.npcomp;
      if ( !v10 )
        sub_1B64324(0LL);
      BattleNpGaugeSystemComponent__resetSlider(v10, 0LL);
    }
    uniqueId = -1;
  }
  this->fields.uniqueID = uniqueId;
  BattleServantParamComponent__initUpdateView(this, 0, v6);
  BattleServantParamComponent__updateView(this, v11);
  BattleServantParamComponent__UpdateSkillRankUpEffect(this, v12);
  BattleServantParamComponent__setTargetMark(this, -1, 0, v13);
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
  __int64 gameObject; // x0
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
  UnityEngine_Object_o *battlePointGaugeComponent; // x21
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x1
  UnityEngine_Color_o v55; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_49FF3D4 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Animation___, isPlayCommandSpellEffectStartAnim);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_13037/*"SvtW_StartClose"*/, v8);
    byte_49FF3D4 = 1;
  }
  BattleServantParamComponent__setSkillFlash(this, 1, method);
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = (TweenColor_o *)UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    gameObject = (__int64)this->fields.facetex;
    if ( !gameObject )
      goto LABEL_78;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !this->fields.perf )
      goto LABEL_78;
    v14 = (UnityEngine_GameObject_o *)gameObject;
    gameObject = (__int64)BattlePerformance__get_MotionSkip(this->fields.perf, 0LL);
    if ( !gameObject )
      goto LABEL_78;
    v15 = (*(float (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 488LL))(
            gameObject,
            *(_QWORD *)(*(_QWORD *)gameObject + 496LL),
            0.4);
    v55.fields.r = 1.0;
    v55.fields.g = 1.0;
    v55.fields.b = 1.0;
    v55.fields.a = 1.0;
    v10 = TweenColor__Begin(v14, v15, v55, 0LL);
    this->fields.isHideFaceTexture = 0;
  }
  modeWindow = this->fields.modeWindow;
  if ( modeWindow == 2 )
    goto LABEL_75;
  if ( modeWindow == 1 )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v18 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( (gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_78;
      Item = SimpleAnimation__get_Item(
               (SimpleAnimation_o *)Component_object,
               (System_String_o *)StringLiteral_13037/*"SvtW_StartClose"*/,
               0LL);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13037/*"SvtW_StartClose"*/,
                              0LL);
      if ( !gameObject )
        goto LABEL_78;
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
        v24 = sub_1BB60A8(gameObject, SimpleAnimation_State_TypeInfo, 13LL);
      }
      gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
      if ( !Item )
        goto LABEL_78;
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
        p_method = sub_1BB60A8(Item, SimpleAnimation_State_TypeInfo, 4LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))p_method)(
        Item,
        *(_QWORD *)(p_method + 8),
        v35);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13037/*"SvtW_StartClose"*/,
                              0LL);
      if ( !gameObject )
        goto LABEL_78;
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
  else
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v18 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( (gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_78;
      v25 = SimpleAnimation__get_Item(
              (SimpleAnimation_o *)Component_object,
              (System_String_o *)StringLiteral_13037/*"SvtW_StartClose"*/,
              0LL);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13037/*"SvtW_StartClose"*/,
                              0LL);
      if ( !gameObject )
        goto LABEL_78;
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
        v30 = sub_1BB60A8(gameObject, SimpleAnimation_State_TypeInfo, 13LL);
      }
      gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
      if ( !v25 )
        goto LABEL_78;
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
        v44 = sub_1BB60A8(v25, SimpleAnimation_State_TypeInfo, 4LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))v44)(v25, *(_QWORD *)(v44 + 8), v41);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13037/*"SvtW_StartClose"*/,
                              0LL);
      if ( !gameObject )
        goto LABEL_78;
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
      v51 = sub_1BB60A8(v47, v46, 8LL);
LABEL_69:
      (*(void (__fastcall **)(__int64, _QWORD, float))v51)(v47, *(_QWORD *)(v51 + 8), -1.0);
      SimpleAnimation__Play_63513060((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13037/*"SvtW_StartClose"*/, 0LL);
      goto LABEL_70;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    if ( !v18 )
      goto LABEL_78;
    v31 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v18, (System_String_o *)StringLiteral_13037/*"SvtW_StartClose"*/, 0LL);
    gameObject = (__int64)UnityEngine_Animation__get_Item(
                            (UnityEngine_Animation_o *)v18,
                            (System_String_o *)StringLiteral_13037/*"SvtW_StartClose"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_78;
    length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)gameObject, 0LL);
    if ( !v31 )
      goto LABEL_78;
    UnityEngine_AnimationState__set_time(v31, length, 0LL);
    gameObject = (__int64)UnityEngine_Animation__get_Item(
                            (UnityEngine_Animation_o *)v18,
                            (System_String_o *)StringLiteral_13037/*"SvtW_StartClose"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_78;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, -1.0, 0LL);
    UnityEngine_Animation__Play_68872828((UnityEngine_Animation_o *)v18, (System_String_o *)StringLiteral_13037/*"SvtW_StartClose"*/, 0LL);
  }
LABEL_70:
  battlePointGaugeComponent = (UnityEngine_Object_o *)this->fields.battlePointGaugeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = (TweenColor_o *)UnityEngine_Object__op_Inequality(battlePointGaugeComponent, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    gameObject = (__int64)this->fields.battlePointGaugeComponent;
    if ( gameObject )
    {
      BattlePointGaugeComponent__StartOpen((BattlePointGaugeComponent_o *)gameObject, 0LL);
      goto LABEL_75;
    }
LABEL_78:
    sub_1B64324(gameObject);
  }
LABEL_75:
  if ( isPlayCommandSpellEffectStartAnim )
    BattleServantParamComponent__EffectStartStop(
      (BattleServantParamComponent_o *)v10,
      this->fields.commandSpellEffectDict,
      1,
      v12);
  this->fields.modeWindow = 2;
  BattleServantParamComponent__setTouch(this, 1, v11);
  BattleServantParamComponent__updateSkillIcon(this, 0, v53);
  BattleServantParamComponent__RemoveEffectClearRankUpBuff(this, v54);
}


void __fastcall BattleServantParamComponent__setPerf(
        BattleServantParamComponent_o *this,
        BattlePerformance_o *inperf,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.perf = inperf;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.perf, (int32_t)inperf, (int32_t)method, v3);
}


void __fastcall BattleServantParamComponent__setRoleTyoe(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *roleTypeSprite; // x20
  __int64 transform; // x0
  struct BattleServantData_o *data; // x8
  int32_t roleType; // w8
  __int64 *v9; // x8
  __int64 v10; // x1
  UnityEngine_Transform_o *v11; // x20
  bool v12; // w1

  if ( (byte_49FF3DE & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_18955/*"enemy_icon_leader"*/, v3);
    sub_1B640C8(&StringLiteral_23024/*"servant_icon"*/, v4);
    byte_49FF3DE = 1;
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
        v9 = &StringLiteral_18955/*"enemy_icon_leader"*/;
        goto LABEL_17;
      }
      if ( !transform )
        goto LABEL_27;
      if ( roleType == 3 )
      {
        v9 = &StringLiteral_23024/*"servant_icon"*/;
LABEL_17:
        UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)*v9, 0LL);
        transform = (__int64)this->fields.roleTypeSprite;
        if ( transform )
        {
          transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
          v11 = (UnityEngine_Transform_o *)transform;
          if ( !byte_49F7111 )
          {
            transform = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v10);
            byte_49F7111 = 1;
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
    sub_1B64324(transform);
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
    sub_1B64324(this);
  v4 = this;
  v5 = 0LL;
  v6 = flg;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B6432C(this, flg);
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
  int v11; // w24
  unsigned int localPosition; // s9
  unsigned int v13; // s8
  UIWidget_o *v14; // x22
  UIWidget_o *v15; // x23
  UnityEngine_Object_o *v16; // x21
  UnityEngine_Object_o *v17; // x21
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v19; // x8
  _BOOL4 v20; // w20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v22; // x1
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FF3E9 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, *(_QWORD *)&uniqueId);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49FF3E9 = 1;
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
        v11 = *((_DWORD *)data + 6);
        if ( *((_BYTE *)data + 473) || BattleServantData__get_IsSuperBossUi((BattleServantData_o *)data, 0LL) )
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
        if ( *((_BYTE *)data + 473) || BattleServantData__get_IsSuperBossUi((BattleServantData_o *)data, 0LL) )
        {
          data = this->fields.lockTargetMark;
          if ( !data )
            goto LABEL_68;
          data = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)data, 0LL);
          if ( !data )
            goto LABEL_68;
          v13 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)data, 0LL);
        }
        else
        {
          v13 = -1034289152;
        }
        data = this->fields.targetMark;
        if ( data )
        {
          data = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)data,
                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( this->fields.targetMark )
          {
            v14 = (UIWidget_o *)data;
            data = UnityEngine_GameObject__get_transform(this->fields.targetMark, 0LL);
            if ( data )
            {
              v23.fields.y = 22.0;
              v23.fields.z = 0.0;
              LODWORD(v23.fields.x) = localPosition;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)data, v23, 0LL);
              if ( v14 )
              {
                UIWidget__set_depth(v14, -29, 0LL);
                UIWidget__set_width(v14, 74, 0LL);
                UIWidget__set_height(v14, 74, 0LL);
                data = this->fields.lockTargetMark;
                if ( data )
                {
                  data = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)data,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                  if ( this->fields.lockTargetMark )
                  {
                    v15 = (UIWidget_o *)data;
                    data = UnityEngine_GameObject__get_transform(this->fields.lockTargetMark, 0LL);
                    if ( data )
                    {
                      v24.fields.y = 22.0;
                      v24.fields.z = 0.0;
                      LODWORD(v24.fields.x) = v13;
                      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)data, v24, 0LL);
                      if ( v15 )
                      {
                        UIWidget__set_depth(v15, -30, 0LL);
                        UIWidget__set_width(v15, 74, 0LL);
                        UIWidget__set_height(v15, 74, 0LL);
                        v26.fields.r = 1.0;
                        v26.fields.g = 1.0;
                        v26.fields.b = 1.0;
                        v26.fields.a = 1.0;
                        UIWidget__set_color(v15, v26, 0LL);
                        if ( isTargetLock )
                        {
                          data = this->fields.targetMark;
                          if ( data )
                          {
                            data = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)data, 0LL);
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
                                              v25.fields.y = 22.0;
                                              v25.fields.z = 0.0;
                                              LODWORD(v25.fields.x) = v13;
                                              UnityEngine_Transform__set_localPosition(
                                                (UnityEngine_Transform_o *)data,
                                                v25,
                                                0LL);
                                              UIWidget__set_depth(v15, -30, 0LL);
                                              UIWidget__set_width(v15, 78, 0LL);
                                              UIWidget__set_height(v15, 78, 0LL);
                                              v27.fields.r = 1.0;
                                              v27.fields.g = 0.0;
                                              v27.fields.b = 0.0;
                                              v27.fields.a = 1.0;
                                              UIWidget__set_color(v15, v27, 0LL);
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
                          v16 = (UnityEngine_Object_o *)this->fields.targetMark;
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
                          {
                            data = this->fields.targetMark;
                            if ( !data )
                              goto LABEL_68;
                            data = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)data, 0LL);
                            if ( !data )
                              goto LABEL_68;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, v11 == uniqueId, 0LL);
                          }
                          v17 = (UnityEngine_Object_o *)this->fields.lockTargetMark;
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          data = (void *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
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
                            v19 = perf->fields.data;
                            if ( v19 )
                            {
                              if ( !v19->fields.isMultiTargetBattle )
                                return;
                              v20 = uniqueId == -1 || v11 == uniqueId;
                              transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
                              CommonFunction__SetColorAllChild(transform, v20, this->fields.GRAY, 0LL);
                              this->fields.isActiveHpBar = v20;
                              if ( !v20 )
                                return;
                              data = this->fields.showBuffComponent;
                              if ( data )
                              {
                                BattleServantShowBuffComponent__UpdateActiveBuffList(
                                  (BattleServantShowBuffComponent_o *)data,
                                  v22);
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
        sub_1B64324(data);
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

  if ( (byte_49FF3D6 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Collider___, flg);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FF3D6 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !flg || (data = this->fields.data) != 0LL && BattleServantData__isAlive(data, 0, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( v8 )
    {
      if ( !Component_object )
        sub_1B64324(v8);
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

  if ( (byte_49FF3D5 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Collider___, flg);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FF3D5 = 1;
  }
  root = this->fields.root;
  if ( !root )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(root, flg, 0LL);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    sub_1B64324(root);
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
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *v39; // x22
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w2
  int32_t v43; // w3
  Il2CppObject *v44; // x21
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w2
  int32_t v50; // w3
  int32_t v51; // w2
  int32_t v52; // w3
  Il2CppObject *v53; // x21
  int32_t v54; // w2
  int32_t v55; // w3
  int32_t v56; // w2
  int32_t v57; // w3
  Il2CppObject *v58; // x21
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t v61; // w2
  int32_t v62; // w3
  System_Collections_Hashtable_o *v63; // x0
  __int64 v64; // x0
  char v65[4]; // [xsp+0h] [xbp-40h] BYREF
  int v66; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t NowHp; // [xsp+8h] [xbp-38h] BYREF
  int v68; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_49FF3F4 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleServantParamComponent_shiftUpdateStatus__, method);
    sub_1B640C8(&bool_TypeInfo, v3);
    sub_1B640C8(&int_TypeInfo, v4);
    sub_1B640C8(&object___TypeInfo, v5);
    sub_1B640C8(&float_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_19577/*"from"*/, v7);
    sub_1B640C8(&StringLiteral_20148/*"ignoretimescale"*/, v8);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v9);
    sub_1B640C8(&StringLiteral_24214/*"updateShiftHplabel"*/, v10);
    sub_1B640C8(&StringLiteral_22193/*"onupdate"*/, v11);
    sub_1B640C8(&StringLiteral_23870/*"to"*/, v12);
    sub_1B640C8(&StringLiteral_4631/*"ComplateUpdateShiftHplabel"*/, v13);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v14);
    this = (BattleServantParamComponent_o *)sub_1B640C8(&iTween_TypeInfo, v15);
    byte_49FF3F4 = 1;
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
          v27 = (_QWORD *)sub_1B640E0(Method_BattleServantParamComponent_shiftUpdateStatus__);
        v28 = (System_Reflection_MethodBase_o *)sub_1B640AC(v27, v27[4]);
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
          this = (BattleServantParamComponent_o *)sub_1B64170(object___TypeInfo, 12LL);
          if ( this )
          {
            v34 = (System_Object_array *)this;
            v35 = StringLiteral_19577/*"from"*/;
            if ( StringLiteral_19577/*"from"*/ )
            {
              v35 = sub_1B64204(StringLiteral_19577/*"from"*/, v34->obj.klass->_1.element_class);
              if ( !v35 )
                goto LABEL_81;
              v36 = StringLiteral_19577/*"from"*/;
            }
            else
            {
              v36 = 0LL;
            }
            if ( !v34->max_length )
              goto LABEL_80;
            v34->m_Items[0] = (Il2CppObject *)v36;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)v34->m_Items, v36, v32, v33);
            v68 = 0;
            v35 = j_il2cpp_value_box_0(int_TypeInfo, &v68);
            v39 = (Il2CppObject *)v35;
            if ( v35 )
            {
              v35 = sub_1B64204(v35, v34->obj.klass->_1.element_class);
              if ( !v35 )
                goto LABEL_81;
            }
            if ( v34->max_length <= 1 )
              goto LABEL_80;
            v34->m_Items[1] = v39;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34->m_Items[1], (int32_t)v39, v37, v38);
            v35 = StringLiteral_23870/*"to"*/;
            if ( StringLiteral_23870/*"to"*/ )
            {
              v35 = sub_1B64204(StringLiteral_23870/*"to"*/, v34->obj.klass->_1.element_class);
              if ( !v35 )
                goto LABEL_81;
              v36 = StringLiteral_23870/*"to"*/;
            }
            else
            {
              v36 = 0LL;
            }
            if ( v34->max_length <= 2 )
              goto LABEL_80;
            v34->m_Items[2] = (Il2CppObject *)v36;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34->m_Items[2], v36, v40, v41);
            this = (BattleServantParamComponent_o *)v2->fields.data;
            if ( this )
            {
              NowHp = BattleServantData__getNowHp((BattleServantData_o *)this, 0LL);
              v35 = j_il2cpp_value_box_0(int_TypeInfo, &NowHp);
              v44 = (Il2CppObject *)v35;
              if ( !v35 || (v35 = sub_1B64204(v35, v34->obj.klass->_1.element_class)) != 0 )
              {
                if ( v34->max_length <= 3 )
                  goto LABEL_80;
                v34->m_Items[3] = v44;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34->m_Items[3], (int32_t)v44, v42, v43);
                v35 = StringLiteral_22193/*"onupdate"*/;
                if ( StringLiteral_22193/*"onupdate"*/ )
                {
                  v35 = sub_1B64204(StringLiteral_22193/*"onupdate"*/, v34->obj.klass->_1.element_class);
                  if ( !v35 )
                    goto LABEL_81;
                  v36 = StringLiteral_22193/*"onupdate"*/;
                }
                else
                {
                  v36 = 0LL;
                }
                if ( v34->max_length <= 4 )
                  goto LABEL_80;
                v34->m_Items[4] = (Il2CppObject *)v36;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34->m_Items[4], v36, v45, v46);
                v35 = StringLiteral_24214/*"updateShiftHplabel"*/;
                if ( StringLiteral_24214/*"updateShiftHplabel"*/ )
                {
                  v35 = sub_1B64204(StringLiteral_24214/*"updateShiftHplabel"*/, v34->obj.klass->_1.element_class);
                  if ( !v35 )
                    goto LABEL_81;
                  v36 = StringLiteral_24214/*"updateShiftHplabel"*/;
                }
                else
                {
                  v36 = 0LL;
                }
                if ( v34->max_length <= 5 )
                  goto LABEL_80;
                v34->m_Items[5] = (Il2CppObject *)v36;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34->m_Items[5], v36, v47, v48);
                v35 = StringLiteral_23830/*"time"*/;
                if ( StringLiteral_23830/*"time"*/ )
                {
                  v35 = sub_1B64204(StringLiteral_23830/*"time"*/, v34->obj.klass->_1.element_class);
                  if ( !v35 )
                    goto LABEL_81;
                  v36 = StringLiteral_23830/*"time"*/;
                }
                else
                {
                  v36 = 0LL;
                }
                if ( v34->max_length <= 6 )
                  goto LABEL_80;
                v34->m_Items[6] = (Il2CppObject *)v36;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34->m_Items[6], v36, v49, v50);
                v66 = 1069547520;
                v35 = j_il2cpp_value_box_0(float_TypeInfo, &v66);
                v53 = (Il2CppObject *)v35;
                if ( !v35 || (v35 = sub_1B64204(v35, v34->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v34->max_length <= 7 )
                    goto LABEL_80;
                  v34->m_Items[7] = v53;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34->m_Items[7], (int32_t)v53, v51, v52);
                  v35 = StringLiteral_20148/*"ignoretimescale"*/;
                  if ( StringLiteral_20148/*"ignoretimescale"*/ )
                  {
                    v35 = sub_1B64204(StringLiteral_20148/*"ignoretimescale"*/, v34->obj.klass->_1.element_class);
                    if ( !v35 )
                      goto LABEL_81;
                    v36 = StringLiteral_20148/*"ignoretimescale"*/;
                  }
                  else
                  {
                    v36 = 0LL;
                  }
                  if ( v34->max_length <= 8 )
                    goto LABEL_80;
                  v34->m_Items[8] = (Il2CppObject *)v36;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34->m_Items[8], v36, v54, v55);
                  v65[0] = 1;
                  v35 = j_il2cpp_value_box_0(bool_TypeInfo, v65);
                  v58 = (Il2CppObject *)v35;
                  if ( !v35 || (v35 = sub_1B64204(v35, v34->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v34->max_length <= 9 )
                      goto LABEL_80;
                    v34->m_Items[9] = v58;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34->m_Items[9], (int32_t)v58, v56, v57);
                    v35 = StringLiteral_22185/*"oncomplete"*/;
                    if ( StringLiteral_22185/*"oncomplete"*/ )
                    {
                      v35 = sub_1B64204(StringLiteral_22185/*"oncomplete"*/, v34->obj.klass->_1.element_class);
                      if ( !v35 )
                        goto LABEL_81;
                      v36 = StringLiteral_22185/*"oncomplete"*/;
                    }
                    else
                    {
                      v36 = 0LL;
                    }
                    if ( v34->max_length <= 0xA )
                      goto LABEL_80;
                    v34->m_Items[10] = (Il2CppObject *)v36;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34->m_Items[10], v36, v59, v60);
                    v35 = StringLiteral_4631/*"ComplateUpdateShiftHplabel"*/;
                    if ( !StringLiteral_4631/*"ComplateUpdateShiftHplabel"*/ )
                    {
                      v36 = 0LL;
LABEL_74:
                      if ( v34->max_length > 0xB )
                      {
                        v34->m_Items[11] = (Il2CppObject *)v36;
                        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34->m_Items[11], v36, v61, v62);
                        if ( !iTween_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                        v63 = iTween__Hash(v34, 0LL);
                        iTween__ValueTo(gameObject, v63, 0LL);
                        return;
                      }
LABEL_80:
                      sub_1B6432C(v35, v36);
                    }
                    v35 = sub_1B64204(StringLiteral_4631/*"ComplateUpdateShiftHplabel"*/, v34->obj.klass->_1.element_class);
                    if ( v35 )
                    {
                      v36 = StringLiteral_4631/*"ComplateUpdateShiftHplabel"*/;
                      goto LABEL_74;
                    }
                  }
                }
              }
LABEL_81:
              v64 = sub_1B64348(v35);
              sub_1B641F0(v64, 0LL);
            }
          }
        }
      }
    }
LABEL_79:
    sub_1B64324(this);
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

  if ( (byte_49FF3F6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__, buffData);
    byte_49FF3F6 = 1;
  }
  sideEffectShowQueue = (System_Collections_Generic_Queue_T__o *)this->fields.sideEffectShowQueue;
  if ( !sideEffectShowQueue )
    sub_1B64324(0LL);
  System_Collections_Generic_Queue_object___Enqueue(
    sideEffectShowQueue,
    (Il2CppObject *)buffData,
    (const MethodInfo_3622AE4 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__);
  if ( !this->fields.isShowingSideEffect )
  {
    this->fields.isShowingSideEffect = 1;
    v7 = BattleServantParamComponent__showSideEffectList(this, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__showSideEffectList(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FF3F7 & 1) == 0 )
  {
    sub_1B640C8(&BattleServantParamComponent__showSideEffectList_d__111_TypeInfo, method);
    byte_49FF3F7 = 1;
  }
  v4 = sub_1B64314(BattleServantParamComponent__showSideEffectList_d__111_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
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
  BattleBuffData_ShowBuffData_array *ShowServantParam; // x0
  BattleServantShowBuffComponent_o *v11; // x21
  const MethodInfo *v12; // x2
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  struct BattleServantData_o *v15; // x8
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v17; // x1
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
  __int64 v28; // x1
  int max_length; // w8
  BattleBuffData_ShowBuffData_array *v30; // x21
  int v31; // w24
  char v32; // w22
  BattleBuffData_ShowBuffData_o *v33; // x27
  int bounds; // w27
  struct BattleServantData_o *v35; // x8
  UnityEngine_Object_o *v36; // x20
  System_Enum_o v37; // [xsp+8h] [xbp-68h] BYREF
  int v38; // [xsp+18h] [xbp-58h]

  if ( (byte_49FF3E8 & 1) == 0 )
  {
    sub_1B640C8(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, buffData);
    sub_1B640C8(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_13203/*"TAMAMOCAT_STUN_BUFF_ID"*/, v7);
    sub_1B640C8(&StringLiteral_24501/*"wait"*/, v8);
    byte_49FF3E8 = 1;
  }
  showBuffComponent = (UnityEngine_Object_o *)this->fields.showBuffComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)UnityEngine_Object__op_Equality(showBuffComponent, 0LL, 0LL);
  if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
    return;
  if ( !buffData )
    goto LABEL_54;
  v11 = this->fields.showBuffComponent;
  ShowServantParam = BattleBuffData__getShowServantParam(buffData, 0LL);
  if ( !v11 )
    goto LABEL_54;
  BattleServantShowBuffComponent__setBuffList(v11, ShowServantParam, v12);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_54;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_54;
  if ( data->fields.isMultiTargetBattle )
  {
    v15 = this->fields.data;
    if ( !v15 )
      goto LABEL_54;
    if ( v15->fields.isEnemy )
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
        BattleServantShowBuffComponent__UpdateActiveBuffList((BattleServantShowBuffComponent_o *)ShowServantParam, v17);
      }
    }
  }
  v18 = this->fields.data;
  if ( !v18 || (ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.perf) == 0LL )
LABEL_54:
    sub_1B64324(ShowServantParam);
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
      v37.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
      v37.monitor = (void *)-1LL;
      v38 = 9;
      v22 = System_Enum__ToString(&v37, 0LL);
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)BasicHelper__EqualExceptNullOrEmpty(
                                                                currentCommonAnimName,
                                                                v22,
                                                                0LL);
      if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
      {
        v23 = HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
        v24 = 49;
LABEL_30:
        v37.klass = (System_Enum_c *)v23;
        v37.monitor = (void *)-1LL;
        v38 = v24;
        v26 = System_Enum__ToString(&v37, 0LL);
        BattleActorControl__playAnimation_43285100(ServantActor, v26, 0, 0LL);
      }
    }
    else
    {
      v37.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
      v37.monitor = (void *)-1LL;
      v38 = 49;
      v25 = System_Enum__ToString(&v37, 0LL);
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
  v30 = ShowServantParam;
  if ( max_length < 1 )
    goto LABEL_58;
  v31 = 0;
  v32 = 0;
  do
  {
    if ( v31 >= (unsigned int)max_length )
      sub_1B6432C(ShowServantParam, v28);
    v33 = v30->m_Items[v31];
    if ( !v33 )
      goto LABEL_54;
    if ( !BYTE1(v33[6].fields.buffId) )
    {
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)BattleBuffData__get_buffMst(buffData, 0LL);
      if ( !ShowServantParam )
        goto LABEL_54;
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)DataMasterBase_object__object__int___GetEntity(
                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)ShowServantParam,
                                                                v33->fields.buffId,
                                                                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !ShowServantParam )
        goto LABEL_54;
      bounds = (int)ShowServantParam->bounds;
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)ConstantMaster__getValue(
                                                                (System_String_o *)StringLiteral_13203/*"TAMAMOCAT_STUN_BUFF_ID"*/,
                                                                0LL);
      v32 |= bounds == (_DWORD)ShowServantParam;
    }
    max_length = v30->max_length;
    ++v31;
  }
  while ( v31 < max_length );
  if ( (v32 & 1) == 0 )
  {
LABEL_58:
    ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.data;
    if ( !ShowServantParam )
      goto LABEL_54;
    BattleServantData__SetIsSleepWaitMode((BattleServantData_o *)ShowServantParam, 0, 0LL);
    v35 = this->fields.data;
    if ( !v35 )
      goto LABEL_54;
    ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.perf;
    if ( !ShowServantParam )
      goto LABEL_54;
    v36 = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                    (BattlePerformance_o *)ShowServantParam,
                                    v35->fields.uniqueId,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ShowServantParam = (BattleBuffData_ShowBuffData_array *)UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
    if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
    {
      if ( v36 )
      {
        if ( BattleActorControl__checkID((BattleActorControl_o *)v36, this->fields.uniqueID, 0LL) )
          BattleActorControl__playAnimation_43285100(
            (BattleActorControl_o *)v36,
            (System_String_o *)StringLiteral_24501/*"wait"*/,
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
  const MethodInfo *v10; // x2
  BattlePerformance_o *perf; // x0
  UnityEngine_Object_o *ServantActor; // x20
  System_Int32_array *AuraIdList; // x1

  if ( (byte_49FF3E7 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, svtData);
    byte_49FF3E7 = 1;
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
            sub_1B64324(perf);
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

  if ( (byte_49FF3DB & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&now);
    byte_49FF3DB = 1;
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
    sub_1B64324(data);
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
  UILabel_o *v18; // x24
  Il2CppObject *v19; // x0
  System_String_o *data; // x0
  Il2CppObject *Component_object; // x24
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

  if ( (byte_49FF3DC & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, *(_QWORD *)&now);
    sub_1B640C8(&int_TypeInfo, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_24883/*"{0}"*/, v11);
    sub_1B640C8(&StringLiteral_24954/*"{0}/{1}"*/, v12);
    sub_1B640C8(&StringLiteral_24834/*"{0:#,0}"*/, v13);
    sub_1B640C8(&StringLiteral_24837/*"{0:#,0}/{1:#,0}"*/, v14);
    byte_49FF3DC = 1;
  }
  if ( this->fields.hpformatflg )
    v15 = &StringLiteral_24834/*"{0:#,0}"*/;
  else
    v15 = &StringLiteral_24883/*"{0}"*/;
  v16 = (System_String_o *)*v15;
  hplabel = (UnityEngine_Object_o *)this->fields.hplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hplabel, 0LL, 0LL) )
  {
    v18 = this->fields.hplabel;
    v38 = now;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
    data = System_String__Format(v16, v19, 0LL);
    if ( !v18 )
      goto LABEL_51;
    UILabel__set_text(v18, data, 0LL);
    data = (System_String_o *)this->fields.hplabel;
    if ( !data )
      goto LABEL_51;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)data,
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
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
    v23 = this->fields.maxhplabel;
    v38 = max;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
    data = System_String__Format(v16, v24, 0LL);
    if ( !v23 )
      goto LABEL_51;
    UILabel__set_text(v23, data, 0LL);
  }
  totalhplabel = (UnityEngine_Object_o *)this->fields.totalhplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(totalhplabel, 0LL, 0LL) )
  {
    v26 = this->fields.totalhplabel;
    if ( this->fields.hpformatflg )
    {
      v38 = now;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
      v37 = max;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
      v29 = &StringLiteral_24837/*"{0:#,0}/{1:#,0}"*/;
    }
    else
    {
      v38 = now;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
      v37 = max;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
      v29 = &StringLiteral_24954/*"{0}/{1}"*/;
    }
    data = System_String__Format_61389768((System_String_o *)*v29, v27, v28, 0LL);
    if ( !v26 )
      goto LABEL_51;
    UILabel__set_text(v26, data, 0LL);
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
    v32 = now == 0;
    if ( !data )
      goto LABEL_51;
    v33 = v32 && isShiftableServant;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)data, v32 && isShiftableServant, 0LL);
    v34 = (UnityEngine_Object_o *)this->fields.hplabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
    {
      data = (System_String_o *)this->fields.hplabel;
      if ( !data )
        goto LABEL_51;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)data, !v33, 0LL);
    }
    v35 = (UnityEngine_Object_o *)this->fields.maxhplabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
    {
      data = (System_String_o *)this->fields.maxhplabel;
      if ( !data )
        goto LABEL_51;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)data, !v33, 0LL);
    }
    v36 = (UnityEngine_Object_o *)this->fields.totalhplabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
    {
      data = (System_String_o *)this->fields.totalhplabel;
      if ( data )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)data, !v33, 0LL);
        return;
      }
LABEL_51:
      sub_1B64324(data);
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
  if ( (byte_49FF3D7 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, svtdata);
    byte_49FF3D7 = 1;
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
      sub_1B64324(this);
    }
  }
}


void __fastcall BattleServantParamComponent__updateNp_43655708(
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
  __int64 v12; // x1
  il2cpp_array_size_t max_length; // w8

  v8 = this;
  if ( (byte_49FF3D8 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, svtdata);
    byte_49FF3D8 = 1;
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
            sub_1B6432C(v11, v12);
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
          sub_1B64324(this);
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
    sub_1B64324(0LL);
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
  __int64 v7; // x1
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
      || (v6 = BuffData,
          BuffData = (BattleBuffData_o *)BattleServantData__getSkillSealSelect(this->fields.data, 0LL),
          (skillIcon = this->fields.skillIcon) == 0LL) )
    {
LABEL_29:
      sub_1B64324(BuffData);
    }
    v9 = BuffData;
    v10 = 0LL;
    p_activeList = &BuffData->fields.activeList;
    while ( 1 )
    {
      max_length = skillIcon->max_length;
      if ( (__int64)v10 >= (int)max_length )
        break;
      if ( !v6 )
        goto LABEL_29;
      passiveList_low = LODWORD(v6->fields.passiveList);
      if ( (__int64)v10 >= (int)passiveList_low )
      {
        if ( v10 >= max_length )
LABEL_31:
          sub_1B6432C(BuffData, v7);
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
        v14 = (BattleSkillInfoData_o *)*((_QWORD *)&v6->fields.activeList + v10);
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
  BattleServantData_o *data; // x0
  struct BattleServantData_o *v6; // x8

  if ( (byte_49FF3DA & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, svtData);
    byte_49FF3DA = 1;
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
      sub_1B64324(data);
    }
    v6 = this->fields.data;
    if ( !v6 )
      goto LABEL_15;
    data = (BattleServantData_o *)this->fields.nextTdGauge;
    if ( !data )
      goto LABEL_15;
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
  if ( (byte_49FF3E2 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF3E2 = 1;
  }
  perf = v3->fields.perf;
  if ( !perf )
    goto LABEL_33;
  this = (BattleServantParamComponent_o *)perf->fields.data;
  if ( !this )
    goto LABEL_33;
  if ( !*(&this[1].fields.isShowingSideEffect + 6) )
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
                    v16 = v3->fields.data;
                    if ( !v16 )
                      goto LABEL_33;
                    this = (BattleServantParamComponent_o *)v3->fields.npcomp;
                    if ( !this )
                      goto LABEL_33;
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
LABEL_33:
        sub_1B64324(this);
      }
    }
  }
  BattleServantParamComponent__setTouch(v3, 0, v2);
  this = (BattleServantParamComponent_o *)v3->fields.root;
  if ( !this )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall BattleServantParamComponent__CoAddClassIconEffect_d__124___ctor(
        BattleServantParamComponent__CoAddClassIconEffect_d__124_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantParamComponent__CoAddClassIconEffect_d__124__MoveNext(
        BattleServantParamComponent__CoAddClassIconEffect_d__124_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v3; // w3
  BattleServantParamComponent__CoAddClassIconEffect_d__124_o *v4; // x19
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
  struct BattleServantParamComponent___c__DisplayClass124_0_o **p__8__1; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t effectId; // w1
  __int64 v26; // x1
  __int64 v27; // x2
  const MethodInfo *v28; // x3
  struct BattleServantParamComponent___c__DisplayClass124_0_o *v29; // x23
  int32_t v30; // w21
  System_Action_o *v31; // x22
  BattlePerformance_o *perf; // x23
  struct BattleServantParamComponent___c__DisplayClass124_0_o *_8__1; // x8
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  struct BattleServantData_o *servantData; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x21
  int32_t v38; // w22
  UnityEngine_Object_o *EffectObject; // x21
  BattleServantParamComponent__CoAddClassIconEffect_d__124_o *v40; // x22
  __int64 v41; // x1
  BattleServantParamComponent__CoAddClassIconEffect_d__124_o *v42; // x22
  __int64 v43; // x1
  BattleServantParamComponent__CoAddClassIconEffect_d__124_o *v44; // x22
  struct BattleServantParamComponent_o *v45; // x21
  struct BattlePerformance_o *v46; // x8
  struct BattleData_o *data; // x8
  System_String_o *v48; // x21
  Il2CppObject *v49; // x0
  System_String_o *v50; // x22
  UnityEngine_Object_o *Manager__loadBattleCommonEffect; // x21
  UnityEngine_Object_o *facetex; // x22
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v54; // x21
  int32_t battleGenderType; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *component; // [xsp+28h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_49FF40A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&BattleEffectUtility_TypeInfo, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_EffectMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__GameObject__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v10);
    sub_1B640C8(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, v11);
    sub_1B640C8(&int_TypeInfo, v12);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v13);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v14);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v15);
    sub_1B640C8(&Method_BattleServantParamComponent___c__DisplayClass124_0__CoAddClassIconEffect_b__0__, v16);
    sub_1B640C8(&BattleServantParamComponent___c__DisplayClass124_0_TypeInfo, v17);
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)sub_1B640C8(&StringLiteral_18746/*"ef_commandaura_{0}"*/, v18);
    byte_49FF40A = 1;
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
    v21 = (Il2CppObject *)sub_1B64314(BattleServantParamComponent___c__DisplayClass124_0_TypeInfo, method, v2);
    System_Object___ctor(v21, 0LL);
    v4->fields.__8__1 = (struct BattleServantParamComponent___c__DisplayClass124_0_o *)v21;
    p__8__1 = &v4->fields.__8__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v21, v23, v24);
    effectId = v4->fields.effectId;
    if ( effectId < 1 )
      return 0;
    if ( !_4__this )
      goto LABEL_71;
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)_4__this->fields.classIconEffectDict;
    if ( !this )
      goto LABEL_71;
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                                           (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                           effectId,
                                                                           (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 0;
    if ( _4__this->fields.currentClassIconAuraEffectPriority < v4->fields.priority )
    {
      BattleServantParamComponent__DestroyAllEffect(_4__this, _4__this->fields.classIconEffectDict, 0, v28);
      _4__this->fields.currentClassIconAuraEffectPriority = v4->fields.priority;
    }
    v29 = *p__8__1;
    if ( !*p__8__1 )
      goto LABEL_71;
    v29->fields.isLoading = 1;
    v30 = v4->fields.effectId;
    v31 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v26, v27);
    System_Action___ctor(
      v31,
      (Il2CppObject *)v29,
      Method_BattleServantParamComponent___c__DisplayClass124_0__CoAddClassIconEffect_b__0__,
      0LL);
    perf = _4__this->fields.perf;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    BattleEffectUtility__LoadEffectAssetIfNotYet(v30, v31, perf, 0LL);
  }
  _8__1 = v4->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_71;
  if ( _8__1->fields.isLoading )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B6406C(p__2__current, 0, v2, v3);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
    return result;
  }
  if ( !_4__this )
    goto LABEL_71;
  servantData = v4->fields.servantData;
  if ( !servantData )
    goto LABEL_71;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_71;
  ServantGameObject = BattlePerformance__getServantGameObject(
                        (BattlePerformance_o *)this,
                        servantData->fields.uniqueId,
                        0LL);
  if ( !ServantGameObject )
    ServantGameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
  v38 = v4->fields.effectId;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectObject = (UnityEngine_Object_o *)BattleEffectUtility__getEffectObject(v38, ServantGameObject, 1, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)UnityEngine_Object__op_Equality(
                                                                         EffectObject,
                                                                         0LL,
                                                                         0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !EffectObject )
    goto LABEL_71;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0LL);
  if ( !_4__this->fields.clsIconComponent )
    goto LABEL_71;
  v40 = this;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                                                                         0LL);
  if ( !v40 )
    goto LABEL_71;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v40, (UnityEngine_Transform_o *)this, 0LL);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0LL);
  v42 = this;
  if ( !byte_49F7116 )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v41);
    byte_49F7116 = 1;
  }
  if ( !v42 )
    goto LABEL_71;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v42,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0LL);
  v44 = this;
  if ( !byte_49F7111 )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v43);
    byte_49F7111 = 1;
  }
  if ( !v44 )
    goto LABEL_71;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v44,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectObject, 1, 0LL);
  if ( UnityEngine_GameObject__TryGetComponent_object_(
         (UnityEngine_GameObject_o *)EffectObject,
         &component,
         (const MethodInfo_2E89168 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)component;
    if ( !component )
      goto LABEL_71;
    CommonEffectComponent__Init((CommonEffectComponent_o *)component, 0, 0, 0LL);
  }
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)_4__this->fields.classIconEffectDict;
  if ( !this )
    goto LABEL_71;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.effectId,
          (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)_4__this->fields.classIconEffectDict;
    if ( !this )
      goto LABEL_71;
    System_Collections_Generic_Dictionary_int__object___Add(
      (System_Collections_Generic_Dictionary_int__object__o *)this,
      v4->fields.effectId,
      (Il2CppObject *)EffectObject,
      (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
  }
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)_4__this->fields.commandSpellEffectDict;
  if ( !this )
LABEL_71:
    sub_1B64324(this);
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.effectId,
          (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EffectMaster___);
    if ( this )
    {
      this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)DataMasterBase_object__object__int___GetEntity(
                                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                             v4->fields.effectId,
                                                                             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( this )
      {
        v45 = this->fields.__4__this;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        BattleEffectUtility__GetBattleCommonEffectPathAndName((System_String_o *)v45, &path, &name, 0LL);
        v46 = _4__this->fields.perf;
        if ( v46 )
        {
          data = v46->fields.data;
          if ( data )
          {
            v48 = path;
            battleGenderType = data->fields.battleGenderType;
            v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &battleGenderType);
            v50 = System_String__Format((System_String_o *)StringLiteral_18746/*"ef_commandaura_{0}"*/, v49, 0LL);
            if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            Manager__loadBattleCommonEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                        v48,
                                                                        v50,
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
            this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)_4__this->fields.facetex;
            if ( this )
            {
              transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v54 = UnityEngine_Object__Instantiate_object__49003980(
                      (Il2CppObject *)Manager__loadBattleCommonEffect,
                      transform,
                      (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
              GameObjectExtensions__ResetTransform((UnityEngine_GameObject_o *)v54, 0LL);
              if ( v54 )
              {
                UnityEngine_GameObject__SetActive(
                  (UnityEngine_GameObject_o *)v54,
                  !_4__this->fields.isHideFaceTexture,
                  0LL);
                this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)_4__this->fields.commandSpellEffectDict;
                if ( this )
                {
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)this,
                    v4->fields.effectId,
                    v54,
                    (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
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


Il2CppObject *__fastcall BattleServantParamComponent__CoAddClassIconEffect_d__124__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__CoAddClassIconEffect_d__124_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantParamComponent__CoAddClassIconEffect_d__124__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__CoAddClassIconEffect_d__124_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleServantParamComponent__CoAddClassIconEffect_d__124_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall BattleServantParamComponent__CoAddClassIconEffect_d__124__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__CoAddClassIconEffect_d__124_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantParamComponent__CoAddClassIconEffect_d__124__System_IDisposable_Dispose(
        BattleServantParamComponent__CoAddClassIconEffect_d__124_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantParamComponent__DelayMethod_d__115___ctor(
        BattleServantParamComponent__DelayMethod_d__115_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantParamComponent__DelayMethod_d__115__MoveNext(
        BattleServantParamComponent__DelayMethod_d__115_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  bool result; // w0
  struct BattleCallBackBase_o *callBack; // x0

  if ( (byte_49FF40B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_49FF40B = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callBack = this->fields.callBack;
    this->fields.__1__state = -1;
    if ( !callBack )
      sub_1B64324(0LL);
    ((void (__fastcall *)(struct BattleCallBackBase_o *, const char *))callBack->klass[1]._1.gc_desc)(
      callBack,
      callBack->klass[1]._1.name);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    waitTime = this->fields.waitTime;
    v6 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
    UnityEngine_WaitForSeconds___ctor(v6, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleServantParamComponent__DelayMethod_d__115__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__DelayMethod_d__115_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantParamComponent__DelayMethod_d__115__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__DelayMethod_d__115_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleServantParamComponent__DelayMethod_d__115_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall BattleServantParamComponent__DelayMethod_d__115__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__DelayMethod_d__115_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantParamComponent__DelayMethod_d__115__System_IDisposable_Dispose(
        BattleServantParamComponent__DelayMethod_d__115_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantParamComponent___c__DisplayClass122_0___ctor(
        BattleServantParamComponent___c__DisplayClass122_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantParamComponent___c__DisplayClass122_0___DestroyEffectObject_b__0(
        BattleServantParamComponent___c__DisplayClass122_0_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *effectDict; // x0

  if ( (byte_49FF408 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, method);
    byte_49FF408 = 1;
  }
  effectDict = this->fields.effectDict;
  if ( !effectDict )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
    this->fields.id,
    (const MethodInfo_3124E0C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
}


void __fastcall BattleServantParamComponent___c__DisplayClass124_0___ctor(
        BattleServantParamComponent___c__DisplayClass124_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantParamComponent___c__DisplayClass124_0___CoAddClassIconEffect_b__0(
        BattleServantParamComponent___c__DisplayClass124_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoading = 0;
}


void __fastcall BattleServantParamComponent___c__DisplayClass77_0___ctor(
        BattleServantParamComponent___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantParamComponent___c__DisplayClass77_0___initUpdateView_b__0(
        BattleServantParamComponent___c__DisplayClass77_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  BattleServantParamComponent___c__DisplayClass77_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleServantParamComponent_o *_4__this; // x8
  Il2CppObject *v10; // x20
  UnityEngine_Transform_o *battlePointRoot; // x21
  struct BattleServantParamComponent_o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  struct BattleServantParamComponent_o *v15; // x9
  struct ServantBattlePointEntity_o *entity; // x8
  const MethodInfo *v17; // x2

  v4 = this;
  if ( (byte_49FF409 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, assetData);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattlePointGaugeComponent___, v5);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    this = (BattleServantParamComponent___c__DisplayClass77_0_o *)sub_1B640C8(&StringLiteral_3222/*"BattlePointGauge"*/, v8);
    byte_49FF409 = 1;
  }
  if ( !assetData )
    goto LABEL_14;
  this = (BattleServantParamComponent___c__DisplayClass77_0_o *)AssetData__GetObject_object__48347676(
                                                                  assetData,
                                                                  (System_String_o *)StringLiteral_3222/*"BattlePointGauge"*/,
                                                                  (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v10 = (Il2CppObject *)this;
  battlePointRoot = _4__this->fields.battlePointRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleServantParamComponent___c__DisplayClass77_0_o *)UnityEngine_Object__Instantiate_object__49003980(
                                                                  v10,
                                                                  battlePointRoot,
                                                                  (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
  if ( !this )
    goto LABEL_14;
  v12 = v4->fields.__4__this;
  this = (BattleServantParamComponent___c__DisplayClass77_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattlePointGaugeComponent___);
  if ( !v12
    || (v12->fields.battlePointGaugeComponent = (struct BattlePointGaugeComponent_o *)this,
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&v12->fields.battlePointGaugeComponent,
          (int32_t)this,
          v13,
          v14),
        (v15 = v4->fields.__4__this) == 0LL)
    || (entity = v4->fields.entity) == 0LL
    || (this = (BattleServantParamComponent___c__DisplayClass77_0_o *)v15->fields.battlePointGaugeComponent) == 0LL
    || (BattlePointGaugeComponent__Init((BattlePointGaugeComponent_o *)this, entity->fields.battlePointId, 0LL),
        (this = (BattleServantParamComponent___c__DisplayClass77_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_1B64324(this);
  }
  BattleServantParamComponent__UpdateBattlePointImmediately(
    (BattleServantParamComponent_o *)this,
    (BattleServantData_o *)this[8].monitor,
    v17);
}


void __fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84___ctor(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84__MoveNext(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_o *this,
        const MethodInfo *method)
{
  BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_o *v2; // x19
  int32_t _1__state; // w8
  __int64 v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  bool result; // w0
  struct BattleServantParamComponent_o *_4__this; // x20
  const MethodInfo *v9; // x1
  struct BattleServantSkillIConComponent_array *skillIcon; // x19
  int max_length; // w8
  int v12; // w22
  char v13; // w21
  int v14; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_49FF40C & 1) == 0 )
  {
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_o *)sub_1B640C8(&int_TypeInfo, method);
    byte_49FF40C = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_21;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_21;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_o *)BattleServantData__get_BuffData(
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
    v12 = 0;
    v13 = 0;
    do
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1B6432C(this, v9);
      this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_o *)skillIcon->m_Items[v12];
      if ( !this )
        goto LABEL_21;
      this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_o *)BattleServantSkillIConComponent__UpdateSkillRankUpEffect(
                                                                                        (BattleServantSkillIConComponent_o *)this,
                                                                                        v9);
      max_length = skillIcon->max_length;
      ++v12;
      v13 |= (unsigned __int8)this;
    }
    while ( v12 < max_length );
    if ( (v13 & 1) == 0 )
      return 0;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_o *)_4__this->fields.data;
    if ( !this
      || (this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_o *)BattleServantData__get_BuffData(
                                                                                            (BattleServantData_o *)this,
                                                                                            0LL)) == 0LL
      || (this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_o *)this[2].klass) == 0LL )
    {
LABEL_21:
      sub_1B64324(this);
    }
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter((BattleBuffData_SkillRankChangeData_o *)this, 0, 0LL);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v14 = 0;
    v4 = j_il2cpp_value_box_0(int_TypeInfo, &v14);
    v2->fields.__2__current = (Il2CppObject *)v4;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.__2__current, v4, v5, v6);
    result = 1;
    v2->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84__System_IDisposable_Dispose(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantParamComponent__showSideEffectList_d__111___ctor(
        BattleServantParamComponent__showSideEffectList_d__111_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantParamComponent__showSideEffectList_d__111__MoveNext(
        BattleServantParamComponent__showSideEffectList_d__111_o *this,
        const MethodInfo *method)
{
  BattleServantParamComponent__showSideEffectList_d__111_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleServantParamComponent_o *_4__this; // x20
  BattleActionData_BuffData_o *v8; // x21
  BattleServantParamComponent__showSideEffectList_d__111_o *v9; // x22
  int32_t statusEffectId; // w23
  float x; // s10
  float y; // s8
  float z; // s9
  const MethodInfo *v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  BattleServantParamComponent_c *v17; // x0
  float SideEffectShowWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v19; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v21; // w2
  int32_t v22; // w3
  bool result; // w0
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_49FF40D & 1) == 0 )
  {
    sub_1B640C8(&BattleEffectUtility_TypeInfo, method);
    sub_1B640C8(&BattleServantParamComponent_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__get_Count__, v5);
    this = (BattleServantParamComponent__showSideEffectList_d__111_o *)sub_1B640C8(
                                                                         &UnityEngine_WaitForSeconds_TypeInfo,
                                                                         v6);
    byte_49FF40D = 1;
  }
  if ( v2->fields.__1__state >= 2u )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_16;
  this = (BattleServantParamComponent__showSideEffectList_d__111_o *)_4__this->fields.sideEffectShowQueue;
  if ( !this )
    goto LABEL_16;
  if ( !LODWORD(this->fields.__4__this) )
  {
    result = 0;
    _4__this->fields.isShowingSideEffect = 0;
    return result;
  }
  this = (BattleServantParamComponent__showSideEffectList_d__111_o *)System_Collections_Generic_Queue_object___Dequeue(
                                                                       (System_Collections_Generic_Queue_T__o *)this,
                                                                       (const MethodInfo_3622C74 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__);
  if ( !_4__this->fields.clsIconComponent
    || (v8 = (BattleActionData_BuffData_o *)this,
        this = (BattleServantParamComponent__showSideEffectList_d__111_o *)UnityEngine_Component__get_transform(
                                                                             (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                                                                             0LL),
        !v8) )
  {
LABEL_16:
    sub_1B64324(this);
  }
  v9 = this;
  statusEffectId = v8->fields.statusEffectId;
  x = _4__this->fields.sideEffectScl.fields.x;
  y = _4__this->fields.sideEffectScl.fields.y;
  z = _4__this->fields.sideEffectScl.fields.z;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  v24.fields.x = x;
  v24.fields.y = y;
  v24.fields.z = z;
  BattleEffectUtility__showSideEffect((UnityEngine_Transform_o *)v9, statusEffectId, v24, 0LL);
  BattleServantParamComponent__popBuffLabel(_4__this, v8, v14);
  v17 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v17 = BattleServantParamComponent_TypeInfo;
  }
  SideEffectShowWaitTime = v17->static_fields->SideEffectShowWaitTime;
  v19 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v15, v16);
  UnityEngine_WaitForSeconds___ctor(v19, SideEffectShowWaitTime, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v19;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B6406C(p__2__current, (int32_t)v19, v21, v22);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return result;
}


Il2CppObject *__fastcall BattleServantParamComponent__showSideEffectList_d__111__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__showSideEffectList_d__111_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantParamComponent__showSideEffectList_d__111__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__showSideEffectList_d__111_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleServantParamComponent__showSideEffectList_d__111_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall BattleServantParamComponent__showSideEffectList_d__111__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__showSideEffectList_d__111_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantParamComponent__showSideEffectList_d__111__System_IDisposable_Dispose(
        BattleServantParamComponent__showSideEffectList_d__111_o *this,
        const MethodInfo *method)
{
  ;
}