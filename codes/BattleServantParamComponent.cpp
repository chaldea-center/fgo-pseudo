void __fastcall BattleServantParamComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B192FB & 1) == 0 )
  {
    sub_1BCA7E0(&BattleServantParamComponent_TypeInfo, v1, v2);
    byte_4B192FB = 1;
  }
  LODWORD(BattleServantParamComponent_TypeInfo->static_fields->SideEffectShowWaitTime) = (struct BattleServantParamComponent_StaticFields)1065353216;
}


void __fastcall BattleServantParamComponent___ctor(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct UnityEngine_GameObject_array *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Collections_Generic_Queue_T__o *v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v35; // d1
  float z; // s2
  System_Collections_Generic_Dictionary_int__object__o *v37; // x20
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Collections_Generic_Dictionary_int__object__o *v47; // x20
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  Il2CppObject *v57; // x20
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7

  if ( (byte_4B192FA & 1) == 0 )
  {
    sub_1BCA7E0(&BattleServantParamComponent_BaseClassIconData_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo, v12, v13);
    byte_4B192FA = 1;
  }
  v14 = (struct UnityEngine_GameObject_array *)sub_1BCA888(UnityEngine_GameObject___TypeInfo, 1LL);
  this->fields.effectobj = v14;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effectobj, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  v24 = (System_Collections_Generic_Queue_T__o *)sub_1BCAA2C(
                                                   System_Collections_Generic_Queue_BattleActionData_BuffData__TypeInfo,
                                                   v21,
                                                   v22,
                                                   v23);
  System_Collections_Generic_Queue_object____ctor(
    v24,
    (const MethodInfo_3713DF0 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData___ctor__);
  this->fields.sideEffectShowQueue = (struct System_Collections_Generic_Queue_BattleActionData_BuffData__o *)v24;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.sideEffectShowQueue,
    (int64_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v31, v32);
    byte_4B109C6 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v35 = *(_QWORD *)&static_fields->oneVector.fields.x;
  z = static_fields->oneVector.fields.z;
  this->fields.sideEffectLabelWidth = 100.0;
  this->fields.GRAY = (struct UnityEngine_Color_o)xmmword_BD20F0;
  *(_QWORD *)&this->fields.sideEffectScl.fields.x = v35;
  this->fields.sideEffectScl.fields.z = z;
  this->fields.isActiveHpBar = 1;
  v37 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__GameObject__TypeInfo,
                                                                  v31,
                                                                  v32,
                                                                  v33);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v37,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.classIconEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v37;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.classIconEffectDict,
    (int64_t)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v47 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__GameObject__TypeInfo,
                                                                  v44,
                                                                  v45,
                                                                  v46);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v47,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.commandSpellEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v47;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.commandSpellEffectDict,
    (int64_t)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v57 = (Il2CppObject *)sub_1BCAA2C(BattleServantParamComponent_BaseClassIconData_TypeInfo, v54, v55, v56);
  System_Object___ctor(v57, 0LL);
  this->fields.classIconData = (struct BattleServantParamComponent_BaseClassIconData_o *)v57;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.classIconData, (int64_t)v57, v58, v59, v60, v61, v62, v63);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B192F4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &BattleServantParamComponent__CoAddClassIconEffect_d__127_TypeInfo,
      *(_QWORD *)&effectId,
      *(_QWORD *)&priority);
    byte_4B192F4 = 1;
  }
  v9 = sub_1BCAA2C(
         BattleServantParamComponent__CoAddClassIconEffect_d__127_TypeInfo,
         *(_QWORD *)&effectId,
         *(_QWORD *)&priority,
         servantData);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 40), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v9 + 32) = effectId;
  *(_DWORD *)(v9 + 48) = priority;
  *(_QWORD *)(v9 + 64) = servantData;
  sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 64), (int64_t)servantData, v16, v17, v18, v19, v20, v21);
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
    sub_1BCAA3C(0LL, method);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__DelayMethod(
        BattleServantParamComponent_o *this,
        float waitTime,
        BattleCallBackBase_o *callBack,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B192ED & 1) == 0 )
  {
    sub_1BCA7E0(&BattleServantParamComponent__DelayMethod_d__117_TypeInfo, callBack, method);
    byte_4B192ED = 1;
  }
  v7 = sub_1BCAA2C(BattleServantParamComponent__DelayMethod_d__117_TypeInfo, callBack, method, v4);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(float *)(v7 + 32) = waitTime;
  *(_QWORD *)(v7 + 40) = callBack;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)callBack, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
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
        sub_1BCAA44(this, method);
      this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
      if ( !this )
        break;
      BattleServantSkillIConComponent__DeleteRankUpEffect((BattleServantSkillIConComponent_o *)this, method);
      max_length = skillIcon->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1BCAA3C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__DestroyAllEffect(
        BattleServantParamComponent_o *this,
        System_Collections_Generic_Dictionary_int__GameObject__o *effectDict,
        bool forceDestroy,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  System_Int32_array *IsNullOrEmpty; // x0
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  const MethodInfo *v11; // x4
  __int64 v12; // x8
  System_Int32_array *v13; // x21
  unsigned __int64 v14; // x22
  bool v15; // w20

  if ( (byte_4B192F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, effectDict, forceDestroy);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v6, v7);
    byte_4B192F2 = 1;
  }
  IsNullOrEmpty = (System_Int32_array *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)effectDict, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !effectDict
      || (Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                   (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
                   (const MethodInfo_3205BA4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__),
          (IsNullOrEmpty = System_Linq_Enumerable__ToArray_int_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                             (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___)) == 0LL) )
    {
      sub_1BCAA3C(IsNullOrEmpty, v9);
    }
    v12 = *(_QWORD *)&IsNullOrEmpty->max_length;
    v13 = IsNullOrEmpty;
    if ( (int)v12 >= 1 )
    {
      v14 = 0LL;
      v15 = forceDestroy;
      do
      {
        if ( v14 >= (unsigned int)v12 )
          sub_1BCAA44(IsNullOrEmpty, v9);
        BattleServantParamComponent__DestroyEffectObject(
          (BattleServantParamComponent_o *)IsNullOrEmpty,
          effectDict,
          v13->m_Items[v14 + 1],
          v15,
          v11);
        LODWORD(v12) = v13->max_length;
        ++v14;
      }
      while ( (__int64)v14 < (int)v12 );
    }
  }
}


void __fastcall BattleServantParamComponent__DestroyBattlePointGauge(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *battlePointGaugeComponent; // x20
  __int64 v5; // x1
  UnityEngine_Component_o **p_battlePointGaugeComponent; // x19
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B192F8 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B192F8 = 1;
  }
  battlePointGaugeComponent = (UnityEngine_Object_o *)this->fields.battlePointGaugeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(battlePointGaugeComponent, 0LL, 0LL) )
  {
    p_battlePointGaugeComponent = (UnityEngine_Component_o **)&this->fields.battlePointGaugeComponent;
    if ( !*p_battlePointGaugeComponent )
      sub_1BCAA3C(0LL, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_battlePointGaugeComponent, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    *p_battlePointGaugeComponent = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_battlePointGaugeComponent, 0LL, v9, v10, v11, v12, v13, v14);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x19
  Il2CppObject *Item; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  Il2CppObject **v31; // x20
  System_Collections_ICollection_o *v32; // x0
  __int64 v33; // x2
  __int64 v34; // x3
  Il2CppObject *v35; // x20
  System_Action_o *v36; // x21
  __int64 v37; // x1
  Il2CppObject *v38; // x21
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B192F3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, effectDict, *(_QWORD *)&id);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_BattleServantParamComponent___c__DisplayClass125_0__DestroyEffectObject_b__0__, v18, v19);
    sub_1BCA7E0(&BattleServantParamComponent___c__DisplayClass125_0_TypeInfo, v20, v21);
    byte_4B192F3 = 1;
  }
  component = 0LL;
  v22 = sub_1BCAA2C(
          BattleServantParamComponent___c__DisplayClass125_0_TypeInfo,
          effectDict,
          *(_QWORD *)&id,
          forceDestroy);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_19;
  *(_QWORD *)(v22 + 16) = effectDict;
  v31 = (Il2CppObject **)(v22 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 16), (int64_t)effectDict, v25, v26, v27, v28, v29, v30);
  v32 = *(System_Collections_ICollection_o **)(v22 + 16);
  *(_DWORD *)(v22 + 24) = id;
  if ( !BasicHelper__IsNullOrEmpty(v32, 0LL) )
  {
    Item = *v31;
    if ( !*v31 )
      goto LABEL_19;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)Item,
           *(_DWORD *)(v22 + 24),
           (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    {
      if ( !forceDestroy )
      {
        Item = *v31;
        if ( !*v31 )
          goto LABEL_19;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 (System_Collections_Generic_Dictionary_int__object__o *)Item,
                 *(_DWORD *)(v22 + 24),
                 (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
        if ( !Item )
          goto LABEL_19;
        if ( UnityEngine_GameObject__TryGetComponent_object_(
               (UnityEngine_GameObject_o *)Item,
               &component,
               (const MethodInfo_2F63960 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
        {
          v35 = component;
          v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v33, v34);
          System_Action___ctor(
            v36,
            (Il2CppObject *)v22,
            Method_BattleServantParamComponent___c__DisplayClass125_0__DestroyEffectObject_b__0__,
            0LL);
          if ( v35 )
          {
            ((void (__fastcall *)(Il2CppObject *, __int64, System_Action_o *, Il2CppMethodPointer))v35->klass->vtable[8].method)(
              v35,
              1LL,
              v36,
              v35->klass->vtable[9].methodPtr);
            return;
          }
LABEL_19:
          sub_1BCAA3C(Item, v24);
        }
      }
      Item = *v31;
      if ( !*v31 )
        goto LABEL_19;
      v38 = System_Collections_Generic_Dictionary_int__object___get_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)Item,
              *(_DWORD *)(v22 + 24),
              (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
      UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)v38, 0LL);
      Item = *v31;
      if ( !*v31 )
        goto LABEL_19;
      System_Collections_Generic_Dictionary_int__object___Remove(
        (System_Collections_Generic_Dictionary_int__object__o *)Item,
        *(_DWORD *)(v22 + 24),
        (const MethodInfo_320736C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
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
    sub_1BCAA3C(0LL, isSkipEffect);
  ((void (__fastcall *)(struct BattleServantParamComponent_BaseClassIconData_o *, bool, bool, void *, long double))classIconData->klass->vtable._5_DisplayIconEffect.method)(
    classIconData,
    isSkipEffect,
    isAddBuff,
    classIconData->klass[1]._1.image,
    *(long double *)&delayTime);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__EffectStartStop(
        BattleServantParamComponent_o *this,
        System_Collections_Generic_Dictionary_int__GameObject__o *effectDict,
        bool isStart,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  Il2CppObject *currentValue; // x20
  _BOOL8 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v24; // [xsp+20h] [xbp-60h] BYREF
  Il2CppObject *component; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_4B192F5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__, effectDict, isStart);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__,
      v8,
      v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v10,
      v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    this = (BattleServantParamComponent_o *)sub_1BCA7E0(
                                              &Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__,
                                              v16,
                                              v17);
    byte_4B192F5 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  component = 0LL;
  if ( !effectDict
    || (this = (BattleServantParamComponent_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                  (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
                                                  (const MethodInfo_3205CF4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
    sub_1BCAA3C(this, effectDict);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v23,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_38CE2BC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v24,
            (const MethodInfo_3357390 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    currentValue = v24.fields._currentValue;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    v20 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)currentValue, 0LL, 0LL);
    if ( !v20 )
    {
      if ( !currentValue )
        sub_1BCAA3C(v20, v21);
      if ( UnityEngine_GameObject__TryGetComponent_object_(
             (UnityEngine_GameObject_o *)currentValue,
             &component,
             (const MethodInfo_2F63960 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentValue, 1, 0LL);
        if ( isStart )
        {
          if ( !component )
            sub_1BCAA3C(0LL, v22);
          CommonEffectComponent__ForceStart((CommonEffectComponent_o *)component, 0LL);
        }
        else
        {
          if ( !component )
            sub_1BCAA3C(0LL, v22);
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
    &v24,
    (const MethodInfo_335738C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
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
  __int64 v2; // x2
  UnityEngine_Object_o *nextTdGauge; // x20
  struct BattleServantData_o *data; // x0
  BattleNextTDgaugeComponent_o *v6; // x19
  int32_t nexttpturn; // w20
  int32_t maxtpturn; // w21
  _BOOL8 isTDSeraled; // x0
  __int64 v10; // x1

  if ( (byte_4B192E3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B192E3 = 1;
  }
  nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(nextTdGauge, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( data )
    {
      v6 = this->fields.nextTdGauge;
      nexttpturn = data->fields.nexttpturn;
      maxtpturn = data->fields.maxtpturn;
      isTDSeraled = BattleServantData__isTDSeraled(data, 0LL);
      if ( !v6 )
        sub_1BCAA3C(isTDSeraled, v10);
      BattleNextTDgaugeComponent__setInitGauge(v6, nexttpturn, maxtpturn, isTDSeraled, 0LL);
    }
  }
}


void __fastcall BattleServantParamComponent__OnClick(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *target; // x20
  struct BattleServantData_o *data; // x8
  UnityEngine_GameObject_o *v10; // x19
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  int32_t uniqueId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B192C3 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_22488/*"onClickServant"*/, v6, v7);
    byte_4B192C3 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) && this->fields.uniqueID != -1 )
  {
    data = this->fields.data;
    if ( data )
    {
      v10 = this->fields.target;
      uniqueId = data->fields.uniqueId;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &uniqueId);
      if ( !v10 )
        sub_1BCAA3C(v11, v12);
      UnityEngine_GameObject__SendMessage_70135616(v10, (System_String_o *)StringLiteral_22488/*"onClickServant"*/, v11, 0LL);
    }
  }
}


void __fastcall BattleServantParamComponent__OnCompleteShiftGaugeChangeHp(
        BattleServantParamComponent_o *this,
        BattleAction_BasePlayShiftGauge_o *playShiftGauge,
        const MethodInfo *method)
{
  if ( !playShiftGauge )
    sub_1BCAA3C(this, 0LL);
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
  __int64 v6; // x1
  UnityEngine_Object_o *hpGauge; // x21
  __int64 v8; // x1
  BattleHpGaugeBarComponent_o *v9; // x0

  if ( (byte_4B192E6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&nowHp, method);
    byte_4B192E6 = 1;
  }
  BattleServantParamComponent__updateHplabel(this, nowHp, this->fields.shiftGaugeMaxHp, 0, v3);
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL) )
  {
    v9 = this->fields.hpGauge;
    if ( !v9
      || (BattleHpGaugeBarComponent__updateDamageGauge(v9, (float)nowHp / (float)this->fields.shiftGaugeMaxHp, 0LL),
          (v9 = this->fields.hpGauge) == 0LL) )
    {
      sub_1BCAA3C(v9, v8);
    }
    BattleHpGaugeBarComponent__updateNomalGauge(v9, nowHp, 0LL);
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

  if ( (byte_4B192E1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index, effectData);
    byte_4B192E1 = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
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
      sub_1BCAA3C(v10, v8);
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

  if ( (byte_4B192DF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index, effectData);
    byte_4B192DF = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
  v8 = UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL);
  result = 0.0;
  if ( v8 )
  {
    v12 = this->fields.hpShift;
    if ( !v12 )
      sub_1BCAA3C(0LL, v9);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *hpShift; // x22
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  BattleServantHpShiftComponent_o *v20; // x0
  const MethodInfo *v21; // x6
  Il2CppObject *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Action_int__bool__bool__o *v26; // x22
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  BattleCallBack_int__bool__bool__o *v30; // x21
  BattleServantParamComponent_o *v31; // x0
  const MethodInfo *v32; // x2
  System_Collections_IEnumerator_o *v33; // x0
  float nextAnimationTime; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B192E0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__bool__bool__TypeInfo, *(_QWORD *)&index, effectData);
    sub_1BCA7E0(&Method_BattleCallBack_int__bool__bool___ctor__, v9, v10);
    sub_1BCA7E0(&BattleCallBack_int__bool__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_BattleServantHpShiftComponent_UpdateIcon__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B192E0 = 1;
  }
  nextAnimationTime = 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
  if ( UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
  {
    v20 = this->fields.hpShift;
    if ( !v20
      || (BattleServantHpShiftComponent__UpdateIconActive(v20, index, 1, v19), (v20 = this->fields.hpShift) == 0LL) )
    {
      sub_1BCAA3C(v20, v18);
    }
    BattleServantHpShiftComponent__PlayShiftEffectGeneral(v20, index, effectData, this, &nextAnimationTime, 0LL, v21);
    v22 = (Il2CppObject *)this->fields.hpShift;
    v26 = (System_Action_int__bool__bool__o *)sub_1BCAA2C(System_Action_int__bool__bool__TypeInfo, v23, v24, v25);
    System_Action_int__bool__bool____ctor(v26, v22, Method_BattleServantHpShiftComponent_UpdateIcon__, 0LL);
    v30 = (BattleCallBack_int__bool__bool__o *)sub_1BCAA2C(BattleCallBack_int__bool__bool__TypeInfo, v27, v28, v29);
    BattleCallBack_int__bool__bool____ctor(
      v30,
      index,
      0,
      1,
      (System_Action_T1__T2__T3__o *)v26,
      (const MethodInfo_312B32C *)Method_BattleCallBack_int__bool__bool___ctor__);
    v33 = BattleServantParamComponent__DelayMethod(v31, delayTime, (BattleCallBackBase_o *)v30, v32);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v33, 0LL);
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
        sub_1BCAA44(this, method);
      this = (BattleServantParamComponent_o *)skillIcon->m_Items[v4];
      if ( !this )
        break;
      BattleServantSkillIConComponent__RemoveEffectClearRankUpBuff((BattleServantSkillIConComponent_o *)this, method);
      max_length = skillIcon->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1BCAA3C(this, method);
  }
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

  if ( (byte_4B192F9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, flg, method);
    byte_4B192F9 = 1;
  }
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, flg);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.breakSprite;
    if ( !v7 )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(v7, flg, 0LL);
  }
  hplabel = (UnityEngine_Object_o *)this->fields.hplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(hplabel, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.hplabel;
    if ( !v7 )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(v7, !flg, 0LL);
  }
  maxhplabel = (UnityEngine_Object_o *)this->fields.maxhplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(maxhplabel, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.maxhplabel;
    if ( !v7 )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled(v7, !flg, 0LL);
  }
  totalhplabel = (UnityEngine_Object_o *)this->fields.totalhplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(totalhplabel, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.totalhplabel;
    if ( v7 )
    {
      UnityEngine_Behaviour__set_enabled(v7, !flg, 0LL);
      return;
    }
LABEL_24:
    sub_1BCAA3C(v7, v6);
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
    sub_1BCAA3C(showBuffComponent, paramPosData);
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
  if ( (byte_4B192F6 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, svtdata, method);
    byte_4B192F6 = 1;
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, svtdata);
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
        sub_1BCAA3C(this, svtdata);
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
  if ( (byte_4B192F7 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, svtdata, method);
    byte_4B192F7 = 1;
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, svtdata);
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
        sub_1BCAA3C(this, svtdata);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_ICollection_o *ClassIconEffectBuffList; // x23
  __int64 v38; // x1
  __int64 v39; // x2
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  System_Collections_Generic_List_int__o *v42; // x20
  __int64 v43; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x22
  _BOOL8 v45; // x0
  __int64 v46; // x1
  Il2CppObject *current; // x23
  _BOOL8 v48; // x0
  __int64 v49; // x1
  const MethodInfo *v50; // x4
  System_Collections_IEnumerator_o *v51; // x0
  UnityEngine_Coroutine_o *started; // x0
  __int64 v53; // x1
  _BOOL8 v54; // x0
  __int64 monitor_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  __int64 v59; // x1
  System_Collections_Generic_Dictionary_int__object__o *classIconEffectDict; // x0
  int32_t v61; // w20
  _BOOL8 v62; // x0
  const MethodInfo *v63; // x4
  BattleServantParamComponent_o *v64; // x0
  const MethodInfo *v65; // x4
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+40h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4B192F1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_AuraEffectMaster___, servantData, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v33, v34);
    this = (BattleServantParamComponent_o *)sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v35, v36);
    byte_4B192F1 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  entity = 0LL;
  memset(&v67, 0, sizeof(v67));
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
    BattleServantParamComponent__DestroyAllEffect(v4, v4->fields.classIconEffectDict, 0, v40);
    BattleServantParamComponent__DestroyAllEffect(v4, v4->fields.commandSpellEffectDict, 0, v41);
  }
  v42 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v38,
                                                    v39,
                                                    v40);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v43);
  this = (BattleServantParamComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_AuraEffectMaster___);
  if ( !v4->fields.classIconEffectDict )
    goto LABEL_38;
  v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
  this = (BattleServantParamComponent_o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                            (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.classIconEffectDict,
                                            (const MethodInfo_3205B94 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
  if ( (int)this <= 0 )
    v4->fields.currentClassIconAuraEffectPriority = 0;
  if ( !ClassIconEffectBuffList )
    goto LABEL_38;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v66,
    (System_Collections_Generic_List_object__o *)ClassIconEffectBuffList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v69 = v66;
  while ( 1 )
  {
    v45 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v69,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v45 )
      break;
    current = v69.fields._current;
    if ( !v69.fields._current )
      sub_1BCAA3C(v45, v46);
    if ( !v44 )
      sub_1BCAA3C(v45, v46);
    v48 = DataMasterBase_object__object__int___TryGetEntity(
            v44,
            &entity,
            (int32_t)v69.fields._current[21].monitor,
            (const MethodInfo_31B2E94 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    if ( v48 )
    {
      if ( !entity )
        sub_1BCAA3C(v48, v49);
      v51 = BattleServantParamComponent__CoAddClassIconEffect(
              v4,
              HIDWORD(entity[1].klass),
              (int32_t)entity[1].monitor,
              servantData,
              v50);
      started = UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)v4, v51, 0LL);
      if ( !v42 )
        sub_1BCAA3C(started, v53);
      v54 = System_Collections_Generic_List_int___Contains(
              v42,
              (int32_t)current[21].monitor,
              (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v54 )
      {
        monitor_low = LODWORD(current[21].monitor);
        items = v42->fields._items;
        v57 = Method_System_Collections_Generic_List_int__Add__;
        ++v42->fields._version;
        if ( !items )
          sub_1BCAA3C(v54, monitor_low);
        size = v42->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v42,
            monitor_low,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
        }
        else
        {
          v42->fields._size = size + 1;
          items->m_Items[size + 1] = monitor_low;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v69,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v42 )
LABEL_38:
    sub_1BCAA3C(this, servantData);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v66,
    v42,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v67 = v66;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v67,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    classIconEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.classIconEffectDict;
    if ( !classIconEffectDict )
      sub_1BCAA3C(0LL, v59);
    v61 = (int32_t)v67.fields._current;
    v62 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
            classIconEffectDict,
            (int32_t)v67.fields._current,
            (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    if ( !v62 )
    {
      BattleServantParamComponent__DestroyEffectObject(
        (BattleServantParamComponent_o *)v62,
        v4->fields.classIconEffectDict,
        v61,
        0,
        v63);
      BattleServantParamComponent__DestroyEffectObject(v64, v4->fields.commandSpellEffectDict, v61, 0, v65);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v67,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void __fastcall BattleServantParamComponent__UpdateNameLabel(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *nameLabel; // x20
  __int64 v5; // x1
  BattleServantData_o *data; // x0
  UILabel_o *v7; // x19

  if ( (byte_4B192EF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B192EF = 1;
  }
  if ( this->fields.data )
  {
    nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( !data
        || (v7 = this->fields.nameLabel, data = (BattleServantData_o *)BattleServantData__getServantName(data, 0LL), !v7) )
      {
        sub_1BCAA3C(data, v5);
      }
      UILabel__set_text(v7, (System_String_o *)data, 0LL);
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

  if ( (byte_4B192CD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&np, method);
    byte_4B192CD = 1;
  }
  npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&np);
  if ( UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL) )
  {
    v7 = this->fields.npcomp;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
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

  if ( (byte_4B192E2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&curGaugeIndex, method);
    byte_4B192E2 = 1;
  }
  hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&curGaugeIndex);
  if ( UnityEngine_Object__op_Inequality(hpChange, 0LL, 0LL) )
  {
    v7 = this->fields.hpChange;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  UnityEngine_Object_o *hpGauge; // x24
  BattleHpGaugeBarComponent_o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Collections_Hashtable_o *v46; // x22
  __int64 v47; // x0
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 v50; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  char v52[4]; // [xsp+8h] [xbp-78h] BYREF
  float v53; // [xsp+Ch] [xbp-74h] BYREF
  int32_t v54; // [xsp+18h] [xbp-68h] BYREF
  int32_t v55; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4B192E5 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, *(_QWORD *)&fromHp, *(_QWORD *)&toHp);
    sub_1BCA7E0(&System_Collections_Hashtable_TypeInfo, v13, v14);
    sub_1BCA7E0(&int_TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&float_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_19858/*"from"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_20442/*"ignoretimescale"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_22514/*"oncompleteparams"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_22521/*"onupdate"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_10105/*"OnUpdateShiftGaugeChangeHp"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_10009/*"OnCompleteShiftGaugeChangeHp"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_24219/*"to"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v37, v38);
    sub_1BCA7E0(&iTween_TypeInfo, v39, v40);
    byte_4B192E5 = 1;
  }
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&fromHp);
  v42 = (BattleHpGaugeBarComponent_o *)UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL);
  if ( ((unsigned __int8)v42 & 1) != 0 )
  {
    v42 = this->fields.hpGauge;
    if ( !v42 )
      goto LABEL_13;
    BattleHpGaugeBarComponent__setInitValue(v42, fromHp, maxHp, 0LL);
  }
  this->fields.shiftGaugeMaxHp = maxHp;
  if ( !playShiftGauge
    || (playShiftGauge->fields._ChangeToHp_k__BackingField = toHp,
        v46 = (System_Collections_Hashtable_o *)sub_1BCAA2C(System_Collections_Hashtable_TypeInfo, v43, v44, v45),
        System_Collections_Hashtable___ctor_62980980(v46, 0LL),
        v55 = fromHp,
        v42 = (BattleHpGaugeBarComponent_o *)j_il2cpp_value_box_0(int_TypeInfo, &v55),
        !v46) )
  {
LABEL_13:
    sub_1BCAA3C(v42, v43);
  }
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, BattleHpGaugeBarComponent_o *, Il2CppMethodPointer))v46->klass->vtable._23_Add.method)(
    v46,
    StringLiteral_19858/*"from"*/,
    v42,
    v46->klass->vtable._24_Clear.methodPtr);
  v54 = toHp;
  v47 = j_il2cpp_value_box_0(int_TypeInfo, &v54);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v46->klass->vtable._23_Add.method)(
    v46,
    StringLiteral_24219/*"to"*/,
    v47,
    v46->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v46->klass->vtable._23_Add.method)(
    v46,
    StringLiteral_22521/*"onupdate"*/,
    StringLiteral_10105/*"OnUpdateShiftGaugeChangeHp"*/,
    v46->klass->vtable._24_Clear.methodPtr);
  v53 = time;
  v48 = j_il2cpp_value_box_0(float_TypeInfo, &v53);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v46->klass->vtable._23_Add.method)(
    v46,
    StringLiteral_24178/*"time"*/,
    v48,
    v46->klass->vtable._24_Clear.methodPtr);
  v52[0] = 1;
  v49 = j_il2cpp_value_box_0(bool_TypeInfo, v52);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v46->klass->vtable._23_Add.method)(
    v46,
    StringLiteral_20442/*"ignoretimescale"*/,
    v49,
    v46->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v46->klass->vtable._23_Add.method)(
    v46,
    StringLiteral_22513/*"oncomplete"*/,
    StringLiteral_10009/*"OnCompleteShiftGaugeChangeHp"*/,
    v46->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, BattleAction_BasePlayShiftGauge_o *, Il2CppMethodPointer))v46->klass->vtable._23_Add.method)(
    v46,
    StringLiteral_22514/*"oncompleteparams"*/,
    playShiftGauge,
    v46->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v50);
  iTween__ValueTo(gameObject, v46, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__UpdateShortNameLabel(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *shortNameLabel; // x20
  __int64 defaultShortNameLabelWidth; // x1
  BattleServantData_o *data; // x0
  int32_t EnemyNameEffect; // w0
  __int64 v18; // x1
  struct UnityEngine_GameObject_o **p_enemyNameEffectPrefab; // x20
  UnityEngine_Object_o *enemyNameEffectPrefab; // x22
  int32_t v21; // w21
  UnityEngine_Object_o *v22; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  System_String_o *NameEffectPath; // x21
  AssetData_o *AssetStorage; // x0
  Il2CppObject *v28; // x21
  __int64 v29; // x1
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  UILabel_o *v38; // x20
  struct System_String_o *svtOverwriteName; // x8
  float v40; // s8
  float v41; // s1
  float v42; // s0
  float v43; // s2

  if ( (byte_4B192F0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, method, v2);
    sub_1BCA7E0(&AssetManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_17300/*"battle_name"*/, v12, v13);
    byte_4B192F0 = 1;
  }
  if ( this->fields.data )
  {
    shortNameLabel = (UnityEngine_Object_o *)this->fields.shortNameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Equality(shortNameLabel, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_44;
      EnemyNameEffect = BattleServantData__getEnemyNameEffect(data, 0LL);
      p_enemyNameEffectPrefab = &this->fields.enemyNameEffectPrefab;
      enemyNameEffectPrefab = (UnityEngine_Object_o *)this->fields.enemyNameEffectPrefab;
      v21 = EnemyNameEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
      if ( UnityEngine_Object__op_Inequality(enemyNameEffectPrefab, 0LL, 0LL) )
      {
        v22 = (UnityEngine_Object_o *)*p_enemyNameEffectPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, defaultShortNameLabelWidth);
        UnityEngine_Object__Destroy_70154244(v22, 0LL);
      }
      if ( v21 )
      {
        data = (BattleServantData_o *)this->fields.shortNameLabel;
        if ( !data )
          goto LABEL_44;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
        GameObjectExtensions__ResetLocalScale(gameObject, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v24);
        NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v21, 0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v25);
        AssetStorage = AssetManager__getAssetStorage(NameEffectPath, 0LL);
        v28 = AssetStorage
            ? AssetData__GetObject_object__49237568(
                AssetStorage,
                (System_String_o *)StringLiteral_17300/*"battle_name"*/,
                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696)
            : 0LL;
        data = (BattleServantData_o *)this->fields.shortNameLabel;
        if ( !data )
          goto LABEL_44;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
        v31 = UnityEngine_Object__Instantiate_object__49903816(
                v28,
                transform,
                (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
        *p_enemyNameEffectPrefab = (struct UnityEngine_GameObject_o *)v31;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.enemyNameEffectPrefab,
          (int64_t)v31,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
      }
      data = this->fields.data;
      if ( data )
      {
        v38 = this->fields.shortNameLabel;
        data = (BattleServantData_o *)BattleServantData__getServantShortName(data, 0LL);
        if ( v38 )
        {
          UILabel__set_text(v38, (System_String_o *)data, 0LL);
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
          v40 = (float)(LODWORD(data->fields.svtOverwriteBattleName) * svtOverwriteName->fields._stringLength);
          if ( (float)(int)defaultShortNameLabelWidth >= v40 )
          {
            UIWidget__set_width((UIWidget_o *)data, defaultShortNameLabelWidth, 0LL);
            data = (BattleServantData_o *)this->fields.shortNameLabel;
            if ( data )
            {
              data = (BattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
              if ( data )
              {
                v42 = 1.0;
                v41 = 1.0;
                goto LABEL_43;
              }
            }
          }
          else
          {
            UIWidget__set_width((UIWidget_o *)data, (int)v40, 0LL);
            data = (BattleServantData_o *)this->fields.shortNameLabel;
            if ( data )
            {
              data = (BattleServantData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
              if ( data )
              {
                v41 = 1.0;
                v42 = (float)this->fields.defaultShortNameLabelWidth / v40;
LABEL_43:
                v43 = 1.0;
                UnityEngine_Transform__set_localScale(
                  (UnityEngine_Transform_o *)data,
                  *(UnityEngine_Vector3_o *)&v42,
                  0LL);
                return;
              }
            }
          }
        }
      }
LABEL_44:
      sub_1BCAA3C(data, defaultShortNameLabelWidth);
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
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  BattleServantData_o *classIconData; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x1
  UnityEngine_Object_o *levelLabel; // x20
  UILabel_o *v11; // x19

  if ( (byte_4B192D4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B192D4 = 1;
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
    BattleServantParamComponent__UpdateNameLabel(this, v6);
    BattleServantParamComponent__UpdateShortNameLabel(this, v7);
    BattleServantParamComponent__updateSkillIcon(this, 0, v8);
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
    {
      classIconData = this->fields.data;
      if ( classIconData )
      {
        v11 = this->fields.levelLabel;
        classIconData = (BattleServantData_o *)BattleServantData__getLevelLabel(classIconData, 0LL);
        if ( v11 )
        {
          UILabel__set_text(v11, (System_String_o *)classIconData, 0LL);
          return;
        }
      }
LABEL_12:
      sub_1BCAA3C(classIconData, v4);
    }
  }
}


void __fastcall BattleServantParamComponent__UpdateStatusFace(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PartyOrganizationUtility_o *p_facetex; // x19
  UnityEngine_Object_o *facetex; // x21
  __int64 v8; // x1
  BattleServantData_o *data; // x0
  UITexture_o *v10; // x21
  BattleServantData_o *v11; // x8
  int32_t v12; // w20
  __int64 v13; // x1
  int32_t DispLimitCount; // w22
  UITexture_o *Manager__loadStatusFace; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B192EE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v4, v5);
    byte_4B192EE = 1;
  }
  if ( this->fields.data )
  {
    p_facetex = (PartyOrganizationUtility_o *)&this->fields.facetex;
    facetex = (UnityEngine_Object_o *)this->fields.facetex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( !data
        || (v10 = this->fields.facetex,
            data = (BattleServantData_o *)BattleServantData__GetDispImageSvtId(data, 0LL),
            (v11 = this->fields.data) == 0LL) )
      {
        sub_1BCAA3C(data, v8);
      }
      v12 = (int)data;
      DispLimitCount = BattleServantData__getDispLimitCount(v11, 1, 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v13);
      Manager__loadStatusFace = ServantAssetLoadManager__loadStatusFace(v10, v12, DispLimitCount, 0LL);
      p_facetex->klass = (PartyOrganizationUtility_c *)Manager__loadStatusFace;
      sub_1BCA784(p_facetex, (int64_t)Manager__loadStatusFace, v16, v17, v18, v19, v20, v21);
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

  if ( (byte_4B192E4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, nowAndMaxArray, method);
    byte_4B192E4 = 1;
  }
  if ( nowAndMaxArray && nowAndMaxArray->max_length == 2 )
  {
    nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, nowAndMaxArray);
    if ( UnityEngine_Object__op_Inequality(nextTdGauge, 0LL, 0LL) )
    {
      data = this->fields.data;
      if ( data )
      {
        if ( nowAndMaxArray->max_length < 2 )
          sub_1BCAA44(data, v6);
        v8 = this->fields.nextTdGauge;
        v10 = nowAndMaxArray->m_Items[1];
        v9 = nowAndMaxArray->m_Items[2];
        isTDSeraled = BattleServantData__isTDSeraled(data, 0LL);
        if ( !v8 )
          sub_1BCAA3C(isTDSeraled, v12);
        BattleNextTDgaugeComponent__setInitGauge(v8, v10, v9, isTDSeraled, 0LL);
      }
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
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0

  v3 = this;
  if ( (byte_4B192D7 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1BCA7E0(&Method_BattleServantParamComponent_callSkillIcon__, method, v2);
    byte_4B192D7 = 1;
  }
  skillIcon = v3->fields.skillIcon;
  if ( !skillIcon )
LABEL_13:
    sub_1BCAA3C(this, method);
  v5 = 0LL;
  v6 = 0;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BCAA44(this, method);
    this = (BattleServantParamComponent_o *)skillIcon->m_Items[v5];
    if ( this )
    {
      this = (BattleServantParamComponent_o *)BattleServantSkillIConComponent__showChageEffect(
                                                (BattleServantSkillIConComponent_o *)this,
                                                method);
      if ( !(v6 & 1 | (((unsigned __int8)this & 1) == 0)) )
      {
        v8 = Method_BattleServantParamComponent_callSkillIcon__;
        if ( (*((_BYTE *)Method_BattleServantParamComponent_callSkillIcon__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1BCA7F8(Method_BattleServantParamComponent_callSkillIcon__);
        v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
        OverwriteAssetSoundName__PlayCommonSe(v9, 2, 0LL);
        v6 = 1;
      }
      skillIcon = v3->fields.skillIcon;
      ++v5;
      if ( skillIcon )
        continue;
    }
    goto LABEL_13;
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(NowHp, v5);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x20
  System_Object_array *v10; // x0
  __int64 v11; // x1
  BattleServantShowBuffComponent_o *showBuffComponent; // x19
  const MethodInfo *v13; // x2

  if ( (byte_4B192EC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo, v7, v8);
    byte_4B192EC = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  if ( !v9
    || (showBuffComponent = this->fields.showBuffComponent,
        v10 = System_Collections_Generic_List_object___ToArray(
                v9,
                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__),
        !showBuffComponent) )
  {
    sub_1BCAA3C(v10, v11);
  }
  BattleServantShowBuffComponent__setBuffList(showBuffComponent, (BattleBuffData_ShowBuffData_array *)v10, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__clickSkillIcon(
        BattleServantParamComponent_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isLongTap,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *target; // x22
  __int64 v10; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4B192D9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___, skillInfo, isLongTap);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B192D9 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, skillInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    Component_object = this->fields.target;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformancePlayer___)) == 0LL )
    {
      sub_1BCAA3C(Component_object, v10);
    }
    BattlePerformancePlayer__onClickSkillIcon((BattlePerformancePlayer_o *)Component_object, skillInfo, isLongTap, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B192D8 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__86_TypeInfo, method, v2);
    byte_4B192D8 = 1;
  }
  v5 = sub_1BCAA2C(BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__86_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_Object_o *facetex; // x22
  const MethodInfo *v36; // x1
  BattleServantData_o *data; // x0
  UITexture_o *v38; // x22
  int32_t v39; // w23
  __int64 v40; // x1
  int32_t DispLimitCount; // w24
  struct UITexture_o *Manager__loadStatusFace; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x1
  UnityEngine_Object_o *levelLabel; // x21
  UILabel_o *v51; // x21
  UnityEngine_Object_o *nameLabel; // x21
  UILabel_o *v53; // x21
  __int64 v54; // x1
  UnityEngine_Object_o *hpGauge; // x21
  BattleHpGaugeBarComponent_o *v56; // x21
  int32_t v57; // w22
  UnityEngine_Object_o *hpChange; // x21
  struct BattleServantData_o *v59; // x8
  struct System_Int32_array *shiftDeckList; // x9
  UnityEngine_Object_o *hpShift; // x21
  const MethodInfo *v62; // x2
  __int64 v63; // x1
  UnityEngine_Object_o *breakSprite; // x21
  int32_t v65; // w21
  int32_t MaxHp; // w0
  const MethodInfo *v67; // x4
  __int64 v68; // x1
  UnityEngine_Object_o *npcomp; // x21
  struct BattleNpGaugeSystemComponent_o *v70; // x21
  struct BattleServantData_o *v71; // x8
  BattleNpGaugeSystemComponent_o *v72; // x21
  UnityEngine_Object_o *nextTdGauge; // x21
  bool v74; // w0
  const MethodInfo *v75; // x2
  BattleNextTDgaugeComponent_o *v76; // x20
  int32_t nexttpturn; // w21
  int32_t maxtpturn; // w22
  __int64 v79; // x1
  UnityEngine_Object_o *friendIcon; // x20
  struct BattleServantData_o *v81; // x8
  UISprite_o *v82; // x20
  UISprite_o *v83; // x20
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *breakPoint; // x20
  struct BattleServantData_o *v86; // x8
  __int64 v87; // x1
  struct BattleServantData_o *v88; // x8
  ServantBattlePointMaster_o *v89; // x20
  __int64 v90; // x21
  __int64 v91; // x22
  BattleServantData_c *klass; // x8
  BattleServantData_o *v93; // x20
  __int64 v94; // x9
  int32_t *p_offset; // x10
  __int64 v96; // x0
  __int64 v97; // x1
  __int64 v98; // x20
  BattlePointData_o *v99; // x23
  __int64 v100; // x8
  __int64 v101; // x9
  int *v102; // x10
  __int64 v103; // x0
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x21
  __int64 v108; // x0
  __int64 v109; // x1
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  __int64 v116; // x8
  __int64 v117; // x9
  int *v118; // x10
  __int64 v119; // x0
  int64_t v120; // x0
  __int64 v121; // x22
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  __int64 v128; // x0
  __int64 v129; // x1
  BattleServantData_o *v130; // x0
  BattlePointData_o *BattlePointData; // x0
  __int64 v132; // x1
  BattlePointData_o *v133; // x28
  struct BattleServantData_o *v134; // x8
  UnityEngine_Object_o *battlePointRoot; // x23
  _BOOL8 v136; // x0
  __int64 v137; // x1
  Il2CppObject *v138; // x1
  System_String_o *v139; // x19
  __int64 v140; // x1
  __int64 v141; // x2
  __int64 v142; // x3
  AssetLoader_LoadEndDataHandler_o *v143; // x22
  __int64 v144; // x1
  __int64 v145; // x8
  __int64 v146; // x9
  int *v147; // x10
  __int64 v148; // x0
  int v149; // [xsp+Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16

  v3 = notUpdateFlag;
  if ( (byte_4B192D3 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&notUpdateFlag, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantBattlePointMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&FileName_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    sub_1BCA7E0(&int_TypeInfo, v19, v20);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_BattleServantParamComponent___c__DisplayClass79_0__initUpdateView_b__0__, v29, v30);
    sub_1BCA7E0(&BattleServantParamComponent___c__DisplayClass79_0_TypeInfo, v31, v32);
    sub_1BCA7E0(&StringLiteral_3231/*"Battle/BattlePoint/Prefab/{0}"*/, v33, v34);
    byte_4B192D3 = 1;
  }
  if ( !this->fields.data )
    return;
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&notUpdateFlag);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_155;
    v38 = this->fields.facetex;
    data = (BattleServantData_o *)BattleServantData__GetDispImageSvtId(data, 0LL);
    if ( !this->fields.data )
      goto LABEL_155;
    v39 = (int)data;
    DispLimitCount = BattleServantData__getDispLimitCount(this->fields.data, 1, 0LL);
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v40);
    Manager__loadStatusFace = ServantAssetLoadManager__loadStatusFace(v38, v39, DispLimitCount, 0LL);
    this->fields.facetex = Manager__loadStatusFace;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.facetex,
      (int64_t)Manager__loadStatusFace,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  data = (BattleServantData_o *)this->fields.classIconData;
  if ( !data )
    goto LABEL_155;
  ((void (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))data->klass->vtable._4_unknown.method)(
    data,
    data->klass->vtable._5_isAiTarget.methodPtr);
  levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
  if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_155;
    v51 = this->fields.levelLabel;
    data = (BattleServantData_o *)BattleServantData__getLevelLabel(data, 0LL);
    if ( !v51 )
      goto LABEL_155;
    UILabel__set_text(v51, (System_String_o *)data, 0LL);
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
  if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_155;
    v53 = this->fields.nameLabel;
    data = (BattleServantData_o *)BattleServantData__getServantName(data, 0LL);
    if ( !v53 )
      goto LABEL_155;
    UILabel__set_text(v53, (System_String_o *)data, 0LL);
  }
  BattleServantParamComponent__UpdateShortNameLabel(this, v36);
  hpGauge = (UnityEngine_Object_o *)this->fields.hpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54);
  if ( UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_155;
    v56 = this->fields.hpGauge;
    data = (BattleServantData_o *)BattleServantData__getNowHp(data, 0LL);
    if ( !this->fields.data )
      goto LABEL_155;
    v57 = (int)data;
    data = (BattleServantData_o *)BattleServantData__getMaxHp(this->fields.data, 0LL);
    if ( !v56 )
      goto LABEL_155;
    BattleHpGaugeBarComponent__setInitValue(v56, v57, (int32_t)data, 0LL);
  }
  hpChange = (UnityEngine_Object_o *)this->fields.hpChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
  data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(hpChange, 0LL, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    v59 = this->fields.data;
    if ( !v59 )
      goto LABEL_155;
    shiftDeckList = v59->fields.shiftDeckList;
    if ( !shiftDeckList )
      goto LABEL_155;
    data = (BattleServantData_o *)this->fields.hpChange;
    if ( !data )
      goto LABEL_155;
    BattleServantChangeBarComponent__setBarType(
      (BattleServantChangeBarComponent_o *)data,
      1,
      shiftDeckList->max_length - v59->fields.shiftDeckIndex,
      0LL);
  }
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
  if ( UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
  {
    data = (BattleServantData_o *)this->fields.hpShift;
    if ( !data )
      goto LABEL_155;
    BattleServantHpShiftComponent__setInitValue((BattleServantHpShiftComponent_o *)data, this->fields.data, v62);
  }
  BattleServantParamComponent__setAtlas(this, v36);
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v63);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0LL, 0LL) )
  {
    data = (BattleServantData_o *)this->fields.breakSprite;
    if ( !data )
      goto LABEL_155;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)data, 0, 0LL);
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_155;
  data = (BattleServantData_o *)BattleServantData__getNowHp(data, 0LL);
  if ( !this->fields.data )
    goto LABEL_155;
  v65 = (int)data;
  MaxHp = BattleServantData__getMaxHp(this->fields.data, 0LL);
  BattleServantParamComponent__updateHplabel(this, v65, MaxHp, 1, v67);
  npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v68);
  data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    v70 = this->fields.npcomp;
    if ( !v70 )
      goto LABEL_155;
    v70->fields.lineCount = 3;
    data = this->fields.data;
    if ( !data )
      goto LABEL_155;
    v70->fields.maxparam = BattleServantData__getCountMaxNp(data, 0LL);
    data = (BattleServantData_o *)this->fields.npcomp;
    if ( !data )
      goto LABEL_155;
    BattleNpGaugeSystemComponent__InitSliderValue((BattleNpGaugeSystemComponent_o *)data, 0LL);
    v71 = this->fields.data;
    if ( !v71 )
      goto LABEL_155;
    data = (BattleServantData_o *)this->fields.npcomp;
    if ( !data )
      goto LABEL_155;
    BattleNpGaugeSystemComponent__setNowParam((BattleNpGaugeSystemComponent_o *)data, v71->fields.np, 0LL);
    data = this->fields.data;
    if ( !data )
      goto LABEL_155;
    v72 = this->fields.npcomp;
    data = (BattleServantData_o *)BattleServantData__isAddNpGauge(data, 0LL);
    if ( !v72 )
      goto LABEL_155;
    BattleNpGaugeSystemComponent__setUseNp(v72, (unsigned __int8)data & 1, 0LL);
  }
  nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
  v74 = UnityEngine_Object__op_Inequality(nextTdGauge, 0LL, 0LL);
  if ( (v3 & 1) == 0 && v74 )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_155;
    v76 = this->fields.nextTdGauge;
    nexttpturn = data->fields.nexttpturn;
    maxtpturn = data->fields.maxtpturn;
    data = (BattleServantData_o *)BattleServantData__isTDSeraled(data, 0LL);
    if ( !v76 )
      goto LABEL_155;
    BattleNextTDgaugeComponent__setInitGauge(v76, nexttpturn, maxtpturn, (unsigned __int8)data & 1, 0LL);
  }
  BattleServantParamComponent__updateSkillIcon(this, 0, v75);
  friendIcon = (UnityEngine_Object_o *)this->fields.friendIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v79);
  if ( UnityEngine_Object__op_Inequality(friendIcon, 0LL, 0LL) )
  {
    data = (BattleServantData_o *)this->fields.friendIcon;
    if ( !data )
      goto LABEL_155;
    data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
    if ( !data )
      goto LABEL_155;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
    v81 = this->fields.data;
    if ( !v81 )
      goto LABEL_155;
    if ( v81->fields.followerType )
    {
      v82 = this->fields.friendIcon;
      data = (BattleServantData_o *)FileName_TypeInfo;
      if ( !FileName_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FileName_TypeInfo, v36);
      if ( !v82 )
        goto LABEL_155;
      UISprite__set_spriteName(v82, FileName_TypeInfo->static_fields->friendIconName, 0LL);
      data = (BattleServantData_o *)this->fields.friendIcon;
      if ( !data )
        goto LABEL_155;
      data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
      if ( !data )
        goto LABEL_155;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
      v81 = this->fields.data;
      if ( !v81 )
        goto LABEL_155;
    }
    if ( v81->fields.flgEventJoin )
    {
      v83 = this->fields.friendIcon;
      data = (BattleServantData_o *)FileName_TypeInfo;
      if ( !FileName_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FileName_TypeInfo, v36);
      if ( !v83 )
        goto LABEL_155;
      UISprite__set_spriteName(v83, FileName_TypeInfo->static_fields->eventJoinIconName, 0LL);
      data = (BattleServantData_o *)this->fields.friendIcon;
      if ( !data )
        goto LABEL_155;
      data = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
      if ( !data )
        goto LABEL_155;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
    }
  }
  BattleServantParamComponent__setRoleTyoe(this, v36);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_155;
  data = (BattleServantData_o *)perf->fields.data;
  if ( !data )
    goto LABEL_155;
  if ( BattleData__IsWarBoard((BattleData_o *)data, 0LL) )
  {
    breakPoint = (UnityEngine_Object_o *)this->fields.breakPoint;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
    data = (BattleServantData_o *)UnityEngine_Object__op_Inequality(breakPoint, 0LL, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v86 = this->fields.data;
      if ( !v86 )
        goto LABEL_155;
      data = (BattleServantData_o *)this->fields.breakPoint;
      if ( !data )
        goto LABEL_155;
      BattleServantBreakPointComponent__Initialize(
        (BattleServantBreakPointComponent_o *)data,
        v86->fields.defeatPoint,
        v86->fields.maxDefeatPoint,
        v86->fields.isEnemy,
        0LL);
    }
  }
  BattleServantParamComponent__DestroyBattlePointGauge(this, v36);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v87);
  data = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantBattlePointMaster___);
  v88 = this->fields.data;
  if ( !v88 )
    goto LABEL_155;
  v89 = (ServantBattlePointMaster_o *)data;
  v91 = *(_QWORD *)&v88->fields.svtId.fields.currentCryptoKey;
  v90 = *(_QWORD *)&v88->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36);
  *(_QWORD *)&v150.fields.currentCryptoKey = v91;
  *(_QWORD *)&v150.fields.fakeValue = v90;
  data = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v150, 0LL);
  if ( !v89
    || (data = (BattleServantData_o *)ServantBattlePointMaster__GetBattlePointEntities(v89, (int32_t)data, 0LL)) == 0LL )
  {
LABEL_155:
    sub_1BCAA3C(data, v36);
  }
  klass = data->klass;
  v93 = data;
  v94 = *(unsigned __int16 *)(&data->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&data->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ServantBattlePointEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo )
    {
      --v94;
      p_offset += 4;
      if ( !v94 )
        goto LABEL_109;
    }
    v96 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_109:
    v96 = sub_1C1C7C0(data, System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo, 0LL);
  }
  v98 = (*(__int64 (__fastcall **)(BattleServantData_o *, _QWORD))v96)(v93, *(_QWORD *)(v96 + 8));
  if ( !v98 )
    sub_1BCAA3C(0LL, v97);
  v99 = 0LL;
  while ( 1 )
  {
    v100 = *(_QWORD *)v98;
    v101 = *(unsigned __int16 *)(*(_QWORD *)v98 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v98 + 302LL) )
    {
      v102 = (int *)(*(_QWORD *)(v100 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v102 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v101;
        v102 += 4;
        if ( !v101 )
          goto LABEL_117;
      }
      v103 = v100 + 16LL * *v102 + 312;
    }
    else
    {
LABEL_117:
      v103 = sub_1C1C7C0(v98, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v103)(v98, *(_QWORD *)(v103 + 8)) & 1) == 0 )
      break;
    v107 = sub_1BCAA2C(BattleServantParamComponent___c__DisplayClass79_0_TypeInfo, v104, v105, v106);
    System_Object___ctor((Il2CppObject *)v107, 0LL);
    if ( !v107 )
      sub_1BCAA3C(v108, v109);
    *(_QWORD *)(v107 + 24) = this;
    sub_1BCA784((PartyOrganizationUtility_o *)(v107 + 24), (int64_t)this, v110, v111, v112, v113, v114, v115);
    v116 = *(_QWORD *)v98;
    v117 = *(unsigned __int16 *)(*(_QWORD *)v98 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v98 + 302LL) )
    {
      v118 = (int *)(*(_QWORD *)(v116 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ServantBattlePointEntity__c **)v118 - 1) != System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo )
      {
        --v117;
        v118 += 4;
        if ( !v117 )
          goto LABEL_125;
      }
      v119 = v116 + 16LL * *v118 + 312;
    }
    else
    {
LABEL_125:
      v119 = sub_1C1C7C0(v98, System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo, 0LL);
    }
    v120 = (*(__int64 (__fastcall **)(__int64, _QWORD))v119)(v98, *(_QWORD *)(v119 + 8));
    *(_QWORD *)(v107 + 16) = v120;
    v121 = v107 + 16;
    sub_1BCA784((PartyOrganizationUtility_o *)(v107 + 16), v120, v122, v123, v124, v125, v126, v127);
    if ( !*(_QWORD *)(v107 + 16) )
      sub_1BCAA3C(v128, v129);
    v130 = this->fields.data;
    if ( !v130 )
      sub_1BCAA3C(0LL, v129);
    BattlePointData = BattleServantData__GetBattlePointData(v130, *(_DWORD *)(*(_QWORD *)(v107 + 16) + 20LL), 0LL);
    if ( BattlePointData )
      v133 = BattlePointData;
    else
      v133 = v99;
    if ( !BattlePointData )
      goto LABEL_162;
    if ( !v133 )
      sub_1BCAA3C(BattlePointData, v132);
    v99 = BattlePointData;
    if ( !v133->fields._IsHideBattlePointGauge_k__BackingField )
    {
LABEL_162:
      v134 = this->fields.data;
      if ( !v134 )
        sub_1BCAA3C(BattlePointData, v132);
      v99 = v133;
      if ( !v134->fields.isEnemy )
      {
        battlePointRoot = (UnityEngine_Object_o *)this->fields.battlePointRoot;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v132);
        v136 = UnityEngine_Object__op_Inequality(battlePointRoot, 0LL, 0LL);
        v99 = v133;
        if ( v136 )
        {
          if ( !*(_QWORD *)v121 )
            sub_1BCAA3C(v136, v137);
          v149 = *(_DWORD *)(*(_QWORD *)v121 + 20LL);
          v138 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v149);
          v139 = System_String__Format((System_String_o *)StringLiteral_3231/*"Battle/BattlePoint/Prefab/{0}"*/, v138, 0LL);
          v143 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(
                                                       AssetLoader_LoadEndDataHandler_TypeInfo,
                                                       v140,
                                                       v141,
                                                       v142);
          AssetLoader_LoadEndDataHandler___ctor(
            v143,
            (Il2CppObject *)v107,
            Method_BattleServantParamComponent___c__DisplayClass79_0__initUpdateView_b__0__,
            0LL);
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v144);
          AssetManager__loadAssetStorage(v139, v143, 1, 0LL);
          break;
        }
      }
    }
  }
  v145 = *(_QWORD *)v98;
  v146 = *(unsigned __int16 *)(*(_QWORD *)v98 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v98 + 302LL) )
  {
    v147 = (int *)(*(_QWORD *)(v145 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v147 - 1) != System_IDisposable_TypeInfo )
    {
      --v146;
      v147 += 4;
      if ( !v146 )
        goto LABEL_148;
    }
    v148 = v145 + 16LL * *v147 + 312;
  }
  else
  {
LABEL_148:
    v148 = sub_1C1C7C0(v98, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v148)(v98, *(_QWORD *)(v148 + 8));
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
          LOBYTE(this[1].fields.targetMark) = 1;
          BattlePerformance__clickTarget((BattlePerformance_o *)this, v3->fields.index, 0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
  BattlePerformanceMaster__showEnemyServant(masterPerf, this->fields.index, 0LL);
}


void __fastcall BattleServantParamComponent__playAddition(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleServantData_o *data; // x8
  UnityEngine_Component_o *clsIconComponent; // x0
  UnityEngine_Transform_o *transform; // x0
  struct BattleServantData_o *v7; // x8

  if ( (byte_4B192E8 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3242/*"Battle/Prefab/ef_add_enemy"*/, method, v2);
    byte_4B192E8 = 1;
  }
  data = this->fields.data;
  if ( data && data->fields.isAddition )
  {
    clsIconComponent = (UnityEngine_Component_o *)this->fields.clsIconComponent;
    if ( !clsIconComponent
      || (transform = UnityEngine_Component__get_transform(clsIconComponent, 0LL),
          clsIconComponent = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject_38952608(
                                                          (BaseMonoBehaviour_o *)this,
                                                          (System_String_o *)StringLiteral_3242/*"Battle/Prefab/ef_add_enemy"*/,
                                                          transform,
                                                          0LL,
                                                          0LL),
          (v7 = this->fields.data) == 0LL) )
    {
      sub_1BCAA3C(clsIconComponent, method);
    }
    v7->fields.isAddition = 0;
  }
}


void __fastcall BattleServantParamComponent__playAttackEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleServantParamComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_GameObject_array *v8; // x8
  UnityEngine_Object_o *v9; // x20
  UnityEngine_Object_o *facetex; // x20
  struct UnityEngine_GameObject_array *v11; // x20
  UnityEngine_Transform_o *transform; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  v3 = this;
  if ( (byte_4B192D2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    this = (BattleServantParamComponent_o *)sub_1BCA7E0(&StringLiteral_19090/*"effect/ef_cwflash01"*/, v4, v5);
    byte_4B192D2 = 1;
  }
  effectobj = v3->fields.effectobj;
  if ( !effectobj )
    goto LABEL_22;
  if ( !effectobj->max_length )
    goto LABEL_23;
  v7 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = v3->fields.effectobj;
    if ( !v8 )
      goto LABEL_22;
    if ( !v8->max_length )
      goto LABEL_23;
    v9 = (UnityEngine_Object_o *)v8->m_Items[0];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    UnityEngine_Object__Destroy_70154244(v9, 0LL);
  }
  facetex = (UnityEngine_Object_o *)v3->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    this = (BattleServantParamComponent_o *)v3->fields.facetex;
    if ( this )
    {
      v11 = v3->fields.effectobj;
      this = (BattleServantParamComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
      if ( this )
      {
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        this = (BattleServantParamComponent_o *)BaseMonoBehaviour__createObject_38952608(
                                                  (BaseMonoBehaviour_o *)v3,
                                                  (System_String_o *)StringLiteral_19090/*"effect/ef_cwflash01"*/,
                                                  transform,
                                                  0LL,
                                                  0LL);
        if ( v11 )
        {
          if ( v11->max_length )
          {
            v11->m_Items[0] = (UnityEngine_GameObject_o *)this;
            sub_1BCA784((PartyOrganizationUtility_o *)v11->m_Items, (int64_t)this, v13, v14, v15, v16, v17, v18);
            return;
          }
LABEL_23:
          sub_1BCAA44(this, method);
        }
      }
    }
LABEL_22:
    sub_1BCAA3C(this, method);
  }
}


void __fastcall BattleServantParamComponent__playCloseSelectServant(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *facetex; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v9; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4B192C5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B192C5 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v7 )
      sub_1BCAA3C(0LL, v5);
    gameObject = UnityEngine_Component__get_gameObject(v7, 0LL);
    v9.fields.r = 0.5;
    v9.fields.g = 0.5;
    v9.fields.b = 0.5;
    v9.fields.a = 1.0;
    TweenColor__Begin(gameObject, 0.4, v9, 0LL);
  }
  BattleServantParamComponent__setTouch(this, 1, v6);
}


void __fastcall BattleServantParamComponent__playEndShowServant(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *facetex; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v9; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4B192C6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B192C6 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v7 )
      sub_1BCAA3C(0LL, v5);
    gameObject = UnityEngine_Component__get_gameObject(v7, 0LL);
    v9.fields.r = 1.0;
    v9.fields.g = 1.0;
    v9.fields.b = 1.0;
    v9.fields.a = 1.0;
    TweenColor__Begin(gameObject, 0.4, v9, 0LL);
  }
  BattleServantParamComponent__setTouch(this, 1, v6);
}


void __fastcall BattleServantParamComponent__playSelectServant(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *facetex; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v9; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4B192C4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B192C4 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v7 )
      sub_1BCAA3C(0LL, v5);
    gameObject = UnityEngine_Component__get_gameObject(v7, 0LL);
    v9.fields.r = 1.0;
    v9.fields.g = 1.0;
    v9.fields.b = 1.0;
    v9.fields.a = 1.0;
    TweenColor__Begin(gameObject, 0.4, v9, 0LL);
  }
  BattleServantParamComponent__setTouch(this, 1, v6);
}


void __fastcall BattleServantParamComponent__playShiftEffect(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *hpShift; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  BattleServantHpShiftComponent_o *v7; // x0

  if ( (byte_4B192DE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B192DE = 1;
  }
  if ( this->fields.data )
  {
    hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
    {
      v7 = this->fields.hpShift;
      if ( !v7 )
        sub_1BCAA3C(0LL, v5);
      BattleServantHpShiftComponent__playShiftEffect(v7, this->fields.data, v6);
    }
  }
}


float __fastcall BattleServantParamComponent__playShiftEffectBefore(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *hpShift; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  BattleServantHpShiftComponent_o *v7; // x0

  if ( (byte_4B192DD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B192DD = 1;
  }
  if ( !this->fields.data )
    return 0.0;
  hpShift = (UnityEngine_Object_o *)this->fields.hpShift;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(hpShift, 0LL, 0LL) )
    return 0.0;
  v7 = this->fields.hpShift;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return BattleServantHpShiftComponent__playShiftEffectBefore(v7, this->fields.data, v6);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  BattlePerformance_o *perf; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x19
  __int64 v14; // x1
  Il2CppObject *Component_object; // x21
  float LabelPrintedWidth; // s10
  float v17; // s8
  float v18; // s9
  __int64 v19; // x1
  UnityEngine_Object_o *ComponentInChildren_object__49687160; // x23
  _DWORD *monitor; // x8
  int v22; // w22
  _DWORD *v23; // x8
  int v24; // w8
  float sideEffectLabelWidth; // s0
  float v26; // s1
  UnityEngine_Component_o *clsIconComponent; // x8
  UnityEngine_Transform_o *v28; // x20
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B192EB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___,
      buffData,
      method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B192EB = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_34;
  perf = (BattlePerformance_o *)BattlePerformance__get_WrapPopupCtrl(perf, 0LL);
  if ( !buffData || !perf )
    goto LABEL_34;
  v13 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.events)(
                                  perf,
                                  (unsigned int)buffData->fields.popColor,
                                  perf->klass[1]._1.properties);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
  if ( ((unsigned __int8)perf & 1) == 0 )
  {
    if ( !v13 )
      goto LABEL_34;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v13,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
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
    v17 = fminf(this->fields.sideEffectLabelWidth / (float)(LabelPrintedWidth * 0.8), 1.0);
    v18 = 0.0;
    if ( buffData->fields.popIcon >= 1 )
    {
      ComponentInChildren_object__49687160 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_object__49687160(
                                                                       (UnityEngine_GameObject_o *)v13,
                                                                       1,
                                                                       (const MethodInfo_2F62A78 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality(ComponentInChildren_object__49687160, 0LL, 0LL);
      if ( ((unsigned __int8)perf & 1) != 0 )
      {
        if ( !ComponentInChildren_object__49687160 )
          goto LABEL_34;
        BattleServantBuffIconComponent__setImageId(
          (BattleServantBuffIconComponent_o *)ComponentInChildren_object__49687160,
          buffData->fields.popIcon,
          0LL);
        monitor = ComponentInChildren_object__49687160[1].monitor;
        if ( !monitor )
          goto LABEL_34;
        v22 = monitor[42];
        perf = (BattlePerformance_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)ComponentInChildren_object__49687160,
                                        0LL);
        if ( !perf )
          goto LABEL_34;
        perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)perf, 0LL);
        if ( !perf )
          goto LABEL_34;
        v29.fields.x = -(float)((float)((float)(LabelPrintedWidth * 0.5) + (float)((float)v22 * 0.5)) + 5.0);
        v29.fields.y = 0.0;
        v29.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)perf, v29, 0LL);
        v23 = ComponentInChildren_object__49687160[1].monitor;
        if ( !v23 )
          goto LABEL_34;
        v24 = v23[42];
        if ( v17 >= 1.0 )
        {
          sideEffectLabelWidth = this->fields.sideEffectLabelWidth;
          v26 = (float)((float)((float)(LabelPrintedWidth * 0.8) + (float)((float)v24 * 0.8)) + 5.0)
              + (float)((float)(sideEffectLabelWidth - (float)(LabelPrintedWidth * 0.8)) * 0.5);
          v18 = 0.0;
          if ( v26 > sideEffectLabelWidth )
            v18 = v26 - sideEffectLabelWidth;
        }
        else
        {
          v18 = (float)(v17 * (float)((float)v24 * 0.8)) + 5.0;
        }
      }
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13, 0, 0LL);
    perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v13, 0LL);
    clsIconComponent = (UnityEngine_Component_o *)this->fields.clsIconComponent;
    if ( clsIconComponent )
    {
      v28 = (UnityEngine_Transform_o *)perf;
      perf = (BattlePerformance_o *)UnityEngine_Component__get_transform(clsIconComponent, 0LL);
      if ( v28 )
      {
        UnityEngine_Transform__SetParent(v28, (UnityEngine_Transform_o *)perf, 0LL);
        perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v13, 0LL);
        if ( perf )
        {
          v30.fields.y = 1.0;
          v30.fields.z = 1.0;
          v30.fields.x = v17;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)perf, v30, 0LL);
          perf = (BattlePerformance_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v13, 0LL);
          if ( perf )
          {
            v31.fields.y = 0.0;
            v31.fields.z = 0.0;
            v31.fields.x = v18;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)perf, v31, 0LL);
            BattleUIRangeLabel__AddLabelDepth((BattleUIRangeLabel_o *)Component_object, 100, 0LL);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13, 1, 0LL);
            return;
          }
        }
      }
    }
LABEL_34:
    sub_1BCAA3C(perf, buffData);
  }
}


void __fastcall BattleServantParamComponent__setAtlas(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  AssetData_o *AssetStorage; // x0
  __int64 v19; // x1
  Il2CppObject *Component_object; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *breakSprite; // x21
  UIAtlas_o *v23; // x20
  UISprite_o *v24; // x19
  Il2CppObject *v25; // x0
  int v26; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B192D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, method, v2);
    sub_1BCA7E0(&AssetManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v6, v7);
    sub_1BCA7E0(&int_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_3233/*"Battle/Common"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_3251/*"BattleAssetUIAtlas"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_20179/*"hp_break_"*/, v16, v17);
    byte_4B192D6 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3233/*"Battle/Common"*/, 0LL);
  if ( !AssetStorage )
    goto LABEL_14;
  AssetStorage = (AssetData_o *)AssetData__GetObject_object__49237568(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_3251/*"BattleAssetUIAtlas"*/,
                                  (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !AssetStorage )
    goto LABEL_14;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)AssetStorage,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  v23 = (UIAtlas_o *)Component_object;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( UnityEngine_Object__op_Inequality(breakSprite, 0LL, 0LL) )
  {
    AssetStorage = (AssetData_o *)this->fields.breakSprite;
    if ( AssetStorage )
    {
      UISprite__set_atlas((UISprite_o *)AssetStorage, v23, 0LL);
      v24 = this->fields.breakSprite;
      v26 = 1;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
      AssetStorage = (AssetData_o *)System_String__Concat((Il2CppObject *)StringLiteral_20179/*"hp_break_"*/, v25, 0LL);
      if ( v24 )
      {
        UISprite__set_spriteName(v24, (System_String_o *)AssetStorage, 0LL);
        return;
      }
    }
LABEL_14:
    sub_1BCAA3C(AssetStorage, v19);
  }
}


void __fastcall BattleServantParamComponent__setCloseMode(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  UnityEngine_Object_o *facetex; // x20
  TweenColor_o *v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  UnityEngine_Component_o *Item; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t modeWindow; // w8
  Il2CppObject *Component_object; // x20
  __int64 v21; // x1
  Il2CppObject *v22; // x21
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v24; // x21
  __int64 v25; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v27; // x0
  __int64 v28; // x1
  UnityEngine_Component_c *v29; // x8
  UnityEngine_Component_o *v30; // x21
  __int64 v31; // x9
  SimpleAnimation_State_c **v32; // x10
  __int64 v33; // x0
  UnityEngine_Component_c *v34; // x8
  SimpleAnimation_State_c *v35; // x1
  UnityEngine_Component_o *v36; // x21
  __int64 v37; // x9
  SimpleAnimation_State_c **v38; // x10
  __int64 v39; // x9
  __int64 v40; // x0
  UnityEngine_Object_o *battlePointGaugeComponent; // x20
  const MethodInfo *v42; // x2
  UnityEngine_Color_o v43; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4B192C7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Animation___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_13263/*"SvtW_StartClose"*/, v10, v11);
    byte_4B192C7 = 1;
  }
  BattleServantParamComponent__setSkillFlash(this, 0, v2);
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  v14 = (TweenColor_o *)UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL);
  if ( ((unsigned __int8)v14 & 1) != 0 )
  {
    Item = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !Item )
      goto LABEL_59;
    gameObject = UnityEngine_Component__get_gameObject(Item, 0LL);
    v43.fields.r = 0.0;
    v43.fields.g = 0.0;
    v43.fields.b = 0.0;
    v43.fields.a = 0.0;
    v14 = TweenColor__Begin(gameObject, 0.4, v43, 0LL);
    this->fields.isHideFaceTexture = 1;
  }
  modeWindow = this->fields.modeWindow;
  if ( modeWindow == 3 )
    goto LABEL_58;
  if ( modeWindow == 2 )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v22 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
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
                                          (System_String_o *)StringLiteral_13263/*"SvtW_StartClose"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_59;
      klass = Item->klass;
      v24 = Item;
      v25 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v25;
          p_offset += 2;
          if ( !v25 )
            goto LABEL_19;
        }
        v27 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
      }
      else
      {
LABEL_19:
        v27 = sub_1C1C7C0(Item, SimpleAnimation_State_TypeInfo, 4LL);
      }
      (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v27)(v24, *(_QWORD *)(v27 + 8), 0.0);
      Item = (UnityEngine_Component_o *)SimpleAnimation__get_Item(
                                          (SimpleAnimation_o *)Component_object,
                                          (System_String_o *)StringLiteral_13263/*"SvtW_StartClose"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_59;
      v34 = Item->klass;
      v35 = SimpleAnimation_State_TypeInfo;
      v36 = Item;
      v37 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        v38 = (SimpleAnimation_State_c **)&v34->_1.interfaceOffsets->offset;
        while ( *(v38 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v37;
          v38 += 2;
          if ( !v37 )
            goto LABEL_50;
        }
LABEL_51:
        v40 = (__int64)(&v34[1]._1.castClass + 2 * *(_DWORD *)v38);
        goto LABEL_52;
      }
      goto LABEL_50;
    }
  }
  else
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v22 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
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
                                          (System_String_o *)StringLiteral_13263/*"SvtW_StartClose"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_59;
      v29 = Item->klass;
      v30 = Item;
      v31 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        v32 = (SimpleAnimation_State_c **)&v29->_1.interfaceOffsets->offset;
        while ( *(v32 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v31;
          v32 += 2;
          if ( !v31 )
            goto LABEL_29;
        }
        v33 = (__int64)(&v29[1]._1.gc_desc + 2 * *(_DWORD *)v32);
      }
      else
      {
LABEL_29:
        v33 = sub_1C1C7C0(Item, SimpleAnimation_State_TypeInfo, 4LL);
      }
      (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v33)(v30, *(_QWORD *)(v33 + 8), 0.0);
      Item = (UnityEngine_Component_o *)SimpleAnimation__get_Item(
                                          (SimpleAnimation_o *)Component_object,
                                          (System_String_o *)StringLiteral_13263/*"SvtW_StartClose"*/,
                                          0LL);
      if ( !Item )
        goto LABEL_59;
      v34 = Item->klass;
      v35 = SimpleAnimation_State_TypeInfo;
      v36 = Item;
      v39 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        v38 = (SimpleAnimation_State_c **)&v34->_1.interfaceOffsets->offset;
        while ( *(v38 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v39;
          v38 += 2;
          if ( !v39 )
            goto LABEL_50;
        }
        goto LABEL_51;
      }
LABEL_50:
      v40 = sub_1C1C7C0(v36, v35, 8LL);
LABEL_52:
      (*(void (__fastcall **)(UnityEngine_Component_o *, _QWORD, float))v40)(v36, *(_QWORD *)(v40 + 8), 1.0);
      SimpleAnimation__Play_64539336((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13263/*"SvtW_StartClose"*/, 0LL);
      goto LABEL_53;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  Item = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    if ( !v22 )
      goto LABEL_59;
    Item = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(
                                        (UnityEngine_Animation_o *)v22,
                                        (System_String_o *)StringLiteral_13263/*"SvtW_StartClose"*/,
                                        0LL);
    if ( !Item )
      goto LABEL_59;
    UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
    Item = (UnityEngine_Component_o *)UnityEngine_Animation__get_Item(
                                        (UnityEngine_Animation_o *)v22,
                                        (System_String_o *)StringLiteral_13263/*"SvtW_StartClose"*/,
                                        0LL);
    if ( !Item )
      goto LABEL_59;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 1.0, 0LL);
    UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)v22, (System_String_o *)StringLiteral_13263/*"SvtW_StartClose"*/, 0LL);
  }
LABEL_53:
  battlePointGaugeComponent = (UnityEngine_Object_o *)this->fields.battlePointGaugeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  v14 = (TweenColor_o *)UnityEngine_Object__op_Inequality(battlePointGaugeComponent, 0LL, 0LL);
  if ( ((unsigned __int8)v14 & 1) != 0 )
  {
    Item = (UnityEngine_Component_o *)this->fields.battlePointGaugeComponent;
    if ( Item )
    {
      BattlePointGaugeComponent__StartClose((BattlePointGaugeComponent_o *)Item, 0, 0LL);
      goto LABEL_58;
    }
LABEL_59:
    sub_1BCAA3C(Item, v15);
  }
LABEL_58:
  BattleServantParamComponent__EffectStartStop(
    (BattleServantParamComponent_o *)v14,
    this->fields.commandSpellEffectDict,
    0,
    v16);
  this->fields.modeWindow = 3;
  BattleServantParamComponent__setTouch(this, 0, v42);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  UnityEngine_Object_o *clsIconComponent; // x21
  ServantClassIconComponent_o *v18; // x22
  BattleServantParamComponent_ClassIconData_o *v19; // x21
  const MethodInfo *v20; // x3
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  struct BattleServantData_o *v29; // x8
  int32_t uniqueId; // w8
  UnityEngine_Object_o *npcomp; // x20
  __int64 v32; // x1
  BattleNpGaugeSystemComponent_o *v33; // x0
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x3

  if ( (byte_4B192C2 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleServantParamComponent_BaseClassIconData_TypeInfo, data, method);
    sub_1BCA7E0(&BattleServantParamComponent_ClassIconData_TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B192C2 = 1;
  }
  this->fields.modeWindow = 1;
  this->fields.data = data;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.data, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  if ( !data )
    goto LABEL_8;
  clsIconComponent = (UnityEngine_Object_o *)this->fields.clsIconComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Inequality(clsIconComponent, 0LL, 0LL) )
  {
    v18 = this->fields.clsIconComponent;
    v19 = (BattleServantParamComponent_ClassIconData_o *)sub_1BCAA2C(
                                                           BattleServantParamComponent_ClassIconData_TypeInfo,
                                                           v14,
                                                           v15,
                                                           v16);
    BattleServantParamComponent_ClassIconData___ctor(v19, data, v18, v20);
  }
  else
  {
LABEL_8:
    v19 = (BattleServantParamComponent_ClassIconData_o *)sub_1BCAA2C(
                                                           BattleServantParamComponent_BaseClassIconData_TypeInfo,
                                                           v14,
                                                           v15,
                                                           v16);
    System_Object___ctor((Il2CppObject *)v19, 0LL);
  }
  this->fields.classIconData = (struct BattleServantParamComponent_BaseClassIconData_o *)v19;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.classIconData, (int64_t)v19, v21, v22, v23, v24, v25, v26);
  v29 = this->fields.data;
  if ( v29 )
  {
    uniqueId = v29->fields.uniqueId;
  }
  else
  {
    npcomp = (UnityEngine_Object_o *)this->fields.npcomp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
    if ( UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL) )
    {
      v33 = this->fields.npcomp;
      if ( !v33 )
        sub_1BCAA3C(0LL, v32);
      BattleNpGaugeSystemComponent__resetSlider(v33, 0LL);
    }
    uniqueId = -1;
  }
  this->fields.uniqueID = uniqueId;
  BattleServantParamComponent__initUpdateView(this, 0, v28);
  BattleServantParamComponent__updateView(this, v34);
  BattleServantParamComponent__UpdateSkillRankUpEffect(this, v35);
  BattleServantParamComponent__setTargetMark(this, -1, 0, v36);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent__setOpenMode(
        BattleServantParamComponent_o *this,
        bool isPlayCommandSpellEffectStartAnim,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  UnityEngine_Object_o *facetex; // x21
  TweenColor_o *v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x3
  __int64 gameObject; // x0
  UnityEngine_GameObject_o *v20; // x21
  float v21; // s0
  int32_t modeWindow; // w8
  Il2CppObject *Component_object; // x21
  __int64 v24; // x1
  Il2CppObject *v25; // x22
  SimpleAnimation_State_o *Item; // x22
  __int64 v27; // x8
  __int64 v28; // x23
  __int64 v29; // x9
  SimpleAnimation_State_c **v30; // x10
  __int64 v31; // x0
  __int64 v32; // x1
  SimpleAnimation_State_o *v33; // x22
  __int64 v34; // x8
  __int64 v35; // x23
  __int64 v36; // x9
  SimpleAnimation_State_c **v37; // x10
  __int64 v38; // x0
  UnityEngine_AnimationState_o *v39; // x21
  float length; // s0
  long double v41; // q0
  SimpleAnimation_State_c *klass; // x8
  long double v43; // q8
  __int64 v44; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  long double v47; // q0
  SimpleAnimation_State_c *v48; // x8
  long double v49; // q8
  __int64 v50; // x9
  SimpleAnimation_State_c **v51; // x10
  __int64 v52; // x0
  __int64 v53; // x8
  SimpleAnimation_State_c *v54; // x1
  __int64 v55; // x22
  __int64 v56; // x9
  SimpleAnimation_State_c **v57; // x10
  __int64 v58; // x9
  __int64 v59; // x0
  UnityEngine_Object_o *battlePointGaugeComponent; // x21
  const MethodInfo *v61; // x2
  const MethodInfo *v62; // x1
  UnityEngine_Color_o v63; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4B192C8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Animation___, isPlayCommandSpellEffectStartAnim, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_13263/*"SvtW_StartClose"*/, v11, v12);
    byte_4B192C8 = 1;
  }
  BattleServantParamComponent__setSkillFlash(this, 1, method);
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  v15 = (TweenColor_o *)UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL);
  if ( ((unsigned __int8)v15 & 1) != 0 )
  {
    gameObject = (__int64)this->fields.facetex;
    if ( !gameObject )
      goto LABEL_78;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !this->fields.perf )
      goto LABEL_78;
    v20 = (UnityEngine_GameObject_o *)gameObject;
    gameObject = (__int64)BattlePerformance__get_MotionSkip(this->fields.perf, 0LL);
    if ( !gameObject )
      goto LABEL_78;
    v21 = (*(float (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 488LL))(
            gameObject,
            *(_QWORD *)(*(_QWORD *)gameObject + 496LL),
            0.4);
    v63.fields.r = 1.0;
    v63.fields.g = 1.0;
    v63.fields.b = 1.0;
    v63.fields.a = 1.0;
    v15 = TweenColor__Begin(v20, v21, v63, 0LL);
    this->fields.isHideFaceTexture = 0;
  }
  modeWindow = this->fields.modeWindow;
  if ( modeWindow == 2 )
    goto LABEL_75;
  if ( modeWindow == 1 )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v25 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( (gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_78;
      Item = SimpleAnimation__get_Item(
               (SimpleAnimation_o *)Component_object,
               (System_String_o *)StringLiteral_13263/*"SvtW_StartClose"*/,
               0LL);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13263/*"SvtW_StartClose"*/,
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
            goto LABEL_21;
        }
        v31 = v27 + 16LL * (*(_DWORD *)v30 + 13) + 312;
      }
      else
      {
LABEL_21:
        v31 = sub_1C1C7C0(gameObject, SimpleAnimation_State_TypeInfo, 13LL);
      }
      gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
      if ( !Item )
        goto LABEL_78;
      klass = Item->klass;
      v43 = v41;
      v44 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v44;
          p_offset += 2;
          if ( !v44 )
            goto LABEL_46;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
      }
      else
      {
LABEL_46:
        p_method = sub_1C1C7C0(Item, SimpleAnimation_State_TypeInfo, 4LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))p_method)(
        Item,
        *(_QWORD *)(p_method + 8),
        v43);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13263/*"SvtW_StartClose"*/,
                              0LL);
      if ( !gameObject )
        goto LABEL_78;
      v53 = *(_QWORD *)gameObject;
      v54 = SimpleAnimation_State_TypeInfo;
      v55 = gameObject;
      v56 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v57 = (SimpleAnimation_State_c **)(*(_QWORD *)(v53 + 176) + 8LL);
        while ( *(v57 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v56;
          v57 += 2;
          if ( !v56 )
            goto LABEL_67;
        }
LABEL_68:
        v59 = v53 + 16LL * (*(_DWORD *)v57 + 8) + 312;
        goto LABEL_69;
      }
      goto LABEL_67;
    }
  }
  else
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v25 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
    gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( (gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_78;
      v33 = SimpleAnimation__get_Item(
              (SimpleAnimation_o *)Component_object,
              (System_String_o *)StringLiteral_13263/*"SvtW_StartClose"*/,
              0LL);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13263/*"SvtW_StartClose"*/,
                              0LL);
      if ( !gameObject )
        goto LABEL_78;
      v34 = *(_QWORD *)gameObject;
      v35 = gameObject;
      v36 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v37 = (SimpleAnimation_State_c **)(*(_QWORD *)(v34 + 176) + 8LL);
        while ( *(v37 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v36;
          v37 += 2;
          if ( !v36 )
            goto LABEL_31;
        }
        v38 = v34 + 16LL * (*(_DWORD *)v37 + 13) + 312;
      }
      else
      {
LABEL_31:
        v38 = sub_1C1C7C0(gameObject, SimpleAnimation_State_TypeInfo, 13LL);
      }
      gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
      if ( !v33 )
        goto LABEL_78;
      v48 = v33->klass;
      v49 = v47;
      v50 = *(unsigned __int16 *)(&v33->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v33->klass->_2.bitflags2 + 3) )
      {
        v51 = (SimpleAnimation_State_c **)&v48->_1.interfaceOffsets->offset;
        while ( *(v51 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v50;
          v51 += 2;
          if ( !v50 )
            goto LABEL_53;
        }
        v52 = (__int64)&v48->vtable[*(_DWORD *)v51 + 4].method;
      }
      else
      {
LABEL_53:
        v52 = sub_1C1C7C0(v33, SimpleAnimation_State_TypeInfo, 4LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))v52)(v33, *(_QWORD *)(v52 + 8), v49);
      gameObject = (__int64)SimpleAnimation__get_Item(
                              (SimpleAnimation_o *)Component_object,
                              (System_String_o *)StringLiteral_13263/*"SvtW_StartClose"*/,
                              0LL);
      if ( !gameObject )
        goto LABEL_78;
      v53 = *(_QWORD *)gameObject;
      v54 = SimpleAnimation_State_TypeInfo;
      v55 = gameObject;
      v58 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
      if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
      {
        v57 = (SimpleAnimation_State_c **)(*(_QWORD *)(v53 + 176) + 8LL);
        while ( *(v57 - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v58;
          v57 += 2;
          if ( !v58 )
            goto LABEL_67;
        }
        goto LABEL_68;
      }
LABEL_67:
      v59 = sub_1C1C7C0(v55, v54, 8LL);
LABEL_69:
      (*(void (__fastcall **)(__int64, _QWORD, float))v59)(v55, *(_QWORD *)(v59 + 8), -1.0);
      SimpleAnimation__Play_64539336((SimpleAnimation_o *)Component_object, (System_String_o *)StringLiteral_13263/*"SvtW_StartClose"*/, 0LL);
      goto LABEL_70;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    if ( !v25 )
      goto LABEL_78;
    v39 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v25, (System_String_o *)StringLiteral_13263/*"SvtW_StartClose"*/, 0LL);
    gameObject = (__int64)UnityEngine_Animation__get_Item(
                            (UnityEngine_Animation_o *)v25,
                            (System_String_o *)StringLiteral_13263/*"SvtW_StartClose"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_78;
    length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)gameObject, 0LL);
    if ( !v39 )
      goto LABEL_78;
    UnityEngine_AnimationState__set_time(v39, length, 0LL);
    gameObject = (__int64)UnityEngine_Animation__get_Item(
                            (UnityEngine_Animation_o *)v25,
                            (System_String_o *)StringLiteral_13263/*"SvtW_StartClose"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_78;
    UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)gameObject, -1.0, 0LL);
    UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)v25, (System_String_o *)StringLiteral_13263/*"SvtW_StartClose"*/, 0LL);
  }
LABEL_70:
  battlePointGaugeComponent = (UnityEngine_Object_o *)this->fields.battlePointGaugeComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  v15 = (TweenColor_o *)UnityEngine_Object__op_Inequality(battlePointGaugeComponent, 0LL, 0LL);
  if ( ((unsigned __int8)v15 & 1) != 0 )
  {
    gameObject = (__int64)this->fields.battlePointGaugeComponent;
    if ( gameObject )
    {
      BattlePointGaugeComponent__StartOpen((BattlePointGaugeComponent_o *)gameObject, 0LL);
      goto LABEL_75;
    }
LABEL_78:
    sub_1BCAA3C(gameObject, v16);
  }
LABEL_75:
  if ( isPlayCommandSpellEffectStartAnim )
    BattleServantParamComponent__EffectStartStop(
      (BattleServantParamComponent_o *)v15,
      this->fields.commandSpellEffectDict,
      1,
      v18);
  this->fields.modeWindow = 2;
  BattleServantParamComponent__setTouch(this, 1, v17);
  BattleServantParamComponent__updateSkillIcon(this, 0, v61);
  BattleServantParamComponent__RemoveEffectClearRankUpBuff(this, v62);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.perf, (int64_t)inperf, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall BattleServantParamComponent__setRoleTyoe(BattleServantParamComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *roleTypeSprite; // x20
  __int64 transform; // x0
  __int64 v10; // x1
  struct BattleServantData_o *data; // x8
  int32_t roleType; // w8
  __int64 *v13; // x8
  __int64 v14; // x2
  UnityEngine_Transform_o *v15; // x20
  bool v16; // w1

  if ( (byte_4B192D1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19225/*"enemy_icon_leader"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_23364/*"servant_icon"*/, v6, v7);
    byte_4B192D1 = 1;
  }
  roleTypeSprite = (UnityEngine_Object_o *)this->fields.roleTypeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
        v13 = &StringLiteral_19225/*"enemy_icon_leader"*/;
        goto LABEL_17;
      }
      if ( !transform )
        goto LABEL_27;
      if ( roleType == 3 )
      {
        v13 = &StringLiteral_23364/*"servant_icon"*/;
LABEL_17:
        UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)*v13, 0LL);
        transform = (__int64)this->fields.roleTypeSprite;
        if ( transform )
        {
          transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
          v15 = (UnityEngine_Transform_o *)transform;
          if ( !byte_4B109C1 )
          {
            transform = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v10, v14);
            byte_4B109C1 = 1;
          }
          if ( v15 )
          {
            UnityEngine_Transform__set_localPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
            transform = (__int64)this->fields.roleTypeSprite;
            if ( transform )
            {
              transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
              if ( transform )
              {
                v16 = 1;
LABEL_26:
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, v16, 0LL);
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
      v16 = 0;
      goto LABEL_26;
    }
LABEL_27:
    sub_1BCAA3C(transform, v10);
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
    sub_1BCAA3C(this, flg);
  v4 = this;
  v5 = 0LL;
  v6 = flg;
  while ( 1 )
  {
    max_length = skillIcon->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BCAA44(this, flg);
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
  __int64 v8; // x2
  UnityEngine_Object_o *targetMark; // x22
  __int64 v10; // x1
  UnityEngine_Object_o *lockTargetMark; // x22
  const MethodInfo *v12; // x1
  void *data; // x0
  int v14; // w24
  unsigned int localPosition; // s9
  unsigned int v16; // s8
  UIWidget_o *v17; // x22
  UIWidget_o *v18; // x23
  UnityEngine_Object_o *v19; // x21
  UnityEngine_Object_o *v20; // x21
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v22; // x8
  _BOOL4 v23; // w20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B192DC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, *(_QWORD *)&uniqueId, isTargetLock);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B192DC = 1;
  }
  if ( this->fields.data )
  {
    targetMark = (UnityEngine_Object_o *)this->fields.targetMark;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&uniqueId);
    if ( !UnityEngine_Object__op_Equality(targetMark, 0LL, 0LL) )
    {
      lockTargetMark = (UnityEngine_Object_o *)this->fields.lockTargetMark;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      if ( !UnityEngine_Object__op_Equality(lockTargetMark, 0LL, 0LL) )
      {
        data = this->fields.data;
        if ( !data )
          goto LABEL_68;
        v14 = *((_DWORD *)data + 6);
        if ( *((_BYTE *)data + 481) || BattleServantData__get_IsSuperBossUi((BattleServantData_o *)data, 0LL) )
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
        if ( *((_BYTE *)data + 481) || BattleServantData__get_IsSuperBossUi((BattleServantData_o *)data, 0LL) )
        {
          data = this->fields.lockTargetMark;
          if ( !data )
            goto LABEL_68;
          data = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)data, 0LL);
          if ( !data )
            goto LABEL_68;
          v16 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)data, 0LL);
        }
        else
        {
          v16 = -1034289152;
        }
        data = this->fields.targetMark;
        if ( data )
        {
          data = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)data,
                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( this->fields.targetMark )
          {
            v17 = (UIWidget_o *)data;
            data = UnityEngine_GameObject__get_transform(this->fields.targetMark, 0LL);
            if ( data )
            {
              v25.fields.y = 22.0;
              v25.fields.z = 0.0;
              LODWORD(v25.fields.x) = localPosition;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)data, v25, 0LL);
              if ( v17 )
              {
                UIWidget__set_depth(v17, -29, 0LL);
                UIWidget__set_width(v17, 74, 0LL);
                UIWidget__set_height(v17, 74, 0LL);
                data = this->fields.lockTargetMark;
                if ( data )
                {
                  data = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)data,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                  if ( this->fields.lockTargetMark )
                  {
                    v18 = (UIWidget_o *)data;
                    data = UnityEngine_GameObject__get_transform(this->fields.lockTargetMark, 0LL);
                    if ( data )
                    {
                      v26.fields.y = 22.0;
                      v26.fields.z = 0.0;
                      LODWORD(v26.fields.x) = v16;
                      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)data, v26, 0LL);
                      if ( v18 )
                      {
                        UIWidget__set_depth(v18, -30, 0LL);
                        UIWidget__set_width(v18, 74, 0LL);
                        UIWidget__set_height(v18, 74, 0LL);
                        v28.fields.r = 1.0;
                        v28.fields.g = 1.0;
                        v28.fields.b = 1.0;
                        v28.fields.a = 1.0;
                        UIWidget__set_color(v18, v28, 0LL);
                        if ( isTargetLock )
                        {
                          data = this->fields.targetMark;
                          if ( data )
                          {
                            data = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)data, 0LL);
                            if ( data )
                            {
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, v14 == uniqueId, 0LL);
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
                                          if ( v14 != uniqueId )
                                            return;
                                          UIWidget__set_depth(v17, -29, 0LL);
                                          UIWidget__set_width(v17, 70, 0LL);
                                          UIWidget__set_height(v17, 70, 0LL);
                                          data = this->fields.lockTargetMark;
                                          if ( data )
                                          {
                                            data = UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)data,
                                                     0LL);
                                            if ( data )
                                            {
                                              v27.fields.y = 22.0;
                                              v27.fields.z = 0.0;
                                              LODWORD(v27.fields.x) = v16;
                                              UnityEngine_Transform__set_localPosition(
                                                (UnityEngine_Transform_o *)data,
                                                v27,
                                                0LL);
                                              UIWidget__set_depth(v18, -30, 0LL);
                                              UIWidget__set_width(v18, 78, 0LL);
                                              UIWidget__set_height(v18, 78, 0LL);
                                              v29.fields.r = 1.0;
                                              v29.fields.g = 0.0;
                                              v29.fields.b = 0.0;
                                              v29.fields.a = 1.0;
                                              UIWidget__set_color(v18, v29, 0LL);
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
                          v19 = (UnityEngine_Object_o *)this->fields.targetMark;
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
                          if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
                          {
                            data = this->fields.targetMark;
                            if ( !data )
                              goto LABEL_68;
                            data = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)data, 0LL);
                            if ( !data )
                              goto LABEL_68;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, v14 == uniqueId, 0LL);
                          }
                          v20 = (UnityEngine_Object_o *)this->fields.lockTargetMark;
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
                          data = (void *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
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
                            v22 = perf->fields.data;
                            if ( v22 )
                            {
                              if ( !v22->fields.isMultiTargetBattle )
                                return;
                              v23 = uniqueId == -1 || v14 == uniqueId;
                              transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
                              CommonFunction__SetColorAllChild(transform, v23, this->fields.GRAY, 0LL);
                              this->fields.isActiveHpBar = v23;
                              if ( !v23 )
                                return;
                              data = this->fields.showBuffComponent;
                              if ( data )
                              {
                                BattleServantShowBuffComponent__UpdateActiveBuffList(
                                  (BattleServantShowBuffComponent_o *)data,
                                  v12);
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
        sub_1BCAA3C(data, v12);
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
  __int64 v6; // x2
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  BattleServantData_o *data; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B192CA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, flg, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B192CA = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !flg || (data = this->fields.data) != 0LL && BattleServantData__isAlive(data, 0, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( v10 )
    {
      if ( !Component_object )
        sub_1BCAA3C(v10, v11);
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
  __int64 v6; // x2
  UnityEngine_GameObject_o *root; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4B192C9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, flg, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B192C9 = 1;
  }
  root = this->fields.root;
  if ( !root )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(root, flg, 0LL);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
    sub_1BCAA3C(root, flg);
  }
}


void __fastcall BattleServantParamComponent__shiftUpdateStatus(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleServantParamComponent_o *v3; // x21
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v31; // x8
  struct BattleActionData_o *nowAction; // x9
  char v33; // w19
  int32_t NotShiftUpdateFlag; // w0
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x2
  struct BattleServantData_o *data; // x8
  struct BattlePerformance_o *v38; // x8
  struct BattleActionData_o *v39; // x8
  _BOOL4 isSkillShift; // w19
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  int32_t MaxHp; // w0
  const MethodInfo *v44; // x4
  UnityEngine_GameObject_o *gameObject; // x19
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Object_array *v52; // x20
  __int64 v53; // x0
  int64_t v54; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x22
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x21
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int64_t v99; // x21
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  int64_t v112; // x21
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  __int64 v125; // x1
  System_Collections_Hashtable_o *v126; // x0
  __int64 v127; // x0
  char v128[4]; // [xsp+0h] [xbp-40h] BYREF
  int v129; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t NowHp; // [xsp+8h] [xbp-38h] BYREF
  int v131; // [xsp+Ch] [xbp-34h] BYREF

  v3 = this;
  if ( (byte_4B192E7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleServantParamComponent_shiftUpdateStatus__, method, v2);
    sub_1BCA7E0(&bool_TypeInfo, v4, v5);
    sub_1BCA7E0(&int_TypeInfo, v6, v7);
    sub_1BCA7E0(&object___TypeInfo, v8, v9);
    sub_1BCA7E0(&float_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_19858/*"from"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_20442/*"ignoretimescale"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_24565/*"updateShiftHplabel"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_22521/*"onupdate"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_24219/*"to"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_4721/*"ComplateUpdateShiftHplabel"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v26, v27);
    this = (BattleServantParamComponent_o *)sub_1BCA7E0(&iTween_TypeInfo, v28, v29);
    byte_4B192E7 = 1;
  }
  perf = v3->fields.perf;
  if ( !perf )
    goto LABEL_79;
  this = (BattleServantParamComponent_o *)perf->fields.nowAction;
  if ( !this )
    goto LABEL_79;
  this = (BattleServantParamComponent_o *)BattleActionData__IsUpdateShiftHp((BattleActionData_o *)this, 0LL);
  v31 = v3->fields.perf;
  if ( !v31 )
    goto LABEL_79;
  nowAction = v31->fields.nowAction;
  if ( !nowAction )
    goto LABEL_79;
  v33 = (char)this;
  if ( nowAction->fields.isSkillShift )
  {
    this = (BattleServantParamComponent_o *)v3->fields.data;
    if ( !this )
      goto LABEL_79;
    BattleServantData__updateHp((BattleServantData_o *)this, 0LL);
    v31 = v3->fields.perf;
    if ( !v31 )
      goto LABEL_79;
  }
  this = (BattleServantParamComponent_o *)v31->fields.nowAction;
  if ( !this )
    goto LABEL_79;
  NotShiftUpdateFlag = BattleActionData__get_NotShiftUpdateFlag((BattleActionData_o *)this, 0LL);
  BattleServantParamComponent__initUpdateView(v3, NotShiftUpdateFlag, v35);
  data = v3->fields.data;
  if ( data )
    BattleServantParamComponent__updateBuffIcon(v3, data->fields.buffData, v36);
  if ( (v33 & 1) != 0 )
  {
    v38 = v3->fields.perf;
    if ( v38 )
    {
      v39 = v38->fields.nowAction;
      if ( v39 )
      {
        isSkillShift = v39->fields.isSkillShift;
        v41 = Method_BattleServantParamComponent_shiftUpdateStatus__;
        if ( (*((_BYTE *)Method_BattleServantParamComponent_shiftUpdateStatus__ + 83) & 2) != 0 )
          v41 = (_QWORD *)sub_1BCA7F8(Method_BattleServantParamComponent_shiftUpdateStatus__);
        v42 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v41, v41[4]);
        if ( isSkillShift )
        {
          OverwriteAssetSoundName__PlayCommonSe(v42, 24, 0LL);
          return;
        }
        OverwriteAssetSoundName__PlayCommonSe(v42, 16, 0LL);
        this = (BattleServantParamComponent_o *)v3->fields.data;
        if ( this )
        {
          MaxHp = BattleServantData__getMaxHp((BattleServantData_o *)this, 0LL);
          BattleServantParamComponent__updateHplabel(v3, 0, MaxHp, 1, v44);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
          this = (BattleServantParamComponent_o *)sub_1BCA888(object___TypeInfo, 12LL);
          if ( this )
          {
            v52 = (System_Object_array *)this;
            v53 = StringLiteral_19858/*"from"*/;
            if ( StringLiteral_19858/*"from"*/ )
            {
              v53 = sub_1BCA91C(StringLiteral_19858/*"from"*/, v52->obj.klass->_1.element_class);
              if ( !v53 )
                goto LABEL_81;
              v54 = StringLiteral_19858/*"from"*/;
            }
            else
            {
              v54 = 0LL;
            }
            if ( !v52->max_length )
              goto LABEL_80;
            v52->m_Items[0] = (Il2CppObject *)v54;
            sub_1BCA784((PartyOrganizationUtility_o *)v52->m_Items, v54, v46, v47, v48, v49, v50, v51);
            v131 = 0;
            v53 = j_il2cpp_value_box_0(int_TypeInfo, &v131);
            v61 = v53;
            if ( v53 )
            {
              v53 = sub_1BCA91C(v53, v52->obj.klass->_1.element_class);
              if ( !v53 )
                goto LABEL_81;
            }
            if ( v52->max_length <= 1 )
              goto LABEL_80;
            v52->m_Items[1] = (Il2CppObject *)v61;
            sub_1BCA784((PartyOrganizationUtility_o *)&v52->m_Items[1], v61, v55, v56, v57, v58, v59, v60);
            v53 = StringLiteral_24219/*"to"*/;
            if ( StringLiteral_24219/*"to"*/ )
            {
              v53 = sub_1BCA91C(StringLiteral_24219/*"to"*/, v52->obj.klass->_1.element_class);
              if ( !v53 )
                goto LABEL_81;
              v54 = StringLiteral_24219/*"to"*/;
            }
            else
            {
              v54 = 0LL;
            }
            if ( v52->max_length <= 2 )
              goto LABEL_80;
            v52->m_Items[2] = (Il2CppObject *)v54;
            sub_1BCA784((PartyOrganizationUtility_o *)&v52->m_Items[2], v54, v62, v63, v64, v65, v66, v67);
            this = (BattleServantParamComponent_o *)v3->fields.data;
            if ( this )
            {
              NowHp = BattleServantData__getNowHp((BattleServantData_o *)this, 0LL);
              v53 = j_il2cpp_value_box_0(int_TypeInfo, &NowHp);
              v74 = v53;
              if ( !v53 || (v53 = sub_1BCA91C(v53, v52->obj.klass->_1.element_class)) != 0 )
              {
                if ( v52->max_length <= 3 )
                  goto LABEL_80;
                v52->m_Items[3] = (Il2CppObject *)v74;
                sub_1BCA784((PartyOrganizationUtility_o *)&v52->m_Items[3], v74, v68, v69, v70, v71, v72, v73);
                v53 = StringLiteral_22521/*"onupdate"*/;
                if ( StringLiteral_22521/*"onupdate"*/ )
                {
                  v53 = sub_1BCA91C(StringLiteral_22521/*"onupdate"*/, v52->obj.klass->_1.element_class);
                  if ( !v53 )
                    goto LABEL_81;
                  v54 = StringLiteral_22521/*"onupdate"*/;
                }
                else
                {
                  v54 = 0LL;
                }
                if ( v52->max_length <= 4 )
                  goto LABEL_80;
                v52->m_Items[4] = (Il2CppObject *)v54;
                sub_1BCA784((PartyOrganizationUtility_o *)&v52->m_Items[4], v54, v75, v76, v77, v78, v79, v80);
                v53 = StringLiteral_24565/*"updateShiftHplabel"*/;
                if ( StringLiteral_24565/*"updateShiftHplabel"*/ )
                {
                  v53 = sub_1BCA91C(StringLiteral_24565/*"updateShiftHplabel"*/, v52->obj.klass->_1.element_class);
                  if ( !v53 )
                    goto LABEL_81;
                  v54 = StringLiteral_24565/*"updateShiftHplabel"*/;
                }
                else
                {
                  v54 = 0LL;
                }
                if ( v52->max_length <= 5 )
                  goto LABEL_80;
                v52->m_Items[5] = (Il2CppObject *)v54;
                sub_1BCA784((PartyOrganizationUtility_o *)&v52->m_Items[5], v54, v81, v82, v83, v84, v85, v86);
                v53 = StringLiteral_24178/*"time"*/;
                if ( StringLiteral_24178/*"time"*/ )
                {
                  v53 = sub_1BCA91C(StringLiteral_24178/*"time"*/, v52->obj.klass->_1.element_class);
                  if ( !v53 )
                    goto LABEL_81;
                  v54 = StringLiteral_24178/*"time"*/;
                }
                else
                {
                  v54 = 0LL;
                }
                if ( v52->max_length <= 6 )
                  goto LABEL_80;
                v52->m_Items[6] = (Il2CppObject *)v54;
                sub_1BCA784((PartyOrganizationUtility_o *)&v52->m_Items[6], v54, v87, v88, v89, v90, v91, v92);
                v129 = 1069547520;
                v53 = j_il2cpp_value_box_0(float_TypeInfo, &v129);
                v99 = v53;
                if ( !v53 || (v53 = sub_1BCA91C(v53, v52->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v52->max_length <= 7 )
                    goto LABEL_80;
                  v52->m_Items[7] = (Il2CppObject *)v99;
                  sub_1BCA784((PartyOrganizationUtility_o *)&v52->m_Items[7], v99, v93, v94, v95, v96, v97, v98);
                  v53 = StringLiteral_20442/*"ignoretimescale"*/;
                  if ( StringLiteral_20442/*"ignoretimescale"*/ )
                  {
                    v53 = sub_1BCA91C(StringLiteral_20442/*"ignoretimescale"*/, v52->obj.klass->_1.element_class);
                    if ( !v53 )
                      goto LABEL_81;
                    v54 = StringLiteral_20442/*"ignoretimescale"*/;
                  }
                  else
                  {
                    v54 = 0LL;
                  }
                  if ( v52->max_length <= 8 )
                    goto LABEL_80;
                  v52->m_Items[8] = (Il2CppObject *)v54;
                  sub_1BCA784((PartyOrganizationUtility_o *)&v52->m_Items[8], v54, v100, v101, v102, v103, v104, v105);
                  v128[0] = 1;
                  v53 = j_il2cpp_value_box_0(bool_TypeInfo, v128);
                  v112 = v53;
                  if ( !v53 || (v53 = sub_1BCA91C(v53, v52->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v52->max_length <= 9 )
                      goto LABEL_80;
                    v52->m_Items[9] = (Il2CppObject *)v112;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)&v52->m_Items[9],
                      v112,
                      v106,
                      v107,
                      v108,
                      v109,
                      v110,
                      v111);
                    v53 = StringLiteral_22513/*"oncomplete"*/;
                    if ( StringLiteral_22513/*"oncomplete"*/ )
                    {
                      v53 = sub_1BCA91C(StringLiteral_22513/*"oncomplete"*/, v52->obj.klass->_1.element_class);
                      if ( !v53 )
                        goto LABEL_81;
                      v54 = StringLiteral_22513/*"oncomplete"*/;
                    }
                    else
                    {
                      v54 = 0LL;
                    }
                    if ( v52->max_length <= 0xA )
                      goto LABEL_80;
                    v52->m_Items[10] = (Il2CppObject *)v54;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)&v52->m_Items[10],
                      v54,
                      v113,
                      v114,
                      v115,
                      v116,
                      v117,
                      v118);
                    v53 = StringLiteral_4721/*"ComplateUpdateShiftHplabel"*/;
                    if ( !StringLiteral_4721/*"ComplateUpdateShiftHplabel"*/ )
                    {
                      v54 = 0LL;
LABEL_74:
                      if ( v52->max_length > 0xB )
                      {
                        v52->m_Items[11] = (Il2CppObject *)v54;
                        sub_1BCA784(
                          (PartyOrganizationUtility_o *)&v52->m_Items[11],
                          v54,
                          v119,
                          v120,
                          v121,
                          v122,
                          v123,
                          v124);
                        if ( !iTween_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v125);
                        v126 = iTween__Hash(v52, 0LL);
                        iTween__ValueTo(gameObject, v126, 0LL);
                        return;
                      }
LABEL_80:
                      sub_1BCAA44(v53, v54);
                    }
                    v53 = sub_1BCA91C(StringLiteral_4721/*"ComplateUpdateShiftHplabel"*/, v52->obj.klass->_1.element_class);
                    if ( v53 )
                    {
                      v54 = StringLiteral_4721/*"ComplateUpdateShiftHplabel"*/;
                      goto LABEL_74;
                    }
                  }
                }
              }
LABEL_81:
              v127 = sub_1BCAA60(v53);
              sub_1BCA908(v127, 0LL);
            }
          }
        }
      }
    }
LABEL_79:
    sub_1BCAA3C(this, method);
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

  if ( (byte_4B192E9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__, buffData, method);
    byte_4B192E9 = 1;
  }
  sideEffectShowQueue = (System_Collections_Generic_Queue_T__o *)this->fields.sideEffectShowQueue;
  if ( !sideEffectShowQueue )
    sub_1BCAA3C(0LL, buffData);
  System_Collections_Generic_Queue_object___Enqueue(
    sideEffectShowQueue,
    (Il2CppObject *)buffData,
    (const MethodInfo_37143B8 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Enqueue__);
  if ( !this->fields.isShowingSideEffect )
  {
    this->fields.isShowingSideEffect = 1;
    v7 = BattleServantParamComponent__showSideEffectList(this, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleServantParamComponent__showSideEffectList(
        BattleServantParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B192EA & 1) == 0 )
  {
    sub_1BCA7E0(&BattleServantParamComponent__showSideEffectList_d__113_TypeInfo, method, v2);
    byte_4B192EA = 1;
  }
  v5 = sub_1BCAA2C(BattleServantParamComponent__showSideEffectList_d__113_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleServantParamComponent__updateBuffIcon(
        BattleServantParamComponent_o *this,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *showBuffComponent; // x21
  BattleBuffData_ShowBuffData_array *ShowServantParam; // x0
  const MethodInfo *v15; // x1
  BattleServantShowBuffComponent_o *v16; // x21
  const MethodInfo *v17; // x2
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  struct BattleServantData_o *v20; // x8
  UnityEngine_Transform_o *transform; // x0
  struct BattleServantData_o *v22; // x8
  __int64 v23; // x1
  BattleActorControl_o *ServantActor; // x21
  struct BattleFBXComponent_o *fbxcomponent; // x8
  System_String_o *currentCommonAnimName; // x22
  System_String_o *v27; // x0
  HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_c *v28; // x8
  int v29; // w9
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  struct BattleServantData_o *v32; // x8
  int max_length; // w8
  BattleBuffData_ShowBuffData_array *v34; // x21
  int v35; // w24
  char v36; // w22
  BattleBuffData_ShowBuffData_o *v37; // x27
  int bounds; // w27
  struct BattleServantData_o *v39; // x8
  __int64 v40; // x1
  UnityEngine_Object_o *v41; // x20
  System_Enum_o v42; // [xsp+8h] [xbp-68h] BYREF
  int v43; // [xsp+18h] [xbp-58h]

  if ( (byte_4B192DB & 1) == 0 )
  {
    sub_1BCA7E0(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, buffData, method);
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_13429/*"TAMAMOCAT_STUN_BUFF_ID"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_24854/*"wait"*/, v11, v12);
    byte_4B192DB = 1;
  }
  showBuffComponent = (UnityEngine_Object_o *)this->fields.showBuffComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, buffData);
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)UnityEngine_Object__op_Equality(showBuffComponent, 0LL, 0LL);
  if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
    return;
  if ( !buffData )
    goto LABEL_54;
  v16 = this->fields.showBuffComponent;
  ShowServantParam = BattleBuffData__getShowServantParam(buffData, 0LL);
  if ( !v16 )
    goto LABEL_54;
  BattleServantShowBuffComponent__setBuffList(v16, ShowServantParam, v17);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_54;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_54;
  if ( data->fields.isMultiTargetBattle )
  {
    v20 = this->fields.data;
    if ( !v20 )
      goto LABEL_54;
    if ( v20->fields.isEnemy )
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
        BattleServantShowBuffComponent__UpdateActiveBuffList((BattleServantShowBuffComponent_o *)ShowServantParam, v15);
      }
    }
  }
  v22 = this->fields.data;
  if ( !v22 || (ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.perf) == 0LL )
LABEL_54:
    sub_1BCAA3C(ShowServantParam, v15);
  ServantActor = BattlePerformance__getServantActor((BattlePerformance_o *)ShowServantParam, v22->fields.uniqueId, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
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
      v42.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
      v42.monitor = (void *)-1LL;
      v43 = 9;
      v27 = System_Enum__ToString(&v42, 0LL);
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)BasicHelper__EqualExceptNullOrEmpty(
                                                                currentCommonAnimName,
                                                                v27,
                                                                0LL);
      if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
      {
        v28 = HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
        v29 = 49;
LABEL_30:
        v42.klass = (System_Enum_c *)v28;
        v42.monitor = (void *)-1LL;
        v43 = v29;
        v31 = System_Enum__ToString(&v42, 0LL);
        BattleActorControl__playAnimation_44433272(ServantActor, v31, 0, 0LL);
      }
    }
    else
    {
      v42.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
      v42.monitor = (void *)-1LL;
      v43 = 49;
      v30 = System_Enum__ToString(&v42, 0LL);
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)BasicHelper__EqualExceptNullOrEmpty(
                                                                currentCommonAnimName,
                                                                v30,
                                                                0LL);
      if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
      {
        v28 = HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
        v29 = 9;
        goto LABEL_30;
      }
    }
  }
  v32 = this->fields.data;
  if ( !v32 )
    goto LABEL_54;
  if ( !v32->fields.isSleepWaitMode )
    return;
  ShowServantParam = (BattleBuffData_ShowBuffData_array *)BattleBuffData__getActiveList(buffData, 1, 0LL);
  if ( !ShowServantParam )
    goto LABEL_54;
  max_length = ShowServantParam->max_length;
  v34 = ShowServantParam;
  if ( max_length < 1 )
    goto LABEL_58;
  v35 = 0;
  v36 = 0;
  do
  {
    if ( v35 >= (unsigned int)max_length )
      sub_1BCAA44(ShowServantParam, v15);
    v37 = v34->m_Items[v35];
    if ( !v37 )
      goto LABEL_54;
    if ( !BYTE1(v37[7].klass) )
    {
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)BattleBuffData__get_buffMst(buffData, 0LL);
      if ( !ShowServantParam )
        goto LABEL_54;
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)DataMasterBase_object__object__int___GetEntity(
                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)ShowServantParam,
                                                                v37->fields.buffId,
                                                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !ShowServantParam )
        goto LABEL_54;
      bounds = (int)ShowServantParam->bounds;
      ShowServantParam = (BattleBuffData_ShowBuffData_array *)ConstantMaster__getValue(
                                                                (System_String_o *)StringLiteral_13429/*"TAMAMOCAT_STUN_BUFF_ID"*/,
                                                                0LL);
      v36 |= bounds == (_DWORD)ShowServantParam;
    }
    max_length = v34->max_length;
    ++v35;
  }
  while ( v35 < max_length );
  if ( (v36 & 1) == 0 )
  {
LABEL_58:
    ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.data;
    if ( !ShowServantParam )
      goto LABEL_54;
    BattleServantData__SetIsSleepWaitMode((BattleServantData_o *)ShowServantParam, 0, 0LL);
    v39 = this->fields.data;
    if ( !v39 )
      goto LABEL_54;
    ShowServantParam = (BattleBuffData_ShowBuffData_array *)this->fields.perf;
    if ( !ShowServantParam )
      goto LABEL_54;
    v41 = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                    (BattlePerformance_o *)ShowServantParam,
                                    v39->fields.uniqueId,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
    ShowServantParam = (BattleBuffData_ShowBuffData_array *)UnityEngine_Object__op_Inequality(v41, 0LL, 0LL);
    if ( ((unsigned __int8)ShowServantParam & 1) != 0 )
    {
      if ( v41 )
      {
        if ( BattleActorControl__checkID((BattleActorControl_o *)v41, this->fields.uniqueID, 0LL) )
          BattleActorControl__playAnimation_44433272(
            (BattleActorControl_o *)v41,
            (System_String_o *)StringLiteral_24854/*"wait"*/,
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
  __int64 v13; // x1
  UnityEngine_Object_o *ServantActor; // x20
  System_Int32_array *AuraIdList; // x1

  if ( (byte_4B192DA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, svtData, doAuraUpdate);
    byte_4B192DA = 1;
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
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
            sub_1BCAA3C(perf, v10);
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
  __int64 v9; // x1
  UnityEngine_Object_o *hpGauge; // x23
  int v11; // w22
  bool v12; // w0

  if ( (byte_4B192CF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&now, *(_QWORD *)&max);
    byte_4B192CF = 1;
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
  v11 = v8;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v12 = UnityEngine_Object__op_Inequality(hpGauge, 0LL, 0LL);
  if ( (v11 & 0x80000000) != 0 )
  {
    if ( v12 )
    {
      data = this->fields.hpGauge;
      if ( !data )
        goto LABEL_14;
      BattleHpGaugeBarComponent__setZero(data, 0LL);
    }
  }
  else if ( v12 )
  {
    data = this->fields.hpGauge;
    if ( data )
    {
      BattleHpGaugeBarComponent__setValue(data, now, max, 0LL);
      return;
    }
LABEL_14:
    sub_1BCAA3C(data, *(_QWORD *)&now);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 *v21; // x9
  System_String_o *v22; // x23
  UnityEngine_Object_o *hplabel; // x24
  __int64 v24; // x1
  UILabel_o *v25; // x24
  Il2CppObject *v26; // x0
  System_String_o *data; // x0
  __int64 v28; // x1
  Il2CppObject *Component_object; // x24
  UnityEngine_Object_o *maxhplabel; // x24
  __int64 v31; // x1
  UILabel_o *v32; // x24
  Il2CppObject *v33; // x0
  UnityEngine_Object_o *totalhplabel; // x23
  __int64 v35; // x1
  UILabel_o *v36; // x23
  Il2CppObject *v37; // x24
  Il2CppObject *v38; // x0
  __int64 *v39; // x8
  UnityEngine_Object_o *breakSprite; // x22
  bool isShiftableServant; // w0
  const MethodInfo *v42; // x2
  int32_t v43; // [xsp+8h] [xbp-48h] BYREF
  int32_t v44; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B192D0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, *(_QWORD *)&now, *(_QWORD *)&max);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_25238/*"{0}"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_25309/*"{0}/{1}"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_25191/*"{0:#,0}/{1:#,0}"*/, v19, v20);
    byte_4B192D0 = 1;
  }
  if ( this->fields.hpformatflg )
    v21 = &StringLiteral_25188/*"{0:#,0}"*/;
  else
    v21 = &StringLiteral_25238/*"{0}"*/;
  v22 = (System_String_o *)*v21;
  hplabel = (UnityEngine_Object_o *)this->fields.hplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&now);
  if ( UnityEngine_Object__op_Inequality(hplabel, 0LL, 0LL) )
  {
    v25 = this->fields.hplabel;
    v44 = now;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
    data = System_String__Format(v22, v26, 0LL);
    if ( !v25 )
      goto LABEL_36;
    UILabel__set_text(v25, data, 0LL);
    data = (System_String_o *)this->fields.hplabel;
    if ( !data )
      goto LABEL_36;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)data,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  if ( UnityEngine_Object__op_Inequality(maxhplabel, 0LL, 0LL) )
  {
    v32 = this->fields.maxhplabel;
    v44 = max;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
    data = System_String__Format(v22, v33, 0LL);
    if ( !v32 )
      goto LABEL_36;
    UILabel__set_text(v32, data, 0LL);
  }
  totalhplabel = (UnityEngine_Object_o *)this->fields.totalhplabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
  if ( UnityEngine_Object__op_Inequality(totalhplabel, 0LL, 0LL) )
  {
    v36 = this->fields.totalhplabel;
    if ( this->fields.hpformatflg )
    {
      v44 = now;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
      v43 = max;
      v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
      v39 = &StringLiteral_25191/*"{0:#,0}/{1:#,0}"*/;
    }
    else
    {
      v44 = now;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
      v43 = max;
      v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
      v39 = &StringLiteral_25309/*"{0}/{1}"*/;
    }
    data = System_String__Format_62415592((System_String_o *)*v39, v37, v38, 0LL);
    if ( !v36 )
      goto LABEL_36;
    UILabel__set_text(v36, data, 0LL);
  }
  breakSprite = (UnityEngine_Object_o *)this->fields.breakSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
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
    sub_1BCAA3C(data, v24);
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
  if ( (byte_4B192CB & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, svtdata, method);
    byte_4B192CB = 1;
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, svtdata);
    if ( UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL) )
    {
      this = (BattleServantParamComponent_o *)v4->fields.npcomp;
      if ( this )
      {
        BattleNpGaugeSystemComponent__changeParam((BattleNpGaugeSystemComponent_o *)this, svtdata->fields.np, 0LL);
        return;
      }
LABEL_12:
      sub_1BCAA3C(this, svtdata);
    }
  }
}


void __fastcall BattleServantParamComponent__updateNp_44808296(
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
  if ( (byte_4B192CC & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, svtdata, npArray);
    byte_4B192CC = 1;
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, svtdata);
    v11 = UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL);
    if ( npArray )
    {
      if ( v11 )
      {
        max_length = npArray->max_length;
        if ( (int)max_length > index )
        {
          if ( max_length <= index )
            sub_1BCAA44(v11, svtdata);
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
          sub_1BCAA3C(this, svtdata);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA3C(0LL, *(_QWORD *)&nowHp);
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
      sub_1BCAA3C(BuffData, v6);
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
          sub_1BCAA44(BuffData, v6);
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

  if ( (byte_4B192CE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, svtData, method);
    byte_4B192CE = 1;
  }
  nextTdGauge = (UnityEngine_Object_o *)this->fields.nextTdGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, svtData);
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
      sub_1BCAA3C(data, v5);
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
  __int64 v5; // x1
  BattleActorControl_o *PartsActor; // x20
  BattleServantData_o *data; // x0
  int32_t v8; // w20
  int32_t MaxHp; // w0
  const MethodInfo *v10; // x4
  int32_t v11; // w20
  int32_t v12; // w0
  const MethodInfo *v13; // x3
  __int64 v14; // x1
  UnityEngine_Object_o *npcomp; // x20
  const MethodInfo *v16; // x2
  struct BattleServantData_o *v17; // x8
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  struct BattleServantData_o *v20; // x8

  v3 = this;
  if ( (byte_4B192D5 & 1) == 0 )
  {
    this = (BattleServantParamComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B192D5 = 1;
  }
  perf = v3->fields.perf;
  if ( !perf )
    goto LABEL_33;
  this = (BattleServantParamComponent_o *)perf->fields.data;
  if ( !this )
    goto LABEL_33;
  if ( !BYTE6(this[1].fields.sideEffectShowQueue) )
    goto LABEL_17;
  PartsActor = BattleData__GetPartsActor((BattleData_o *)this, 1, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
              v8 = (int)this;
              MaxHp = BattleServantData__getMaxHp(v3->fields.data, 0LL);
              BattleServantParamComponent__updateHplabel(v3, v8, MaxHp, 1, v10);
              this = (BattleServantParamComponent_o *)v3->fields.data;
              if ( this )
              {
                this = (BattleServantParamComponent_o *)BattleServantData__getNowHp((BattleServantData_o *)this, 0LL);
                if ( v3->fields.data )
                {
                  v11 = (int)this;
                  v12 = BattleServantData__getMaxHp(v3->fields.data, 0LL);
                  BattleServantParamComponent__updateHpbar(v3, v11, v12, v13);
                  npcomp = (UnityEngine_Object_o *)v3->fields.npcomp;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
                  this = (BattleServantParamComponent_o *)UnityEngine_Object__op_Inequality(npcomp, 0LL, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    v17 = v3->fields.data;
                    if ( !v17 )
                      goto LABEL_33;
                    this = (BattleServantParamComponent_o *)v3->fields.npcomp;
                    if ( !this )
                      goto LABEL_33;
                    BattleNpGaugeSystemComponent__setNowParam(
                      (BattleNpGaugeSystemComponent_o *)this,
                      v17->fields.np,
                      0LL);
                  }
                  BattleServantParamComponent__updateTDGauge(v3, (BattleServantData_o *)method, v16);
                  BattleServantParamComponent__updateSkillIcon(v3, 0, v18);
                  v20 = v3->fields.data;
                  if ( v20 )
                  {
                    BattleServantParamComponent__updateBuffIcon(v3, v20->fields.buffData, v19);
                    return;
                  }
                }
              }
            }
          }
        }
LABEL_33:
        sub_1BCAA3C(this, method);
      }
    }
  }
  BattleServantParamComponent__setTouch(v3, 0, v2);
  this = (BattleServantParamComponent_o *)v3->fields.root;
  if ( !this )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)svtData, v7, v8, v9, v10, v11, v12);
  this->fields.ClassIconComp = classIconComp;
  sub_1BCA784(
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
  BattleServantParamComponent_ClassIconData__ChangeClassIcon_44828656(this, this->fields.CurClassId, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantParamComponent_ClassIconData__ChangeClassIcon_44828656(
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
          0LL),
        (v5 = v4->fields.SvtData) == 0LL) )
  {
    sub_1BCAA3C(this, *(_QWORD *)&classId);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x21
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o **v30; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int32_t v43; // w22
  UnityEngine_GameObject_o *EffectObject; // x1
  UnityEngine_GameObject_o **v45; // x22
  __int64 v46; // x1
  UnityEngine_Object_o *v47; // x24
  __int64 v48; // x2
  __int64 v49; // x3
  Il2CppObject *v50; // x23
  System_Action_object__o *v51; // x24
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *v58; // x8
  UnityEngine_GameObject_o *v59; // x25
  int32_t EffectId; // w23
  UnityEngine_GameObject_o *ParentObj; // x24
  __int64 v62; // x2
  __int64 v63; // x3
  float DelayTime; // s8
  UnityEngine_MonoBehaviour_o *ClassIconComp; // x23
  System_Action_o *v66; // x24
  int64_t v67; // x1
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  Il2CppObject *component; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B19300 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__TypeInfo, arg, noEffectAction);
    sub_1BCA7E0(&System_Action_TypeInfo, v7, v8);
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__0__, v15, v16);
    sub_1BCA7E0(&Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__1__, v17, v18);
    sub_1BCA7E0(&BattleServantParamComponent_ClassIconData___c__DisplayClass16_0_TypeInfo, v19, v20);
    byte_4B19300 = 1;
  }
  component = 0LL;
  v21 = sub_1BCAA2C(
          BattleServantParamComponent_ClassIconData___c__DisplayClass16_0_TypeInfo,
          arg,
          noEffectAction,
          method);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_25;
  *(_QWORD *)(v21 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = arg;
  v30 = (struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o **)(v21 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)arg, v31, v32, v33, v34, v35, v36);
  if ( !*(_QWORD *)(v21 + 24) )
    goto LABEL_25;
  v43 = *(_DWORD *)(*(_QWORD *)(v21 + 24) + 16LL);
  if ( v43 < 1 )
  {
    EffectObject = 0LL;
  }
  else
  {
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v23);
    EffectObject = BattleEffectUtility__getEffectObject(v43, 0LL, 1, 0LL);
  }
  *(_QWORD *)(v21 + 32) = EffectObject;
  v45 = (UnityEngine_GameObject_o **)(v21 + 32);
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)EffectObject, v37, v38, v39, v40, v41, v42);
  v47 = *(UnityEngine_Object_o **)(v21 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46);
  if ( !UnityEngine_Object__op_Inequality(v47, 0LL, 0LL) )
  {
    ActionExtensions__Call(noEffectAction, 0LL);
    return *v45;
  }
  Component_object = *v45;
  if ( !*v45 )
    goto LABEL_25;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__TryGetComponent_object_(
                                                   Component_object,
                                                   &component,
                                                   (const MethodInfo_2F63960 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    v50 = component;
    v51 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, v23, v48, v49);
    System_Action_object____ctor(
      v51,
      (Il2CppObject *)v21,
      Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__0__,
      0LL);
    if ( !v50 )
      goto LABEL_25;
    v50[12].klass = (Il2CppClass *)v51;
    sub_1BCA784((PartyOrganizationUtility_o *)&v50[12], (int64_t)v51, v52, v53, v54, v55, v56, v57);
  }
  v58 = *v30;
  if ( !*v30 )
    goto LABEL_25;
  v59 = *v45;
  EffectId = v58->fields.EffectId;
  ParentObj = v58->fields.ParentObj;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v23);
  BattleEffectUtility__SetEffectParent(v59, EffectId, ParentObj, 0LL);
  if ( !*v30
    || (DelayTime = (*v30)->fields.DelayTime,
        ClassIconComp = (UnityEngine_MonoBehaviour_o *)this->fields.ClassIconComp,
        v66 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v62, v63),
        System_Action___ctor(
          v66,
          (Il2CppObject *)v21,
          Method_BattleServantParamComponent_ClassIconData___c__DisplayClass16_0__DisplayEffect_b__1__,
          0LL),
        Component_object = (UnityEngine_GameObject_o *)BasicHelper__DelayCall(DelayTime, v66, 0, 0LL),
        !ClassIconComp) )
  {
LABEL_25:
    sub_1BCAA3C(Component_object, v23);
  }
  UnityEngine_MonoBehaviour__StartCoroutine_70139516(
    ClassIconComp,
    (System_Collections_IEnumerator_o *)Component_object,
    0LL);
  v67 = (int64_t)*v30;
  this->fields.PrevEffectArg = *v30;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.PrevEffectArg, v67, v68, v69, v70, v71, v72, v73);
  return *v45;
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
  __int64 v10; // x2
  BattleServantData_o *SvtData; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  __int64 v14; // x2
  __int64 v15; // x3
  BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *v16; // x21
  struct BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *PrevEffectArg; // x8
  System_Action_o *v18; // x20
  const MethodInfo *v19; // x3
  struct UnityEngine_GameObject_o *v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4B192FC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isSkipEffect, isAddBuff);
    sub_1BCA7E0(&Method_BattleServantParamComponent_ClassIconData_ChangeClassIcon__, v9, v10);
    byte_4B192FC = 1;
  }
  SvtData = this->fields.SvtData;
  if ( !SvtData )
    goto LABEL_16;
  if ( BattleServantData__getClassId(SvtData, 0LL) == this->fields.CurClassId )
  {
    BattleServantParamComponent_ClassIconData__UpdateClassInfo(this, v12);
    return;
  }
  SvtData = (BattleServantData_o *)BattleServantParamComponent_ClassIconData__MakeDisplayEffectArgument(
                                     this,
                                     delayTime,
                                     isAddBuff,
                                     v13);
  v16 = (BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *)SvtData;
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
    sub_1BCAA3C(SvtData, isSkipEffect);
  }
LABEL_12:
  v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, isSkipEffect, v14, v15);
  System_Action___ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattleServantParamComponent_ClassIconData_ChangeClassIcon__,
    0LL);
  v20 = BattleServantParamComponent_ClassIconData__DisplayEffect(this, v16, v18, v19);
  this->fields.PlayingEffectObj = v20;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.PlayingEffectObj, (int64_t)v20, v21, v22, v23, v24, v25, v26);
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
    BattleServantParamComponent_ClassIconData__ChangeClassIcon_44828656(this, this->fields.CurClassId, v4);
  }
}


bool __fastcall BattleServantParamComponent_ClassIconData__IsChangeAble(
        BattleServantParamComponent_ClassIconData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *PlayingEffectObj; // x20
  __int64 v5; // x1
  BattleServantData_o *SvtData; // x0
  struct BattleServantData_o *v7; // x8

  if ( (byte_4B192FD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B192FD = 1;
  }
  PlayingEffectObj = (UnityEngine_Object_o *)this->fields.PlayingEffectObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(PlayingEffectObj, 0LL, 0LL) )
    return 0;
  SvtData = this->fields.SvtData;
  if ( !SvtData )
    goto LABEL_12;
  SvtData = (BattleServantData_o *)BattleServantData__getClassId(SvtData, 0LL);
  if ( (_DWORD)SvtData == this->fields.CurClassId )
  {
    v7 = this->fields.SvtData;
    if ( v7 )
      return v7->fields._frameType_k__BackingField != this->fields.FrameType;
LABEL_12:
    sub_1BCAA3C(SvtData, v5);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  BattleBuffData_BuffData_o *v12; // x0
  __int64 v13; // x20
  UnityEngine_Component_o *ClassIconComp; // x0
  __int64 v15; // x1
  int32_t CurClassId; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B192FE & 1) == 0 )
  {
    sub_1BCA7E0(&BattleServantParamComponent_ClassIconData_DisplayEffectArgument_TypeInfo, isAddBuff, method);
    byte_4B192FE = 1;
  }
  CurChangeBuff = this->fields.CurChangeBuff;
  if ( CurChangeBuff )
    v8 = BattleBuffData_BuffData__GetActClassIconChangeEffectIdAtBuffRemove(CurChangeBuff, 0LL);
  else
    v8 = -1;
  BattleServantParamComponent_ClassIconData__UpdateClassInfo(this, (const MethodInfo *)isAddBuff);
  if ( isAddBuff )
  {
    v12 = this->fields.CurChangeBuff;
    if ( v12 )
      v8 = BattleBuffData_BuffData__get_ClassIconChangeEffectId(v12, 0LL);
    else
      v8 = -1;
  }
  v13 = sub_1BCAA2C(BattleServantParamComponent_ClassIconData_DisplayEffectArgument_TypeInfo, v9, v10, v11);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13
    || (*(_DWORD *)(v13 + 16) = v8,
        CurClassId = this->fields.CurClassId,
        *(float *)(v13 + 24) = delayTime,
        *(_DWORD *)(v13 + 20) = CurClassId,
        (ClassIconComp = (UnityEngine_Component_o *)this->fields.ClassIconComp) == 0LL) )
  {
    sub_1BCAA3C(ClassIconComp, v15);
  }
  gameObject = UnityEngine_Component__get_gameObject(ClassIconComp, 0LL);
  *(_QWORD *)(v13 + 32) = gameObject;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 32), (int64_t)gameObject, v18, v19, v20, v21, v22, v23);
  return (BattleServantParamComponent_ClassIconData_DisplayEffectArgument_o *)v13;
}


void __fastcall BattleServantParamComponent_ClassIconData__UpdateClassInfo(
        BattleServantParamComponent_ClassIconData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BuffAggregationArgs_c *v4; // x0
  BattleServantData_o *SvtData; // x20

  if ( (byte_4B192FF & 1) == 0 )
  {
    sub_1BCA7E0(&BuffAggregationArgs_TypeInfo, method, v2);
    byte_4B192FF = 1;
  }
  v4 = BuffAggregationArgs_TypeInfo;
  SvtData = this->fields.SvtData;
  if ( !BuffAggregationArgs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffAggregationArgs_TypeInfo, method);
  if ( !SvtData )
    sub_1BCAA3C(v4, method);
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

  if ( (byte_4B19301 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4473/*"ChangeClassIcon"*/, eventName, method);
    byte_4B19301 = 1;
  }
  _4__this = (BattleServantParamComponent_ClassIconData_o *)System_String__op_Equality(
                                                              eventName,
                                                              (System_String_o *)StringLiteral_4473/*"ChangeClassIcon"*/,
                                                              0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    arg = this->fields.arg;
    if ( !arg
      || (_4__this = this->fields.__4__this) == 0LL
      || (BattleServantParamComponent_ClassIconData__ChangeClassIcon_44828656(_4__this, arg->fields.ClassId, v7),
          (v9 = this->fields.arg) == 0LL) )
    {
      sub_1BCAA3C(_4__this, v6);
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


void __fastcall BattleServantParamComponent__CoAddClassIconEffect_d__127___ctor(
        BattleServantParamComponent__CoAddClassIconEffect_d__127_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantParamComponent__CoAddClassIconEffect_d__127__MoveNext(
        BattleServantParamComponent__CoAddClassIconEffect_d__127_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleServantParamComponent__CoAddClassIconEffect_d__127_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  int32_t _1__state; // w8
  struct BattleServantParamComponent_o *_4__this; // x20
  Il2CppObject *v39; // x22
  struct BattleServantParamComponent___c__DisplayClass127_0_o **p__8__1; // x21
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x2
  const MethodInfo *v48; // x3
  struct BattleServantParamComponent___c__DisplayClass127_0_o *v49; // x23
  int32_t effectId; // w21
  System_Action_o *v51; // x22
  __int64 v52; // x1
  BattlePerformance_o *perf; // x23
  struct BattleServantParamComponent___c__DisplayClass127_0_o *_8__1; // x8
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  struct BattleServantData_o *servantData; // x8
  __int64 v58; // x1
  UnityEngine_GameObject_o *ServantGameObject; // x21
  int32_t v60; // w22
  __int64 v61; // x1
  UnityEngine_Object_o *EffectObject; // x21
  BattleServantParamComponent__CoAddClassIconEffect_d__127_o *v63; // x22
  __int64 v64; // x2
  BattleServantParamComponent__CoAddClassIconEffect_d__127_o *v65; // x22
  __int64 v66; // x2
  BattleServantParamComponent__CoAddClassIconEffect_d__127_o *v67; // x22
  __int64 v68; // x1
  struct BattleServantParamComponent_o *v69; // x21
  struct BattlePerformance_o *v70; // x8
  struct BattleData_o *data; // x8
  System_String_o *v72; // x21
  Il2CppObject *v73; // x0
  __int64 v74; // x1
  System_String_o *v75; // x22
  __int64 v76; // x1
  UnityEngine_Object_o *Manager__loadBattleCommonEffect; // x21
  __int64 v78; // x1
  UnityEngine_Object_o *facetex; // x22
  __int64 v80; // x1
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v82; // x21
  int32_t battleGenderType; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *component; // [xsp+28h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4B19304 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EffectMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v19, v20);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___, v21, v22);
    sub_1BCA7E0(&int_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v25, v26);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v27, v28);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_BattleServantParamComponent___c__DisplayClass127_0__CoAddClassIconEffect_b__0__, v31, v32);
    sub_1BCA7E0(&BattleServantParamComponent___c__DisplayClass127_0_TypeInfo, v33, v34);
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__127_o *)sub_1BCA7E0(&StringLiteral_19013/*"ef_commandaura_{0}"*/, v35, v36);
    byte_4B19304 = 1;
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
    v39 = (Il2CppObject *)sub_1BCAA2C(BattleServantParamComponent___c__DisplayClass127_0_TypeInfo, method, v2, v3);
    System_Object___ctor(v39, 0LL);
    v8->fields.__8__1 = (struct BattleServantParamComponent___c__DisplayClass127_0_o *)v39;
    p__8__1 = &v8->fields.__8__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v39, v41, v42, v43, v44, v45, v46);
    method = (const MethodInfo *)(unsigned int)v8->fields.effectId;
    if ( (int)method < 1 )
      return 0;
    if ( !_4__this )
      goto LABEL_71;
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__127_o *)_4__this->fields.classIconEffectDict;
    if ( !this )
      goto LABEL_71;
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__127_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                                           (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                           (int32_t)method,
                                                                           (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 0;
    if ( _4__this->fields.currentClassIconAuraEffectPriority < v8->fields.priority )
    {
      BattleServantParamComponent__DestroyAllEffect(_4__this, _4__this->fields.classIconEffectDict, 0, v48);
      _4__this->fields.currentClassIconAuraEffectPriority = v8->fields.priority;
    }
    v49 = *p__8__1;
    if ( !*p__8__1 )
      goto LABEL_71;
    v49->fields.isLoading = 1;
    effectId = v8->fields.effectId;
    v51 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v47, v48);
    System_Action___ctor(
      v51,
      (Il2CppObject *)v49,
      Method_BattleServantParamComponent___c__DisplayClass127_0__CoAddClassIconEffect_b__0__,
      0LL);
    perf = _4__this->fields.perf;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v52);
    BattleEffectUtility__LoadEffectAssetIfNotYet(effectId, v51, perf, 0LL);
  }
  _8__1 = v8->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_71;
  if ( _8__1->fields.isLoading )
  {
    v8->fields.__2__current = 0LL;
    p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1BCA784(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
    return result;
  }
  if ( !_4__this )
    goto LABEL_71;
  servantData = v8->fields.servantData;
  if ( !servantData )
    goto LABEL_71;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__127_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_71;
  ServantGameObject = BattlePerformance__getServantGameObject(
                        (BattlePerformance_o *)this,
                        servantData->fields.uniqueId,
                        0LL);
  if ( !ServantGameObject )
    ServantGameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
  v60 = v8->fields.effectId;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v58);
  EffectObject = (UnityEngine_Object_o *)BattleEffectUtility__getEffectObject(v60, ServantGameObject, 1, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v61);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__127_o *)UnityEngine_Object__op_Equality(
                                                                         EffectObject,
                                                                         0LL,
                                                                         0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !EffectObject )
    goto LABEL_71;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__127_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0LL);
  if ( !_4__this->fields.clsIconComponent )
    goto LABEL_71;
  v63 = this;
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__127_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                                                                         0LL);
  if ( !v63 )
    goto LABEL_71;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v63, (UnityEngine_Transform_o *)this, 0LL);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__127_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0LL);
  v65 = this;
  if ( !byte_4B109C6 )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__127_o *)sub_1BCA7E0(
                                                                           &UnityEngine_Vector3_TypeInfo,
                                                                           method,
                                                                           v64);
    byte_4B109C6 = 1;
  }
  if ( !v65 )
    goto LABEL_71;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v65,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__127_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)EffectObject,
                                                                         0LL);
  v67 = this;
  if ( !byte_4B109C1 )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__127_o *)sub_1BCA7E0(
                                                                           &UnityEngine_Vector3_TypeInfo,
                                                                           method,
                                                                           v66);
    byte_4B109C1 = 1;
  }
  if ( !v67 )
    goto LABEL_71;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v67,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectObject, 1, 0LL);
  if ( UnityEngine_GameObject__TryGetComponent_object_(
         (UnityEngine_GameObject_o *)EffectObject,
         &component,
         (const MethodInfo_2F63960 *)Method_UnityEngine_GameObject_TryGetComponent_CommonEffectComponent___) )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__127_o *)component;
    if ( !component )
      goto LABEL_71;
    CommonEffectComponent__Init((CommonEffectComponent_o *)component, 0, 0, 0LL);
  }
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__127_o *)_4__this->fields.classIconEffectDict;
  if ( !this )
    goto LABEL_71;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v8->fields.effectId,
          (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__127_o *)_4__this->fields.classIconEffectDict;
    if ( !this )
      goto LABEL_71;
    System_Collections_Generic_Dictionary_int__object___Add(
      (System_Collections_Generic_Dictionary_int__object__o *)this,
      v8->fields.effectId,
      (Il2CppObject *)EffectObject,
      (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
  }
  this = (BattleServantParamComponent__CoAddClassIconEffect_d__127_o *)_4__this->fields.commandSpellEffectDict;
  if ( !this )
LABEL_71:
    sub_1BCAA3C(this, method);
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v8->fields.effectId,
          (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v68);
    this = (BattleServantParamComponent__CoAddClassIconEffect_d__127_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EffectMaster___);
    if ( this )
    {
      this = (BattleServantParamComponent__CoAddClassIconEffect_d__127_o *)DataMasterBase_object__object__int___GetEntity(
                                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                             v8->fields.effectId,
                                                                             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( this )
      {
        v69 = this->fields.__4__this;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, method);
        BattleEffectUtility__GetBattleCommonEffectPathAndName((System_String_o *)v69, &path, &name, 0LL);
        v70 = _4__this->fields.perf;
        if ( v70 )
        {
          data = v70->fields.data;
          if ( data )
          {
            v72 = path;
            battleGenderType = data->fields.battleGenderType;
            v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &battleGenderType);
            v75 = System_String__Format((System_String_o *)StringLiteral_19013/*"ef_commandaura_{0}"*/, v73, 0LL);
            if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v74);
            Manager__loadBattleCommonEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                        v72,
                                                                        v75,
                                                                        0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v76);
            if ( UnityEngine_Object__op_Equality(Manager__loadBattleCommonEffect, 0LL, 0LL) )
              return 0;
            facetex = (UnityEngine_Object_o *)_4__this->fields.facetex;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v78);
            if ( UnityEngine_Object__op_Equality(facetex, 0LL, 0LL) )
              return 0;
            this = (BattleServantParamComponent__CoAddClassIconEffect_d__127_o *)_4__this->fields.facetex;
            if ( this )
            {
              transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v80);
              v82 = UnityEngine_Object__Instantiate_object__49903816(
                      (Il2CppObject *)Manager__loadBattleCommonEffect,
                      transform,
                      (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
              GameObjectExtensions__ResetTransform((UnityEngine_GameObject_o *)v82, 0LL);
              if ( v82 )
              {
                UnityEngine_GameObject__SetActive(
                  (UnityEngine_GameObject_o *)v82,
                  !_4__this->fields.isHideFaceTexture,
                  0LL);
                this = (BattleServantParamComponent__CoAddClassIconEffect_d__127_o *)_4__this->fields.commandSpellEffectDict;
                if ( this )
                {
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)this,
                    v8->fields.effectId,
                    v82,
                    (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
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


Il2CppObject *__fastcall BattleServantParamComponent__CoAddClassIconEffect_d__127__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__CoAddClassIconEffect_d__127_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantParamComponent__CoAddClassIconEffect_d__127__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__CoAddClassIconEffect_d__127_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_BattleServantParamComponent__CoAddClassIconEffect_d__127_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleServantParamComponent__CoAddClassIconEffect_d__127__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__CoAddClassIconEffect_d__127_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantParamComponent__CoAddClassIconEffect_d__127__System_IDisposable_Dispose(
        BattleServantParamComponent__CoAddClassIconEffect_d__127_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantParamComponent__DelayMethod_d__117___ctor(
        BattleServantParamComponent__DelayMethod_d__117_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantParamComponent__DelayMethod_d__117__MoveNext(
        BattleServantParamComponent__DelayMethod_d__117_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  bool result; // w0
  struct BattleCallBackBase_o *callBack; // x0

  if ( (byte_4B19305 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, method, v2);
    byte_4B19305 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callBack = this->fields.callBack;
    this->fields.__1__state = -1;
    if ( !callBack )
      sub_1BCAA3C(0LL, method);
    ((void (__fastcall *)(struct BattleCallBackBase_o *, const char *))callBack->klass[1]._1.gc_desc)(
      callBack,
      callBack->klass[1]._1.name);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    waitTime = this->fields.waitTime;
    v7 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
    UnityEngine_WaitForSeconds___ctor(v7, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v7, v8, v9, v10, v11, v12, v13);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleServantParamComponent__DelayMethod_d__117__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__DelayMethod_d__117_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantParamComponent__DelayMethod_d__117__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__DelayMethod_d__117_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattleServantParamComponent__DelayMethod_d__117_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleServantParamComponent__DelayMethod_d__117__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__DelayMethod_d__117_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantParamComponent__DelayMethod_d__117__System_IDisposable_Dispose(
        BattleServantParamComponent__DelayMethod_d__117_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantParamComponent___c__DisplayClass125_0___ctor(
        BattleServantParamComponent___c__DisplayClass125_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantParamComponent___c__DisplayClass125_0___DestroyEffectObject_b__0(
        BattleServantParamComponent___c__DisplayClass125_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_Dictionary_int__GameObject__o *effectDict; // x0

  if ( (byte_4B19302 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, method, v2);
    byte_4B19302 = 1;
  }
  effectDict = this->fields.effectDict;
  if ( !effectDict )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)effectDict,
    this->fields.id,
    (const MethodInfo_320736C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
}


void __fastcall BattleServantParamComponent___c__DisplayClass127_0___ctor(
        BattleServantParamComponent___c__DisplayClass127_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantParamComponent___c__DisplayClass127_0___CoAddClassIconEffect_b__0(
        BattleServantParamComponent___c__DisplayClass127_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoading = 0;
}


void __fastcall BattleServantParamComponent___c__DisplayClass79_0___ctor(
        BattleServantParamComponent___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantParamComponent___c__DisplayClass79_0___initUpdateView_b__0(
        BattleServantParamComponent___c__DisplayClass79_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  BattleServantParamComponent___c__DisplayClass79_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct BattleServantParamComponent_o *_4__this; // x8
  Il2CppObject *v14; // x20
  UnityEngine_Transform_o *battlePointRoot; // x21
  struct BattleServantParamComponent_o *v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct BattleServantParamComponent_o *v23; // x9
  struct ServantBattlePointEntity_o *entity; // x8
  const MethodInfo *v25; // x2

  v4 = this;
  if ( (byte_4B19303 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, assetData, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattlePointGaugeComponent___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    this = (BattleServantParamComponent___c__DisplayClass79_0_o *)sub_1BCA7E0(&StringLiteral_3267/*"BattlePointGauge"*/, v11, v12);
    byte_4B19303 = 1;
  }
  if ( !assetData )
    goto LABEL_14;
  this = (BattleServantParamComponent___c__DisplayClass79_0_o *)AssetData__GetObject_object__49237568(
                                                                  assetData,
                                                                  (System_String_o *)StringLiteral_3267/*"BattlePointGauge"*/,
                                                                  (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v14 = (Il2CppObject *)this;
  battlePointRoot = _4__this->fields.battlePointRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, assetData);
  this = (BattleServantParamComponent___c__DisplayClass79_0_o *)UnityEngine_Object__Instantiate_object__49903816(
                                                                  v14,
                                                                  battlePointRoot,
                                                                  (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
  if ( !this )
    goto LABEL_14;
  v16 = v4->fields.__4__this;
  this = (BattleServantParamComponent___c__DisplayClass79_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattlePointGaugeComponent___);
  if ( !v16
    || (v16->fields.battlePointGaugeComponent = (struct BattlePointGaugeComponent_o *)this,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v16->fields.battlePointGaugeComponent,
          (int64_t)this,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22),
        (v23 = v4->fields.__4__this) == 0LL)
    || (entity = v4->fields.entity) == 0LL
    || (this = (BattleServantParamComponent___c__DisplayClass79_0_o *)v23->fields.battlePointGaugeComponent) == 0LL
    || (BattlePointGaugeComponent__Init((BattlePointGaugeComponent_o *)this, entity->fields.battlePointId, 0LL),
        (this = (BattleServantParamComponent___c__DisplayClass79_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_14:
    sub_1BCAA3C(this, assetData);
  }
  BattleServantParamComponent__UpdateBattlePointImmediately(
    (BattleServantParamComponent_o *)this,
    (BattleServantData_o *)this[8].monitor,
    v25);
}


void __fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__86___ctor(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__86_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__86__MoveNext(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__86_o *this,
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
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__86_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_19;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__86_o *)BattleServantData__get_BuffData(
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
        sub_1BCAA44(this, method);
      this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__86_o *)skillIcon->m_Items[v14];
      if ( !this )
        goto LABEL_19;
      this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__86_o *)BattleServantSkillIConComponent__UpdateSkillRankUpEffect(
                                                                                        (BattleServantSkillIConComponent_o *)this,
                                                                                        method);
      max_length = skillIcon->max_length;
      ++v14;
      v15 |= (unsigned __int8)this;
    }
    while ( v14 < max_length );
    if ( (v15 & 1) == 0 )
      return 0;
    this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__86_o *)_4__this->fields.data;
    if ( !this
      || (this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__86_o *)BattleServantData__get_BuffData(
                                                                                            (BattleServantData_o *)this,
                                                                                            0LL)) == 0LL
      || (this = (BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__86_o *)this[2].klass) == 0LL )
    {
LABEL_19:
      sub_1BCAA3C(this, method);
    }
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter((BattleBuffData_SkillRankChangeData_o *)this, 0, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__86__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__86_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__86__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__86_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__86_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__86__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__86_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__86__System_IDisposable_Dispose(
        BattleServantParamComponent__coroutineUpdateSkillRankUpEffect_d__86_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantParamComponent__showSideEffectList_d__113___ctor(
        BattleServantParamComponent__showSideEffectList_d__113_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantParamComponent__showSideEffectList_d__113__MoveNext(
        BattleServantParamComponent__showSideEffectList_d__113_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleServantParamComponent__showSideEffectList_d__113_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct BattleServantParamComponent_o *_4__this; // x20
  BattleActionData_BuffData_o *v13; // x21
  BattleServantParamComponent__showSideEffectList_d__113_o *v14; // x22
  int32_t statusEffectId; // w23
  float x; // s10
  float y; // s8
  float z; // s9
  const MethodInfo *v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  BattleServantParamComponent_c *v23; // x0
  float SideEffectShowWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v25; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  bool result; // w0
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4B19306 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&BattleServantParamComponent_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_BattleActionData_BuffData__get_Count__, v8, v9);
    this = (BattleServantParamComponent__showSideEffectList_d__113_o *)sub_1BCA7E0(
                                                                         &UnityEngine_WaitForSeconds_TypeInfo,
                                                                         v10,
                                                                         v11);
    byte_4B19306 = 1;
  }
  if ( v3->fields.__1__state >= 2u )
    return 0;
  _4__this = v3->fields.__4__this;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_16;
  this = (BattleServantParamComponent__showSideEffectList_d__113_o *)_4__this->fields.sideEffectShowQueue;
  if ( !this )
    goto LABEL_16;
  if ( !LODWORD(this->fields.__4__this) )
  {
    result = 0;
    _4__this->fields.isShowingSideEffect = 0;
    return result;
  }
  this = (BattleServantParamComponent__showSideEffectList_d__113_o *)System_Collections_Generic_Queue_object___Dequeue(
                                                                       (System_Collections_Generic_Queue_T__o *)this,
                                                                       (const MethodInfo_3714548 *)Method_System_Collections_Generic_Queue_BattleActionData_BuffData__Dequeue__);
  if ( !_4__this->fields.clsIconComponent
    || (v13 = (BattleActionData_BuffData_o *)this,
        this = (BattleServantParamComponent__showSideEffectList_d__113_o *)UnityEngine_Component__get_transform(
                                                                             (UnityEngine_Component_o *)_4__this->fields.clsIconComponent,
                                                                             0LL),
        !v13) )
  {
LABEL_16:
    sub_1BCAA3C(this, method);
  }
  v14 = this;
  statusEffectId = v13->fields.statusEffectId;
  x = _4__this->fields.sideEffectScl.fields.x;
  y = _4__this->fields.sideEffectScl.fields.y;
  z = _4__this->fields.sideEffectScl.fields.z;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, method);
  v34.fields.x = x;
  v34.fields.y = y;
  v34.fields.z = z;
  BattleEffectUtility__showSideEffect((UnityEngine_Transform_o *)v14, statusEffectId, v34, 0LL);
  BattleServantParamComponent__popBuffLabel(_4__this, v13, v19);
  v23 = BattleServantParamComponent_TypeInfo;
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, v20);
    v23 = BattleServantParamComponent_TypeInfo;
  }
  SideEffectShowWaitTime = v23->static_fields->SideEffectShowWaitTime;
  v25 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, v20, v21, v22);
  UnityEngine_WaitForSeconds___ctor(v25, SideEffectShowWaitTime, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v25;
  p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1BCA784(p__2__current, (int64_t)v25, v27, v28, v29, v30, v31, v32);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return result;
}


Il2CppObject *__fastcall BattleServantParamComponent__showSideEffectList_d__113__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantParamComponent__showSideEffectList_d__113_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantParamComponent__showSideEffectList_d__113__System_Collections_IEnumerator_Reset(
        BattleServantParamComponent__showSideEffectList_d__113_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_BattleServantParamComponent__showSideEffectList_d__113_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleServantParamComponent__showSideEffectList_d__113__System_Collections_IEnumerator_get_Current(
        BattleServantParamComponent__showSideEffectList_d__113_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantParamComponent__showSideEffectList_d__113__System_IDisposable_Dispose(
        BattleServantParamComponent__showSideEffectList_d__113_o *this,
        const MethodInfo *method)
{
  ;
}