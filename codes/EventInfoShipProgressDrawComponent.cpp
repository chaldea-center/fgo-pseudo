void __fastcall EventInfoShipProgressDrawComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_421562C & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoShipProgressDrawComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_10826/*"ProgressShipData_"*/, v8);
    byte_421562C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoShipProgressDrawComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_10826/*"ProgressShipData_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_10826/*"ProgressShipData_"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
    sub_B0D97C(this);
  max_length = progressPathMesh->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}


void __fastcall EventInfoShipProgressDrawComponent__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  _DWORD *v23; // x0
  __int64 v24; // x10
  int32_t v25; // w2
  EventInfoShipProgressDrawComponent_c *v26; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x21
  System_String_o *v28; // x1
  System_String_o *v29; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  WarEntity_o *entity; // [xsp+10h] [xbp-50h] BYREF
  int32_t v35; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4215629 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v1);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventDetailMaster___, v2);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&EventEntity_TypeInfo, v6);
    sub_B0D8A4(&EventInfoShipProgressDrawComponent_TypeInfo, v7);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_4215629 = 1;
  }
  v35 = 0;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster->fields.list,
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventDetailMaster___),
        !list) )
  {
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        p_offset += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_20:
      v22 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                      Enumerator,
                      *(_QWORD *)(v22 + 8));
    if ( v23 )
    {
      v24 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 300LL) >= (unsigned int)v24
        && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * v24 - 8) == EventEntity_TypeInfo )
      {
        v25 = v23[4];
        v35 = v25;
        if ( !v13 )
          sub_B0D97C(v23);
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               v13,
               &entity,
               v25,
               (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          if ( !entity )
            sub_B0D97C(0LL);
          if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)entity, 0LL) )
          {
            v26 = EventInfoShipProgressDrawComponent_TypeInfo;
            if ( (BYTE3(EventInfoShipProgressDrawComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
              v26 = EventInfoShipProgressDrawComponent_TypeInfo;
            }
            SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v26->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
            v28 = System_Int32__ToString((int32_t)&v35, 0LL);
            v29 = System_String__Concat_43849904(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v28, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v29, 0LL);
          }
        }
      }
    }
  }
  v30 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_37:
    v33 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
}


System_Collections_IEnumerator_o *__fastcall EventInfoShipProgressDrawComponent__EasingMove(
        EventInfoShipProgressDrawComponent_o *this,
        System_Action_o *endAction,
        float endRate,
        float moveRate,
        const MethodInfo *method)
{
  __int64 v9; // x21
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

  if ( (byte_4215625 & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoShipProgressDrawComponent__EasingMove_d__13_TypeInfo, endAction);
    byte_4215625 = 1;
  }
  v9 = sub_B0D974(EventInfoShipProgressDrawComponent__EasingMove_d__13_TypeInfo, endAction, method);
  EventInfoShipProgressDrawComponent__EasingMove_d__13___ctor(
    (EventInfoShipProgressDrawComponent__EasingMove_d__13_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  *(_QWORD *)(v9 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v9 + 48) = endAction;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 48), (System_Int32_array **)endAction, v17, v18, v19, v20, v21, v22);
  *(float *)(v9 + 40) = moveRate;
  *(float *)(v9 + 44) = endRate;
  return (System_Collections_IEnumerator_o *)v9;
}


bool __fastcall EventInfoShipProgressDrawComponent__HasSaveData(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w19
  EventInfoShipProgressDrawComponent_c *v3; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0

  v2 = (int)this;
  if ( (byte_421562A & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoShipProgressDrawComponent_TypeInfo, method);
    byte_421562A = 1;
  }
  v3 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( (BYTE3(EventInfoShipProgressDrawComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
    v3 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v3->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v5 = System_Int32__ToString(v2 + 116, 0LL);
  v6 = System_String__Concat_43849904(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v5, 0LL);
  return UnityEngine_PlayerPrefs__HasKey(v6, 0LL);
}


void __fastcall EventInfoShipProgressDrawComponent__LoadProgressData(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  EventInfoShipProgressDrawComponent_c *v5; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  System_String_o *String; // x20
  void *transform; // x0
  int v11; // w8
  System_String_o **v12; // x20
  float v13; // s8
  int v14; // w21
  float v15; // s9
  float v16; // s10
  __int64 v17; // x0
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4215628 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    sub_B0D8A4(&EventInfoShipProgressDrawComponent_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4215628 = 1;
  }
  v5 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( (BYTE3(EventInfoShipProgressDrawComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
    v5 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v5->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v7 = System_Int32__ToString((int)this + 116, 0LL);
  v8 = System_String__Concat_43849904(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v7, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v8, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !System_String__IsNullOrEmpty(String, 0LL) )
  {
    transform = (void *)sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !transform )
      goto LABEL_22;
    if ( !*((_DWORD *)transform + 6) )
      goto LABEL_23;
    *((_WORD *)transform + 16) = 58;
    if ( !String )
      goto LABEL_22;
    transform = System_String__Split(String, (System_Char_array *)transform, 0LL);
    if ( !transform )
      goto LABEL_22;
    v11 = *((_DWORD *)transform + 6);
    v12 = (System_String_o **)transform;
    v13 = 0.0;
    if ( v11 < 1 )
    {
      v16 = 0.0;
      v15 = 0.0;
    }
    else
    {
      v14 = v11 & ~(v11 >> 31);
      v15 = System_Single__Parse(*((System_String_o **)transform + 4), 0LL);
      if ( v14 >= 2 )
      {
        if ( *((_DWORD *)v12 + 6) > 1u )
        {
          v16 = System_Single__Parse(v12[5], 0LL);
          if ( (unsigned int)v14 < 3 )
            goto LABEL_19;
          if ( *((_DWORD *)v12 + 6) > 2u )
          {
            v13 = System_Single__Parse(v12[6], 0LL);
            goto LABEL_19;
          }
        }
LABEL_23:
        v17 = sub_B0D9A8(transform);
        sub_B0D948(v17, 0LL);
      }
      v16 = 0.0;
    }
LABEL_19:
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      v18.fields.z = 0.0;
      v18.fields.x = v15;
      v18.fields.y = v16;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v18, 0LL);
      this->fields.startRate = v13;
      return;
    }
LABEL_22:
    sub_B0D97C(transform);
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.progressPathMesh, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall EventInfoShipProgressDrawComponent__PlayProgressShipDefaultAnim(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  EventInfoShipProgressDrawComponent_o *v2; // x19
  struct SimpleAnimation_o *progressShipAnim; // x8
  UnityEngine_Object_o *monitor; // x20
  struct SimpleAnimation_o *v5; // x19
  System_String_o *name; // x1

  v2 = this;
  if ( (byte_4215626 & 1) == 0 )
  {
    this = (EventInfoShipProgressDrawComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4215626 = 1;
  }
  progressShipAnim = v2->fields.progressShipAnim;
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
    v5 = v2->fields.progressShipAnim;
    if ( v5 )
    {
      this = (EventInfoShipProgressDrawComponent_o *)v5[1].monitor;
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        SimpleAnimation__Play_50482404(v5, name, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B0D97C(this);
  }
}


void __fastcall EventInfoShipProgressDrawComponent__PlayProgressShipMoveAnim(
        EventInfoShipProgressDrawComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  EventInfoShipProgressDrawComponent_o *v4; // x19
  __int64 v5; // x1
  struct SimpleAnimation_o *progressShipAnim; // x8
  UnityEngine_Object_o *monitor; // x21
  struct SimpleAnimation_o *v8; // x21
  System_String_o *name; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  __int64 TotalPoint; // x21
  __int64 NextPoint; // x22
  float v13; // s0
  float startRate; // s10
  float v15; // s8
  const MethodInfo *v16; // x2
  float moveAnimTime; // s11
  int v18; // w21
  struct EventInfoPointRiverProgressControl_o *pointRiverProgressCtr; // x8
  System_Collections_IEnumerator_o *v20; // x0
  const MethodInfo *v21; // x1

  v4 = this;
  if ( (byte_4215624 & 1) == 0 )
  {
    sub_B0D8A4(&System_Math_TypeInfo, endAction);
    this = (EventInfoShipProgressDrawComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4215624 = 1;
  }
  if ( v4->fields.progressData )
  {
    progressShipAnim = v4->fields.progressShipAnim;
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
      v8 = v4->fields.progressShipAnim;
      if ( !v8 )
        goto LABEL_24;
      this = (EventInfoShipProgressDrawComponent_o *)v8[1].monitor;
      if ( !this )
        goto LABEL_24;
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
      this = (EventInfoShipProgressDrawComponent_o *)SimpleAnimation__IsPlaying(v8, name, 0LL);
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
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v13 = System_Math__Min_44560024((float)TotalPoint / (float)NextPoint, 1.0, 0LL);
      startRate = v4->fields.startRate;
      v15 = v13;
      this = (EventInfoShipProgressDrawComponent_o *)UnityEngine_Application__get_targetFrameRate(0LL);
      moveAnimTime = v4->fields.moveAnimTime;
      v18 = (int)this;
      if ( v15 < 1.0 )
        goto LABEL_22;
      pointRiverProgressCtr = v4->fields.pointRiverProgressCtr;
      if ( pointRiverProgressCtr )
      {
        this = (EventInfoShipProgressDrawComponent_o *)pointRiverProgressCtr->fields.maskPanel;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
LABEL_22:
          v20 = EventInfoShipProgressDrawComponent__EasingMove(
                  v4,
                  endAction,
                  v15,
                  (float)(v15 - startRate) / (float)(moveAnimTime * (float)v18),
                  v16);
          UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)v4, v20, 0LL);
          EventInfoShipProgressDrawComponent__PlayProgressShipDefaultAnim(v4, v21);
          return;
        }
      }
    }
LABEL_24:
    sub_B0D97C(this);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
        EventInfoShipProgressDrawComponent_o *this,
        bool isFadeIn,
        bool isWait,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4215627 & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_TypeInfo, isFadeIn);
    byte_4215627 = 1;
  }
  v7 = sub_B0D974(EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_TypeInfo, isFadeIn, isWait);
  EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15___ctor(
    (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
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
  struct EventInfoPointRiverProgressControl_ProgressData_o *v11; // x9
  __int64 v12; // x8
  __int64 ReleaseScenarioIndex; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x9
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  __int64 v16; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v17; // x9
  struct Custom2dSplineMesh_array *v18; // x8
  __int64 v19; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v24; // x1
  __int64 v25; // x0
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.progressData = progressData_;
  p_progressData = &this->fields.progressData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.progressData,
    (System_Int32_array **)progressData_,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = *p_progressData;
  *((_DWORD *)p_progressData + 2) = 0;
  if ( !v11 )
    goto LABEL_14;
  v12 = (__int64)*(p_progressData - 4);
  if ( !v12 )
    goto LABEL_14;
  ReleaseScenarioIndex = v11->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= *(_DWORD *)(v12 + 24) )
    goto LABEL_15;
  v10 = *(Custom2dSplineMesh_o **)(v12 + 8 * ReleaseScenarioIndex + 32);
  if ( !v10 )
    goto LABEL_14;
  Custom2dSplineMesh__CreateMesh(v10, 0LL);
  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_14;
  progressPathMesh = this->fields.progressPathMesh;
  if ( !progressPathMesh )
    goto LABEL_14;
  v16 = progressData->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v16 >= progressPathMesh->max_length )
    goto LABEL_15;
  v10 = progressPathMesh->m_Items[v16];
  if ( !v10
    || (Custom2dSplineMesh__SetPathRate(v10, this->fields.startRate, 0LL), (v17 = this->fields.progressData) == 0LL)
    || (v18 = this->fields.progressPathMesh) == 0LL )
  {
LABEL_14:
    sub_B0D97C(v10);
  }
  v19 = v17->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v19 >= v18->max_length )
  {
LABEL_15:
    v25 = sub_B0D9A8(v10);
    sub_B0D948(v25, 0LL);
  }
  v10 = v18->m_Items[v19];
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
  EventInfoShipProgressDrawComponent__SaveProgressData(this, v24);
}


void __fastcall EventInfoShipProgressDrawComponent__SaveProgressData(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Text_StringBuilder_o *v6; // x20
  UnityEngine_Transform_o *transform; // x0
  float v8; // s0
  System_String_o *v9; // x0
  float v10; // s0
  System_String_o *v11; // x0
  EventInfoShipProgressDrawComponent_c *v12; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x19
  System_String_o *v16; // x0
  float startRate; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o anonymous1[5]; // [xsp+10h] [xbp-30h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421562B & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoShipProgressDrawComponent_TypeInfo, method);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v5);
    byte_421562B = 1;
  }
  anonymous1[0].fields.z = 0.0;
  *(_QWORD *)&anonymous1[0].fields.x = 0LL;
  startRate = 0.0;
  v6 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, method, v2);
  System_Text_StringBuilder___ctor(v6, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
        anonymous1[0] = localPosition,
        transform = (UnityEngine_Transform_o *)System_Single__ToString(
                                                 localPosition.fields.x,
                                                 (const MethodInfo *)anonymous1),
        !v6) )
  {
    sub_B0D97C(transform);
  }
  System_Text_StringBuilder__Append_42155400(v6, (System_String_o *)transform, 0LL);
  System_Text_StringBuilder__Append_42155400(v6, (System_String_o *)StringLiteral_1232/*":"*/, 0LL);
  v9 = System_Single__ToString(v8, (const MethodInfo *)&anonymous1[0].fields.y);
  System_Text_StringBuilder__Append_42155400(v6, v9, 0LL);
  System_Text_StringBuilder__Append_42155400(v6, (System_String_o *)StringLiteral_1232/*":"*/, 0LL);
  startRate = this->fields.startRate;
  v11 = System_Single__ToString(v10, (const MethodInfo *)&startRate);
  System_Text_StringBuilder__Append_42155400(v6, v11, 0LL);
  v12 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( (BYTE3(EventInfoShipProgressDrawComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
    v12 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v12->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v14 = System_Int32__ToString((int)this + 116, 0LL);
  v15 = System_String__Concat_43849904(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v14, 0LL);
  v16 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v6->klass->vtable._3_ToString.method)(
                             v6,
                             v6->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString(v15, v16, 0LL);
}


void __fastcall EventInfoShipProgressDrawComponent__SetActive(
        EventInfoShipProgressDrawComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
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
  __int64 v12; // x1
  __int64 v13; // x1
  struct EventInfoPointRiverProgressControl_o **p_pointRiverProgressCtr; // x21
  UnityEngine_Object_o *pointRiverProgressCtr; // x23
  Custom2dSplineMesh_o *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o **p_progressData; // x21
  const MethodInfo *v25; // x1
  __int64 v26; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v27; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v28; // x8
  __int64 TotalPoint; // x20
  __int64 NextPoint; // x21
  struct EventInfoPointRiverProgressControl_ProgressData_o *v31; // x9
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  __int64 ReleaseScenarioIndex; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v34; // x9
  struct Custom2dSplineMesh_array *v35; // x8
  __int64 v36; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v37; // x9
  struct Custom2dSplineMesh_array *v38; // x8
  __int64 v39; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v44; // x1
  __int64 v45; // x0
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4215623 & 1) == 0 )
  {
    sub_B0D8A4(&System_Math_TypeInfo, inputPointRiverProgressCtr);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v13);
    byte_4215623 = 1;
  }
  this->fields.pointRiverProgressCtr = inputPointRiverProgressCtr;
  p_pointRiverProgressCtr = &this->fields.pointRiverProgressCtr;
  sub_B0D840(
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
  v16 = (Custom2dSplineMesh_o *)UnityEngine_Object__op_Equality(pointRiverProgressCtr, 0LL, 0LL);
  if ( ((unsigned __int8)v16 & 1) != 0 )
    return;
  if ( !*p_pointRiverProgressCtr )
    goto LABEL_44;
  progressData = (*p_pointRiverProgressCtr)->fields.progressData;
  if ( !progressData )
    return;
  this->fields.progressData = progressData;
  p_progressData = &this->fields.progressData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.progressData,
    (System_Int32_array **)progressData,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.eventId = inputEventId;
  EventInfoShipProgressDrawComponent__LoadProgressData(this, v25);
  v27 = this->fields.progressData;
  if ( isReset )
  {
    if ( !v27 )
      goto LABEL_44;
    goto LABEL_29;
  }
  if ( !v27 )
    goto LABEL_44;
  if ( !v27->fields.IsFreeQuestClear )
  {
LABEL_29:
    if ( v27->fields.OldTotalPoint == v27->fields.TotalPoint )
      this->fields.startRate = 0.0;
    goto LABEL_31;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210D3D )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v26);
    byte_4210D3D = 1;
  }
  v16 = (Custom2dSplineMesh_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = (Custom2dSplineMesh_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !BYTE2(v16[1].klass[1]._1.declaringType) )
  {
    v28 = *p_progressData;
    if ( !*p_progressData )
      goto LABEL_44;
    TotalPoint = v28->fields.TotalPoint;
    NextPoint = v28->fields.NextPoint;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.startRate = System_Math__Min_44560024((float)TotalPoint / (float)NextPoint, 1.0, 0LL);
  }
LABEL_31:
  v31 = this->fields.progressData;
  if ( !v31 )
    goto LABEL_44;
  progressPathMesh = this->fields.progressPathMesh;
  if ( !progressPathMesh )
    goto LABEL_44;
  ReleaseScenarioIndex = v31->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= progressPathMesh->max_length )
    goto LABEL_45;
  v16 = progressPathMesh->m_Items[ReleaseScenarioIndex];
  if ( !v16 )
    goto LABEL_44;
  Custom2dSplineMesh__CreateMesh(v16, 0LL);
  v34 = this->fields.progressData;
  if ( !v34 )
    goto LABEL_44;
  v35 = this->fields.progressPathMesh;
  if ( !v35 )
    goto LABEL_44;
  v36 = v34->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v36 >= v35->max_length )
    goto LABEL_45;
  v16 = v35->m_Items[v36];
  if ( !v16
    || (Custom2dSplineMesh__SetPathRate(v16, this->fields.startRate, 0LL), (v37 = this->fields.progressData) == 0LL)
    || (v38 = this->fields.progressPathMesh) == 0LL )
  {
LABEL_44:
    sub_B0D97C(v16);
  }
  v39 = v37->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v39 >= v38->max_length )
  {
LABEL_45:
    v45 = sub_B0D9A8(v16);
    sub_B0D948(v45, 0LL);
  }
  v16 = v38->m_Items[v39];
  if ( !v16 )
    goto LABEL_44;
  PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(v16, this->fields.startRate, 0LL);
  x = PointAsWorldFlatten.fields.x;
  y = PointAsWorldFlatten.fields.y;
  z = PointAsWorldFlatten.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v47.fields.x = x;
  v47.fields.y = y;
  v47.fields.z = z;
  GameObjectExtensions__SetPosition(gameObject, v47, 0LL);
  EventInfoShipProgressDrawComponent__SaveProgressData(this, v44);
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
  int32_t _1__state; // w8
  struct EventInfoShipProgressDrawComponent_o *_4__this; // x20
  int v5; // w21
  int32_t i_5__2; // w8
  EventInfoPointRiverProgressControl_o *targetFrameRate; // x0
  float v8; // s0
  double v9; // d0
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x9
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  __int64 ReleaseScenarioIndex; // x9
  Il2CppClass **v13; // x8
  Custom2dSplineMesh_o *v14; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  float v18; // s11
  float v19; // s12
  float v20; // s13
  bool v21; // w22
  UITweener_o *v22; // x23
  Il2CppObject **p__2__current; // x19
  __int64 v25; // x0
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4211B72 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, method);
    byte_4211B72 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    i_5__2 = this->fields._i_5__2;
    this->fields.__1__state = -1;
    v5 = i_5__2 + 1;
    this->fields._i_5__2 = i_5__2 + 1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v5 = 0;
    this->fields.__1__state = -1;
    this->fields._i_5__2 = 0;
  }
  targetFrameRate = (EventInfoPointRiverProgressControl_o *)UnityEngine_Application__get_targetFrameRate(0LL);
  if ( !_4__this )
    goto LABEL_24;
  v8 = _4__this->fields.moveAnimTime * (float)(int)targetFrameRate;
  if ( v8 == INFINITY )
    v9 = -v8;
  else
    v9 = v8;
  if ( v5 >= (int)v9 )
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
    v25 = sub_B0D9A8(targetFrameRate);
    sub_B0D948(v25, 0LL);
  }
  v13 = &progressPathMesh->obj.klass + ReleaseScenarioIndex;
  v14 = (Custom2dSplineMesh_o *)v13[4];
  if ( !v14 )
    goto LABEL_24;
  PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(
                          (Custom2dSplineMesh_o *)v13[4],
                          _4__this->fields.startRate,
                          0LL);
  x = PointAsWorldFlatten.fields.x;
  y = PointAsWorldFlatten.fields.y;
  z = PointAsWorldFlatten.fields.z;
  v27 = Custom2dSplineMesh__GetPointAsWorldFlatten(v14, _4__this->fields.startRate + this->fields.moveRate, 0LL);
  v18 = v27.fields.x;
  v19 = v27.fields.y;
  v20 = v27.fields.z;
  targetFrameRate = (EventInfoPointRiverProgressControl_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)_4__this,
                                                              0LL);
  if ( !targetFrameRate
    || (targetFrameRate = (EventInfoPointRiverProgressControl_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)targetFrameRate,
                                                                    0LL)) == 0LL
    || (targetFrameRate = (EventInfoPointRiverProgressControl_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                                    (UnityEngine_GameObject_o *)targetFrameRate,
                                                                    (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___)) == 0LL )
  {
LABEL_24:
    sub_B0D97C(targetFrameRate);
  }
  v21 = 1;
  v22 = (UITweener_o *)targetFrameRate;
  *(float *)&targetFrameRate->fields.maskPanel = x;
  *((float *)&targetFrameRate->fields.maskPanel + 1) = y;
  *(float *)&targetFrameRate->fields.userEventPointMaster = z;
  *((float *)&targetFrameRate->fields.userEventPointMaster + 1) = v18;
  LOBYTE(targetFrameRate->fields.eventUiValueEntityList) = 1;
  *(float *)&targetFrameRate->fields.eventUiEntity = v19;
  *((float *)&targetFrameRate->fields.eventUiEntity + 1) = v20;
  *(float *)&targetFrameRate->fields.assetData2 = UnityEngine_Time__get_deltaTime(0LL);
  v22->fields.style = 0;
  UITweener__PlayForward(v22, 0LL);
  Custom2dSplineMesh__SetPathRate(v14, _4__this->fields.startRate, 0LL);
  _4__this->fields.startRate = _4__this->fields.startRate + this->fields.moveRate;
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_B0D840(p__2__current, 0LL);
  *((_DWORD *)p__2__current - 2) = 1;
  return v21;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_EventInfoShipProgressDrawComponent__EasingMove_d__13_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct EventInfoShipProgressDrawComponent_o *_4__this; // x20
  WebViewObject_o *Component_WebViewObject; // x21
  _BOOL4 isFadeIn; // w22
  float v10; // s1
  float v11; // s2
  float v12; // s0
  float v13; // s8
  float v14; // s9
  float v15; // s10
  bool v16; // w2
  EventInfoUISlideAnimation_o *v17; // x0
  float v18; // s0
  float v19; // s1
  float v20; // s2
  float v21; // s1
  float v22; // s10
  float v23; // s9
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_String_o **v26; // x8

  v2 = this;
  if ( (byte_4211B73 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_22176/*"ship_fade_out"*/, v4);
    this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)sub_B0D8A4(&StringLiteral_22175/*"ship_fade_in"*/, v5);
    byte_4211B73 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    goto LABEL_23;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_30;
    this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)_4__this->fields.progressShipAnim;
    if ( !this )
      goto LABEL_30;
    SimpleAnimation__Stop((SimpleAnimation_o *)this, 0LL);
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                (UnityEngine_Component_o *)_4__this,
                                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
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
      isFadeIn = v2->fields.isFadeIn;
      this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_transform(
                                                                                        (UnityEngine_Component_o *)_4__this,
                                                                                        0LL);
      if ( !this )
        goto LABEL_30;
      *(UnityEngine_Vector3_o *)(&v10 - 1) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
      v13 = v12;
      if ( isFadeIn )
      {
        v14 = v10;
        v15 = v11;
        this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_gameObject(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0LL);
        if ( !Component_WebViewObject )
          goto LABEL_30;
        GameObjectExtensions__SetLocalPosition_31178796(
          (UnityEngine_GameObject_o *)this,
          v13,
          v14 - *((float *)&Component_WebViewObject->fields.onStarted + 1),
          v15,
          0LL);
        v16 = 1;
        v17 = (EventInfoUISlideAnimation_o *)Component_WebViewObject;
        v18 = v13;
        v19 = v14;
        v20 = v15;
      }
      else
      {
        this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_transform(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0LL);
        if ( !this )
          goto LABEL_30;
        *(UnityEngine_Vector3_o *)(&v21 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        if ( !Component_WebViewObject )
          goto LABEL_30;
        v22 = *((float *)&Component_WebViewObject->fields.onStarted + 1);
        v23 = v21;
        this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_transform(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0LL);
        if ( !this )
          goto LABEL_30;
        *(UnityEngine_Vector3_o *)(&v20 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        v19 = v23 + v22;
        v17 = (EventInfoUISlideAnimation_o *)Component_WebViewObject;
        v18 = v13;
        v16 = 0;
      }
      EventInfoUISlideAnimation__StartSlideAnim_26587516(v17, 0LL, *(UnityEngine_Vector3_o *)&v18, v16, 0LL);
    }
    if ( v2->fields.isWait )
    {
      v2->fields.__2__current = 0LL;
      p__2__current = &v2->fields.__2__current;
      sub_B0D840(p__2__current, 0LL);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_23:
    if ( v2->fields.isFadeIn )
      v26 = (System_String_o **)&StringLiteral_22175/*"ship_fade_in"*/;
    else
      v26 = (System_String_o **)&StringLiteral_22176/*"ship_fade_out"*/;
    if ( _4__this )
    {
      this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)_4__this->fields.progressShipAnim;
      if ( this )
      {
        SimpleAnimation__Play_50482404((SimpleAnimation_o *)this, *v26, 0LL);
        return 0;
      }
    }
LABEL_30:
    sub_B0D97C(this);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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