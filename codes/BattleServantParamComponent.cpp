void __fastcall BattleServantParamComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4A5E1D8 & 1) == 0 )
  {
    sub_1B885B0(&BattleServantParamComponent_TypeInfo);
    byte_4A5E1D8 = 1;
  }
  LODWORD(BattleServantParamComponent_TypeInfo->static_fields->SideEffectShowWaitTime) = (struct BattleServantParamComponent_StaticFields)1065353216;
}


void __fastcall BattleServantParamComponent___ctor(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_Queue_T__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v10; // d1
  float z; // s2
  System_Collections_Generic_Dictionary_int__object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_Dictionary_int__object__o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A5E1D7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
    sub_1B885B0(&UnityEngine_GameObject___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__);
    sub_1B885B0(&System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo);
    byte_4A5E1D7 = 1;
  }
  v3 = (struct UnityEngine_GameObject_array *)sub_1B88658(UnityEngine_GameObject___TypeInfo, 1LL);
  this->fields.effectobj = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectobj, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Queue_T__o *)sub_1B887FC(System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v6,
    (const MethodInfo_366F2A4 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__);
  this->fields.sideEffectShowQueue = (struct System_Collections_Generic_Queue_BattleActionData_BuffData__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sideEffectShowQueue, (int32_t)v6, v7, v8);
  if ( !byte_4A55CE6 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v10 = *(_QWORD *)&static_fields->oneVector.fields.x;
  z = static_fields->oneVector.fields.z;
  this->fields.sideEffectLabelWidth = 100.0;
  this->fields.GRAY = (struct UnityEngine_Color_o)xmmword_BB3F10;
  *(_QWORD *)&this->fields.sideEffectScl.fields.x = v10;
  this->fields.sideEffectScl.fields.z = z;
  this->fields.isActiveHpBar = 1;
  v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v12,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.classIconEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.classIconEffectDict, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v15,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.commandSpellEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandSpellEffectDict, (int32_t)v15, v16, v17);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5E1D1 & 1) == 0 )
  {
    sub_1B885B0(&BattleServantParamComponent__CoAddClassIconEffect_d__124_TypeInfo);
    byte_4A5E1D1 = 1;
  }
  v9 = sub_1B887FC(BattleServantParamComponent__CoAddClassIconEffect_d__124_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)this, v10, v11);
  *(_DWORD *)(v9 + 32) = effectId;
  *(_DWORD *)(v9 + 48) = priority;
  *(_QWORD *)(v9 + 64) = servantData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 64), (int32_t)servantData, v12, v13);
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
    sub_1B8880C(0LL, method);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
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

  if ( (byte_4A5E1CA & 1) == 0 )
  {
    sub_1B885B0(&BattleServantParamComponent__DelayMethod_d__115_TypeInfo);
    byte_4A5E1CA = 1;
  }
  v6 = sub_1B887FC(BattleServantParamComponent__DelayMethod_d__115_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(float *)(v6 + 32) = waitTime;
  *(_QWORD *)(v6 + 40) = callBack;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 40), (int32_t)callBack, v7, v8);
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
        sub_1B88814(this, method);
      this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
      if ( !this )
        break;
      BattleServantSkillIConComponent__DeleteRankUpEffect((BattleServantSkillIConComponent_o *)this, method);
      max_length = skillIcon->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1B8880C(this, method);
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

  if ( (byte_4A5E1CF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4A5E1CF = 1;
  }
  IsNullOrEmpty = (System_Int32_array *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)effectDict, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !effectDict
      || (Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                   (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
                   (const MethodInfo_316D618 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__),
          (IsNullOrEmpty = System_Linq_Enumerable__ToArray_int_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                             (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___)) == 0LL) )
    {
      sub_1B8880C(IsNullOrEmpty, v7);
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
          sub_1B88814(IsNullOrEmpty, v7);
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


void __fastcall BattleServantParamComponent__DestroyBattlePointGauge(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battlePointGaugeComponent; // x20
  __int64 v4; // x1
  UnityEngine_Component_o **p_battlePointGaugeComponent; // x19
  UnityEngine_Object_o *gameObject; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5E1D5 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1D5 = 1;
  }
  battlePointGaugeComponent = (UnityEngine_Object_o *)this->fields.battlePointGaugeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battlePointGaugeComponent, 0LL, 0LL) )
  {
    p_battlePointGaugeComponent = (UnityEngine_Component_o **)&this->fields.battlePointGaugeComponent;
    if ( !*p_battlePointGaugeComponent )
      sub_1B8880C(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_battlePointGaugeComponent, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    *p_battlePointGaugeComponent = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_battlePointGaugeComponent, 0, v7, v8);
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
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject **v13; // x20
  System_Collections_ICollection_o *v14; // x0
  Il2CppObject *v15; // x20
  System_Action_o *v16; // x21
  Il2CppObject *v17; // x21
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5E1D0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1B885B0(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_BattleServantParamComponent___c__DisplayClass122_0__DestroyEffectObject_b__0__);
    sub_1B885B0(&BattleServantParamComponent___c__DisplayClass122_0_TypeInfo);
    byte_4A5E1D0 = 1;
  }
  component = 0LL;
  v8 = sub_1B887FC(BattleServantParamComponent___c__DisplayClass122_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_19;
  *(_QWORD *)(v8 + 16) = effectDict;
  v13 = (Il2CppObject **)(v8 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)effectDict, v11, v12);
  v14 = *(System_Collections_ICollection_o **)(v8 + 16);
  *(_DWORD *)(v8 + 24) = id;
  if ( !BasicHelper__IsNullOrEmpty(v14, 0LL) )
  {
    Item = *v13;
    if ( !*v13 )
      goto LABEL_19;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)Item,
           *(_DWORD *)(v8 + 24),
           (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    {
      if ( !forceDestroy )
      {
        Item = *v13;
        if ( !*v13 )
          goto LABEL_19;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 (System_Collections_Generic_Dictionary_int__object__o *)Item,
                 *(_DWORD *)(v8 + 24),
                 (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
        if ( !Item )
          goto LABEL_19;
        if ( UnityEngine_GameObject__TryGetComponent_object_(
               (UnityEngine_GameObject_o *)Item,
               &component,
               (const MethodInfo_2ED0148 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
        {
          v15 = component;
          v16 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v16,
            (Il2CppObject *)v8,
            Method_BattleServantParamComponent___c__DisplayClass122_0__DestroyEffectObject_b__0__,
            0LL);
          if ( v15 )
          {
            ((void (__fastcall *)(Il2CppObject *, __int64, System_Action_o *, Il2CppMethodPointer))v15->klass->vtable[8].method)(
              v15,
              1LL,
              v16,
              v15->klass->vtable[9].methodPtr);
            return;
          }
LABEL_19:
          sub_1B8880C(Item, v10);
        }
      }
      Item = *v13;
      if ( !*v13 )
        goto LABEL_19;
      v17 = System_Collections_Generic_Dictionary_int__object___get_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)Item,
              *(_DWORD *)(v8 + 24),
              (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)v17, 0LL);
      Item = *v13;
      if ( !*v13 )
        goto LABEL_19;
      System_Collections_Generic_Dictionary_int__object___Remove(
        (System_Collections_Generic_Dictionary_int__object__o *)Item,
        *(_DWORD *)(v8 + 24),
        (const MethodInfo_316EDE0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
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
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v10; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v11; // [xsp+20h] [xbp-60h] BYREF
  Il2CppObject *component; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4A5E1D2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (BattleServantParamComponent_o *)sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
    byte_4A5E1D2 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  component = 0LL;
  if ( !effectDict
    || (this = (BattleServantParamComponent_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                  (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
                                                  (const MethodInfo_316D768 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
    sub_1B8880C(this, effectDict);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v10,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_3804A5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v11,
            (const MethodInfo_32B808C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    currentValue = v11.fields._currentValue;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)currentValue, 0LL, 0LL);
    if ( !v7 )
    {
      if ( !currentValue )
        sub_1B8880C(v7, v8);
      if ( UnityEngine_GameObject__TryGetComponent_object_(
             (UnityEngine_GameObject_o *)currentValue,
             &component,
             (const MethodInfo_2ED0148 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentValue, 1, 0LL);
        if ( isStart )
        {
          if ( !component )
            sub_1B8880C(0LL, v9);
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)component, 0LL);
        }
        else
        {
          if ( !component )
            sub_1B8880C(0LL, v9);
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
    &v11,
    (const MethodInfo_32B8088 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
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

  if ( (byte_4A5E1C0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1C0 = 1;
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
        sub_1B8880C(isTDSeraled, v9);
      BattleNextTDgaugeComponent__setInitGauge(v5, nexttpturn, maxtpturn, isTDSeraled, 0LL);
    }
  }
}


void __fastcall BattleServantParamComponent__OnClick(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  struct BattleServantData_o *data; // x8
  UnityEngine_GameObject_o *v8; // x19
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  int32_t uniqueId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5E19F & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_22248/*"onClickServant"*/);
    byte_4A5E19F = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) && this->fields.uniqueID != -1 )
  {
    data = this->fields.data;
    if ( data )
    {
      v8 = this->fields.target;
      uniqueId = data->fields.uniqueId;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &uniqueId, v4, v5, v6);
      if ( !v8 )
        sub_1B8880C(v9, v10);
      UnityEngine_GameObject__SendMessage_69440752(v8, (System_String_o *)StringLiteral_22248/*"onClickServant"*/, v9, 0LL);
    }
  }
}


void __fastcall BattleServantParamComponent__OnCompleteShiftGaugeChangeHp(
        BattleServantParamComponent_o *this,
        BattleAction_BasePlayShiftGauge_o *playShiftGauge,
        const MethodInfo *method)
{
  if ( !playShiftGauge )
    sub_1B8880C(this, 0LL);
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

  if ( (byte_4A5E1C3 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1C3 = 1;
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
      sub_1B8880C(v8, v7);
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
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5E1BE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1BE = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1B8880C(v10, v8);
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
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5E1BC & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1BC = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL);
  result = 0.0;
  if ( v8 )
  {
    v12 = this->fields.hpShift;
    if ( !v12 )
      sub_1B8880C(0LL, v9);
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
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5E1BD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__bool__bool__TypeInfo);
    sub_1B885B0(&Method_BattleCallBack_int__bool__bool___ctor__);
    sub_1B885B0(&BattleCallBack_int__bool__bool__TypeInfo);
    sub_1B885B0(&Method_BattleServantHpShiftComponent_UpdateIcon__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1BD = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
  {
    v12 = this->fields.hpShift;
    if ( !v12
      || (BattleServantHpShiftComponent__UpdateIconActive(v12, index, 1, v11), (v12 = this->fields.hpShift) == 0LL) )
    {
      sub_1B8880C(v12, v10);
    }
    BattleServantHpShiftComponent__PlayShiftEffectGeneral(v12, index, effectData, this, &nextAnimationTime, 0LL, v13);
    v14 = (Il2CppObject *)this->fields.hpShift;
    v15 = (System_Action_int__bool__bool__o *)sub_1B887FC(System_Action_int__bool__bool__TypeInfo);
    System_Action_int__bool__bool____ctor(v15, v14, Method_BattleServantHpShiftComponent_UpdateIcon__, 0LL);
    v16 = (BattleCallBack_int__bool__bool__o *)sub_1B887FC(BattleCallBack_int__bool__bool__TypeInfo);
    BattleCallBack_int__bool__bool____ctor(
      v16,
      index,
      0,
      1,
      (System_Action_T1__T2__T3__o *)v15,
      (const MethodInfo_309649C *)Method_BattleCallBack_int__bool__bool___ctor__);
    v19 = BattleServantParamComponent__DelayMethod(v17, delayTime, (BattleCallBackBase_o *)v16, v18);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v19, 0LL);
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
        sub_1B88814(this, method);
      this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
      if ( !this )
        break;
      BattleServantSkillIConComponent__RemoveEffectClearRankUpBuff((BattleServantSkillIConComponent_o *)this, method);
      max_length = skillIcon->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1B8880C(this, method);
  }
}


void __fastcall BattleServantParamComponent__SetBreakSpriteDisplay(
        BattleServantParamComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *breakSprite; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *v7; // x0
  UnityEngine_Object_o *hplabel; // x21
  UnityEngine_Object_o *maxhplabel; // x21
  UnityEngine_Object_o *totalhplabel; // x21

  if ( (byte_4A5E1D6 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1D6 = 1;
  }
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.breakSprite;
    if ( !v7 )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(v7, flg, 0LL);
  }
  hplabel = (UnityEngine_Object_o *)this->fields.hplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hplabel, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.hplabel;
    if ( !v7 )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(v7, !flg, 0LL);
  }
  maxhplabel = (UnityEngine_Object_o *)this->fields.maxhplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maxhplabel, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.maxhplabel;
    if ( !v7 )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(v7, !flg, 0LL);
  }
  totalhplabel = (UnityEngine_Object_o *)this->fields.totalhplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(totalhplabel, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.totalhplabel;
    if ( v7 )
    {
      UnityEngine_Behaviour__set_enabled(v7, !flg, 0LL);
      return;
    }
LABEL_24:
    sub_1B8880C(v7, v6);
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
    sub_1B8880C(showBuffComponent, paramPosData);
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
  if ( (byte_4A5E1D3 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1D3 = 1;
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
        sub_1B8880C(this, svtdata);
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
  if ( (byte_4A5E1D4 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1D4 = 1;
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
        sub_1B8880C(this, svtdata);
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
  System_Collections_ICollection_o *ClassIconEffectBuffList; // x23
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_int__o *v8; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x22
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x23
  _BOOL8 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x4
  System_Collections_IEnumerator_o *v16; // x0
  UnityEngine_Coroutine_o *started; // x0
  __int64 v18; // x1
  _BOOL8 v19; // x0
  __int64 monitor_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  __int64 v24; // x1
  System_Collections_Generic_Dictionary_int__object__o *classIconEffectDict; // x0
  int32_t v26; // w20
  _BOOL8 v27; // x0
  const MethodInfo *v28; // x4
  BattleServantParamComponent_o *v29; // x0
  const MethodInfo *v30; // x4
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+40h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4A5E1CE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_AuraEffectMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    this = (BattleServantParamComponent_o *)sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5E1CE = 1;
  }
  memset(&v34, 0, sizeof(v34));
  entity = 0LL;
  memset(&v32, 0, sizeof(v32));
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
  v8 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleServantParamComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_AuraEffectMaster___);
  if ( !v4->fields.classIconEffectDict )
    goto LABEL_38;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  this = (BattleServantParamComponent_o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                            (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.classIconEffectDict,
                                            (const MethodInfo_316D608 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
  if ( (int)this <= 0 )
    v4->fields.currentClassIconAuraEffectPriority = 0;
  if ( !ClassIconEffectBuffList )
    goto LABEL_38;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)ClassIconEffectBuffList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v34 = v31;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v10 )
      break;
    current = v34.fields._current;
    if ( !v34.fields._current )
      sub_1B8880C(v10, v11);
    if ( !v9 )
      sub_1B8880C(v10, v11);
    v13 = DataMasterBase_object__object__int___TryGetEntity(
            v9,
            &entity,
            (int32_t)v34.fields._current[21].monitor,
            (const MethodInfo_311D988 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    if ( v13 )
    {
      if ( !entity )
        sub_1B8880C(v13, v14);
      v16 = BattleServantParamComponent__CoAddClassIconEffect(
              v4,
              HIDWORD(entity[1].klass),
              (int32_t)entity[1].monitor,
              servantData,
              v15);
      started = UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)v4, v16, 0LL);
      if ( !v8 )
        sub_1B8880C(started, v18);
      v19 = System_Collections_Generic_List_int___Contains(
              v8,
              (int32_t)current[21].monitor,
              (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v19 )
      {
        monitor_low = LODWORD(current[21].monitor);
        items = v8->fields._items;
        v22 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !items )
          sub_1B8880C(v19, monitor_low);
        size = v8->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v8,
            monitor_low,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v8->fields._size = size + 1;
          items->m_Items[size + 1] = monitor_low;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v8 )
LABEL_38:
    sub_1B8880C(this, servantData);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    v8,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v32,
            (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    classIconEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.classIconEffectDict;
    if ( !classIconEffectDict )
      sub_1B8880C(0LL, v24);
    v26 = (int32_t)v32.fields._current;
    v27 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
            classIconEffectDict,
            (int32_t)v32.fields._current,
            (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    if ( !v27 )
    {
      BattleServantParamComponent__DestroyEffectObject(
        (BattleServantParamComponent_o *)v27,
        v4->fields.classIconEffectDict,
        v26,
        0,
        v28);
      BattleServantParamComponent__DestroyEffectObject(v29, v4->fields.commandSpellEffectDict, v26, 0, v30);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v32,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void __fastcall BattleServantParamComponent__UpdateNameLabel(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nameLabel; // x20
  __int64 v4; // x1
  BattleServantData_o *data; // x0
  UILabel_o *v6; // x19

  if ( (byte_4A5E1CC & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1CC = 1;
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
        sub_1B8880C(data, v4);
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

  if ( (byte_4A5E1A9 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1A9 = 1;
  }
  npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL) )
  {
    v7 = this->fields.npcomp;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
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

  if ( (byte_4A5E1BF & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1BF = 1;
  }
  hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpChange, 0LL, 0LL) )
  {
    v7 = this->fields.hpChange;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
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
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x0
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x0
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  char v33[4]; // [xsp+8h] [xbp-78h] BYREF
  float v34; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v35; // [xsp+18h] [xbp-68h] BYREF
  int32_t v36; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4A5E1C2 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&System_Collections_Hashtable_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_19656/*"from"*/);
    sub_1B885B0(&StringLiteral_20228/*"ignoretimescale"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22274/*"oncompleteparams"*/);
    sub_1B885B0(&StringLiteral_22281/*"onupdate"*/);
    sub_1B885B0(&StringLiteral_9972/*"OnUpdateShiftGaugeChangeHp"*/);
    sub_1B885B0(&StringLiteral_9876/*"OnCompleteShiftGaugeChangeHp"*/);
    sub_1B885B0(&StringLiteral_23969/*"to"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5E1C2 = 1;
  }
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = (BattleHpGaugeBarComponent_o *)UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL);
  if ( ((unsigned __int8)v14 & 1) != 0 )
  {
    v14 = this->fields.hpGauge;
    if ( !v14 )
      goto LABEL_13;
    BattleHpGaugeBarComponent__setInitValue(v14, fromHp, maxHp, 0LL);
  }
  this->fields.shiftGaugeMaxHp = maxHp;
  if ( !playShiftGauge
    || (playShiftGauge->fields._ChangeToHp_k__BackingField = toHp,
        v16 = (System_Collections_Hashtable_o *)sub_1B887FC(System_Collections_Hashtable_TypeInfo),
        System_Collections_Hashtable___ctor_62286464(v16, 0LL),
        v36 = fromHp,
        v14 = (BattleHpGaugeBarComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v17, v18, v19),
        !v16) )
  {
LABEL_13:
    sub_1B8880C(v14, v15);
  }
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, BattleHpGaugeBarComponent_o *, Il2CppMethodPointer))v16->klass->vtable._23_Add.method)(
    v16,
    StringLiteral_19656/*"from"*/,
    v14,
    v16->klass->vtable._24_Clear.methodPtr);
  v35 = toHp;
  v23 = j_il2cpp_value_box_0(int_TypeInfo, &v35, v20, v21, v22);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v16->klass->vtable._23_Add.method)(
    v16,
    StringLiteral_23969/*"to"*/,
    v23,
    v16->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v16->klass->vtable._23_Add.method)(
    v16,
    StringLiteral_22281/*"onupdate"*/,
    StringLiteral_9972/*"OnUpdateShiftGaugeChangeHp"*/,
    v16->klass->vtable._24_Clear.methodPtr);
  v34 = time;
  v27 = j_il2cpp_value_box_0(float_TypeInfo, &v34, v24, v25, v26);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v16->klass->vtable._23_Add.method)(
    v16,
    StringLiteral_23929/*"time"*/,
    v27,
    v16->klass->vtable._24_Clear.methodPtr);
  v33[0] = 1;
  v31 = j_il2cpp_value_box_0(bool_TypeInfo, v33, v28, v29, v30);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v16->klass->vtable._23_Add.method)(
    v16,
    StringLiteral_20228/*"ignoretimescale"*/,
    v31,
    v16->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v16->klass->vtable._23_Add.method)(
    v16,
    StringLiteral_22273/*"oncomplete"*/,
    StringLiteral_9876/*"OnCompleteShiftGaugeChangeHp"*/,
    v16->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, BattleAction_BasePlayShiftGauge_o *, Il2CppMethodPointer))v16->klass->vtable._23_Add.method)(
    v16,
    StringLiteral_22274/*"oncompleteparams"*/,
    playShiftGauge,
    v16->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
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
  Il2CppObject *v14; // x21
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  UILabel_o *v19; // x20
  struct System_String_o *svtOverwriteBattleName; // x8
  float v21; // s8
  float v22; // s1
  float v23; // s0
  float v24; // s2

  if ( (byte_4A5E1CD & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&StringLiteral_17128/*"battle_name"*/);
    byte_4A5E1CD = 1;
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
      v9 = EnemyNameEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(enemyNameEffectPrefab, 0LL, 0LL) )
      {
        v10 = (UnityEngine_Object_o *)*p_enemyNameEffectPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69459380(v10, 0LL);
      }
      if ( v9 )
      {
        data = (BattleServantData_o *)this->fields.shortNameLabel;
        if ( !data )
          goto LABEL_44;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
        GameObjectExtensions__ResetLocalScale(gameObject, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v9, 0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetStorage = AssetManager__getAssetStorage(NameEffectPath, 0LL);
        v14 = AssetStorage
            ? AssetData__GetObject_object__48635516(
                AssetStorage,
                (System_String_o *)StringLiteral_17128/*"battle_name"*/,
                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352)
            : 0LL;
        data = (BattleServantData_o *)this->fields.shortNameLabel;
        if ( !data )
          goto LABEL_44;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v16 = UnityEngine_Object__Instantiate_object__49297800(
                v14,
                transform,
                (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
        *p_enemyNameEffectPrefab = (struct UnityEngine_GameObject_o *)v16;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.enemyNameEffectPrefab, (int32_t)v16, v17, v18);
      }
      data = this->fields.data;
      if ( data )
      {
        v19 = this->fields.shortNameLabel;
        data = (BattleServantData_o *)BattleServantData__getServantShortName(data, 0LL);
        if ( v19 )
        {
          UILabel__set_text(v19, (System_String_o *)data, 0LL);
          defaultShortNameLabelWidth = (unsigned int)this->fields.defaultShortNameLabelWidth;
          data = (BattleServantData_o *)this->fields.shortNameLabel;
          if ( (int)defaultShortNameLabelWidth <= 0 )
          {
            if ( !data )
              goto LABEL_44;
            defaultShortNameLabelWidth = (unsigned int)data->fields._iconLimitCount_k__BackingField.fields.fakeValue;
            this->fields.defaultShortNameLabelWidth = defaultShortNameLabelWidth;
          }
          else if ( !data )
          {
            goto LABEL_44;
          }
          svtOverwriteBattleName = data->fields.svtOverwriteBattleName;
          if ( !svtOverwriteBattleName )
            goto LABEL_44;
          v21 = (float)(data->fields.atktdrate * svtOverwriteBattleName->fields._stringLength);
          if ( (float)(int)defaultShortNameLabelWidth >= v21 )
          {
            UIWidget__set_width((UIWidget_o *)data, defaultShortNameLabelWidth, 0LL);
            data = (BattleServantData_o *)this->fields.shortNameLabel;
            if ( data )
            {
              data = (BattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
              if ( data )
              {
                v23 = 1.0;
                v22 = 1.0;
                goto LABEL_43;
              }
            }
          }
          else
          {
            UIWidget__set_width((UIWidget_o *)data, (int)v21, 0LL);
            data = (BattleServantData_o *)this->fields.shortNameLabel;
            if ( data )
            {
              data = (BattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
              if ( data )
              {
                v22 = 1.0;
                v23 = (float)this->fields.defaultShortNameLabelWidth / v21;
LABEL_43:
                v24 = 1.0;
                UnityEngine_Transform__set_localScale(
                  (UnityEngine_Transform_o *)data,
                  *(UnityEngine_Vector3_o *)&v23,
                  0LL);
                return;
              }
            }
          }
        }
      }
LABEL_44:
      sub_1B8880C(data, defaultShortNameLabelWidth);
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
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
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

  if ( (byte_4A5E1B1 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1B1 = 1;
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
        sub_1B8880C(data, v8);
      }
      UILabel__set_text(v10, (System_String_o *)data, 0LL);
    }
  }
}


void __fastcall BattleServantParamComponent__UpdateStatusFace(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_facetex; // x19
  UnityEngine_Object_o *facetex; // x21
  __int64 v5; // x1
  BattleServantData_o *data; // x0
  UITexture_o *v7; // x21
  BattleServantData_o *v8; // x8
  int32_t v9; // w20
  int32_t DispLimitCount; // w22
  UITexture_o *Manager__loadStatusFace; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5E1CB & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    byte_4A5E1CB = 1;
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
        sub_1B8880C(data, v5);
      }
      v9 = (int)data;
      DispLimitCount = BattleServantData__getDispLimitCount(v8, 1, 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadStatusFace = ServantAssetLoadManager__loadStatusFace(v7, v9, DispLimitCount, 0LL);
      p_facetex->klass = (ServantStatusBattleListViewItem_c *)Manager__loadStatusFace;
      sub_1B88554(p_facetex, (int32_t)Manager__loadStatusFace, v12, v13);
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

  if ( (byte_4A5E1C1 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1C1 = 1;
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
          sub_1B88814(data, v6);
        v8 = this->fields.nextTdGauge;
        v10 = nowAndMaxArray->m_Items[1];
        v9 = nowAndMaxArray->m_Items[2];
        isTDSeraled = BattleServantData__isTDSeraled(data, 0LL);
        if ( !v8 )
          sub_1B8880C(isTDSeraled, v12);
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
  if ( (byte_4A5E1B4 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1B885B0(&Method_BattleServantParamComponent_callSkillIcon__);
    byte_4A5E1B4 = 1;
  }
  skillIcon = v2->fields.skillIcon;
  if ( !skillIcon )
LABEL_13:
    sub_1B8880C(this, method);
  v4 = 0LL;
  v5 = 0;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1B88814(this, method);
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
          v7 = (_QWORD *)sub_1B885C8(Method_BattleServantParamComponent_callSkillIcon__);
        v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(NowHp, v5);
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
  System_Collections_Generic_List_object__o *v3; // x20
  System_Object_array *v4; // x0
  __int64 v5; // x1
  BattleServantShowBuffComponent_o *showBuffComponent; // x19
  const MethodInfo *v7; // x2

  if ( (byte_4A5E1C9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
    byte_4A5E1C9 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  if ( !v3
    || (showBuffComponent = this->fields.showBuffComponent,
        v4 = System_Collections_Generic_List_object___ToArray(
               v3,
               (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__),
        !showBuffComponent) )
  {
    sub_1B8880C(v4, v5);
  }
  BattleServantShowBuffComponent__setBuffList(showBuffComponent, (BattleBuffData_ShowBuffData_array *)v4, v7);
}


void __fastcall BattleServantParamComponent__clickSkillIcon(
        BattleServantParamComponent_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isLongTap,
        const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x22
  __int64 v8; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4A5E1B6 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1B6 = 1;
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
                                                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___)) == 0LL )
    {
      sub_1B8880C(Component_object, v8);
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

  if ( (byte_4A5E1B5 & 1) == 0 )
  {
    sub_1B885B0(&BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_TypeInfo);
    byte_4A5E1B5 = 1;
  }
  v3 = sub_1B887FC(BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Object_o *levelLabel; // x21
  UILabel_o *v15; // x21
  UnityEngine_Object_o *nameLabel; // x21
  UILabel_o *v17; // x21
  UnityEngine_Object_o *hpGauge; // x21
  BattleHpGaugeBarComponent_o *v19; // x21
  int32_t v20; // w22
  UnityEngine_Object_o *hpChange; // x21
  struct BattleServantData_o *v22; // x8
  struct System_Int32_array *shiftDeckList; // x9
  UnityEngine_Object_o *hpShift; // x21
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *breakSprite; // x21
  int32_t v27; // w21
  int32_t MaxHp; // w0
  const MethodInfo *v29; // x4
  UnityEngine_Object_o *npcomp; // x21
  struct BattleNpGaugeSystemComponent_o *v31; // x21
  struct BattleServantData_o *v32; // x8
  BattleNpGaugeSystemComponent_o *v33; // x21
  UnityEngine_Object_o *nextTdGauge; // x21
  bool v35; // w0
  const MethodInfo *v36; // x2
  BattleNextTDgaugeComponent_o *v37; // x20
  int32_t nexttpturn; // w21
  int32_t maxtpturn; // w22
  UnityEngine_Object_o *friendIcon; // x20
  struct BattleServantData_o *v41; // x8
  UISprite_o *v42; // x20
  UISprite_o *v43; // x20
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *breakPoint; // x20
  struct BattleServantData_o *v46; // x8
  struct BattleServantData_o *v47; // x8
  ServantBattlePointMaster_o *v48; // x20
  __int64 v49; // x21
  __int64 v50; // x22
  BattleServantData_c *klass; // x8
  BattleServantData_o *v52; // x20
  __int64 v53; // x9
  int32_t *p_offset; // x10
  __int64 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x20
  BattlePointData_o *v58; // x23
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  __int64 v63; // x21
  __int64 v64; // x0
  __int64 v65; // x1
  int32_t v66; // w2
  int32_t v67; // w3
  __int64 v68; // x8
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0
  __int64 v72; // x0
  __int64 v73; // x22
  int32_t v74; // w2
  int32_t v75; // w3
  __int64 v76; // x0
  __int64 v77; // x1
  BattleServantData_o *v78; // x0
  BattlePointData_o *BattlePointData; // x0
  __int64 v80; // x1
  BattlePointData_o *v81; // x28
  struct BattleServantData_o *v82; // x8
  UnityEngine_Object_o *battlePointRoot; // x23
  _BOOL8 v84; // x0
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  Il2CppObject *v89; // x1
  System_String_o *v90; // x19
  AssetLoader_LoadEndDataHandler_o *v91; // x22
  __int64 v92; // x8
  __int64 v93; // x9
  int *v94; // x10
  __int64 v95; // x0
  int v96; // [xsp+Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16

  v3 = notUpdateFlag;
  if ( (byte_4A5E1B0 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantBattlePointMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&FileName_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_BattleServantParamComponent___c__DisplayClass77_0__initUpdateView_b__0__);
    sub_1B885B0(&BattleServantParamComponent___c__DisplayClass77_0_TypeInfo);
    sub_1B885B0(&StringLiteral_3207/*"Battle/BattlePoint/Prefab/{0}"*/);
    byte_4A5E1B0 = 1;
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
    v8 = this->fields.facetex;
    data = (BattleServantData_o *)BattleServantData__GetDispImageSvtId(data, 0LL);
    if ( !this->fields.data )
      goto LABEL_154;
    v9 = (int)data;
    DispLimitCount = BattleServantData__getDispLimitCount(this->fields.data, 1, 0LL);
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    Manager__loadStatusFace = ServantAssetLoadManager__loadStatusFace(v8, v9, DispLimitCount, 0LL);
    this->fields.facetex = Manager__loadStatusFace;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.facetex, (int32_t)Manager__loadStatusFace, v12, v13);
  }
  BattleServantParamComponent__setClassIcon(this, v6);
  levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_154;
    v15 = this->fields.levelLabel;
    data = (BattleServantData_o *)BattleServantData__getLevelLabel(data, 0LL);
    if ( !v15 )
      goto LABEL_154;
    UILabel__set_text(v15, (System_String_o *)data, 0LL);
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_154;
    v17 = this->fields.nameLabel;
    data = (BattleServantData_o *)BattleServantData__getServantName(data, 0LL);
    if ( !v17 )
      goto LABEL_154;
    UILabel__set_text(v17, (System_String_o *)data, 0LL);
  }
  BattleServantParamComponent__UpdateShortNameLabel(this, v6);
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_154;
    v19 = this->fields.hpGauge;
    data = (BattleServantData_o *)BattleServantData__getNowHp(data, 0LL);
    if ( !this->fields.data )
      goto LABEL_154;
    v20 = (int)data;
    data = (BattleServantData_o *)BattleServantData__getMaxHp(this->fields.data, 0LL);
    if ( !v19 )
      goto LABEL_154;
    BattleHpGaugeBarComponent__setInitValue(v19, v20, (int32_t)data, 0LL);
  }
  hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(hpChange, 0LL, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    v22 = this->fields.data;
    if ( !v22 )
      goto LABEL_154;
    shiftDeckList = v22->fields.shiftDeckList;
    if ( !shiftDeckList )
      goto LABEL_154;
    data = (BattleServantData_o *)this->fields.hpChange;
    if ( !data )
      goto LABEL_154;
    BattleServantChangeBarComponent__setBarType(
      (BattleServantChangeBarComponent_o *)data,
      1,
      shiftDeckList->max_length - v22->fields.shiftDeckIndex,
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
    BattleServantHpShiftComponent__setInitValue((BattleServantHpShiftComponent_o *)data, this->fields.data, v25);
  }
  BattleServantParamComponent__setAtlas(this, v6);
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
  v27 = (int)data;
  MaxHp = BattleServantData__getMaxHp(this->fields.data, 0LL);
  BattleServantParamComponent__updateHplabel(this, v27, MaxHp, 1, v29);
  npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    v31 = this->fields.npcomp;
    if ( !v31 )
      goto LABEL_154;
    v31->fields.lineCount = 3;
    data = this->fields.data;
    if ( !data )
      goto LABEL_154;
    v31->fields.maxparam = BattleServantData__getCountMaxNp(data, 0LL);
    data = (BattleServantData_o *)this->fields.npcomp;
    if ( !data )
      goto LABEL_154;
    BattleNpGaugeSystemComponent__InitSliderValue((BattleNpGaugeSystemComponent_o *)data, 0LL);
    v32 = this->fields.data;
    if ( !v32 )
      goto LABEL_154;
    data = (BattleServantData_o *)this->fields.npcomp;
    if ( !data )
      goto LABEL_154;
    BattleNpGaugeSystemComponent__setNowParam((BattleNpGaugeSystemComponent_o *)data, v32->fields.np, 0LL);
    data = this->fields.data;
    if ( !data )
      goto LABEL_154;
    v33 = this->fields.npcomp;
    data = (BattleServantData_o *)BattleServantData__isAddNpGauge(data, 0LL);
    if ( !v33 )
      goto LABEL_154;
    BattleNpGaugeSystemComponent__setUseNp(v33, (unsigned __int8)data & 1, 0LL);
  }
  nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v35 = UnityEngine_Object__op_Inequality(nextTdGauge, 0LL, 0LL);
  if ( (v3 & 1) == 0 && v35 )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_154;
    v37 = this->fields.nextTdGauge;
    nexttpturn = data->fields.nexttpturn;
    maxtpturn = data->fields.maxtpturn;
    data = (BattleServantData_o *)BattleServantData__isTDSeraled(data, 0LL);
    if ( !v37 )
      goto LABEL_154;
    BattleNextTDgaugeComponent__setInitGauge(v37, nexttpturn, maxtpturn, (unsigned __int8)data & 1, 0LL);
  }
  BattleServantParamComponent__updateSkillIcon(this, 0, v36);
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
    v41 = this->fields.data;
    if ( !v41 )
      goto LABEL_154;
    if ( v41->fields.followerType )
    {
      v42 = this->fields.friendIcon;
      data = (BattleServantData_o *)FileName_TypeInfo;
      if ( !FileName_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      if ( !v42 )
        goto LABEL_154;
      UISprite__set_spriteName(v42, FileName_TypeInfo->static_fields->friendIconName, 0LL);
      data = (BattleServantData_o *)this->fields.friendIcon;
      if ( !data )
        goto LABEL_154;
      data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
      if ( !data )
        goto LABEL_154;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
      v41 = this->fields.data;
      if ( !v41 )
        goto LABEL_154;
    }
    if ( v41->fields.flgEventJoin )
    {
      v43 = this->fields.friendIcon;
      data = (BattleServantData_o *)FileName_TypeInfo;
      if ( !FileName_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      if ( !v43 )
        goto LABEL_154;
      UISprite__set_spriteName(v43, FileName_TypeInfo->static_fields->eventJoinIconName, 0LL);
      data = (BattleServantData_o *)this->fields.friendIcon;
      if ( !data )
        goto LABEL_154;
      data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
      if ( !data )
        goto LABEL_154;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
    }
  }
  BattleServantParamComponent__setRoleTyoe(this, v6);
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
      v46 = this->fields.data;
      if ( !v46 )
        goto LABEL_154;
      data = (BattleServantData_o *)this->fields.breakPoint;
      if ( !data )
        goto LABEL_154;
      BattleServantBreakPointComponent__Initialize(
        (BattleServantBreakPointComponent_o *)data,
        v46->fields.defeatPoint,
        v46->fields.maxDefeatPoint,
        v46->fields.isEnemy,
        0LL);
    }
  }
  BattleServantParamComponent__DestroyBattlePointGauge(this, v6);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  data = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantBattlePointMaster___);
  v47 = this->fields.data;
  if ( !v47 )
    goto LABEL_154;
  v48 = (ServantBattlePointMaster_o *)data;
  v50 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
  v49 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v97.fields.currentCryptoKey = v50;
  *(_QWORD *)&v97.fields.fakeValue = v49;
  data = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v97, 0LL);
  if ( !v48
    || (data = (BattleServantData_o *)ServantBattlePointMaster__GetBattlePointEntities(v48, (int32_t)data, 0LL)) == 0LL )
  {
LABEL_154:
    sub_1B8880C(data, v6);
  }
  klass = data->klass;
  v52 = data;
  v53 = *(unsigned __int16 *)(&data->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&data->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ServantBattlePointEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo )
    {
      --v53;
      p_offset += 4;
      if ( !v53 )
        goto LABEL_108;
    }
    v55 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_108:
    v55 = sub_1BDA590(data, System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo, 0LL);
  }
  v57 = (*(__int64 (__fastcall **)(BattleServantData_o *, _QWORD))v55)(v52, *(_QWORD *)(v55 + 8));
  if ( !v57 )
    sub_1B8880C(0LL, v56);
  v58 = 0LL;
  while ( 1 )
  {
    v59 = *(_QWORD *)v57;
    v60 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
    {
      v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v61 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v60;
        v61 += 4;
        if ( !v60 )
          goto LABEL_116;
      }
      v62 = v59 + 16LL * *v61 + 312;
    }
    else
    {
LABEL_116:
      v62 = sub_1BDA590(v57, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v62)(v57, *(_QWORD *)(v62 + 8)) & 1) == 0 )
      break;
    v63 = sub_1B887FC(BattleServantParamComponent___c__DisplayClass77_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v63, 0LL);
    if ( !v63 )
      sub_1B8880C(v64, v65);
    *(_QWORD *)(v63 + 24) = this;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v63 + 24), (int32_t)this, v66, v67);
    v68 = *(_QWORD *)v57;
    v69 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
    {
      v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ServantBattlePointEntity__c **)v70 - 1) != System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo )
      {
        --v69;
        v70 += 4;
        if ( !v69 )
          goto LABEL_124;
      }
      v71 = v68 + 16LL * *v70 + 312;
    }
    else
    {
LABEL_124:
      v71 = sub_1BDA590(v57, System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo, 0LL);
    }
    v72 = (*(__int64 (__fastcall **)(__int64, _QWORD))v71)(v57, *(_QWORD *)(v71 + 8));
    *(_QWORD *)(v63 + 16) = v72;
    v73 = v63 + 16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v63 + 16), v72, v74, v75);
    if ( !*(_QWORD *)(v63 + 16) )
      sub_1B8880C(v76, v77);
    v78 = this->fields.data;
    if ( !v78 )
      sub_1B8880C(0LL, v77);
    BattlePointData = BattleServantData__GetBattlePointData(v78, *(_DWORD *)(*(_QWORD *)(v63 + 16) + 20LL), 0LL);
    if ( BattlePointData )
      v81 = BattlePointData;
    else
      v81 = v58;
    if ( !BattlePointData )
      goto LABEL_161;
    if ( !v81 )
      sub_1B8880C(BattlePointData, v80);
    v58 = BattlePointData;
    if ( !v81->fields._IsHideBattlePointGauge_k__BackingField )
    {
LABEL_161:
      v82 = this->fields.data;
      if ( !v82 )
        sub_1B8880C(BattlePointData, v80);
      v58 = v81;
      if ( !v82->fields.isEnemy )
      {
        battlePointRoot = (UnityEngine_Object_o *)this->fields.battlePointRoot;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v84 = UnityEngine_Object__op_Inequality(battlePointRoot, 0LL, 0LL);
        v58 = v81;
        if ( v84 )
        {
          if ( !*(_QWORD *)v73 )
            sub_1B8880C(v84, v85);
          v96 = *(_DWORD *)(*(_QWORD *)v73 + 20LL);
          v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v96, v86, v87, v88);
          v90 = System_String__Format((System_String_o *)StringLiteral_3207/*"Battle/BattlePoint/Prefab/{0}"*/, v89, 0LL);
          v91 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            v91,
            (Il2CppObject *)v63,
            Method_BattleServantParamComponent___c__DisplayClass77_0__initUpdateView_b__0__,
            0LL);
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__loadAssetStorage(v90, v91, 1, 0LL);
          break;
        }
      }
    }
  }
  v92 = *(_QWORD *)v57;
  v93 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
  {
    v94 = (int *)(*(_QWORD *)(v92 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v94 - 1) != System_IDisposable_TypeInfo )
    {
      --v93;
      v94 += 4;
      if ( !v93 )
        goto LABEL_147;
    }
    v95 = v92 + 16LL * *v94 + 312;
  }
  else
  {
LABEL_147:
    v95 = sub_1BDA590(v57, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v95)(v57, *(_QWORD *)(v95 + 8));
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
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

  if ( (byte_4A5E1C5 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3218/*"Battle/Prefab/ef_add_enemy"*/);
    byte_4A5E1C5 = 1;
  }
  data = this->fields.data;
  if ( data && data->fields.isAddition )
  {
    clsIconComponent = (UnityEngine_Component_o *)this->fields.clsIconComponent;
    if ( !clsIconComponent
      || (transform = UnityEngine_Component__get_transform(clsIconComponent, 0LL),
          clsIconComponent = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject_38240928(
                                                          (BaseMonoBehaviour_o *)this,
                                                          (System_String_o *)StringLiteral_3218/*"Battle/Prefab/ef_add_enemy"*/,
                                                          transform,
                                                          0LL,
                                                          0LL),
          (v6 = this->fields.data) == 0LL) )
    {
      sub_1B8880C(clsIconComponent, method);
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
  int32_t v10; // w2
  int32_t v11; // w3

  v2 = this;
  if ( (byte_4A5E1AF & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (BattleServantParamComponent_o *)sub_1B885B0(&StringLiteral_18896/*"effect/ef_cwflash01"*/);
    byte_4A5E1AF = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_22;
  if ( !effectobj->max_length )
    goto LABEL_23;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( !v5 )
      goto LABEL_22;
    if ( !v5->max_length )
      goto LABEL_23;
    v6 = (UnityEngine_Object_o *)v5->m_Items[0];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v6, 0LL);
  }
  facetex = (UnityEngine_Object_o *)v2->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        this = (BattleServantParamComponent_o *)BaseMonoBehaviour__createObject_38240928(
                                                  (BaseMonoBehaviour_o *)v2,
                                                  (System_String_o *)StringLiteral_18896/*"effect/ef_cwflash01"*/,
                                                  transform,
                                                  0LL,
                                                  0LL);
        if ( v8 )
        {
          if ( v8->max_length )
          {
            v8->m_Items[0] = (UnityEngine_GameObject_o *)this;
            sub_1B88554((ServantStatusBattleListViewItem_o *)v8->m_Items, (int32_t)this, v10, v11);
            return;
          }
LABEL_23:
          sub_1B88814(this, method);
        }
      }
    }
LABEL_22:
    sub_1B8880C(this, method);
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

  if ( (byte_4A5E1A1 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1A1 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_1B8880C(0LL, v4);
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

  if ( (byte_4A5E1A2 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1A2 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_1B8880C(0LL, v4);
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

  if ( (byte_4A5E1A0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1A0 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_1B8880C(0LL, v4);
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
  const MethodInfo *v5; // x2
  BattleServantHpShiftComponent_o *v6; // x0

  if ( (byte_4A5E1BB & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1BB = 1;
  }
  if ( this->fields.data )
  {
    hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
    {
      v6 = this->fields.hpShift;
      if ( !v6 )
        sub_1B8880C(0LL, v4);
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

  if ( (byte_4A5E1BA & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1BA = 1;
  }
  if ( !this->fields.data )
    return 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
    return 0.0;
  v6 = this->fields.hpShift;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
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
  Il2CppObject *Component_object; // x21
  float LabelPrintedWidth; // s10
  float v9; // s8
  float v10; // s9
  UnityEngine_Object_o *ComponentInChildren_object__49082976; // x23
  _DWORD *monitor; // x8
  int v13; // w22
  _DWORD *v14; // x8
  int v15; // w8
  float sideEffectLabelWidth; // s0
  float v17; // s1
  UnityEngine_Component_o *clsIconComponent; // x8
  UnityEngine_Transform_o *v19; // x20
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5E1C8 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E1C8 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_34;
  perf = (BattlePerformance_o *)BattlePerformance__get_WrapPopupCtrl(perf, 0LL);
  if ( !buffData || !perf )
    goto LABEL_34;
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.events)(
                                 perf,
                                 (unsigned int)buffData->fields.popColor,
                                 perf->klass[1]._1.properties);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)perf & 1) == 0 )
  {
    if ( !v6 )
      goto LABEL_34;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v6,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
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
    v9 = fminf(this->fields.sideEffectLabelWidth / (float)(LabelPrintedWidth * 0.8), 1.0);
    v10 = 0.0;
    if ( buffData->fields.popIcon >= 1 )
    {
      ComponentInChildren_object__49082976 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_object__49082976(
                                                                       (UnityEngine_GameObject_o *)v6,
                                                                       1,
                                                                       (const MethodInfo_2ECF260 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality(ComponentInChildren_object__49082976, 0LL, 0LL);
      if ( ((unsigned __int8)perf & 1) != 0 )
      {
        if ( !ComponentInChildren_object__49082976 )
          goto LABEL_34;
        BattleServantBuffIconComponent__setImageId(
          (BattleServantBuffIconComponent_o *)ComponentInChildren_object__49082976,
          buffData->fields.popIcon,
          0LL);
        monitor = ComponentInChildren_object__49082976[1].monitor;
        if ( !monitor )
          goto LABEL_34;
        v13 = monitor[42];
        perf = (BattlePerformance_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)ComponentInChildren_object__49082976,
                                        0LL);
        if ( !perf )
          goto LABEL_34;
        perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)perf, 0LL);
        if ( !perf )
          goto LABEL_34;
        v20.fields.x = -(float)((float)((float)(LabelPrintedWidth * 0.5) + (float)((float)v13 * 0.5)) + 5.0);
        v20.fields.y = 0.0;
        v20.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)perf, v20, 0LL);
        v14 = ComponentInChildren_object__49082976[1].monitor;
        if ( !v14 )
          goto LABEL_34;
        v15 = v14[42];
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
          v21.fields.z = 1.0;
          v21.fields.x = v9;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)perf, v21, 0LL);
          perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v6, 0LL);
          if ( perf )
          {
            v22.fields.y = 0.0;
            v22.fields.z = 0.0;
            v22.fields.x = v10;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)perf, v22, 0LL);
            BattleUIRangeLabel__AddLabelDepth((BattleUIRangeLabel_o *)Component_object, 100, 0LL);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v6, 1, 0LL);
            return;
          }
        }
      }
    }
LABEL_34:
    sub_1B8880C(perf, buffData);
  }
}


void __fastcall BattleServantParamComponent__setAtlas(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o *breakSprite; // x21
  UIAtlas_o *v7; // x20
  UISprite_o *v8; // x19
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  int v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5E1B3 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3209/*"Battle/Common"*/);
    sub_1B885B0(&StringLiteral_3227/*"BattleAssetUIAtlas"*/);
    sub_1B885B0(&StringLiteral_19971/*"hp_break_"*/);
    byte_4A5E1B3 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3209/*"Battle/Common"*/, 0LL);
  if ( !AssetStorage )
    goto LABEL_14;
  AssetStorage = (AssetData_o *)AssetData__GetObject_object__48635516(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_3227/*"BattleAssetUIAtlas"*/,
                                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !AssetStorage )
    goto LABEL_14;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)AssetStorage,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  v7 = (UIAtlas_o *)Component_object;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0LL, 0LL) )
  {
    AssetStorage = (AssetData_o *)this->fields.breakSprite;
    if ( AssetStorage )
    {
      UISprite__set_atlas((UISprite_o *)AssetStorage, v7, 0LL);
      v8 = this->fields.breakSprite;
      v13 = 1;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v9, v10, v11);
      AssetStorage = (AssetData_o *)System_String__Concat((Il2CppObject *)StringLiteral_19971/*"hp_break_"*/, v12, 0LL);
      if ( v8 )
      {
        UISprite__set_spriteName(v8, (System_String_o *)AssetStorage, 0LL);
        return;
      }
    }
LABEL_14:
    sub_1B8880C(AssetStorage, v4);
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

  if ( (byte_4A5E1AD & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1AD = 1;
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
      sub_1B8880C(data, v4);
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
  UnityEngine_Object_o *facetex; // x20
  TweenColor_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  UnityEngine_Component_o *Item; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t modeWindow; // w8
  Il2CppObject *Component_object; // x20
  Il2CppObject *v12; // x21
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v14; // x21
  __int64 v15; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v17; // x0
  UnityEngine_Component_c *v18; // x8
  UnityEngine_Component_o *v19; // x21
  __int64 v20; // x9
  SimpleAnimation_State_c **v21; // x10
  __int64 v22; // x0
  UnityEngine_Component_c *v23; // x8
  SimpleAnimation_State_c *v24; // x1
  UnityEngine_Component_o *v25; // x21
  __int64 v26; // x9
  SimpleAnimation_State_c **v27; // x10
  __int64 v28; // x9
  __int64 v29; // x0
  UnityEngine_Object_o *battlePointGaugeComponent; // x20
  const MethodInfo *v31; // x2
  UnityEngine_Color_o v32; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4A5E1A3 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    sub_1B885B0(&StringLiteral_13101/*"SvtW_StartClose"*/);
    byte_4A5E1A3 = 1;
  }
  BattleServantParamComponent__setSkillFlash(this, 0, v2);
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (TweenColor_o *)UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    Item = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !Item )
      goto LABEL_59;
    gameObject = UnityEngine_Component__get_gameObject(Item, 0LL);
    v32.fields.r = 0.0;
    v32.fields.g = 0.0;
    v32.fields.b = 0.0;
    v32.fields.a = 0.0;
    v5 = TweenColor__Begin(gameObject, 0.4, v32, 0LL);
    this->fields.isHideFaceTexture = 1;
  }
  modeWindow = this->fields.modeWindow;
  if ( modeWindow == 3 )
    goto LABEL_58;
  if ( modeWindow == 2 )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v12 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Animation___);
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
                                          (System_String_o *)StringLiteral_13101/*"SvtW_StartClose"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_59;
      klass = Item->klass;
      v14 = Item;
      v15 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v15;
          p_offset += 2;
          if ( !v15 )
            goto LABEL_19;
        }
        v17 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
      }
      else
      {
LABEL_19:
        v17 = sub_1BDA590(Item, SimpleAnimation_State_TypeInfo, 4LL);
      }
      (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v17)(v14, *(_QWORD *)(v17 + 8), 0.0);
      Item = (UnityEngine_Component_o *)SimpleAnimation__get_Item(
                                          (SimpleAnimation_o *)Component_object,
                                          (System_String_o *)StringLiteral_13101/*"SvtW_StartClose"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_59;
      v23 = Item->klass;
      v24 = SimpleAnimation_State_TypeInfo;
      v25 = Item;
      v26 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        v27 = (SimpleAnimation_State_c **)&v23->_1.interfaceOffsets->offset;
        while ( *(v27 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v26;
          v27 += 2;
          if ( !v26 )
            goto LABEL_50;
        }
LABEL_51:
        v29 = (__int64)(&v23[1]._1.castClass + 2 * *(_DWORD *)v27);
        goto LABEL_52;
      }
      goto LABEL_50;
    }
  }
  else
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v12 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Animation___);
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
                                          (System_String_o *)StringLiteral_13101/*"SvtW_StartClose"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_59;
      v18 = Item->klass;
      v19 = Item;
      v20 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        v21 = (SimpleAnimation_State_c **)&v18->_1.interfaceOffsets->offset;
        while ( *(v21 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v20;
          v21 += 2;
          if ( !v20 )
            goto LABEL_29;
        }
        v22 = (__int64)(&v18[1]._1.gc_desc + 2 * *(_DWORD *)v21);
      }
      else
      {
LABEL_29:
        v22 = sub_1BDA590(Item, SimpleAnimation_State_TypeInfo, 4LL);
      }
      (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v22)(v19, *(_QWORD *)(v22 + 8), 0.0);
      Item = (UnityEngine_Component_o *)SimpleAnimation__get_Item(
                                          (SimpleAnimation_o *)Component_object,
                                          (System_String_o *)StringLiteral_13101/*"SvtW_StartClose"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_59;
      v23 = Item->klass;
      v24 = SimpleAnimation_State_TypeInfo;
      v25 = Item;
      v28 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        v27 = (SimpleAnimation_State_c **)&v23->_1.interfaceOffsets->offset;
        while ( *(v27 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v28;
          v27 += 2;
          if ( !v28 )
            goto LABEL_50;
        }
        goto LABEL_51;
      }
LABEL_50:
      v29 = sub_1BDA590(v25, v24, 8LL);
LABEL_52:
      (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v29)(v25, *(_QWORD *)(v29 + 8), 1.0);
      SimpleAnimation__Play_63844704((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13101/*"SvtW_StartClose"*/, 0LL);
      goto LABEL_53;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Item = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_59;
    Item = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(
                                        (UnityEngine_Animation_o *)v12,
                                        (System_String_o *)StringLiteral_13101/*"SvtW_StartClose"*/,
                                        0LL);
    if ( !Item )
      goto LABEL_59;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
    Item = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(
                                        (UnityEngine_Animation_o *)v12,
                                        (System_String_o *)StringLiteral_13101/*"SvtW_StartClose"*/,
                                        0LL);
    if ( !Item )
      goto LABEL_59;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 1.0, 0LL);
    UnityEngine_Animation__Play_69204472((UnityEngine_Animation_o *)v12, (System_String_o *)StringLiteral_13101/*"SvtW_StartClose"*/, 0LL);
  }
LABEL_53:
  battlePointGaugeComponent = (UnityEngine_Object_o *)this->fields.battlePointGaugeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (TweenColor_o *)UnityEngine_Object__op_Inequality(battlePointGaugeComponent, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    Item = (UnityEngine_Component_o *)this->fields.battlePointGaugeComponent;
    if ( Item )
    {
      BattlePointGaugeComponent__StartClose((BattlePointGaugeComponent_o *)Item, 0, 0LL);
      goto LABEL_58;
    }
LABEL_59:
    sub_1B8880C(Item, v6);
  }
LABEL_58:
  BattleServantParamComponent__EffectStartStop(
    (BattleServantParamComponent_o *)v5,
    this->fields.commandSpellEffectDict,
    0,
    v7);
  this->fields.modeWindow = 3;
  BattleServantParamComponent__setTouch(this, 0, v31);
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

  if ( (byte_4A5E19E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E19E = 1;
  }
  this->fields.modeWindow = 1;
  this->fields.data = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.data, (int32_t)data, (int32_t)method, v3);
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
        sub_1B8880C(0LL, v10);
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


void __fastcall BattleServantParamComponent__setOpenMode(
        BattleServantParamComponent_o *this,
        bool isPlayCommandSpellEffectStartAnim,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x21
  TweenColor_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  __int64 gameObject; // x0
  UnityEngine_GameObject_o *v11; // x21
  float v12; // s0
  int32_t modeWindow; // w8
  Il2CppObject *Component_object; // x21
  Il2CppObject *v15; // x22
  SimpleAnimation_State_o *Item; // x22
  __int64 v17; // x8
  __int64 v18; // x23
  __int64 v19; // x9
  SimpleAnimation_State_c **v20; // x10
  __int64 v21; // x0
  SimpleAnimation_State_o *v22; // x22
  __int64 v23; // x8
  __int64 v24; // x23
  __int64 v25; // x9
  SimpleAnimation_State_c **v26; // x10
  __int64 v27; // x0
  UnityEngine_AnimationState_o *v28; // x21
  float length; // s0
  long double v30; // q0
  SimpleAnimation_State_c *klass; // x8
  long double v32; // q8
  __int64 v33; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  long double v36; // q0
  SimpleAnimation_State_c *v37; // x8
  long double v38; // q8
  __int64 v39; // x9
  SimpleAnimation_State_c **v40; // x10
  __int64 v41; // x0
  __int64 v42; // x8
  SimpleAnimation_State_c *v43; // x1
  __int64 v44; // x22
  __int64 v45; // x9
  SimpleAnimation_State_c **v46; // x10
  __int64 v47; // x9
  __int64 v48; // x0
  UnityEngine_Object_o *battlePointGaugeComponent; // x21
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x1
  UnityEngine_Color_o v52; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4A5E1A4 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    sub_1B885B0(&StringLiteral_13101/*"SvtW_StartClose"*/);
    byte_4A5E1A4 = 1;
  }
  BattleServantParamComponent__setSkillFlash(this, 1, method);
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (TweenColor_o *)UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    gameObject = (__int64)this->fields.facetex;
    if ( !gameObject )
      goto LABEL_78;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !this->fields.perf )
      goto LABEL_78;
    v11 = (UnityEngine_GameObject_o *)gameObject;
    gameObject = (__int64)BattlePerformance__get_MotionSkip(this->fields.perf, 0LL);
    if ( !gameObject )
      goto LABEL_78;
    v12 = (*(float (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 488LL))(
            gameObject,
            *(_QWORD *)(*(_QWORD *)gameObject + 496LL),
            0.4);
    v52.fields.r = 1.0;
    v52.fields.g = 1.0;
    v52.fields.b = 1.0;
    v52.fields.a = 1.0;
    v6 = TweenColor__Begin(v11, v12, v52, 0LL);
    this->fields.isHideFaceTexture = 0;
  }
  modeWindow = this->fields.modeWindow;
  if ( modeWindow == 2 )
    goto LABEL_75;
  if ( modeWindow == 1 )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v15 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( (gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_78;
      Item = SimpleAnimation__get_Item(
               (SimpleAnimation_o *)Component_object,
               (System_String_o *)StringLiteral_13101/*"SvtW_StartClose"*/,
               0LL);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13101/*"SvtW_StartClose"*/,
                              0LL);
      if ( !gameObject )
        goto LABEL_78;
      v17 = *(_QWORD *)gameObject;
      v18 = gameObject;
      v19 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v20 = (SimpleAnimation_State_c **)(*(_QWORD *)(v17 + 176) + 8LL);
        while ( *(v20 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v19;
          v20 += 2;
          if ( !v19 )
            goto LABEL_21;
        }
        v21 = v17 + 16LL * (*(_DWORD *)v20 + 13) + 312;
      }
      else
      {
LABEL_21:
        v21 = sub_1BDA590(gameObject, SimpleAnimation_State_TypeInfo, 13LL);
      }
      gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v18, *(_QWORD *)(v21 + 8));
      if ( !Item )
        goto LABEL_78;
      klass = Item->klass;
      v32 = v30;
      v33 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v33;
          p_offset += 2;
          if ( !v33 )
            goto LABEL_46;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
      }
      else
      {
LABEL_46:
        p_method = sub_1BDA590(Item, SimpleAnimation_State_TypeInfo, 4LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))p_method)(
        Item,
        *(_QWORD *)(p_method + 8),
        v32);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13101/*"SvtW_StartClose"*/,
                              0LL);
      if ( !gameObject )
        goto LABEL_78;
      v42 = *(_QWORD *)gameObject;
      v43 = SimpleAnimation_State_TypeInfo;
      v44 = gameObject;
      v45 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v46 = (SimpleAnimation_State_c **)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *(v46 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v45;
          v46 += 2;
          if ( !v45 )
            goto LABEL_67;
        }
LABEL_68:
        v48 = v42 + 16LL * (*(_DWORD *)v46 + 8) + 312;
        goto LABEL_69;
      }
      goto LABEL_67;
    }
  }
  else
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v15 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( (gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_78;
      v22 = SimpleAnimation__get_Item(
              (SimpleAnimation_o *)Component_object,
              (System_String_o *)StringLiteral_13101/*"SvtW_StartClose"*/,
              0LL);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13101/*"SvtW_StartClose"*/,
                              0LL);
      if ( !gameObject )
        goto LABEL_78;
      v23 = *(_QWORD *)gameObject;
      v24 = gameObject;
      v25 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v26 = (SimpleAnimation_State_c **)(*(_QWORD *)(v23 + 176) + 8LL);
        while ( *(v26 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v25;
          v26 += 2;
          if ( !v25 )
            goto LABEL_31;
        }
        v27 = v23 + 16LL * (*(_DWORD *)v26 + 13) + 312;
      }
      else
      {
LABEL_31:
        v27 = sub_1BDA590(gameObject, SimpleAnimation_State_TypeInfo, 13LL);
      }
      gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
      if ( !v22 )
        goto LABEL_78;
      v37 = v22->klass;
      v38 = v36;
      v39 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
      {
        v40 = (SimpleAnimation_State_c **)&v37->_1.interfaceOffsets->offset;
        while ( *(v40 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v39;
          v40 += 2;
          if ( !v39 )
            goto LABEL_53;
        }
        v41 = (__int64)&v37->vtable[*(_DWORD *)v40 + 4].method;
      }
      else
      {
LABEL_53:
        v41 = sub_1BDA590(v22, SimpleAnimation_State_TypeInfo, 4LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))v41)(v22, *(_QWORD *)(v41 + 8), v38);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13101/*"SvtW_StartClose"*/,
                              0LL);
      if ( !gameObject )
        goto LABEL_78;
      v42 = *(_QWORD *)gameObject;
      v43 = SimpleAnimation_State_TypeInfo;
      v44 = gameObject;
      v47 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v46 = (SimpleAnimation_State_c **)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *(v46 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v47;
          v46 += 2;
          if ( !v47 )
            goto LABEL_67;
        }
        goto LABEL_68;
      }
LABEL_67:
      v48 = sub_1BDA590(v44, v43, 8LL);
LABEL_69:
      (*(void (__fastcall **)(__int64, _QWORD, float))v48)(v44, *(_QWORD *)(v48 + 8), -1.0);
      SimpleAnimation__Play_63844704((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13101/*"SvtW_StartClose"*/, 0LL);
      goto LABEL_70;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    if ( !v15 )
      goto LABEL_78;
    v28 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v15, (System_String_o *)StringLiteral_13101/*"SvtW_StartClose"*/, 0LL);
    gameObject = (__int64)UnityEngine_Animation__get_Item(
                            (UnityEngine_Animation_o *)v15,
                            (System_String_o *)StringLiteral_13101/*"SvtW_StartClose"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_78;
    length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)gameObject, 0LL);
    if ( !v28 )
      goto LABEL_78;
    UnityEngine_AnimationState__set_time(v28, length, 0LL);
    gameObject = (__int64)UnityEngine_Animation__get_Item(
                            (UnityEngine_Animation_o *)v15,
                            (System_String_o *)StringLiteral_13101/*"SvtW_StartClose"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_78;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, -1.0, 0LL);
    UnityEngine_Animation__Play_69204472((UnityEngine_Animation_o *)v15, (System_String_o *)StringLiteral_13101/*"SvtW_StartClose"*/, 0LL);
  }
LABEL_70:
  battlePointGaugeComponent = (UnityEngine_Object_o *)this->fields.battlePointGaugeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (TweenColor_o *)UnityEngine_Object__op_Inequality(battlePointGaugeComponent, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    gameObject = (__int64)this->fields.battlePointGaugeComponent;
    if ( gameObject )
    {
      BattlePointGaugeComponent__StartOpen((BattlePointGaugeComponent_o *)gameObject, 0LL);
      goto LABEL_75;
    }
LABEL_78:
    sub_1B8880C(gameObject, v7);
  }
LABEL_75:
  if ( isPlayCommandSpellEffectStartAnim )
    BattleServantParamComponent__EffectStartStop(
      (BattleServantParamComponent_o *)v6,
      this->fields.commandSpellEffectDict,
      1,
      v9);
  this->fields.modeWindow = 2;
  BattleServantParamComponent__setTouch(this, 1, v8);
  BattleServantParamComponent__updateSkillIcon(this, 0, v50);
  BattleServantParamComponent__RemoveEffectClearRankUpBuff(this, v51);
}


void __fastcall BattleServantParamComponent__setPerf(
        BattleServantParamComponent_o *this,
        BattlePerformance_o *inperf,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.perf = inperf;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.perf, (int32_t)inperf, (int32_t)method, v3);
}


void __fastcall BattleServantParamComponent__setRoleTyoe(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *roleTypeSprite; // x20
  UISprite_o *transform; // x0
  __int64 v5; // x1
  struct BattleServantData_o *data; // x8
  int32_t roleType; // w8
  __int64 *v8; // x8
  UnityEngine_Transform_o *v9; // x20
  bool v10; // w1

  if ( (byte_4A5E1AE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_19028/*"enemy_icon_leader"*/);
    sub_1B885B0(&StringLiteral_23120/*"servant_icon"*/);
    byte_4A5E1AE = 1;
  }
  roleTypeSprite = (UnityEngine_Object_o *)this->fields.roleTypeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UISprite_o *)UnityEngine_Object__op_Inequality(roleTypeSprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_27;
    if ( data->fields.isEnemy )
    {
      roleType = data->fields.roleType;
      transform = this->fields.roleTypeSprite;
      if ( roleType == 2 )
      {
        if ( !transform )
          goto LABEL_27;
        v8 = &StringLiteral_19028/*"enemy_icon_leader"*/;
        goto LABEL_17;
      }
      if ( !transform )
        goto LABEL_27;
      if ( roleType == 3 )
      {
        v8 = &StringLiteral_23120/*"servant_icon"*/;
LABEL_17:
        UISprite__set_spriteName(transform, (System_String_o *)*v8, 0LL);
        transform = this->fields.roleTypeSprite;
        if ( transform )
        {
          transform = (UISprite_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
          v9 = (UnityEngine_Transform_o *)transform;
          if ( !byte_4A55CE1 )
          {
            transform = (UISprite_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
            byte_4A55CE1 = 1;
          }
          if ( v9 )
          {
            UnityEngine_Transform__set_localPosition(v9, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
            transform = this->fields.roleTypeSprite;
            if ( transform )
            {
              transform = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
              if ( transform )
              {
                v10 = 1;
LABEL_26:
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v10, 0LL);
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
      transform = this->fields.roleTypeSprite;
      if ( !transform )
        goto LABEL_27;
    }
    transform = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( transform )
    {
      v10 = 0;
      goto LABEL_26;
    }
LABEL_27:
    sub_1B8880C(transform, v5);
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
    sub_1B8880C(this, flg);
  v4 = this;
  v5 = 0LL;
  v6 = flg;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1B88814(this, flg);
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
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5E1B9 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1B9 = 1;
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
                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( this->fields.targetMark )
          {
            v14 = (UIWidget_o *)data;
            data = UnityEngine_GameObject__get_transform(this->fields.targetMark, 0LL);
            if ( data )
            {
              v22.fields.y = 22.0;
              v22.fields.z = 0.0;
              LODWORD(v22.fields.x) = localPosition;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)data, v22, 0LL);
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
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                  if ( this->fields.lockTargetMark )
                  {
                    v15 = (UIWidget_o *)data;
                    data = UnityEngine_GameObject__get_transform(this->fields.lockTargetMark, 0LL);
                    if ( data )
                    {
                      v23.fields.y = 22.0;
                      v23.fields.z = 0.0;
                      LODWORD(v23.fields.x) = v13;
                      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)data, v23, 0LL);
                      if ( v15 )
                      {
                        UIWidget__set_depth(v15, -30, 0LL);
                        UIWidget__set_width(v15, 74, 0LL);
                        UIWidget__set_height(v15, 74, 0LL);
                        v25.fields.r = 1.0;
                        v25.fields.g = 1.0;
                        v25.fields.b = 1.0;
                        v25.fields.a = 1.0;
                        UIWidget__set_color(v15, v25, 0LL);
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
                                              v24.fields.y = 22.0;
                                              v24.fields.z = 0.0;
                                              LODWORD(v24.fields.x) = v13;
                                              UnityEngine_Transform__set_localPosition(
                                                (UnityEngine_Transform_o *)data,
                                                v24,
                                                0LL);
                                              UIWidget__set_depth(v15, -30, 0LL);
                                              UIWidget__set_width(v15, 78, 0LL);
                                              UIWidget__set_height(v15, 78, 0LL);
                                              v26.fields.r = 1.0;
                                              v26.fields.g = 0.0;
                                              v26.fields.b = 0.0;
                                              v26.fields.a = 1.0;
                                              UIWidget__set_color(v15, v26, 0LL);
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
LABEL_68:
        sub_1B8880C(data, v9);
      }
    }
  }
}


void __fastcall BattleServantParamComponent__setTouch(
        BattleServantParamComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  BattleServantData_o *data; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A5E1A6 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1A6 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !flg || (data = this->fields.data) != 0LL && BattleServantData__isAlive(data, 0, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( v7 )
    {
      if ( !Component_object )
        sub_1B8880C(v7, v8);
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
  UnityEngine_GameObject_o *root; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4A5E1A5 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1A5 = 1;
  }
  root = this->fields.root;
  if ( !root )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(root, flg, 0LL);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    sub_1B8880C(root, flg);
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
  _BOOL4 isSkillShift; // w19
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  int32_t MaxHp; // w0
  const MethodInfo *v17; // x4
  UnityEngine_GameObject_o *gameObject; // x19
  int32_t v19; // w2
  int32_t v20; // w3
  System_Object_array *v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x22
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  int32_t v47; // w2
  int32_t v48; // w3
  Il2CppObject *v49; // x21
  int32_t v50; // w2
  int32_t v51; // w3
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  int32_t v55; // w2
  int32_t v56; // w3
  Il2CppObject *v57; // x21
  int32_t v58; // w2
  int32_t v59; // w3
  int32_t v60; // w2
  int32_t v61; // w3
  System_Collections_Hashtable_o *v62; // x0
  __int64 v63; // x0
  char v64[4]; // [xsp+0h] [xbp-40h] BYREF
  int v65; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t NowHp; // [xsp+8h] [xbp-38h] BYREF
  int v67; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4A5E1C4 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleServantParamComponent_shiftUpdateStatus__);
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_19656/*"from"*/);
    sub_1B885B0(&StringLiteral_20228/*"ignoretimescale"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_24313/*"updateShiftHplabel"*/);
    sub_1B885B0(&StringLiteral_22281/*"onupdate"*/);
    sub_1B885B0(&StringLiteral_23969/*"to"*/);
    sub_1B885B0(&StringLiteral_4654/*"ComplateUpdateShiftHplabel"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    this = (BattleServantParamComponent_o *)sub_1B885B0(&iTween_TypeInfo);
    byte_4A5E1C4 = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_79;
  this = (BattleServantParamComponent_o *)perf->fields.nowAction;
  if ( !this )
    goto LABEL_79;
  this = (BattleServantParamComponent_o *)BattleActionData__IsUpdateShiftHp((BattleActionData_o *)this, 0LL);
  v4 = v2->fields.perf;
  if ( !v4 )
    goto LABEL_79;
  nowAction = v4->fields.nowAction;
  if ( !nowAction )
    goto LABEL_79;
  v6 = (char)this;
  if ( nowAction->fields.isSkillShift )
  {
    this = (BattleServantParamComponent_o *)v2->fields.data;
    if ( !this )
      goto LABEL_79;
    BattleServantData__updateHp((BattleServantData_o *)this, 0LL);
    v4 = v2->fields.perf;
    if ( !v4 )
      goto LABEL_79;
  }
  this = (BattleServantParamComponent_o *)v4->fields.nowAction;
  if ( !this )
    goto LABEL_79;
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
        isSkillShift = v12->fields.isSkillShift;
        v14 = Method_BattleServantParamComponent_shiftUpdateStatus__;
        if ( (*((_BYTE *)Method_BattleServantParamComponent_shiftUpdateStatus__ + 83) & 2) != 0 )
          v14 = (_QWORD *)sub_1B885C8(Method_BattleServantParamComponent_shiftUpdateStatus__);
        v15 = (System_Reflection_MethodBase_o *)sub_1B88594(v14, v14[4]);
        if ( isSkillShift )
        {
          OverwriteAssetSoundName__PlayCommonSe(v15, 24, 0LL);
          return;
        }
        OverwriteAssetSoundName__PlayCommonSe(v15, 16, 0LL);
        this = (BattleServantParamComponent_o *)v2->fields.data;
        if ( this )
        {
          MaxHp = BattleServantData__getMaxHp((BattleServantData_o *)this, 0LL);
          BattleServantParamComponent__updateHplabel(v2, 0, MaxHp, 1, v17);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
          this = (BattleServantParamComponent_o *)sub_1B88658(object___TypeInfo, 12LL);
          if ( this )
          {
            v21 = (System_Object_array *)this;
            v22 = StringLiteral_19656/*"from"*/;
            if ( StringLiteral_19656/*"from"*/ )
            {
              v22 = sub_1B886EC(StringLiteral_19656/*"from"*/, v21->obj.klass->_1.element_class);
              if ( !v22 )
                goto LABEL_81;
              v23 = StringLiteral_19656/*"from"*/;
            }
            else
            {
              v23 = 0LL;
            }
            if ( !v21->max_length )
              goto LABEL_80;
            v21->m_Items[0] = (Il2CppObject *)v23;
            sub_1B88554((ServantStatusBattleListViewItem_o *)v21->m_Items, v23, v19, v20);
            v67 = 0;
            v22 = j_il2cpp_value_box_0(int_TypeInfo, &v67, v24, v25, v26);
            v29 = (Il2CppObject *)v22;
            if ( v22 )
            {
              v22 = sub_1B886EC(v22, v21->obj.klass->_1.element_class);
              if ( !v22 )
                goto LABEL_81;
            }
            if ( v21->max_length <= 1 )
              goto LABEL_80;
            v21->m_Items[1] = v29;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[1], (int32_t)v29, v27, v28);
            v22 = StringLiteral_23969/*"to"*/;
            if ( StringLiteral_23969/*"to"*/ )
            {
              v22 = sub_1B886EC(StringLiteral_23969/*"to"*/, v21->obj.klass->_1.element_class);
              if ( !v22 )
                goto LABEL_81;
              v23 = StringLiteral_23969/*"to"*/;
            }
            else
            {
              v23 = 0LL;
            }
            if ( v21->max_length <= 2 )
              goto LABEL_80;
            v21->m_Items[2] = (Il2CppObject *)v23;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[2], v23, v30, v31);
            this = (BattleServantParamComponent_o *)v2->fields.data;
            if ( this )
            {
              NowHp = BattleServantData__getNowHp((BattleServantData_o *)this, 0LL);
              v22 = j_il2cpp_value_box_0(int_TypeInfo, &NowHp, v32, v33, v34);
              v37 = (Il2CppObject *)v22;
              if ( !v22 || (v22 = sub_1B886EC(v22, v21->obj.klass->_1.element_class)) != 0 )
              {
                if ( v21->max_length <= 3 )
                  goto LABEL_80;
                v21->m_Items[3] = v37;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[3], (int32_t)v37, v35, v36);
                v22 = StringLiteral_22281/*"onupdate"*/;
                if ( StringLiteral_22281/*"onupdate"*/ )
                {
                  v22 = sub_1B886EC(StringLiteral_22281/*"onupdate"*/, v21->obj.klass->_1.element_class);
                  if ( !v22 )
                    goto LABEL_81;
                  v23 = StringLiteral_22281/*"onupdate"*/;
                }
                else
                {
                  v23 = 0LL;
                }
                if ( v21->max_length <= 4 )
                  goto LABEL_80;
                v21->m_Items[4] = (Il2CppObject *)v23;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[4], v23, v38, v39);
                v22 = StringLiteral_24313/*"updateShiftHplabel"*/;
                if ( StringLiteral_24313/*"updateShiftHplabel"*/ )
                {
                  v22 = sub_1B886EC(StringLiteral_24313/*"updateShiftHplabel"*/, v21->obj.klass->_1.element_class);
                  if ( !v22 )
                    goto LABEL_81;
                  v23 = StringLiteral_24313/*"updateShiftHplabel"*/;
                }
                else
                {
                  v23 = 0LL;
                }
                if ( v21->max_length <= 5 )
                  goto LABEL_80;
                v21->m_Items[5] = (Il2CppObject *)v23;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[5], v23, v40, v41);
                v22 = StringLiteral_23929/*"time"*/;
                if ( StringLiteral_23929/*"time"*/ )
                {
                  v22 = sub_1B886EC(StringLiteral_23929/*"time"*/, v21->obj.klass->_1.element_class);
                  if ( !v22 )
                    goto LABEL_81;
                  v23 = StringLiteral_23929/*"time"*/;
                }
                else
                {
                  v23 = 0LL;
                }
                if ( v21->max_length <= 6 )
                  goto LABEL_80;
                v21->m_Items[6] = (Il2CppObject *)v23;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[6], v23, v42, v43);
                v65 = 1069547520;
                v22 = j_il2cpp_value_box_0(float_TypeInfo, &v65, v44, v45, v46);
                v49 = (Il2CppObject *)v22;
                if ( !v22 || (v22 = sub_1B886EC(v22, v21->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v21->max_length <= 7 )
                    goto LABEL_80;
                  v21->m_Items[7] = v49;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[7], (int32_t)v49, v47, v48);
                  v22 = StringLiteral_20228/*"ignoretimescale"*/;
                  if ( StringLiteral_20228/*"ignoretimescale"*/ )
                  {
                    v22 = sub_1B886EC(StringLiteral_20228/*"ignoretimescale"*/, v21->obj.klass->_1.element_class);
                    if ( !v22 )
                      goto LABEL_81;
                    v23 = StringLiteral_20228/*"ignoretimescale"*/;
                  }
                  else
                  {
                    v23 = 0LL;
                  }
                  if ( v21->max_length <= 8 )
                    goto LABEL_80;
                  v21->m_Items[8] = (Il2CppObject *)v23;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[8], v23, v50, v51);
                  v64[0] = 1;
                  v22 = j_il2cpp_value_box_0(bool_TypeInfo, v64, v52, v53, v54);
                  v57 = (Il2CppObject *)v22;
                  if ( !v22 || (v22 = sub_1B886EC(v22, v21->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v21->max_length <= 9 )
                      goto LABEL_80;
                    v21->m_Items[9] = v57;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[9], (int32_t)v57, v55, v56);
                    v22 = StringLiteral_22273/*"oncomplete"*/;
                    if ( StringLiteral_22273/*"oncomplete"*/ )
                    {
                      v22 = sub_1B886EC(StringLiteral_22273/*"oncomplete"*/, v21->obj.klass->_1.element_class);
                      if ( !v22 )
                        goto LABEL_81;
                      v23 = StringLiteral_22273/*"oncomplete"*/;
                    }
                    else
                    {
                      v23 = 0LL;
                    }
                    if ( v21->max_length <= 0xA )
                      goto LABEL_80;
                    v21->m_Items[10] = (Il2CppObject *)v23;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[10], v23, v58, v59);
                    v22 = StringLiteral_4654/*"ComplateUpdateShiftHplabel"*/;
                    if ( !StringLiteral_4654/*"ComplateUpdateShiftHplabel"*/ )
                    {
                      v23 = 0LL;
LABEL_74:
                      if ( v21->max_length > 0xB )
                      {
                        v21->m_Items[11] = (Il2CppObject *)v23;
                        sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[11], v23, v60, v61);
                        if ( !iTween_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                        v62 = iTween__Hash(v21, 0LL);
                        iTween__ValueTo(gameObject, v62, 0LL);
                        return;
                      }
LABEL_80:
                      sub_1B88814(v22, v23);
                    }
                    v22 = sub_1B886EC(StringLiteral_4654/*"ComplateUpdateShiftHplabel"*/, v21->obj.klass->_1.element_class);
                    if ( v22 )
                    {
                      v23 = StringLiteral_4654/*"ComplateUpdateShiftHplabel"*/;
                      goto LABEL_74;
                    }
                  }
                }
              }
LABEL_81:
              v63 = sub_1B88830(v22);
              sub_1B886D8(v63, 0LL);
            }
          }
        }
      }
    }
LABEL_79:
    sub_1B8880C(this, method);
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

  if ( (byte_4A5E1C6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__);
    byte_4A5E1C6 = 1;
  }
  sideEffectShowQueue = (System_Collections_Generic_Queue_T__o *)this->fields.sideEffectShowQueue;
  if ( !sideEffectShowQueue )
    sub_1B8880C(0LL, buffData);
  System_Collections_Generic_Queue_object___Enqueue(
    sideEffectShowQueue,
    (Il2CppObject *)buffData,
    (const MethodInfo_366F86C *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__);
  if ( !this->fields.isShowingSideEffect )
  {
    this->fields.isShowingSideEffect = 1;
    v7 = BattleServantParamComponent__showSideEffectList(this, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__showSideEffectList(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5E1C7 & 1) == 0 )
  {
    sub_1B885B0(&BattleServantParamComponent__showSideEffectList_d__111_TypeInfo);
    byte_4A5E1C7 = 1;
  }
  v3 = sub_1B887FC(BattleServantParamComponent__showSideEffectList_d__111_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleServantParamComponent__updateBuffIcon(
        BattleServantParamComponent_o *this,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *showBuffComponent; // x21
  BattleBuffData_ShowBuffData_array *ShowServantParam; // x0
  const MethodInfo *v7; // x1
  BattleServantShowBuffComponent_o *v8; // x21
  const MethodInfo *v9; // x2
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  struct BattleServantData_o *v12; // x8
  UnityEngine_Transform_o *transform; // x0
  struct BattleServantData_o *v14; // x8
  BattleActorControl_o *ServantActor; // x21
  struct BattleFBXComponent_o *fbxcomponent; // x8
  System_String_o *currentCommonAnimName; // x22
  System_String_o *v18; // x0
  HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_c *v19; // x8
  int v20; // w9
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  struct BattleServantData_o *v23; // x8
  int max_length; // w8
  BattleBuffData_ShowBuffData_array *v25; // x21
  int v26; // w24
  char v27; // w22
  BattleBuffData_ShowBuffData_o *v28; // x27
  int bounds; // w27
  struct BattleServantData_o *v30; // x8
  UnityEngine_Object_o *v31; // x20
  System_Enum_o v32; // [xsp+8h] [xbp-68h] BYREF
  int v33; // [xsp+18h] [xbp-58h]

  if ( (byte_4A5E1B8 & 1) == 0 )
  {
    sub_1B885B0(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_13267/*"TAMAMOCAT_STUN_BUFF_ID"*/);
    sub_1B885B0(&StringLiteral_24600/*"wait"*/);
    byte_4A5E1B8 = 1;
  }
  showBuffComponent = (UnityEngine_Object_o *)this->fields.showBuffComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)UnityEngine_Object__op_Equality(showBuffComponent, 0LL, 0LL);
  if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
    return;
  if ( !buffData )
    goto LABEL_54;
  v8 = this->fields.showBuffComponent;
  ShowServantParam = BattleBuffData__getShowServantParam(buffData, 0LL);
  if ( !v8 )
    goto LABEL_54;
  BattleServantShowBuffComponent__setBuffList(v8, ShowServantParam, v9);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_54;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_54;
  if ( data->fields.isMultiTargetBattle )
  {
    v12 = this->fields.data;
    if ( !v12 )
      goto LABEL_54;
    if ( v12->fields.isEnemy )
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
        BattleServantShowBuffComponent__UpdateActiveBuffList((BattleServantShowBuffComponent_o *)ShowServantParam, v7);
      }
    }
  }
  v14 = this->fields.data;
  if ( !v14 || (ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.perf) == 0LL )
LABEL_54:
    sub_1B8880C(ShowServantParam, v7);
  ServantActor = BattlePerformance__getServantActor((BattlePerformance_o *)ShowServantParam, v14->fields.uniqueId, 0LL);
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
      v32.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
      v32.monitor = (void *)-1LL;
      v33 = 9;
      v18 = System_Enum__ToString(&v32, 0LL);
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)BasicHelper__EqualExceptNullOrEmpty(
                                                                currentCommonAnimName,
                                                                v18,
                                                                0LL);
      if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
      {
        v19 = HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
        v20 = 49;
LABEL_30:
        v32.klass = (System_Enum_c *)v19;
        v32.monitor = (void *)-1LL;
        v33 = v20;
        v22 = System_Enum__ToString(&v32, 0LL);
        BattleActorControl__playAnimation_43649396(ServantActor, v22, 0, 0LL);
      }
    }
    else
    {
      v32.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
      v32.monitor = (void *)-1LL;
      v33 = 49;
      v21 = System_Enum__ToString(&v32, 0LL);
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)BasicHelper__EqualExceptNullOrEmpty(
                                                                currentCommonAnimName,
                                                                v21,
                                                                0LL);
      if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
      {
        v19 = HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
        v20 = 9;
        goto LABEL_30;
      }
    }
  }
  v23 = this->fields.data;
  if ( !v23 )
    goto LABEL_54;
  if ( !v23->fields.isSleepWaitMode )
    return;
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)BattleBuffData__getActiveList(buffData, 1, 0LL);
  if ( !ShowServantParam )
    goto LABEL_54;
  max_length = ShowServantParam->max_length;
  v25 = ShowServantParam;
  if ( max_length < 1 )
    goto LABEL_58;
  v26 = 0;
  v27 = 0;
  do
  {
    if ( v26 >= (unsigned int)max_length )
      sub_1B88814(ShowServantParam, v7);
    v28 = v25->m_Items[v26];
    if ( !v28 )
      goto LABEL_54;
    if ( !v28[6].fields.isHideParam )
    {
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)BattleBuffData__get_buffMst(buffData, 0LL);
      if ( !ShowServantParam )
        goto LABEL_54;
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)DataMasterBase_object__object__int___GetEntity(
                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)ShowServantParam,
                                                                v28->fields.buffId,
                                                                (const MethodInfo_311D934 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !ShowServantParam )
        goto LABEL_54;
      bounds = (int)ShowServantParam->bounds;
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)ConstantMaster__getValue(
                                                                (System_String_o *)StringLiteral_13267/*"TAMAMOCAT_STUN_BUFF_ID"*/,
                                                                0LL);
      v27 |= bounds == (_DWORD)ShowServantParam;
    }
    max_length = v25->max_length;
    ++v26;
  }
  while ( v26 < max_length );
  if ( (v27 & 1) == 0 )
  {
LABEL_58:
    ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.data;
    if ( !ShowServantParam )
      goto LABEL_54;
    BattleServantData__SetIsSleepWaitMode((BattleServantData_o *)ShowServantParam, 0, 0LL);
    v30 = this->fields.data;
    if ( !v30 )
      goto LABEL_54;
    ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.perf;
    if ( !ShowServantParam )
      goto LABEL_54;
    v31 = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                    (BattlePerformance_o *)ShowServantParam,
                                    v30->fields.uniqueId,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ShowServantParam = (BattleBuffData_ShowBuffData_array *)UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
    if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
    {
      if ( v31 )
      {
        if ( BattleActorControl__checkID((BattleActorControl_o *)v31, this->fields.uniqueID, 0LL) )
          BattleActorControl__playAnimation_43649396(
            (BattleActorControl_o *)v31,
            (System_String_o *)StringLiteral_24600/*"wait"*/,
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

  if ( (byte_4A5E1B7 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1B7 = 1;
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
            sub_1B8880C(perf, v10);
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

  if ( (byte_4A5E1AB & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1AB = 1;
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
    sub_1B8880C(data, *(_QWORD *)&now);
  }
}


void __fastcall BattleServantParamComponent__updateHplabel(
        BattleServantParamComponent_o *this,
        int32_t now,
        int32_t max,
        bool isDispBreak,
        const MethodInfo *method)
{
  __int64 *v9; // x9
  System_String_o *v10; // x23
  UnityEngine_Object_o *hplabel; // x24
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  UILabel_o *v15; // x24
  Il2CppObject *v16; // x0
  System_String_o *data; // x0
  __int64 v18; // x1
  Il2CppObject *Component_object; // x24
  UnityEngine_Object_o *maxhplabel; // x24
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  UILabel_o *v24; // x24
  Il2CppObject *v25; // x0
  UnityEngine_Object_o *totalhplabel; // x23
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  UILabel_o *v30; // x23
  Il2CppObject *v31; // x24
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x0
  __int64 *v36; // x8
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  UnityEngine_Object_o *breakSprite; // x22
  bool isShiftableServant; // w0
  const MethodInfo *v42; // x2
  int32_t v43; // [xsp+8h] [xbp-48h] BYREF
  int32_t v44; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5E1AC & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_24983/*"{0}"*/);
    sub_1B885B0(&StringLiteral_25054/*"{0}/{1}"*/);
    sub_1B885B0(&StringLiteral_24933/*"{0:#,0}"*/);
    sub_1B885B0(&StringLiteral_24936/*"{0:#,0}/{1:#,0}"*/);
    byte_4A5E1AC = 1;
  }
  if ( this->fields.hpformatflg )
    v9 = &StringLiteral_24933/*"{0:#,0}"*/;
  else
    v9 = &StringLiteral_24983/*"{0}"*/;
  v10 = (System_String_o *)*v9;
  hplabel = (UnityEngine_Object_o *)this->fields.hplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hplabel, 0LL, 0LL) )
  {
    v15 = this->fields.hplabel;
    v44 = now;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v12, v13, v14);
    data = System_String__Format(v10, v16, 0LL);
    if ( !v15 )
      goto LABEL_36;
    UILabel__set_text(v15, data, 0LL);
    data = (System_String_o *)this->fields.hplabel;
    if ( !data )
      goto LABEL_36;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)data,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    data = (System_String_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_36;
      CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)Component_object, 0LL);
    }
  }
  maxhplabel = (UnityEngine_Object_o *)this->fields.maxhplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maxhplabel, 0LL, 0LL) )
  {
    v24 = this->fields.maxhplabel;
    v44 = max;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v21, v22, v23);
    data = System_String__Format(v10, v25, 0LL);
    if ( !v24 )
      goto LABEL_36;
    UILabel__set_text(v24, data, 0LL);
  }
  totalhplabel = (UnityEngine_Object_o *)this->fields.totalhplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(totalhplabel, 0LL, 0LL) )
  {
    v30 = this->fields.totalhplabel;
    if ( this->fields.hpformatflg )
    {
      v44 = now;
      v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v27, v28, v29);
      v43 = max;
      v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v32, v33, v34);
      v36 = &StringLiteral_24936/*"{0:#,0}/{1:#,0}"*/;
    }
    else
    {
      v44 = now;
      v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v27, v28, v29);
      v43 = max;
      v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v37, v38, v39);
      v36 = &StringLiteral_25054/*"{0}/{1}"*/;
    }
    data = System_String__Format_61721404((System_String_o *)*v36, v31, v35, 0LL);
    if ( !v30 )
      goto LABEL_36;
    UILabel__set_text(v30, data, 0LL);
  }
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0LL, 0LL) && isDispBreak )
  {
    data = (System_String_o *)this->fields.data;
    if ( data )
    {
      isShiftableServant = BattleServantData__isShiftableServant((BattleServantData_o *)data, 0LL);
      BattleServantParamComponent__SetBreakSpriteDisplay(this, now == 0 && isShiftableServant, v42);
      return;
    }
LABEL_36:
    sub_1B8880C(data, v18);
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
  if ( (byte_4A5E1A7 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1A7 = 1;
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
      sub_1B8880C(this, svtdata);
    }
  }
}


void __fastcall BattleServantParamComponent__updateNp_44022260(
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
  if ( (byte_4A5E1A8 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1A8 = 1;
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
            sub_1B88814(v11, svtdata);
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
          sub_1B8880C(this, svtdata);
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
    sub_1B8880C(0LL, nowHp);
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
      sub_1B8880C(BuffData, v6);
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
          sub_1B88814(BuffData, v6);
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

  if ( (byte_4A5E1AA & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1AA = 1;
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
      sub_1B8880C(data, v5);
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
  if ( (byte_4A5E1B2 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E1B2 = 1;
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
        sub_1B8880C(this, method);
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
  int32_t v2; // w2
  int32_t v3; // w3
  BattleServantParamComponent__CoAddClassIconEffect_d__124_o *v4; // x19
  int32_t _1__state; // w8
  struct BattleServantParamComponent_o *_4__this; // x20
  Il2CppObject *v7; // x22
  struct BattleServantParamComponent___c__DisplayClass124_0_o **p__8__1; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x3
  struct BattleServantParamComponent___c__DisplayClass124_0_o *v12; // x23
  int32_t effectId; // w21
  System_Action_o *v14; // x22
  BattlePerformance_o *perf; // x23
  struct BattleServantParamComponent___c__DisplayClass124_0_o *_8__1; // x8
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  struct BattleServantData_o *servantData; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x21
  int32_t v21; // w22
  UnityEngine_Object_o *EffectObject; // x21
  BattleServantParamComponent__CoAddClassIconEffect_d__124_o *v23; // x22
  BattleServantParamComponent__CoAddClassIconEffect_d__124_o *v24; // x22
  BattleServantParamComponent__CoAddClassIconEffect_d__124_o *v25; // x22
  struct BattleServantParamComponent_o *v26; // x21
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  struct BattlePerformance_o *v30; // x8
  struct BattleData_o *data; // x8
  System_String_o *v32; // x21
  Il2CppObject *v33; // x0
  System_String_o *v34; // x22
  UnityEngine_Object_o *Manager__loadBattleCommonEffect; // x21
  UnityEngine_Object_o *facetex; // x22
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v38; // x21
  int32_t battleGenderType; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *component; // [xsp+28h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4A5E1DB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EffectMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1B885B0(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_BattleServantParamComponent___c__DisplayClass124_0__CoAddClassIconEffect_b__0__);
    sub_1B885B0(&BattleServantParamComponent___c__DisplayClass124_0_TypeInfo);
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)sub_1B885B0(&StringLiteral_18819/*"ef_commandaura_{0}"*/);
    byte_4A5E1DB = 1;
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
    v7 = (Il2CppObject *)sub_1B887FC(BattleServantParamComponent___c__DisplayClass124_0_TypeInfo);
    System_Object___ctor(v7, 0LL);
    v4->fields.__8__1 = (struct BattleServantParamComponent___c__DisplayClass124_0_o *)v7;
    p__8__1 = &v4->fields.__8__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v7, v9, v10);
    method = (const MethodInfo *)(unsigned int)v4->fields.effectId;
    if ( (int)method < 1 )
      return 0;
    if ( !_4__this )
      goto LABEL_71;
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)_4__this->fields.classIconEffectDict;
    if ( !this )
      goto LABEL_71;
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                                           (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                           (int32_t)method,
                                                                           (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 0;
    if ( _4__this->fields.currentClassIconAuraEffectPriority < v4->fields.priority )
    {
      BattleServantParamComponent__DestroyAllEffect(_4__this, _4__this->fields.classIconEffectDict, 0, v11);
      _4__this->fields.currentClassIconAuraEffectPriority = v4->fields.priority;
    }
    v12 = *p__8__1;
    if ( !*p__8__1 )
      goto LABEL_71;
    v12->fields.isLoading = 1;
    effectId = v4->fields.effectId;
    v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v14,
      (Il2CppObject *)v12,
      Method_BattleServantParamComponent___c__DisplayClass124_0__CoAddClassIconEffect_b__0__,
      0LL);
    perf = _4__this->fields.perf;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    BattleEffectUtility__LoadEffectAssetIfNotYet(effectId, v14, perf, 0LL);
  }
  _8__1 = v4->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_71;
  if ( _8__1->fields.isLoading )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B88554(p__2__current, 0, v2, v3);
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
  v21 = v4->fields.effectId;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectObject = (UnityEngine_Object_o *)BattleEffectUtility__getEffectObject(v21, ServantGameObject, 1, 0LL);
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
  v23 = this;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                                                                         0LL);
  if ( !v23 )
    goto LABEL_71;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v23, (UnityEngine_Transform_o *)this, 0LL);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0LL);
  v24 = this;
  if ( !byte_4A55CE6 )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v24 )
    goto LABEL_71;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v24,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0LL);
  v25 = this;
  if ( !byte_4A55CE1 )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v25 )
    goto LABEL_71;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v25,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectObject, 1, 0LL);
  if ( UnityEngine_GameObject__TryGetComponent_object_(
         (UnityEngine_GameObject_o *)EffectObject,
         &component,
         (const MethodInfo_2ED0148 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
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
          (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)_4__this->fields.classIconEffectDict;
    if ( !this )
      goto LABEL_71;
    System_Collections_Generic_Dictionary_int__object___Add(
      (System_Collections_Generic_Dictionary_int__object__o *)this,
      v4->fields.effectId,
      (Il2CppObject *)EffectObject,
      (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
  }
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)_4__this->fields.commandSpellEffectDict;
  if ( !this )
LABEL_71:
    sub_1B8880C(this, method);
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.effectId,
          (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EffectMaster___);
    if ( this )
    {
      this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)DataMasterBase_object__object__int___GetEntity(
                                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                             v4->fields.effectId,
                                                                             (const MethodInfo_311D934 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( this )
      {
        v26 = this->fields.__4__this;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        BattleEffectUtility__GetBattleCommonEffectPathAndName((System_String_o *)v26, &path, &name, 0LL);
        v30 = _4__this->fields.perf;
        if ( v30 )
        {
          data = v30->fields.data;
          if ( data )
          {
            v32 = path;
            battleGenderType = data->fields.battleGenderType;
            v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &battleGenderType, v27, v28, v29);
            v34 = System_String__Format((System_String_o *)StringLiteral_18819/*"ef_commandaura_{0}"*/, v33, 0LL);
            if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            Manager__loadBattleCommonEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                        v32,
                                                                        v34,
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
              v38 = UnityEngine_Object__Instantiate_object__49297800(
                      (Il2CppObject *)Manager__loadBattleCommonEffect,
                      transform,
                      (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
              GameObjectExtensions__ResetTransform((UnityEngine_GameObject_o *)v38, 0LL);
              if ( v38 )
              {
                UnityEngine_GameObject__SetActive(
                  (UnityEngine_GameObject_o *)v38,
                  !_4__this->fields.isHideFaceTexture,
                  0LL);
                this = (BattleServantParamComponent__CoAddClassIconEffect_d__124_o *)_4__this->fields.commandSpellEffectDict;
                if ( this )
                {
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)this,
                    v4->fields.effectId,
                    v38,
                    (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleServantParamComponent__CoAddClassIconEffect_d__124_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  bool result; // w0
  struct BattleCallBackBase_o *callBack; // x0

  if ( (byte_4A5E1DC & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4A5E1DC = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callBack = this->fields.callBack;
    this->fields.__1__state = -1;
    if ( !callBack )
      sub_1B8880C(0LL, method);
    ((void (__fastcall *)(struct BattleCallBackBase_o *, const char *))callBack->klass[1]._1.gc_desc)(
      callBack,
      callBack->klass[1]._1.name);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    waitTime = this->fields.waitTime;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v5, v6, v7);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleServantParamComponent__DelayMethod_d__115_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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

  if ( (byte_4A5E1D9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    byte_4A5E1D9 = 1;
  }
  effectDict = this->fields.effectDict;
  if ( !effectDict )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
    this->fields.id,
    (const MethodInfo_316EDE0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
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
  struct BattleServantParamComponent_o *_4__this; // x8
  Il2CppObject *v6; // x20
  UnityEngine_Transform_o *battlePointRoot; // x21
  struct BattleServantParamComponent_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  struct BattleServantParamComponent_o *v11; // x9
  struct ServantBattlePointEntity_o *entity; // x8
  const MethodInfo *v13; // x2

  v4 = this;
  if ( (byte_4A5E1DA & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattlePointGaugeComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (BattleServantParamComponent___c__DisplayClass77_0_o *)sub_1B885B0(&StringLiteral_3243/*"BattlePointGauge"*/);
    byte_4A5E1DA = 1;
  }
  if ( !assetData )
    goto LABEL_14;
  this = (BattleServantParamComponent___c__DisplayClass77_0_o *)AssetData__GetObject_object__48635516(
                                                                  assetData,
                                                                  (System_String_o *)StringLiteral_3243/*"BattlePointGauge"*/,
                                                                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v6 = (Il2CppObject *)this;
  battlePointRoot = _4__this->fields.battlePointRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleServantParamComponent___c__DisplayClass77_0_o *)UnityEngine_Object__Instantiate_object__49297800(
                                                                  v6,
                                                                  battlePointRoot,
                                                                  (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
  if ( !this )
    goto LABEL_14;
  v8 = v4->fields.__4__this;
  this = (BattleServantParamComponent___c__DisplayClass77_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattlePointGaugeComponent___);
  if ( !v8
    || (v8->fields.battlePointGaugeComponent = (struct BattlePointGaugeComponent_o *)this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.battlePointGaugeComponent, (int32_t)this, v9, v10),
        (v11 = v4->fields.__4__this) == 0LL)
    || (entity = v4->fields.entity) == 0LL
    || (this = (BattleServantParamComponent___c__DisplayClass77_0_o *)v11->fields.battlePointGaugeComponent) == 0LL
    || (BattlePointGaugeComponent__Init((BattlePointGaugeComponent_o *)this, entity->fields.battlePointId, 0LL),
        (this = (BattleServantParamComponent___c__DisplayClass77_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_1B8880C(this, assetData);
  }
  BattleServantParamComponent__UpdateBattlePointImmediately(
    (BattleServantParamComponent_o *)this,
    (BattleServantData_o *)this[8].monitor,
    v13);
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
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattleServantParamComponent_o *_4__this; // x20
  struct BattleServantSkillIConComponent_array *skillIcon; // x19
  int max_length; // w8
  int v10; // w22
  char v11; // w21

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_19;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_19;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_o *)BattleServantData__get_BuffData(
                                                                                      (BattleServantData_o *)this,
                                                                                      0LL);
    if ( !this )
      goto LABEL_19;
    BattleBuffData__UpdateSkillRelationBuff((BattleBuffData_o *)this, 0LL);
    skillIcon = _4__this->fields.skillIcon;
    if ( !skillIcon )
      goto LABEL_19;
    max_length = skillIcon->max_length;
    if ( max_length < 1 )
      return 0;
    v10 = 0;
    v11 = 0;
    do
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1B88814(this, method);
      this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_o *)skillIcon->m_Items[v10];
      if ( !this )
        goto LABEL_19;
      this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_o *)BattleServantSkillIConComponent__UpdateSkillRankUpEffect(
                                                                                        (BattleServantSkillIConComponent_o *)this,
                                                                                        method);
      max_length = skillIcon->max_length;
      ++v10;
      v11 |= (unsigned __int8)this;
    }
    while ( v10 < max_length );
    if ( (v11 & 1) == 0 )
      return 0;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_o *)_4__this->fields.data;
    if ( !this
      || (this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_o *)BattleServantData__get_BuffData(
                                                                                            (BattleServantData_o *)this,
                                                                                            0LL)) == 0LL
      || (this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_o *)this[2].klass) == 0LL )
    {
LABEL_19:
      sub_1B8880C(this, method);
    }
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter((BattleBuffData_SkillRankChangeData_o *)this, 0, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, 0, v2, v3);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__84_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  struct BattleServantParamComponent_o *_4__this; // x20
  BattleActionData_BuffData_o *v4; // x21
  BattleServantParamComponent__showSideEffectList_d__111_o *v5; // x22
  int32_t statusEffectId; // w23
  float x; // s10
  float y; // s8
  float z; // s9
  const MethodInfo *v10; // x2
  BattleServantParamComponent_c *v11; // x0
  float SideEffectShowWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v13; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v15; // w2
  int32_t v16; // w3
  bool result; // w0
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4A5E1DD & 1) == 0 )
  {
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&BattleServantParamComponent_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__get_Count__);
    this = (BattleServantParamComponent__showSideEffectList_d__111_o *)sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4A5E1DD = 1;
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
                                                                       (const MethodInfo_366F9FC *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__);
  if ( !_4__this->fields.clsIconComponent
    || (v4 = (BattleActionData_BuffData_o *)this,
        this = (BattleServantParamComponent__showSideEffectList_d__111_o *)UnityEngine_Component__get_transform(
                                                                             (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                                                                             0LL),
        !v4) )
  {
LABEL_16:
    sub_1B8880C(this, method);
  }
  v5 = this;
  statusEffectId = v4->fields.statusEffectId;
  x = _4__this->fields.sideEffectScl.fields.x;
  y = _4__this->fields.sideEffectScl.fields.y;
  z = _4__this->fields.sideEffectScl.fields.z;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  v18.fields.x = x;
  v18.fields.y = y;
  v18.fields.z = z;
  BattleEffectUtility__showSideEffect((UnityEngine_Transform_o *)v5, statusEffectId, v18, 0LL);
  BattleServantParamComponent__popBuffLabel(_4__this, v4, v10);
  v11 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v11 = BattleServantParamComponent_TypeInfo;
  }
  SideEffectShowWaitTime = v11->static_fields->SideEffectShowWaitTime;
  v13 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v13, SideEffectShowWaitTime, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v13;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B88554(p__2__current, (int32_t)v13, v15, v16);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleServantParamComponent__showSideEffectList_d__111_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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