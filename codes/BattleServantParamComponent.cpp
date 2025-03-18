void __fastcall BattleServantParamComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4C251FF & 1) == 0 )
  {
    sub_1C3B764(&BattleServantParamComponent_TypeInfo, v1);
    byte_4C251FF = 1;
  }
  LODWORD(BattleServantParamComponent_TypeInfo->static_fields->SideEffectShowWaitTime) = (struct BattleServantParamComponent_StaticFields)1065353216;
}


void __fastcall BattleServantParamComponent___ctor(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UnityEngine_GameObject_array *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_Queue_T__o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v24; // d0
  float z; // s1
  System_Collections_Generic_Dictionary_int__object__o *v26; // x20
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Collections_Generic_Dictionary_int__object__o *v33; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  BattleServantParamComponent_BaseClassIconData_o *v40; // x20
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  if ( (byte_4C251FE & 1) == 0 )
  {
    sub_1C3B764(&BattleServantParamComponent_BaseClassIconData_TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, v3);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v4);
    sub_1C3B764(&UnityEngine_GameObject___TypeInfo, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__, v6);
    sub_1C3B764(&System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo, v7);
    byte_4C251FE = 1;
  }
  v8 = (struct UnityEngine_GameObject_array *)sub_1C3B80C(UnityEngine_GameObject___TypeInfo, 1LL);
  this->fields.effectobj = v8;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.effectobj, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = (System_Collections_Generic_Queue_T__o *)sub_1C3B9B0(System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v15,
    (const MethodInfo_37FD88C *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__);
  this->fields.sideEffectShowQueue = (struct System_Collections_Generic_Queue_BattleActionData_BuffData__o *)v15;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.sideEffectShowQueue,
    (int64_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( !byte_4C1C516 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v22);
    byte_4C1C516 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v24 = *(_QWORD *)&static_fields->oneVector.fields.x;
  z = static_fields->oneVector.fields.z;
  this->fields.sideEffectLabelWidth = 100.0;
  *(_QWORD *)&this->fields.sideEffectScl.fields.x = v24;
  this->fields.sideEffectScl.fields.z = z;
  this->fields.GRAY = (struct UnityEngine_Color_o)xmmword_C0CE80;
  this->fields.isActiveHpBar = 1;
  v26 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v26,
    (const MethodInfo_32F41C8 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.classIconEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v26;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.classIconEffectDict,
    (int64_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v33,
    (const MethodInfo_32F41C8 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.commandSpellEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v33;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.commandSpellEffectDict,
    (int64_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (BattleServantParamComponent_BaseClassIconData_o *)sub_1C3B9B0(BattleServantParamComponent_BaseClassIconData_TypeInfo);
  BattleServantParamComponent_BaseClassIconData___ctor(v40, 0LL);
  this->fields.classIconData = v40;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.classIconData, (int64_t)v40, v41, v42, v43, v44, v45, v46);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4C251F8 & 1) == 0 )
  {
    sub_1C3B764(&BattleServantParamComponent__CoAddClassIconEffect_d__129_TypeInfo, *(_QWORD *)&effectId);
    byte_4C251F8 = 1;
  }
  v9 = sub_1C3B9B0(BattleServantParamComponent__CoAddClassIconEffect_d__129_TypeInfo);
  BattleServantParamComponent__CoAddClassIconEffect_d__129___ctor(
    (BattleServantParamComponent__CoAddClassIconEffect_d__129_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_1C3B9C0(v10, v11);
  *(_QWORD *)(v9 + 40) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 40), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 32) = effectId;
  *(_DWORD *)(v9 + 48) = priority;
  *(_QWORD *)(v9 + 64) = servantData;
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 64), (int64_t)servantData, v18, v19, v20, v21, v22, v23);
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
    sub_1C3B9C0(0LL, method);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4C251F1 & 1) == 0 )
  {
    sub_1C3B764(&BattleServantParamComponent__DelayMethod_d__119_TypeInfo, callBack);
    byte_4C251F1 = 1;
  }
  v6 = sub_1C3B9B0(BattleServantParamComponent__DelayMethod_d__119_TypeInfo);
  BattleServantParamComponent__DelayMethod_d__119___ctor(
    (BattleServantParamComponent__DelayMethod_d__119_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_1C3B9C0(v7, v8);
  *(float *)(v6 + 32) = waitTime;
  *(_QWORD *)(v6 + 40) = callBack;
  sub_1C3B708((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)callBack, v9, v10, v11, v12, v13, v14);
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
        sub_1C3B9C8(this, method);
      this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
      if ( !this )
        break;
      BattleServantSkillIConComponent__DeleteRankUpEffect((BattleServantSkillIConComponent_o *)this, 0LL);
      max_length = skillIcon->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1C3B9C0(this, method);
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

  if ( (byte_4C251F6 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, effectDict);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    byte_4C251F6 = 1;
  }
  IsNullOrEmpty = (System_Int32_array *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)effectDict, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !effectDict
      || (Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                   (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
                   (const MethodInfo_32F485C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__),
          (IsNullOrEmpty = System_Linq_Enumerable__ToArray_int_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                             (const MethodInfo_302AB30 *)Method_System_Linq_Enumerable_ToArray_int___)) == 0LL) )
    {
      sub_1C3B9C0(IsNullOrEmpty, v8);
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
          sub_1C3B9C8(IsNullOrEmpty, v8);
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
  __int64 v4; // x1
  UnityEngine_Component_o **p_battlePointGaugeComponent; // x19
  UnityEngine_Object_o *gameObject; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4C251FC & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C251FC = 1;
  }
  battlePointGaugeComponent = (UnityEngine_Object_o *)this->fields.battlePointGaugeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battlePointGaugeComponent, 0LL, 0LL) )
  {
    p_battlePointGaugeComponent = (UnityEngine_Component_o **)&this->fields.battlePointGaugeComponent;
    if ( !*p_battlePointGaugeComponent )
      sub_1C3B9C0(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_battlePointGaugeComponent, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
    *p_battlePointGaugeComponent = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)p_battlePointGaugeComponent, 0LL, v7, v8, v9, v10, v11, v12);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  Il2CppObject **v24; // x20
  System_Collections_ICollection_o *v25; // x0
  Il2CppObject *v26; // x20
  System_Action_o *v27; // x21
  Il2CppObject *v28; // x21
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C251F7 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, effectDict);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v10);
    sub_1C3B764(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, v11);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v12);
    sub_1C3B764(&Method_BattleServantParamComponent___c__DisplayClass127_0__DestroyEffectObject_b__0__, v13);
    sub_1C3B764(&BattleServantParamComponent___c__DisplayClass127_0_TypeInfo, v14);
    byte_4C251F7 = 1;
  }
  component = 0LL;
  v15 = sub_1C3B9B0(BattleServantParamComponent___c__DisplayClass127_0_TypeInfo);
  BattleServantParamComponent___c__DisplayClass127_0___ctor(
    (BattleServantParamComponent___c__DisplayClass127_0_o *)v15,
    0LL);
  if ( !v15 )
    goto LABEL_19;
  *(_QWORD *)(v15 + 16) = effectDict;
  v24 = (Il2CppObject **)(v15 + 16);
  sub_1C3B708((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)effectDict, v18, v19, v20, v21, v22, v23);
  v25 = *(System_Collections_ICollection_o **)(v15 + 16);
  *(_DWORD *)(v15 + 24) = id;
  if ( !BasicHelper__IsNullOrEmpty(v25, 0LL) )
  {
    Item = *v24;
    if ( !*v24 )
      goto LABEL_19;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)Item,
           *(_DWORD *)(v15 + 24),
           (const MethodInfo_32F4D90 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    {
      if ( !forceDestroy )
      {
        Item = *v24;
        if ( !*v24 )
          goto LABEL_19;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 (System_Collections_Generic_Dictionary_int__object__o *)Item,
                 *(_DWORD *)(v15 + 24),
                 (const MethodInfo_32F4AFC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
        if ( !Item )
          goto LABEL_19;
        if ( UnityEngine_GameObject__TryGetComponent_object_(
               (UnityEngine_GameObject_o *)Item,
               &component,
               (const MethodInfo_3042CA8 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
        {
          v26 = component;
          v27 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
          System_Action___ctor(
            v27,
            (Il2CppObject *)v15,
            Method_BattleServantParamComponent___c__DisplayClass127_0__DestroyEffectObject_b__0__,
            0LL);
          if ( v26 )
          {
            ((void (__fastcall *)(Il2CppObject *, __int64, System_Action_o *, Il2CppMethodPointer))v26->klass->vtable[8].method)(
              v26,
              1LL,
              v27,
              v26->klass->vtable[9].methodPtr);
            return;
          }
LABEL_19:
          sub_1C3B9C0(Item, v17);
        }
      }
      Item = *v24;
      if ( !*v24 )
        goto LABEL_19;
      v28 = System_Collections_Generic_Dictionary_int__object___get_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)Item,
              *(_DWORD *)(v15 + 24),
              (const MethodInfo_32F4AFC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71122748((UnityEngine_Object_o *)v28, 0LL);
      Item = *v24;
      if ( !*v24 )
        goto LABEL_19;
      System_Collections_Generic_Dictionary_int__object___Remove(
        (System_Collections_Generic_Dictionary_int__object__o *)Item,
        *(_DWORD *)(v15 + 24),
        (const MethodInfo_32F6024 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__DisplayClassIconChangeEffect(
        BattleServantParamComponent_o *this,
        float delayTime,
        bool isSkipEffect,
        bool isAddBuff,
        const MethodInfo *method)
{
  struct BattleServantParamComponent_BaseClassIconData_o *classIconData; // x0

  classIconData = this->fields.classIconData;
  if ( !classIconData )
    sub_1C3B9C0(0LL, isSkipEffect);
  ((void (__fastcall *)(struct BattleServantParamComponent_BaseClassIconData_o *, bool, bool, void *, long double))classIconData->klass->vtable._5_DisplayIconEffect.method)(
    classIconData,
    isSkipEffect,
    isAddBuff,
    classIconData->klass[1]._1.image,
    *(long double *)&delayTime);
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

  if ( (byte_4C251F9 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__, effectDict);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__, v6);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__,
      v7);
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v8);
    sub_1C3B764(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    this = (BattleServantParamComponent_o *)sub_1C3B764(
                                              &Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__,
                                              v11);
    byte_4C251F9 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  component = 0LL;
  if ( !effectDict
    || (this = (BattleServantParamComponent_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                  (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
                                                  (const MethodInfo_32F49AC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
    sub_1C3B9C0(this, effectDict);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v16,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_39B9954 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v17,
            (const MethodInfo_34445DC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    currentValue = v17.fields._currentValue;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)currentValue, 0LL, 0LL);
    if ( !v13 )
    {
      if ( !currentValue )
        sub_1C3B9C0(v13, v14);
      if ( UnityEngine_GameObject__TryGetComponent_object_(
             (UnityEngine_GameObject_o *)currentValue,
             &component,
             (const MethodInfo_3042CA8 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentValue, 1, 0LL);
        if ( isStart )
        {
          if ( !component )
            sub_1C3B9C0(0LL, v15);
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)component, 0LL);
        }
        else
        {
          if ( !component )
            sub_1C3B9C0(0LL, v15);
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
    (const MethodInfo_34445D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
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

  if ( (byte_4C251E7 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C251E7 = 1;
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
        sub_1C3B9C0(isTDSeraled, v9);
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

  if ( (byte_4C251C6 & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    sub_1C3B764(&StringLiteral_22706/*"sceneSet"*/, v4);
    byte_4C251C6 = 1;
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
        sub_1C3B9C0(v11, v12);
      UnityEngine_GameObject__SendMessage_71104120(v10, (System_String_o *)StringLiteral_22706/*"sceneSet"*/, v11, 0LL);
    }
  }
}


void __fastcall BattleServantParamComponent__OnCompleteShiftGaugeChangeHp(
        BattleServantParamComponent_o *this,
        BattleAction_BasePlayShiftGauge_o *playShiftGauge,
        const MethodInfo *method)
{
  if ( !playShiftGauge )
    sub_1C3B9C0(this, 0LL);
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

  if ( (byte_4C251EA & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, *(_QWORD *)&nowHp);
    byte_4C251EA = 1;
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
      sub_1C3B9C0(v8, v7);
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
  const MethodInfo *v9; // x6
  BattleServantHpShiftComponent_o *v10; // x0
  const MethodInfo *v11; // x4
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C251E5 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_4C251E5 = 1;
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
      sub_1C3B9C0(v10, v8);
    }
    BattleServantHpShiftComponent__UpdateIcon(v10, index, 1, 1, v11);
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
  const MethodInfo *v10; // x6
  float result; // s0
  BattleServantHpShiftComponent_o *v12; // x0
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C251E3 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_4C251E3 = 1;
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
      sub_1C3B9C0(0LL, v9);
    BattleServantHpShiftComponent__PlayShiftEffectGeneral(v12, index, effectData, this, &nextAnimationTime, 0LL, v10);
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
  const MethodInfo *v15; // x3
  BattleServantHpShiftComponent_o *v16; // x0
  const MethodInfo *v17; // x6
  Il2CppObject *v18; // x21
  System_Action_int__bool__bool__o *v19; // x22
  BattleCallBack_int__bool__bool__o *v20; // x21
  BattleServantParamComponent_o *v21; // x0
  const MethodInfo *v22; // x2
  System_Collections_IEnumerator_o *v23; // x0
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C251E4 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_int__bool__bool__TypeInfo, *(_QWORD *)&index);
    sub_1C3B764(&Method_BattleCallBack_int__bool__bool___ctor__, v9);
    sub_1C3B764(&BattleCallBack_int__bool__bool__TypeInfo, v10);
    sub_1C3B764(&Method_BattleServantHpShiftComponent_UpdateIcon__, v11);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v12);
    byte_4C251E4 = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
  {
    v16 = this->fields.hpShift;
    if ( !v16
      || (BattleServantHpShiftComponent__UpdateIconActive(v16, index, 1, v15), (v16 = this->fields.hpShift) == 0LL) )
    {
      sub_1C3B9C0(v16, v14);
    }
    BattleServantHpShiftComponent__PlayShiftEffectGeneral(v16, index, effectData, this, &nextAnimationTime, 0LL, v17);
    v18 = (Il2CppObject *)this->fields.hpShift;
    v19 = (System_Action_int__bool__bool__o *)sub_1C3B9B0(System_Action_int__bool__bool__TypeInfo);
    System_Action_int__bool__bool____ctor(v19, v18, Method_BattleServantHpShiftComponent_UpdateIcon__, 0LL);
    v20 = (BattleCallBack_int__bool__bool__o *)sub_1C3B9B0(BattleCallBack_int__bool__bool__TypeInfo);
    BattleCallBack_int__bool__bool____ctor(
      v20,
      index,
      0,
      1,
      (System_Action_T1__T2__T3__o *)v19,
      (const MethodInfo_3210A0C *)Method_BattleCallBack_int__bool__bool___ctor__);
    v23 = BattleServantParamComponent__DelayMethod(v21, delayTime, (BattleCallBackBase_o *)v20, v22);
    UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v23, 0LL);
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
        sub_1C3B9C8(this, method);
      this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
      if ( !this )
        break;
      BattleServantSkillIConComponent__RemoveEffectClearRankUpBuff((BattleServantSkillIConComponent_o *)this, 0LL);
      max_length = skillIcon->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1C3B9C0(this, method);
  }
}


void __fastcall BattleServantParamComponent__SetActiveParameterView(
        BattleServantParamComponent_o *this,
        bool val,
        const MethodInfo *method)
{
  bool v3; // w19
  __int64 v5; // x1
  UnityEngine_GameObject_o *root; // x0

  v3 = val;
  BattleServantParamComponent__setTouch(this, val, method);
  root = this->fields.root;
  if ( !root )
    sub_1C3B9C0(0LL, v5);
  UnityEngine_GameObject__SetActive(root, v3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4C251FD & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, flg);
    byte_4C251FD = 1;
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
    sub_1C3B9C0(v7, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__SetEnemyParamPosition(
        BattleServantParamComponent_o *this,
        BaseEnemyParamPosData_o *paramPosData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battleServantParamSetting; // x21
  __int64 showBuffComponent; // x0
  __int64 v7; // x1
  UnityEngine_Transform_o *v8; // x21
  float v9; // s0
  float v10; // s1
  float v11; // s2
  int v12; // s0
  struct BattleServantShowBuffComponent_o *v15; // x19
  struct BattleServantParamSetting_o *v16; // x8
  struct BattleServantParamSetting_o *v17; // x8
  float x; // w8
  struct BattleServantShowBuffComponent_o *v19; // x9

  if ( (byte_4C251CE & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, paramPosData);
    byte_4C251CE = 1;
  }
  battleServantParamSetting = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  showBuffComponent = UnityEngine_Object__op_Equality(battleServantParamSetting, 0LL, 0LL);
  if ( (showBuffComponent & 1) != 0 )
  {
    showBuffComponent = (__int64)this->fields.showBuffComponent;
    if ( showBuffComponent )
    {
      showBuffComponent = (__int64)UnityEngine_Component__get_transform(
                                     (UnityEngine_Component_o *)showBuffComponent,
                                     0LL);
      if ( this->fields.showBuffComponent )
      {
        v8 = (UnityEngine_Transform_o *)showBuffComponent;
        showBuffComponent = (__int64)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)this->fields.showBuffComponent,
                                       0LL);
        if ( showBuffComponent )
        {
          *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)showBuffComponent,
                                            0LL);
          if ( paramPosData )
          {
            showBuffComponent = ((__int64 (__fastcall *)(BaseEnemyParamPosData_o *, Il2CppMethodPointer, float, float, float))paramPosData->klass->vtable._6_GetSvtBuffLocalPos.method)(
                                  paramPosData,
                                  paramPosData->klass->vtable._7_get_BuffIconMaxLine.methodPtr,
                                  v9,
                                  v10,
                                  v11);
            if ( v8 )
            {
              UnityEngine_Transform__set_localPosition(v8, *(UnityEngine_Vector3_o *)&v12, 0LL);
              v15 = this->fields.showBuffComponent;
              showBuffComponent = ((__int64 (__fastcall *)(BaseEnemyParamPosData_o *, void *))paramPosData->klass->vtable._7_get_BuffIconMaxLine.method)(
                                    paramPosData,
                                    paramPosData->klass[1]._1.image);
              if ( v15 )
              {
                v15->fields.maxLine = showBuffComponent;
                return;
              }
            }
          }
        }
      }
    }
LABEL_19:
    sub_1C3B9C0(showBuffComponent, v7);
  }
  v16 = this->fields.battleServantParamSetting;
  if ( !v16 )
    goto LABEL_19;
  ComponentHelper__SetLocalPosition(
    (UnityEngine_Component_o *)this->fields.showBuffComponent,
    *(UnityEngine_Vector3_o *)&v16->fields.BuffIconPosition.fields.y,
    0LL);
  v17 = this->fields.battleServantParamSetting;
  if ( !v17 )
    goto LABEL_19;
  x = v17->fields.BoxColliderPosition.fields.x;
  if ( (LODWORD(x) & 0x80000000) == 0 )
  {
    v19 = this->fields.showBuffComponent;
    if ( !v19 )
      goto LABEL_19;
    *(float *)&v19->fields.maxCount = x;
  }
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
  const MethodInfo *v8; // x2
  BattlePointGaugeComponent_o *v9; // x8

  v4 = this;
  if ( (byte_4C251FA & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, svtdata);
    byte_4C251FA = 1;
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
        v9 = v4->fields.battlePointGaugeComponent;
        if ( v9 )
        {
          BattlePointGaugeComponent__UpdateBattlePoint(
            v9,
            *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1),
            v8);
          return;
        }
LABEL_15:
        sub_1C3B9C0(this, svtdata);
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
  const MethodInfo *v8; // x2
  BattlePointGaugeComponent_o *v9; // x8

  v4 = this;
  if ( (byte_4C251FB & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, svtdata);
    byte_4C251FB = 1;
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
        v9 = v4->fields.battlePointGaugeComponent;
        if ( v9 )
        {
          BattlePointGaugeComponent__UpdateBattlePointImmediately(
            v9,
            *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1),
            v8);
          return;
        }
LABEL_15:
        sub_1C3B9C0(this, svtdata);
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
  if ( (byte_4C251F5 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_AuraEffectMaster___, servantData);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Contains__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v19);
    this = (BattleServantParamComponent_o *)sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v20);
    byte_4C251F5 = 1;
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
  v24 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleServantParamComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_AuraEffectMaster___);
  if ( !v4->fields.classIconEffectDict )
    goto LABEL_38;
  v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  this = (BattleServantParamComponent_o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                            (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.classIconEffectDict,
                                            (const MethodInfo_32F484C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
  if ( (int)this <= 0 )
    v4->fields.currentClassIconAuraEffectPriority = 0;
  if ( !ClassIconEffectBuffList )
    goto LABEL_38;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    (System_Collections_Generic_List_object__o *)ClassIconEffectBuffList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v50 = v47;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v50,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v26 )
      break;
    current = v50.fields._current;
    if ( !v50.fields._current )
      sub_1C3B9C0(v26, v27);
    if ( !v25 )
      sub_1C3B9C0(v26, v27);
    v29 = DataMasterBase_object__object__int___TryGetEntity(
            v25,
            &entity,
            (int32_t)v50.fields._current[21].monitor,
            (const MethodInfo_329AE94 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    if ( v29 )
    {
      if ( !entity )
        sub_1C3B9C0(v29, v30);
      v32 = BattleServantParamComponent__CoAddClassIconEffect(
              v4,
              HIDWORD(entity[1].klass),
              (int32_t)entity[1].monitor,
              servantData,
              v31);
      started = UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)v4, v32, 0LL);
      if ( !v24 )
        sub_1C3B9C0(started, v34);
      v35 = System_Collections_Generic_List_int___Contains(
              v24,
              (int32_t)current[21].monitor,
              (const MethodInfo_366EFC0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v35 )
      {
        monitor_low = LODWORD(current[21].monitor);
        items = v24->fields._items;
        v38 = Method_System_Collections_Generic_List_int__Add__;
        ++v24->fields._version;
        if ( !items )
          sub_1C3B9C0(v35, monitor_low);
        size = v24->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v24,
            monitor_low,
            *(const MethodInfo_366EC48 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
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
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v24 )
LABEL_38:
    sub_1C3B9C0(this, servantData);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    v24,
    (const MethodInfo_366F71C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v48 = v47;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v48,
            (const MethodInfo_341C2F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    classIconEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.classIconEffectDict;
    if ( !classIconEffectDict )
      sub_1C3B9C0(0LL, v40);
    v42 = (int32_t)v48.fields._current;
    v43 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
            classIconEffectDict,
            (int32_t)v48.fields._current,
            (const MethodInfo_32F4D90 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
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
    (const MethodInfo_341C2F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void __fastcall BattleServantParamComponent__UpdateNameLabel(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nameLabel; // x20
  __int64 v4; // x1
  BattleServantData_o *data; // x0
  UILabel_o *v6; // x19

  if ( (byte_4C251F3 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C251F3 = 1;
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
        sub_1C3B9C0(data, v4);
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

  if ( (byte_4C251D1 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, *(_QWORD *)&np);
    byte_4C251D1 = 1;
  }
  npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL) )
  {
    v7 = this->fields.npcomp;
    if ( !v7 )
      sub_1C3B9C0(0LL, v6);
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
  const MethodInfo *v7; // x3
  BattleServantChangeBarComponent_o *v8; // x0

  if ( (byte_4C251E6 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, *(_QWORD *)&curGaugeIndex);
    byte_4C251E6 = 1;
  }
  hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpChange, 0LL, 0LL) )
  {
    v8 = this->fields.hpChange;
    if ( !v8 )
      sub_1C3B9C0(0LL, v6);
    BattleServantChangeBarComponent__setBarType(v8, 1, curGaugeIndex, v7);
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

  if ( (byte_4C251E9 & 1) == 0 )
  {
    sub_1C3B764(&bool_TypeInfo, *(_QWORD *)&fromHp);
    sub_1C3B764(&System_Collections_Hashtable_TypeInfo, v13);
    sub_1C3B764(&int_TypeInfo, v14);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v15);
    sub_1C3B764(&float_TypeInfo, v16);
    sub_1C3B764(&StringLiteral_20040/*"img_parameter_D"*/, v17);
    sub_1C3B764(&StringLiteral_20630/*"jump"*/, v18);
    sub_1C3B764(&StringLiteral_24427/*"x-cp20936"*/, v19);
    sub_1C3B764(&StringLiteral_22732/*"se-SE"*/, v20);
    sub_1C3B764(&StringLiteral_22739/*"seagreen"*/, v21);
    sub_1C3B764(&StringLiteral_10165/*"POST"*/, v22);
    sub_1C3B764(&StringLiteral_10069/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/, v23);
    sub_1C3B764(&StringLiteral_24469/*"x/("*/, v24);
    sub_1C3B764(&StringLiteral_22731/*"se-NO"*/, v25);
    sub_1C3B764(&iTween_TypeInfo, v26);
    byte_4C251E9 = 1;
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
        v30 = (System_Collections_Hashtable_o *)sub_1C3B9B0(System_Collections_Hashtable_TypeInfo),
        System_Collections_Hashtable___ctor_63948372(v30, 0LL),
        v50 = fromHp,
        v28 = (BattleHpGaugeBarComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v31, v32, v33),
        !v30) )
  {
LABEL_13:
    sub_1C3B9C0(v28, v29);
  }
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, BattleHpGaugeBarComponent_o *, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_20040/*"img_parameter_D"*/,
    v28,
    v30->klass->vtable._24_Clear.methodPtr);
  v49 = toHp;
  v37 = j_il2cpp_value_box_0(int_TypeInfo, &v49, v34, v35, v36);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_24469/*"x/("*/,
    v37,
    v30->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_22739/*"seagreen"*/,
    StringLiteral_10165/*"POST"*/,
    v30->klass->vtable._24_Clear.methodPtr);
  v48 = time;
  v41 = j_il2cpp_value_box_0(float_TypeInfo, &v48, v38, v39, v40);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_24427/*"x-cp20936"*/,
    v41,
    v30->klass->vtable._24_Clear.methodPtr);
  v47[0] = 1;
  v45 = j_il2cpp_value_box_0(bool_TypeInfo, v47, v42, v43, v44);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_20630/*"jump"*/,
    v45,
    v30->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_22731/*"se-NO"*/,
    StringLiteral_10069/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_SELECT_SUPPORT_ONLY"*/,
    v30->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, BattleAction_BasePlayShiftGauge_o *, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_22732/*"se-SE"*/,
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  UILabel_o *v28; // x20
  struct System_String_o *svtOverwriteName; // x8
  float v30; // s8
  float v31; // s1
  float v32; // s0
  float v33; // s2

  if ( (byte_4C251F4 & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetData_GetObject_GameObject____77902856, method);
    sub_1C3B764(&AssetManager_TypeInfo, v3);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject____77992824, v4);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    sub_1C3B764(&ServantAssetLoadManager_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_17461/*"change"*/, v7);
    byte_4C251F4 = 1;
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
        UnityEngine_Object__Destroy_71122748(v15, 0LL);
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
            ? AssetData__GetObject_object__50142412(
                AssetStorage,
                (System_String_o *)StringLiteral_17461/*"change"*/,
                (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856)
            : 0LL;
        data = (BattleServantData_o *)this->fields.shortNameLabel;
        if ( !data )
          goto LABEL_44;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v21 = UnityEngine_Object__Instantiate_object__50818788(
                v19,
                transform,
                (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
        *p_enemyNameEffectPrefab = (struct UnityEngine_GameObject_o *)v21;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&this->fields.enemyNameEffectPrefab,
          (int64_t)v21,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
      }
      data = this->fields.data;
      if ( data )
      {
        v28 = this->fields.shortNameLabel;
        data = (BattleServantData_o *)BattleServantData__getServantShortName(data, 0LL);
        if ( v28 )
        {
          UILabel__set_text(v28, (System_String_o *)data, 0LL);
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
          svtOverwriteName = data->fields.svtOverwriteName;
          if ( !svtOverwriteName )
            goto LABEL_44;
          v30 = (float)(LODWORD(data->fields.svtOverwriteBattleName) * svtOverwriteName->fields._stringLength);
          if ( (float)(int)defaultShortNameLabelWidth >= v30 )
          {
            UIWidget__set_width((UIWidget_o *)data, defaultShortNameLabelWidth, 0LL);
            data = (BattleServantData_o *)this->fields.shortNameLabel;
            if ( data )
            {
              data = (BattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
              if ( data )
              {
                v32 = 1.0;
                v31 = 1.0;
                goto LABEL_43;
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
                v32 = (float)this->fields.defaultShortNameLabelWidth / v30;
LABEL_43:
                v33 = 1.0;
                UnityEngine_Transform__set_localScale(
                  (UnityEngine_Transform_o *)data,
                  *(UnityEngine_Vector3_o *)&v32,
                  0LL);
                return;
              }
            }
          }
        }
      }
LABEL_44:
      sub_1C3B9C0(data, defaultShortNameLabelWidth);
    }
  }
}


void __fastcall BattleServantParamComponent__UpdateSkillRankUpEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  System_Collections_IEnumerator_o *updated; // x1

  if ( this->fields.data )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_1C3B9C0(0LL, v4);
    if ( UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL) )
    {
      updated = BattleServantParamComponent__coroutineUpdateSkillRankUpEffect(this, v5);
      UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
    }
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
  __int64 v3; // x1
  BattleServantData_o *classIconData; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *levelLabel; // x20
  UILabel_o *v9; // x19

  if ( (byte_4C251D8 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C251D8 = 1;
  }
  if ( this->fields.data )
  {
    BattleServantParamComponent__UpdateStatusFace(this, method);
    classIconData = (BattleServantData_o *)this->fields.classIconData;
    if ( !classIconData )
      goto LABEL_12;
    ((void (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))classIconData->klass->vtable._4_unknown.method)(
      classIconData,
      classIconData->klass->vtable._5_isAiTarget.methodPtr);
    BattleServantParamComponent__UpdateNameLabel(this, v5);
    BattleServantParamComponent__UpdateShortNameLabel(this, v6);
    BattleServantParamComponent__updateSkillIcon(this, 0, v7);
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
    {
      classIconData = this->fields.data;
      if ( classIconData )
      {
        v9 = this->fields.levelLabel;
        classIconData = (BattleServantData_o *)BattleServantData__getLevelLabel(classIconData, 0LL);
        if ( v9 )
        {
          UILabel__set_text(v9, (System_String_o *)classIconData, 0LL);
          return;
        }
      }
LABEL_12:
      sub_1C3B9C0(classIconData, v3);
    }
  }
}


void __fastcall BattleServantParamComponent__UpdateStatusFace(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PartyOrganizationUtility_o *p_facetex; // x19
  UnityEngine_Object_o *facetex; // x21
  __int64 v6; // x1
  BattleServantData_o *data; // x0
  UITexture_o *v8; // x21
  BattleServantData_o *v9; // x8
  int32_t v10; // w20
  int32_t DispLimitCount; // w22
  UITexture_o *Manager__loadStatusFace; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4C251F2 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&ServantAssetLoadManager_TypeInfo, v3);
    byte_4C251F2 = 1;
  }
  if ( this->fields.data )
  {
    p_facetex = (PartyOrganizationUtility_o *)&this->fields.facetex;
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
        sub_1C3B9C0(data, v6);
      }
      v10 = (int)data;
      DispLimitCount = BattleServantData__getDispLimitCount(v9, 1, 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadStatusFace = ServantAssetLoadManager__loadStatusFace(v8, v10, DispLimitCount, 0LL);
      p_facetex->klass = (PartyOrganizationUtility_c *)Manager__loadStatusFace;
      sub_1C3B708(p_facetex, (int64_t)Manager__loadStatusFace, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_4C251E8 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, nowAndMaxArray);
    byte_4C251E8 = 1;
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
          sub_1C3B9C8(data, v6);
        v8 = this->fields.nextTdGauge;
        v10 = nowAndMaxArray->m_Items[1];
        v9 = nowAndMaxArray->m_Items[2];
        isTDSeraled = BattleServantData__isTDSeraled(data, 0LL);
        if ( !v8 )
          sub_1C3B9C0(isTDSeraled, v12);
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
  if ( (byte_4C251DB & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1C3B764(&Method_BattleServantParamComponent_callSkillIcon__, method);
    byte_4C251DB = 1;
  }
  skillIcon = v2->fields.skillIcon;
  if ( !skillIcon )
LABEL_13:
    sub_1C3B9C0(this, method);
  v4 = 0LL;
  v5 = 0;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
      sub_1C3B9C8(this, method);
    this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
    if ( this )
    {
      this = (BattleServantParamComponent_o *)BattleServantSkillIConComponent__showChageEffect(
                                                (BattleServantSkillIConComponent_o *)this,
                                                0LL);
      if ( !(v5 & 1 | (((unsigned __int8)this & 1) == 0)) )
      {
        v7 = Method_BattleServantParamComponent_callSkillIcon__;
        if ( (*((_BYTE *)Method_BattleServantParamComponent_callSkillIcon__ + 83) & 2) != 0 )
          v7 = (_QWORD *)sub_1C3B77C(Method_BattleServantParamComponent_callSkillIcon__);
        v8 = (System_Reflection_MethodBase_o *)sub_1C3B748(v7, v7[4]);
        OverwriteAssetSoundName__PlayCommonSe(v8, 2, 0, 0LL);
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
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(NowHp, v5);
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

  if ( (byte_4C251F0 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__, v3);
    sub_1C3B764(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo, v4);
    byte_4C251F0 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  if ( !v5
    || (showBuffComponent = this->fields.showBuffComponent,
        v6 = System_Collections_Generic_List_object___ToArray(
               v5,
               (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__),
        !showBuffComponent) )
  {
    sub_1C3B9C0(v6, v7);
  }
  BattleServantShowBuffComponent__setBuffList(showBuffComponent, (BattleBuffData_ShowBuffData_array *)v6, 0LL);
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

  if ( (byte_4C251DD & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___, skillInfo);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    byte_4C251DD = 1;
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
                                                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___)) == 0LL )
    {
      sub_1C3B9C0(Component_object, v9);
    }
    BattlePerformancePlayer__onClickSkillIcon((BattlePerformancePlayer_o *)Component_object, skillInfo, isLongTap, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4C251DC & 1) == 0 )
  {
    sub_1C3B764(&BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__88_TypeInfo, method);
    byte_4C251DC = 1;
  }
  v3 = sub_1C3B9B0(BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__88_TypeInfo);
  BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__88___ctor(
    (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__88_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1C3B9C0(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
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
  UnityEngine_Object_o *facetex; // x22
  const MethodInfo *v22; // x1
  BattleServantData_o *data; // x0
  UITexture_o *v24; // x22
  int32_t v25; // w23
  int32_t DispLimitCount; // w24
  struct UITexture_o *Manager__loadStatusFace; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  UnityEngine_Object_o *levelLabel; // x21
  UILabel_o *v35; // x21
  UnityEngine_Object_o *battleServantParamSetting; // x21
  struct BattleServantParamSetting_o *v37; // x8
  struct BattleServantParamSetting_o *v38; // x8
  struct BattleServantParamSetting_o *v39; // x8
  float x; // w9
  struct BattleServantParamSetting_o *v41; // x8
  struct BattleServantParamSetting_o *v42; // x8
  struct BattleServantParamSetting_o *v43; // x8
  UnityEngine_Object_o *nameLabel; // x21
  UILabel_o *v45; // x21
  UnityEngine_Object_o *hpGauge; // x21
  BattleHpGaugeBarComponent_o *v47; // x21
  int32_t v48; // w22
  UnityEngine_Object_o *hpChange; // x21
  const MethodInfo *v50; // x3
  struct BattleServantData_o *v51; // x8
  struct System_Int32_array *shiftDeckList; // x9
  UnityEngine_Object_o *hpShift; // x21
  const MethodInfo *v54; // x2
  UnityEngine_Object_o *breakSprite; // x21
  int32_t v56; // w21
  int32_t MaxHp; // w0
  const MethodInfo *v58; // x4
  UnityEngine_Object_o *npcomp; // x21
  struct BattleNpGaugeSystemComponent_o *v60; // x21
  struct BattleServantData_o *v61; // x8
  BattleNpGaugeSystemComponent_o *v62; // x21
  UnityEngine_Object_o *nextTdGauge; // x21
  bool v64; // w0
  const MethodInfo *v65; // x2
  BattleNextTDgaugeComponent_o *v66; // x20
  int32_t nexttpturn; // w21
  int32_t maxtpturn; // w22
  UnityEngine_Object_o *friendIcon; // x20
  struct BattleServantData_o *v70; // x8
  UISprite_o *v71; // x20
  UISprite_o *v72; // x20
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *breakPoint; // x20
  const MethodInfo *v75; // x4
  struct BattleServantData_o *v76; // x8
  struct BattleServantData_o *v77; // x8
  ServantBattlePointMaster_o *v78; // x20
  __int64 v79; // x21
  __int64 v80; // x22
  BattleServantData_c *klass; // x8
  BattleServantData_o *v82; // x20
  __int64 v83; // x9
  int *p_offset; // x10
  __int64 v85; // x0
  __int64 v86; // x1
  __int64 v87; // x20
  BattlePointData_o *v88; // x23
  __int64 v89; // x8
  __int64 v90; // x9
  int *v91; // x10
  __int64 v92; // x0
  __int64 v93; // x21
  __int64 v94; // x0
  __int64 v95; // x1
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  __int64 v102; // x8
  __int64 v103; // x9
  int *v104; // x10
  __int64 v105; // x0
  int64_t v106; // x0
  __int64 v107; // x22
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  __int64 v114; // x0
  __int64 v115; // x1
  BattleServantData_o *v116; // x0
  BattlePointData_o *BattlePointData; // x0
  __int64 v118; // x1
  BattlePointData_o *v119; // x28
  struct BattleServantData_o *v120; // x8
  UnityEngine_Object_o *battlePointRoot; // x23
  _BOOL8 v122; // x0
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x3
  __int64 v126; // x4
  Il2CppObject *v127; // x1
  System_String_o *v128; // x19
  AssetLoader_LoadEndDataHandler_o *v129; // x22
  __int64 v130; // x8
  __int64 v131; // x9
  int *v132; // x10
  __int64 v133; // x0
  int v134; // [xsp+Ch] [xbp-64h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16

  v3 = notUpdateFlag;
  if ( (byte_4C251D7 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, *(_QWORD *)&notUpdateFlag);
    sub_1C3B764(&Method_UnityEngine_Component_TryGetComponent_BoxCollider___, v5);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantBattlePointMaster___, v6);
    sub_1C3B764(&DataManager_TypeInfo, v7);
    sub_1C3B764(&FileName_TypeInfo, v8);
    sub_1C3B764(&System_IDisposable_TypeInfo, v9);
    sub_1C3B764(&System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo, v10);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo, v11);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1C3B764(&int_TypeInfo, v13);
    sub_1C3B764(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v15);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1C3B764(&ServantAssetLoadManager_TypeInfo, v17);
    sub_1C3B764(&Method_BattleServantParamComponent___c__DisplayClass81_0__initUpdateView_b__0__, v18);
    sub_1C3B764(&BattleServantParamComponent___c__DisplayClass81_0_TypeInfo, v19);
    sub_1C3B764(&StringLiteral_3241/*"Buffer and BufferList properties cannot both be non-null."*/, v20);
    byte_4C251D7 = 1;
  }
  component = 0LL;
  if ( !this->fields.data )
    return;
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_169;
    v24 = this->fields.facetex;
    data = (BattleServantData_o *)BattleServantData__GetDispImageSvtId(data, 0LL);
    if ( !this->fields.data )
      goto LABEL_169;
    v25 = (int)data;
    DispLimitCount = BattleServantData__getDispLimitCount(this->fields.data, 1, 0LL);
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    Manager__loadStatusFace = ServantAssetLoadManager__loadStatusFace(v24, v25, DispLimitCount, 0LL);
    this->fields.facetex = Manager__loadStatusFace;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.facetex,
      (int64_t)Manager__loadStatusFace,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  data = (BattleServantData_o *)this->fields.classIconData;
  if ( !data )
    goto LABEL_169;
  ((void (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))data->klass->vtable._4_unknown.method)(
    data,
    data->klass->vtable._5_isAiTarget.methodPtr);
  levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_169;
    v35 = this->fields.levelLabel;
    data = (BattleServantData_o *)BattleServantData__getLevelLabel(data, 0LL);
    if ( !v35 )
      goto LABEL_169;
    UILabel__set_text(v35, (System_String_o *)data, 0LL);
  }
  battleServantParamSetting = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(battleServantParamSetting, 0LL, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    v37 = this->fields.battleServantParamSetting;
    if ( !v37 )
      goto LABEL_169;
    BasicHelper__SetActiveSafely(
      (UnityEngine_Component_o *)this->fields.clsIconComponent,
      LOBYTE(v37->fields.UiPosition.fields.x),
      0LL);
    v38 = this->fields.battleServantParamSetting;
    if ( !v38 )
      goto LABEL_169;
    ComponentHelper__SetLocalPosition(
      (UnityEngine_Component_o *)this,
      *(UnityEngine_Vector3_o *)&v38->fields.UiPosition.fields.y,
      0LL);
    v39 = this->fields.battleServantParamSetting;
    if ( !v39 )
      goto LABEL_169;
    x = v39->fields.BoxColliderPosition.fields.x;
    if ( (LODWORD(x) & 0x80000000) != 0 )
    {
      data = (BattleServantData_o *)this->fields.showBuffComponent;
    }
    else
    {
      data = (BattleServantData_o *)this->fields.showBuffComponent;
      if ( !data )
        goto LABEL_169;
      *(float *)&data->fields.userSvtId.fields.hiddenValue = x;
    }
    ComponentHelper__SetLocalPosition(
      (UnityEngine_Component_o *)data,
      *(UnityEngine_Vector3_o *)&v39->fields.BuffIconPosition.fields.y,
      0LL);
    v41 = this->fields.battleServantParamSetting;
    if ( !v41 )
      goto LABEL_169;
    GameObjectHelper__SetActiveSafely(this->fields.levelRoot, BYTE1(v41->fields.UiPosition.fields.x), 0LL);
    data = (BattleServantData_o *)UnityEngine_Component__TryGetComponent_object_(
                                    (UnityEngine_Component_o *)this,
                                    &component,
                                    (const MethodInfo_2FE7AD0 *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v42 = this->fields.battleServantParamSetting;
      if ( !v42 )
        goto LABEL_169;
      data = (BattleServantData_o *)component;
      if ( !component )
        goto LABEL_169;
      UnityEngine_BoxCollider__set_center(
        (UnityEngine_BoxCollider_o *)component,
        *(UnityEngine_Vector3_o *)&v42->fields.BoxColliderPosition.fields.y,
        0LL);
      v43 = this->fields.battleServantParamSetting;
      if ( !v43 )
        goto LABEL_169;
      data = (BattleServantData_o *)component;
      if ( !component )
        goto LABEL_169;
      UnityEngine_BoxCollider__set_size(
        (UnityEngine_BoxCollider_o *)component,
        *(UnityEngine_Vector3_o *)&v43->fields.BoxColliderSize.fields.y,
        0LL);
    }
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_169;
    v45 = this->fields.nameLabel;
    data = (BattleServantData_o *)BattleServantData__getServantName(data, 0LL);
    if ( !v45 )
      goto LABEL_169;
    UILabel__set_text(v45, (System_String_o *)data, 0LL);
  }
  BattleServantParamComponent__UpdateShortNameLabel(this, v22);
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_169;
    v47 = this->fields.hpGauge;
    data = (BattleServantData_o *)BattleServantData__getNowHp(data, 0LL);
    if ( !this->fields.data )
      goto LABEL_169;
    v48 = (int)data;
    data = (BattleServantData_o *)BattleServantData__getMaxHp(this->fields.data, 0LL);
    if ( !v47 )
      goto LABEL_169;
    BattleHpGaugeBarComponent__setInitValue(v47, v48, (int32_t)data, 0LL);
  }
  hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(hpChange, 0LL, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    v51 = this->fields.data;
    if ( !v51 )
      goto LABEL_169;
    shiftDeckList = v51->fields.shiftDeckList;
    if ( !shiftDeckList )
      goto LABEL_169;
    data = (BattleServantData_o *)this->fields.hpChange;
    if ( !data )
      goto LABEL_169;
    BattleServantChangeBarComponent__setBarType(
      (BattleServantChangeBarComponent_o *)data,
      1,
      shiftDeckList->max_length - v51->fields.shiftDeckIndex,
      v50);
  }
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
  {
    data = (BattleServantData_o *)this->fields.hpShift;
    if ( !data )
      goto LABEL_169;
    BattleServantHpShiftComponent__setInitValue((BattleServantHpShiftComponent_o *)data, this->fields.data, v54);
  }
  BattleServantParamComponent__setAtlas(this, v22);
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0LL, 0LL) )
  {
    data = (BattleServantData_o *)this->fields.breakSprite;
    if ( !data )
      goto LABEL_169;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)data, 0, 0LL);
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_169;
  data = (BattleServantData_o *)BattleServantData__getNowHp(data, 0LL);
  if ( !this->fields.data )
    goto LABEL_169;
  v56 = (int)data;
  MaxHp = BattleServantData__getMaxHp(this->fields.data, 0LL);
  BattleServantParamComponent__updateHplabel(this, v56, MaxHp, 1, v58);
  npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    v60 = this->fields.npcomp;
    if ( !v60 )
      goto LABEL_169;
    v60->fields.lineCount = 3;
    data = this->fields.data;
    if ( !data )
      goto LABEL_169;
    v60->fields.maxparam = BattleServantData__getCountMaxNp(data, 0LL);
    data = (BattleServantData_o *)this->fields.npcomp;
    if ( !data )
      goto LABEL_169;
    BattleNpGaugeSystemComponent__InitSliderValue((BattleNpGaugeSystemComponent_o *)data, 0LL);
    v61 = this->fields.data;
    if ( !v61 )
      goto LABEL_169;
    data = (BattleServantData_o *)this->fields.npcomp;
    if ( !data )
      goto LABEL_169;
    BattleNpGaugeSystemComponent__setNowParam((BattleNpGaugeSystemComponent_o *)data, v61->fields.np, 0LL);
    data = this->fields.data;
    if ( !data )
      goto LABEL_169;
    v62 = this->fields.npcomp;
    data = (BattleServantData_o *)BattleServantData__isAddNpGauge(data, 0LL);
    if ( !v62 )
      goto LABEL_169;
    BattleNpGaugeSystemComponent__setUseNp(v62, (unsigned __int8)data & 1, 0LL);
  }
  nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v64 = UnityEngine_Object__op_Inequality(nextTdGauge, 0LL, 0LL);
  if ( (v3 & 1) == 0 && v64 )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_169;
    v66 = this->fields.nextTdGauge;
    nexttpturn = data->fields.nexttpturn;
    maxtpturn = data->fields.maxtpturn;
    data = (BattleServantData_o *)BattleServantData__isTDSeraled(data, 0LL);
    if ( !v66 )
      goto LABEL_169;
    BattleNextTDgaugeComponent__setInitGauge(v66, nexttpturn, maxtpturn, (unsigned __int8)data & 1, 0LL);
  }
  BattleServantParamComponent__updateSkillIcon(this, 0, v65);
  friendIcon = (UnityEngine_Object_o *)this->fields.friendIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendIcon, 0LL, 0LL) )
  {
    data = (BattleServantData_o *)this->fields.friendIcon;
    if ( !data )
      goto LABEL_169;
    data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( !data )
      goto LABEL_169;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
    v70 = this->fields.data;
    if ( !v70 )
      goto LABEL_169;
    if ( v70->fields.followerType )
    {
      v71 = this->fields.friendIcon;
      data = (BattleServantData_o *)FileName_TypeInfo;
      if ( !FileName_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      if ( !v71 )
        goto LABEL_169;
      UISprite__set_spriteName(v71, FileName_TypeInfo->static_fields->friendIconName, 0LL);
      data = (BattleServantData_o *)this->fields.friendIcon;
      if ( !data )
        goto LABEL_169;
      data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
      if ( !data )
        goto LABEL_169;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
      v70 = this->fields.data;
      if ( !v70 )
        goto LABEL_169;
    }
    if ( v70->fields.flgEventJoin )
    {
      v72 = this->fields.friendIcon;
      data = (BattleServantData_o *)FileName_TypeInfo;
      if ( !FileName_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
      if ( !v72 )
        goto LABEL_169;
      UISprite__set_spriteName(v72, FileName_TypeInfo->static_fields->eventJoinIconName, 0LL);
      data = (BattleServantData_o *)this->fields.friendIcon;
      if ( !data )
        goto LABEL_169;
      data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
      if ( !data )
        goto LABEL_169;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
    }
  }
  BattleServantParamComponent__setRoleTyoe(this, v22);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_169;
  data = (BattleServantData_o *)perf->fields.data;
  if ( !data )
    goto LABEL_169;
  if ( BattleData__IsWarBoard((BattleData_o *)data, 0LL) )
  {
    breakPoint = (UnityEngine_Object_o *)this->fields.breakPoint;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(breakPoint, 0LL, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v76 = this->fields.data;
      if ( !v76 )
        goto LABEL_169;
      data = (BattleServantData_o *)this->fields.breakPoint;
      if ( !data )
        goto LABEL_169;
      BattleServantBreakPointComponent__Initialize(
        (BattleServantBreakPointComponent_o *)data,
        v76->fields.defeatPoint,
        v76->fields.maxDefeatPoint,
        v76->fields.isEnemy,
        v75);
    }
  }
  BattleServantParamComponent__DestroyBattlePointGauge(this, v22);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  data = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantBattlePointMaster___);
  v77 = this->fields.data;
  if ( !v77 )
    goto LABEL_169;
  v78 = (ServantBattlePointMaster_o *)data;
  v80 = *(_QWORD *)&v77->fields.svtId.fields.currentCryptoKey;
  v79 = *(_QWORD *)&v77->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v136.fields.currentCryptoKey = v80;
  *(_QWORD *)&v136.fields.fakeValue = v79;
  data = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v136, 0LL);
  if ( !v78
    || (data = (BattleServantData_o *)ServantBattlePointMaster__GetBattlePointEntities(v78, (int32_t)data, 0LL)) == 0LL )
  {
LABEL_169:
    sub_1C3B9C0(data, v22);
  }
  klass = data->klass;
  v82 = data;
  v83 = *(unsigned __int16 *)(&data->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&data->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ServantBattlePointEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo )
    {
      --v83;
      p_offset += 4;
      if ( !v83 )
        goto LABEL_126;
    }
    v85 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_126:
    v85 = sub_1C8D744(data, System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo, 0LL);
  }
  v87 = (*(__int64 (__fastcall **)(BattleServantData_o *, _QWORD))v85)(v82, *(_QWORD *)(v85 + 8));
  if ( !v87 )
    sub_1C3B9C0(0LL, v86);
  v88 = 0LL;
  while ( 1 )
  {
    v89 = *(_QWORD *)v87;
    v90 = *(unsigned __int16 *)(*(_QWORD *)v87 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v87 + 302LL) )
    {
      v91 = (int *)(*(_QWORD *)(v89 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v91 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v90;
        v91 += 4;
        if ( !v90 )
          goto LABEL_134;
      }
      v92 = v89 + 16LL * *v91 + 312;
    }
    else
    {
LABEL_134:
      v92 = sub_1C8D744(v87, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v92)(v87, *(_QWORD *)(v92 + 8)) & 1) == 0 )
      break;
    v93 = sub_1C3B9B0(BattleServantParamComponent___c__DisplayClass81_0_TypeInfo);
    BattleServantParamComponent___c__DisplayClass81_0___ctor(
      (BattleServantParamComponent___c__DisplayClass81_0_o *)v93,
      0LL);
    if ( !v93 )
      sub_1C3B9C0(v94, v95);
    *(_QWORD *)(v93 + 24) = this;
    sub_1C3B708((PartyOrganizationUtility_o *)(v93 + 24), (int64_t)this, v96, v97, v98, v99, v100, v101);
    v102 = *(_QWORD *)v87;
    v103 = *(unsigned __int16 *)(*(_QWORD *)v87 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v87 + 302LL) )
    {
      v104 = (int *)(*(_QWORD *)(v102 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ServantBattlePointEntity__c **)v104 - 1) != System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo )
      {
        --v103;
        v104 += 4;
        if ( !v103 )
          goto LABEL_142;
      }
      v105 = v102 + 16LL * *v104 + 312;
    }
    else
    {
LABEL_142:
      v105 = sub_1C8D744(v87, System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo, 0LL);
    }
    v106 = (*(__int64 (__fastcall **)(__int64, _QWORD))v105)(v87, *(_QWORD *)(v105 + 8));
    *(_QWORD *)(v93 + 16) = v106;
    v107 = v93 + 16;
    sub_1C3B708((PartyOrganizationUtility_o *)(v93 + 16), v106, v108, v109, v110, v111, v112, v113);
    if ( !*(_QWORD *)(v93 + 16) )
      sub_1C3B9C0(v114, v115);
    v116 = this->fields.data;
    if ( !v116 )
      sub_1C3B9C0(0LL, v115);
    BattlePointData = BattleServantData__GetBattlePointData(v116, *(_DWORD *)(*(_QWORD *)(v93 + 16) + 20LL), 0LL);
    if ( BattlePointData )
      v119 = BattlePointData;
    else
      v119 = v88;
    if ( !BattlePointData )
      goto LABEL_179;
    if ( !v119 )
      sub_1C3B9C0(BattlePointData, v118);
    v88 = BattlePointData;
    if ( !v119->fields._IsHideBattlePointGauge_k__BackingField )
    {
LABEL_179:
      v120 = this->fields.data;
      if ( !v120 )
        sub_1C3B9C0(BattlePointData, v118);
      v88 = v119;
      if ( !v120->fields.isEnemy )
      {
        battlePointRoot = (UnityEngine_Object_o *)this->fields.battlePointRoot;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v122 = UnityEngine_Object__op_Inequality(battlePointRoot, 0LL, 0LL);
        v88 = v119;
        if ( v122 )
        {
          if ( !*(_QWORD *)v107 )
            sub_1C3B9C0(v122, v123);
          v134 = *(_DWORD *)(*(_QWORD *)v107 + 20LL);
          v127 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v134, v124, v125, v126);
          v128 = System_String__Format((System_String_o *)StringLiteral_3241/*"Buffer and BufferList properties cannot both be non-null."*/, v127, 0LL);
          v129 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3B9B0(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            v129,
            (Il2CppObject *)v93,
            Method_BattleServantParamComponent___c__DisplayClass81_0__initUpdateView_b__0__,
            0LL);
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__loadAssetStorage(v128, v129, 1, 0LL);
          break;
        }
      }
    }
  }
  v130 = *(_QWORD *)v87;
  v131 = *(unsigned __int16 *)(*(_QWORD *)v87 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v87 + 302LL) )
  {
    v132 = (int *)(*(_QWORD *)(v130 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v132 - 1) != System_IDisposable_TypeInfo )
    {
      --v131;
      v132 += 4;
      if ( !v131 )
        goto LABEL_165;
    }
    v133 = v130 + 16LL * *v132 + 312;
  }
  else
  {
LABEL_165:
    v133 = sub_1C8D744(v87, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v133)(v87, *(_QWORD *)(v133 + 8));
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
          LOBYTE(this[1].fields.skillIcon) = 1;
          BattlePerformance__clickTarget((BattlePerformance_o *)this, v3->fields.index, 0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_1C3B9C0(this, method);
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
    sub_1C3B9C0(this, method);
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

  if ( (byte_4C251EC & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_3252/*"Built-in Pipeline"*/, method);
    byte_4C251EC = 1;
  }
  data = this->fields.data;
  if ( data && data->fields.isAddition )
  {
    clsIconComponent = (UnityEngine_Component_o *)this->fields.clsIconComponent;
    if ( !clsIconComponent
      || (transform = UnityEngine_Component__get_transform(clsIconComponent, 0LL),
          clsIconComponent = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject_39665308(
                                                          (BaseMonoBehaviour_o *)this,
                                                          (System_String_o *)StringLiteral_3252/*"Built-in Pipeline"*/,
                                                          transform,
                                                          0LL,
                                                          0LL),
          (v6 = this->fields.data) == 0LL) )
    {
      sub_1C3B9C0(clsIconComponent, method);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  v2 = this;
  if ( (byte_4C251D6 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    this = (BattleServantParamComponent_o *)sub_1C3B764(&StringLiteral_19264/*"fractionDigits"*/, v3);
    byte_4C251D6 = 1;
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
    UnityEngine_Object__Destroy_71122748(v7, 0LL);
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
        this = (BattleServantParamComponent_o *)BaseMonoBehaviour__createObject_39665308(
                                                  (BaseMonoBehaviour_o *)v2,
                                                  (System_String_o *)StringLiteral_19264/*"fractionDigits"*/,
                                                  transform,
                                                  0LL,
                                                  0LL);
        if ( v9 )
        {
          if ( v9->max_length )
          {
            v9->m_Items[0] = (UnityEngine_GameObject_o *)this;
            sub_1C3B708((PartyOrganizationUtility_o *)v9->m_Items, (int64_t)this, v11, v12, v13, v14, v15, v16);
            return;
          }
LABEL_23:
          sub_1C3B9C8(this, method);
        }
      }
    }
LABEL_22:
    sub_1C3B9C0(this, method);
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

  if ( (byte_4C251C8 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C251C8 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_1C3B9C0(0LL, v4);
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

  if ( (byte_4C251C9 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C251C9 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_1C3B9C0(0LL, v4);
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

  if ( (byte_4C251C7 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C251C7 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v6 )
      sub_1C3B9C0(0LL, v4);
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

  if ( (byte_4C251E2 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C251E2 = 1;
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
        sub_1C3B9C0(0LL, v4);
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

  if ( (byte_4C251E1 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C251E1 = 1;
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
    sub_1C3B9C0(0LL, v4);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattlePerformance_o *perf; // x0
  UnityEngine_Object_o *v9; // x19
  Il2CppObject *Component_object; // x21
  float LabelPrintedWidth; // s10
  float v12; // s8
  float v13; // s9
  UnityEngine_Object_o *ComponentInChildren_object__50601408; // x23
  const MethodInfo *v15; // x2
  _DWORD *monitor; // x8
  int v17; // w22
  _DWORD *v18; // x8
  int v19; // w8
  float sideEffectLabelWidth; // s0
  float v21; // s1
  UnityEngine_Component_o *clsIconComponent; // x8
  UnityEngine_Transform_o *v23; // x20
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C251EF & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___, buffData);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___, v5);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_1/*""*/, v7);
    byte_4C251EF = 1;
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
                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
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
      ComponentInChildren_object__50601408 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_object__50601408(
                                                                       (UnityEngine_GameObject_o *)v9,
                                                                       1,
                                                                       (const MethodInfo_3041DC0 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality(ComponentInChildren_object__50601408, 0LL, 0LL);
      if ( ((unsigned __int8)perf & 1) != 0 )
      {
        if ( !ComponentInChildren_object__50601408 )
          goto LABEL_34;
        BattleServantBuffIconComponent__setImageId(
          (BattleServantBuffIconComponent_o *)ComponentInChildren_object__50601408,
          buffData->fields.popIcon,
          v15);
        monitor = ComponentInChildren_object__50601408[1].monitor;
        if ( !monitor )
          goto LABEL_34;
        v17 = monitor[42];
        perf = (BattlePerformance_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)ComponentInChildren_object__50601408,
                                        0LL);
        if ( !perf )
          goto LABEL_34;
        perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)perf, 0LL);
        if ( !perf )
          goto LABEL_34;
        v24.fields.x = -(float)((float)((float)(LabelPrintedWidth * 0.5) + (float)((float)v17 * 0.5)) + 5.0);
        v24.fields.y = 0.0;
        v24.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)perf, v24, 0LL);
        v18 = ComponentInChildren_object__50601408[1].monitor;
        if ( !v18 )
          goto LABEL_34;
        v19 = v18[42];
        if ( v12 >= 1.0 )
        {
          sideEffectLabelWidth = this->fields.sideEffectLabelWidth;
          v21 = (float)((float)((float)(LabelPrintedWidth * 0.8) + (float)((float)v19 * 0.8)) + 5.0)
              + (float)((float)(sideEffectLabelWidth - (float)(LabelPrintedWidth * 0.8)) * 0.5);
          v13 = 0.0;
          if ( v21 > sideEffectLabelWidth )
            v13 = v21 - sideEffectLabelWidth;
        }
        else
        {
          v13 = (float)(v12 * (float)((float)v19 * 0.8)) + 5.0;
        }
      }
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v9, 0, 0LL);
    perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0LL);
    clsIconComponent = (UnityEngine_Component_o *)this->fields.clsIconComponent;
    if ( clsIconComponent )
    {
      v23 = (UnityEngine_Transform_o *)perf;
      perf = (BattlePerformance_o *)UnityEngine_Component__get_transform(clsIconComponent, 0LL);
      if ( v23 )
      {
        UnityEngine_Transform__SetParent(v23, (UnityEngine_Transform_o *)perf, 0LL);
        perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0LL);
        if ( perf )
        {
          v25.fields.y = 1.0;
          v25.fields.z = 1.0;
          v25.fields.x = v12;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)perf, v25, 0LL);
          perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0LL);
          if ( perf )
          {
            v26.fields.y = 0.0;
            v26.fields.z = 0.0;
            v26.fields.x = v13;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)perf, v26, 0LL);
            BattleUIRangeLabel__AddLabelDepth((BattleUIRangeLabel_o *)Component_object, 100, 0LL);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v9, 1, 0LL);
            return;
          }
        }
      }
    }
LABEL_34:
    sub_1C3B9C0(perf, buffData);
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
  __int64 v10; // x1
  AssetData_o *AssetStorage; // x0
  __int64 v12; // x1
  Il2CppObject *Component_object; // x0
  UnityEngine_Object_o *breakSprite; // x21
  UIAtlas_o *v15; // x20
  UISprite_o *v16; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  UnityEngine_Object_o *battleServantParamSetting; // x21
  struct BattleServantParamSetting_o *v22; // x8
  struct BattleServantParamSetting_o *v23; // x8
  struct BattleServantParamSetting_o *v24; // x8
  struct BattleServantParamSetting_o *v25; // x8
  int v26; // [xsp+4h] [xbp-3Ch] BYREF
  Il2CppObject *v27; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C251DA & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetData_GetObject_GameObject____77902856, method);
    sub_1C3B764(&AssetManager_TypeInfo, v3);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v4);
    sub_1C3B764(&Method_UnityEngine_GameObject_TryGetComponent_UISprite___, v5);
    sub_1C3B764(&int_TypeInfo, v6);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_3243/*"Buffer is empty"*/, v8);
    sub_1C3B764(&StringLiteral_3261/*"Button.onClick"*/, v9);
    sub_1C3B764(&StringLiteral_20366/*"instanceId"*/, v10);
    byte_4C251DA = 1;
  }
  component = 0LL;
  v27 = 0LL;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3243/*"Buffer is empty"*/, 0LL);
  if ( !AssetStorage )
    goto LABEL_33;
  AssetStorage = (AssetData_o *)AssetData__GetObject_object__50142412(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_3261/*"Button.onClick"*/,
                                  (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !AssetStorage )
    goto LABEL_33;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)AssetStorage,
                       (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  v15 = (UIAtlas_o *)Component_object;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0LL, 0LL) )
  {
    AssetStorage = (AssetData_o *)this->fields.breakSprite;
    if ( !AssetStorage )
      goto LABEL_33;
    UISprite__set_atlas((UISprite_o *)AssetStorage, v15, 0LL);
    v16 = this->fields.breakSprite;
    v26 = 1;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v17, v18, v19);
    AssetStorage = (AssetData_o *)System_String__Concat((Il2CppObject *)StringLiteral_20366/*"instanceId"*/, v20, 0LL);
    if ( !v16 )
      goto LABEL_33;
    UISprite__set_spriteName(v16, (System_String_o *)AssetStorage, 0LL);
  }
  battleServantParamSetting = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetStorage = (AssetData_o *)UnityEngine_Object__op_Equality(battleServantParamSetting, 0LL, 0LL);
  if ( ((unsigned __int8)AssetStorage & 1) == 0 )
  {
    v22 = this->fields.battleServantParamSetting;
    if ( !v22 )
      goto LABEL_33;
    AssetStorage = (AssetData_o *)System_String__IsNullOrEmpty(v22->fields.TargetIconSpriteName, 0LL);
    if ( ((unsigned __int8)AssetStorage & 1) == 0 )
    {
      AssetStorage = (AssetData_o *)this->fields.targetMark;
      if ( !AssetStorage )
        goto LABEL_33;
      AssetStorage = (AssetData_o *)UnityEngine_GameObject__TryGetComponent_object_(
                                      (UnityEngine_GameObject_o *)AssetStorage,
                                      &component,
                                      (const MethodInfo_3042CA8 *)Method_UnityEngine_GameObject_TryGetComponent_UISprite___);
      if ( ((unsigned __int8)AssetStorage & 1) != 0 )
      {
        AssetStorage = (AssetData_o *)component;
        if ( !component )
          goto LABEL_33;
        UISprite__set_atlas((UISprite_o *)component, v15, 0LL);
        v23 = this->fields.battleServantParamSetting;
        if ( !v23 )
          goto LABEL_33;
        AssetStorage = (AssetData_o *)component;
        if ( !component )
          goto LABEL_33;
        UISprite__set_spriteName((UISprite_o *)component, v23->fields.TargetIconSpriteName, 0LL);
      }
    }
    v24 = this->fields.battleServantParamSetting;
    if ( v24 )
    {
      if ( System_String__IsNullOrEmpty(v24->fields.FixTargetIconSpriteName, 0LL) )
        return;
      AssetStorage = (AssetData_o *)this->fields.lockTargetMark;
      if ( AssetStorage )
      {
        if ( !UnityEngine_GameObject__TryGetComponent_object_(
                (UnityEngine_GameObject_o *)AssetStorage,
                &v27,
                (const MethodInfo_3042CA8 *)Method_UnityEngine_GameObject_TryGetComponent_UISprite___) )
          return;
        AssetStorage = (AssetData_o *)v27;
        if ( v27 )
        {
          UISprite__set_atlas((UISprite_o *)v27, v15, 0LL);
          v25 = this->fields.battleServantParamSetting;
          if ( v25 )
          {
            AssetStorage = (AssetData_o *)v27;
            if ( v27 )
            {
              UISprite__set_spriteName((UISprite_o *)v27, v25->fields.FixTargetIconSpriteName, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_33:
    sub_1C3B9C0(AssetStorage, v12);
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
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  UnityEngine_Component_o *Item; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t modeWindow; // w8
  Il2CppObject *Component_object; // x20
  Il2CppObject *v16; // x21
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v18; // x21
  __int64 v19; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v21; // x0
  UnityEngine_Component_c *v22; // x8
  UnityEngine_Component_o *v23; // x21
  __int64 v24; // x9
  SimpleAnimation_State_c **v25; // x10
  __int64 v26; // x0
  UnityEngine_Component_c *v27; // x8
  SimpleAnimation_State_c *v28; // x1
  UnityEngine_Component_o *v29; // x21
  __int64 v30; // x9
  SimpleAnimation_State_c **v31; // x10
  __int64 v32; // x9
  __int64 v33; // x0
  UnityEngine_Object_o *battlePointGaugeComponent; // x20
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x2
  UnityEngine_Color_o v37; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4C251CA & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v4);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    sub_1C3B764(&SimpleAnimation_State_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_13394/*"Test/card002p.png"*/, v7);
    byte_4C251CA = 1;
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
    v37.fields.r = 0.0;
    v37.fields.g = 0.0;
    v37.fields.b = 0.0;
    v37.fields.a = 0.0;
    v9 = TweenColor__Begin(gameObject, 0.4, v37, 0LL);
    this->fields.isHideFaceTexture = 1;
  }
  modeWindow = this->fields.modeWindow;
  if ( modeWindow == 3 )
    goto LABEL_58;
  if ( modeWindow == 2 )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v16 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Animation___);
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
                                          (System_String_o *)StringLiteral_13394/*"Test/card002p.png"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_59;
      klass = Item->klass;
      v18 = Item;
      v19 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v19;
          p_offset += 2;
          if ( !v19 )
            goto LABEL_19;
        }
        v21 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
      }
      else
      {
LABEL_19:
        v21 = sub_1C8D744(Item, SimpleAnimation_State_TypeInfo, 4LL);
      }
      (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v21)(v18, *(_QWORD *)(v21 + 8), 0.0);
      Item = (UnityEngine_Component_o *)SimpleAnimation__get_Item(
                                          (SimpleAnimation_o *)Component_object,
                                          (System_String_o *)StringLiteral_13394/*"Test/card002p.png"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_59;
      v27 = Item->klass;
      v28 = SimpleAnimation_State_TypeInfo;
      v29 = Item;
      v30 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        v31 = (SimpleAnimation_State_c **)&v27->_1.interfaceOffsets->offset;
        while ( *(v31 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v30;
          v31 += 2;
          if ( !v30 )
            goto LABEL_50;
        }
LABEL_51:
        v33 = (__int64)(&v27[1]._1.castClass + 2 * *(_DWORD *)v31);
        goto LABEL_52;
      }
      goto LABEL_50;
    }
  }
  else
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v16 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Animation___);
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
                                          (System_String_o *)StringLiteral_13394/*"Test/card002p.png"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_59;
      v22 = Item->klass;
      v23 = Item;
      v24 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        v25 = (SimpleAnimation_State_c **)&v22->_1.interfaceOffsets->offset;
        while ( *(v25 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v24;
          v25 += 2;
          if ( !v24 )
            goto LABEL_29;
        }
        v26 = (__int64)(&v22[1]._1.gc_desc + 2 * *(_DWORD *)v25);
      }
      else
      {
LABEL_29:
        v26 = sub_1C8D744(Item, SimpleAnimation_State_TypeInfo, 4LL);
      }
      (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v26)(v23, *(_QWORD *)(v26 + 8), 0.0);
      Item = (UnityEngine_Component_o *)SimpleAnimation__get_Item(
                                          (SimpleAnimation_o *)Component_object,
                                          (System_String_o *)StringLiteral_13394/*"Test/card002p.png"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_59;
      v27 = Item->klass;
      v28 = SimpleAnimation_State_TypeInfo;
      v29 = Item;
      v32 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        v31 = (SimpleAnimation_State_c **)&v27->_1.interfaceOffsets->offset;
        while ( *(v31 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v32;
          v31 += 2;
          if ( !v32 )
            goto LABEL_50;
        }
        goto LABEL_51;
      }
LABEL_50:
      v33 = sub_1C8D744(v29, v28, 8LL);
LABEL_52:
      (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v33)(v29, *(_QWORD *)(v33 + 8), 1.0);
      SimpleAnimation__Play_65506988((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13394/*"Test/card002p.png"*/, 0LL);
      goto LABEL_53;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Item = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    if ( !v16 )
      goto LABEL_59;
    Item = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(
                                        (UnityEngine_Animation_o *)v16,
                                        (System_String_o *)StringLiteral_13394/*"Test/card002p.png"*/,
                                        0LL);
    if ( !Item )
      goto LABEL_59;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
    Item = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(
                                        (UnityEngine_Animation_o *)v16,
                                        (System_String_o *)StringLiteral_13394/*"Test/card002p.png"*/,
                                        0LL);
    if ( !Item )
      goto LABEL_59;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 1.0, 0LL);
    UnityEngine_Animation__Play_70867156((UnityEngine_Animation_o *)v16, (System_String_o *)StringLiteral_13394/*"Test/card002p.png"*/, 0LL);
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
      BattlePointGaugeComponent__StartClose((BattlePointGaugeComponent_o *)Item, 0, v35);
      goto LABEL_58;
    }
LABEL_59:
    sub_1C3B9C0(Item, v10);
  }
LABEL_58:
  BattleServantParamComponent__EffectStartStop(
    (BattleServantParamComponent_o *)v9,
    this->fields.commandSpellEffectDict,
    0,
    v11);
  this->fields.modeWindow = 3;
  BattleServantParamComponent__setTouch(this, 0, v36);
}


void __fastcall BattleServantParamComponent__setData(
        BattleServantParamComponent_o *this,
        BattleServantData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *clsIconComponent; // x21
  ServantClassIconComponent_o *v14; // x22
  BattleServantParamComponent_ClassIconData_o *v15; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  BattleNpGaugeSystemComponent_o *v22; // x0
  __int64 v23; // x1
  struct BattleServantData_o *v24; // x8
  int32_t AppearanceId; // w21
  int32_t DispLimitCount; // w0
  _BOOL4 isForceAppearance; // w22
  int32_t v28; // w20
  struct BattleServantParamSetting_o *Manager__LoadBattleServantParamSetting; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  const MethodInfo *v36; // x2
  UnityEngine_Object_o *npcomp; // x20
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x3

  if ( (byte_4C251C5 & 1) == 0 )
  {
    sub_1C3B764(&BattleServantParamComponent_BaseClassIconData_TypeInfo, data);
    sub_1C3B764(&BattleServantParamComponent_ClassIconData_TypeInfo, v10);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v11);
    sub_1C3B764(&ServantAssetLoadManager_TypeInfo, v12);
    byte_4C251C5 = 1;
  }
  this->fields.modeWindow = 1;
  this->fields.data = data;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.data, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  if ( !data )
    goto LABEL_8;
  clsIconComponent = (UnityEngine_Object_o *)this->fields.clsIconComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(clsIconComponent, 0LL, 0LL) )
  {
    v14 = this->fields.clsIconComponent;
    v15 = (BattleServantParamComponent_ClassIconData_o *)sub_1C3B9B0(BattleServantParamComponent_ClassIconData_TypeInfo);
    BattleServantParamComponent_ClassIconData___ctor(v15, data, v14, 0LL);
  }
  else
  {
LABEL_8:
    v15 = (BattleServantParamComponent_ClassIconData_o *)sub_1C3B9B0(BattleServantParamComponent_BaseClassIconData_TypeInfo);
    BattleServantParamComponent_BaseClassIconData___ctor((BattleServantParamComponent_BaseClassIconData_o *)v15, 0LL);
  }
  this->fields.classIconData = (struct BattleServantParamComponent_BaseClassIconData_o *)v15;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.classIconData, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  v24 = this->fields.data;
  if ( !v24 )
  {
    npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL) )
    {
      v22 = this->fields.npcomp;
      if ( !v22 )
LABEL_21:
        sub_1C3B9C0(v22, v23);
      BattleNpGaugeSystemComponent__resetSlider(v22, 0LL);
    }
    this->fields.uniqueID = -1;
    goto LABEL_20;
  }
  this->fields.uniqueID = v24->fields.uniqueId;
  if ( !data )
    goto LABEL_21;
  AppearanceId = BattleServantData__getAppearanceId(data, 0LL);
  DispLimitCount = BattleServantData__getDispLimitCount(data, 1, 0LL);
  isForceAppearance = data->fields.isForceAppearance;
  v28 = DispLimitCount;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__LoadBattleServantParamSetting = ServantAssetLoadManager__LoadBattleServantParamSetting(
                                             AppearanceId,
                                             v28,
                                             isForceAppearance,
                                             0LL);
  this->fields.battleServantParamSetting = Manager__LoadBattleServantParamSetting;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.battleServantParamSetting,
    (int64_t)Manager__LoadBattleServantParamSetting,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
LABEL_20:
  BattleServantParamComponent__initUpdateView(this, 0, v36);
  BattleServantParamComponent__updateView(this, v38);
  BattleServantParamComponent__UpdateSkillRankUpEffect(this, v39);
  BattleServantParamComponent__setTargetMark(this, -1, 0, v40);
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
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3
  __int64 gameObject; // x0
  UnityEngine_GameObject_o *v15; // x21
  float v16; // s0
  int32_t modeWindow; // w8
  Il2CppObject *Component_object; // x21
  Il2CppObject *v19; // x22
  SimpleAnimation_State_o *Item; // x22
  __int64 v21; // x8
  __int64 v22; // x23
  __int64 v23; // x9
  SimpleAnimation_State_c **v24; // x10
  __int64 v25; // x0
  SimpleAnimation_State_o *v26; // x22
  __int64 v27; // x8
  __int64 v28; // x23
  __int64 v29; // x9
  SimpleAnimation_State_c **v30; // x10
  __int64 v31; // x0
  UnityEngine_AnimationState_o *v32; // x21
  float length; // s0
  long double v34; // q0
  SimpleAnimation_State_c *klass; // x8
  long double v36; // q8
  __int64 v37; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  long double v40; // q0
  SimpleAnimation_State_c *v41; // x8
  long double v42; // q8
  __int64 v43; // x9
  SimpleAnimation_State_c **v44; // x10
  __int64 v45; // x0
  __int64 v46; // x8
  SimpleAnimation_State_c *v47; // x1
  __int64 v48; // x22
  __int64 v49; // x9
  SimpleAnimation_State_c **v50; // x10
  __int64 v51; // x9
  __int64 v52; // x0
  UnityEngine_Object_o *battlePointGaugeComponent; // x21
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x1
  UnityEngine_Color_o v56; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4C251CB & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Animation___, isPlayCommandSpellEffectStartAnim);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v5);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    sub_1C3B764(&SimpleAnimation_State_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_13394/*"Test/card002p.png"*/, v8);
    byte_4C251CB = 1;
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
    v15 = (UnityEngine_GameObject_o *)gameObject;
    gameObject = (__int64)BattlePerformance__get_MotionSkip(this->fields.perf, 0LL);
    if ( !gameObject )
      goto LABEL_78;
    v16 = (*(float (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 488LL))(
            gameObject,
            *(_QWORD *)(*(_QWORD *)gameObject + 496LL),
            0.4);
    v56.fields.r = 1.0;
    v56.fields.g = 1.0;
    v56.fields.b = 1.0;
    v56.fields.a = 1.0;
    v10 = TweenColor__Begin(v15, v16, v56, 0LL);
    this->fields.isHideFaceTexture = 0;
  }
  modeWindow = this->fields.modeWindow;
  if ( modeWindow == 2 )
    goto LABEL_75;
  if ( modeWindow == 1 )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v19 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( (gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_78;
      Item = SimpleAnimation__get_Item(
               (SimpleAnimation_o *)Component_object,
               (System_String_o *)StringLiteral_13394/*"Test/card002p.png"*/,
               0LL);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13394/*"Test/card002p.png"*/,
                              0LL);
      if ( !gameObject )
        goto LABEL_78;
      v21 = *(_QWORD *)gameObject;
      v22 = gameObject;
      v23 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v24 = (SimpleAnimation_State_c **)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *(v24 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v23;
          v24 += 2;
          if ( !v23 )
            goto LABEL_21;
        }
        v25 = v21 + 16LL * (*(_DWORD *)v24 + 13) + 312;
      }
      else
      {
LABEL_21:
        v25 = sub_1C8D744(gameObject, SimpleAnimation_State_TypeInfo, 13LL);
      }
      gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
      if ( !Item )
        goto LABEL_78;
      klass = Item->klass;
      v36 = v34;
      v37 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v37;
          p_offset += 2;
          if ( !v37 )
            goto LABEL_46;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
      }
      else
      {
LABEL_46:
        p_method = sub_1C8D744(Item, SimpleAnimation_State_TypeInfo, 4LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))p_method)(
        Item,
        *(_QWORD *)(p_method + 8),
        v36);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13394/*"Test/card002p.png"*/,
                              0LL);
      if ( !gameObject )
        goto LABEL_78;
      v46 = *(_QWORD *)gameObject;
      v47 = SimpleAnimation_State_TypeInfo;
      v48 = gameObject;
      v49 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v50 = (SimpleAnimation_State_c **)(*(_QWORD *)(v46 + 176) + 8LL);
        while ( *(v50 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v49;
          v50 += 2;
          if ( !v49 )
            goto LABEL_67;
        }
LABEL_68:
        v52 = v46 + 16LL * (*(_DWORD *)v50 + 8) + 312;
        goto LABEL_69;
      }
      goto LABEL_67;
    }
  }
  else
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v19 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( (gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_78;
      v26 = SimpleAnimation__get_Item(
              (SimpleAnimation_o *)Component_object,
              (System_String_o *)StringLiteral_13394/*"Test/card002p.png"*/,
              0LL);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13394/*"Test/card002p.png"*/,
                              0LL);
      if ( !gameObject )
        goto LABEL_78;
      v27 = *(_QWORD *)gameObject;
      v28 = gameObject;
      v29 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v30 = (SimpleAnimation_State_c **)(*(_QWORD *)(v27 + 176) + 8LL);
        while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v29;
          v30 += 2;
          if ( !v29 )
            goto LABEL_31;
        }
        v31 = v27 + 16LL * (*(_DWORD *)v30 + 13) + 312;
      }
      else
      {
LABEL_31:
        v31 = sub_1C8D744(gameObject, SimpleAnimation_State_TypeInfo, 13LL);
      }
      gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
      if ( !v26 )
        goto LABEL_78;
      v41 = v26->klass;
      v42 = v40;
      v43 = *(unsigned __int16 *)(&v26->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v26->klass->_2.bitflags2 + 3) )
      {
        v44 = (SimpleAnimation_State_c **)&v41->_1.interfaceOffsets->offset;
        while ( *(v44 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v43;
          v44 += 2;
          if ( !v43 )
            goto LABEL_53;
        }
        v45 = (__int64)&v41->vtable[*(_DWORD *)v44 + 4].method;
      }
      else
      {
LABEL_53:
        v45 = sub_1C8D744(v26, SimpleAnimation_State_TypeInfo, 4LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))v45)(v26, *(_QWORD *)(v45 + 8), v42);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13394/*"Test/card002p.png"*/,
                              0LL);
      if ( !gameObject )
        goto LABEL_78;
      v46 = *(_QWORD *)gameObject;
      v47 = SimpleAnimation_State_TypeInfo;
      v48 = gameObject;
      v51 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v50 = (SimpleAnimation_State_c **)(*(_QWORD *)(v46 + 176) + 8LL);
        while ( *(v50 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v51;
          v50 += 2;
          if ( !v51 )
            goto LABEL_67;
        }
        goto LABEL_68;
      }
LABEL_67:
      v52 = sub_1C8D744(v48, v47, 8LL);
LABEL_69:
      (*(void (__fastcall **)(__int64, _QWORD, float))v52)(v48, *(_QWORD *)(v52 + 8), -1.0);
      SimpleAnimation__Play_65506988((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13394/*"Test/card002p.png"*/, 0LL);
      goto LABEL_70;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    if ( !v19 )
      goto LABEL_78;
    v32 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v19, (System_String_o *)StringLiteral_13394/*"Test/card002p.png"*/, 0LL);
    gameObject = (__int64)UnityEngine_Animation__get_Item(
                            (UnityEngine_Animation_o *)v19,
                            (System_String_o *)StringLiteral_13394/*"Test/card002p.png"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_78;
    length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)gameObject, 0LL);
    if ( !v32 )
      goto LABEL_78;
    UnityEngine_AnimationState__set_time(v32, length, 0LL);
    gameObject = (__int64)UnityEngine_Animation__get_Item(
                            (UnityEngine_Animation_o *)v19,
                            (System_String_o *)StringLiteral_13394/*"Test/card002p.png"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_78;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, -1.0, 0LL);
    UnityEngine_Animation__Play_70867156((UnityEngine_Animation_o *)v19, (System_String_o *)StringLiteral_13394/*"Test/card002p.png"*/, 0LL);
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
      BattlePointGaugeComponent__StartOpen((BattlePointGaugeComponent_o *)gameObject, v11);
      goto LABEL_75;
    }
LABEL_78:
    sub_1C3B9C0(gameObject, v11);
  }
LABEL_75:
  if ( isPlayCommandSpellEffectStartAnim )
    BattleServantParamComponent__EffectStartStop(
      (BattleServantParamComponent_o *)v10,
      this->fields.commandSpellEffectDict,
      1,
      v13);
  this->fields.modeWindow = 2;
  BattleServantParamComponent__setTouch(this, 1, v12);
  BattleServantParamComponent__updateSkillIcon(this, 0, v54);
  BattleServantParamComponent__RemoveEffectClearRankUpBuff(this, v55);
}


void __fastcall BattleServantParamComponent__setPerf(
        BattleServantParamComponent_o *this,
        BattlePerformance_o *inperf,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.perf = inperf;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.perf, (int64_t)inperf, (int64_t)method, v3, v4, v5, v6, v7);
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

  if ( (byte_4C251D5 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&StringLiteral_19403/*"getDrawingRect"*/, v3);
    sub_1C3B764(&StringLiteral_23607/*"time_status_icon_story"*/, v4);
    byte_4C251D5 = 1;
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
        v10 = &StringLiteral_19403/*"getDrawingRect"*/;
        goto LABEL_17;
      }
      if ( !transform )
        goto LABEL_27;
      if ( roleType == 3 )
      {
        v10 = &StringLiteral_23607/*"time_status_icon_story"*/;
LABEL_17:
        UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)*v10, 0LL);
        transform = (__int64)this->fields.roleTypeSprite;
        if ( transform )
        {
          transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
          v11 = (UnityEngine_Transform_o *)transform;
          if ( !byte_4C1C511 )
          {
            transform = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v7);
            byte_4C1C511 = 1;
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
    sub_1C3B9C0(transform, v7);
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
  __int64 v5; // x21
  bool v6; // w20
  int max_length; // w9

  skillIcon = this->fields.skillIcon;
  if ( !skillIcon )
LABEL_7:
    sub_1C3B9C0(this, flg);
  v4 = this;
  v5 = 0LL;
  v6 = flg;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C3B9C8(this, flg);
    this = (BattleServantParamComponent_o *)skillIcon->m_Items[v5];
    if ( this )
    {
      BattleServantSkillIConComponent__setflashFlg((BattleServantSkillIConComponent_o *)this, v6, 0LL);
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
  UnityEngine_Object_o *targetMark; // x21
  UnityEngine_Object_o *lockTargetMark; // x21
  __int64 v10; // x1
  void *data; // x0
  int v12; // w26
  unsigned int localPosition; // s9
  unsigned int v14; // s8
  UIWidget_o *v15; // x21
  UIWidget_o *v16; // x22
  UnityEngine_Object_o *battleServantParamSetting; // x24
  struct BattleServantParamSetting_o *v18; // x8
  struct BattleServantParamSetting_o *v19; // x8
  struct BattleServantParamSetting_o *v20; // x8
  struct BattleServantParamSetting_o *v21; // x8
  struct BattleServantParamSetting_o *v22; // x8
  struct BattleServantParamSetting_o *v23; // x8
  struct BattleServantParamSetting_o *v24; // x8
  struct BattleServantParamSetting_o *v25; // x8
  struct BattleServantParamSetting_o *v26; // x8
  UnityEngine_Object_o *v27; // x20
  struct BattleServantParamSetting_o *v28; // x8
  struct BattleServantParamSetting_o *v29; // x8
  struct BattleServantParamSetting_o *v30; // x8
  struct BattleServantParamSetting_o *v31; // x8
  struct BattleServantParamSetting_o *v32; // x8
  struct BattleServantParamSetting_o *v33; // x8
  struct BattleServantParamSetting_o *v34; // x8
  UnityEngine_Object_o *v35; // x21
  UnityEngine_Object_o *v36; // x21
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v38; // x8
  _BOOL4 v39; // w20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C251E0 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UISprite___, *(_QWORD *)&uniqueId);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    byte_4C251E0 = 1;
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
          goto LABEL_91;
        v12 = *((_DWORD *)data + 6);
        if ( *((_BYTE *)data + 481) || BattleServantData__get_IsSuperBossUi((BattleServantData_o *)data, 0LL) )
        {
          data = this->fields.targetMark;
          if ( !data )
            goto LABEL_91;
          data = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)data, 0LL);
          if ( !data )
            goto LABEL_91;
          localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)data, 0LL);
        }
        else
        {
          localPosition = -1034158080;
        }
        data = this->fields.data;
        if ( !data )
          goto LABEL_91;
        if ( *((_BYTE *)data + 481) || BattleServantData__get_IsSuperBossUi((BattleServantData_o *)data, 0LL) )
        {
          data = this->fields.lockTargetMark;
          if ( !data )
            goto LABEL_91;
          data = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)data, 0LL);
          if ( !data )
            goto LABEL_91;
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
                   (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( this->fields.targetMark )
          {
            v15 = (UIWidget_o *)data;
            data = UnityEngine_GameObject__get_transform(this->fields.targetMark, 0LL);
            if ( data )
            {
              v41.fields.y = 22.0;
              v41.fields.z = 0.0;
              LODWORD(v41.fields.x) = localPosition;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)data, v41, 0LL);
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
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                  if ( this->fields.lockTargetMark )
                  {
                    v16 = (UIWidget_o *)data;
                    data = UnityEngine_GameObject__get_transform(this->fields.lockTargetMark, 0LL);
                    if ( data )
                    {
                      v42.fields.y = 22.0;
                      v42.fields.z = 0.0;
                      LODWORD(v42.fields.x) = v14;
                      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)data, v42, 0LL);
                      if ( v16 )
                      {
                        UIWidget__set_depth(v16, -30, 0LL);
                        UIWidget__set_width(v16, 74, 0LL);
                        UIWidget__set_height(v16, 74, 0LL);
                        v44.fields.r = 1.0;
                        v44.fields.g = 1.0;
                        v44.fields.b = 1.0;
                        v44.fields.a = 1.0;
                        UIWidget__set_color(v16, v44, 0LL);
                        battleServantParamSetting = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        data = (void *)UnityEngine_Object__op_Inequality(battleServantParamSetting, 0LL, 0LL);
                        if ( ((unsigned __int8)data & 1) != 0 )
                        {
                          v18 = this->fields.battleServantParamSetting;
                          if ( !v18 )
                            goto LABEL_91;
                          ComponentHelper__SetLocalPosition(
                            (UnityEngine_Component_o *)v15,
                            v18->fields.TargetIconPosition,
                            0LL);
                          v19 = this->fields.battleServantParamSetting;
                          if ( !v19 )
                            goto LABEL_91;
                          UIWidget__set_width(v15, v19->fields.TargetIconWidth, 0LL);
                          v20 = this->fields.battleServantParamSetting;
                          if ( !v20 )
                            goto LABEL_91;
                          UIWidget__set_height(v15, v20->fields.TargetIconHeight, 0LL);
                          v21 = this->fields.battleServantParamSetting;
                          if ( !v21 )
                            goto LABEL_91;
                          UIWidget__set_depth(v15, v21->fields.TargetIconDepth, 0LL);
                          v22 = this->fields.battleServantParamSetting;
                          if ( !v22 )
                            goto LABEL_91;
                          ComponentHelper__SetLocalPosition(
                            (UnityEngine_Component_o *)v16,
                            v22->fields.FixTargetIconPosition,
                            0LL);
                          v23 = this->fields.battleServantParamSetting;
                          if ( !v23 )
                            goto LABEL_91;
                          UIWidget__set_width(v16, v23->fields.FixTargetIconWidth, 0LL);
                          v24 = this->fields.battleServantParamSetting;
                          if ( !v24 )
                            goto LABEL_91;
                          UIWidget__set_height(v16, v24->fields.FixTargetIconHeight, 0LL);
                          v25 = this->fields.battleServantParamSetting;
                          if ( !v25 )
                            goto LABEL_91;
                          UIWidget__set_depth(v16, v25->fields.FixTargetIconDepth, 0LL);
                          v26 = this->fields.battleServantParamSetting;
                          if ( !v26 )
                            goto LABEL_91;
                          UIWidget__set_color(v16, v26->fields.FixTargetIconColor, 0LL);
                        }
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
                                        goto LABEL_91;
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
                                              v43.fields.y = 22.0;
                                              v43.fields.z = 0.0;
                                              LODWORD(v43.fields.x) = v14;
                                              UnityEngine_Transform__set_localPosition(
                                                (UnityEngine_Transform_o *)data,
                                                v43,
                                                0LL);
                                              UIWidget__set_depth(v16, -30, 0LL);
                                              UIWidget__set_width(v16, 78, 0LL);
                                              UIWidget__set_height(v16, 78, 0LL);
                                              v45.fields.r = 1.0;
                                              v45.fields.g = 0.0;
                                              v45.fields.b = 0.0;
                                              v45.fields.a = 1.0;
                                              UIWidget__set_color(v16, v45, 0LL);
                                              v27 = (UnityEngine_Object_o *)this->fields.battleServantParamSetting;
                                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                              data = (void *)UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
                                              if ( ((unsigned __int8)data & 1) == 0 )
                                                return;
                                              v28 = this->fields.battleServantParamSetting;
                                              if ( v28 )
                                              {
                                                UIWidget__set_width(v15, v28->fields.TargetIconWidthWhenFix, 0LL);
                                                v29 = this->fields.battleServantParamSetting;
                                                if ( v29 )
                                                {
                                                  UIWidget__set_height(v15, v29->fields.TargetIconHeightWhenFix, 0LL);
                                                  v30 = this->fields.battleServantParamSetting;
                                                  if ( v30 )
                                                  {
                                                    UIWidget__set_depth(v15, v30->fields.TargetIconDepthWhenFix, 0LL);
                                                    v31 = this->fields.battleServantParamSetting;
                                                    if ( v31 )
                                                    {
                                                      UIWidget__set_width(
                                                        v16,
                                                        v31->fields.FixTargetIconWidthWhenTarget,
                                                        0LL);
                                                      v32 = this->fields.battleServantParamSetting;
                                                      if ( v32 )
                                                      {
                                                        UIWidget__set_height(
                                                          v16,
                                                          v32->fields.FixTargetIconHeightWhenTarget,
                                                          0LL);
                                                        v33 = this->fields.battleServantParamSetting;
                                                        if ( v33 )
                                                        {
                                                          UIWidget__set_depth(
                                                            v16,
                                                            v33->fields.FixTargetIconDepthWhenTarget,
                                                            0LL);
                                                          v34 = this->fields.battleServantParamSetting;
                                                          if ( v34 )
                                                          {
                                                            UIWidget__set_color(
                                                              v16,
                                                              v34->fields.FixTargetIconColorWhenTarget,
                                                              0LL);
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
                                  }
                                }
                              }
                            }
                          }
                        }
                        else
                        {
                          v35 = (UnityEngine_Object_o *)this->fields.targetMark;
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
                          {
                            data = this->fields.targetMark;
                            if ( !data )
                              goto LABEL_91;
                            data = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)data, 0LL);
                            if ( !data )
                              goto LABEL_91;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, v12 == uniqueId, 0LL);
                          }
                          v36 = (UnityEngine_Object_o *)this->fields.lockTargetMark;
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          data = (void *)UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
                          if ( ((unsigned __int8)data & 1) != 0 )
                          {
                            data = this->fields.lockTargetMark;
                            if ( !data )
                              goto LABEL_91;
                            data = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)data, 0LL);
                            if ( !data )
                              goto LABEL_91;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
                          }
                          perf = this->fields.perf;
                          if ( perf )
                          {
                            v38 = perf->fields.data;
                            if ( v38 )
                            {
                              if ( !v38->fields.isMultiTargetBattle )
                                return;
                              v39 = uniqueId == -1 || v12 == uniqueId;
                              transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
                              CommonFunction__SetColorAllChild(transform, v39, this->fields.GRAY, 0LL);
                              this->fields.isActiveHpBar = v39;
                              if ( !v39 )
                                return;
                              data = this->fields.showBuffComponent;
                              if ( data )
                              {
                                BattleServantShowBuffComponent__UpdateActiveBuffList(
                                  (BattleServantShowBuffComponent_o *)data,
                                  0LL);
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
LABEL_91:
        sub_1C3B9C0(data, v10);
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

  if ( (byte_4C251CD & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Collider___, flg);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    byte_4C251CD = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !flg || (data = this->fields.data) != 0LL && BattleServantData__isAlive(data, 0, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( v8 )
    {
      if ( !Component_object )
        sub_1C3B9C0(v8, v9);
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

  if ( (byte_4C251CC & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Collider___, flg);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    byte_4C251CC = 1;
  }
  root = this->fields.root;
  if ( !root )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(root, flg, 0LL);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    sub_1C3B9C0(root, flg);
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
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Object_array *v38; // x20
  __int64 v39; // x0
  int64_t v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x22
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x21
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  int64_t v94; // x21
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 v103; // x4
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  int64_t v110; // x21
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  System_Collections_Hashtable_o *v123; // x0
  __int64 v124; // x0
  char v125[4]; // [xsp+0h] [xbp-40h] BYREF
  int v126; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t NowHp; // [xsp+8h] [xbp-38h] BYREF
  int v128; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4C251EB & 1) == 0 )
  {
    sub_1C3B764(&Method_BattleServantParamComponent_shiftUpdateStatus__, method);
    sub_1C3B764(&bool_TypeInfo, v3);
    sub_1C3B764(&int_TypeInfo, v4);
    sub_1C3B764(&object___TypeInfo, v5);
    sub_1C3B764(&float_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_20040/*"img_parameter_D"*/, v7);
    sub_1C3B764(&StringLiteral_20630/*"jump"*/, v8);
    sub_1C3B764(&StringLiteral_24427/*"x-cp20936"*/, v9);
    sub_1C3B764(&StringLiteral_24816/*"¤"*/, v10);
    sub_1C3B764(&StringLiteral_22739/*"seagreen"*/, v11);
    sub_1C3B764(&StringLiteral_24469/*"x/("*/, v12);
    sub_1C3B764(&StringLiteral_4736/*"Could not load the specified file."*/, v13);
    sub_1C3B764(&StringLiteral_22731/*"se-NO"*/, v14);
    this = (BattleServantParamComponent_o *)sub_1C3B764(&iTween_TypeInfo, v15);
    byte_4C251EB = 1;
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
          v27 = (_QWORD *)sub_1C3B77C(Method_BattleServantParamComponent_shiftUpdateStatus__);
        v28 = (System_Reflection_MethodBase_o *)sub_1C3B748(v27, v27[4]);
        if ( isSkillShift )
        {
          OverwriteAssetSoundName__PlayCommonSe(v28, 24, 0, 0LL);
          return;
        }
        OverwriteAssetSoundName__PlayCommonSe(v28, 16, 0, 0LL);
        this = (BattleServantParamComponent_o *)v2->fields.data;
        if ( this )
        {
          MaxHp = BattleServantData__getMaxHp((BattleServantData_o *)this, 0LL);
          BattleServantParamComponent__updateHplabel(v2, 0, MaxHp, 1, v30);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
          this = (BattleServantParamComponent_o *)sub_1C3B80C(object___TypeInfo, 12LL);
          if ( this )
          {
            v38 = (System_Object_array *)this;
            v39 = StringLiteral_20040/*"img_parameter_D"*/;
            if ( StringLiteral_20040/*"img_parameter_D"*/ )
            {
              v39 = sub_1C3B8A0(StringLiteral_20040/*"img_parameter_D"*/, v38->obj.klass->_1.element_class);
              if ( !v39 )
                goto LABEL_81;
              v40 = StringLiteral_20040/*"img_parameter_D"*/;
            }
            else
            {
              v40 = 0LL;
            }
            if ( !v38->max_length )
              goto LABEL_80;
            v38->m_Items[0] = (Il2CppObject *)v40;
            sub_1C3B708((PartyOrganizationUtility_o *)v38->m_Items, v40, v32, v33, v34, v35, v36, v37);
            v128 = 0;
            v39 = j_il2cpp_value_box_0(int_TypeInfo, &v128, v41, v42, v43);
            v50 = v39;
            if ( v39 )
            {
              v39 = sub_1C3B8A0(v39, v38->obj.klass->_1.element_class);
              if ( !v39 )
                goto LABEL_81;
            }
            if ( v38->max_length <= 1 )
              goto LABEL_80;
            v38->m_Items[1] = (Il2CppObject *)v50;
            sub_1C3B708((PartyOrganizationUtility_o *)&v38->m_Items[1], v50, v44, v45, v46, v47, v48, v49);
            v39 = StringLiteral_24469/*"x/("*/;
            if ( StringLiteral_24469/*"x/("*/ )
            {
              v39 = sub_1C3B8A0(StringLiteral_24469/*"x/("*/, v38->obj.klass->_1.element_class);
              if ( !v39 )
                goto LABEL_81;
              v40 = StringLiteral_24469/*"x/("*/;
            }
            else
            {
              v40 = 0LL;
            }
            if ( v38->max_length <= 2 )
              goto LABEL_80;
            v38->m_Items[2] = (Il2CppObject *)v40;
            sub_1C3B708((PartyOrganizationUtility_o *)&v38->m_Items[2], v40, v51, v52, v53, v54, v55, v56);
            this = (BattleServantParamComponent_o *)v2->fields.data;
            if ( this )
            {
              NowHp = BattleServantData__getNowHp((BattleServantData_o *)this, 0LL);
              v39 = j_il2cpp_value_box_0(int_TypeInfo, &NowHp, v57, v58, v59);
              v66 = v39;
              if ( !v39 || (v39 = sub_1C3B8A0(v39, v38->obj.klass->_1.element_class)) != 0 )
              {
                if ( v38->max_length <= 3 )
                  goto LABEL_80;
                v38->m_Items[3] = (Il2CppObject *)v66;
                sub_1C3B708((PartyOrganizationUtility_o *)&v38->m_Items[3], v66, v60, v61, v62, v63, v64, v65);
                v39 = StringLiteral_22739/*"seagreen"*/;
                if ( StringLiteral_22739/*"seagreen"*/ )
                {
                  v39 = sub_1C3B8A0(StringLiteral_22739/*"seagreen"*/, v38->obj.klass->_1.element_class);
                  if ( !v39 )
                    goto LABEL_81;
                  v40 = StringLiteral_22739/*"seagreen"*/;
                }
                else
                {
                  v40 = 0LL;
                }
                if ( v38->max_length <= 4 )
                  goto LABEL_80;
                v38->m_Items[4] = (Il2CppObject *)v40;
                sub_1C3B708((PartyOrganizationUtility_o *)&v38->m_Items[4], v40, v67, v68, v69, v70, v71, v72);
                v39 = StringLiteral_24816/*"¤"*/;
                if ( StringLiteral_24816/*"¤"*/ )
                {
                  v39 = sub_1C3B8A0(StringLiteral_24816/*"¤"*/, v38->obj.klass->_1.element_class);
                  if ( !v39 )
                    goto LABEL_81;
                  v40 = StringLiteral_24816/*"¤"*/;
                }
                else
                {
                  v40 = 0LL;
                }
                if ( v38->max_length <= 5 )
                  goto LABEL_80;
                v38->m_Items[5] = (Il2CppObject *)v40;
                sub_1C3B708((PartyOrganizationUtility_o *)&v38->m_Items[5], v40, v73, v74, v75, v76, v77, v78);
                v39 = StringLiteral_24427/*"x-cp20936"*/;
                if ( StringLiteral_24427/*"x-cp20936"*/ )
                {
                  v39 = sub_1C3B8A0(StringLiteral_24427/*"x-cp20936"*/, v38->obj.klass->_1.element_class);
                  if ( !v39 )
                    goto LABEL_81;
                  v40 = StringLiteral_24427/*"x-cp20936"*/;
                }
                else
                {
                  v40 = 0LL;
                }
                if ( v38->max_length <= 6 )
                  goto LABEL_80;
                v38->m_Items[6] = (Il2CppObject *)v40;
                sub_1C3B708((PartyOrganizationUtility_o *)&v38->m_Items[6], v40, v79, v80, v81, v82, v83, v84);
                v126 = 1069547520;
                v39 = j_il2cpp_value_box_0(float_TypeInfo, &v126, v85, v86, v87);
                v94 = v39;
                if ( !v39 || (v39 = sub_1C3B8A0(v39, v38->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v38->max_length <= 7 )
                    goto LABEL_80;
                  v38->m_Items[7] = (Il2CppObject *)v94;
                  sub_1C3B708((PartyOrganizationUtility_o *)&v38->m_Items[7], v94, v88, v89, v90, v91, v92, v93);
                  v39 = StringLiteral_20630/*"jump"*/;
                  if ( StringLiteral_20630/*"jump"*/ )
                  {
                    v39 = sub_1C3B8A0(StringLiteral_20630/*"jump"*/, v38->obj.klass->_1.element_class);
                    if ( !v39 )
                      goto LABEL_81;
                    v40 = StringLiteral_20630/*"jump"*/;
                  }
                  else
                  {
                    v40 = 0LL;
                  }
                  if ( v38->max_length <= 8 )
                    goto LABEL_80;
                  v38->m_Items[8] = (Il2CppObject *)v40;
                  sub_1C3B708((PartyOrganizationUtility_o *)&v38->m_Items[8], v40, v95, v96, v97, v98, v99, v100);
                  v125[0] = 1;
                  v39 = j_il2cpp_value_box_0(bool_TypeInfo, v125, v101, v102, v103);
                  v110 = v39;
                  if ( !v39 || (v39 = sub_1C3B8A0(v39, v38->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v38->max_length <= 9 )
                      goto LABEL_80;
                    v38->m_Items[9] = (Il2CppObject *)v110;
                    sub_1C3B708(
                      (PartyOrganizationUtility_o *)&v38->m_Items[9],
                      v110,
                      v104,
                      v105,
                      v106,
                      v107,
                      v108,
                      v109);
                    v39 = StringLiteral_22731/*"se-NO"*/;
                    if ( StringLiteral_22731/*"se-NO"*/ )
                    {
                      v39 = sub_1C3B8A0(StringLiteral_22731/*"se-NO"*/, v38->obj.klass->_1.element_class);
                      if ( !v39 )
                        goto LABEL_81;
                      v40 = StringLiteral_22731/*"se-NO"*/;
                    }
                    else
                    {
                      v40 = 0LL;
                    }
                    if ( v38->max_length <= 0xA )
                      goto LABEL_80;
                    v38->m_Items[10] = (Il2CppObject *)v40;
                    sub_1C3B708(
                      (PartyOrganizationUtility_o *)&v38->m_Items[10],
                      v40,
                      v111,
                      v112,
                      v113,
                      v114,
                      v115,
                      v116);
                    v39 = StringLiteral_4736/*"Could not load the specified file."*/;
                    if ( !StringLiteral_4736/*"Could not load the specified file."*/ )
                    {
                      v40 = 0LL;
LABEL_74:
                      if ( v38->max_length > 0xB )
                      {
                        v38->m_Items[11] = (Il2CppObject *)v40;
                        sub_1C3B708(
                          (PartyOrganizationUtility_o *)&v38->m_Items[11],
                          v40,
                          v117,
                          v118,
                          v119,
                          v120,
                          v121,
                          v122);
                        if ( !iTween_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                        v123 = iTween__Hash(v38, 0LL);
                        iTween__ValueTo(gameObject, v123, 0LL);
                        return;
                      }
LABEL_80:
                      sub_1C3B9C8(v39, v40);
                    }
                    v39 = sub_1C3B8A0(StringLiteral_4736/*"Could not load the specified file."*/, v38->obj.klass->_1.element_class);
                    if ( v39 )
                    {
                      v40 = StringLiteral_4736/*"Could not load the specified file."*/;
                      goto LABEL_74;
                    }
                  }
                }
              }
LABEL_81:
              v124 = sub_1C3B9E4(v39);
              sub_1C3B88C(v124, 0LL);
            }
          }
        }
      }
    }
LABEL_79:
    sub_1C3B9C0(this, method);
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

  if ( (byte_4C251ED & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__, buffData);
    byte_4C251ED = 1;
  }
  sideEffectShowQueue = (System_Collections_Generic_Queue_T__o *)this->fields.sideEffectShowQueue;
  if ( !sideEffectShowQueue )
    sub_1C3B9C0(0LL, buffData);
  System_Collections_Generic_Queue_object___Enqueue(
    sideEffectShowQueue,
    (Il2CppObject *)buffData,
    (const MethodInfo_37FDE54 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__);
  if ( !this->fields.isShowingSideEffect )
  {
    this->fields.isShowingSideEffect = 1;
    v7 = BattleServantParamComponent__showSideEffectList(this, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__showSideEffectList(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4C251EE & 1) == 0 )
  {
    sub_1C3B764(&BattleServantParamComponent__showSideEffectList_d__115_TypeInfo, method);
    byte_4C251EE = 1;
  }
  v3 = sub_1C3B9B0(BattleServantParamComponent__showSideEffectList_d__115_TypeInfo);
  BattleServantParamComponent__showSideEffectList_d__115___ctor(
    (BattleServantParamComponent__showSideEffectList_d__115_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1C3B9C0(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
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
  __int64 v11; // x1
  BattleServantShowBuffComponent_o *v12; // x21
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  struct BattleServantData_o *v15; // x8
  UnityEngine_Transform_o *transform; // x0
  struct BattleServantData_o *v17; // x8
  UnityEngine_Object_o *ServantActor; // x21
  _BOOL4 IsMatchCurrentCommonAnimName; // w23
  int v20; // w8
  struct BattleServantData_o *v21; // x8
  int max_length; // w8
  BattleBuffData_ShowBuffData_array *v23; // x21
  int v24; // w24
  char v25; // w23
  BattleBuffData_ShowBuffData_o *v26; // x27
  int bounds; // w27
  struct BattleServantData_o *v28; // x8
  UnityEngine_Object_o *v29; // x20
  System_Enum_o v30; // [xsp+8h] [xbp-68h] BYREF
  int v31; // [xsp+18h] [xbp-58h]

  if ( (byte_4C251DF & 1) == 0 )
  {
    sub_1C3B764(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, buffData);
    sub_1C3B764(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_13560/*"The UnmanagedMemoryStream capacity would wrap around the high end of the address space."*/, v7);
    sub_1C3B764(&StringLiteral_25109/*"﹐ﹰ"*/, v8);
    byte_4C251DF = 1;
  }
  showBuffComponent = (UnityEngine_Object_o *)this->fields.showBuffComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)UnityEngine_Object__op_Equality(showBuffComponent, 0LL, 0LL);
  if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
    return;
  if ( !buffData )
    goto LABEL_59;
  v12 = this->fields.showBuffComponent;
  ShowServantParam = BattleBuffData__getShowServantParam(buffData, 0LL);
  if ( !v12 )
    goto LABEL_59;
  BattleServantShowBuffComponent__setBuffList(v12, ShowServantParam, 0LL);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_59;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_59;
  if ( data->fields.isMultiTargetBattle )
  {
    v15 = this->fields.data;
    if ( !v15 )
      goto LABEL_59;
    if ( v15->fields.isEnemy )
    {
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.showBuffComponent;
      if ( !ShowServantParam )
        goto LABEL_59;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ShowServantParam, 0LL);
      CommonFunction__SetColorAllChild(transform, this->fields.isActiveHpBar, this->fields.GRAY, 0LL);
      if ( this->fields.isActiveHpBar )
      {
        ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.showBuffComponent;
        if ( !ShowServantParam )
          goto LABEL_59;
        BattleServantShowBuffComponent__UpdateActiveBuffList((BattleServantShowBuffComponent_o *)ShowServantParam, 0LL);
      }
    }
  }
  v17 = this->fields.data;
  if ( !v17 )
    goto LABEL_59;
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.perf;
  if ( !ShowServantParam )
    goto LABEL_59;
  ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                           (BattlePerformance_o *)ShowServantParam,
                                           v17->fields.uniqueId,
                                           0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)UnityEngine_Object__op_Inequality(ServantActor, 0LL, 0LL);
  if ( ((unsigned __int8)ShowServantParam & 1) == 0 )
    goto LABEL_36;
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.data;
  if ( !ShowServantParam )
    goto LABEL_59;
  if ( !BattleServantData__IsCounterWaitMotion((BattleServantData_o *)ShowServantParam, 0LL) )
    goto LABEL_27;
  v31 = 49;
  v30.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
  v30.monitor = (void *)-1LL;
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)System_Enum__ToString(&v30, 0LL);
  if ( !ServantActor )
    goto LABEL_59;
  if ( BattleActorControl__checkAnimation(
         (BattleActorControl_o *)ServantActor,
         (System_String_o *)ShowServantParam,
         0LL) )
  {
    IsMatchCurrentCommonAnimName = BattleActorControl__IsMatchCurrentCommonAnimName(
                                     (BattleActorControl_o *)ServantActor,
                                     9,
                                     1,
                                     0LL);
  }
  else
  {
LABEL_27:
    IsMatchCurrentCommonAnimName = 0;
  }
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.data;
  if ( !ShowServantParam )
LABEL_59:
    sub_1C3B9C0(ShowServantParam, v11);
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)BattleServantData__IsCounterWaitMotion(
                                                            (BattleServantData_o *)ShowServantParam,
                                                            0LL);
  if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
  {
    v20 = 0;
  }
  else
  {
    if ( !ServantActor )
      goto LABEL_59;
    ShowServantParam = (BattleBuffData_ShowBuffData_array *)BattleActorControl__IsMatchCurrentCommonAnimName(
                                                              (BattleActorControl_o *)ServantActor,
                                                              49,
                                                              1,
                                                              0LL);
    v20 = (unsigned __int8)ShowServantParam & 1;
  }
  if ( v20 | IsMatchCurrentCommonAnimName )
  {
    v31 = 9;
    v30.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
    v30.monitor = (void *)-1LL;
    ShowServantParam = (BattleBuffData_ShowBuffData_array *)System_Enum__ToString(&v30, 0LL);
    if ( !ServantActor )
      goto LABEL_59;
    BattleActorControl__playAnimation_45259528(
      (BattleActorControl_o *)ServantActor,
      (System_String_o *)ShowServantParam,
      0,
      0LL);
  }
LABEL_36:
  v21 = this->fields.data;
  if ( !v21 )
    goto LABEL_59;
  if ( !v21->fields.isSleepWaitMode )
    return;
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)BattleBuffData__getActiveList(buffData, 1, 0LL);
  if ( !ShowServantParam )
    goto LABEL_59;
  max_length = ShowServantParam->max_length;
  v23 = ShowServantParam;
  if ( max_length < 1 )
    goto LABEL_63;
  v24 = 0;
  v25 = 0;
  do
  {
    if ( v24 >= (unsigned int)max_length )
      sub_1C3B9C8(ShowServantParam, v11);
    v26 = v23->m_Items[v24];
    if ( !v26 )
      goto LABEL_59;
    if ( !BYTE1(v26[7].klass) )
    {
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)BattleBuffData__get_buffMst(buffData, 0LL);
      if ( !ShowServantParam )
        goto LABEL_59;
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)DataMasterBase_object__object__int___GetEntity(
                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)ShowServantParam,
                                                                v26->fields.buffId,
                                                                (const MethodInfo_329AE48 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !ShowServantParam )
        goto LABEL_59;
      bounds = (int)ShowServantParam->bounds;
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)ConstantMaster__getValue(
                                                                (System_String_o *)StringLiteral_13560/*"The UnmanagedMemoryStream capacity would wrap around the high end of the address space."*/,
                                                                0LL);
      v25 |= bounds == (_DWORD)ShowServantParam;
    }
    max_length = v23->max_length;
    ++v24;
  }
  while ( v24 < max_length );
  if ( (v25 & 1) == 0 )
  {
LABEL_63:
    ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.data;
    if ( !ShowServantParam )
      goto LABEL_59;
    BattleServantData__SetIsSleepWaitMode((BattleServantData_o *)ShowServantParam, 0, 0LL);
    v28 = this->fields.data;
    if ( !v28 )
      goto LABEL_59;
    ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.perf;
    if ( !ShowServantParam )
      goto LABEL_59;
    v29 = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                    (BattlePerformance_o *)ShowServantParam,
                                    v28->fields.uniqueId,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ShowServantParam = (BattleBuffData_ShowBuffData_array *)UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
    if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
    {
      if ( v29 )
      {
        if ( BattleActorControl__checkID((BattleActorControl_o *)v29, this->fields.uniqueID, 0LL) )
          BattleActorControl__playAnimation_45259528(
            (BattleActorControl_o *)v29,
            (System_String_o *)StringLiteral_25109/*"﹐ﹰ"*/,
            0,
            0LL);
        return;
      }
      goto LABEL_59;
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

  if ( (byte_4C251DE & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, svtData);
    byte_4C251DE = 1;
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
        ServantActor = BattlePerformance__getServantActor(perf, svtData->fields.uniqueId, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ServantActor, 0LL, 0LL);
        if ( ((unsigned __int8)perf & 1) == 0 )
        {
          if ( !ServantActor )
            goto LABEL_17;
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
LABEL_17:
            sub_1C3B9C0(perf, v10);
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

  if ( (byte_4C251D3 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, *(_QWORD *)&now);
    byte_4C251D3 = 1;
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
    sub_1C3B9C0(data, *(_QWORD *)&now);
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
  bool isShiftableServant; // w0
  const MethodInfo *v48; // x2
  int32_t v49; // [xsp+8h] [xbp-48h] BYREF
  int32_t v50; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C251D4 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, *(_QWORD *)&now);
    sub_1C3B764(&int_TypeInfo, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    sub_1C3B764(&StringLiteral_25497, v11);
    sub_1C3B764(&StringLiteral_25568, v12);
    sub_1C3B764(&StringLiteral_25446, v13);
    sub_1C3B764(&StringLiteral_25450, v14);
    byte_4C251D4 = 1;
  }
  if ( this->fields.hpformatflg )
    v15 = &StringLiteral_25446;
  else
    v15 = &StringLiteral_25497;
  v16 = (System_String_o *)*v15;
  hplabel = (UnityEngine_Object_o *)this->fields.hplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hplabel, 0LL, 0LL) )
  {
    v21 = this->fields.hplabel;
    v50 = now;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v18, v19, v20);
    data = System_String__Format(v16, v22, 0LL);
    if ( !v21 )
      goto LABEL_36;
    UILabel__set_text(v21, data, 0LL);
    data = (System_String_o *)this->fields.hplabel;
    if ( !data )
      goto LABEL_36;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)data,
                         (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
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
    v30 = this->fields.maxhplabel;
    v50 = max;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v27, v28, v29);
    data = System_String__Format(v16, v31, 0LL);
    if ( !v30 )
      goto LABEL_36;
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
      v50 = now;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v33, v34, v35);
      v49 = max;
      v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v38, v39, v40);
      v42 = &StringLiteral_25450;
    }
    else
    {
      v50 = now;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v33, v34, v35);
      v49 = max;
      v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v43, v44, v45);
      v42 = &StringLiteral_25568;
    }
    data = System_String__Format_63382984((System_String_o *)*v42, v37, v41, 0LL);
    if ( !v36 )
      goto LABEL_36;
    UILabel__set_text(v36, data, 0LL);
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
      BattleServantParamComponent__SetBreakSpriteDisplay(this, now == 0 && isShiftableServant, v48);
      return;
    }
LABEL_36:
    sub_1C3B9C0(data, v24);
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
  if ( (byte_4C251CF & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, svtdata);
    byte_4C251CF = 1;
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
      sub_1C3B9C0(this, svtdata);
    }
  }
}


void __fastcall BattleServantParamComponent__updateNp_45651204(
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
  if ( (byte_4C251D0 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, svtdata);
    byte_4C251D0 = 1;
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
            sub_1C3B9C8(v11, svtdata);
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
          sub_1C3B9C0(this, svtdata);
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
    sub_1C3B9C0(0LL, nowHp);
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
LABEL_28:
      sub_1C3B9C0(BuffData, v6);
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
        goto LABEL_28;
      passiveList_low = LODWORD(v7->fields.passiveList);
      if ( (__int64)v10 >= (int)passiveList_low )
      {
        if ( v10 >= max_length )
LABEL_30:
          sub_1C3B9C8(BuffData, v6);
        BuffData = (BattleBuffData_o *)skillIcon->m_Items[v10];
        if ( !BuffData )
          goto LABEL_28;
        BattleServantSkillIConComponent__setNoSkill((BattleServantSkillIConComponent_o *)BuffData, 0, 0LL);
      }
      else
      {
        if ( v10 >= passiveList_low )
          goto LABEL_30;
        BuffData = (BattleBuffData_o *)this->fields.data;
        if ( !BuffData )
          goto LABEL_28;
        v14 = (BattleSkillInfoData_o *)*((_QWORD *)&v7->fields.activeList + v10);
        BuffData = (BattleBuffData_o *)BattleServantData__getSkillSealTurn((BattleServantData_o *)BuffData, 0LL);
        if ( !v9 )
          goto LABEL_28;
        if ( v10 >= LODWORD(v9->fields.passiveList) )
          goto LABEL_30;
        if ( *((_BYTE *)p_activeList + v10) )
        {
          BuffData = (BattleBuffData_o *)this->fields.data;
          if ( !BuffData )
            goto LABEL_28;
          BuffData = (BattleBuffData_o *)BattleServantData__getSkillSealSelectTurn(
                                           (BattleServantData_o *)BuffData,
                                           v10,
                                           0LL);
        }
        v15 = this->fields.skillIcon;
        v16 = (int)BuffData;
        if ( !v15 )
          goto LABEL_28;
        if ( v10 >= v15->max_length )
          goto LABEL_30;
        BuffData = (BattleBuffData_o *)this->fields.data;
        if ( !BuffData )
          goto LABEL_28;
        v17 = v15->m_Items[v10];
        BuffData = (BattleBuffData_o *)BattleServantData__canUseSkill((BattleServantData_o *)BuffData, v10, 0LL);
        if ( !this->fields.data )
          goto LABEL_28;
        v18 = (char)BuffData;
        BuffData = (BattleBuffData_o *)BattleServantData__getNotActTurn(this->fields.data, 0LL);
        if ( v10 >= LODWORD(v9->fields.passiveList) )
          goto LABEL_30;
        if ( !v17 )
          goto LABEL_28;
        BattleServantSkillIConComponent__SetSkillInfo(
          v17,
          v14,
          v18 & 1,
          v16,
          (int32_t)BuffData,
          *((_BYTE *)p_activeList + v10),
          0LL);
      }
      skillIcon = this->fields.skillIcon;
      ++v10;
      if ( !skillIcon )
        goto LABEL_28;
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

  if ( (byte_4C251D2 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, svtData);
    byte_4C251D2 = 1;
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
      sub_1C3B9C0(data, v5);
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
  struct BattleServantData_o *v19; // x8

  v3 = this;
  if ( (byte_4C251D9 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C251D9 = 1;
  }
  perf = v3->fields.perf;
  if ( !perf )
    goto LABEL_36;
  this = (BattleServantParamComponent_o *)perf->fields.data;
  if ( !this )
    goto LABEL_36;
  if ( BYTE6(this[1].fields.data) )
  {
    PartsActor = BattleData__GetPartsActor((BattleData_o *)this, 1, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)PartsActor,
                                              0LL,
                                              0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !PartsActor )
        goto LABEL_36;
      this = (BattleServantParamComponent_o *)PartsActor->fields.battleSvtData;
      if ( !this )
        goto LABEL_36;
      if ( !BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL) )
        goto LABEL_34;
    }
  }
  data = v3->fields.data;
  if ( !data )
    goto LABEL_34;
  if ( BattleServantData__isAlive(data, 0, 0LL) )
    goto LABEL_18;
  this = (BattleServantParamComponent_o *)v3->fields.data;
  if ( !this )
    goto LABEL_36;
  if ( BattleServantData__isGuts((BattleServantData_o *)this, 0LL) )
    goto LABEL_18;
  this = (BattleServantParamComponent_o *)v3->fields.data;
  if ( !this )
    goto LABEL_36;
  this = (BattleServantParamComponent_o *)BattleServantData__isOverKill((BattleServantData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
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
                  goto LABEL_36;
                this = (BattleServantParamComponent_o *)v3->fields.npcomp;
                if ( !this )
                  goto LABEL_36;
                BattleNpGaugeSystemComponent__setNowParam((BattleNpGaugeSystemComponent_o *)this, v15->fields.np, 0LL);
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
LABEL_36:
    sub_1C3B9C0(this, method);
  }
  v19 = v3->fields.data;
  if ( !v19 )
    goto LABEL_36;
  this = (BattleServantParamComponent_o *)v19->fields.deckSvt;
  if ( !this )
    goto LABEL_36;
  if ( !BattleDeckServantData__IsWaitHpGaugeHideUntilDeadMotion((BattleDeckServantData_o *)this, 0LL) )
  {
LABEL_34:
    BattleServantParamComponent__setTouch(v3, 0, v2);
    this = (BattleServantParamComponent_o *)v3->fields.root;
    if ( !this )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
}


void __fastcall BattleServantParamComponent_BaseClassIconData___ctor(
        BattleServantParamComponent_BaseClassIconData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantParamComponent_BaseClassIconData__DisplayIconEffect(
        BattleServantParamComponent_BaseClassIconData_o *this,
        float delayTime,
        bool isSkipEffect,
        bool isAddBuff,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantParamComponent_BaseClassIconData__InitIcon(
        BattleServantParamComponent_BaseClassIconData_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantParamComponent_ClassIconData___ctor(
        BattleServantParamComponent_ClassIconData_o *this,
        BattleServantData_o *svtData,
        ServantClassIconComponent_o *classIconComp,
        const MethodInfo *method)
{
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  *(_QWORD *)&this->fields.CurClassId = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.SvtData = svtData;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)svtData, v7, v8, v9, v10, v11, v12);
  this->fields.ClassIconComp = classIconComp;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.ClassIconComp,
    (int64_t)classIconComp,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall BattleServantParamComponent_ClassIconData__ChangeClassIcon(
        BattleServantParamComponent_ClassIconData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  BattleServantParamComponent_ClassIconData__UpdateClassInfo(this, method);
  BattleServantParamComponent_ClassIconData__ChangeClassIcon_45763812(this, this->fields.CurClassId, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent_ClassIconData__ChangeClassIcon_45763812(
        BattleServantParamComponent_ClassIconData_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  struct BattleServantData_o *SvtData; // x8
  BattleServantParamComponent_ClassIconData_o *v4; // x19
  struct BattleServantData_o *v5; // x8

  SvtData = this->fields.SvtData;
  if ( !SvtData
    || (v4 = this, (this = (BattleServantParamComponent_ClassIconData_o *)this->fields.ClassIconComp) == 0LL)
    || (ServantClassIconComponent__SetImage(
          (ServantClassIconComponent_o *)this,
          classId,
          SvtData->fields._frameType_k__BackingField,
          0,
          0LL),
        (v5 = v4->fields.SvtData) == 0LL) )
  {
    sub_1C3B9C0(this, *(_QWORD *)&classId);
  }
  v4->fields.FrameType = v5->fields._frameType_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall BattleServantParamComponent_ClassIconData__DisplayEffect(
        BattleServantParamComponent_ClassIconData_o *this,
        BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *arg,
        System_Action_o *noEffectAction,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o **v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int32_t v36; // w22
  UnityEngine_GameObject_o *EffectObject; // x1
  UnityEngine_GameObject_o **v38; // x22
  UnityEngine_Object_o *v39; // x24
  Il2CppObject *v40; // x23
  System_Action_object__o *v41; // x24
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *v48; // x8
  UnityEngine_GameObject_o *v49; // x25
  int32_t EffectId; // w23
  UnityEngine_GameObject_o *ParentObj; // x24
  float DelayTime; // s8
  UnityEngine_MonoBehaviour_o *ClassIconComp; // x23
  System_Action_o *v54; // x24
  int64_t v55; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  Il2CppObject *component; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C252DD & 1) == 0 )
  {
    sub_1C3B764(&System_Action_string__TypeInfo, arg);
    sub_1C3B764(&System_Action_TypeInfo, v7);
    sub_1C3B764(&BattleEffectUtility_TypeInfo, v8);
    sub_1C3B764(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    sub_1C3B764(&Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__0__, v11);
    sub_1C3B764(&Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__1__, v12);
    sub_1C3B764(&BattleServantParamComponent_ClassIconData___c__DisplayClass16_0_TypeInfo, v13);
    byte_4C252DD = 1;
  }
  component = 0LL;
  v14 = sub_1C3B9B0(BattleServantParamComponent_ClassIconData___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_25;
  *(_QWORD *)(v14 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = arg;
  v23 = (struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o **)(v14 + 24);
  sub_1C3B708((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)arg, v24, v25, v26, v27, v28, v29);
  if ( !*(_QWORD *)(v14 + 24) )
    goto LABEL_25;
  v36 = *(_DWORD *)(*(_QWORD *)(v14 + 24) + 16LL);
  if ( v36 < 1 )
  {
    EffectObject = 0LL;
  }
  else
  {
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    EffectObject = BattleEffectUtility__getEffectObject(v36, 0LL, 1, 0LL);
  }
  *(_QWORD *)(v14 + 32) = EffectObject;
  v38 = (UnityEngine_GameObject_o **)(v14 + 32);
  sub_1C3B708((PartyOrganizationUtility_o *)(v14 + 32), (int64_t)EffectObject, v30, v31, v32, v33, v34, v35);
  v39 = *(UnityEngine_Object_o **)(v14 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
  {
    ActionExtensions__Call(noEffectAction, 0LL);
    return *v38;
  }
  Component_object = *v38;
  if ( !*v38 )
    goto LABEL_25;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__TryGetComponent_object_(
                                                   Component_object,
                                                   &component,
                                                   (const MethodInfo_3042CA8 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    v40 = component;
    v41 = (System_Action_object__o *)sub_1C3B9B0(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v41,
      (Il2CppObject *)v14,
      Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__0__,
      0LL);
    if ( !v40 )
      goto LABEL_25;
    v40[12].klass = (Il2CppClass *)v41;
    sub_1C3B708((PartyOrganizationUtility_o *)&v40[12], (int64_t)v41, v42, v43, v44, v45, v46, v47);
  }
  v48 = *v23;
  if ( !*v23 )
    goto LABEL_25;
  v49 = *v38;
  EffectId = v48->fields.EffectId;
  ParentObj = v48->fields.ParentObj;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleEffectUtility__SetEffectParent(v49, EffectId, ParentObj, 0LL);
  if ( !*v23
    || (DelayTime = (*v23)->fields.DelayTime,
        ClassIconComp = (UnityEngine_MonoBehaviour_o *)this->fields.ClassIconComp,
        v54 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(
          v54,
          (Il2CppObject *)v14,
          Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__1__,
          0LL),
        Component_object = (UnityEngine_GameObject_o *)BasicHelper__DelayCall(DelayTime, v54, 0, 0LL),
        !ClassIconComp) )
  {
LABEL_25:
    sub_1C3B9C0(Component_object, v16);
  }
  UnityEngine_MonoBehaviour__StartCoroutine_71108020(
    ClassIconComp,
    (System_Collections_IEnumerator_o *)Component_object,
    0LL);
  v55 = (int64_t)*v23;
  this->fields.PrevEffectArg = *v23;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.PrevEffectArg, v55, v56, v57, v58, v59, v60, v61);
  return *v38;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent_ClassIconData__DisplayIconEffect(
        BattleServantParamComponent_ClassIconData_o *this,
        float delayTime,
        bool isSkipEffect,
        bool isAddBuff,
        const MethodInfo *method)
{
  __int64 v9; // x1
  BattleServantData_o *SvtData; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *v13; // x21
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *PrevEffectArg; // x8
  System_Action_o *v15; // x20
  const MethodInfo *v16; // x3
  struct UnityEngine_GameObject_o *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4C252D9 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isSkipEffect);
    sub_1C3B764(&Method_BattleServantParamComponent_ClassIconData_ChangeClassIcon__, v9);
    byte_4C252D9 = 1;
  }
  SvtData = this->fields.SvtData;
  if ( !SvtData )
    goto LABEL_16;
  if ( BattleServantData__getClassId(SvtData, 0LL) == this->fields.CurClassId )
  {
    BattleServantParamComponent_ClassIconData__UpdateClassInfo(this, v11);
    return;
  }
  SvtData = (BattleServantData_o *)BattleServantParamComponent_ClassIconData__MakeDisplayEffectArgument(
                                     this,
                                     delayTime,
                                     isAddBuff,
                                     v12);
  v13 = (BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *)SvtData;
  if ( delayTime <= 0.0 )
  {
    PrevEffectArg = this->fields.PrevEffectArg;
    if ( PrevEffectArg )
    {
      if ( !PrevEffectArg->fields.IsChangedIcon )
      {
        if ( !SvtData )
          goto LABEL_16;
        PrevEffectArg->fields.ClassId = SvtData->fields.deckIndex;
        if ( !isSkipEffect )
          goto LABEL_12;
        goto LABEL_10;
      }
    }
  }
  if ( isSkipEffect )
  {
LABEL_10:
    if ( SvtData )
    {
      SvtData->fields.index = -1;
      goto LABEL_12;
    }
LABEL_16:
    sub_1C3B9C0(SvtData, isSkipEffect);
  }
LABEL_12:
  v15 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattleServantParamComponent_ClassIconData_ChangeClassIcon__,
    0LL);
  v17 = BattleServantParamComponent_ClassIconData__DisplayEffect(this, v13, v15, v16);
  this->fields.PlayingEffectObj = v17;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.PlayingEffectObj, (int64_t)v17, v18, v19, v20, v21, v22, v23);
}


void __fastcall BattleServantParamComponent_ClassIconData__InitIcon(
        BattleServantParamComponent_ClassIconData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2

  if ( BattleServantParamComponent_ClassIconData__IsChangeAble(this, method) )
  {
    BattleServantParamComponent_ClassIconData__UpdateClassInfo(this, v3);
    BattleServantParamComponent_ClassIconData__ChangeClassIcon_45763812(this, this->fields.CurClassId, v4);
  }
}


bool __fastcall BattleServantParamComponent_ClassIconData__IsChangeAble(
        BattleServantParamComponent_ClassIconData_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *PlayingEffectObj; // x20
  __int64 v4; // x1
  BattleServantData_o *SvtData; // x0
  struct BattleServantData_o *v6; // x8

  if ( (byte_4C252DA & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C252DA = 1;
  }
  PlayingEffectObj = (UnityEngine_Object_o *)this->fields.PlayingEffectObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(PlayingEffectObj, 0LL, 0LL) )
    return 0;
  SvtData = this->fields.SvtData;
  if ( !SvtData )
    goto LABEL_12;
  SvtData = (BattleServantData_o *)BattleServantData__getClassId(SvtData, 0LL);
  if ( (_DWORD)SvtData == this->fields.CurClassId )
  {
    v6 = this->fields.SvtData;
    if ( v6 )
      return v6->fields._frameType_k__BackingField != this->fields.FrameType;
LABEL_12:
    sub_1C3B9C0(SvtData, v4);
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *__fastcall BattleServantParamComponent_ClassIconData__MakeDisplayEffectArgument(
        BattleServantParamComponent_ClassIconData_o *this,
        float delayTime,
        bool isAddBuff,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *CurChangeBuff; // x0
  int32_t v8; // w21
  BattleBuffData_BuffData_o *v9; // x0
  __int64 v10; // x20
  UnityEngine_Component_o *ClassIconComp; // x0
  __int64 v12; // x1
  int32_t CurClassId; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4C252DB & 1) == 0 )
  {
    sub_1C3B764(&BattleServantParamComponent_ClassIconData_DisplayEffectArgument_TypeInfo, isAddBuff);
    byte_4C252DB = 1;
  }
  CurChangeBuff = this->fields.CurChangeBuff;
  if ( CurChangeBuff )
    v8 = BattleBuffData_BuffData__GetActClassIconChangeEffectIdAtBuffRemove(CurChangeBuff, 0LL);
  else
    v8 = -1;
  BattleServantParamComponent_ClassIconData__UpdateClassInfo(this, (const MethodInfo *)isAddBuff);
  if ( isAddBuff )
  {
    v9 = this->fields.CurChangeBuff;
    if ( v9 )
      v8 = BattleBuffData_BuffData__get_ClassIconChangeEffectId(v9, 0LL);
    else
      v8 = -1;
  }
  v10 = sub_1C3B9B0(BattleServantParamComponent_ClassIconData_DisplayEffectArgument_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_DWORD *)(v10 + 16) = v8,
        CurClassId = this->fields.CurClassId,
        *(float *)(v10 + 24) = delayTime,
        *(_DWORD *)(v10 + 20) = CurClassId,
        (ClassIconComp = (UnityEngine_Component_o *)this->fields.ClassIconComp) == 0LL) )
  {
    sub_1C3B9C0(ClassIconComp, v12);
  }
  gameObject = UnityEngine_Component__get_gameObject(ClassIconComp, 0LL);
  *(_QWORD *)(v10 + 32) = gameObject;
  sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)gameObject, v15, v16, v17, v18, v19, v20);
  return (BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *)v10;
}


void __fastcall BattleServantParamComponent_ClassIconData__UpdateClassInfo(
        BattleServantParamComponent_ClassIconData_o *this,
        const MethodInfo *method)
{
  BuffAggregationArgs_c *v3; // x0
  BattleServantData_o *SvtData; // x20

  if ( (byte_4C252DC & 1) == 0 )
  {
    sub_1C3B764(&BuffAggregationArgs_TypeInfo, method);
    byte_4C252DC = 1;
  }
  v3 = BuffAggregationArgs_TypeInfo;
  SvtData = this->fields.SvtData;
  if ( !BuffAggregationArgs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffAggregationArgs_TypeInfo);
  if ( !SvtData )
    sub_1C3B9C0(v3, method);
  this->fields.CurClassId = BattleServantData__GetClassId(
                              SvtData,
                              &this->fields.CurChangeBuff,
                              BuffAggregationArgs_TypeInfo->static_fields->DisplaySet,
                              0LL);
}


void __fastcall BattleServantParamComponent_ClassIconData_DisplayEffectArgument___ctor(
        BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantParamComponent_ClassIconData___c__DisplayClass16_0___ctor(
        BattleServantParamComponent_ClassIconData___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantParamComponent_ClassIconData___c__DisplayClass16_0___DisplayEffect_b__0(
        BattleServantParamComponent_ClassIconData___c__DisplayClass16_0_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  BattleServantParamComponent_ClassIconData_o *_4__this; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *arg; // x8
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *v9; // x8

  if ( (byte_4C252DE & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_4487/*"Column '{0}' does not belong to table {1}."*/, eventName);
    byte_4C252DE = 1;
  }
  _4__this = (BattleServantParamComponent_ClassIconData_o *)System_String__op_Equality(
                                                              eventName,
                                                              (System_String_o *)StringLiteral_4487/*"Column '{0}' does not belong to table {1}."*/,
                                                              0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    arg = this->fields.arg;
    if ( !arg
      || (_4__this = this->fields.__4__this) == 0LL
      || (BattleServantParamComponent_ClassIconData__ChangeClassIcon_45763812(_4__this, arg->fields.ClassId, v7),
          (v9 = this->fields.arg) == 0LL) )
    {
      sub_1C3B9C0(_4__this, v6);
    }
    v9->fields.IsChangedIcon = 1;
  }
}


void __fastcall BattleServantParamComponent_ClassIconData___c__DisplayClass16_0___DisplayEffect_b__1(
        BattleServantParamComponent_ClassIconData___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  GameObjectExtensions__SetActiveIfNotNull(this->fields.effectObj, 1, 0LL);
}


void __fastcall BattleServantParamComponent__CoAddClassIconEffect_d__129___ctor(
        BattleServantParamComponent__CoAddClassIconEffect_d__129_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantParamComponent__CoAddClassIconEffect_d__129__MoveNext(
        BattleServantParamComponent__CoAddClassIconEffect_d__129_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleServantParamComponent__CoAddClassIconEffect_d__129_o *v8; // x19
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
  __int64 v21; // x1
  __int64 v22; // x1
  int32_t _1__state; // w8
  struct BattleServantParamComponent_o *_4__this; // x20
  Il2CppObject *v25; // x22
  struct BattleServantParamComponent___c__DisplayClass129_0_o **p__8__1; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct BattleServantParamComponent___c__DisplayClass129_0_o *v33; // x23
  int32_t effectId; // w21
  System_Action_o *v35; // x22
  BattlePerformance_o *perf; // x23
  struct BattleServantParamComponent___c__DisplayClass129_0_o *_8__1; // x8
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  struct BattleServantData_o *servantData; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x21
  int32_t v42; // w22
  UnityEngine_Object_o *EffectObject; // x21
  BattleServantParamComponent__CoAddClassIconEffect_d__129_o *v44; // x22
  BattleServantParamComponent__CoAddClassIconEffect_d__129_o *v45; // x22
  BattleServantParamComponent__CoAddClassIconEffect_d__129_o *v46; // x22
  struct BattleServantParamComponent_o *v47; // x21
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  struct BattlePerformance_o *v51; // x8
  struct BattleData_o *data; // x8
  System_String_o *v53; // x21
  Il2CppObject *v54; // x0
  System_String_o *v55; // x22
  UnityEngine_Object_o *Manager__loadBattleCommonEffect; // x21
  UnityEngine_Object_o *facetex; // x22
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v59; // x21
  int32_t battleGenderType; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *component; // [xsp+28h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4C252E1 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&BattleEffectUtility_TypeInfo, v9);
    sub_1C3B764(&Method_DataManager_GetMaster_EffectMaster___, v10);
    sub_1C3B764(&DataManager_TypeInfo, v11);
    sub_1C3B764(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__GameObject__Add__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v14);
    sub_1C3B764(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, v15);
    sub_1C3B764(&int_TypeInfo, v16);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject____77992824, v17);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v18);
    sub_1C3B764(&ServantAssetLoadManager_TypeInfo, v19);
    sub_1C3B764(&Method_BattleServantParamComponent___c__DisplayClass129_0__CoAddClassIconEffect_b__0__, v20);
    sub_1C3B764(&BattleServantParamComponent___c__DisplayClass129_0_TypeInfo, v21);
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__129_o *)sub_1C3B764(&StringLiteral_19187/*"fontType"*/, v22);
    byte_4C252E1 = 1;
  }
  component = 0LL;
  name = 0LL;
  path = 0LL;
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v8->fields.__1__state = -1;
    v25 = (Il2CppObject *)sub_1C3B9B0(BattleServantParamComponent___c__DisplayClass129_0_TypeInfo);
    System_Object___ctor(v25, 0LL);
    v8->fields.__8__1 = (struct BattleServantParamComponent___c__DisplayClass129_0_o *)v25;
    p__8__1 = &v8->fields.__8__1;
    sub_1C3B708((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v25, v27, v28, v29, v30, v31, v32);
    method = (const MethodInfo *)(unsigned int)v8->fields.effectId;
    if ( (int)method < 1 )
      return 0;
    if ( !_4__this )
      goto LABEL_71;
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__129_o *)_4__this->fields.classIconEffectDict;
    if ( !this )
      goto LABEL_71;
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__129_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                                           (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                           (int32_t)method,
                                                                           (const MethodInfo_32F4D90 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 0;
    if ( _4__this->fields.currentClassIconAuraEffectPriority < v8->fields.priority )
    {
      BattleServantParamComponent__DestroyAllEffect(_4__this, _4__this->fields.classIconEffectDict, 0, 0LL);
      _4__this->fields.currentClassIconAuraEffectPriority = v8->fields.priority;
    }
    v33 = *p__8__1;
    if ( !*p__8__1 )
      goto LABEL_71;
    v33->fields.isLoading = 1;
    effectId = v8->fields.effectId;
    v35 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      v35,
      (Il2CppObject *)v33,
      Method_BattleServantParamComponent___c__DisplayClass129_0__CoAddClassIconEffect_b__0__,
      0LL);
    perf = _4__this->fields.perf;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    BattleEffectUtility__LoadEffectAssetIfNotYet(effectId, v35, perf, 0LL);
  }
  _8__1 = v8->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_71;
  if ( _8__1->fields.isLoading )
  {
    v8->fields.__2__current = 0LL;
    p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1C3B708(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
    return result;
  }
  if ( !_4__this )
    goto LABEL_71;
  servantData = v8->fields.servantData;
  if ( !servantData )
    goto LABEL_71;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__129_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_71;
  ServantGameObject = BattlePerformance__getServantGameObject(
                        (BattlePerformance_o *)this,
                        servantData->fields.uniqueId,
                        0LL);
  if ( !ServantGameObject )
    ServantGameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
  v42 = v8->fields.effectId;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectObject = (UnityEngine_Object_o *)BattleEffectUtility__getEffectObject(v42, ServantGameObject, 1, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__129_o *)UnityEngine_Object__op_Equality(
                                                                         EffectObject,
                                                                         0LL,
                                                                         0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !EffectObject )
    goto LABEL_71;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__129_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0LL);
  if ( !_4__this->fields.clsIconComponent )
    goto LABEL_71;
  v44 = this;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__129_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                                                                         0LL);
  if ( !v44 )
    goto LABEL_71;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v44, (UnityEngine_Transform_o *)this, 0LL);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__129_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0LL);
  v45 = this;
  if ( !byte_4C1C516 )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__129_o *)sub_1C3B764(
                                                                           &UnityEngine_Vector3_TypeInfo,
                                                                           method);
    byte_4C1C516 = 1;
  }
  if ( !v45 )
    goto LABEL_71;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v45,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__129_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0LL);
  v46 = this;
  if ( !byte_4C1C511 )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__129_o *)sub_1C3B764(
                                                                           &UnityEngine_Vector3_TypeInfo,
                                                                           method);
    byte_4C1C511 = 1;
  }
  if ( !v46 )
    goto LABEL_71;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v46,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectObject, 1, 0LL);
  if ( UnityEngine_GameObject__TryGetComponent_object_(
         (UnityEngine_GameObject_o *)EffectObject,
         &component,
         (const MethodInfo_3042CA8 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__129_o *)component;
    if ( !component )
      goto LABEL_71;
    CommonEffectComponent__Init((CommonEffectComponent_o *)component, 0, 0, 0LL);
  }
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__129_o *)_4__this->fields.classIconEffectDict;
  if ( !this )
    goto LABEL_71;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v8->fields.effectId,
          (const MethodInfo_32F4D90 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__129_o *)_4__this->fields.classIconEffectDict;
    if ( !this )
      goto LABEL_71;
    System_Collections_Generic_Dictionary_int__object___Add(
      (System_Collections_Generic_Dictionary_int__object__o *)this,
      v8->fields.effectId,
      (Il2CppObject *)EffectObject,
      (const MethodInfo_32F4B9C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
  }
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__129_o *)_4__this->fields.commandSpellEffectDict;
  if ( !this )
LABEL_71:
    sub_1C3B9C0(this, method);
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v8->fields.effectId,
          (const MethodInfo_32F4D90 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__129_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EffectMaster___);
    if ( this )
    {
      this = (BattleServantParamComponent__CoAddClassIconEffect_d__129_o *)DataMasterBase_object__object__int___GetEntity(
                                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                             v8->fields.effectId,
                                                                             (const MethodInfo_329AE48 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( this )
      {
        v47 = this->fields.__4__this;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        BattleEffectUtility__GetBattleCommonEffectPathAndName((System_String_o *)v47, &path, &name, 0LL);
        v51 = _4__this->fields.perf;
        if ( v51 )
        {
          data = v51->fields.data;
          if ( data )
          {
            v53 = path;
            battleGenderType = data->fields.battleGenderType;
            v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &battleGenderType, v48, v49, v50);
            v55 = System_String__Format((System_String_o *)StringLiteral_19187/*"fontType"*/, v54, 0LL);
            if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            Manager__loadBattleCommonEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                        v53,
                                                                        v55,
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
            this = (BattleServantParamComponent__CoAddClassIconEffect_d__129_o *)_4__this->fields.facetex;
            if ( this )
            {
              transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v59 = UnityEngine_Object__Instantiate_object__50818788(
                      (Il2CppObject *)Manager__loadBattleCommonEffect,
                      transform,
                      (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
              GameObjectExtensions__ResetTransform((UnityEngine_GameObject_o *)v59, 0LL);
              if ( v59 )
              {
                UnityEngine_GameObject__SetActive(
                  (UnityEngine_GameObject_o *)v59,
                  !_4__this->fields.isHideFaceTexture,
                  0LL);
                this = (BattleServantParamComponent__CoAddClassIconEffect_d__129_o *)_4__this->fields.commandSpellEffectDict;
                if ( this )
                {
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)this,
                    v8->fields.effectId,
                    v59,
                    (const MethodInfo_32F4B9C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
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


Il2CppObject *__fastcall BattleServantParamComponent__CoAddClassIconEffect_d__129__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__CoAddClassIconEffect_d__129_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantParamComponent__CoAddClassIconEffect_d__129__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__CoAddClassIconEffect_d__129_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_BattleServantParamComponent__CoAddClassIconEffect_d__129_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
}


Il2CppObject *__fastcall BattleServantParamComponent__CoAddClassIconEffect_d__129__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__CoAddClassIconEffect_d__129_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantParamComponent__CoAddClassIconEffect_d__129__System_IDisposable_Dispose(
        BattleServantParamComponent__CoAddClassIconEffect_d__129_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantParamComponent__DelayMethod_d__119___ctor(
        BattleServantParamComponent__DelayMethod_d__119_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantParamComponent__DelayMethod_d__119__MoveNext(
        BattleServantParamComponent__DelayMethod_d__119_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  bool result; // w0
  struct BattleCallBackBase_o *callBack; // x0

  if ( (byte_4C252E2 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_4C252E2 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callBack = this->fields.callBack;
    this->fields.__1__state = -1;
    if ( !callBack )
      sub_1C3B9C0(0LL, method);
    ((void (__fastcall *)(struct BattleCallBackBase_o *, const char *))callBack->klass[1]._1.gc_desc)(
      callBack,
      callBack->klass[1]._1.name);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    waitTime = this->fields.waitTime;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1C3B9B0(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v5, v6, v7, v8, v9, v10, v11);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleServantParamComponent__DelayMethod_d__119__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__DelayMethod_d__119_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantParamComponent__DelayMethod_d__119__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__DelayMethod_d__119_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_BattleServantParamComponent__DelayMethod_d__119_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
}


Il2CppObject *__fastcall BattleServantParamComponent__DelayMethod_d__119__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__DelayMethod_d__119_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantParamComponent__DelayMethod_d__119__System_IDisposable_Dispose(
        BattleServantParamComponent__DelayMethod_d__119_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantParamComponent___c__DisplayClass127_0___ctor(
        BattleServantParamComponent___c__DisplayClass127_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantParamComponent___c__DisplayClass127_0___DestroyEffectObject_b__0(
        BattleServantParamComponent___c__DisplayClass127_0_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *effectDict; // x0

  if ( (byte_4C252DF & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, method);
    byte_4C252DF = 1;
  }
  effectDict = this->fields.effectDict;
  if ( !effectDict )
    sub_1C3B9C0(0LL, method);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
    this->fields.id,
    (const MethodInfo_32F6024 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
}


void __fastcall BattleServantParamComponent___c__DisplayClass129_0___ctor(
        BattleServantParamComponent___c__DisplayClass129_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantParamComponent___c__DisplayClass129_0___CoAddClassIconEffect_b__0(
        BattleServantParamComponent___c__DisplayClass129_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoading = 0;
}


void __fastcall BattleServantParamComponent___c__DisplayClass81_0___ctor(
        BattleServantParamComponent___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantParamComponent___c__DisplayClass81_0___initUpdateView_b__0(
        BattleServantParamComponent___c__DisplayClass81_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  BattleServantParamComponent___c__DisplayClass81_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleServantParamComponent_o *_4__this; // x8
  Il2CppObject *v10; // x20
  UnityEngine_Transform_o *battlePointRoot; // x21
  struct BattleServantParamComponent_o *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct BattleServantParamComponent_o *v19; // x9
  struct ServantBattlePointEntity_o *entity; // x8

  v4 = this;
  if ( (byte_4C252E0 & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetData_GetObject_GameObject____77902856, assetData);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_BattlePointGaugeComponent___, v5);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject____77992824, v6);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    this = (BattleServantParamComponent___c__DisplayClass81_0_o *)sub_1C3B764(&StringLiteral_3277/*"CA"*/, v8);
    byte_4C252E0 = 1;
  }
  if ( !assetData )
    goto LABEL_14;
  this = (BattleServantParamComponent___c__DisplayClass81_0_o *)AssetData__GetObject_object__50142412(
                                                                  assetData,
                                                                  (System_String_o *)StringLiteral_3277/*"CA"*/,
                                                                  (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v10 = (Il2CppObject *)this;
  battlePointRoot = _4__this->fields.battlePointRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleServantParamComponent___c__DisplayClass81_0_o *)UnityEngine_Object__Instantiate_object__50818788(
                                                                  v10,
                                                                  battlePointRoot,
                                                                  (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
  if ( !this )
    goto LABEL_14;
  v12 = v4->fields.__4__this;
  this = (BattleServantParamComponent___c__DisplayClass81_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_BattlePointGaugeComponent___);
  if ( !v12
    || (v12->fields.battlePointGaugeComponent = (struct BattlePointGaugeComponent_o *)this,
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&v12->fields.battlePointGaugeComponent,
          (int64_t)this,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        (v19 = v4->fields.__4__this) == 0LL)
    || (entity = v4->fields.entity) == 0LL
    || (this = (BattleServantParamComponent___c__DisplayClass81_0_o *)v19->fields.battlePointGaugeComponent) == 0LL
    || (BattlePointGaugeComponent__Init((BattlePointGaugeComponent_o *)this, entity->fields.battlePointId, 0LL),
        (this = (BattleServantParamComponent___c__DisplayClass81_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_1C3B9C0(this, assetData);
  }
  BattleServantParamComponent__UpdateBattlePointImmediately(
    (BattleServantParamComponent_o *)this,
    (BattleServantData_o *)this[8].fields.entity,
    0LL);
}


void __fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__88___ctor(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__88_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__88__MoveNext(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__88_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattleServantParamComponent_o *_4__this; // x20
  struct BattleServantSkillIConComponent_array *skillIcon; // x19
  int max_length; // w8
  int v14; // w22
  char v15; // w21

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_19;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__88_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_19;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__88_o *)BattleServantData__get_BuffData(
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
    v14 = 0;
    v15 = 0;
    do
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1C3B9C8(this, method);
      this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__88_o *)skillIcon->m_Items[v14];
      if ( !this )
        goto LABEL_19;
      this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__88_o *)BattleServantSkillIConComponent__UpdateSkillRankUpEffect(
                                                                                        (BattleServantSkillIConComponent_o *)this,
                                                                                        method);
      max_length = skillIcon->max_length;
      ++v14;
      v15 |= (unsigned __int8)this;
    }
    while ( v14 < max_length );
    if ( (v15 & 1) == 0 )
      return 0;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__88_o *)_4__this->fields.data;
    if ( !this
      || (this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__88_o *)BattleServantData__get_BuffData(
                                                                                            (BattleServantData_o *)this,
                                                                                            0LL)) == 0LL
      || (this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__88_o *)this[2].klass) == 0LL )
    {
LABEL_19:
      sub_1C3B9C0(this, method);
    }
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter((BattleBuffData_SkillRankChangeData_o *)this, 0, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__88__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__88_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__88__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__88_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__88_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
}


Il2CppObject *__fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__88__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__88_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__88__System_IDisposable_Dispose(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__88_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantParamComponent__showSideEffectList_d__115___ctor(
        BattleServantParamComponent__showSideEffectList_d__115_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantParamComponent__showSideEffectList_d__115__MoveNext(
        BattleServantParamComponent__showSideEffectList_d__115_o *this,
        const MethodInfo *method)
{
  BattleServantParamComponent__showSideEffectList_d__115_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleServantParamComponent_o *_4__this; // x20
  BattleActionData_BuffData_o *v8; // x21
  BattleServantParamComponent__showSideEffectList_d__115_o *v9; // x22
  int32_t statusEffectId; // w23
  float x; // s10
  float y; // s8
  float z; // s9
  BattleServantParamComponent_c *v14; // x0
  float SideEffectShowWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v16; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  bool result; // w0
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C252E3 & 1) == 0 )
  {
    sub_1C3B764(&BattleEffectUtility_TypeInfo, method);
    sub_1C3B764(&BattleServantParamComponent_TypeInfo, v3);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__get_Count__, v5);
    this = (BattleServantParamComponent__showSideEffectList_d__115_o *)sub_1C3B764(
                                                                         &UnityEngine_WaitForSeconds_TypeInfo,
                                                                         v6);
    byte_4C252E3 = 1;
  }
  if ( v2->fields.__1__state >= 2u )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_16;
  this = (BattleServantParamComponent__showSideEffectList_d__115_o *)_4__this->fields.sideEffectShowQueue;
  if ( !this )
    goto LABEL_16;
  if ( !LODWORD(this->fields.__4__this) )
  {
    result = 0;
    _4__this->fields.isShowingSideEffect = 0;
    return result;
  }
  this = (BattleServantParamComponent__showSideEffectList_d__115_o *)System_Collections_Generic_Queue_object___Dequeue(
                                                                       (System_Collections_Generic_Queue_T__o *)this,
                                                                       (const MethodInfo_37FDFE4 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__);
  if ( !_4__this->fields.clsIconComponent
    || (v8 = (BattleActionData_BuffData_o *)this,
        this = (BattleServantParamComponent__showSideEffectList_d__115_o *)UnityEngine_Component__get_transform(
                                                                             (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                                                                             0LL),
        !v8) )
  {
LABEL_16:
    sub_1C3B9C0(this, method);
  }
  v9 = this;
  statusEffectId = v8->fields.statusEffectId;
  x = _4__this->fields.sideEffectScl.fields.x;
  y = _4__this->fields.sideEffectScl.fields.y;
  z = _4__this->fields.sideEffectScl.fields.z;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  v25.fields.x = x;
  v25.fields.y = y;
  v25.fields.z = z;
  BattleEffectUtility__showSideEffect((UnityEngine_Transform_o *)v9, statusEffectId, v25, 0LL);
  BattleServantParamComponent__popBuffLabel(_4__this, v8, 0LL);
  v14 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
    v14 = BattleServantParamComponent_TypeInfo;
  }
  SideEffectShowWaitTime = v14->static_fields->SideEffectShowWaitTime;
  v16 = (UnityEngine_WaitForSeconds_o *)sub_1C3B9B0(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v16, SideEffectShowWaitTime, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v16;
  p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C3B708(p__2__current, (int64_t)v16, v18, v19, v20, v21, v22, v23);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return result;
}


Il2CppObject *__fastcall BattleServantParamComponent__showSideEffectList_d__115__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__showSideEffectList_d__115_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantParamComponent__showSideEffectList_d__115__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__showSideEffectList_d__115_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_BattleServantParamComponent__showSideEffectList_d__115_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
}


Il2CppObject *__fastcall BattleServantParamComponent__showSideEffectList_d__115__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__showSideEffectList_d__115_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantParamComponent__showSideEffectList_d__115__System_IDisposable_Dispose(
        BattleServantParamComponent__showSideEffectList_d__115_o *this,
        const MethodInfo *method)
{
  ;
}