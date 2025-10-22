void EventInfoShipProgressDrawComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C5832D & 1) == 0 )
  {
    sub_1C3E564(&EventInfoShipProgressDrawComponent_TypeInfo);
    sub_1C3E564(&StringLiteral_10762/*"ProgressShipData_"*/);
    byte_4C5832D = 1;
  }
  EventInfoShipProgressDrawComponent_TypeInfo->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = (struct System_String_o *)StringLiteral_10762/*"ProgressShipData_"*/;
  sub_1C3E508(
    (CGThumbnailListItem_o *)EventInfoShipProgressDrawComponent_TypeInfo->static_fields,
    StringLiteral_10762/*"ProgressShipData_"*/,
    v1,
    v2);
}


void EventInfoShipProgressDrawComponent___ctor(EventInfoShipProgressDrawComponent_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoShipProgressDrawComponent__Awake(EventInfoShipProgressDrawComponent_o *this, const MethodInfo *method)
{
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  int max_length; // w8
  int v4; // w9

  progressPathMesh = this->fields.progressPathMesh;
  if ( !progressPathMesh )
    sub_1C3E7C0(this, method);
  max_length = progressPathMesh->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}


void EventInfoShipProgressDrawComponent__DeleteContinueData(const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v2; // x1
  System_Collections_ObjectModel_Collection_T__o *monitor; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  __int64 v18; // x1
  EventInfoShipProgressDrawComponent_c *v19; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x21
  System_String_o *v21; // x1
  System_String_o *v22; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  int32_t v28; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C5832A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
    sub_1C3E564(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_EventMaster__EventEntity__int__getEntityList__);
    sub_1C3E564(&EventInfoShipProgressDrawComponent_TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_EventEntity__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    byte_4C5832A = 1;
  }
  v28 = 0;
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object
    || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventDetailMaster___),
        !monitor) )
  {
    sub_1C3E7C0(Master_object, v2);
  }
  v4 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_334C9A0 *)Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3E7C0(0, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_12;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v10 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
            Enumerator,
            *(_QWORD *)(v10 + 8))
        & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEntity__c **)v13 - 1) != System_Collections_Generic_IEnumerator_EventEntity__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_19;
      }
      v14 = (__int64)&v11->vtable[*v13];
    }
    else
    {
LABEL_19:
      v14 = sub_1C8ED7C(Enumerator, System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    if ( v15 )
    {
      v17 = *(_DWORD *)(v15 + 16);
      v28 = v17;
      if ( !v4 )
        sub_1C3E7C0(v15, v16);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v4,
             &entity,
             v17,
             (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          sub_1C3E7C0(0, v18);
        if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)entity, 0) )
        {
          v19 = EventInfoShipProgressDrawComponent_TypeInfo;
          if ( !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
            v19 = EventInfoShipProgressDrawComponent_TypeInfo;
          }
          SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v19->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
          v21 = System_Int32__ToString((int32_t)&v28, 0);
          v22 = System_String__Concat_63636468(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v21, 0);
          UnityEngine_PlayerPrefs__DeleteKey(v22, 0);
        }
      }
    }
  }
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_33;
    }
    v26 = (__int64)&v23->vtable[*v25];
  }
  else
  {
LABEL_33:
    v26 = sub_1C8ED7C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
}


System_Collections_IEnumerator_o *EventInfoShipProgressDrawComponent__EasingMove(
        EventInfoShipProgressDrawComponent_o *this,
        System_Action_o *endAction,
        float endRate,
        float moveRate,
        const MethodInfo *method)
{
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C58326 & 1) == 0 )
  {
    sub_1C3E564(&EventInfoShipProgressDrawComponent__EasingMove_d__13_TypeInfo);
    byte_4C58326 = 1;
  }
  v9 = sub_1C3E7B0(EventInfoShipProgressDrawComponent__EasingMove_d__13_TypeInfo);
  EventInfoShipProgressDrawComponent__EasingMove_d__13___ctor(
    (EventInfoShipProgressDrawComponent__EasingMove_d__13_o *)v9,
    0,
    0);
  if ( !v9 )
    sub_1C3E7C0(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 48) = endAction;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 48), (int32_t)endAction, v14, v15);
  *(float *)(v9 + 40) = moveRate;
  *(float *)(v9 + 44) = endRate;
  return (System_Collections_IEnumerator_o *)v9;
}


bool EventInfoShipProgressDrawComponent__HasSaveData(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w19
  EventInfoShipProgressDrawComponent_c *v3; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0

  v2 = (int)this;
  if ( (byte_4C5832B & 1) == 0 )
  {
    sub_1C3E564(&EventInfoShipProgressDrawComponent_TypeInfo);
    byte_4C5832B = 1;
  }
  v3 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
    v3 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v3->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v5 = System_Int32__ToString(v2 + 124, 0);
  v6 = System_String__Concat_63636468(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v5, 0);
  return UnityEngine_PlayerPrefs__HasKey(v6, 0);
}


void EventInfoShipProgressDrawComponent__LoadProgressData(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  EventInfoShipProgressDrawComponent_c *v3; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  System_String_o *String; // x20
  void *IsNullOrEmpty; // x0
  __int64 v9; // x1
  int v10; // w8
  void *v11; // x20
  float v12; // s8
  int v13; // w21
  __int64 v14; // x0
  __int64 v15; // x1
  float v16; // s9
  float v17; // s10
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C58329 & 1) == 0 )
  {
    sub_1C3E564(&EventInfoShipProgressDrawComponent_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C58329 = 1;
  }
  v3 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
    v3 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v3->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v5 = System_Int32__ToString((int)this + 124, 0);
  v6 = System_String__Concat_63636468(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v5, 0);
  String = UnityEngine_PlayerPrefs__GetString(v6, (System_String_o *)StringLiteral_1/*""*/, 0);
  IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(String, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !String )
      goto LABEL_19;
    IsNullOrEmpty = System_String__Split(String, 0x3Au, 0, 0);
    if ( !IsNullOrEmpty )
      goto LABEL_19;
    v10 = *((_DWORD *)IsNullOrEmpty + 6);
    v11 = IsNullOrEmpty;
    v12 = 0.0;
    if ( v10 < 1 )
    {
      v17 = 0.0;
      v16 = 0.0;
    }
    else
    {
      v13 = v10 & ~(v10 >> 31);
      v16 = System_Single__Parse(*((System_String_o **)IsNullOrEmpty + 4), 0);
      if ( v13 < 2 )
      {
        v17 = 0.0;
      }
      else
      {
        if ( *((_DWORD *)v11 + 6) <= 1u )
          goto LABEL_20;
        v17 = System_Single__Parse(*((System_String_o **)v11 + 5), 0);
        if ( v13 < 3 )
          goto LABEL_16;
        if ( *((_DWORD *)v11 + 6) <= 2u )
LABEL_20:
          sub_1C3E7C8(v14, v15);
        v12 = System_Single__Parse(*((System_String_o **)v11 + 6), 0);
      }
    }
LABEL_16:
    IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( IsNullOrEmpty )
    {
      v18.fields.z = 0.0;
      v18.fields.x = v16;
      v18.fields.y = v17;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsNullOrEmpty, v18, 0);
      this->fields.startRate = v12;
      return;
    }
LABEL_19:
    sub_1C3E7C0(IsNullOrEmpty, v9);
  }
}


void EventInfoShipProgressDrawComponent__OnDestroy(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.progressPathMesh = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.progressPathMesh, 0, v2, v3);
}


void EventInfoShipProgressDrawComponent__PlayProgressShipDefaultAnim(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  EventInfoShipProgressDrawComponent_o *v2; // x19
  struct SimpleAnimation_o *progressShipAnim; // x8
  UnityEngine_Object_o *m_Clip; // x20
  struct SimpleAnimation_o *v5; // x19
  System_String_o *name; // x1

  v2 = this;
  if ( (byte_4C58327 & 1) == 0 )
  {
    this = (EventInfoShipProgressDrawComponent_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58327 = 1;
  }
  progressShipAnim = v2->fields.progressShipAnim;
  if ( !progressShipAnim )
    goto LABEL_11;
  m_Clip = (UnityEngine_Object_o *)progressShipAnim->fields.m_Clip;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventInfoShipProgressDrawComponent_o *)UnityEngine_Object__op_Inequality(m_Clip, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.progressShipAnim;
    if ( v5 )
    {
      this = (EventInfoShipProgressDrawComponent_o *)v5->fields.m_Clip;
      if ( this )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        SimpleAnimation__Play_66582224(v5, name, 0);
        return;
      }
    }
LABEL_11:
    sub_1C3E7C0(this, method);
  }
}


void EventInfoShipProgressDrawComponent__PlayProgressShipMoveAnim(
        EventInfoShipProgressDrawComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  EventInfoShipProgressDrawComponent_o *v4; // x19
  struct SimpleAnimation_o *progressShipAnim; // x8
  UnityEngine_Object_o *m_Clip; // x21
  struct SimpleAnimation_o *v7; // x21
  System_String_o *name; // x0
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x8
  __int64 TotalPoint; // x23
  __int64 NextPoint; // x22
  float v12; // s0
  float startRate; // s9
  float v14; // s8
  const MethodInfo *v15; // x2
  float moveAnimTime; // s10
  int v17; // w21
  struct EventInfoPointRiverProgressControl_o *pointRiverProgressCtr; // x8
  System_Collections_IEnumerator_o *v19; // x0
  const MethodInfo *v20; // x1

  v4 = this;
  if ( (byte_4C58325 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Application_TypeInfo);
    sub_1C3E564(&System_Math_TypeInfo);
    this = (EventInfoShipProgressDrawComponent_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58325 = 1;
  }
  if ( v4->fields.progressData )
  {
    progressShipAnim = v4->fields.progressShipAnim;
    if ( !progressShipAnim )
      goto LABEL_24;
    m_Clip = (UnityEngine_Object_o *)progressShipAnim->fields.m_Clip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (EventInfoShipProgressDrawComponent_o *)UnityEngine_Object__op_Inequality(m_Clip, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v7 = v4->fields.progressShipAnim;
      if ( !v7 )
        goto LABEL_24;
      this = (EventInfoShipProgressDrawComponent_o *)v7->fields.m_Clip;
      if ( !this )
        goto LABEL_24;
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
      this = (EventInfoShipProgressDrawComponent_o *)SimpleAnimation__IsPlaying(v7, name, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (EventInfoShipProgressDrawComponent_o *)v4->fields.progressShipAnim;
        if ( !this )
          goto LABEL_24;
        SimpleAnimation__Stop((SimpleAnimation_o *)this, 0);
      }
    }
    progressData = v4->fields.progressData;
    if ( progressData )
    {
      TotalPoint = progressData->fields.TotalPoint;
      NextPoint = progressData->fields.NextPoint;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v12 = System_Math__Min_65160268((float)TotalPoint / (float)NextPoint, 1.0, 0);
      startRate = v4->fields.startRate;
      v14 = v12;
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      this = (EventInfoShipProgressDrawComponent_o *)UnityEngine_Application__get_targetFrameRate(0);
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
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
LABEL_22:
          v19 = EventInfoShipProgressDrawComponent__EasingMove(
                  v4,
                  endAction,
                  v14,
                  (float)(v14 - startRate) / (float)(moveAnimTime * (float)v17),
                  v15);
          UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)v4, v19, 0);
          EventInfoShipProgressDrawComponent__PlayProgressShipDefaultAnim(v4, v20);
          return;
        }
      }
    }
LABEL_24:
    sub_1C3E7C0(this, endAction);
  }
}


System_Collections_IEnumerator_o *EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim(
        EventInfoShipProgressDrawComponent_o *this,
        bool isFadeIn,
        bool isWait,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C58328 & 1) == 0 )
  {
    sub_1C3E564(&EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_TypeInfo);
    byte_4C58328 = 1;
  }
  v7 = sub_1C3E7B0(EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_TypeInfo);
  EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15___ctor(
    (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)v7,
    0,
    0);
  if ( !v7 )
    sub_1C3E7C0(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v10, v11);
  *(_BYTE *)(v7 + 40) = isFadeIn;
  *(_BYTE *)(v7 + 41) = isWait;
  return (System_Collections_IEnumerator_o *)v7;
}


void EventInfoShipProgressDrawComponent__ResetShip(
        EventInfoShipProgressDrawComponent_o *this,
        EventInfoPointRiverProgressControl_ProgressData_o *progressData_,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct EventInfoPointRiverProgressControl_ProgressData_o **p_progressData; // x20
  Custom2dSplineMesh_o *v6; // x0
  __int64 v7; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v8; // x9
  __int64 v9; // x8
  __int64 ReleaseScenarioIndex; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x9
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  __int64 v13; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v14; // x9
  struct Custom2dSplineMesh_array *v15; // x8
  __int64 v16; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v21; // x1
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.progressData = progressData_;
  p_progressData = &this->fields.progressData;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.progressData, (int32_t)progressData_, (int32_t)method, v3);
  v8 = *p_progressData;
  *((_DWORD *)p_progressData + 2) = 0;
  if ( !v8 )
    goto LABEL_14;
  v9 = (__int64)*(p_progressData - 4);
  if ( !v9 )
    goto LABEL_14;
  ReleaseScenarioIndex = v8->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= *(_DWORD *)(v9 + 24) )
    goto LABEL_15;
  v6 = *(Custom2dSplineMesh_o **)(v9 + 8 * ReleaseScenarioIndex + 32);
  if ( !v6 )
    goto LABEL_14;
  Custom2dSplineMesh__CreateMesh(v6, 0);
  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_14;
  progressPathMesh = this->fields.progressPathMesh;
  if ( !progressPathMesh )
    goto LABEL_14;
  v13 = progressData->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v13 >= LODWORD(progressPathMesh->max_length) )
    goto LABEL_15;
  v6 = progressPathMesh->m_Items[v13];
  if ( !v6
    || (Custom2dSplineMesh__SetPathRate(v6, this->fields.startRate, 0), (v14 = this->fields.progressData) == 0)
    || (v15 = this->fields.progressPathMesh) == 0 )
  {
LABEL_14:
    sub_1C3E7C0(v6, v7);
  }
  v16 = v14->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v16 >= LODWORD(v15->max_length) )
LABEL_15:
    sub_1C3E7C8(v6, v7);
  v6 = v15->m_Items[v16];
  if ( !v6 )
    goto LABEL_14;
  PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(v6, this->fields.startRate, 0);
  x = PointAsWorldFlatten.fields.x;
  y = PointAsWorldFlatten.fields.y;
  z = PointAsWorldFlatten.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  GameObjectExtensions__SetPosition(gameObject, v23, 0);
  EventInfoShipProgressDrawComponent__SaveProgressData(this, v21);
}


void EventInfoShipProgressDrawComponent__SaveProgressData(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v5; // x1
  float v6; // s0
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  EventInfoShipProgressDrawComponent_c *v9; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x19
  System_String_o *v13; // x0
  float startRate; // [xsp+Ch] [xbp-44h] BYREF
  float x; // [xsp+10h] [xbp-40h] BYREF
  _DWORD v16[15]; // [xsp+14h] [xbp-3Ch] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5832C & 1) == 0 )
  {
    sub_1C3E564(&EventInfoShipProgressDrawComponent_TypeInfo);
    sub_1C3E564(&System_Text_StringBuilder_TypeInfo);
    sub_1C3E564(&StringLiteral_1456/*":"*/);
    byte_4C5832C = 1;
  }
  startRate = 0.0;
  v3 = (System_Text_StringBuilder_o *)sub_1C3E7B0(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0),
        x = localPosition.fields.x,
        v16[0] = LODWORD(localPosition.fields.y),
        v16[1] = LODWORD(localPosition.fields.z),
        transform = (UnityEngine_Transform_o *)System_Single__ToString(localPosition.fields.x, (const MethodInfo *)&x),
        !v3) )
  {
    sub_1C3E7C0(transform, v5);
  }
  System_Text_StringBuilder__Append_63721532(v3, (System_String_o *)transform, 0);
  System_Text_StringBuilder__Append_63721532(v3, (System_String_o *)StringLiteral_1456/*":"*/, 0);
  v7 = System_Single__ToString(v6, (const MethodInfo *)v16);
  System_Text_StringBuilder__Append_63721532(v3, v7, 0);
  System_Text_StringBuilder__Append_63721532(v3, (System_String_o *)StringLiteral_1456/*":"*/, 0);
  startRate = this->fields.startRate;
  v8 = System_Single__ToString(startRate, (const MethodInfo *)&startRate);
  System_Text_StringBuilder__Append_63721532(v3, v8, 0);
  v9 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
    v9 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v9->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v11 = System_Int32__ToString((int)this + 124, 0);
  v12 = System_String__Concat_63636468(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v11, 0);
  v13 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v3->klass->vtable._3_ToString.methodPtr)(
                             v3,
                             v3->klass->vtable._3_ToString.method);
  UnityEngine_PlayerPrefs__SetString(v12, v13, 0);
}


void EventInfoShipProgressDrawComponent__SetActive(
        EventInfoShipProgressDrawComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C3E7C0(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoShipProgressDrawComponent__Setup(
        EventInfoShipProgressDrawComponent_o *this,
        EventInfoPointRiverProgressControl_o *inputPointRiverProgressCtr,
        int32_t inputEventId,
        bool isReset,
        const MethodInfo *method)
{
  struct EventInfoPointRiverProgressControl_o **p_pointRiverProgressCtr; // x22
  UnityEngine_Object_o *pointRiverProgressCtr; // x23
  Custom2dSplineMesh_o *v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o **p_progressData; // x22
  const MethodInfo *v17; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v18; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v19; // x8
  __int64 TotalPoint; // x20
  __int64 NextPoint; // x21
  struct EventInfoPointRiverProgressControl_ProgressData_o *v22; // x9
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  __int64 ReleaseScenarioIndex; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v25; // x9
  struct Custom2dSplineMesh_array *v26; // x8
  __int64 v27; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v28; // x9
  struct Custom2dSplineMesh_array *v29; // x8
  __int64 v30; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v35; // x1
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C58324 & 1) == 0 )
  {
    sub_1C3E564(&System_Math_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C58324 = 1;
  }
  this->fields.pointRiverProgressCtr = inputPointRiverProgressCtr;
  p_pointRiverProgressCtr = &this->fields.pointRiverProgressCtr;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.pointRiverProgressCtr,
    (int32_t)inputPointRiverProgressCtr,
    inputEventId,
    (const MethodInfo *)isReset);
  pointRiverProgressCtr = (UnityEngine_Object_o *)this->fields.pointRiverProgressCtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = (Custom2dSplineMesh_o *)UnityEngine_Object__op_Equality(pointRiverProgressCtr, 0, 0);
  if ( ((unsigned __int8)v11 & 1) != 0 )
    return;
  if ( !*p_pointRiverProgressCtr )
    goto LABEL_40;
  progressData = (*p_pointRiverProgressCtr)->fields.progressData;
  if ( !progressData )
    return;
  this->fields.progressData = progressData;
  p_progressData = &this->fields.progressData;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.progressData, (int32_t)progressData, v13, v14);
  this->fields.eventId = inputEventId;
  EventInfoShipProgressDrawComponent__LoadProgressData(this, v17);
  v18 = this->fields.progressData;
  if ( isReset )
  {
    if ( !v18 )
      goto LABEL_40;
    goto LABEL_25;
  }
  if ( !v18 )
    goto LABEL_40;
  if ( !v18->fields.IsFreeQuestClear )
  {
LABEL_25:
    if ( v18->fields.OldTotalPoint == v18->fields.TotalPoint )
      this->fields.startRate = 0.0;
    goto LABEL_27;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C557DC )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C557DC = 1;
  }
  v11 = (Custom2dSplineMesh_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = (Custom2dSplineMesh_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_BYTE *)(*(_QWORD *)&v11->fields.vtxIdx + 474LL) )
  {
    v19 = *p_progressData;
    if ( !*p_progressData )
      goto LABEL_40;
    TotalPoint = v19->fields.TotalPoint;
    NextPoint = v19->fields.NextPoint;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.startRate = System_Math__Min_65160268((float)TotalPoint / (float)NextPoint, 1.0, 0);
  }
LABEL_27:
  v22 = this->fields.progressData;
  if ( !v22 )
    goto LABEL_40;
  progressPathMesh = this->fields.progressPathMesh;
  if ( !progressPathMesh )
    goto LABEL_40;
  ReleaseScenarioIndex = v22->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= LODWORD(progressPathMesh->max_length) )
    goto LABEL_41;
  v11 = progressPathMesh->m_Items[ReleaseScenarioIndex];
  if ( !v11 )
    goto LABEL_40;
  Custom2dSplineMesh__CreateMesh(v11, 0);
  v25 = this->fields.progressData;
  if ( !v25 )
    goto LABEL_40;
  v26 = this->fields.progressPathMesh;
  if ( !v26 )
    goto LABEL_40;
  v27 = v25->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v27 >= LODWORD(v26->max_length) )
    goto LABEL_41;
  v11 = v26->m_Items[v27];
  if ( !v11
    || (Custom2dSplineMesh__SetPathRate(v11, this->fields.startRate, 0), (v28 = this->fields.progressData) == 0)
    || (v29 = this->fields.progressPathMesh) == 0 )
  {
LABEL_40:
    sub_1C3E7C0(v11, v12);
  }
  v30 = v28->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v30 >= LODWORD(v29->max_length) )
LABEL_41:
    sub_1C3E7C8(v11, v12);
  v11 = v29->m_Items[v30];
  if ( !v11 )
    goto LABEL_40;
  PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(v11, this->fields.startRate, 0);
  x = PointAsWorldFlatten.fields.x;
  y = PointAsWorldFlatten.fields.y;
  z = PointAsWorldFlatten.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v37.fields.x = x;
  v37.fields.y = y;
  v37.fields.z = z;
  GameObjectExtensions__SetPosition(gameObject, v37, 0);
  EventInfoShipProgressDrawComponent__SaveProgressData(this, v35);
}


void EventInfoShipProgressDrawComponent__EasingMove_d__13___ctor(
        EventInfoShipProgressDrawComponent__EasingMove_d__13_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventInfoShipProgressDrawComponent__EasingMove_d__13__MoveNext(
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
  int v10; // w8
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
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C58B89 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Application_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    byte_4C58B89 = 1;
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
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  targetFrameRate = (EventInfoPointRiverProgressControl_o *)UnityEngine_Application__get_targetFrameRate(0);
  if ( !_4__this )
LABEL_25:
    sub_1C3E7C0(targetFrameRate, v8);
  v9 = _4__this->fields.moveAnimTime * (float)(int)targetFrameRate;
  v10 = (int)v9;
  if ( v9 == INFINITY )
    v10 = 0x80000000;
  if ( v5 >= v10 )
  {
    targetFrameRate = _4__this->fields.pointRiverProgressCtr;
    _4__this->fields.startRate = this->fields.endRate;
    if ( !targetFrameRate )
      goto LABEL_25;
    EventInfoPointRiverProgressControl__SetMaskPanelActive(targetFrameRate, 0, 0);
    EventInfoShipProgressDrawComponent__SaveProgressData(_4__this, 0);
    ActionExtensions__Call(this->fields.endAction, 0);
    return 0;
  }
  progressData = _4__this->fields.progressData;
  if ( !progressData )
    goto LABEL_25;
  progressPathMesh = _4__this->fields.progressPathMesh;
  if ( !progressPathMesh )
    goto LABEL_25;
  ReleaseScenarioIndex = progressData->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= LODWORD(progressPathMesh->max_length) )
    sub_1C3E7C8(targetFrameRate, v8);
  v14 = &progressPathMesh->obj.klass + ReleaseScenarioIndex;
  v15 = (Custom2dSplineMesh_o *)v14[4];
  if ( !v15 )
    goto LABEL_25;
  PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(
                          (Custom2dSplineMesh_o *)v14[4],
                          _4__this->fields.startRate,
                          0);
  x = PointAsWorldFlatten.fields.x;
  y = PointAsWorldFlatten.fields.y;
  z = PointAsWorldFlatten.fields.z;
  v29 = Custom2dSplineMesh__GetPointAsWorldFlatten(v15, _4__this->fields.startRate + this->fields.moveRate, 0);
  v19 = v29.fields.x;
  v20 = v29.fields.y;
  v21 = v29.fields.z;
  targetFrameRate = (EventInfoPointRiverProgressControl_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)_4__this,
                                                              0);
  if ( !targetFrameRate )
    goto LABEL_25;
  targetFrameRate = (EventInfoPointRiverProgressControl_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)targetFrameRate,
                                                              0);
  if ( !targetFrameRate )
    goto LABEL_25;
  targetFrameRate = (EventInfoPointRiverProgressControl_o *)UnityEngine_GameObject__AddComponent_object_(
                                                              (UnityEngine_GameObject_o *)targetFrameRate,
                                                              (const MethodInfo_3150FE4 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  if ( !targetFrameRate )
    goto LABEL_25;
  v22 = 1;
  v23 = (UITweener_o *)targetFrameRate;
  *(float *)&targetFrameRate->fields.maskPanel = x;
  *((float *)&targetFrameRate->fields.maskPanel + 1) = y;
  *(float *)&targetFrameRate->fields.userEventPointMaster = z;
  *((float *)&targetFrameRate->fields.userEventPointMaster + 1) = v19;
  LOBYTE(targetFrameRate->fields.eventUiValueEntityList) = 1;
  *(float *)&targetFrameRate->fields.eventUiEntity = v20;
  *((float *)&targetFrameRate->fields.eventUiEntity + 1) = v21;
  *(float *)&targetFrameRate->fields.assetData2 = UnityEngine_Time__get_deltaTime(0);
  v23->fields.method = 0;
  UITweener__PlayForward(v23, 0);
  Custom2dSplineMesh__SetPathRate(v15, _4__this->fields.startRate, 0);
  _4__this->fields.startRate = _4__this->fields.startRate + this->fields.moveRate;
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_1C3E508((CGThumbnailListItem_o *)p__2__current, 0, v25, v26);
  *((_DWORD *)p__2__current - 2) = 1;
  return v22;
}


Il2CppObject *EventInfoShipProgressDrawComponent__EasingMove_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventInfoShipProgressDrawComponent__EasingMove_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventInfoShipProgressDrawComponent__EasingMove_d__13__System_Collections_IEnumerator_Reset(
        EventInfoShipProgressDrawComponent__EasingMove_d__13_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_EventInfoShipProgressDrawComponent__EasingMove_d__13_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
}


Il2CppObject *EventInfoShipProgressDrawComponent__EasingMove_d__13__System_Collections_IEnumerator_get_Current(
        EventInfoShipProgressDrawComponent__EasingMove_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventInfoShipProgressDrawComponent__EasingMove_d__13__System_IDisposable_Dispose(
        EventInfoShipProgressDrawComponent__EasingMove_d__13_o *this,
        const MethodInfo *method)
{
  ;
}


void EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15___ctor(
        EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15__MoveNext(
        EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *this,
        const MethodInfo *method)
{
  EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *v2; // x19
  int32_t _1__state; // w8
  struct EventInfoShipProgressDrawComponent_o *_4__this; // x20
  Il2CppObject *Component_object; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  _BOOL4 isFadeIn; // w22
  float x; // s8
  float y; // s10
  float z; // s9
  const MethodInfo *v12; // x3
  float v13; // s11
  float v14; // s10
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  System_String_o **v17; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C58B8A & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_23452/*"ship_fade_out"*/);
    this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)sub_1C3E564(&StringLiteral_23451/*"ship_fade_in"*/);
    byte_4C58B8A = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    goto LABEL_22;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_29;
    this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)_4__this->fields.progressShipAnim;
    if ( !this )
      goto LABEL_29;
    SimpleAnimation__Stop((SimpleAnimation_o *)this, 0);
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)_4__this,
                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Object__op_Inequality(
                                                                                      (UnityEngine_Object_o *)Component_object,
                                                                                      0,
                                                                                      0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      isFadeIn = v2->fields.isFadeIn;
      this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_transform(
                                                                                        (UnityEngine_Component_o *)_4__this,
                                                                                        0);
      if ( !this )
        goto LABEL_29;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      x = localPosition.fields.x;
      if ( isFadeIn )
      {
        y = localPosition.fields.y;
        z = localPosition.fields.z;
        this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_gameObject(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0);
        if ( !Component_object )
          goto LABEL_29;
        GameObjectExtensions__SetLocalPosition_36176396(
          (UnityEngine_GameObject_o *)this,
          x,
          y - *((float *)&Component_object[3].monitor + 1),
          z,
          0);
      }
      else
      {
        this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_transform(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0);
        if ( !this )
          goto LABEL_29;
        v19 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
        if ( !Component_object )
          goto LABEL_29;
        v13 = *((float *)&Component_object[3].monitor + 1);
        v14 = v19.fields.y;
        this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)UnityEngine_Component__get_transform(
                                                                                          (UnityEngine_Component_o *)_4__this,
                                                                                          0);
        if ( !this )
          goto LABEL_29;
        v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
        z = v20.fields.z;
        y = v14 + v13;
      }
      v21.fields.x = x;
      v21.fields.y = y;
      v21.fields.z = z;
      EventInfoUISlideAnimation__StartSlideAnim_44728808(
        (EventInfoUISlideAnimation_o *)Component_object,
        0,
        v21,
        isFadeIn,
        v12);
    }
    if ( v2->fields.isWait )
    {
      v2->fields.__2__current = 0;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C3E508(p__2__current, 0, v6, v7);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
LABEL_22:
    if ( v2->fields.isFadeIn )
      v17 = (System_String_o **)&StringLiteral_23451/*"ship_fade_in"*/;
    else
      v17 = (System_String_o **)&StringLiteral_23452/*"ship_fade_out"*/;
    if ( _4__this )
    {
      this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)_4__this->fields.progressShipAnim;
      if ( this )
      {
        SimpleAnimation__Play_66582224((SimpleAnimation_o *)this, *v17, 0);
        return 0;
      }
    }
LABEL_29:
    sub_1C3E7C0(this, method);
  }
  return 0;
}


Il2CppObject *EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15__System_Collections_IEnumerator_Reset(
        EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
}


Il2CppObject *EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15__System_Collections_IEnumerator_get_Current(
        EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15__System_IDisposable_Dispose(
        EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *this,
        const MethodInfo *method)
{
  ;
}