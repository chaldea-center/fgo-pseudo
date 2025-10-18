void EventInfoShipProgressDrawComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C44564 & 1) == 0 )
  {
    sub_1C37058(&EventInfoShipProgressDrawComponent_TypeInfo);
    sub_1C37058(&StringLiteral_10760/*"ProgressShipData_"*/);
    byte_4C44564 = 1;
  }
  EventInfoShipProgressDrawComponent_TypeInfo->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = (struct System_String_o *)StringLiteral_10760/*"ProgressShipData_"*/;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)EventInfoShipProgressDrawComponent_TypeInfo->static_fields,
    StringLiteral_10760/*"ProgressShipData_"*/,
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
    sub_1C372B4(this);
  max_length = progressPathMesh->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}


void EventInfoShipProgressDrawComponent__DeleteContinueData(const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_Collections_ObjectModel_Collection_T__o *monitor; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v3; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  System_Collections_Generic_IEnumerator_T__c *v9; // x8
  __int64 v10; // x9
  int32_t *v11; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  int32_t v14; // w2
  EventInfoShipProgressDrawComponent_c *v15; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x21
  System_String_o *v17; // x1
  System_String_o *v18; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  int32_t v24; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C44561 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
    sub_1C37058(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__getEntityList__);
    sub_1C37058(&EventInfoShipProgressDrawComponent_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_EventEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    byte_4C44561 = 1;
  }
  v24 = 0;
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object
    || (monitor = (System_Collections_ObjectModel_Collection_T__o *)Master_object[2].monitor,
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventDetailMaster___),
        !monitor) )
  {
    sub_1C372B4(Master_object);
  }
  v3 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 monitor,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_EventEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v6 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_12;
      }
      v8 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v8 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v8)(
            Enumerator,
            *(_QWORD *)(v8 + 8))
        & 1) == 0 )
      break;
    v9 = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v11 = &v9->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventEntity__c **)v11 - 1) != System_Collections_Generic_IEnumerator_EventEntity__TypeInfo )
      {
        --v10;
        v11 += 4;
        if ( !v10 )
          goto LABEL_19;
      }
      v12 = (__int64)&v9->vtable[*v11];
    }
    else
    {
LABEL_19:
      v12 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_EventEntity__TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            Enumerator,
            *(_QWORD *)(v12 + 8));
    if ( v13 )
    {
      v14 = *(_DWORD *)(v13 + 16);
      v24 = v14;
      if ( !v3 )
        sub_1C372B4(v13);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v3,
             &entity,
             v14,
             (const MethodInfo_33A10EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          sub_1C372B4(0);
        if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)entity, 0) )
        {
          v15 = EventInfoShipProgressDrawComponent_TypeInfo;
          if ( !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
            v15 = EventInfoShipProgressDrawComponent_TypeInfo;
          }
          SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v15->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
          v17 = System_Int32__ToString((int32_t)&v24, 0);
          v18 = System_String__Concat_63561656(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v17, 0);
          UnityEngine_PlayerPrefs__DeleteKey(v18, 0);
        }
      }
    }
  }
  v19 = Enumerator->klass;
  v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_33;
    }
    v22 = (__int64)&v19->vtable[*v21];
  }
  else
  {
LABEL_33:
    v22 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C4455D & 1) == 0 )
  {
    sub_1C37058(&EventInfoShipProgressDrawComponent__EasingMove_d__13_TypeInfo);
    byte_4C4455D = 1;
  }
  v9 = sub_1C372A4(EventInfoShipProgressDrawComponent__EasingMove_d__13_TypeInfo);
  EventInfoShipProgressDrawComponent__EasingMove_d__13___ctor(
    (EventInfoShipProgressDrawComponent__EasingMove_d__13_o *)v9,
    0,
    0);
  if ( !v9 )
    sub_1C372B4(v10);
  *(_QWORD *)(v9 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 48) = endAction;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 48), (int32_t)endAction, v13, v14);
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
  if ( (byte_4C44562 & 1) == 0 )
  {
    sub_1C37058(&EventInfoShipProgressDrawComponent_TypeInfo);
    byte_4C44562 = 1;
  }
  v3 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
    v3 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v3->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v5 = System_Int32__ToString(v2 + 124, 0);
  v6 = System_String__Concat_63561656(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v5, 0);
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
  int v9; // w8
  void *v10; // x20
  float v11; // s8
  int v12; // w21
  __int64 v13; // x0
  float v14; // s9
  float v15; // s10
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C44560 & 1) == 0 )
  {
    sub_1C37058(&EventInfoShipProgressDrawComponent_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C44560 = 1;
  }
  v3 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
    v3 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v3->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v5 = System_Int32__ToString((int)this + 124, 0);
  v6 = System_String__Concat_63561656(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v5, 0);
  String = UnityEngine_PlayerPrefs__GetString(v6, (System_String_o *)StringLiteral_1/*""*/, 0);
  IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(String, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !String )
      goto LABEL_19;
    IsNullOrEmpty = System_String__Split(String, 0x3Au, 0, 0);
    if ( !IsNullOrEmpty )
      goto LABEL_19;
    v9 = *((_DWORD *)IsNullOrEmpty + 6);
    v10 = IsNullOrEmpty;
    v11 = 0.0;
    if ( v9 < 1 )
    {
      v15 = 0.0;
      v14 = 0.0;
    }
    else
    {
      v12 = v9 & ~(v9 >> 31);
      v14 = System_Single__Parse(*((System_String_o **)IsNullOrEmpty + 4), 0);
      if ( v12 < 2 )
      {
        v15 = 0.0;
      }
      else
      {
        if ( *((_DWORD *)v10 + 6) <= 1u )
          goto LABEL_20;
        v15 = System_Single__Parse(*((System_String_o **)v10 + 5), 0);
        if ( v12 < 3 )
          goto LABEL_16;
        if ( *((_DWORD *)v10 + 6) <= 2u )
LABEL_20:
          sub_1C372BC(v13);
        v11 = System_Single__Parse(*((System_String_o **)v10 + 6), 0);
      }
    }
LABEL_16:
    IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( IsNullOrEmpty )
    {
      v16.fields.z = 0.0;
      v16.fields.x = v14;
      v16.fields.y = v15;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsNullOrEmpty, v16, 0);
      this->fields.startRate = v11;
      return;
    }
LABEL_19:
    sub_1C372B4(IsNullOrEmpty);
  }
}


void EventInfoShipProgressDrawComponent__OnDestroy(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.progressPathMesh = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.progressPathMesh, 0, v2, v3);
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
  if ( (byte_4C4455E & 1) == 0 )
  {
    this = (EventInfoShipProgressDrawComponent_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4455E = 1;
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
        SimpleAnimation__Play_66507412(v5, name, 0);
        return;
      }
    }
LABEL_11:
    sub_1C372B4(this);
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
  if ( (byte_4C4455C & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&System_Math_TypeInfo);
    this = (EventInfoShipProgressDrawComponent_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4455C = 1;
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
      v12 = System_Math__Min_65085456((float)TotalPoint / (float)NextPoint, 1.0, 0);
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
          UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)v4, v19, 0);
          EventInfoShipProgressDrawComponent__PlayProgressShipDefaultAnim(v4, v20);
          return;
        }
      }
    }
LABEL_24:
    sub_1C372B4(this);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C4455F & 1) == 0 )
  {
    sub_1C37058(&EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_TypeInfo);
    byte_4C4455F = 1;
  }
  v7 = sub_1C372A4(EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_TypeInfo);
  EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15___ctor(
    (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)v7,
    0,
    0);
  if ( !v7 )
    sub_1C372B4(v8);
  *(_QWORD *)(v7 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v9, v10);
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
  struct EventInfoPointRiverProgressControl_ProgressData_o *v7; // x9
  __int64 v8; // x8
  __int64 ReleaseScenarioIndex; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x9
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  __int64 v12; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v13; // x9
  struct Custom2dSplineMesh_array *v14; // x8
  __int64 v15; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v20; // x1
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.progressData = progressData_;
  p_progressData = &this->fields.progressData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.progressData, (int32_t)progressData_, (int32_t)method, v3);
  v7 = *p_progressData;
  *((_DWORD *)p_progressData + 2) = 0;
  if ( !v7 )
    goto LABEL_14;
  v8 = (__int64)*(p_progressData - 4);
  if ( !v8 )
    goto LABEL_14;
  ReleaseScenarioIndex = v7->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= *(_DWORD *)(v8 + 24) )
    goto LABEL_15;
  v6 = *(Custom2dSplineMesh_o **)(v8 + 8 * ReleaseScenarioIndex + 32);
  if ( !v6 )
    goto LABEL_14;
  Custom2dSplineMesh__CreateMesh(v6, 0);
  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_14;
  progressPathMesh = this->fields.progressPathMesh;
  if ( !progressPathMesh )
    goto LABEL_14;
  v12 = progressData->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v12 >= LODWORD(progressPathMesh->max_length) )
    goto LABEL_15;
  v6 = progressPathMesh->m_Items[v12];
  if ( !v6
    || (Custom2dSplineMesh__SetPathRate(v6, this->fields.startRate, 0), (v13 = this->fields.progressData) == 0)
    || (v14 = this->fields.progressPathMesh) == 0 )
  {
LABEL_14:
    sub_1C372B4(v6);
  }
  v15 = v13->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v15 >= LODWORD(v14->max_length) )
LABEL_15:
    sub_1C372BC(v6);
  v6 = v14->m_Items[v15];
  if ( !v6 )
    goto LABEL_14;
  PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(v6, this->fields.startRate, 0);
  x = PointAsWorldFlatten.fields.x;
  y = PointAsWorldFlatten.fields.y;
  z = PointAsWorldFlatten.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  GameObjectExtensions__SetPosition(gameObject, v22, 0);
  EventInfoShipProgressDrawComponent__SaveProgressData(this, v20);
}


void EventInfoShipProgressDrawComponent__SaveProgressData(
        EventInfoShipProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x20
  UnityEngine_Transform_o *transform; // x0
  float v5; // s0
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  EventInfoShipProgressDrawComponent_c *v8; // x0
  System_String_o *SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA; // x21
  System_String_o *v10; // x0
  System_String_o *v11; // x19
  System_String_o *v12; // x0
  float startRate; // [xsp+Ch] [xbp-44h] BYREF
  float x; // [xsp+10h] [xbp-40h] BYREF
  _DWORD v15[15]; // [xsp+14h] [xbp-3Ch] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C44563 & 1) == 0 )
  {
    sub_1C37058(&EventInfoShipProgressDrawComponent_TypeInfo);
    sub_1C37058(&System_Text_StringBuilder_TypeInfo);
    sub_1C37058(&StringLiteral_1457/*":"*/);
    byte_4C44563 = 1;
  }
  startRate = 0.0;
  v3 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0),
        x = localPosition.fields.x,
        v15[0] = LODWORD(localPosition.fields.y),
        v15[1] = LODWORD(localPosition.fields.z),
        transform = (UnityEngine_Transform_o *)System_Single__ToString(localPosition.fields.x, (const MethodInfo *)&x),
        !v3) )
  {
    sub_1C372B4(transform);
  }
  System_Text_StringBuilder__Append_63646720(v3, (System_String_o *)transform, 0);
  System_Text_StringBuilder__Append_63646720(v3, (System_String_o *)StringLiteral_1457/*":"*/, 0);
  v6 = System_Single__ToString(v5, (const MethodInfo *)v15);
  System_Text_StringBuilder__Append_63646720(v3, v6, 0);
  System_Text_StringBuilder__Append_63646720(v3, (System_String_o *)StringLiteral_1457/*":"*/, 0);
  startRate = this->fields.startRate;
  v7 = System_Single__ToString(startRate, (const MethodInfo *)&startRate);
  System_Text_StringBuilder__Append_63646720(v3, v7, 0);
  v8 = EventInfoShipProgressDrawComponent_TypeInfo;
  if ( !EventInfoShipProgressDrawComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoShipProgressDrawComponent_TypeInfo);
    v8 = EventInfoShipProgressDrawComponent_TypeInfo;
  }
  SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA = v8->static_fields->SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA;
  v10 = System_Int32__ToString((int)this + 124, 0);
  v11 = System_String__Concat_63561656(SAVE_KEY_PREFIX_PROGRESS_SHIP_DATA, v10, 0);
  v12 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v3->klass->vtable._3_ToString.methodPtr)(
                             v3,
                             v3->klass->vtable._3_ToString.method);
  UnityEngine_PlayerPrefs__SetString(v11, v12, 0);
}


void EventInfoShipProgressDrawComponent__SetActive(
        EventInfoShipProgressDrawComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct EventInfoPointRiverProgressControl_ProgressData_o *progressData; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o **p_progressData; // x22
  const MethodInfo *v16; // x1
  struct EventInfoPointRiverProgressControl_ProgressData_o *v17; // x8
  struct EventInfoPointRiverProgressControl_ProgressData_o *v18; // x8
  __int64 TotalPoint; // x20
  __int64 NextPoint; // x21
  struct EventInfoPointRiverProgressControl_ProgressData_o *v21; // x9
  struct Custom2dSplineMesh_array *progressPathMesh; // x8
  __int64 ReleaseScenarioIndex; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v24; // x9
  struct Custom2dSplineMesh_array *v25; // x8
  __int64 v26; // x9
  struct EventInfoPointRiverProgressControl_ProgressData_o *v27; // x9
  struct Custom2dSplineMesh_array *v28; // x8
  __int64 v29; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v34; // x1
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C4455B & 1) == 0 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4455B = 1;
  }
  this->fields.pointRiverProgressCtr = inputPointRiverProgressCtr;
  p_pointRiverProgressCtr = &this->fields.pointRiverProgressCtr;
  sub_1C36FFC(
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.progressData, (int32_t)progressData, v12, v13);
  this->fields.eventId = inputEventId;
  EventInfoShipProgressDrawComponent__LoadProgressData(this, v16);
  v17 = this->fields.progressData;
  if ( isReset )
  {
    if ( !v17 )
      goto LABEL_40;
    goto LABEL_25;
  }
  if ( !v17 )
    goto LABEL_40;
  if ( !v17->fields.IsFreeQuestClear )
  {
LABEL_25:
    if ( v17->fields.OldTotalPoint == v17->fields.TotalPoint )
      this->fields.startRate = 0.0;
    goto LABEL_27;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C41A3A )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C41A3A = 1;
  }
  v11 = (Custom2dSplineMesh_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = (Custom2dSplineMesh_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !*(_BYTE *)(*(_QWORD *)&v11->fields.vtxIdx + 474LL) )
  {
    v18 = *p_progressData;
    if ( !*p_progressData )
      goto LABEL_40;
    TotalPoint = v18->fields.TotalPoint;
    NextPoint = v18->fields.NextPoint;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.startRate = System_Math__Min_65085456((float)TotalPoint / (float)NextPoint, 1.0, 0);
  }
LABEL_27:
  v21 = this->fields.progressData;
  if ( !v21 )
    goto LABEL_40;
  progressPathMesh = this->fields.progressPathMesh;
  if ( !progressPathMesh )
    goto LABEL_40;
  ReleaseScenarioIndex = v21->fields.ReleaseScenarioIndex;
  if ( (unsigned int)ReleaseScenarioIndex >= LODWORD(progressPathMesh->max_length) )
    goto LABEL_41;
  v11 = progressPathMesh->m_Items[ReleaseScenarioIndex];
  if ( !v11 )
    goto LABEL_40;
  Custom2dSplineMesh__CreateMesh(v11, 0);
  v24 = this->fields.progressData;
  if ( !v24 )
    goto LABEL_40;
  v25 = this->fields.progressPathMesh;
  if ( !v25 )
    goto LABEL_40;
  v26 = v24->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v26 >= LODWORD(v25->max_length) )
    goto LABEL_41;
  v11 = v25->m_Items[v26];
  if ( !v11
    || (Custom2dSplineMesh__SetPathRate(v11, this->fields.startRate, 0), (v27 = this->fields.progressData) == 0)
    || (v28 = this->fields.progressPathMesh) == 0 )
  {
LABEL_40:
    sub_1C372B4(v11);
  }
  v29 = v27->fields.ReleaseScenarioIndex;
  if ( (unsigned int)v29 >= LODWORD(v28->max_length) )
LABEL_41:
    sub_1C372BC(v11);
  v11 = v28->m_Items[v29];
  if ( !v11 )
    goto LABEL_40;
  PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(v11, this->fields.startRate, 0);
  x = PointAsWorldFlatten.fields.x;
  y = PointAsWorldFlatten.fields.y;
  z = PointAsWorldFlatten.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v36.fields.x = x;
  v36.fields.y = y;
  v36.fields.z = z;
  GameObjectExtensions__SetPosition(gameObject, v36, 0);
  EventInfoShipProgressDrawComponent__SaveProgressData(this, v34);
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
  float v8; // s0
  int v9; // w8
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
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UnityEngine_Vector3_o PointAsWorldFlatten; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C44DBD & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    byte_4C44DBD = 1;
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
    sub_1C372B4(targetFrameRate);
  v8 = _4__this->fields.moveAnimTime * (float)(int)targetFrameRate;
  v9 = (int)v8;
  if ( v8 == INFINITY )
    v9 = 0x80000000;
  if ( v5 >= v9 )
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
    sub_1C372BC(targetFrameRate);
  v13 = &progressPathMesh->obj.klass + ReleaseScenarioIndex;
  v14 = (Custom2dSplineMesh_o *)v13[4];
  if ( !v14 )
    goto LABEL_25;
  PointAsWorldFlatten = Custom2dSplineMesh__GetPointAsWorldFlatten(
                          (Custom2dSplineMesh_o *)v13[4],
                          _4__this->fields.startRate,
                          0);
  x = PointAsWorldFlatten.fields.x;
  y = PointAsWorldFlatten.fields.y;
  z = PointAsWorldFlatten.fields.z;
  v28 = Custom2dSplineMesh__GetPointAsWorldFlatten(v14, _4__this->fields.startRate + this->fields.moveRate, 0);
  v18 = v28.fields.x;
  v19 = v28.fields.y;
  v20 = v28.fields.z;
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
                                                              (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  if ( !targetFrameRate )
    goto LABEL_25;
  v21 = 1;
  v22 = (UITweener_o *)targetFrameRate;
  *(float *)&targetFrameRate->fields.maskPanel = x;
  *((float *)&targetFrameRate->fields.maskPanel + 1) = y;
  *(float *)&targetFrameRate->fields.userEventPointMaster = z;
  *((float *)&targetFrameRate->fields.userEventPointMaster + 1) = v18;
  LOBYTE(targetFrameRate->fields.eventUiValueEntityList) = 1;
  *(float *)&targetFrameRate->fields.eventUiEntity = v19;
  *((float *)&targetFrameRate->fields.eventUiEntity + 1) = v20;
  *(float *)&targetFrameRate->fields.assetData2 = UnityEngine_Time__get_deltaTime(0);
  v22->fields.method = 0;
  UITweener__PlayForward(v22, 0);
  Custom2dSplineMesh__SetPathRate(v14, _4__this->fields.startRate, 0);
  _4__this->fields.startRate = _4__this->fields.startRate + this->fields.moveRate;
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, 0, v24, v25);
  *((_DWORD *)p__2__current - 2) = 1;
  return v21;
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_EventInfoShipProgressDrawComponent__EasingMove_d__13_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
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
  if ( (byte_4C44DBE & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_23433/*"ship_fade_out"*/);
    this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)sub_1C37058(&StringLiteral_23432/*"ship_fade_in"*/);
    byte_4C44DBE = 1;
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
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_EventInfoUISlideAnimation___);
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
        GameObjectExtensions__SetLocalPosition_36132496(
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
      EventInfoUISlideAnimation__StartSlideAnim_44672992(
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
      sub_1C36FFC(p__2__current, 0, v6, v7);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
LABEL_22:
    if ( v2->fields.isFadeIn )
      v17 = (System_String_o **)&StringLiteral_23432/*"ship_fade_in"*/;
    else
      v17 = (System_String_o **)&StringLiteral_23433/*"ship_fade_out"*/;
    if ( _4__this )
    {
      this = (EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_o *)_4__this->fields.progressShipAnim;
      if ( this )
      {
        SimpleAnimation__Play_66507412((SimpleAnimation_o *)this, *v17, 0);
        return 0;
      }
    }
LABEL_29:
    sub_1C372B4(this);
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_EventInfoShipProgressDrawComponent__PlayProgressShipResetAnim_d__15_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
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