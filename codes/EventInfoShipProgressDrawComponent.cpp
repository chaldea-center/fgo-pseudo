void __fastcall EventInfoShipProgressDrawComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E9548 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoShipProgressDrawComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_10930/*"ProgressShipData_"*/, v8, v9, v10);
    byte_42E9548 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoShipProgressDrawComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_10930/*"ProgressShipData_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_10930/*"ProgressShipData_"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
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
    sub_B5D69C(this, method);
  max_length = progressPathMesh->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}


void __fastcall EventInfoShipProgressDrawComponent__DeleteContinueData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
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
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v32; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v39; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v42; // x3
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  unsigned __int64 v44; // x10
  int32_t *v45; // x11
  __int64 v46; // x0
  _DWORD *v47; // x0
  __int64 v48; // x1
  __int64 v49; // x10
  int32_t v50; // w2
  __int64 v51; // x1
  EventInfoShipProgressDrawComponent_c *v52; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x21
  System_String_o *v54; // x1
  System_String_o *v55; // x0
  System_Collections_Generic_IEnumerator_T__c *v56; // x8
  unsigned __int64 v57; // x10
  int32_t *v58; // x11
  __int64 v59; // x0
  WarEntity_o *entity; // [xsp+10h] [xbp-50h] BYREF
  int32_t v61; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_42E9545 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v1, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventDetailMaster___, v4, v5, v6);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v13, v14, v15);
    sub_B5D5C4(&EventEntity_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&EventInfoShipProgressDrawComponent_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v28, v29, v30);
    byte_42E9545 = 1;
  }
  v61 = 0;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster->fields.list,
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventDetailMaster___),
        !list) )
  {
    sub_B5D69C(Master_WarQuestSelectionMaster, v32);
  }
  v34 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v35);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v39;
        p_offset += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v36);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v43 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v44 = 0LL;
      v45 = &v43->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v45 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v44;
        v45 += 4;
        if ( v44 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v46 = (__int64)&v43->vtable[*v45].method;
    }
    else
    {
LABEL_20:
      v46 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v42);
    }
    v47 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(
                      Enumerator,
                      *(_QWORD *)(v46 + 8));
    if ( v47 )
    {
      v49 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v47 + 300LL) >= (unsigned int)v49
        && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)v47 + 200LL) + 8 * v49 - 8) == EventEntity_TypeInfo )
      {
        v50 = v47[4];
        v61 = v50;
        if ( !v34 )
          sub_B5D69C(v47, v48);
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               v34,
               &entity,
               v50,
               (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          if ( !entity )
            sub_B5D69C(0LL, v51);
          if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)entity, 0LL) )
          {
            v52 = EventInfoShipProgressDrawComponent_TypeInfo;
            if ( (BYTE3(EventInfoShipProgressDrawComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
              v52 = EventInfoShipProgressDrawComponent_TypeInfo;
            }
            SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v52->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
            v54 = System_Int32__ToString((int32_t)&v61, 0LL);
            v55 = System_String__Concat_44577788(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v54, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v55, 0LL);
          }
        }
      }
    }
  }
  v56 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v57 = 0LL;
    v58 = &v56->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      ++v57;
      v58 += 4;
      if ( v57 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v59 = (__int64)&v56->vtable[*v58].method;
  }
  else
  {
LABEL_37:
    v59 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v42);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v59)(Enumerator, *(_QWORD *)(v59 + 8));
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
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42E9541 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoShipProgressDrawComponent__EasingMove_d__13_TypeInfo, (_DWORD)endAction, (_DWORD)method, v5);
    byte_42E9541 = 1;
  }
  v10 = sub_B5D694(EventInfoShipProgressDrawComponent__EasingMove_d__13_TypeInfo);
  EventInfoShipProgressDrawComponent__EasingMove_d__13___ctor(
    (EventInfoShipProgressDrawComponent__EasingMove_d__13_o *)v10,
    0,
    0LL);
  if ( !v10 )
    sub_B5D69C(v11, v12);
  *(_QWORD *)(v10 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 48) = endAction;
  sub_B5D560((BattleServantConfConponent_o *)(v10 + 48), (System_Int32_array **)endAction, v19, v20, v21, v22, v23, v24);
  *(float *)(v10 + 40) = moveRate;
  *(float *)(v10 + 44) = endRate;
  return (System_Collections_IEnumerator_o *)v10;
}


bool __fastcall EventInfoShipProgressDrawComponent__HasSaveData(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w19
  EventInfoShipProgressDrawComponent_c *v5; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x0

  v4 = (int)this;
  if ( (byte_42E9546 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoShipProgressDrawComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9546 = 1;
  }
  v5 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( (BYTE3(EventInfoShipProgressDrawComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
    v5 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v5->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v7 = System_Int32__ToString(v4 + 116, 0LL);
  v8 = System_String__Concat_44577788(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v7, 0LL);
  return UnityEngine_PlayerPrefs__HasKey(v8, 0LL);
}


void __fastcall EventInfoShipProgressDrawComponent__LoadProgressData(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  EventInfoShipProgressDrawComponent_c *v11; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  System_String_o *String; // x20
  void *transform; // x0
  void *v17; // x1
  int v18; // w8
  System_String_o **v19; // x20
  float v20; // s8
  int v21; // w21
  float v22; // s9
  float v23; // s10
  __int64 v24; // x0
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9544 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventInfoShipProgressDrawComponent_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E9544 = 1;
  }
  v11 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( (BYTE3(EventInfoShipProgressDrawComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
    v11 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v11->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v13 = System_Int32__ToString((int)this + 116, 0LL);
  v14 = System_String__Concat_44577788(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v13, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v14, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !System_String__IsNullOrEmpty(String, 0LL) )
  {
    transform = (void *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !transform )
      goto LABEL_22;
    v17 = transform;
    if ( !*((_DWORD *)transform + 6) )
      goto LABEL_23;
    *((_WORD *)transform + 16) = 58;
    if ( !String )
      goto LABEL_22;
    transform = System_String__Split(String, (System_Char_array *)transform, 0LL);
    if ( !transform )
      goto LABEL_22;
    v18 = *((_DWORD *)transform + 6);
    v19 = (System_String_o **)transform;
    v20 = 0.0;
    if ( v18 < 1 )
    {
      v23 = 0.0;
      v22 = 0.0;
    }
    else
    {
      v21 = v18 & ~(v18 >> 31);
      v22 = System_Single__Parse(*((System_String_o **)transform + 4), 0LL);
      if ( v21 >= 2 )
      {
        if ( *((_DWORD *)v19 + 6) > 1u )
        {
          v23 = System_Single__Parse(v19[5], 0LL);
          if ( (unsigned int)v21 < 3 )
            goto LABEL_19;
          if ( *((_DWORD *)v19 + 6) > 2u )
          {
            v20 = System_Single__Parse(v19[6], 0LL);
            goto LABEL_19;
          }
        }
LABEL_23:
        v24 = sub_B5D6C8(transform);
        sub_B5D668(v24, 0LL);
      }
      v23 = 0.0;
    }
LABEL_19:
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      v25.fields.z = 0.0;
      v25.fields.x = v22;
      v25.fields.y = v23;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v25, 0LL);
      this->fields.startRate = v20;
      return;
    }
LABEL_22:
    sub_B5D69C(transform, v17);
  }
}


void __fastcall EventInfoShipProgressDrawComponent__OnDestroy(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.progressPathMesh = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.progressPathMesh, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall EventInfoShipProgressDrawComponent__PlayProgressShipDefaultAnim(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventInfoShipProgressDrawComponent_o *v4; // x19
  struct SimpleAnimation_o *progressShipAnim; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v7; // x19
  System_String_o *name; // x1

  v4 = this;
  if ( (byte_42E9542 & 1) == 0 )
  {
    this = (EventInfoShipProgressDrawComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9542 = 1;
  }
  progressShipAnim = v4->fields.progressShipAnim;
  if ( !progressShipAnim )
    goto LABEL_12;
  monitor = (UnityEngine_Object_o *)progressShipAnim[1].monitor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (EventInfoShipProgressDrawComponent_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = v4->fields.progressShipAnim;
    if ( v7 )
    {
      this = (EventInfoShipProgressDrawComponent_o *)v7[1].monitor;
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        SimpleAnimation__Play_16676044(v7, name, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B5D69C(this, method);
  }
}


void __fastcall EventInfoShipProgressDrawComponent__PlayProgressShipMoveAnim(
        EventInfoShipProgressDrawComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventInfoShipProgressDrawComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct SimpleAnimation_o *progressShipAnim; // x8
  UnityEngine_Object_o *monitor; // x21
  struct SimpleAnimation_o *v11; // x21
  System_String_o *name; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  __int64 TotalPoint; // x21
  __int64 NextPoint; // x22
  float v16; // s0
  float startRate; // s10
  float v18; // s8
  const MethodInfo *v19; // x2
  float moveAnimTime; // s11
  int v21; // w21
  struct EventInfoPointRiverProgressControl_o *pointRiverProgressCtr; // x8
  System_Collections_IEnumerator_o *v23; // x0
  const MethodInfo *v24; // x1

  v5 = this;
  if ( (byte_42E9540 & 1) == 0 )
  {
    sub_B5D5C4(&System_Math_TypeInfo, (_DWORD)endAction, (_DWORD)method, v3);
    this = (EventInfoShipProgressDrawComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E9540 = 1;
  }
  if ( v5->fields.progressData )
  {
    progressShipAnim = v5->fields.progressShipAnim;
    if ( !progressShipAnim )
      goto LABEL_24;
    monitor = (UnityEngine_Object_o *)progressShipAnim[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (EventInfoShipProgressDrawComponent_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v11 = v5->fields.progressShipAnim;
      if ( !v11 )
        goto LABEL_24;
      this = (EventInfoShipProgressDrawComponent_o *)v11[1].monitor;
      if ( !this )
        goto LABEL_24;
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
      this = (EventInfoShipProgressDrawComponent_o *)SimpleAnimation__IsPlaying(v11, name, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (EventInfoShipProgressDrawComponent_o *)v5->fields.progressShipAnim;
        if ( !this )
          goto LABEL_24;
        SimpleAnimation__Stop((SimpleAnimation_o *)this, 0LL);
      }
    }
    progressData = v5->fields.progressData;
    if ( progressData )
    {
      TotalPoint = progressData->fields.TotalPoint;
      NextPoint = progressData->fields.NextPoint;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v16 = System_Math__Min_45149968((float)TotalPoint / (float)NextPoint, 1.0, 0LL);
      startRate = v5->fields.startRate;
      v18 = v16;
      this = (EventInfoShipProgressDrawComponent_o *)UnityEngine_Application__get_targetFrameRate(0LL);
      moveAnimTime = v5->fields.moveAnimTime;
      v21 = (int)this;
      if ( v18 < 1.0 )
        goto LABEL_22;
      pointRiverProgressCtr = v5->fields.pointRiverProgressCtr;
      if ( pointRiverProgressCtr )
      {
        this = (EventInfoShipProgressDrawComponent_o *)pointRiverProgressCtr->fields.maskPanel;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
LABEL_22:
          v23 = EventInfoShipProgressDrawComponent__EasingMove(
                  v5,
                  endAction,
                  v18,
                  (float)(v18 - startRate) / (float)(moveAnimTime * (float)v21),
                  v19);
          UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)v5, v23, 0LL);
          EventInfoShipProgressDrawComponent__PlayProgressShipDefaultAnim(v5, v24);
          return;
        }
      }
    }
LABEL_24:
    sub_B5D69C(this, endAction);
  }
}


System_Collections_IEnumerator_o *__fastcall EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
        EventInfoShipProgressDrawComponent_o *this,
        bool isFadeIn,
        bool isWait,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42E9543 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_TypeInfo, isFadeIn, isWait, method);
    byte_42E9543 = 1;
  }
  v7 = sub_B5D694(EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_TypeInfo);
  EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15___ctor(
    (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_BYTE *)(v7 + 40) = isFadeIn;
  *(_BYTE *)(v7 + 41) = isWait;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall EventInfoShipProgressDrawComponent__ResetShip(
        EventInfoShipProgressDrawComponent_o *this,
        EventInfoPointRiverProgressControl_ProgressData_o *progressData_,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  __int64 v26; // x0
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.progressData = progressData_;
  p_progressData = &this->fields.progressData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.progressData,
    (System_Int32_array **)progressData_,
    (System_String_array **)method,
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
    sub_B5D69C(v10, v11);
  }
  v20 = v18->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v20 >= v19->max_length )
  {
LABEL_15:
    v26 = sub_B5D6C8(v10);
    sub_B5D668(v26, 0LL);
  }
  v10 = v19->m_Items[v20];
  if ( !v10 )
    goto LABEL_14;
  PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(v10, this->fields.startRate, 0LL);
  x = PointAsWorldFlatten.fields.x;
  y = PointAsWorldFlatten.fields.y;
  z = PointAsWorldFlatten.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v28.fields.x = x;
  v28.fields.y = y;
  v28.fields.z = z;
  GameObjectExtensions__SetPosition(gameObject, v28, 0LL);
  EventInfoShipProgressDrawComponent__SaveProgressData(this, v25);
}


void __fastcall EventInfoShipProgressDrawComponent__SaveProgressData(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Text_StringBuilder_o *v11; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v13; // x1
  float v14; // s0
  System_String_o *v15; // x0
  float v16; // s0
  System_String_o *v17; // x0
  EventInfoShipProgressDrawComponent_c *v18; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x21
  System_String_o *v20; // x0
  System_String_o *v21; // x19
  System_String_o *v22; // x0
  float startRate; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o anonymous1[5]; // [xsp+10h] [xbp-30h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9547 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoShipProgressDrawComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v8, v9, v10);
    byte_42E9547 = 1;
  }
  anonymous1[0].fields.z = 0.0;
  *(_QWORD *)&anonymous1[0].fields.x = 0LL;
  startRate = 0.0;
  v11 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v11, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
        anonymous1[0] = localPosition,
        transform = (UnityEngine_Transform_o *)System_Single__ToString(
                                                 localPosition.fields.x,
                                                 (const MethodInfo *)anonymous1),
        !v11) )
  {
    sub_B5D69C(transform, v13);
  }
  System_Text_StringBuilder__Append_42953744(v11, (System_String_o *)transform, 0LL);
  System_Text_StringBuilder__Append_42953744(v11, (System_String_o *)StringLiteral_1245/*":"*/, 0LL);
  v15 = System_Single__ToString(v14, (const MethodInfo *)&anonymous1[0].fields.y);
  System_Text_StringBuilder__Append_42953744(v11, v15, 0LL);
  System_Text_StringBuilder__Append_42953744(v11, (System_String_o *)StringLiteral_1245/*":"*/, 0LL);
  startRate = this->fields.startRate;
  v17 = System_Single__ToString(v16, (const MethodInfo *)&startRate);
  System_Text_StringBuilder__Append_42953744(v11, v17, 0LL);
  v18 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( (BYTE3(EventInfoShipProgressDrawComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
    v18 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v18->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v20 = System_Int32__ToString((int)this + 116, 0LL);
  v21 = System_String__Concat_44577788(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v20, 0LL);
  v22 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v11->klass->vtable._3_ToString.method)(
                             v11,
                             v11->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString(v21, v22, 0LL);
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
    sub_B5D69C(0LL, v5);
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct EventInfoPointRiverProgressControl_o **p_pointRiverProgressCtr; // x21
  UnityEngine_Object_o *pointRiverProgressCtr; // x23
  Custom2dSplineMesh_o *v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o **p_progressData; // x21
  const MethodInfo *v30; // x1
  int v31; // w2
  __int64 v32; // x3
  struct EventInfoPointRiverProgressControl_ProgressData_o *v33; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v34; // x8
  __int64 TotalPoint; // x20
  __int64 NextPoint; // x21
  struct EventInfoPointRiverProgressControl_ProgressData_o *v37; // x9
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  __int64 ReleaseScenarioIndex; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v40; // x9
  struct Custom2dSplineMesh_array *v41; // x8
  __int64 v42; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v43; // x9
  struct Custom2dSplineMesh_array *v44; // x8
  __int64 v45; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v50; // x1
  __int64 v51; // x0
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E953F & 1) == 0 )
  {
    sub_B5D5C4(&System_Math_TypeInfo, (_DWORD)inputPointRiverProgressCtr, inputEventId, isReset);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v15, v16, v17);
    byte_42E953F = 1;
  }
  this->fields.pointRiverProgressCtr = inputPointRiverProgressCtr;
  p_pointRiverProgressCtr = &this->fields.pointRiverProgressCtr;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.pointRiverProgressCtr,
    (System_Int32_array **)inputPointRiverProgressCtr,
    *(System_String_array ***)&inputEventId,
    (System_String_array **)isReset,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  pointRiverProgressCtr = (UnityEngine_Object_o *)this->fields.pointRiverProgressCtr;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v20 = (Custom2dSplineMesh_o *)UnityEngine_Object__op_Equality(pointRiverProgressCtr, 0LL, 0LL);
  if ( ((unsigned __int8)v20 & 1) != 0 )
    return;
  if ( !*p_pointRiverProgressCtr )
    goto LABEL_44;
  progressData = (*p_pointRiverProgressCtr)->fields.progressData;
  if ( !progressData )
    return;
  this->fields.progressData = progressData;
  p_progressData = &this->fields.progressData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.progressData,
    (System_Int32_array **)progressData,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.eventId = inputEventId;
  EventInfoShipProgressDrawComponent__LoadProgressData(this, v30);
  v33 = this->fields.progressData;
  if ( isReset )
  {
    if ( !v33 )
      goto LABEL_44;
    goto LABEL_29;
  }
  if ( !v33 )
    goto LABEL_44;
  if ( !v33->fields.IsFreeQuestClear )
  {
LABEL_29:
    if ( v33->fields.OldTotalPoint == v33->fields.TotalPoint )
      this->fields.startRate = 0.0;
    goto LABEL_31;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E502A )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v21, v31, v32);
    byte_42E502A = 1;
  }
  v20 = (Custom2dSplineMesh_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = (Custom2dSplineMesh_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !BYTE2(v20[1].klass[1]._1.generic_class) )
  {
    v34 = *p_progressData;
    if ( !*p_progressData )
      goto LABEL_44;
    TotalPoint = v34->fields.TotalPoint;
    NextPoint = v34->fields.NextPoint;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.startRate = System_Math__Min_45149968((float)TotalPoint / (float)NextPoint, 1.0, 0LL);
  }
LABEL_31:
  v37 = this->fields.progressData;
  if ( !v37 )
    goto LABEL_44;
  progressPathMesh = this->fields.progressPathMesh;
  if ( !progressPathMesh )
    goto LABEL_44;
  ReleaseScenarioIndex = v37->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= progressPathMesh->max_length )
    goto LABEL_45;
  v20 = progressPathMesh->m_Items[ReleaseScenarioIndex];
  if ( !v20 )
    goto LABEL_44;
  Custom2dSplineMesh__CreateMesh(v20, 0LL);
  v40 = this->fields.progressData;
  if ( !v40 )
    goto LABEL_44;
  v41 = this->fields.progressPathMesh;
  if ( !v41 )
    goto LABEL_44;
  v42 = v40->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v42 >= v41->max_length )
    goto LABEL_45;
  v20 = v41->m_Items[v42];
  if ( !v20
    || (Custom2dSplineMesh__SetPathRate(v20, this->fields.startRate, 0LL), (v43 = this->fields.progressData) == 0LL)
    || (v44 = this->fields.progressPathMesh) == 0LL )
  {
LABEL_44:
    sub_B5D69C(v20, v21);
  }
  v45 = v43->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v45 >= v44->max_length )
  {
LABEL_45:
    v51 = sub_B5D6C8(v20);
    sub_B5D668(v51, 0LL);
  }
  v20 = v44->m_Items[v45];
  if ( !v20 )
    goto LABEL_44;
  PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(v20, this->fields.startRate, 0LL);
  x = PointAsWorldFlatten.fields.x;
  y = PointAsWorldFlatten.fields.y;
  z = PointAsWorldFlatten.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v53.fields.x = x;
  v53.fields.y = y;
  v53.fields.z = z;
  GameObjectExtensions__SetPosition(gameObject, v53, 0LL);
  EventInfoShipProgressDrawComponent__SaveProgressData(this, v50);
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
  int v2; // w2
  __int64 v3; // x3
  int32_t _1__state; // w8
  struct EventInfoShipProgressDrawComponent_o *_4__this; // x20
  int v7; // w21
  int32_t i_5__2; // w8
  EventInfoPointRiverProgressControl_o *targetFrameRate; // x0
  __int64 v10; // x1
  float v11; // s0
  double v12; // d0
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x9
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  __int64 ReleaseScenarioIndex; // x9
  Il2CppClass **v16; // x8
  Custom2dSplineMesh_o *v17; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  float v21; // s11
  float v22; // s12
  float v23; // s13
  bool v24; // w22
  UITweener_o *v25; // x23
  Il2CppObject **p__2__current; // x19
  __int64 v28; // x0
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E6547 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, (_DWORD)method, v2, v3);
    byte_42E6547 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    i_5__2 = this->fields._i_5__2;
    this->fields.__1__state = -1;
    v7 = i_5__2 + 1;
    this->fields._i_5__2 = i_5__2 + 1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v7 = 0;
    this->fields.__1__state = -1;
    this->fields._i_5__2 = 0;
  }
  targetFrameRate = (EventInfoPointRiverProgressControl_o *)UnityEngine_Application__get_targetFrameRate(0LL);
  if ( !_4__this )
    goto LABEL_24;
  v11 = _4__this->fields.moveAnimTime * (float)(int)targetFrameRate;
  if ( v11 == INFINITY )
    v12 = -v11;
  else
    v12 = v11;
  if ( v7 >= (int)v12 )
  {
    targetFrameRate = _4__this->fields.pointRiverProgressCtr;
    _4__this->fields.startRate = this->fields.endRate;
    if ( !targetFrameRate )
      goto LABEL_24;
    EventInfoPointRiverProgressControl__SetMaskPanelActive(targetFrameRate, 0, 0LL);
    EventInfoShipProgressDrawComponent__SaveProgressData(_4__this, 0LL);
    ActionExtensions__Call(this->fields.endAction, 0LL);
    return 0;
  }
  progressData = _4__this->fields.progressData;
  if ( !progressData )
    goto LABEL_24;
  progressPathMesh = _4__this->fields.progressPathMesh;
  if ( !progressPathMesh )
    goto LABEL_24;
  ReleaseScenarioIndex = progressData->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= progressPathMesh->max_length )
  {
    v28 = sub_B5D6C8(targetFrameRate);
    sub_B5D668(v28, 0LL);
  }
  v16 = &progressPathMesh->obj.klass + ReleaseScenarioIndex;
  v17 = (Custom2dSplineMesh_o *)v16[4];
  if ( !v17 )
    goto LABEL_24;
  PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(
                          (Custom2dSplineMesh_o *)v16[4],
                          _4__this->fields.startRate,
                          0LL);
  x = PointAsWorldFlatten.fields.x;
  y = PointAsWorldFlatten.fields.y;
  z = PointAsWorldFlatten.fields.z;
  v30 = Custom2dSplineMesh__GetPointAsWorldFlatten(v17, _4__this->fields.startRate + this->fields.moveRate, 0LL);
  v21 = v30.fields.x;
  v22 = v30.fields.y;
  v23 = v30.fields.z;
  targetFrameRate = (EventInfoPointRiverProgressControl_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)_4__this,
                                                              0LL);
  if ( !targetFrameRate
    || (targetFrameRate = (EventInfoPointRiverProgressControl_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)targetFrameRate,
                                                                    0LL)) == 0LL
    || (targetFrameRate = (EventInfoPointRiverProgressControl_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                                    (UnityEngine_GameObject_o *)targetFrameRate,
                                                                    (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___)) == 0LL )
  {
LABEL_24:
    sub_B5D69C(targetFrameRate, v10);
  }
  v24 = 1;
  v25 = (UITweener_o *)targetFrameRate;
  *(float *)&targetFrameRate->fields.maskPanel = x;
  *((float *)&targetFrameRate->fields.maskPanel + 1) = y;
  *(float *)&targetFrameRate->fields.userEventPointMaster = z;
  *((float *)&targetFrameRate->fields.userEventPointMaster + 1) = v21;
  LOBYTE(targetFrameRate->fields.eventUiValueEntityList) = 1;
  *(float *)&targetFrameRate->fields.eventUiEntity = v22;
  *((float *)&targetFrameRate->fields.eventUiEntity + 1) = v23;
  *(float *)&targetFrameRate->fields.assetData2 = UnityEngine_Time__get_deltaTime(0LL);
  v25->fields.style = 0;
  UITweener__PlayForward(v25, 0LL);
  Custom2dSplineMesh__SetPathRate(v17, _4__this->fields.startRate, 0LL);
  _4__this->fields.startRate = _4__this->fields.startRate + this->fields.moveRate;
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_B5D560(p__2__current);
  *((_DWORD *)p__2__current - 2) = 1;
  return v24;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_EventInfoShipProgressDrawComponent__EasingMove_d__13_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t _1__state; // w8
  struct EventInfoShipProgressDrawComponent_o *_4__this; // x20
  WebViewObject_o *Component_WebViewObject; // x21
  _BOOL4 isFadeIn; // w22
  float v18; // s1
  float v19; // s2
  float v20; // s0
  float v21; // s8
  float v22; // s9
  float v23; // s10
  bool v24; // w2
  EventInfoUISlideAnimation_o *v25; // x0
  float v26; // s0
  float v27; // s1
  float v28; // s2
  float v29; // s1
  float v30; // s10
  float v31; // s9
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_String_o **v34; // x8

  v4 = this;
  if ( (byte_42E6548 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_22403/*"ship_fade_out"*/, v8, v9, v10);
    this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)sub_B5D5C4(
                                                                                      &StringLiteral_22402/*"ship_fade_in"*/,
                                                                                      v11,
                                                                                      v12,
                                                                                      v13);
    byte_42E6548 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    goto LABEL_23;
  }
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_30;
    this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)_4__this->fields.progressShipAnim;
    if ( !this )
      goto LABEL_30;
    SimpleAnimation__Stop((SimpleAnimation_o *)this, 0LL);
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                (UnityEngine_Component_o *)_4__this,
                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Object__op_Inequality(
                                                                                      (UnityEngine_Object_o *)Component_WebViewObject,
                                                                                      0LL,
                                                                                      0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      isFadeIn = v4->fields.isFadeIn;
      this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_transform(
                                                                                        (UnityEngine_Component_o *)_4__this,
                                                                                        0LL);
      if ( !this )
        goto LABEL_30;
      *(UnityEngine_Vector3_o *)(&v18 - 1) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
      v21 = v20;
      if ( isFadeIn )
      {
        v22 = v18;
        v23 = v19;
        this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_gameObject(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0LL);
        if ( !Component_WebViewObject )
          goto LABEL_30;
        GameObjectExtensions__SetLocalPosition_32430604(
          (UnityEngine_GameObject_o *)this,
          v21,
          v22 - *((float *)&Component_WebViewObject->fields.onStarted + 1),
          v23,
          0LL);
        v24 = 1;
        v25 = (EventInfoUISlideAnimation_o *)Component_WebViewObject;
        v26 = v21;
        v27 = v22;
        v28 = v23;
      }
      else
      {
        this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_transform(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0LL);
        if ( !this )
          goto LABEL_30;
        *(UnityEngine_Vector3_o *)(&v29 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        if ( !Component_WebViewObject )
          goto LABEL_30;
        v30 = *((float *)&Component_WebViewObject->fields.onStarted + 1);
        v31 = v29;
        this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_transform(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0LL);
        if ( !this )
          goto LABEL_30;
        *(UnityEngine_Vector3_o *)(&v28 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        v27 = v31 + v30;
        v25 = (EventInfoUISlideAnimation_o *)Component_WebViewObject;
        v26 = v21;
        v24 = 0;
      }
      EventInfoUISlideAnimation__StartSlideAnim_27096836(v25, 0LL, *(UnityEngine_Vector3_o *)&v26, v24, 0LL);
    }
    if ( v4->fields.isWait )
    {
      v4->fields.__2__current = 0LL;
      p__2__current = &v4->fields.__2__current;
      sub_B5D560(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_23:
    if ( v4->fields.isFadeIn )
      v34 = (System_String_o **)&StringLiteral_22402/*"ship_fade_in"*/;
    else
      v34 = (System_String_o **)&StringLiteral_22403/*"ship_fade_out"*/;
    if ( _4__this )
    {
      this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)_4__this->fields.progressShipAnim;
      if ( this )
      {
        SimpleAnimation__Play_16676044((SimpleAnimation_o *)this, *v34, 0LL);
        return 0;
      }
    }
LABEL_30:
    sub_B5D69C(this, method);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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