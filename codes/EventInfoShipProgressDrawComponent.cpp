void __fastcall EventInfoShipProgressDrawComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_438C27E & 1) == 0 )
  {
    sub_B775C4(&EventInfoShipProgressDrawComponent_TypeInfo);
    sub_B775C4(&StringLiteral_11010/*"ProgressShipData_"*/);
    byte_438C27E = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventInfoShipProgressDrawComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_11010/*"ProgressShipData_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_11010/*"ProgressShipData_"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
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
    sub_B7769C(this, method);
  max_length = progressPathMesh->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}


void __fastcall EventInfoShipProgressDrawComponent__DeleteContinueData(const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v2; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  _DWORD *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x10
  int32_t v18; // w2
  __int64 v19; // x1
  EventInfoShipProgressDrawComponent_c *v20; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x21
  System_String_o *v22; // x1
  System_String_o *v23; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  WarEntity_o *entity; // [xsp+10h] [xbp-50h] BYREF
  int32_t v29; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_438C27B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_EventMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B775C4(&EventEntity_TypeInfo);
    sub_B775C4(&EventInfoShipProgressDrawComponent_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    byte_438C27B = 1;
  }
  v29 = 0;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster->fields.list,
        Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventDetailMaster___),
        !list) )
  {
    sub_B7769C(Master_WarQuestSelectionMaster, v2);
  }
  v4 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v13 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v12;
        v13 += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v14 = (__int64)&v11->vtable[*v13].method;
    }
    else
    {
LABEL_20:
      v14 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v15 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
                      Enumerator,
                      *(_QWORD *)(v14 + 8));
    if ( v15 )
    {
      v17 = *(&EventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)v15 + 300LL) >= (unsigned int)v17
        && *(EventEntity_c **)(*(_QWORD *)(*(_QWORD *)v15 + 200LL) + 8 * v17 - 8) == EventEntity_TypeInfo )
      {
        v18 = v15[4];
        v29 = v18;
        if ( !v4 )
          sub_B7769C(v15, v16);
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               v4,
               &entity,
               v18,
               (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
        {
          if ( !entity )
            sub_B7769C(0LL, v19);
          if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)entity, 0LL) )
          {
            v20 = EventInfoShipProgressDrawComponent_TypeInfo;
            if ( (BYTE3(EventInfoShipProgressDrawComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
              v20 = EventInfoShipProgressDrawComponent_TypeInfo;
            }
            SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v20->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
            v22 = System_Int32__ToString((int32_t)&v29, 0LL);
            v23 = System_String__Concat_44901936(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v22, 0LL);
            UnityEngine_PlayerPrefs__DeleteKey(v23, 0LL);
          }
        }
      }
    }
  }
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_37:
    v27 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
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
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_438C277 & 1) == 0 )
  {
    sub_B775C4(&EventInfoShipProgressDrawComponent__EasingMove_d__13_TypeInfo);
    byte_438C277 = 1;
  }
  v9 = sub_B77694(EventInfoShipProgressDrawComponent__EasingMove_d__13_TypeInfo);
  EventInfoShipProgressDrawComponent__EasingMove_d__13___ctor(
    (EventInfoShipProgressDrawComponent__EasingMove_d__13_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_B7769C(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 48) = endAction;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 48), (System_Int32_array **)endAction, v18, v19, v20, v21, v22, v23);
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
  if ( (byte_438C27C & 1) == 0 )
  {
    sub_B775C4(&EventInfoShipProgressDrawComponent_TypeInfo);
    byte_438C27C = 1;
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
  v6 = System_String__Concat_44901936(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v5, 0LL);
  return UnityEngine_PlayerPrefs__HasKey(v6, 0LL);
}


void __fastcall EventInfoShipProgressDrawComponent__LoadProgressData(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  EventInfoShipProgressDrawComponent_c *v3; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  System_String_o *String; // x20
  void *transform; // x0
  void *v9; // x1
  int v10; // w8
  System_String_o **v11; // x20
  float v12; // s8
  int v13; // w21
  float v14; // s9
  float v15; // s10
  __int64 v16; // x0
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438C27A & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&EventInfoShipProgressDrawComponent_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C27A = 1;
  }
  v3 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( (BYTE3(EventInfoShipProgressDrawComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
    v3 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v3->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v5 = System_Int32__ToString((int)this + 116, 0LL);
  v6 = System_String__Concat_44901936(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v5, 0LL);
  String = UnityEngine_PlayerPrefs__GetString(v6, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !System_String__IsNullOrEmpty(String, 0LL) )
  {
    transform = (void *)sub_B775DC(char___TypeInfo, 1LL);
    if ( !transform )
      goto LABEL_22;
    v9 = transform;
    if ( !*((_DWORD *)transform + 6) )
      goto LABEL_23;
    *((_WORD *)transform + 16) = 58;
    if ( !String )
      goto LABEL_22;
    transform = System_String__Split(String, (System_Char_array *)transform, 0LL);
    if ( !transform )
      goto LABEL_22;
    v10 = *((_DWORD *)transform + 6);
    v11 = (System_String_o **)transform;
    v12 = 0.0;
    if ( v10 < 1 )
    {
      v15 = 0.0;
      v14 = 0.0;
    }
    else
    {
      v13 = v10 & ~(v10 >> 31);
      v14 = System_Single__Parse(*((System_String_o **)transform + 4), 0LL);
      if ( v13 >= 2 )
      {
        if ( *((_DWORD *)v11 + 6) > 1u )
        {
          v15 = System_Single__Parse(v11[5], 0LL);
          if ( (unsigned int)v13 < 3 )
            goto LABEL_19;
          if ( *((_DWORD *)v11 + 6) > 2u )
          {
            v12 = System_Single__Parse(v11[6], 0LL);
            goto LABEL_19;
          }
        }
LABEL_23:
        v16 = sub_B776C8(transform);
        sub_B77668(v16, 0LL);
      }
      v15 = 0.0;
    }
LABEL_19:
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      v17.fields.z = 0.0;
      v17.fields.x = v14;
      v17.fields.y = v15;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v17, 0LL);
      this->fields.startRate = v12;
      return;
    }
LABEL_22:
    sub_B7769C(transform, v9);
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
  sub_B77560((BattleServantConfConponent_o *)&this->fields.progressPathMesh, 0LL, v2, v3, v4, v5, v6, v7);
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
  if ( (byte_438C278 & 1) == 0 )
  {
    this = (EventInfoShipProgressDrawComponent_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C278 = 1;
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
        SimpleAnimation__Play_16815192(v5, name, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B7769C(this, method);
  }
}


void __fastcall EventInfoShipProgressDrawComponent__PlayProgressShipMoveAnim(
        EventInfoShipProgressDrawComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  EventInfoShipProgressDrawComponent_o *v4; // x19
  struct SimpleAnimation_o *progressShipAnim; // x8
  UnityEngine_Object_o *monitor; // x21
  struct SimpleAnimation_o *v7; // x21
  System_String_o *name; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  __int64 TotalPoint; // x21
  __int64 NextPoint; // x22
  float v12; // s0
  float startRate; // s10
  float v14; // s8
  const MethodInfo *v15; // x2
  float moveAnimTime; // s11
  int v17; // w21
  struct EventInfoPointRiverProgressControl_o *pointRiverProgressCtr; // x8
  System_Collections_IEnumerator_o *v19; // x0
  const MethodInfo *v20; // x1

  v4 = this;
  if ( (byte_438C276 & 1) == 0 )
  {
    sub_B775C4(&System_Math_TypeInfo);
    this = (EventInfoShipProgressDrawComponent_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C276 = 1;
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
      v7 = v4->fields.progressShipAnim;
      if ( !v7 )
        goto LABEL_24;
      this = (EventInfoShipProgressDrawComponent_o *)v7[1].monitor;
      if ( !this )
        goto LABEL_24;
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
      this = (EventInfoShipProgressDrawComponent_o *)SimpleAnimation__IsPlaying(v7, name, 0LL);
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
      v12 = System_Math__Min_45851636((float)TotalPoint / (float)NextPoint, 1.0, 0LL);
      startRate = v4->fields.startRate;
      v14 = v12;
      this = (EventInfoShipProgressDrawComponent_o *)UnityEngine_Application__get_targetFrameRate(0LL);
      moveAnimTime = v4->fields.moveAnimTime;
      v17 = (int)this;
      if ( v14 < 1.0 )
        goto LABEL_22;
      pointRiverProgressCtr = v4->fields.pointRiverProgressCtr;
      if ( pointRiverProgressCtr )
      {
        this = (EventInfoShipProgressDrawComponent_o *)pointRiverProgressCtr->fields.maskPanel;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
LABEL_22:
          v19 = EventInfoShipProgressDrawComponent__EasingMove(
                  v4,
                  endAction,
                  v14,
                  (float)(v14 - startRate) / (float)(moveAnimTime * (float)v17),
                  v15);
          UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)v4, v19, 0LL);
          EventInfoShipProgressDrawComponent__PlayProgressShipDefaultAnim(v4, v20);
          return;
        }
      }
    }
LABEL_24:
    sub_B7769C(this, endAction);
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

  if ( (byte_438C279 & 1) == 0 )
  {
    sub_B775C4(&EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_TypeInfo);
    byte_438C279 = 1;
  }
  v7 = sub_B77694(EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_TypeInfo);
  EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15___ctor(
    (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B7769C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
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
  sub_B77560(
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
    sub_B7769C(v10, v11);
  }
  v20 = v18->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v20 >= v19->max_length )
  {
LABEL_15:
    v26 = sub_B776C8(v10);
    sub_B77668(v26, 0LL);
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
  System_Text_StringBuilder_o *v3; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  float v6; // s0
  System_String_o *v7; // x0
  float v8; // s0
  System_String_o *v9; // x0
  EventInfoShipProgressDrawComponent_c *v10; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x21
  System_String_o *v12; // x0
  System_String_o *v13; // x19
  System_String_o *v14; // x0
  float startRate; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o anonymous1[5]; // [xsp+10h] [xbp-30h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438C27D & 1) == 0 )
  {
    sub_B775C4(&EventInfoShipProgressDrawComponent_TypeInfo);
    sub_B775C4(&System_Text_StringBuilder_TypeInfo);
    sub_B775C4(&StringLiteral_1252/*":"*/);
    byte_438C27D = 1;
  }
  anonymous1[0].fields.z = 0.0;
  *(_QWORD *)&anonymous1[0].fields.x = 0LL;
  startRate = 0.0;
  v3 = (System_Text_StringBuilder_o *)sub_B77694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
        anonymous1[0] = localPosition,
        transform = (UnityEngine_Transform_o *)System_Single__ToString(
                                                 localPosition.fields.x,
                                                 (const MethodInfo *)anonymous1),
        !v3) )
  {
    sub_B7769C(transform, v5);
  }
  System_Text_StringBuilder__Append_42951964(v3, (System_String_o *)transform, 0LL);
  System_Text_StringBuilder__Append_42951964(v3, (System_String_o *)StringLiteral_1252/*":"*/, 0LL);
  v7 = System_Single__ToString(v6, (const MethodInfo *)&anonymous1[0].fields.y);
  System_Text_StringBuilder__Append_42951964(v3, v7, 0LL);
  System_Text_StringBuilder__Append_42951964(v3, (System_String_o *)StringLiteral_1252/*":"*/, 0LL);
  startRate = this->fields.startRate;
  v9 = System_Single__ToString(v8, (const MethodInfo *)&startRate);
  System_Text_StringBuilder__Append_42951964(v3, v9, 0LL);
  v10 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( (BYTE3(EventInfoShipProgressDrawComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
    v10 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v10->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v12 = System_Int32__ToString((int)this + 116, 0LL);
  v13 = System_String__Concat_44901936(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v12, 0LL);
  v14 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v3->klass->vtable._3_ToString.method)(
                             v3,
                             v3->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  UnityEngine_PlayerPrefs__SetString(v13, v14, 0LL);
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
    sub_B7769C(0LL, v5);
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
  struct EventInfoPointRiverProgressControl_o **p_pointRiverProgressCtr; // x21
  UnityEngine_Object_o *pointRiverProgressCtr; // x23
  Custom2dSplineMesh_o *v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o **p_progressData; // x21
  const MethodInfo *v24; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v25; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v26; // x8
  __int64 TotalPoint; // x20
  __int64 NextPoint; // x21
  struct EventInfoPointRiverProgressControl_ProgressData_o *v29; // x9
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  __int64 ReleaseScenarioIndex; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v32; // x9
  struct Custom2dSplineMesh_array *v33; // x8
  __int64 v34; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v35; // x9
  struct Custom2dSplineMesh_array *v36; // x8
  __int64 v37; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v42; // x1
  __int64 v43; // x0
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438C275 & 1) == 0 )
  {
    sub_B775C4(&System_Math_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438C275 = 1;
  }
  this->fields.pointRiverProgressCtr = inputPointRiverProgressCtr;
  p_pointRiverProgressCtr = &this->fields.pointRiverProgressCtr;
  sub_B77560(
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
  v14 = (Custom2dSplineMesh_o *)UnityEngine_Object__op_Equality(pointRiverProgressCtr, 0LL, 0LL);
  if ( ((unsigned __int8)v14 & 1) != 0 )
    return;
  if ( !*p_pointRiverProgressCtr )
    goto LABEL_44;
  progressData = (*p_pointRiverProgressCtr)->fields.progressData;
  if ( !progressData )
    return;
  this->fields.progressData = progressData;
  p_progressData = &this->fields.progressData;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.progressData,
    (System_Int32_array **)progressData,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.eventId = inputEventId;
  EventInfoShipProgressDrawComponent__LoadProgressData(this, v24);
  v25 = this->fields.progressData;
  if ( isReset )
  {
    if ( !v25 )
      goto LABEL_44;
    goto LABEL_29;
  }
  if ( !v25 )
    goto LABEL_44;
  if ( !v25->fields.IsFreeQuestClear )
  {
LABEL_29:
    if ( v25->fields.OldTotalPoint == v25->fields.TotalPoint )
      this->fields.startRate = 0.0;
    goto LABEL_31;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387B4D )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387B4D = 1;
  }
  v14 = (Custom2dSplineMesh_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = (Custom2dSplineMesh_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !BYTE2(v14[1].klass[1]._1.generic_class) )
  {
    v26 = *p_progressData;
    if ( !*p_progressData )
      goto LABEL_44;
    TotalPoint = v26->fields.TotalPoint;
    NextPoint = v26->fields.NextPoint;
    if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.startRate = System_Math__Min_45851636((float)TotalPoint / (float)NextPoint, 1.0, 0LL);
  }
LABEL_31:
  v29 = this->fields.progressData;
  if ( !v29 )
    goto LABEL_44;
  progressPathMesh = this->fields.progressPathMesh;
  if ( !progressPathMesh )
    goto LABEL_44;
  ReleaseScenarioIndex = v29->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= progressPathMesh->max_length )
    goto LABEL_45;
  v14 = progressPathMesh->m_Items[ReleaseScenarioIndex];
  if ( !v14 )
    goto LABEL_44;
  Custom2dSplineMesh__CreateMesh(v14, 0LL);
  v32 = this->fields.progressData;
  if ( !v32 )
    goto LABEL_44;
  v33 = this->fields.progressPathMesh;
  if ( !v33 )
    goto LABEL_44;
  v34 = v32->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v34 >= v33->max_length )
    goto LABEL_45;
  v14 = v33->m_Items[v34];
  if ( !v14
    || (Custom2dSplineMesh__SetPathRate(v14, this->fields.startRate, 0LL), (v35 = this->fields.progressData) == 0LL)
    || (v36 = this->fields.progressPathMesh) == 0LL )
  {
LABEL_44:
    sub_B7769C(v14, v15);
  }
  v37 = v35->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v37 >= v36->max_length )
  {
LABEL_45:
    v43 = sub_B776C8(v14);
    sub_B77668(v43, 0LL);
  }
  v14 = v36->m_Items[v37];
  if ( !v14 )
    goto LABEL_44;
  PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(v14, this->fields.startRate, 0LL);
  x = PointAsWorldFlatten.fields.x;
  y = PointAsWorldFlatten.fields.y;
  z = PointAsWorldFlatten.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v45.fields.x = x;
  v45.fields.y = y;
  v45.fields.z = z;
  GameObjectExtensions__SetPosition(gameObject, v45, 0LL);
  EventInfoShipProgressDrawComponent__SaveProgressData(this, v42);
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
  __int64 v8; // x1
  float v9; // s0
  double v10; // d0
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x9
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  __int64 ReleaseScenarioIndex; // x9
  Il2CppClass **v14; // x8
  Custom2dSplineMesh_o *v15; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  float v19; // s11
  float v20; // s12
  float v21; // s13
  bool v22; // w22
  UITweener_o *v23; // x23
  Il2CppObject **p__2__current; // x19
  __int64 v26; // x0
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4388673 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    byte_4388673 = 1;
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
  v9 = _4__this->fields.moveAnimTime * (float)(int)targetFrameRate;
  if ( v9 == INFINITY )
    v10 = -v9;
  else
    v10 = v9;
  if ( v5 >= (int)v10 )
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
    v26 = sub_B776C8(targetFrameRate);
    sub_B77668(v26, 0LL);
  }
  v14 = &progressPathMesh->obj.klass + ReleaseScenarioIndex;
  v15 = (Custom2dSplineMesh_o *)v14[4];
  if ( !v15 )
    goto LABEL_24;
  PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(
                          (Custom2dSplineMesh_o *)v14[4],
                          _4__this->fields.startRate,
                          0LL);
  x = PointAsWorldFlatten.fields.x;
  y = PointAsWorldFlatten.fields.y;
  z = PointAsWorldFlatten.fields.z;
  v28 = Custom2dSplineMesh__GetPointAsWorldFlatten(v15, _4__this->fields.startRate + this->fields.moveRate, 0LL);
  v19 = v28.fields.x;
  v20 = v28.fields.y;
  v21 = v28.fields.z;
  targetFrameRate = (EventInfoPointRiverProgressControl_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)_4__this,
                                                              0LL);
  if ( !targetFrameRate
    || (targetFrameRate = (EventInfoPointRiverProgressControl_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)targetFrameRate,
                                                                    0LL)) == 0LL
    || (targetFrameRate = (EventInfoPointRiverProgressControl_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                                    (UnityEngine_GameObject_o *)targetFrameRate,
                                                                    (const MethodInfo_1DEBEC8 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___)) == 0LL )
  {
LABEL_24:
    sub_B7769C(targetFrameRate, v8);
  }
  v22 = 1;
  v23 = (UITweener_o *)targetFrameRate;
  *(float *)&targetFrameRate->fields.maskPanel = x;
  *((float *)&targetFrameRate->fields.maskPanel + 1) = y;
  *(float *)&targetFrameRate->fields.userEventPointMaster = z;
  *((float *)&targetFrameRate->fields.userEventPointMaster + 1) = v19;
  LOBYTE(targetFrameRate->fields.eventUiValueEntityList) = 1;
  *(float *)&targetFrameRate->fields.eventUiEntity = v20;
  *((float *)&targetFrameRate->fields.eventUiEntity + 1) = v21;
  *(float *)&targetFrameRate->fields.assetData2 = UnityEngine_Time__get_deltaTime(0LL);
  v23->fields.style = 0;
  UITweener__PlayForward(v23, 0LL);
  Custom2dSplineMesh__SetPathRate(v15, _4__this->fields.startRate, 0LL);
  _4__this->fields.startRate = _4__this->fields.startRate + this->fields.moveRate;
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_B77560(p__2__current);
  *((_DWORD *)p__2__current - 2) = 1;
  return v22;
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_EventInfoShipProgressDrawComponent__EasingMove_d__13_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
  int32_t _1__state; // w8
  struct EventInfoShipProgressDrawComponent_o *_4__this; // x20
  WebViewObject_o *Component_WebViewObject; // x21
  _BOOL4 isFadeIn; // w22
  float v7; // s1
  float v8; // s2
  float v9; // s0
  float v10; // s8
  float v11; // s9
  float v12; // s10
  bool v13; // w2
  EventInfoUISlideAnimation_o *v14; // x0
  float v15; // s0
  float v16; // s1
  float v17; // s2
  float v18; // s1
  float v19; // s10
  float v20; // s9
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_String_o **v23; // x8

  v2 = this;
  if ( (byte_4388674 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_22574/*"ship_fade_out"*/);
    this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)sub_B775C4(&StringLiteral_22573/*"ship_fade_in"*/);
    byte_4388674 = 1;
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
                                (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
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
      *(UnityEngine_Vector3_o *)(&v7 - 1) = UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)this,
                                              0LL);
      v10 = v9;
      if ( isFadeIn )
      {
        v11 = v7;
        v12 = v8;
        this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_gameObject(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0LL);
        if ( !Component_WebViewObject )
          goto LABEL_30;
        GameObjectExtensions__SetLocalPosition_32807768(
          (UnityEngine_GameObject_o *)this,
          v10,
          v11 - *((float *)&Component_WebViewObject->fields.onStarted + 1),
          v12,
          0LL);
        v13 = 1;
        v14 = (EventInfoUISlideAnimation_o *)Component_WebViewObject;
        v15 = v10;
        v16 = v11;
        v17 = v12;
      }
      else
      {
        this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_transform(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0LL);
        if ( !this )
          goto LABEL_30;
        *(UnityEngine_Vector3_o *)(&v18 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        if ( !Component_WebViewObject )
          goto LABEL_30;
        v19 = *((float *)&Component_WebViewObject->fields.onStarted + 1);
        v20 = v18;
        this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_transform(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0LL);
        if ( !this )
          goto LABEL_30;
        *(UnityEngine_Vector3_o *)(&v17 - 2) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL);
        v16 = v20 + v19;
        v14 = (EventInfoUISlideAnimation_o *)Component_WebViewObject;
        v15 = v10;
        v13 = 0;
      }
      EventInfoUISlideAnimation__StartSlideAnim_27694080(v14, 0LL, *(UnityEngine_Vector3_o *)&v15, v13, 0LL);
    }
    if ( v2->fields.isWait )
    {
      v2->fields.__2__current = 0LL;
      p__2__current = &v2->fields.__2__current;
      sub_B77560(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_23:
    if ( v2->fields.isFadeIn )
      v23 = (System_String_o **)&StringLiteral_22573/*"ship_fade_in"*/;
    else
      v23 = (System_String_o **)&StringLiteral_22574/*"ship_fade_out"*/;
    if ( _4__this )
    {
      this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)_4__this->fields.progressShipAnim;
      if ( this )
      {
        SimpleAnimation__Play_16815192((SimpleAnimation_o *)this, *v23, 0LL);
        return 0;
      }
    }
LABEL_30:
    sub_B7769C(this, method);
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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