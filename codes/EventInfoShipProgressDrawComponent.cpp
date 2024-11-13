void __fastcall EventInfoShipProgressDrawComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B17803 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoShipProgressDrawComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_10896/*"ProgressShipData_"*/, v8, v9);
    byte_4B17803 = 1;
  }
  EventInfoShipProgressDrawComponent_TypeInfo->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = (struct System_String_o *)StringLiteral_10896/*"ProgressShipData_"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoShipProgressDrawComponent_TypeInfo->static_fields,
    StringLiteral_10896/*"ProgressShipData_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventInfoShipProgressDrawComponent___ctor(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoShipProgressDrawComponent__Awake(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  int max_length; // w8
  int v4; // w9

  progressPathMesh = this->fields.progressPathMesh;
  if ( !progressPathMesh )
    sub_1BCAA3C(this, method);
  max_length = progressPathMesh->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}


void __fastcall EventInfoShipProgressDrawComponent__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
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
  Il2CppObject *Master_object; // x0
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_T__o *klass; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x20
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  _DWORD *v35; // x0
  __int64 v36; // x1
  __int64 methodPtr_low; // x10
  int32_t v38; // w2
  __int64 v39; // x1
  __int64 v40; // x1
  EventInfoShipProgressDrawComponent_c *v41; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x21
  System_String_o *v43; // x1
  System_String_o *v44; // x0
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0
  EventDetailEntity_o *v49; // [xsp+0h] [xbp-60h] BYREF
  int32_t v50; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B17800 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v1, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDetailMaster___, v3, v4);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&EventEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&EventInfoShipProgressDrawComponent_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v19, v20);
    byte_4B17800 = 1;
  }
  v50 = 0;
  v49 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object
    || (klass = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].klass,
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDetailMaster___),
        !klass) )
  {
    sub_1BCAA3C(Master_object, v22);
  }
  v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 klass,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v25);
  while ( 1 )
  {
    v27 = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_12;
      }
      p_method = (__int64)&v27->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v31 = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_19;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_19:
      v34 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v35 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                      Enumerator,
                      *(_QWORD *)(v34 + 8));
    if ( v35 )
    {
      methodPtr_low = LOBYTE(EventEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v35 + 304LL) >= (unsigned int)methodPtr_low
        && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)v35 + 200LL) + 8 * methodPtr_low - 8) == EventEntity_TypeInfo )
      {
        v38 = v35[4];
        v50 = v38;
        if ( !v24 )
          sub_1BCAA3C(v35, v36);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               v24,
               (Il2CppObject **)&v49,
               v38,
               (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          if ( !v49 )
            sub_1BCAA3C(0LL, v39);
          if ( EventDetailEntity__IsEventRiverProgress(v49, 0LL) )
          {
            v41 = EventInfoShipProgressDrawComponent_TypeInfo;
            if ( !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo, v40);
              v41 = EventInfoShipProgressDrawComponent_TypeInfo;
            }
            SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v41->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
            v43 = System_Int32__ToString((int32_t)&v50, 0LL);
            v44 = System_String__Concat_62401220(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v43, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v44, 0LL);
          }
        }
      }
    }
  }
  v45 = Enumerator->klass;
  v46 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_35;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_35:
    v48 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(Enumerator, *(_QWORD *)(v48 + 8));
}


System_Collections_IEnumerator_o *__fastcall EventInfoShipProgressDrawComponent__EasingMove(
        EventInfoShipProgressDrawComponent_o *this,
        System_Action_o *endAction,
        float endRate,
        float moveRate,
        const MethodInfo *method)
{
  __int64 v5; // x3
  __int64 v10; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B177FC & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoShipProgressDrawComponent__EasingMove_d__13_TypeInfo, endAction, method);
    byte_4B177FC = 1;
  }
  v10 = sub_1BCAA2C(EventInfoShipProgressDrawComponent__EasingMove_d__13_TypeInfo, endAction, method, v5);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 48) = endAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 48), (int64_t)endAction, v17, v18, v19, v20, v21, v22);
  *(float *)(v10 + 40) = moveRate;
  *(float *)(v10 + 44) = endRate;
  return (System_Collections_IEnumerator_o *)v10;
}


bool __fastcall EventInfoShipProgressDrawComponent__HasSaveData(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int v3; // w19
  EventInfoShipProgressDrawComponent_c *v4; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0

  v3 = (int)this;
  if ( (byte_4B17801 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoShipProgressDrawComponent_TypeInfo, method, v2);
    byte_4B17801 = 1;
  }
  v4 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo, method);
    v4 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v4->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v6 = System_Int32__ToString(v3 + 124, 0LL);
  v7 = System_String__Concat_62401220(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v6, 0LL);
  return UnityEngine_PlayerPrefs__HasKey(v7, 0LL);
}


void __fastcall EventInfoShipProgressDrawComponent__LoadProgressData(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  EventInfoShipProgressDrawComponent_c *v6; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_String_o *String; // x20
  void *IsNullOrEmpty; // x0
  __int64 v12; // x1
  int v13; // w8
  void *v14; // x20
  float v15; // s8
  int v16; // w21
  __int64 v17; // x0
  __int64 v18; // x1
  float v19; // s9
  float v20; // s10
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B177FF & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoShipProgressDrawComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B177FF = 1;
  }
  v6 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo, method);
    v6 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v6->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v8 = System_Int32__ToString((int)this + 124, 0LL);
  v9 = System_String__Concat_62401220(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v8, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v9, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(String, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !String )
      goto LABEL_19;
    IsNullOrEmpty = System_String__Split(String, 0x3Au, 0, 0LL);
    if ( !IsNullOrEmpty )
      goto LABEL_19;
    v13 = *((_DWORD *)IsNullOrEmpty + 6);
    v14 = IsNullOrEmpty;
    v15 = 0.0;
    if ( v13 < 1 )
    {
      v20 = 0.0;
      v19 = 0.0;
    }
    else
    {
      v16 = v13 & ~(v13 >> 31);
      v19 = System_Single__Parse(*((System_String_o **)IsNullOrEmpty + 4), 0LL);
      if ( v16 < 2 )
      {
        v20 = 0.0;
      }
      else
      {
        if ( *((_DWORD *)v14 + 6) <= 1u )
          goto LABEL_20;
        v20 = System_Single__Parse(*((System_String_o **)v14 + 5), 0LL);
        if ( v16 < 3 )
          goto LABEL_16;
        if ( *((_DWORD *)v14 + 6) <= 2u )
LABEL_20:
          sub_1BCAA44(v17, v18);
        v15 = System_Single__Parse(*((System_String_o **)v14 + 6), 0LL);
      }
    }
LABEL_16:
    IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( IsNullOrEmpty )
    {
      v21.fields.z = 0.0;
      v21.fields.x = v19;
      v21.fields.y = v20;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsNullOrEmpty, v21, 0LL);
      this->fields.startRate = v15;
      return;
    }
LABEL_19:
    sub_1BCAA3C(IsNullOrEmpty, v12);
  }
}


void __fastcall EventInfoShipProgressDrawComponent__OnDestroy(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.progressPathMesh = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.progressPathMesh, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall EventInfoShipProgressDrawComponent__PlayProgressShipDefaultAnim(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoShipProgressDrawComponent_o *v3; // x19
  struct SimpleAnimation_o *progressShipAnim; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v6; // x19
  System_String_o *name; // x1

  v3 = this;
  if ( (byte_4B177FD & 1) == 0 )
  {
    this = (EventInfoShipProgressDrawComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B177FD = 1;
  }
  progressShipAnim = v3->fields.progressShipAnim;
  if ( !progressShipAnim )
    goto LABEL_11;
  monitor = (UnityEngine_Object_o *)progressShipAnim[1].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (EventInfoShipProgressDrawComponent_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = v3->fields.progressShipAnim;
    if ( v6 )
    {
      this = (EventInfoShipProgressDrawComponent_o *)v6[1].monitor;
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        SimpleAnimation__Play_64539336(v6, name, 0LL);
        return;
      }
    }
LABEL_11:
    sub_1BCAA3C(this, method);
  }
}


void __fastcall EventInfoShipProgressDrawComponent__PlayProgressShipMoveAnim(
        EventInfoShipProgressDrawComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  EventInfoShipProgressDrawComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct SimpleAnimation_o *progressShipAnim; // x8
  UnityEngine_Object_o *monitor; // x21
  struct SimpleAnimation_o *v11; // x21
  System_String_o *name; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  __int64 TotalPoint; // x23
  __int64 NextPoint; // x22
  __int64 v16; // x1
  float v17; // s0
  float startRate; // s9
  float v19; // s8
  const MethodInfo *v20; // x2
  float moveAnimTime; // s10
  int v22; // w21
  struct EventInfoPointRiverProgressControl_o *pointRiverProgressCtr; // x8
  System_Collections_IEnumerator_o *v24; // x0
  const MethodInfo *v25; // x1

  v4 = this;
  if ( (byte_4B177FB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, endAction, method);
    sub_1BCA7E0(&System_Math_TypeInfo, v5, v6);
    this = (EventInfoShipProgressDrawComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B177FB = 1;
  }
  if ( v4->fields.progressData )
  {
    progressShipAnim = v4->fields.progressShipAnim;
    if ( !progressShipAnim )
      goto LABEL_24;
    monitor = (UnityEngine_Object_o *)progressShipAnim[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, endAction);
    this = (EventInfoShipProgressDrawComponent_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v11 = v4->fields.progressShipAnim;
      if ( !v11 )
        goto LABEL_24;
      this = (EventInfoShipProgressDrawComponent_o *)v11[1].monitor;
      if ( !this )
        goto LABEL_24;
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
      this = (EventInfoShipProgressDrawComponent_o *)SimpleAnimation__IsPlaying(v11, name, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (EventInfoShipProgressDrawComponent_o *)v4->fields.progressShipAnim;
        if ( !this )
          goto LABEL_24;
        SimpleAnimation__Stop((SimpleAnimation_o *)this, 0LL);
      }
    }
    progressData = v4->fields.progressData;
    if ( progressData )
    {
      TotalPoint = progressData->fields.TotalPoint;
      NextPoint = progressData->fields.NextPoint;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, endAction);
      v17 = System_Math__Min_63220564((float)TotalPoint / (float)NextPoint, 1.0, 0LL);
      startRate = v4->fields.startRate;
      v19 = v17;
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v16);
      this = (EventInfoShipProgressDrawComponent_o *)UnityEngine_Application__get_targetFrameRate(0LL);
      moveAnimTime = v4->fields.moveAnimTime;
      v22 = (int)this;
      if ( v19 < 1.0 )
        goto LABEL_22;
      pointRiverProgressCtr = v4->fields.pointRiverProgressCtr;
      if ( pointRiverProgressCtr )
      {
        this = (EventInfoShipProgressDrawComponent_o *)pointRiverProgressCtr->fields.maskPanel;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
LABEL_22:
          v24 = EventInfoShipProgressDrawComponent__EasingMove(
                  v4,
                  endAction,
                  v19,
                  (float)(v19 - startRate) / (float)(moveAnimTime * (float)v22),
                  v20);
          UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)v4, v24, 0LL);
          EventInfoShipProgressDrawComponent__PlayProgressShipDefaultAnim(v4, v25);
          return;
        }
      }
    }
LABEL_24:
    sub_1BCAA3C(this, endAction);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
        EventInfoShipProgressDrawComponent_o *this,
        bool isFadeIn,
        bool isWait,
        const MethodInfo *method)
{
  bool v7; // w22
  __int64 v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B177FE & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_TypeInfo, isFadeIn, isWait);
    byte_4B177FE = 1;
  }
  v7 = isWait;
  v8 = sub_1BCAA2C(
         EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_TypeInfo,
         isFadeIn,
         isWait,
         method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 32), (int64_t)this, v9, v10, v11, v12, v13, v14);
  *(_BYTE *)(v8 + 40) = isFadeIn;
  *(_BYTE *)(v8 + 41) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall EventInfoShipProgressDrawComponent__ResetShip(
        EventInfoShipProgressDrawComponent_o *this,
        EventInfoPointRiverProgressControl_ProgressData_o *progressData_,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct EventInfoPointRiverProgressControl_ProgressData_o **p_progressData; // x20
  Custom2dSplineMesh_o *v10; // x0
  __int64 v11; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v12; // x9
  __int64 v13; // x8
  __int64 ReleaseScenarioIndex; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x9
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  __int64 v17; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v18; // x9
  struct Custom2dSplineMesh_array *v19; // x8
  __int64 v20; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v25; // x1
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.progressData = progressData_;
  p_progressData = &this->fields.progressData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.progressData,
    (int64_t)progressData_,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = *p_progressData;
  *((_DWORD *)p_progressData + 2) = 0;
  if ( !v12 )
    goto LABEL_14;
  v13 = (__int64)*(p_progressData - 4);
  if ( !v13 )
    goto LABEL_14;
  ReleaseScenarioIndex = v12->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= *(_DWORD *)(v13 + 24) )
    goto LABEL_15;
  v10 = *(Custom2dSplineMesh_o **)(v13 + 8 * ReleaseScenarioIndex + 32);
  if ( !v10 )
    goto LABEL_14;
  Custom2dSplineMesh__CreateMesh(v10, 0LL);
  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_14;
  progressPathMesh = this->fields.progressPathMesh;
  if ( !progressPathMesh )
    goto LABEL_14;
  v17 = progressData->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v17 >= progressPathMesh->max_length )
    goto LABEL_15;
  v10 = progressPathMesh->m_Items[v17];
  if ( !v10
    || (Custom2dSplineMesh__SetPathRate(v10, this->fields.startRate, 0LL), (v18 = this->fields.progressData) == 0LL)
    || (v19 = this->fields.progressPathMesh) == 0LL )
  {
LABEL_14:
    sub_1BCAA3C(v10, v11);
  }
  v20 = v18->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v20 >= v19->max_length )
LABEL_15:
    sub_1BCAA44(v10, v11);
  v10 = v19->m_Items[v20];
  if ( !v10 )
    goto LABEL_14;
  PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(v10, this->fields.startRate, 0LL);
  x = PointAsWorldFlatten.fields.x;
  y = PointAsWorldFlatten.fields.y;
  z = PointAsWorldFlatten.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  GameObjectExtensions__SetPosition(gameObject, v27, 0LL);
  EventInfoShipProgressDrawComponent__SaveProgressData(this, v25);
}


void __fastcall EventInfoShipProgressDrawComponent__SaveProgressData(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Text_StringBuilder_o *v9; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  float v12; // s0
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  EventInfoShipProgressDrawComponent_c *v16; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x21
  System_String_o *v18; // x0
  System_String_o *v19; // x19
  System_String_o *v20; // x0
  float startRate; // [xsp+Ch] [xbp-44h] BYREF
  float x; // [xsp+10h] [xbp-40h] BYREF
  _DWORD v23[15]; // [xsp+14h] [xbp-3Ch] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17802 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoShipProgressDrawComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v7, v8);
    byte_4B17802 = 1;
  }
  startRate = 0.0;
  v9 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, method, v2, v3);
  System_Text_StringBuilder___ctor(v9, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
        x = localPosition.fields.x,
        v23[0] = LODWORD(localPosition.fields.y),
        v23[1] = LODWORD(localPosition.fields.z),
        transform = (UnityEngine_Transform_o *)System_Single__ToString(localPosition.fields.x, (const MethodInfo *)&x),
        !v9) )
  {
    sub_1BCAA3C(transform, v11);
  }
  System_Text_StringBuilder__Append_61563116(v9, (System_String_o *)transform, 0LL);
  System_Text_StringBuilder__Append_61563116(v9, (System_String_o *)StringLiteral_1541/*":"*/, 0LL);
  v13 = System_Single__ToString(v12, (const MethodInfo *)v23);
  System_Text_StringBuilder__Append_61563116(v9, v13, 0LL);
  System_Text_StringBuilder__Append_61563116(v9, (System_String_o *)StringLiteral_1541/*":"*/, 0LL);
  startRate = this->fields.startRate;
  v14 = System_Single__ToString(startRate, (const MethodInfo *)&startRate);
  System_Text_StringBuilder__Append_61563116(v9, v14, 0LL);
  v16 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo, v15);
    v16 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v16->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v18 = System_Int32__ToString((int)this + 124, 0LL);
  v19 = System_String__Concat_62401220(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v18, 0LL);
  v20 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                             v9,
                             v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString(v19, v20, 0LL);
}


void __fastcall EventInfoShipProgressDrawComponent__SetActive(
        EventInfoShipProgressDrawComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoShipProgressDrawComponent__Setup(
        EventInfoShipProgressDrawComponent_o *this,
        EventInfoPointRiverProgressControl_o *inputPointRiverProgressCtr,
        int32_t inputEventId,
        bool isReset,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct EventInfoPointRiverProgressControl_o **p_pointRiverProgressCtr; // x22
  __int64 v17; // x1
  UnityEngine_Object_o *pointRiverProgressCtr; // x23
  Custom2dSplineMesh_o *v19; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  char v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o **p_progressData; // x22
  const MethodInfo *v29; // x1
  __int64 v30; // x2
  struct EventInfoPointRiverProgressControl_ProgressData_o *v31; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v32; // x8
  __int64 TotalPoint; // x20
  __int64 NextPoint; // x21
  struct EventInfoPointRiverProgressControl_ProgressData_o *v35; // x9
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  __int64 ReleaseScenarioIndex; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v38; // x9
  struct Custom2dSplineMesh_array *v39; // x8
  __int64 v40; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v41; // x9
  struct Custom2dSplineMesh_array *v42; // x8
  __int64 v43; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v48; // x1
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B177FA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, inputPointRiverProgressCtr, *(_QWORD *)&inputEventId);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v14, v15);
    byte_4B177FA = 1;
  }
  this->fields.pointRiverProgressCtr = inputPointRiverProgressCtr;
  p_pointRiverProgressCtr = &this->fields.pointRiverProgressCtr;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.pointRiverProgressCtr,
    (int64_t)inputPointRiverProgressCtr,
    *(int64_t *)&inputEventId,
    isReset,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  pointRiverProgressCtr = (UnityEngine_Object_o *)this->fields.pointRiverProgressCtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  v19 = (Custom2dSplineMesh_o *)UnityEngine_Object__op_Equality(pointRiverProgressCtr, 0LL, 0LL);
  if ( ((unsigned __int8)v19 & 1) != 0 )
    return;
  if ( !*p_pointRiverProgressCtr )
    goto LABEL_40;
  progressData = (*p_pointRiverProgressCtr)->fields.progressData;
  if ( !progressData )
    return;
  this->fields.progressData = progressData;
  p_progressData = &this->fields.progressData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.progressData,
    (int64_t)progressData,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.eventId = inputEventId;
  EventInfoShipProgressDrawComponent__LoadProgressData(this, v29);
  v31 = this->fields.progressData;
  if ( isReset )
  {
    if ( !v31 )
      goto LABEL_40;
    goto LABEL_25;
  }
  if ( !v31 )
    goto LABEL_40;
  if ( !v31->fields.IsFreeQuestClear )
  {
LABEL_25:
    if ( v31->fields.OldTotalPoint == v31->fields.TotalPoint )
      this->fields.startRate = 0.0;
    goto LABEL_27;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20);
  if ( !byte_4B14DF6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v20, v30);
    byte_4B14DF6 = 1;
  }
  v19 = (Custom2dSplineMesh_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20);
    v19 = (Custom2dSplineMesh_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_BYTE *)(*(_QWORD *)&v19->fields.vtxIdx + 474LL) )
  {
    v32 = *p_progressData;
    if ( !*p_progressData )
      goto LABEL_40;
    TotalPoint = v32->fields.TotalPoint;
    NextPoint = v32->fields.NextPoint;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v20);
    this->fields.startRate = System_Math__Min_63220564((float)TotalPoint / (float)NextPoint, 1.0, 0LL);
  }
LABEL_27:
  v35 = this->fields.progressData;
  if ( !v35 )
    goto LABEL_40;
  progressPathMesh = this->fields.progressPathMesh;
  if ( !progressPathMesh )
    goto LABEL_40;
  ReleaseScenarioIndex = v35->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= progressPathMesh->max_length )
    goto LABEL_41;
  v19 = progressPathMesh->m_Items[ReleaseScenarioIndex];
  if ( !v19 )
    goto LABEL_40;
  Custom2dSplineMesh__CreateMesh(v19, 0LL);
  v38 = this->fields.progressData;
  if ( !v38 )
    goto LABEL_40;
  v39 = this->fields.progressPathMesh;
  if ( !v39 )
    goto LABEL_40;
  v40 = v38->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v40 >= v39->max_length )
    goto LABEL_41;
  v19 = v39->m_Items[v40];
  if ( !v19
    || (Custom2dSplineMesh__SetPathRate(v19, this->fields.startRate, 0LL), (v41 = this->fields.progressData) == 0LL)
    || (v42 = this->fields.progressPathMesh) == 0LL )
  {
LABEL_40:
    sub_1BCAA3C(v19, v20);
  }
  v43 = v41->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v43 >= v42->max_length )
LABEL_41:
    sub_1BCAA44(v19, v20);
  v19 = v42->m_Items[v43];
  if ( !v19 )
    goto LABEL_40;
  PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(v19, this->fields.startRate, 0LL);
  x = PointAsWorldFlatten.fields.x;
  y = PointAsWorldFlatten.fields.y;
  z = PointAsWorldFlatten.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v50.fields.x = x;
  v50.fields.y = y;
  v50.fields.z = z;
  GameObjectExtensions__SetPosition(gameObject, v50, 0LL);
  EventInfoShipProgressDrawComponent__SaveProgressData(this, v48);
}


void __fastcall EventInfoShipProgressDrawComponent__EasingMove_d__13___ctor(
        EventInfoShipProgressDrawComponent__EasingMove_d__13_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventInfoShipProgressDrawComponent__EasingMove_d__13__MoveNext(
        EventInfoShipProgressDrawComponent__EasingMove_d__13_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t _1__state; // w8
  struct EventInfoShipProgressDrawComponent_o *_4__this; // x20
  int v8; // w21
  int32_t i_5__2; // w8
  UnityEngine_GameObject_o *targetFrameRate; // x0
  __int64 v11; // x1
  float v12; // s0
  int v13; // w8
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x9
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  __int64 ReleaseScenarioIndex; // x9
  Il2CppClass **v17; // x8
  Custom2dSplineMesh_o *v18; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  float v22; // s11
  float v23; // s12
  float v24; // s13
  bool v25; // w22
  UITweener_o *v26; // x23
  Il2CppObject **p__2__current; // x19
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct EventInfoPointRiverProgressControl_o *pointRiverProgressCtr; // x8
  const MethodInfo *v35; // x1
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17804 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v4, v5);
    byte_4B17804 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    i_5__2 = this->fields._i_5__2;
    this->fields.__1__state = -1;
    v8 = i_5__2 + 1;
    this->fields._i_5__2 = i_5__2 + 1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v8 = 0;
    this->fields.__1__state = -1;
    this->fields._i_5__2 = 0;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  targetFrameRate = (UnityEngine_GameObject_o *)UnityEngine_Application__get_targetFrameRate(0LL);
  if ( !_4__this )
LABEL_26:
    sub_1BCAA3C(targetFrameRate, v11);
  v12 = _4__this->fields.moveAnimTime * (float)(int)targetFrameRate;
  v13 = (int)v12;
  if ( v12 == INFINITY )
    v13 = 0x80000000;
  if ( v8 >= v13 )
  {
    pointRiverProgressCtr = _4__this->fields.pointRiverProgressCtr;
    _4__this->fields.startRate = this->fields.endRate;
    if ( !pointRiverProgressCtr )
      goto LABEL_26;
    targetFrameRate = pointRiverProgressCtr->fields.maskPanel;
    if ( !targetFrameRate )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(targetFrameRate, 0, 0LL);
    EventInfoShipProgressDrawComponent__SaveProgressData(_4__this, v35);
    ActionExtensions__Call(this->fields.endAction, 0LL);
    return 0;
  }
  progressData = _4__this->fields.progressData;
  if ( !progressData )
    goto LABEL_26;
  progressPathMesh = _4__this->fields.progressPathMesh;
  if ( !progressPathMesh )
    goto LABEL_26;
  ReleaseScenarioIndex = progressData->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= progressPathMesh->max_length )
    sub_1BCAA44(targetFrameRate, v11);
  v17 = &progressPathMesh->obj.klass + ReleaseScenarioIndex;
  v18 = (Custom2dSplineMesh_o *)v17[4];
  if ( !v18 )
    goto LABEL_26;
  PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(
                          (Custom2dSplineMesh_o *)v17[4],
                          _4__this->fields.startRate,
                          0LL);
  x = PointAsWorldFlatten.fields.x;
  y = PointAsWorldFlatten.fields.y;
  z = PointAsWorldFlatten.fields.z;
  v38 = Custom2dSplineMesh__GetPointAsWorldFlatten(v18, _4__this->fields.startRate + this->fields.moveRate, 0LL);
  v22 = v38.fields.x;
  v23 = v38.fields.y;
  v24 = v38.fields.z;
  targetFrameRate = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)_4__this,
                                                  0LL);
  if ( !targetFrameRate )
    goto LABEL_26;
  targetFrameRate = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetFrameRate, 0LL);
  if ( !targetFrameRate )
    goto LABEL_26;
  targetFrameRate = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_object_(
                                                  targetFrameRate,
                                                  (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  if ( !targetFrameRate )
    goto LABEL_26;
  v25 = 1;
  v26 = (UITweener_o *)targetFrameRate;
  *(float *)&targetFrameRate[5].monitor = x;
  *((float *)&targetFrameRate[5].monitor + 1) = y;
  *(float *)&targetFrameRate[5].fields.m_CachedPtr = z;
  *((float *)&targetFrameRate[5].fields + 1) = v22;
  LOBYTE(targetFrameRate[6].monitor) = 1;
  *(float *)&targetFrameRate[6].klass = v23;
  *((float *)&targetFrameRate[6].klass + 1) = v24;
  *(float *)&targetFrameRate[2].monitor = UnityEngine_Time__get_deltaTime(0LL);
  v26->fields.method = 0;
  UITweener__PlayForward(v26, 0LL);
  Custom2dSplineMesh__SetPathRate(v18, _4__this->fields.startRate, 0LL);
  _4__this->fields.startRate = _4__this->fields.startRate + this->fields.moveRate;
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, 0LL, v28, v29, v30, v31, v32, v33);
  *((_DWORD *)p__2__current - 2) = 1;
  return v25;
}


Il2CppObject *__fastcall EventInfoShipProgressDrawComponent__EasingMove_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventInfoShipProgressDrawComponent__EasingMove_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventInfoShipProgressDrawComponent__EasingMove_d__13__System_Collections_IEnumerator_Reset(
        EventInfoShipProgressDrawComponent__EasingMove_d__13_o *this,
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
         &Method_EventInfoShipProgressDrawComponent__EasingMove_d__13_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall EventInfoShipProgressDrawComponent__EasingMove_d__13__System_Collections_IEnumerator_get_Current(
        EventInfoShipProgressDrawComponent__EasingMove_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventInfoShipProgressDrawComponent__EasingMove_d__13__System_IDisposable_Dispose(
        EventInfoShipProgressDrawComponent__EasingMove_d__13_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15___ctor(
        EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15__MoveNext(
        EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t _1__state; // w8
  struct EventInfoShipProgressDrawComponent_o *_4__this; // x20
  __int64 v12; // x1
  Il2CppObject *Component_object; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  _BOOL4 isFadeIn; // w22
  float v21; // s1
  float v22; // s2
  float v23; // s0
  float v24; // s8
  float v25; // s10
  float z; // s9
  float v27; // s1
  float v28; // s11
  float v29; // s10
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  System_String_o **v32; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4B17805 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_23507/*"ship_fade_out"*/, v6, v7);
    this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)sub_1BCA7E0(
                                                                                      &StringLiteral_23506/*"ship_fade_in"*/,
                                                                                      v8,
                                                                                      v9);
    byte_4B17805 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    goto LABEL_22;
  }
  if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_29;
    this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)_4__this->fields.progressShipAnim;
    if ( !this )
      goto LABEL_29;
    SimpleAnimation__Stop((SimpleAnimation_o *)this, 0LL);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)_4__this,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Object__op_Inequality(
                                                                                      (UnityEngine_Object_o *)Component_object,
                                                                                      0LL,
                                                                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      isFadeIn = v3->fields.isFadeIn;
      this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_transform(
                                                                                        (UnityEngine_Component_o *)_4__this,
                                                                                        0LL);
      if ( !this )
        goto LABEL_29;
      *(UnityEngine_Vector3_o *)(&v21 - 1) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
      v24 = v23;
      if ( isFadeIn )
      {
        v25 = v21;
        z = v22;
        this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_gameObject(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0LL);
        if ( !Component_object )
          goto LABEL_29;
        GameObjectExtensions__SetLocalPosition_34331148(
          (UnityEngine_GameObject_o *)this,
          v24,
          v25 - *((float *)&Component_object[3].monitor + 1),
          z,
          0LL);
      }
      else
      {
        this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_transform(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0LL);
        if ( !this )
          goto LABEL_29;
        *(UnityEngine_Vector3_o *)(&v27 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        if ( !Component_object )
          goto LABEL_29;
        v28 = *((float *)&Component_object[3].monitor + 1);
        v29 = v27;
        this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_transform(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0LL);
        if ( !this )
          goto LABEL_29;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
        z = localPosition.fields.z;
        v25 = v29 + v28;
      }
      v34.fields.x = v24;
      v34.fields.y = v25;
      v34.fields.z = z;
      EventInfoUISlideAnimation__StartSlideAnim_42792984(
        (EventInfoUISlideAnimation_o *)Component_object,
        0LL,
        v34,
        isFadeIn,
        0LL);
    }
    if ( v3->fields.isWait )
    {
      v3->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1BCA784(p__2__current, 0LL, v14, v15, v16, v17, v18, v19);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    }
LABEL_22:
    if ( v3->fields.isFadeIn )
      v32 = (System_String_o **)&StringLiteral_23506/*"ship_fade_in"*/;
    else
      v32 = (System_String_o **)&StringLiteral_23507/*"ship_fade_out"*/;
    if ( _4__this )
    {
      this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)_4__this->fields.progressShipAnim;
      if ( this )
      {
        SimpleAnimation__Play_64539336((SimpleAnimation_o *)this, *v32, 0LL);
        return 0;
      }
    }
LABEL_29:
    sub_1BCAA3C(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15__System_Collections_IEnumerator_Reset(
        EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *this,
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
         &Method_EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15__System_Collections_IEnumerator_get_Current(
        EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15__System_IDisposable_Dispose(
        EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *this,
        const MethodInfo *method)
{
  ;
}