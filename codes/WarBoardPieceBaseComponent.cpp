void WarBoardPieceBaseComponent___ctor(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D2A038 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
    sub_1C94098(&System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C94098(&StringLiteral_6869/*"Frame{0}"*/);
    byte_4D2A038 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
  this->fields.listEffectData = (struct System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.listEffectData, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  *(_OWORD *)&this->fields.positionPieceActionPointDefault.fields.x = xmmword_CFEB70;
  *(_QWORD *)&this->fields.positionPieceActionPointNext.fields.y = 1111228416;
  *(_OWORD *)&this->fields.pixelPerSecond = xmmword_D00250;
  this->fields.lengthMoveAttack = 25.0;
  v10 = StringLiteral_6869/*"Frame{0}"*/;
  this->fields.baseFrameName = (struct System_String_o *)StringLiteral_6869/*"Frame{0}"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.baseFrameName, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.removeTweenTargetObjects = (struct System_Collections_Generic_List_GameObject__o *)v17;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.removeTweenTargetObjects,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardPieceBaseComponent__AddDeadMoveTask(
        WarBoardPieceBaseComponent_o *this,
        UnityEngine_Vector3_o originalPos,
        int32_t squareIndex,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  System_Collections_Generic_List_object__o *v9; // x19
  __int64 v10; // x1
  WarBoardPieceData_o *pieceData; // x0
  System_Int32_array *PieceEventVals; // x20
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  float pixelPerSecond; // s13
  float v16; // s11
  float v17; // s12
  float v18; // s14
  WarBoardMovePerformance_o *v19; // x0
  Il2CppObject *v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v31; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v32; // x0
  Il2CppObject *Instance; // x20
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s3.4,4:s4.4,8:s5.4

  z = originalPos.fields.z;
  y = originalPos.fields.y;
  x = originalPos.fields.x;
  if ( (byte_4D2A02F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C94098(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&WarBoardMovePerformance_TypeInfo);
    byte_4D2A02F = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_16;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(pieceData, 0);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  pieceData = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                       (WarBoardManager_o *)pieceData,
                                       30,
                                       PieceEventVals,
                                       0);
  if ( !v9 )
    goto LABEL_16;
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)pieceData,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 36, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)pieceData, squareIndex, 0);
  pixelPerSecond = this->fields.pixelPerSecond;
  v16 = SquarePosition.fields.x;
  v17 = SquarePosition.fields.y;
  v18 = SquarePosition.fields.z;
  v19 = (WarBoardMovePerformance_o *)sub_1C942E4(WarBoardMovePerformance_TypeInfo);
  v35.fields.x = x;
  v35.fields.y = y;
  v35.fields.z = z;
  v36.fields.x = v16;
  v36.fields.y = v17;
  v36.fields.z = v18;
  v20 = (Il2CppObject *)v19;
  WarBoardMovePerformance___ctor(v19, gameObject, v35, v36, pixelPerSecond, 0, 0);
  items = v9->fields._items;
  v28 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v9->fields._version;
  if ( !items )
    goto LABEL_16;
  size = v9->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      v20,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v20;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v30 + 4), (int32_t)v20, v21, v22, v23, v24, v25, v26);
  }
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData
    || (v31 = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 38, PieceEventVals, 0),
        System_Collections_Generic_List_object___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)v31,
          (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0)
    || (v32 = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 37, 0, 0),
        System_Collections_Generic_List_object___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)v32,
          (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        pieceData = (WarBoardPieceData_o *)System_Collections_Generic_List_object___ToArray(
                                             v9,
                                             (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__),
        !Instance) )
  {
LABEL_16:
    sub_1C942F0(pieceData, v10);
  }
  WarBoardManager__InsertRunningTask((WarBoardManager_o *)Instance, (WarBoardTaskBase_array *)pieceData, 0);
}


void WarBoardPieceBaseComponent__ChangeCriticalStars(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  ;
}


void WarBoardPieceBaseComponent__ChangeStatus(
        WarBoardPieceBaseComponent_o *this,
        bool isBreak,
        const MethodInfo *method)
{
  ;
}


void WarBoardPieceBaseComponent__ClickIcon(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v4; // x1
  int32_t controllType_k__BackingField; // w8
  WarBoardManager_o *v6; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x21
  struct WarBoardSeSetting_o *seSetting; // x8
  Il2CppMethodPointer methodPtr; // x2
  const MethodInfo *v11; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  struct WarBoardPieceData_o *v15; // x8
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x21
  struct WarBoardSeSetting_o *v18; // x8
  struct WarBoardPieceData_o *v19; // x8
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x21
  struct WarBoardSeSetting_o *v22; // x8
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x19
  struct WarBoardSeSetting_o *v25; // x8

  if ( (byte_4D2A020 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&Method_WarBoardPieceBaseComponent_ClickIcon__);
    byte_4D2A020 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  controllType_k__BackingField = Instance->fields._controllType_k__BackingField;
  v6 = Instance;
  if ( controllType_k__BackingField == 1 )
  {
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_41;
    if ( pieceData->fields._isEditing_k__BackingField )
    {
      v13 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1C940B0(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v14 = (System_Reflection_MethodBase_o *)sub_1C9407C(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
      v15 = this->fields.pieceData;
      if ( v15 )
      {
        WarBoardManager__SquareSelect(v6, v15->fields._nowSquareIndex_k__BackingField, 0);
        methodPtr = this->klass->vtable._14_EditPiece.methodPtr;
        v11 = this->klass->vtable._14_EditPiece.method;
        goto LABEL_33;
      }
LABEL_41:
      sub_1C942F0(Instance, v4);
    }
  }
  else if ( controllType_k__BackingField == 2 )
  {
    if ( WarBoardManager__get_isSelectedPiece(Instance, 0)
      && WarBoardManager__IsSelectedPieceSame(v6, this->fields.pieceData, 0) )
    {
      v7 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C940B0(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C9407C(v7, v7[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        seSetting = Instance->fields.seSetting;
        if ( seSetting )
        {
          OverwriteAssetSoundName__PlaySe(v8, seSetting->fields.DeselectSe, 0, 0);
          WarBoardManager__DeselectPiece(v6, 1, 0, 0);
          methodPtr = this->klass->vtable._13_HideStatus.methodPtr;
          v11 = this->klass->vtable._13_HideStatus.method;
LABEL_33:
          ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))methodPtr)(this, v11);
          return;
        }
      }
      goto LABEL_41;
    }
    if ( WarBoardManager__get_isSelectedPiece(v6, 0) && this->fields.isSelectable )
    {
      v16 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v16 = (_QWORD *)sub_1C940B0(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v17 = (System_Reflection_MethodBase_o *)sub_1C9407C(v16, v16[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v18 = Instance->fields.seSetting;
        if ( v18 )
        {
          Instance = (WarBoardManager_o *)OverwriteAssetSoundName__PlaySe(v17, v18->fields.SelectSe, 0, 0);
          v19 = this->fields.pieceData;
          if ( v19 )
          {
            WarBoardManager__SelectedPieceAction(v6, v19->fields._nowSquareIndex_k__BackingField, 0);
            return;
          }
        }
      }
      goto LABEL_41;
    }
    if ( WarBoardManager__IsNowTurn(v6, this->fields.pieceData, 0) )
    {
      v20 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v20 = (_QWORD *)sub_1C940B0(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v21 = (System_Reflection_MethodBase_o *)sub_1C9407C(v20, v20[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v22 = Instance->fields.seSetting;
        if ( v22 )
        {
          OverwriteAssetSoundName__PlaySe(v21, v22->fields.SelectSe, 0, 0);
          WarBoardManager__SelectPiece(v6, this->fields.pieceData, 0);
          methodPtr = this->klass->vtable._12_ShowStatus.methodPtr;
          v11 = this->klass->vtable._12_ShowStatus.method;
          goto LABEL_33;
        }
      }
      goto LABEL_41;
    }
  }
  if ( (((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._12_ShowStatus.methodPtr)(
          this,
          this->klass->vtable._12_ShowStatus.method)
      & 1) != 0 )
  {
    v23 = Method_WarBoardPieceBaseComponent_ClickIcon__;
    if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
      v23 = (_QWORD *)sub_1C940B0(Method_WarBoardPieceBaseComponent_ClickIcon__);
    v24 = (System_Reflection_MethodBase_o *)sub_1C9407C(v23, v23[4]);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    v25 = Instance->fields.seSetting;
    if ( !v25 )
      goto LABEL_41;
    OverwriteAssetSoundName__PlaySe(v24, v25->fields.OpenSimpleInfoSe, 0, 0);
  }
}


void WarBoardPieceBaseComponent__CreateEffect(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectName,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *CommonEffectAsset_object; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Object_o *v12; // x21
  Il2CppObject *v13; // x22
  WarBoardCommonEffectPerformance_o *v14; // x0
  Il2CppObject *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Nullable_Vector3__o v26; // 0:x3.16
  System_Nullable_Vector3__o v27; // 0:x5.16

  if ( (byte_4D2A035 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C94098(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject____79133288);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&WarBoardCommonEffectPerformance_TypeInfo);
    sub_1C94098(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    byte_4D2A035 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_3285CB0 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v12 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._41_GetEffectDisplayTransform.methodPtr)(
                                    this,
                                    this->klass->vtable._41_GetEffectDisplayTransform.method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v12, 0, 0) )
      v12 = (UnityEngine_Object_o *)transform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__Instantiate_object__52598436(
            CommonEffectAsset_object,
            (UnityEngine_Transform_o *)v12,
            (const MethodInfo_32296A4 *)Method_UnityEngine_Object_Instantiate_GameObject____79133288);
    v14 = (WarBoardCommonEffectPerformance_o *)sub_1C942E4(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v26.fields.hasValue = 0;
    *(_QWORD *)&v26.fields.value.fields.y = 0;
    *(_QWORD *)&v27.fields.hasValue = 0;
    *(_QWORD *)&v27.fields.value.fields.y = 0;
    v15 = (Il2CppObject *)v14;
    WarBoardCommonEffectPerformance___ctor(
      v14,
      0,
      (UnityEngine_GameObject_o *)v13,
      v26,
      v27,
      (System_Nullable_Vector3__o)0,
      0,
      0,
      1,
      0);
    if ( v7 )
    {
      items = v7->fields._items;
      v23 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v7->fields._version;
      if ( items )
      {
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            v15,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_17;
        }
        else
        {
          v25 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v15;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v15, v16, v17, v18, v19, v20, v21);
          if ( taskList )
          {
LABEL_17:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v7,
              (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_38721084(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v7,
            0);
          return;
        }
      }
    }
LABEL_21:
    sub_1C942F0(Instance, v9);
  }
}


void WarBoardPieceBaseComponent__CreateEffectText(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectName,
        System_String_o *popText,
        int32_t popTextColor,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectDamageBaseObject; // x20
  System_Collections_Generic_List_object__o *v10; // x20
  UnityEngine_Object_o *effectDamageBaseLabel; // x23
  __int64 v12; // x1
  UILabel_o *Instance; // x0
  UnityEngine_GameObject_o *v14; // x22
  WarBoardCommonEffectPerformance_o *v15; // x0
  Il2CppObject *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Nullable_Vector3__o v27; // 0:x3.16
  System_Nullable_Vector3__o v28; // 0:x5.16

  if ( (byte_4D2A036 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C94098(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&WarBoardCommonEffectPerformance_TypeInfo);
    byte_4D2A036 = 1;
  }
  effectDamageBaseObject = (UnityEngine_Object_o *)this->fields.effectDamageBaseObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(0, effectDamageBaseObject, 0) )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    effectDamageBaseLabel = (UnityEngine_Object_o *)this->fields.effectDamageBaseLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(effectDamageBaseLabel, 0, 0) )
    {
      Instance = this->fields.effectDamageBaseLabel;
      if ( !Instance )
        goto LABEL_19;
      UILabel__set_text(Instance, popText, 0);
    }
    v14 = this->fields.effectDamageBaseObject;
    v15 = (WarBoardCommonEffectPerformance_o *)sub_1C942E4(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v27.fields.hasValue = 0;
    *(_QWORD *)&v27.fields.value.fields.y = 0;
    *(_QWORD *)&v28.fields.hasValue = 0;
    *(_QWORD *)&v28.fields.value.fields.y = 0;
    v16 = (Il2CppObject *)v15;
    WarBoardCommonEffectPerformance___ctor(v15, 0, v14, v27, v28, (System_Nullable_Vector3__o)0, 0, 0, 0, 0);
    if ( v10 )
    {
      items = v10->fields._items;
      v24 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v10->fields._version;
      if ( items )
      {
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v16,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_15;
        }
        else
        {
          v26 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v16;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)v16, v17, v18, v19, v20, v21, v22);
          if ( taskList )
          {
LABEL_15:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v10,
              (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        Instance = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_38721084(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v10,
            0);
          return;
        }
      }
    }
LABEL_19:
    sub_1C942F0(Instance, v12);
  }
}


void WarBoardPieceBaseComponent__EditPiece(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_Transform_o *WarBoardPieceBaseComponent__GetEffectDisplayTransform(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


UnityEngine_Vector3_o WarBoardPieceBaseComponent__GetIconLocalPosition(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector3_o WarBoardPieceBaseComponent__GetIconPosition(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


System_Int32_array *WarBoardPieceBaseComponent__GetParticipantVals(
        WarBoardPieceBaseComponent_o *this,
        WarBoardPieceData_o *targetPiece,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *v4; // x20
  System_Collections_Generic_IEnumerable_TSource__o *PieceEventVals; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  long double inited; // q0
  _QWORD *v9; // x19
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *m_CachedPtr; // x19
  WarBoardPieceBaseComponent___c_c *v15; // x0
  System_Func_object__object__o *_9__62_0; // x20
  Il2CppObject *v17; // x21
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  v4 = this;
  if ( (byte_4D2A029 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Empty_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Concat_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__);
    this = (WarBoardPieceBaseComponent_o *)sub_1C94098(&WarBoardPieceBaseComponent___c_TypeInfo);
    byte_4D2A029 = 1;
  }
  if ( !targetPiece )
    goto LABEL_28;
  if ( WarBoardPieceData__get_isMaster(targetPiece, 0) )
  {
    this = (WarBoardPieceBaseComponent_o *)v4->fields.pieceData;
    if ( this )
    {
      PieceEventVals = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardPieceData__CreatePieceEventVals(
                                                                              (WarBoardPieceData_o *)this,
                                                                              0);
      v6 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardPieceData__CreatePieceEventVals(targetPiece, 0);
      v7 = System_Linq_Enumerable__Concat_int_(
             PieceEventVals,
             v6,
             (const MethodInfo_31B8DD0 *)Method_System_Linq_Enumerable_Concat_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v7,
               (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_28:
    sub_1C942F0(this, targetPiece);
  }
  this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_28;
  this = (WarBoardPieceBaseComponent_o *)this[1].fields.turnDarkUiWidgetsAroundActionCount;
  if ( !this )
    goto LABEL_28;
  this = (WarBoardPieceBaseComponent_o *)WarBoardData__LoadBattleParticipantInfo((WarBoardData_o *)this, 0);
  if ( !this )
    goto LABEL_28;
  if ( !LOBYTE(this->fields.m_CancellationTokenSource) )
  {
    m_CachedPtr = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.m_CachedPtr;
    v15 = WarBoardPieceBaseComponent___c_TypeInfo;
    if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
      v15 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    _9__62_0 = (System_Func_object__object__o *)v15->static_fields->__9__62_0;
    if ( !_9__62_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = WarBoardPieceBaseComponent___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v15->static_fields->__9;
      _9__62_0 = (System_Func_object__object__o *)sub_1C942E4(System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(
        _9__62_0,
        v17,
        Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__,
        0);
      static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      static_fields->__9__62_0 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__62_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__62_0,
        (int32_t)_9__62_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                m_CachedPtr,
                                                                (System_Func_TSource__IEnumerable_TResult___o *)_9__62_0,
                                                                (const MethodInfo_31D5EF4 *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v7,
             (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v9 = Method_System_Array_Empty_int___;
  v10 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v10 )
  {
    sub_1C6A188(Method_System_Array_Empty_int___);
    v10 = v9[7];
  }
  v11 = *(_QWORD *)(v10 + 16);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C6A12C(inited);
  if ( !*(_DWORD *)(v11 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v11);
  v12 = *(_QWORD *)(v9[7] + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C6A12C(inited);
  return **(System_Int32_array ***)(v12 + 184);
}


WarBoardSimpleAnimationPerformance_o *WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x20
  WarBoardSimpleAnimationPerformance_o *v6; // x21

  if ( (byte_4D2A031 & 1) == 0 )
  {
    sub_1C94098(&WarBoardSimpleAnimationPerformance_TypeInfo);
    byte_4D2A031 = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v6 = (WarBoardSimpleAnimationPerformance_o *)sub_1C942E4(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(v6, simpleAnimation, animationName, 0);
  return v6;
}


void WarBoardPieceBaseComponent__HideActionCount(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *currentActionPointRoot; // x0
  UnityEngine_Object_o *currentPieceActionPointRoot; // x20

  if ( (byte_4D2A022 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2A022 = 1;
  }
  currentActionPointRoot = this->fields.currentActionPointRoot;
  if ( !currentActionPointRoot )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(currentActionPointRoot, 0, 0);
  currentPieceActionPointRoot = (UnityEngine_Object_o *)this->fields.currentPieceActionPointRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentPieceActionPointRoot, 0, 0) )
  {
    currentActionPointRoot = this->fields.currentPieceActionPointRoot;
    if ( currentActionPointRoot )
    {
      UnityEngine_GameObject__SetActive(currentActionPointRoot, 0, 0);
      goto LABEL_9;
    }
LABEL_10:
    sub_1C942F0(currentActionPointRoot, method);
  }
LABEL_9:
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr)(
    this,
    this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method);
}


void WarBoardPieceBaseComponent__HideActionTarget(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectObject; // x0

  selectObject = this->fields.selectObject;
  if ( !selectObject )
    sub_1C942F0(0, method);
  UnityEngine_GameObject__SetActive(selectObject, 0, 0);
}


void WarBoardPieceBaseComponent__HideStatus(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v3; // x0
  __int64 v4; // x0
  WarBoardManager_o *v5; // x0

  if ( (byte_4D2A025 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_4D2A025 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C6A12C(v2);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C6A12C(v2);
  v5 = **(WarBoardManager_o ***)(v4 + 184);
  if ( !v5 )
    sub_1C942F0(0, method);
  WarBoardManager__HideSimplePopup(v5, 0, 0);
}


void WarBoardPieceBaseComponent__Initialize(
        WarBoardPieceBaseComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  __int64 gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UnityEngine_Transform_o *transform; // x21
  __int64 breakPointMax_k__BackingField; // x21
  struct WarBoardBreakPointComponent_array *v22; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  UnityEngine_Object_c **v30; // x25
  unsigned __int64 v31; // x29
  float v32; // s8
  __int64 v33; // x23
  int v34; // w26
  float v35; // s9
  __int64 v36; // x27
  Il2CppObject *breakPointPrefab; // x24
  UnityEngine_Transform_o *v38; // x0
  UnityEngine_Object_c *v39; // x8
  UnityEngine_Object_c **v40; // x21
  UnityEngine_Transform_o *v41; // x25
  UnityEngine_GameObject_o *v42; // x25
  WarBoardBreakPointComponent_o *v43; // x24
  struct UIWidget_o *breakPointParent; // x8
  int32_t mDepth; // w28
  bool isMaster; // w25
  const MethodInfo *v47; // x6
  unsigned int *v48; // x25
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  const MethodInfo *v55; // x3
  struct WarBoardBreakPointComponent_array *v56; // x8
  float maxSpacing; // s0
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  UnityEngine_Transform_array *v64; // x21
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  UnityEngine_Transform_o *v71; // x22
  const MethodInfo *v72; // x2
  int32_t PieceDispPriority; // w0
  const MethodInfo *v74; // x2
  const MethodInfo *v75; // x1
  Il2CppObject *CommonEffectAsset_object; // x20
  UnityEngine_Transform_o *v77; // x21
  UnityEngine_Object_o *v78; // x22
  Il2CppObject *v79; // x0
  UnityEngine_GameObject_o **p_effectDamageBaseObject; // x20
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  UnityEngine_Object_o *v87; // x21
  Il2CppObject *v88; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  __int64 v95; // x0
  __int64 v96; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2A01C & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject____79133288);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&UnityEngine_Transform___TypeInfo);
    sub_1C94098(&WarBoardBreakPointComponent___TypeInfo);
    sub_1C94098(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_1C94098(&StringLiteral_23377/*"root_text/type01/dm_base"*/);
    sub_1C94098(&StringLiteral_18952/*"ef_dm_base"*/);
    byte_4D2A01C = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_26;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.simpleAnimation,
    (int32_t)Component_object,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.pieceData = pieceData;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.pieceData, (int32_t)pieceData, v14, v15, v16, v17, v18, v19);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_26;
  if ( !gameObject )
    goto LABEL_26;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0);
  if ( !transform )
    goto LABEL_26;
  UnityEngine_Transform__set_localPosition(transform, SquarePosition, 0);
  breakPointMax_k__BackingField = (unsigned int)pieceData->fields._breakPointMax_k__BackingField;
  v22 = (struct WarBoardBreakPointComponent_array *)sub_1C94140(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v22;
  p_breakPoints = &this->fields.breakPoints;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.breakPoints, (int32_t)v22, v24, v25, v26, v27, v28, v29);
  gameObject = (__int64)this->fields.breakPointParent;
  if ( !gameObject )
    goto LABEL_26;
  v30 = &UnityEngine_Object_TypeInfo;
  if ( (int)breakPointMax_k__BackingField >= 1 )
  {
    v31 = 0;
    v32 = 0.0;
    v33 = 1;
    v34 = 2 * breakPointMax_k__BackingField - 2;
    v35 = (float)*(int *)(gameObject + 168) / (float)(int)breakPointMax_k__BackingField;
    v36 = 8;
    v96 = breakPointMax_k__BackingField;
    while ( 1 )
    {
      breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
      v38 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      v39 = *v30;
      v40 = v30;
      v41 = v38;
      if ( !v39->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v39);
      gameObject = (__int64)UnityEngine_Object__Instantiate_object__52598436(
                              breakPointPrefab,
                              v41,
                              (const MethodInfo_32296A4 *)Method_UnityEngine_Object_Instantiate_GameObject____79133288);
      if ( !gameObject )
        goto LABEL_26;
      v42 = (UnityEngine_GameObject_o *)gameObject;
      v43 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)gameObject,
                                               (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      gameObject = (__int64)UnityEngine_GameObject__get_transform(v42, 0);
      if ( !gameObject )
        goto LABEL_26;
      v98.fields.y = 0.0;
      v98.fields.z = 0.0;
      v98.fields.x = v32;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v98, 0);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        goto LABEL_26;
      mDepth = breakPointParent->fields.mDepth;
      isMaster = WarBoardPieceData__get_isMaster(pieceData, 0);
      gameObject = WarBoardPieceData__get_isEnemyServant(pieceData, 0);
      if ( !v43 )
        goto LABEL_26;
      WarBoardBreakPointComponent__Initialize(v43, v34 + mDepth, v33, isMaster, gameObject & 1, 0, v47);
      v48 = (unsigned int *)*p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_26;
      gameObject = sub_1C941D4(v43, *(_QWORD *)(*(_QWORD *)v48 + 64LL));
      if ( !gameObject )
        goto LABEL_57;
      if ( v31 >= v48[6] )
        goto LABEL_56;
      *(_QWORD *)&v48[v36] = v43;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v48[v36], (int32_t)v43, v49, v50, v51, v52, v53, v54);
      v56 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_26;
      if ( v31 >= LODWORD(v56->max_length) )
        goto LABEL_56;
      v30 = v40;
      gameObject = *(__int64 *)((char *)&v56->obj.klass + v36 * 4);
      if ( !gameObject )
        goto LABEL_26;
      WarBoardBreakPointComponent__SetActive(
        (WarBoardBreakPointComponent_o *)gameObject,
        (__int64)v31 < pieceData->fields._breakPoint_k__BackingField,
        0,
        v55);
      if ( v96 == v33 )
        break;
      maxSpacing = v43->fields.maxSpacing;
      gameObject = (__int64)this->fields.breakPointParent;
      ++v31;
      v34 -= 2;
      if ( maxSpacing >= v35 )
        maxSpacing = v35;
      ++v33;
      v32 = v32 + maxSpacing;
      v36 += 2;
      if ( !gameObject )
        goto LABEL_26;
    }
  }
  gameObject = (__int64)this->fields.selectObject;
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._10_UpdateDisplayActionCount.methodPtr)(
    this,
    this->klass->vtable._10_UpdateDisplayActionCount.method);
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._9_HideActionCount.methodPtr)(
    this,
    this->klass->vtable._9_HideActionCount.method);
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._17_ChangeCriticalStars.methodPtr)(
    this,
    this->klass->vtable._17_ChangeCriticalStars.method);
  pieceData->fields.pieceComponent = this;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&pieceData->fields.pieceComponent,
    (int32_t)this,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  if ( pieceData->fields._isDead_k__BackingField )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_26;
LABEL_30:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    return;
  }
  v64 = (UnityEngine_Transform_array *)sub_1C94140(UnityEngine_Transform___TypeInfo, 1);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v64 )
    goto LABEL_26;
  v71 = (UnityEngine_Transform_o *)gameObject;
  if ( gameObject )
  {
    gameObject = sub_1C941D4(gameObject, v64->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_57:
      v95 = sub_1C94314();
      sub_1C941C0(v95, 0);
    }
  }
  if ( !LODWORD(v64->max_length) )
LABEL_56:
    sub_1C942F8(gameObject);
  v64->m_Items[0] = v71;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v64->m_Items, (int32_t)v71, v65, v66, v67, v68, v69, v70);
  WarBoardPieceBaseComponent__SetButtonTweenTarget(this, v64, v72);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_26;
  gameObject = *(_QWORD *)(gameObject + 440);
  if ( !gameObject )
    goto LABEL_26;
  PieceDispPriority = WarBoardData__GetPieceDispPriority((WarBoardData_o *)gameObject, pieceData, 0);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v74);
  WarBoardPieceBaseComponent__UpdateUiByBuffChanged(this, v75);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_26;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)gameObject,
                               (System_String_o *)StringLiteral_18952/*"ef_dm_base"*/,
                               (const MethodInfo_3285CB0 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !(*v30)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v30);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0, 0) )
  {
    v77 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v78 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._41_GetEffectDisplayTransform.methodPtr)(
                                    this,
                                    this->klass->vtable._41_GetEffectDisplayTransform.method);
    if ( !(*v30)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v30);
    if ( UnityEngine_Object__op_Inequality(v78, 0, 0) )
      v77 = (UnityEngine_Transform_o *)v78;
    if ( !(*v30)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v30);
    v79 = UnityEngine_Object__Instantiate_object__52598436(
            CommonEffectAsset_object,
            v77,
            (const MethodInfo_32296A4 *)Method_UnityEngine_Object_Instantiate_GameObject____79133288);
    this->fields.effectDamageBaseObject = (struct UnityEngine_GameObject_o *)v79;
    p_effectDamageBaseObject = &this->fields.effectDamageBaseObject;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.effectDamageBaseObject,
      (int32_t)v79,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.effectDamageBaseObject, 0, 0) )
    {
      v87 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                      *p_effectDamageBaseObject,
                                      (System_String_o *)StringLiteral_23377/*"root_text/type01/dm_base"*/,
                                      0);
      if ( !(*v30)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v30);
      gameObject = UnityEngine_Object__op_Inequality(v87, 0, 0);
      if ( (gameObject & 1) != 0 )
      {
        if ( !v87 )
          goto LABEL_26;
        v88 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)v87,
                (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        this->fields.effectDamageBaseLabel = (struct UILabel_o *)v88;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields.effectDamageBaseLabel,
          (int32_t)v88,
          v89,
          v90,
          v91,
          v92,
          v93,
          v94);
      }
      gameObject = (__int64)*p_effectDamageBaseObject;
      if ( !*p_effectDamageBaseObject )
LABEL_26:
        sub_1C942F0(gameObject, v6);
      goto LABEL_30;
    }
  }
}


bool WarBoardPieceBaseComponent__IsModifyStatus(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  return 0;
}


void WarBoardPieceBaseComponent__LongTapIcon(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceBaseComponent__OnAfterAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x22
  WarBoardData_o *gameObject; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_object__o *v14; // x19
  Il2CppObject *Instance; // x0
  WarBoardData_o **v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  WarBoardPieceData_o *Piece_38535616; // x0
  WarBoardData_o **v24; // x23
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  __int64 v31; // x24
  WarBoardTaskBase_TaskCallback_o *v32; // x25
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  float32x2_t v50; // d9
  float v51; // s10
  float z; // s8
  float32x2_t v53; // d0 OVERLAPPED
  float32x2_t v54; // d9
  float v55; // s8
  float v56; // s10
  float32x2_t v57; // d9
  float v58; // s8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s10
  float v61; // s0
  unsigned __int64 v62; // d1
  float v63; // s0
  __int64 v64; // x24
  WarBoardTaskBase_TaskCallback_o *v65; // x25
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  struct WarBoardPieceData_o *v72; // x8
  UnityEngine_GameObject_o *v73; // x26
  float v74; // s8
  float v75; // s9
  float v76; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float v80; // s14
  WarBoardMovePerformance_o *v81; // x0
  WarBoardTaskBase_o *v82; // x25
  bool IsEnabledMovedAfterDefend; // w0
  System_Func_bool__o *v84; // x23
  __int64 v85; // x21
  System_Delegate_o **v86; // x22
  System_Delegate_o *v87; // x23
  WarBoardPieceBaseComponent___c_c *v88; // x0
  WarBoardTaskBase_TaskCallback_o *_9__65_3; // x24
  Il2CppObject *v90; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v91; // x0
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  System_Delegate_o *v98; // x0
  int32_t v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  System_Delegate_o *v105; // x8
  WarBoardTaskBase_TaskCallback_c *v106; // x1
  int32_t v107; // w2
  int32_t v108; // w3
  System_String_o *v109; // x4
  int32_t v110; // w5
  int64_t v111; // x6
  System_String_o *v112; // x7
  struct System_Object_array *v113; // x8
  _QWORD *v114; // x9
  __int64 v115; // x10
  Il2CppClass **v116; // x0
  unsigned __int64 v117; // [xsp+0h] [xbp-A0h]
  __int64 v118; // [xsp+0h] [xbp-A0h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v120; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v122; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v123; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4D2A02C & 1) == 0 )
  {
    sub_1C94098(&System_Func_bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C94098(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C94098(&Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__);
    sub_1C94098(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__);
    sub_1C94098(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__);
    sub_1C94098(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__);
    sub_1C94098(&WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo);
    sub_1C94098(&WarBoardPieceBaseComponent___c_TypeInfo);
    sub_1C94098(&WarBoardCallbackTask_TypeInfo);
    sub_1C94098(&WarBoardConditionalJumpTask_TypeInfo);
    sub_1C94098(&WarBoardMovePerformance_TypeInfo);
    byte_4D2A02C = 1;
  }
  v5 = sub_1C942E4(WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass65_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass65_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_60;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 52) = squareIndex;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v5 + 24) = Instance;
  v16 = (WarBoardData_o **)(v5 + 24);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)Instance, v17, v18, v19, v20, v21, v22);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_60;
  gameObject = *(WarBoardData_o **)(*(_QWORD *)(v5 + 24) + 440LL);
  if ( !gameObject )
    goto LABEL_60;
  Piece_38535616 = WarBoardData__GetPiece_38535616(gameObject, *(_DWORD *)(v5 + 52), 0);
  *(_QWORD *)(v5 + 16) = Piece_38535616;
  v24 = (WarBoardData_o **)(v5 + 16);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)Piece_38535616, v25, v26, v27, v28, v29, v30);
  v31 = sub_1C942E4(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v31, 0, 0);
  v32 = (WarBoardTaskBase_TaskCallback_o *)sub_1C942E4(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v32,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__,
    0);
  if ( !v31 )
    goto LABEL_60;
  *(_QWORD *)(v31 + 32) = v32;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v31 + 32), (int32_t)v32, v33, v34, v35, v36, v37, v38);
  if ( !v14 )
    goto LABEL_60;
  items = v14->fields._items;
  v46 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v14->fields._version;
  if ( !items )
    goto LABEL_60;
  size = v14->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v31,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &items->obj.klass + size;
    v14->fields._size = size + 1;
    v48[4] = (Il2CppClass *)v31;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v48 + 4), v31, v39, v40, v41, v42, v43, v44);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_60;
  gameObject = *v16;
  if ( !*v16 )
    goto LABEL_60;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0);
  gameObject = *(WarBoardData_o **)(v5 + 24);
  *(UnityEngine_Vector3_o *)(v5 + 40) = SquarePosition;
  if ( !gameObject )
    goto LABEL_60;
  *(UnityEngine_Vector3_o *)v53.n64_u64 = WarBoardManager__GetSquarePosition(
                                            (WarBoardManager_o *)gameObject,
                                            *(_DWORD *)(v5 + 52),
                                            0);
  v50.n64_u64[0] = *(unsigned __int64 *)(v5 + 40);
  v51 = *(float *)(v5 + 48);
  z = v120.fields.z;
  v53.n64_u32[1] = LODWORD(v120.fields.y);
  if ( !byte_4D25F1B )
  {
    v117 = v53.n64_u64[0];
    sub_1C94098(&System_Math_TypeInfo);
    v53.n64_u64[0] = v117;
    byte_4D25F1B = 1;
  }
  v54.n64_u64[0] = vsub_f32(v53, v50).n64_u64[0];
  v55 = z - v51;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v56 = vaddv_f32(vmul_f32(v54, v54)) + (float)(v55 * v55);
  if ( !byte_4D25F1C )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D25F1C = 1;
  }
  v120.fields.y = sqrtf(v56);
  v118 = *(_QWORD *)&v120.fields.y;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    *(_QWORD *)&v120.fields.y = v118;
  }
  if ( v120.fields.y <= 0.00001 )
  {
    if ( !byte_4D25F19 )
    {
      sub_1C94098(&UnityEngine_Vector3_TypeInfo);
      byte_4D25F19 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v57.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    v58 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v57.n64_u64[0] = vdiv_f32(v54, vdup_lane_s32(*(int32x2_t *)&v120.fields.y, 0)).n64_u64[0];
    v58 = v55 / v120.fields.y;
  }
  gameObject = *v24;
  if ( !*v24 )
    goto LABEL_60;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant((WarBoardPieceData_o *)gameObject, 0) )
    lengthOnAttack = this->fields.lengthOnEncount;
  v61 = *(float *)&v118 - lengthOnAttack;
  if ( (float)(*(float *)&v118 - lengthOnAttack) > 0.0 )
  {
    v62 = vadd_f32(vmul_n_f32(v57, v61), *(float32x2_t *)(v5 + 40)).n64_u64[0];
    v63 = (float)(v58 * v61) + *(float *)(v5 + 48);
    *(_QWORD *)(v5 + 40) = v62;
    *(float *)(v5 + 48) = v63;
  }
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_60;
  WarBoardPieceData__CreatePieceEventVals((WarBoardPieceData_o *)gameObject, 0);
  v64 = sub_1C942E4(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v64, 0, 0);
  v65 = (WarBoardTaskBase_TaskCallback_o *)sub_1C942E4(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v65,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__,
    0);
  if ( !v64 )
    goto LABEL_60;
  *(_QWORD *)(v64 + 32) = v65;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v64 + 32), (int32_t)v65, v66, v67, v68, v69, v70, v71);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v72 = this->fields.pieceData;
  if ( !v72 )
    goto LABEL_60;
  v73 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v5 + 24);
  if ( !gameObject )
    goto LABEL_60;
  v74 = *(float *)(v5 + 40);
  v75 = *(float *)(v5 + 44);
  v76 = *(float *)(v5 + 48);
  v121 = WarBoardManager__GetSquarePosition(
           (WarBoardManager_o *)gameObject,
           v72->fields._nowSquareIndex_k__BackingField,
           0);
  pixelPerSecond = this->fields.pixelPerSecond;
  x = v121.fields.x;
  y = v121.fields.y;
  v80 = v121.fields.z;
  v81 = (WarBoardMovePerformance_o *)sub_1C942E4(WarBoardMovePerformance_TypeInfo);
  v122.fields.x = v74;
  v122.fields.y = v75;
  v122.fields.z = v76;
  v123.fields.x = x;
  v123.fields.y = y;
  v123.fields.z = v80;
  v82 = (WarBoardTaskBase_o *)v81;
  WarBoardMovePerformance___ctor(v81, v73, v122, v123, pixelPerSecond, 0, 0);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_60;
  if ( WarBoardPieceData__IsEnabledMoveAfterAttack((WarBoardPieceData_o *)gameObject, 0) )
  {
    gameObject = *v24;
    if ( !*v24 )
      goto LABEL_60;
    IsEnabledMovedAfterDefend = WarBoardPieceData__IsEnabledMovedAfterDefend((WarBoardPieceData_o *)gameObject, 0);
  }
  else
  {
    IsEnabledMovedAfterDefend = 0;
  }
  *(_BYTE *)(v5 + 56) = IsEnabledMovedAfterDefend;
  v84 = (System_Func_bool__o *)sub_1C942E4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v84,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__,
    0);
  v85 = sub_1C942E4(WarBoardConditionalJumpTask_TypeInfo);
  WarBoardConditionalJumpTask___ctor((WarBoardConditionalJumpTask_o *)v85, v84, (WarBoardTaskBase_o *)v64, v82, 0);
  if ( !v85 )
LABEL_60:
    sub_1C942F0(gameObject, v7);
  v86 = (System_Delegate_o **)(v85 + 40);
  v87 = *(System_Delegate_o **)(v85 + 40);
  v88 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v88 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  _9__65_3 = v88->static_fields->__9__65_3;
  if ( !_9__65_3 )
  {
    if ( !v88->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v88);
      v88 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    v90 = (Il2CppObject *)v88->static_fields->__9;
    _9__65_3 = (WarBoardTaskBase_TaskCallback_o *)sub_1C942E4(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__65_3,
      v90,
      Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__,
      0);
    v91 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v91->__9__65_3 = _9__65_3;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v91->__9__65_3, (int32_t)_9__65_3, v92, v93, v94, v95, v96, v97);
  }
  v98 = System_Delegate__Combine(v87, (System_Delegate_o *)_9__65_3, 0);
  v105 = v98;
  if ( v98 )
  {
    v106 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v98->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v86 = v98;
      if ( (WarBoardTaskBase_TaskCallback_c *)v98->klass == v106 )
        goto LABEL_54;
    }
    sub_1C9468C(v98);
  }
  *v86 = v105;
LABEL_54:
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v85 + 40), (int32_t)v105, v99, v100, v101, v102, v103, v104);
  v113 = v14->fields._items;
  v114 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v14->fields._version;
  if ( !v113 )
    goto LABEL_60;
  v115 = v14->fields._size;
  if ( (unsigned int)v115 >= LODWORD(v113->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v85,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
  }
  else
  {
    v116 = &v113->obj.klass + v115;
    v14->fields._size = v115 + 1;
    v116[4] = (Il2CppClass *)v85;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v116 + 4), v85, v107, v108, v109, v110, v111, v112);
  }
  gameObject = *v16;
  if ( !*v16 )
    goto LABEL_60;
  WarBoardManager__AddTask_38721084(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v14,
    0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceBaseComponent__OnAfterWallAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x22
  WarBoardData_o *gameObject; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_object__o *v14; // x20
  Il2CppObject *Instance; // x0
  WarBoardData_o **v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  WarBoardWallData_o *Wall; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  __int64 v30; // x23
  WarBoardTaskBase_TaskCallback_o *v31; // x24
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  int32x2_t v49; // d3
  float32x2_t v50; // d9
  float v51; // s10
  float v52; // s2
  float v53; // s8
  unsigned __int32 v54; // s1
  float32x2_t v55; // d0 OVERLAPPED
  float32x2_t v56; // d9
  float v57; // s8
  float v58; // s10
  float32x2_t v59; // d0
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v62; // s2
  float v63; // s1
  __int64 v64; // x23
  WarBoardTaskBase_TaskCallback_o *v65; // x24
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  struct WarBoardPieceData_o *v72; // x8
  UnityEngine_GameObject_o *v73; // x25
  float v74; // s8
  float v75; // s9
  float v76; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float v80; // s14
  WarBoardMovePerformance_o *v81; // x0
  WarBoardTaskBase_o *v82; // x24
  System_Func_bool__o *v83; // x25
  WarBoardConditionalJumpTask_o *v84; // x19
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  Il2CppClass **v94; // x0
  unsigned __int64 v95; // [xsp+0h] [xbp-A0h]
  unsigned __int64 v96; // [xsp+0h] [xbp-A0h]
  unsigned __int32 v97; // [xsp+0h] [xbp-A0h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v101; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4D2A02E & 1) == 0 )
  {
    sub_1C94098(&System_Func_bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C94098(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C94098(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__);
    sub_1C94098(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__);
    sub_1C94098(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__);
    sub_1C94098(&WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo);
    sub_1C94098(&WarBoardCallbackTask_TypeInfo);
    sub_1C94098(&WarBoardConditionalJumpTask_TypeInfo);
    sub_1C94098(&WarBoardMovePerformance_TypeInfo);
    byte_4D2A02E = 1;
  }
  v5 = sub_1C942E4(WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass67_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass67_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_40;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 44) = squareIndex;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v5 + 16) = Instance;
  v16 = (WarBoardData_o **)(v5 + 16);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)Instance, v17, v18, v19, v20, v21, v22);
  if ( !*(_QWORD *)(v5 + 16) )
    goto LABEL_40;
  gameObject = *(WarBoardData_o **)(*(_QWORD *)(v5 + 16) + 440LL);
  if ( !gameObject )
    goto LABEL_40;
  Wall = WarBoardData__GetWall(gameObject, *(_DWORD *)(v5 + 44), 1, 0);
  *(_QWORD *)(v5 + 48) = Wall;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 48), (int32_t)Wall, v24, v25, v26, v27, v28, v29);
  v30 = sub_1C942E4(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v30, 0, 0);
  v31 = (WarBoardTaskBase_TaskCallback_o *)sub_1C942E4(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v31,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__,
    0);
  if ( !v30 )
    goto LABEL_40;
  *(_QWORD *)(v30 + 32) = v31;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v30 + 32), (int32_t)v31, v32, v33, v34, v35, v36, v37);
  if ( !v14 )
    goto LABEL_40;
  items = v14->fields._items;
  v45 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v14->fields._version;
  if ( !items )
    goto LABEL_40;
  size = v14->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v30,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = &items->obj.klass + size;
    v14->fields._size = size + 1;
    v47[4] = (Il2CppClass *)v30;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v47 + 4), v30, v38, v39, v40, v41, v42, v43);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_40;
  gameObject = *v16;
  if ( !*v16 )
    goto LABEL_40;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0);
  gameObject = *(WarBoardData_o **)(v5 + 16);
  *(UnityEngine_Vector3_o *)(v5 + 32) = SquarePosition;
  if ( !gameObject )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)v55.n64_u64 = WarBoardManager__GetSquarePosition(
                                            (WarBoardManager_o *)gameObject,
                                            *(_DWORD *)(v5 + 44),
                                            0);
  v50.n64_u64[0] = *(unsigned __int64 *)(v5 + 32);
  v51 = *(float *)(v5 + 40);
  v53 = v52;
  v55.n64_u32[1] = v54;
  if ( !byte_4D25F1B )
  {
    v95 = v55.n64_u64[0];
    sub_1C94098(&System_Math_TypeInfo);
    v55.n64_u64[0] = v95;
    byte_4D25F1B = 1;
  }
  v56.n64_u64[0] = vsub_f32(v55, v50).n64_u64[0];
  v57 = v53 - v51;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v58 = vaddv_f32(vmul_f32(v56, v56)) + (float)(v57 * v57);
  if ( !byte_4D25F1C )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D25F1C = 1;
  }
  v49.n64_f32[0] = sqrtf(v58);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    v96 = v49.n64_u64[0];
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v49.n64_u64[0] = v96;
  }
  if ( v49.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_4D25F19 )
    {
      v97 = v49.n64_u32[0];
      sub_1C94098(&UnityEngine_Vector3_TypeInfo);
      v49.n64_u32[0] = v97;
      byte_4D25F19 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v59.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    v59.n64_u64[0] = vdiv_f32(v56, vdup_lane_s32(v49, 0)).n64_u64[0];
    z = v57 / v49.n64_f32[0];
  }
  v62 = v49.n64_f32[0] - this->fields.lengthOnAttack;
  if ( v62 > 0.0 )
  {
    v63 = (float)(z * v62) + *(float *)(v5 + 40);
    *(float32x2_t *)(v5 + 32) = vadd_f32(vmul_n_f32(v59, v62), *(float32x2_t *)(v5 + 32));
    *(float *)(v5 + 40) = v63;
  }
  v64 = sub_1C942E4(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v64, 0, 0);
  v65 = (WarBoardTaskBase_TaskCallback_o *)sub_1C942E4(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v65,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__,
    0);
  if ( !v64 )
    goto LABEL_40;
  *(_QWORD *)(v64 + 32) = v65;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v64 + 32), (int32_t)v65, v66, v67, v68, v69, v70, v71);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v72 = this->fields.pieceData;
  if ( !v72 )
    goto LABEL_40;
  v73 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v5 + 16);
  if ( !gameObject )
    goto LABEL_40;
  v74 = *(float *)(v5 + 32);
  v75 = *(float *)(v5 + 36);
  v76 = *(float *)(v5 + 40);
  v99 = WarBoardManager__GetSquarePosition(
          (WarBoardManager_o *)gameObject,
          v72->fields._nowSquareIndex_k__BackingField,
          0);
  pixelPerSecond = this->fields.pixelPerSecond;
  x = v99.fields.x;
  y = v99.fields.y;
  v80 = v99.fields.z;
  v81 = (WarBoardMovePerformance_o *)sub_1C942E4(WarBoardMovePerformance_TypeInfo);
  v100.fields.x = v74;
  v100.fields.y = v75;
  v100.fields.z = v76;
  v101.fields.x = x;
  v101.fields.y = y;
  v101.fields.z = v80;
  v82 = (WarBoardTaskBase_o *)v81;
  WarBoardMovePerformance___ctor(v81, v73, v100, v101, pixelPerSecond, 0, 0);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_40;
  *(_BYTE *)(v5 + 56) = WarBoardPieceData__IsEnabledMoveAfterAttack((WarBoardPieceData_o *)gameObject, 0);
  v83 = (System_Func_bool__o *)sub_1C942E4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v83,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__,
    0);
  v84 = (WarBoardConditionalJumpTask_o *)sub_1C942E4(WarBoardConditionalJumpTask_TypeInfo);
  WarBoardConditionalJumpTask___ctor(v84, v83, (WarBoardTaskBase_o *)v64, v82, 0);
  v91 = v14->fields._items;
  v92 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v14->fields._version;
  if ( !v91 )
    goto LABEL_40;
  v93 = v14->fields._size;
  if ( (unsigned int)v93 >= LODWORD(v91->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v84,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
  }
  else
  {
    v94 = &v91->obj.klass + v93;
    v14->fields._size = v93 + 1;
    v94[4] = (Il2CppClass *)v84;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v94 + 4), (int32_t)v84, v85, v86, v87, v88, v89, v90);
  }
  gameObject = *v16;
  if ( !*v16 )
LABEL_40:
    sub_1C942F0(gameObject, v7);
  WarBoardManager__AddTask_38721084(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v14,
    0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceBaseComponent__OnAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x23
  __int64 Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 *v14; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceData_o *v16; // x22
  float x; // s11
  float y; // s9
  float z; // s10
  float v20; // s8
  float v21; // s12
  WarBoardSquareData_o *Square; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Collections_Generic_List_object__o *v29; // x20
  const MethodInfo *v30; // x2
  System_Int32_array *ParticipantVals; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v33; // x0
  __int64 v34; // x25
  WarBoardTaskBase_TaskCallback_c **v35; // x19
  System_Delegate_o **v36; // x26
  System_Delegate_o *v37; // x27
  WarBoardTaskBase_TaskCallback_o *v38; // x28
  System_Delegate_o *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  WarBoardPieceBaseComponent_c *v46; // x8
  WarBoardTaskBase_TaskCallback_c *v47; // x1
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  float v58; // s13
  float v59; // s14
  float v60; // s12
  float v61; // s8
  float v62; // s14
  float v63; // s13
  float v64; // s15
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s12
  float v67; // s0
  float v68; // s3
  float v69; // s1
  float v70; // s2
  float v71; // s0
  float v72; // s15
  float v73; // s8
  float v74; // s13
  UnityEngine_GameObject_o *gameObject; // x0
  float pixelPerSecond; // s12
  UnityEngine_GameObject_o *v77; // x26
  WarBoardMovePerformance_o *v78; // x0
  Il2CppObject *v79; // x25
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  System_Collections_Generic_List_object__o *v90; // x25
  System_Collections_Generic_List_WarBoardTaskBase__o *v91; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v92; // x0
  float lengthMoveAttack; // s0
  float v94; // s8
  float v95; // s12
  float v96; // s13
  UnityEngine_GameObject_o *v97; // x0
  float v98; // s14
  UnityEngine_GameObject_o *v99; // x21
  WarBoardMovePerformance_o *v100; // x0
  WarBoardTaskBase_o *v101; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *v102; // x21
  WarBoardMessageMaster_o *v103; // x23
  int32_t id; // w26
  System_Collections_Generic_List_object__o *v105; // x0
  int32_t breakPoint_k__BackingField; // w27
  int32_t v107; // w2
  bool v108; // w4
  WarBoardMessageMaster_o *v109; // x0
  int32_t v110; // w1
  int32_t v111; // w3
  __int64 v112; // x24
  int32_t v113; // w2
  int32_t v114; // w3
  System_String_o *v115; // x4
  int32_t v116; // w5
  int64_t v117; // x6
  System_String_o *v118; // x7
  Il2CppObject **v119; // x22
  float lengthOnEncount; // s0
  float v121; // s1
  float v122; // s12
  float v123; // s2
  float v124; // s0
  float v125; // s8
  float v126; // s14
  float v127; // s9
  float v128; // s11
  float v129; // s15
  float v130; // s13
  float v131; // s14
  float v132; // s10
  float v133; // s12
  float v134; // s13
  float v135; // s14
  float v136; // s15
  struct UnityEngine_Vector3_StaticFields *v137; // x8
  float v138; // s1
  _QWORD *monitor; // x8
  __int64 v140; // x8
  float v141; // s10
  float ZoomSize; // s0
  __int64 v143; // x8
  __int64 v144; // x8
  __int64 v145; // x8
  const MethodInfo_3997FB0 *v146; // x2
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  __int64 v148; // x8
  WarBoardManager_o *v149; // x23
  float v150; // s8
  float v151; // s10
  float encountCameraSize; // s0
  System_Nullable_float__o p_size; // x0
  System_Nullable_float__o v154; // x3
  int32_t v155; // w2
  int32_t v156; // w3
  System_String_o *v157; // x4
  int32_t v158; // w5
  int64_t v159; // x6
  System_String_o *v160; // x7
  struct System_Object_array *v161; // x8
  _QWORD *v162; // x9
  __int64 v163; // x10
  __int64 v164; // x1
  Il2CppClass **v165; // x0
  System_Collections_Generic_IEnumerable_T__o *v166; // x23
  int32_t v167; // w2
  int32_t v168; // w3
  System_String_o *v169; // x4
  int32_t v170; // w5
  int64_t v171; // x6
  System_String_o *v172; // x7
  WarBoardTaskBase_array *v173; // x23
  WarBoardManager_o *v174; // x24
  int v175; // s0 OVERLAPPED
  int32_t v178; // w2
  int32_t v179; // w3
  System_String_o *v180; // x4
  int32_t v181; // w5
  int64_t v182; // x6
  System_String_o *v183; // x7
  WarBoardTaskBase_o *v184; // x24
  int32_t v185; // w2
  int32_t v186; // w3
  System_String_o *v187; // x4
  int32_t v188; // w5
  int64_t v189; // x6
  System_String_o *v190; // x7
  WarBoardTaskBase_o *v191; // x24
  const MethodInfo *v192; // x2
  int32_t v193; // w2
  int32_t v194; // w3
  System_String_o *v195; // x4
  int32_t v196; // w5
  int64_t v197; // x6
  System_String_o *v198; // x7
  WarBoardTaskBase_o *v199; // x22
  WarBoardOrthostichySchedule_o *v200; // x22
  int32_t v201; // w2
  int32_t v202; // w3
  System_String_o *v203; // x4
  int32_t v204; // w5
  int64_t v205; // x6
  System_String_o *v206; // x7
  WarBoardParallelSchedule_o *v207; // x21
  int32_t v208; // w2
  int32_t v209; // w3
  System_String_o *v210; // x4
  int32_t v211; // w5
  int64_t v212; // x6
  System_String_o *v213; // x7
  struct System_Object_array *v214; // x8
  _QWORD *v215; // x9
  __int64 v216; // x10
  Il2CppClass **v217; // x0
  GrandQuestFolderBoardItem_o *v218; // x0
  int32_t v219; // w1
  int32_t v220; // w2
  int32_t v221; // w3
  System_String_o *v222; // x4
  int32_t v223; // w5
  int64_t v224; // x6
  System_String_o *v225; // x7
  WarBoardPieceBaseComponent___c_c *v226; // x8
  System_Action_o *_9__63_1; // x23
  Il2CppObject *v228; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v229; // x0
  int32_t v230; // w2
  int32_t v231; // w3
  System_String_o *v232; // x4
  int32_t v233; // w5
  int64_t v234; // x6
  System_String_o *v235; // x7
  struct UIWidget_o **p_breakPointParent; // x23
  System_Delegate_o *breakPointParent; // x25
  WarBoardTaskBase_TaskCallback_o *v238; // x26
  System_Delegate_o *v239; // x0
  int32_t v240; // w2
  int32_t v241; // w3
  System_String_o *v242; // x4
  int32_t v243; // w5
  int64_t v244; // x6
  System_String_o *v245; // x7
  WarBoardTaskBase_TaskCallback_c *v246; // x1
  int32_t v247; // w2
  int32_t v248; // w3
  System_String_o *v249; // x4
  int32_t v250; // w5
  int64_t v251; // x6
  System_String_o *v252; // x7
  struct System_Object_array *v253; // x8
  _QWORD *v254; // x9
  __int64 v255; // x10
  Il2CppClass **v256; // x0
  System_Delegate_o *v257; // x23
  Il2CppObject *v258; // x22
  WarBoardTaskBase_TaskCallback_o *v259; // x24
  WarBoardPieceBaseComponent_c *v260; // x0
  WarBoardTaskBase_TaskCallback_c *v261; // x1
  System_Delegate_o *v262; // x22
  WarBoardPieceBaseComponent___c_c *v263; // x0
  WarBoardTaskBase_TaskCallback_o *_9__63_4; // x23
  Il2CppObject *v265; // x24
  struct WarBoardPieceBaseComponent___c_StaticFields *v266; // x0
  int32_t v267; // w2
  int32_t v268; // w3
  System_String_o *v269; // x4
  int32_t v270; // w5
  int64_t v271; // x6
  System_String_o *v272; // x7
  WarBoardPieceBaseComponent_c *v273; // x0
  int32_t v274; // w2
  int32_t v275; // w3
  System_String_o *v276; // x4
  int32_t v277; // w5
  int64_t v278; // x6
  System_String_o *v279; // x7
  WarBoardTaskBase_TaskCallback_c *v280; // x1
  __int64 v281; // x0
  float v282; // [xsp+0h] [xbp-E0h]
  float v283; // [xsp+4h] [xbp-DCh]
  float v284; // [xsp+10h] [xbp-D0h]
  float v285; // [xsp+14h] [xbp-CCh]
  WarBoardManager_o **v286; // [xsp+18h] [xbp-C8h]
  float v287; // [xsp+24h] [xbp-BCh]
  System_Nullable_float__o size; // [xsp+28h] [xbp-B8h] BYREF
  System_Nullable_Vector3__o v289; // [xsp+30h] [xbp-B0h] BYREF
  System_Nullable_Vector3__o v290; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v292; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v293; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v294; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v295; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v296; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v297; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v298; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4D2A02A & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C94098(&Method_System_Nullable_Vector3___ctor__);
    sub_1C94098(&Method_System_Nullable_float___ctor__);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C94098(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__);
    sub_1C94098(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__);
    sub_1C94098(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__);
    sub_1C94098(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__);
    sub_1C94098(&WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo);
    sub_1C94098(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__);
    sub_1C94098(&WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo);
    sub_1C94098(&WarBoardPieceBaseComponent___c_TypeInfo);
    sub_1C94098(&WarBoardCallbackTask_TypeInfo);
    sub_1C94098(&WarBoardMovePerformance_TypeInfo);
    sub_1C94098(&WarBoardOrthostichySchedule_TypeInfo);
    sub_1C94098(&WarBoardParallelSchedule_TypeInfo);
    sub_1C94098(&WarBoardTaskBase___TypeInfo);
    sub_1C94098(&StringLiteral_8960/*"MasterDamage"*/);
    byte_4D2A02A = 1;
  }
  v5 = sub_1C942E4(WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass63_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass63_0_o *)v5, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v5 )
    goto LABEL_157;
  *(_QWORD *)(v5 + 24) = Instance;
  v14 = (__int64 *)(v5 + 24);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), Instance, v8, v9, v10, v11, v12, v13);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_157;
  Instance = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 440LL);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardData__GetPiece_38535616((WarBoardData_o *)Instance, squareIndex, 0);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_157;
  v16 = (WarBoardPieceData_o *)Instance;
  Instance = *v14;
  if ( !*v14 )
    goto LABEL_157;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0);
  Instance = *v14;
  if ( !*v14 )
    goto LABEL_157;
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v292 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, squareIndex, 0);
  v287 = v292.fields.x;
  if ( !*v14 )
    goto LABEL_157;
  Instance = *(_QWORD *)(*v14 + 440);
  if ( !Instance )
    goto LABEL_157;
  v20 = v292.fields.y;
  v21 = v292.fields.z;
  Square = WarBoardData__GetSquare((WarBoardData_o *)Instance, squareIndex, 0);
  *(_QWORD *)(v5 + 16) = Square;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)Square, v23, v24, v25, v26, v27, v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  ParticipantVals = WarBoardPieceBaseComponent__GetParticipantVals(this, v16, v30);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 42, ParticipantVals, 0);
  if ( !v29 )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    v29,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 43, ParticipantVals, 0);
  System_Collections_Generic_List_object___AddRange(
    v29,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v286 = (WarBoardManager_o **)(v5 + 24);
  v33 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 41, ParticipantVals, 0);
  System_Collections_Generic_List_object___AddRange(
    v29,
    (System_Collections_Generic_IEnumerable_T__o *)v33,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v34 = sub_1C942E4(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v34, 0, 0);
  if ( !v34 )
    goto LABEL_157;
  v35 = &WarBoardTaskBase_TaskCallback_TypeInfo;
  v36 = (System_Delegate_o **)(v34 + 32);
  v37 = *(System_Delegate_o **)(v34 + 32);
  v38 = (WarBoardTaskBase_TaskCallback_o *)sub_1C942E4(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v38,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__,
    0);
  v39 = System_Delegate__Combine(v37, (System_Delegate_o *)v38, 0);
  v46 = (WarBoardPieceBaseComponent_c *)v39;
  if ( v39 )
  {
    v47 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v39->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_152;
    *v36 = v39;
    if ( (WarBoardTaskBase_TaskCallback_c *)v39->klass != v47 )
      goto LABEL_152;
  }
  else
  {
    *v36 = 0;
  }
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v34 + 32), (int32_t)v39, v40, v41, v42, v43, v44, v45);
  items = v29->fields._items;
  v55 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v29->fields._version;
  if ( !items )
    goto LABEL_157;
  v56 = v29->fields._size;
  if ( (unsigned int)v56 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v29,
      (Il2CppObject *)v34,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    v57 = &items->obj.klass + v56;
    v29->fields._size = v56 + 1;
    v57[4] = (Il2CppClass *)v34;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v57 + 4), v34, v48, v49, v50, v51, v52, v53);
  }
  if ( !byte_4D25F1B )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D25F1B = 1;
  }
  v284 = v21;
  v285 = v20;
  v58 = v20 - y;
  v59 = v287 - x;
  v60 = v21 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4D25F1C )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D25F1C = 1;
  }
  Instance = (__int64)System_Math_TypeInfo;
  v61 = sqrtf((float)(v60 * v60) + (float)((float)(v59 * v59) + (float)(v58 * v58)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v61 <= 0.00001 )
  {
    if ( !byte_4D25F19 )
    {
      Instance = sub_1C94098(&UnityEngine_Vector3_TypeInfo);
      byte_4D25F19 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v62 = static_fields->zeroVector.fields.x;
    v63 = static_fields->zeroVector.fields.y;
    v64 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v62 = v59 / v61;
    v63 = v58 / v61;
    v64 = v60 / v61;
  }
  if ( !v16 )
    goto LABEL_157;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant(v16, 0) )
    lengthOnAttack = this->fields.lengthOnEncount;
  v67 = v61 - lengthOnAttack;
  if ( (float)(v61 - lengthOnAttack) > 0.0 )
  {
    v68 = v64;
    v283 = v63;
    v69 = v62 * v67;
    v70 = v63 * v67;
    v71 = v64 * v67;
    v72 = y;
    v73 = x;
    v282 = v68;
    x = x + v69;
    y = y + v70;
    v74 = z + v71;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    pixelPerSecond = this->fields.pixelPerSecond;
    v77 = gameObject;
    v78 = (WarBoardMovePerformance_o *)sub_1C942E4(WarBoardMovePerformance_TypeInfo);
    v293.fields.x = v73;
    v293.fields.y = v72;
    v293.fields.z = z;
    v297.fields.x = x;
    v297.fields.y = y;
    v297.fields.z = v74;
    v79 = (Il2CppObject *)v78;
    z = v74;
    WarBoardMovePerformance___ctor(v78, v77, v293, v297, pixelPerSecond, 5, 0);
    v86 = v29->fields._items;
    v87 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v29->fields._version;
    if ( !v86 )
      goto LABEL_157;
    v88 = v29->fields._size;
    if ( (unsigned int)v88 >= LODWORD(v86->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v29,
        v79,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    }
    else
    {
      v89 = &v86->obj.klass + v88;
      v29->fields._size = v88 + 1;
      v89[4] = (Il2CppClass *)v79;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v89 + 4), (int32_t)v79, v80, v81, v82, v83, v84, v85);
    }
    v63 = v283;
    v64 = v282;
  }
  v90 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v90,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 1, ParticipantVals, 0);
  if ( !v90 )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    v90,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v91 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 19, ParticipantVals, 0);
  System_Collections_Generic_List_object___AddRange(
    v90,
    (System_Collections_Generic_IEnumerable_T__o *)v91,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v92 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 39, ParticipantVals, 0);
  System_Collections_Generic_List_object___AddRange(
    v90,
    (System_Collections_Generic_IEnumerable_T__o *)v92,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !WarBoardPieceData__get_isMaster(v16, 0) )
  {
    v112 = sub_1C942E4(WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo);
    WarBoardPieceBaseComponent___c__DisplayClass63_1___ctor(
      (WarBoardPieceBaseComponent___c__DisplayClass63_1_o *)v112,
      0);
    if ( v112 )
    {
      *(_QWORD *)(v112 + 32) = v5;
      v119 = (Il2CppObject **)(v112 + 32);
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v112 + 32), v5, v113, v114, v115, v116, v117, v118);
      System_Collections_Generic_List_object___AddRange(
        v29,
        (System_Collections_Generic_IEnumerable_T__o *)v90,
        (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      lengthOnEncount = this->fields.lengthOnEncount;
      v121 = v62 * lengthOnEncount;
      v122 = v287 - (float)(v62 * lengthOnEncount);
      v123 = v63 * lengthOnEncount;
      v124 = v64 * lengthOnEncount;
      v125 = x + v121;
      v126 = v285 - v123;
      v127 = y + v123;
      v128 = z + v124;
      v129 = v284 - v124;
      if ( !byte_4D25F1C )
      {
        sub_1C94098(&System_Math_TypeInfo);
        byte_4D25F1C = 1;
      }
      v130 = v122 - v125;
      v131 = v126 - v127;
      v132 = v129 - v128;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v133 = sqrtf((float)(v132 * v132) + (float)((float)(v130 * v130) + (float)(v131 * v131)));
      if ( v133 <= 0.00001 )
      {
        if ( !byte_4D25F19 )
        {
          sub_1C94098(&UnityEngine_Vector3_TypeInfo);
          byte_4D25F19 = 1;
        }
        v137 = UnityEngine_Vector3_TypeInfo->static_fields;
        v134 = v137->zeroVector.fields.x;
        v135 = v137->zeroVector.fields.y;
        v136 = v137->zeroVector.fields.z;
      }
      else
      {
        v134 = v130 / v133;
        v135 = v131 / v133;
        v136 = v132 / v133;
      }
      if ( !byte_4D25F1B )
      {
        sub_1C94098(&System_Math_TypeInfo);
        byte_4D25F1B = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      Instance = ((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._35_GetIconLocalPosition.methodPtr)(
                   this,
                   this->klass->vtable._35_GetIconLocalPosition.method);
      v35 = (WarBoardTaskBase_TaskCallback_c **)(v5 + 24);
      if ( *v119 )
      {
        monitor = (*v119)[1].monitor;
        if ( monitor )
        {
          v140 = monitor[6];
          if ( v140 )
          {
            Instance = *(_QWORD *)(v140 + 80);
            if ( Instance )
            {
              v141 = v138;
              ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)Instance, 0);
              v143 = *(_QWORD *)(v112 + 32);
              *(float *)(v112 + 16) = ZoomSize;
              if ( v143 )
              {
                v144 = *(_QWORD *)(v143 + 24);
                if ( v144 )
                {
                  v145 = *(_QWORD *)(v144 + 48);
                  if ( v145 )
                  {
                    Instance = *(_QWORD *)(v145 + 72);
                    if ( Instance )
                    {
                      ScrlPos = MapScroll__GetScrlPos((MapScroll_o *)Instance, 0);
                      v148 = *(_QWORD *)(v112 + 32);
                      *(UnityEngine_Vector2_o *)(v112 + 20) = ScrlPos;
                      if ( v148 )
                      {
                        v149 = *(WarBoardManager_o **)(v148 + 24);
                        *(_QWORD *)&v290.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                        v150 = v125 + (float)((float)(v133 * v134) * 0.5);
                        v151 = (float)(v127 + (float)((float)(v133 * v135) * 0.5)) + v141;
                        *(_QWORD *)&v290.fields.hasValue = &v289;
                        v295.fields.x = v150;
                        v295.fields.y = v151;
                        v295.fields.z = v128 + (float)((float)(v133 * v136) * 0.5);
                        *(_QWORD *)&v289.fields.hasValue = 0;
                        *(_QWORD *)&v289.fields.value.fields.y = 0;
                        System_Nullable_Vector3____ctor(v290, v295, v146);
                        encountCameraSize = this->fields.encountCameraSize;
                        p_size = (System_Nullable_float__o)&size;
                        size = 0;
                        System_Nullable_float____ctor(
                          p_size,
                          encountCameraSize,
                          (const MethodInfo_3995AEC *)Method_System_Nullable_float___ctor__);
                        if ( v149 )
                        {
                          v154 = size;
                          Instance = (__int64)WarBoardManager__GetCameraPerformanceTask(v149, v289, v154, 1, 0, 1, 0);
                          v161 = v29->fields._items;
                          v162 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                          ++v29->fields._version;
                          if ( v161 )
                          {
                            v163 = v29->fields._size;
                            v164 = Instance;
                            if ( (unsigned int)v163 >= LODWORD(v161->max_length) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v29,
                                (Il2CppObject *)Instance,
                                *(const MethodInfo_386AE34 **)(*(_QWORD *)(v162[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v165 = &v161->obj.klass + v163;
                              v29->fields._size = v163 + 1;
                              v165[4] = (Il2CppClass *)v164;
                              sub_1C9403C(
                                (GrandQuestFolderBoardItem_o *)(v165 + 4),
                                v164,
                                v155,
                                v156,
                                v157,
                                v158,
                                v159,
                                v160);
                            }
                            if ( *v119 )
                            {
                              Instance = (__int64)(*v119)[1].monitor;
                              if ( Instance )
                              {
                                v296.fields.x = v150;
                                v296.fields.y = v151;
                                v296.fields.z = v128 + (float)((float)(v133 * v136) * 0.5);
                                Instance = (__int64)WarBoardManager__CreateEncountkEffectTask(
                                                      (WarBoardManager_o *)Instance,
                                                      v296,
                                                      1,
                                                      0);
                                v226 = WarBoardPieceBaseComponent___c_TypeInfo;
                                this = (WarBoardPieceBaseComponent_o *)Instance;
                                if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
                                  v226 = WarBoardPieceBaseComponent___c_TypeInfo;
                                }
                                _9__63_1 = v226->static_fields->__9__63_1;
                                if ( !_9__63_1 )
                                {
                                  if ( !v226->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(v226);
                                    v226 = WarBoardPieceBaseComponent___c_TypeInfo;
                                  }
                                  v228 = (Il2CppObject *)v226->static_fields->__9;
                                  _9__63_1 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    _9__63_1,
                                    v228,
                                    Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__,
                                    0);
                                  v229 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
                                  v229->__9__63_1 = _9__63_1;
                                  sub_1C9403C(
                                    (GrandQuestFolderBoardItem_o *)&v229->__9__63_1,
                                    (int32_t)_9__63_1,
                                    v230,
                                    v231,
                                    v232,
                                    v233,
                                    v234,
                                    v235);
                                }
                                if ( this )
                                {
                                  this->fields.currentActionPointLabel = (struct UILabel_o *)_9__63_1;
                                  sub_1C9403C(
                                    (GrandQuestFolderBoardItem_o *)&this->fields.currentActionPointLabel,
                                    (int32_t)_9__63_1,
                                    v220,
                                    v221,
                                    v222,
                                    v223,
                                    v224,
                                    v225);
                                  p_breakPointParent = &this->fields.breakPointParent;
                                  breakPointParent = (System_Delegate_o *)this->fields.breakPointParent;
                                  v238 = (WarBoardTaskBase_TaskCallback_o *)sub_1C942E4(WarBoardTaskBase_TaskCallback_TypeInfo);
                                  WarBoardTaskBase_TaskCallback___ctor(
                                    v238,
                                    (Il2CppObject *)v112,
                                    Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__,
                                    0);
                                  v239 = System_Delegate__Combine(breakPointParent, (System_Delegate_o *)v238, 0);
                                  v46 = (WarBoardPieceBaseComponent_c *)v239;
                                  if ( v239 )
                                  {
                                    v246 = WarBoardTaskBase_TaskCallback_TypeInfo;
                                    if ( (WarBoardTaskBase_TaskCallback_c *)v239->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
                                      goto LABEL_152;
                                    *p_breakPointParent = (struct UIWidget_o *)v239;
                                    if ( (WarBoardTaskBase_TaskCallback_c *)v239->klass != v246 )
                                      goto LABEL_152;
                                  }
                                  else
                                  {
                                    *p_breakPointParent = 0;
                                  }
                                  sub_1C9403C(
                                    (GrandQuestFolderBoardItem_o *)&this->fields.breakPointParent,
                                    (int32_t)v239,
                                    v240,
                                    v241,
                                    v242,
                                    v243,
                                    v244,
                                    v245);
                                  v253 = v29->fields._items;
                                  v254 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                                  ++v29->fields._version;
                                  if ( v253 )
                                  {
                                    v255 = v29->fields._size;
                                    if ( (unsigned int)v255 >= LODWORD(v253->max_length) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        v29,
                                        (Il2CppObject *)this,
                                        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v254[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v256 = &v253->obj.klass + v255;
                                      v29->fields._size = v255 + 1;
                                      v256[4] = (Il2CppClass *)this;
                                      sub_1C9403C(
                                        (GrandQuestFolderBoardItem_o *)(v256 + 4),
                                        (int32_t)this,
                                        v247,
                                        v248,
                                        v249,
                                        v250,
                                        v251,
                                        v252);
                                    }
                                    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                                          v29,
                                                          0,
                                                          (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
                                    if ( Instance )
                                    {
                                      this = (WarBoardPieceBaseComponent_o *)(Instance + 32);
                                      v257 = *(System_Delegate_o **)(Instance + 32);
                                      v258 = *v119;
                                      v259 = (WarBoardTaskBase_TaskCallback_o *)sub_1C942E4(WarBoardTaskBase_TaskCallback_TypeInfo);
                                      WarBoardTaskBase_TaskCallback___ctor(
                                        v259,
                                        v258,
                                        Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__,
                                        0);
                                      v260 = (WarBoardPieceBaseComponent_c *)System_Delegate__Combine(
                                                                               v257,
                                                                               (System_Delegate_o *)v259,
                                                                               0);
                                      v46 = v260;
                                      if ( v260 )
                                      {
                                        v261 = WarBoardTaskBase_TaskCallback_TypeInfo;
                                        if ( v260->_1.image != WarBoardTaskBase_TaskCallback_TypeInfo )
                                          goto LABEL_152;
                                        this->klass = v260;
                                        if ( v260->_1.image != v261 )
                                          goto LABEL_152;
                                      }
                                      else
                                      {
                                        this->klass = 0;
                                      }
                                      v218 = (GrandQuestFolderBoardItem_o *)this;
                                      v219 = (int)v46;
                                      goto LABEL_140;
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
LABEL_157:
    sub_1C942F0(Instance, v7);
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v94 = x + (float)(v62 * lengthMoveAttack);
  v95 = y + (float)(v63 * lengthMoveAttack);
  v96 = z + (float)(v64 * lengthMoveAttack);
  v97 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v98 = this->fields.pixelPerSecond;
  v99 = v97;
  v100 = (WarBoardMovePerformance_o *)sub_1C942E4(WarBoardMovePerformance_TypeInfo);
  v294.fields.x = v94;
  v294.fields.y = v95;
  v294.fields.z = v96;
  v298.fields.x = x;
  v298.fields.y = y;
  v298.fields.z = z;
  v101 = (WarBoardTaskBase_o *)v100;
  WarBoardMovePerformance___ctor(v100, v99, v294, v298, v98, 4, 0);
  v102 = (System_Collections_Generic_List_WarBoardTaskBase__o *)WarBoardPieceData__DecrementBreakPointPerformance(
                                                                  v16,
                                                                  0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  v35 = (WarBoardTaskBase_TaskCallback_c **)(v5 + 24);
  if ( !*v286 )
    goto LABEL_157;
  v103 = (WarBoardMessageMaster_o *)Instance;
  Instance = (__int64)(*v286)->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_157;
  id = WarBoardData__get_id((WarBoardData_o *)Instance, 0);
  v105 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v105,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  breakPoint_k__BackingField = v16->fields._breakPoint_k__BackingField;
  Instance = WarBoardPieceData__get_isPlayerMaster(v16, 0);
  if ( !v103 )
    goto LABEL_157;
  if ( (Instance & 1) != 0 )
  {
    v107 = 11;
    v108 = 1;
    v109 = v103;
    v110 = id;
    v111 = breakPoint_k__BackingField;
  }
  else
  {
    v107 = 9;
    v109 = v103;
    v110 = id;
    v111 = breakPoint_k__BackingField;
    v108 = 0;
  }
  Instance = (__int64)WarBoardMessageMaster__GetMessageTasks(v109, v110, v107, v111, v108, 0);
  v166 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( !Instance )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Instance,
    (System_Collections_Generic_IEnumerable_T__o *)v90,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v166,
         (const MethodInfo_31A7F44 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_object___AddRange(
      v29,
      v166,
      (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = sub_1C94140(WarBoardTaskBase___TypeInfo, 5);
  if ( !Instance )
    goto LABEL_157;
  v173 = (WarBoardTaskBase_array *)Instance;
  if ( v101 )
  {
    Instance = sub_1C941D4(v101, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
    if ( !Instance )
      goto LABEL_159;
  }
  if ( !LODWORD(v173->max_length) )
    goto LABEL_158;
  v173->m_Items[0] = v101;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v173->m_Items, (int32_t)v101, v167, v168, v169, v170, v171, v172);
  Instance = (__int64)v16->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_157;
  v174 = *v286;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 856LL))(
               Instance,
               *(_QWORD *)(*(_QWORD *)Instance + 864LL));
  if ( !v174 )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__CreateAttackEffectTask(v174, *(UnityEngine_Vector3_o *)&v175, 0, 0);
  v184 = (WarBoardTaskBase_o *)Instance;
  if ( Instance )
  {
    Instance = sub_1C941D4(Instance, v173->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( LODWORD(v173->max_length) <= 1 )
    goto LABEL_158;
  v173->m_Items[1] = v184;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v173->m_Items[1], (int32_t)v184, v178, v179, v180, v181, v182, v183);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0);
  v191 = (WarBoardTaskBase_o *)Instance;
  if ( Instance )
  {
    Instance = sub_1C941D4(Instance, v173->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( LODWORD(v173->max_length) <= 2 )
    goto LABEL_158;
  v173->m_Items[2] = v191;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v173->m_Items[2], (int32_t)v191, v185, v186, v187, v188, v189, v190);
  Instance = (__int64)v16->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)Instance,
                        (System_String_o *)StringLiteral_8960/*"MasterDamage"*/,
                        v192);
  v199 = (WarBoardTaskBase_o *)Instance;
  if ( Instance )
  {
    Instance = sub_1C941D4(Instance, v173->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( LODWORD(v173->max_length) <= 3 )
    goto LABEL_158;
  v173->m_Items[3] = v199;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v173->m_Items[3], (int32_t)v199, v193, v194, v195, v196, v197, v198);
  v200 = (WarBoardOrthostichySchedule_o *)sub_1C942E4(WarBoardOrthostichySchedule_TypeInfo);
  WarBoardOrthostichySchedule___ctor_38922360(v200, v102, 0);
  if ( v200 )
  {
    Instance = sub_1C941D4(v200, v173->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_159:
      v281 = sub_1C94314();
      sub_1C941C0(v281, 0);
    }
  }
  if ( LODWORD(v173->max_length) <= 4 )
LABEL_158:
    sub_1C942F8(Instance);
  v173->m_Items[4] = (WarBoardTaskBase_o *)v200;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v173->m_Items[4], (int32_t)v200, v201, v202, v203, v204, v205, v206);
  v207 = (WarBoardParallelSchedule_o *)sub_1C942E4(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor(v207, v173, 0);
  v214 = v29->fields._items;
  v215 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v29->fields._version;
  if ( !v214 )
    goto LABEL_157;
  v216 = v29->fields._size;
  if ( (unsigned int)v216 >= LODWORD(v214->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v29,
      (Il2CppObject *)v207,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v215[4] + 192LL) + 112LL));
    goto LABEL_141;
  }
  v217 = &v214->obj.klass + v216;
  v29->fields._size = v216 + 1;
  v217[4] = (Il2CppClass *)v207;
  v218 = (GrandQuestFolderBoardItem_o *)(v217 + 4);
  v219 = (int)v207;
LABEL_140:
  sub_1C9403C(v218, v219, v208, v209, v210, v211, v212, v213);
LABEL_141:
  if ( v29->fields._size < 1 )
    return;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                        v29,
                        0,
                        (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
  if ( !Instance )
    goto LABEL_157;
  this = (WarBoardPieceBaseComponent_o *)(Instance + 32);
  v262 = *(System_Delegate_o **)(Instance + 32);
  v263 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v263 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  _9__63_4 = v263->static_fields->__9__63_4;
  if ( !_9__63_4 )
  {
    if ( !v263->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v263);
      v263 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    v265 = (Il2CppObject *)v263->static_fields->__9;
    _9__63_4 = (WarBoardTaskBase_TaskCallback_o *)sub_1C942E4(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(_9__63_4, v265, Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__, 0);
    v266 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v266->__9__63_4 = _9__63_4;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v266->__9__63_4, (int32_t)_9__63_4, v267, v268, v269, v270, v271, v272);
  }
  v273 = (WarBoardPieceBaseComponent_c *)System_Delegate__Combine(v262, (System_Delegate_o *)_9__63_4, 0);
  v46 = v273;
  if ( !v273 )
    goto LABEL_153;
  v280 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( v273->_1.image != WarBoardTaskBase_TaskCallback_TypeInfo || (this->klass = v273, v273->_1.image != v280) )
  {
LABEL_152:
    sub_1C9468C(v46);
LABEL_153:
    this->klass = v46;
  }
  sub_1C9403C((GrandQuestFolderBoardItem_o *)this, (int32_t)v46, v274, v275, v276, v277, v278, v279);
  Instance = (__int64)*v35;
  if ( !*v35 )
    goto LABEL_157;
  WarBoardManager__AddTask_38721084(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v29,
    0);
}


void WarBoardPieceBaseComponent__OnAttackResume(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v6; // x1
  WarBoardManager_o *v7; // x22
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceData_o *v9; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  float v13; // s11
  float v14; // s12
  float v15; // s13
  float v16; // s8
  float v17; // s15
  float v18; // s14
  float v19; // s11
  float v20; // s12
  float v21; // s13
  float v22; // s14
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s8
  WarBoardControlUiDataComponent_c *v25; // x0
  float v26; // [xsp+4Ch] [xbp-24h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2A02B & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4D2A02B = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v7 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_27;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_38535616(Instance, squareIndex, 0);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_27;
  v9 = (WarBoardPieceData_o *)Instance;
  SquarePosition = WarBoardManager__GetSquarePosition(v7, pieceData->fields._nowSquareIndex_k__BackingField, 0);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v28 = WarBoardManager__GetSquarePosition(v7, squareIndex, 0);
  v13 = v28.fields.x;
  v14 = v28.fields.y;
  v15 = v28.fields.z;
  if ( !byte_4D25F1B )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D25F1B = 1;
  }
  v26 = x;
  v16 = v13 - x;
  v17 = v14 - y;
  v18 = v15 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4D25F1C )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D25F1C = 1;
  }
  Instance = (WarBoardData_o *)System_Math_TypeInfo;
  v19 = sqrtf((float)(v18 * v18) + (float)((float)(v16 * v16) + (float)(v17 * v17)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v19 <= 0.00001 )
  {
    if ( !byte_4D25F19 )
    {
      Instance = (WarBoardData_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
      byte_4D25F19 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v20 = static_fields->zeroVector.fields.x;
    v21 = static_fields->zeroVector.fields.y;
    v22 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v20 = v16 / v19;
    v21 = v17 / v19;
    v22 = v18 / v19;
  }
  if ( !v9 )
    goto LABEL_27;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant(v9, 0) )
    lengthOnAttack = this->fields.lengthOnEncount;
  Instance = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance
    || (Instance = (WarBoardData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0)) == 0 )
  {
LABEL_27:
    sub_1C942F0(Instance, v6);
  }
  v29.fields.x = v26 + (float)(v20 * (float)(v19 - lengthOnAttack));
  v29.fields.y = y + (float)(v21 * (float)(v19 - lengthOnAttack));
  v29.fields.z = z + (float)(v22 * (float)(v19 - lengthOnAttack));
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v29, 0);
  v25 = WarBoardControlUiDataComponent_TypeInfo;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__SetUiDataOnBattleAll((const MethodInfo *)v25);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceBaseComponent__OnBreak(
        WarBoardPieceBaseComponent_o *this,
        int32_t oldBreakPoint,
        System_Nullable_float__o cameraSize,
        WarBoardManager_TaskList_o *taskList,
        int32_t dummyPoint,
        WarBoardTaskBase_TaskCallback_o *startCallback,
        bool cameraMove,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *v14; // x22
  Il2CppObject *Instance; // x25
  const MethodInfo_3997FB0 *v16; // x2
  System_Nullable_float__o v17; // x3
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  WarBoardPieceBaseComponent_o *v27; // x1
  Il2CppClass **v28; // x0
  WarBoardTaskBase_array *v29; // x26
  Il2CppObject *v30; // x27
  const MethodInfo_3997FB0 *v31; // x2
  System_Nullable_float__o v32; // x3
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  WarBoardPieceBaseComponent_o *v39; // x24
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v41; // x24
  struct WarBoardBreakPointComponent_array *breakPoints; // x10
  __int64 v43; // x0
  System_Nullable_Vector3__o v44; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v45; // 0:x0.16
  System_Nullable_Vector3__o v46; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  v14 = this;
  if ( (byte_4D2A032 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C94098(&Method_System_Nullable_Vector3___ctor__);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardPieceBaseComponent_o *)sub_1C94098(&WarBoardTaskBase___TypeInfo);
    byte_4D2A032 = 1;
  }
  if ( cameraMove )
  {
    this = (WarBoardPieceBaseComponent_o *)v14->fields.pieceData;
    if ( !this )
      goto LABEL_32;
    this = (WarBoardPieceBaseComponent_o *)WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)this, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( taskList )
      {
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0);
        if ( this )
        {
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
          *(_QWORD *)&v45.fields.hasValue = &v44;
          *(_QWORD *)&v44.fields.hasValue = 0;
          *(_QWORD *)&v44.fields.value.fields.y = 0;
          *(_QWORD *)&v45.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v45, localPosition, v16);
          if ( Instance )
          {
            v17 = cameraSize;
            this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                     (WarBoardManager_o *)Instance,
                                                     v44,
                                                     v17,
                                                     1,
                                                     0,
                                                     1,
                                                     0);
            items = taskList->fields._items;
            v25 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
            ++taskList->fields._version;
            if ( items )
            {
              size = taskList->fields._size;
              v27 = this;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)taskList,
                  (Il2CppObject *)this,
                  *(const MethodInfo_386AE34 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
              }
              else
              {
                v28 = &items->obj.klass + size;
                taskList->fields._size = size + 1;
                v28[4] = (Il2CppClass *)v27;
                sub_1C9403C((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)v27, v18, v19, v20, v21, v22, v23);
              }
              goto LABEL_21;
            }
          }
        }
      }
      else
      {
        v29 = (WarBoardTaskBase_array *)sub_1C94140(WarBoardTaskBase___TypeInfo, 1);
        v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0);
        if ( this )
        {
          v48 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
          *(_QWORD *)&v46.fields.hasValue = &v44;
          v44 = (System_Nullable_Vector3__o)0LL;
          *(_QWORD *)&v46.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v46, v48, v31);
          if ( v30 )
          {
            v32 = cameraSize;
            this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                     (WarBoardManager_o *)v30,
                                                     v44,
                                                     v32,
                                                     1,
                                                     0,
                                                     1,
                                                     0);
            if ( v29 )
            {
              v39 = this;
              if ( this )
              {
                this = (WarBoardPieceBaseComponent_o *)sub_1C941D4(this, v29->obj.klass->_1.element_class);
                if ( !this )
                {
                  v43 = sub_1C94314();
                  sub_1C941C0(v43, 0);
                }
              }
              if ( !LODWORD(v29->max_length) )
LABEL_34:
                sub_1C942F8(this);
              v29->m_Items[0] = (WarBoardTaskBase_o *)v39;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)v29->m_Items, (int32_t)v39, v33, v34, v35, v36, v37, v38);
              if ( Instance )
              {
                WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v29, 0);
                goto LABEL_21;
              }
            }
          }
        }
      }
LABEL_32:
      sub_1C942F0(this, *(_QWORD *)&oldBreakPoint);
    }
  }
LABEL_21:
  pieceData = v14->fields.pieceData;
  if ( !pieceData )
    goto LABEL_32;
  v41 = 0;
  if ( dummyPoint < 0 )
    dummyPoint = pieceData->fields._breakPoint_k__BackingField;
  while ( (int)v41 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v14->fields.breakPoints;
    if ( !breakPoints )
      goto LABEL_32;
    if ( (unsigned int)v41 >= LODWORD(breakPoints->max_length) )
      goto LABEL_34;
    this = (WarBoardPieceBaseComponent_o *)breakPoints->m_Items[v41];
    if ( this )
    {
      if ( (int)v41 >= oldBreakPoint || dummyPoint > (int)v41 )
      {
        WarBoardBreakPointComponent__SetActive(
          (WarBoardBreakPointComponent_o *)this,
          dummyPoint > (int)v41,
          0,
          (const MethodInfo *)taskList);
      }
      else
      {
        WarBoardBreakPointComponent__OnBreak(
          (WarBoardBreakPointComponent_o *)this,
          (System_Collections_Generic_List_WarBoardTaskBase__o *)taskList,
          startCallback,
          (const MethodInfo *)taskList);
        startCallback = 0;
      }
      pieceData = v14->fields.pieceData;
      ++v41;
      if ( pieceData )
        continue;
    }
    goto LABEL_32;
  }
}


void WarBoardPieceBaseComponent__OnDamage(
        WarBoardPieceBaseComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


void WarBoardPieceBaseComponent__OnDead(
        WarBoardPieceBaseComponent_o *this,
        System_Nullable_float__o cameraSize,
        WarBoardManager_TaskList_o *taskList,
        bool cameraMove,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C942F0(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void WarBoardPieceBaseComponent__OnDeselect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  int32_t dispPriotiry; // w20
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1
  int v6; // w8
  const MethodInfo *v7; // x2

  if ( (byte_4D2A027 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2A027 = 1;
  }
  dispPriotiry = this->fields.dispPriotiry;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_1C942F0(Instance, v5);
  v6 = dispPriotiry - WarBoardData__GetPieceMaxDispPriotiry(Instance, 0);
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * v6, v7);
}


void WarBoardPieceBaseComponent__OnGuts(
        WarBoardPieceBaseComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


void WarBoardPieceBaseComponent__OnInvincible(
        WarBoardPieceBaseComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


void WarBoardPieceBaseComponent__OnMapDamage(
        WarBoardPieceBaseComponent_o *this,
        int32_t damage,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


void WarBoardPieceBaseComponent__OnMapGainHP(
        WarBoardPieceBaseComponent_o *this,
        int32_t oldHp,
        int32_t gainHp,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


void WarBoardPieceBaseComponent__OnMove(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardTaskBase_TaskCallback_o *v3; // x29
  WarBoardTaskBase_TaskCallback_c **v4; // x22
  __int64 v6; // x19
  WarBoardPieceData_o *Instance; // x0
  WarBoardPieceData_o *v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  WarBoardPieceData_o **v15; // x20
  WarBoardPieceData_o *Piece_38535616; // x0
  WarBoardPieceData_o **v17; // x23
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 v24; // x8
  WarBoardSquareData_o *Square; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  __int64 v32; // x25
  System_Collections_Generic_List_object__o *v33; // x24
  System_Delegate_o *p_EndCallback; // x26
  WarBoardTaskBase_TaskCallback_o *v35; // x27
  System_Delegate_o *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_Delegate_c *v43; // x8
  WarBoardTaskBase_TaskCallback_c *v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t groupId_k__BackingField; // w9
  __int64 v53; // x29
  struct WarBoardPieceData_o *v54; // x8
  UnityEngine_GameObject_o *v55; // x26
  float x; // s8
  float y; // s9
  float z; // s10
  float pixelPerSecond; // s13
  float v60; // s11
  float v61; // s12
  float v62; // s14
  WarBoardMovePerformance_o *v63; // x0
  WarBoardMovePerformance_o *v64; // x27
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  WarBoardTaskBase_array *v71; // x26
  UnityEngine_GameObject_o *v72; // x27
  struct WarBoardPieceData_o *v73; // x8
  float v74; // s8
  float v75; // s9
  float v76; // s10
  float v77; // s13
  float v78; // s11
  float v79; // s12
  float v80; // s14
  WarBoardMovePerformance_o *v81; // x0
  WarBoardTaskBase_o *v82; // x28
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  System_Delegate_o *v95; // x27
  WarBoardTaskBase_TaskCallback_o *v96; // x28
  System_Delegate_o *v97; // x0
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  WarBoardTaskBase_TaskCallback_c *v104; // x1
  System_Delegate_o *EndCallback; // x28
  System_Delegate_o *v106; // x0
  int32_t v107; // w2
  int32_t v108; // w3
  System_String_o *v109; // x4
  int32_t v110; // w5
  int64_t v111; // x6
  System_String_o *v112; // x7
  WarBoardTaskBase_TaskCallback_c *v113; // x1
  int32_t v114; // w2
  int32_t v115; // w3
  System_String_o *v116; // x4
  int32_t v117; // w5
  int64_t v118; // x6
  System_String_o *v119; // x7
  struct System_Object_array *items; // x8
  _QWORD *v121; // x9
  __int64 size; // x10
  Il2CppClass **v123; // x0
  struct WarBoardPieceData_o *v124; // x8
  int32_t v125; // w2
  int32_t v126; // w3
  System_String_o *v127; // x4
  int32_t v128; // w5
  int64_t v129; // x6
  System_String_o *v130; // x7
  struct System_Object_array *v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  Il2CppClass **v134; // x0
  int32_t v135; // w2
  int32_t v136; // w3
  System_String_o *v137; // x4
  int32_t v138; // w5
  int64_t v139; // x6
  System_String_o *v140; // x7
  struct System_Object_array *v141; // x8
  _QWORD *v142; // x9
  __int64 v143; // x10
  Il2CppClass **v144; // x0
  System_Collections_Generic_List_object__o *v145; // x22
  System_Int32_array *PieceEventVals; // x0
  int32_t v147; // w2
  int32_t v148; // w3
  System_String_o *v149; // x4
  int32_t v150; // w5
  int64_t v151; // x6
  System_String_o *v152; // x7
  System_Int32_array *v153; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v155; // x0
  WarBoardManager_o *v156; // x20
  WarBoardTaskBase_array *v157; // x21
  __int64 v158; // x22
  WarBoardTaskBase_TaskCallback_o *v159; // x23
  int32_t v160; // w2
  int32_t v161; // w3
  System_String_o *v162; // x4
  int32_t v163; // w5
  int64_t v164; // x6
  System_String_o *v165; // x7
  int32_t v166; // w2
  int32_t v167; // w3
  System_String_o *v168; // x4
  int32_t v169; // w5
  int64_t v170; // x6
  System_String_o *v171; // x7
  __int64 v172; // x0
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v174; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v175; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v176; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v177; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v178; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v179; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v180; // 0:s3.4,4:s4.4,8:s5.4

  LODWORD(v4) = squareIndex;
  if ( (byte_4D2A028 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C94098(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C94098(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__);
    sub_1C94098(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__);
    sub_1C94098(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__);
    sub_1C94098(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__);
    sub_1C94098(&WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo);
    sub_1C94098(&WarBoardCallbackTask_TypeInfo);
    sub_1C94098(&WarBoardMovePerformance_TypeInfo);
    sub_1C94098(&WarBoardParallelSchedule_TypeInfo);
    sub_1C94098(&WarBoardTaskBase___TypeInfo);
    byte_4D2A028 = 1;
  }
  v6 = sub_1C942E4(WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass61_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass61_0_o *)v6, 0);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v6 )
    goto LABEL_83;
  *(_QWORD *)(v6 + 48) = Instance;
  v15 = (WarBoardPieceData_o **)(v6 + 48);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v6 + 48), (int32_t)Instance, v9, v10, v11, v12, v13, v14);
  if ( !*(_QWORD *)(v6 + 48) )
    goto LABEL_83;
  Instance = *(WarBoardPieceData_o **)(*(_QWORD *)(v6 + 48) + 440LL);
  if ( !Instance )
    goto LABEL_83;
  Piece_38535616 = WarBoardData__GetPiece_38535616((WarBoardData_o *)Instance, (int32_t)v4, 0);
  *(_QWORD *)(v6 + 40) = Piece_38535616;
  v17 = (WarBoardPieceData_o **)(v6 + 40);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v6 + 40), (int32_t)Piece_38535616, v18, v19, v20, v21, v22, v23);
  v24 = *(_QWORD *)(v6 + 48);
  if ( !v24 )
    goto LABEL_83;
  Instance = *(WarBoardPieceData_o **)(v24 + 440);
  if ( !Instance )
    goto LABEL_83;
  Square = WarBoardData__GetSquare((WarBoardData_o *)Instance, (int32_t)v4, 0);
  *(_QWORD *)(v6 + 16) = Square;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v6 + 16), (int32_t)Square, v26, v27, v28, v29, v30, v31);
  v32 = sub_1C942E4(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v32, 0, 0);
  if ( !v32 )
    goto LABEL_83;
  v33 = (System_Collections_Generic_List_object__o *)(v32 + 32);
  p_EndCallback = *(System_Delegate_o **)(v32 + 32);
  v35 = (WarBoardTaskBase_TaskCallback_o *)sub_1C942E4(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v35,
    (Il2CppObject *)v6,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__,
    0);
  v36 = System_Delegate__Combine(p_EndCallback, (System_Delegate_o *)v35, 0);
  v43 = (System_Delegate_c *)v36;
  if ( v36 )
  {
    v44 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v36->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_44;
    v33->klass = (System_Collections_Generic_List_object__c *)v36;
    if ( (WarBoardTaskBase_TaskCallback_c *)v36->klass != v44 )
      goto LABEL_44;
  }
  else
  {
    v33->klass = 0;
  }
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v32 + 32), (int32_t)v36, v37, v38, v39, v40, v41, v42);
  Instance = (WarBoardPieceData_o *)sub_1C94140(int___TypeInfo, 2);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_83;
  v8 = Instance;
  if ( !Instance )
    goto LABEL_83;
  groupId_k__BackingField = Instance->fields._groupId_k__BackingField;
  if ( !groupId_k__BackingField
    || (Instance->fields._limitActionCount_k__BackingField = pieceData->fields._nowSquareIndex_k__BackingField,
        groupId_k__BackingField == 1) )
  {
LABEL_84:
    sub_1C942F8(Instance);
  }
  Instance->fields._currentActionCount_k__BackingField = (int)v4;
  *(_QWORD *)(v6 + 24) = Instance;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v6 + 24), (int32_t)Instance, v45, v46, v47, v48, v49, v50);
  v33 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v53 = *(_QWORD *)(v6 + 40);
  Instance = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v54 = this->fields.pieceData;
  if ( !v54 )
    goto LABEL_83;
  v55 = (UnityEngine_GameObject_o *)Instance;
  Instance = *(WarBoardPieceData_o **)(v6 + 48);
  if ( !Instance )
    goto LABEL_83;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     v54->fields._nowSquareIndex_k__BackingField,
                     0);
  Instance = *v15;
  if ( !*v15 )
    goto LABEL_83;
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v174 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, (int32_t)v4, 0);
  pixelPerSecond = this->fields.pixelPerSecond;
  v60 = v174.fields.x;
  v61 = v174.fields.y;
  v62 = v174.fields.z;
  v63 = (WarBoardMovePerformance_o *)sub_1C942E4(WarBoardMovePerformance_TypeInfo);
  v175.fields.x = x;
  v175.fields.y = y;
  v175.fields.z = z;
  v179.fields.x = v60;
  v179.fields.y = v61;
  v179.fields.z = v62;
  v64 = v63;
  WarBoardMovePerformance___ctor(v63, v55, v175, v179, pixelPerSecond, 0, 0);
  if ( v53 )
  {
    Instance = (WarBoardPieceData_o *)sub_1C94140(WarBoardTaskBase___TypeInfo, 3);
    if ( !Instance )
      goto LABEL_83;
    v71 = (WarBoardTaskBase_array *)Instance;
    if ( v64 )
    {
      Instance = (WarBoardPieceData_o *)sub_1C941D4(v64, Instance->klass->_1.element_class);
      if ( !Instance )
        goto LABEL_85;
    }
    if ( !LODWORD(v71->max_length) )
      goto LABEL_84;
    v71->m_Items[0] = (WarBoardTaskBase_o *)v64;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)v71->m_Items, (int32_t)v64, v65, v66, v67, v68, v69, v70);
    Instance = *v17;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( *v17 )
    {
      Instance = (WarBoardPieceData_o *)WarBoardPieceData__get_gameObject(Instance, 0);
      if ( *v15 )
      {
        v72 = (UnityEngine_GameObject_o *)Instance;
        v176 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)*v15, (int32_t)v4, 0);
        v73 = this->fields.pieceData;
        if ( v73 )
        {
          Instance = *v15;
          if ( *v15 )
          {
            v74 = v176.fields.x;
            v75 = v176.fields.y;
            v76 = v176.fields.z;
            v177 = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     v73->fields._nowSquareIndex_k__BackingField,
                     0);
            v77 = this->fields.pixelPerSecond;
            v78 = v177.fields.x;
            v79 = v177.fields.y;
            v80 = v177.fields.z;
            v81 = (WarBoardMovePerformance_o *)sub_1C942E4(WarBoardMovePerformance_TypeInfo);
            v178.fields.x = v74;
            v178.fields.y = v75;
            v178.fields.z = v76;
            v180.fields.x = v78;
            v180.fields.y = v79;
            v180.fields.z = v80;
            v82 = (WarBoardTaskBase_o *)v81;
            WarBoardMovePerformance___ctor(v81, v72, v178, v180, v77, 0, 0);
            if ( !v82 || (Instance = (WarBoardPieceData_o *)sub_1C941D4(v82, v71->obj.klass->_1.element_class)) != 0 )
            {
              if ( LODWORD(v71->max_length) <= 1 )
                goto LABEL_84;
              v71->m_Items[1] = v82;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)&v71->m_Items[1], (int32_t)v82, v83, v84, v85, v86, v87, v88);
              Instance = (WarBoardPieceData_o *)sub_1C941D4(v32, v71->obj.klass->_1.element_class);
              if ( Instance )
              {
                if ( LODWORD(v71->max_length) <= 2 )
                  goto LABEL_84;
                v71->m_Items[2] = (WarBoardTaskBase_o *)v32;
                sub_1C9403C((GrandQuestFolderBoardItem_o *)&v71->m_Items[2], v32, v89, v90, v91, v92, v93, v94);
                v32 = sub_1C942E4(WarBoardParallelSchedule_TypeInfo);
                WarBoardParallelSchedule___ctor((WarBoardParallelSchedule_o *)v32, v71, 0);
                if ( !v32 )
                  goto LABEL_83;
                p_EndCallback = (System_Delegate_o *)(v32 + 40);
                v95 = *(System_Delegate_o **)(v32 + 40);
                v96 = (WarBoardTaskBase_TaskCallback_o *)sub_1C942E4(WarBoardTaskBase_TaskCallback_TypeInfo);
                WarBoardTaskBase_TaskCallback___ctor(
                  v96,
                  (Il2CppObject *)v6,
                  Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__,
                  0);
                v97 = System_Delegate__Combine(v95, (System_Delegate_o *)v96, 0);
                v43 = (System_Delegate_c *)v97;
                if ( !v97 )
                  goto LABEL_45;
                v104 = WarBoardTaskBase_TaskCallback_TypeInfo;
                if ( (WarBoardTaskBase_TaskCallback_c *)v97->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
                {
                  p_EndCallback->klass = (System_Delegate_c *)v97;
                  if ( (WarBoardTaskBase_TaskCallback_c *)v97->klass == v104 )
                  {
LABEL_46:
                    sub_1C9403C(
                      (GrandQuestFolderBoardItem_o *)p_EndCallback,
                      (int32_t)v43,
                      v98,
                      v99,
                      v100,
                      v101,
                      v102,
                      v103);
                    if ( !v33 )
                      goto LABEL_83;
                    items = v33->fields._items;
                    v121 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                    ++v33->fields._version;
                    if ( !items )
                      goto LABEL_83;
                    size = v33->fields._size;
                    if ( (unsigned int)size >= LODWORD(items->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v33,
                        (Il2CppObject *)v32,
                        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v123 = &items->obj.klass + size;
                      v33->fields._size = size + 1;
                      v123[4] = (Il2CppClass *)v32;
                      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v123 + 4), v32, v114, v115, v116, v117, v118, v119);
                    }
                    v124 = this->fields.pieceData;
                    if ( !v124 )
                      goto LABEL_83;
                    Instance = *v17;
                    if ( !*v17 )
                      goto LABEL_83;
                    WarBoardPieceData__SetSquareIndex(Instance, v124->fields._nowSquareIndex_k__BackingField, 0);
                    goto LABEL_64;
                  }
                }
LABEL_44:
                sub_1C9468C(v43);
LABEL_45:
                p_EndCallback->klass = v43;
                goto LABEL_46;
              }
            }
LABEL_85:
            v172 = sub_1C94314();
            sub_1C941C0(v172, 0);
          }
        }
      }
    }
LABEL_83:
    sub_1C942F0(Instance, v8);
  }
  if ( !v64 )
    goto LABEL_83;
  v17 = (WarBoardPieceData_o **)(unsigned int)v4;
  p_EndCallback = (System_Delegate_o *)&v64->fields.EndCallback;
  EndCallback = (System_Delegate_o *)v64->fields.EndCallback;
  v4 = &WarBoardTaskBase_TaskCallback_TypeInfo;
  v3 = (WarBoardTaskBase_TaskCallback_o *)sub_1C942E4(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v3,
    (Il2CppObject *)v6,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__,
    0);
  v106 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v3, 0);
  v43 = (System_Delegate_c *)v106;
  if ( v106 )
  {
    v113 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v106->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_44;
    p_EndCallback->klass = (System_Delegate_c *)v106;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    LODWORD(v4) = (_DWORD)v17;
    if ( (WarBoardTaskBase_TaskCallback_c *)v106->klass != v113 )
      goto LABEL_44;
  }
  else
  {
    p_EndCallback->klass = 0;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    LODWORD(v4) = (_DWORD)v17;
  }
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v64->fields.EndCallback,
    (int32_t)v106,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  v17 = (WarBoardPieceData_o **)(v6 + 40);
  if ( !v33 )
    goto LABEL_83;
  v131 = v33->fields._items;
  v132 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v33->fields._version;
  if ( !v131 )
    goto LABEL_83;
  v133 = v33->fields._size;
  if ( (unsigned int)v133 >= LODWORD(v131->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)v64,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
  }
  else
  {
    v134 = &v131->obj.klass + v133;
    v33->fields._size = v133 + 1;
    v134[4] = (Il2CppClass *)v64;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v134 + 4), (int32_t)v64, v125, v126, v127, v128, v129, v130);
  }
  v141 = v33->fields._items;
  v142 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v33->fields._version;
  if ( !v141 )
    goto LABEL_83;
  v143 = v33->fields._size;
  if ( (unsigned int)v143 >= LODWORD(v141->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)v32,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
  }
  else
  {
    v144 = &v141->obj.klass + v143;
    v33->fields._size = v143 + 1;
    v144[4] = (Il2CppClass *)v32;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v144 + 4), v32, v135, v136, v137, v138, v139, v140);
  }
LABEL_64:
  Instance = this->fields.pieceData;
  if ( !Instance )
    goto LABEL_83;
  WarBoardPieceData__SetSquareIndex(Instance, (int32_t)v4, 0);
  v145 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v145,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = this->fields.pieceData;
  if ( !Instance )
    goto LABEL_83;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(Instance, 0);
  *(_QWORD *)(v6 + 32) = PieceEventVals;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v6 + 32), (int32_t)PieceEventVals, v147, v148, v149, v150, v151, v152);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                      (WarBoardManager_o *)Instance,
                                      30,
                                      *(System_Int32_array **)(v6 + 32),
                                      0);
  if ( !v145 )
    goto LABEL_83;
  System_Collections_Generic_List_object___AddRange(
    v145,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( *v17 )
  {
    v153 = WarBoardPieceData__CreatePieceEventVals(*v17, 0);
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 30, v153, 0);
    System_Collections_Generic_List_object___AddRange(
      v145,
      (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
      (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  v155 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 36, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    v145,
    (System_Collections_Generic_IEnumerable_T__o *)v155,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v145,
         (const MethodInfo_31A7F44 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    Instance = *v15;
    if ( !*v15 )
      goto LABEL_83;
    WarBoardManager__AddTask_38721084(
      (WarBoardManager_o *)Instance,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v145,
      0);
  }
  Instance = *v15;
  if ( !*v15 )
    goto LABEL_83;
  WarBoardManager__AddTask_38721084(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v33,
    0);
  v156 = *(WarBoardManager_o **)(v6 + 48);
  v157 = (WarBoardTaskBase_array *)sub_1C94140(WarBoardTaskBase___TypeInfo, 1);
  v158 = sub_1C942E4(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v158, 0, 0);
  v159 = (WarBoardTaskBase_TaskCallback_o *)sub_1C942E4(v3->klass);
  WarBoardTaskBase_TaskCallback___ctor(
    v159,
    (Il2CppObject *)v6,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__,
    0);
  if ( !v158 )
    goto LABEL_83;
  *(_QWORD *)(v158 + 32) = v159;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v158 + 32), (int32_t)v159, v160, v161, v162, v163, v164, v165);
  if ( !v157 )
    goto LABEL_83;
  Instance = (WarBoardPieceData_o *)sub_1C941D4(v158, v157->obj.klass->_1.element_class);
  if ( !Instance )
    goto LABEL_85;
  if ( !LODWORD(v157->max_length) )
    goto LABEL_84;
  v157->m_Items[0] = (WarBoardTaskBase_o *)v158;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v157->m_Items, v158, v166, v167, v168, v169, v170, v171);
  if ( !v156 )
    goto LABEL_83;
  WarBoardManager__AddTask(v156, 0, v157, 0);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  WarBoardManager__JudgmentGameSet((WarBoardManager_o *)Instance, 0);
}


void WarBoardPieceBaseComponent__OnRevive(
        WarBoardPieceBaseComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C942F0(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void WarBoardPieceBaseComponent__OnSelect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1
  int v5; // w8
  const MethodInfo *v6; // x2

  if ( (byte_4D2A026 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2A026 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_1C942F0(Instance, v4);
  v5 = WarBoardData__GetPieceMaxDispPriotiry(Instance, 0) - this->fields.dispPriotiry;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * v5, v6);
}


void WarBoardPieceBaseComponent__OnShowDamagePopup(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *popText,
        int32_t popTextColor,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  System_String_o *v8; // x1
  int32_t v9; // w3
  const MethodInfo *v10; // x5

  if ( (byte_4D2A034 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_18952/*"ef_dm_base"*/);
    byte_4D2A034 = 1;
  }
  if ( !System_String__IsNullOrEmpty(popText, 0) )
    WarBoardPieceBaseComponent__CreateEffectText(this, v8, popText, v9, taskList, v10);
}


void WarBoardPieceBaseComponent__OnWallAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x23
  WarBoardData_o *Instance; // x0
  __int64 v7; // x1
  WarBoardManager_o *v8; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardWallData_o *v10; // x21
  float x; // s8
  float y; // s10
  float z; // s15
  float v14; // s11
  float v15; // s9
  float v16; // s13
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Collections_Generic_List_object__o *v23; // x20
  __int64 v24; // x24
  System_Delegate_o **v25; // x25
  System_Delegate_o *v26; // x26
  WarBoardTaskBase_TaskCallback_o *v27; // x27
  System_Delegate_o *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_Delegate_o *v35; // x8
  WarBoardTaskBase_TaskCallback_c *v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  float v47; // s12
  float v48; // s14
  float v49; // s8
  float v50; // s9
  float v51; // s11
  float v52; // s13
  float v53; // s1
  float v54; // s2
  float v55; // s9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v57; // s0
  float v58; // s8
  float v59; // s11
  float v60; // s12
  float v61; // s15
  float v62; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  float pixelPerSecond; // s14
  UnityEngine_GameObject_o *v65; // x24
  WarBoardMovePerformance_o *v66; // x0
  Il2CppObject *v67; // x23
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  struct System_Object_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  Il2CppClass **v77; // x0
  float lengthMoveAttack; // s0
  float v79; // s1
  float v80; // s2
  float v81; // s0
  float v82; // s8
  float v83; // s9
  float v84; // s10
  UnityEngine_GameObject_o *v85; // x0
  float v86; // s14
  UnityEngine_GameObject_o *v87; // x22
  WarBoardMovePerformance_o *v88; // x0
  WarBoardTaskBase_o *v89; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *v90; // x22
  System_Collections_Generic_List_object__o *v91; // x23
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  WarBoardTaskBase_array *v98; // x23
  int32_t v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  WarBoardData_o *v105; // x21
  int32_t v106; // w2
  int32_t v107; // w3
  System_String_o *v108; // x4
  int32_t v109; // w5
  int64_t v110; // x6
  System_String_o *v111; // x7
  WarBoardData_o *v112; // x21
  WarBoardOrthostichySchedule_o *v113; // x21
  int32_t v114; // w2
  int32_t v115; // w3
  System_String_o *v116; // x4
  int32_t v117; // w5
  int64_t v118; // x6
  System_String_o *v119; // x7
  WarBoardParallelSchedule_o *v120; // x21
  int32_t v121; // w2
  int32_t v122; // w3
  System_String_o *v123; // x4
  int32_t v124; // w5
  int64_t v125; // x6
  System_String_o *v126; // x7
  struct System_Object_array *v127; // x8
  _QWORD *v128; // x9
  __int64 v129; // x10
  Il2CppClass **v130; // x0
  __int64 v131; // x0
  float v132; // [xsp+8h] [xbp-A8h]
  float v133; // [xsp+Ch] [xbp-A4h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v135; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v137; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o IconPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v139; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v140; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4D2A02D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C94098(&Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__);
    sub_1C94098(&WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo);
    sub_1C94098(&WarBoardCallbackTask_TypeInfo);
    sub_1C94098(&WarBoardMovePerformance_TypeInfo);
    sub_1C94098(&WarBoardOrthostichySchedule_TypeInfo);
    sub_1C94098(&WarBoardParallelSchedule_TypeInfo);
    sub_1C94098(&WarBoardTaskBase___TypeInfo);
    byte_4D2A02D = 1;
  }
  v5 = sub_1C942E4(WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass66_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass66_0_o *)v5, 0);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  v8 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_64;
  Instance = (WarBoardData_o *)WarBoardData__GetWall(Instance, squareIndex, 0, 0);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_64;
  v10 = (WarBoardWallData_o *)Instance;
  SquarePosition = WarBoardManager__GetSquarePosition(v8, pieceData->fields._nowSquareIndex_k__BackingField, 0);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v135 = WarBoardManager__GetSquarePosition(v8, squareIndex, 0);
  Instance = v8->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_64;
  v14 = v135.fields.x;
  v15 = v135.fields.y;
  v16 = v135.fields.z;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, 0);
  if ( !v5 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 16) = Instance;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)Instance, v17, v18, v19, v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v24 = sub_1C942E4(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v24, 0, 0);
  if ( !v24 )
    goto LABEL_64;
  v25 = (System_Delegate_o **)(v24 + 32);
  v26 = *(System_Delegate_o **)(v24 + 32);
  v27 = (WarBoardTaskBase_TaskCallback_o *)sub_1C942E4(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v27,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__,
    0);
  v28 = System_Delegate__Combine(v26, (System_Delegate_o *)v27, 0);
  v35 = v28;
  if ( v28 )
  {
    v36 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v28->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v25 = v28;
      if ( (WarBoardTaskBase_TaskCallback_c *)v28->klass == v36 )
        goto LABEL_14;
    }
    sub_1C9468C(v28);
  }
  *v25 = v35;
LABEL_14:
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v24 + 32), (int32_t)v35, v29, v30, v31, v32, v33, v34);
  if ( !v23 )
    goto LABEL_64;
  items = v23->fields._items;
  v44 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v23->fields._version;
  if ( !items )
    goto LABEL_64;
  size = v23->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v23,
      (Il2CppObject *)v24,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = &items->obj.klass + size;
    v23->fields._size = size + 1;
    v46[4] = (Il2CppClass *)v24;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v46 + 4), v24, v37, v38, v39, v40, v41, v42);
  }
  if ( !byte_4D25F1B )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D25F1B = 1;
  }
  v47 = x;
  v48 = v14 - x;
  v49 = v15 - y;
  v50 = v16 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4D25F1C )
  {
    sub_1C94098(&System_Math_TypeInfo);
    byte_4D25F1C = 1;
  }
  v51 = sqrtf((float)(v50 * v50) + (float)((float)(v48 * v48) + (float)(v49 * v49)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v52 = z;
  if ( v51 <= 0.00001 )
  {
    if ( !byte_4D25F19 )
    {
      sub_1C94098(&UnityEngine_Vector3_TypeInfo);
      byte_4D25F19 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v53 = static_fields->zeroVector.fields.x;
    v54 = static_fields->zeroVector.fields.y;
    v55 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v53 = v48 / v51;
    v54 = v49 / v51;
    v55 = v50 / v51;
  }
  v57 = v51 - this->fields.lengthOnAttack;
  if ( v57 <= 0.0 )
  {
    v59 = v47;
    v60 = y;
  }
  else
  {
    v132 = v54;
    v133 = v53;
    v58 = v47;
    v59 = v47 + (float)(v53 * v57);
    v60 = y + (float)(v54 * v57);
    v61 = y;
    v62 = v52;
    v52 = v52 + (float)(v55 * v57);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    pixelPerSecond = this->fields.pixelPerSecond;
    v65 = gameObject;
    v66 = (WarBoardMovePerformance_o *)sub_1C942E4(WarBoardMovePerformance_TypeInfo);
    v136.fields.x = v58;
    v136.fields.y = v61;
    v136.fields.z = v62;
    v139.fields.x = v59;
    v139.fields.y = v60;
    v139.fields.z = v52;
    v67 = (Il2CppObject *)v66;
    WarBoardMovePerformance___ctor(v66, v65, v136, v139, pixelPerSecond, 5, 0);
    v74 = v23->fields._items;
    v75 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v23->fields._version;
    if ( !v74 )
      goto LABEL_64;
    v76 = v23->fields._size;
    if ( (unsigned int)v76 >= LODWORD(v74->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v23,
        v67,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
    }
    else
    {
      v77 = &v74->obj.klass + v76;
      v23->fields._size = v76 + 1;
      v77[4] = (Il2CppClass *)v67;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v77 + 4), (int32_t)v67, v68, v69, v70, v71, v72, v73);
    }
    v54 = v132;
    v53 = v133;
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v79 = v53 * lengthMoveAttack;
  v80 = v54 * lengthMoveAttack;
  v81 = v55 * lengthMoveAttack;
  v82 = v59 + v79;
  v83 = v60 + v80;
  v84 = v52 + v81;
  v85 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v86 = this->fields.pixelPerSecond;
  v87 = v85;
  v88 = (WarBoardMovePerformance_o *)sub_1C942E4(WarBoardMovePerformance_TypeInfo);
  v137.fields.x = v82;
  v137.fields.y = v83;
  v137.fields.z = v84;
  v140.fields.x = v59;
  v140.fields.y = v60;
  v140.fields.z = v52;
  v89 = (WarBoardTaskBase_o *)v88;
  WarBoardMovePerformance___ctor(v88, v87, v137, v140, v86, 4, 0);
  if ( !v10 )
    goto LABEL_64;
  v90 = WarBoardWallData__DecrementBreakPointPerformance(v10, 1, 0);
  v91 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v91,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 26, 0, 0), !v91)
    || (System_Collections_Generic_List_object___AddRange(
          v91,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        System_Collections_Generic_List_object___AddRange(
          v23,
          (System_Collections_Generic_IEnumerable_T__o *)v91,
          (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (Instance = (WarBoardData_o *)sub_1C94140(WarBoardTaskBase___TypeInfo, 4)) == 0) )
  {
LABEL_64:
    sub_1C942F0(Instance, v7);
  }
  v98 = (WarBoardTaskBase_array *)Instance;
  if ( v89 )
  {
    Instance = (WarBoardData_o *)sub_1C941D4(v89, Instance->klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( !LODWORD(v98->max_length) )
    goto LABEL_65;
  v98->m_Items[0] = v89;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v98->m_Items, (int32_t)v89, v92, v93, v94, v95, v96, v97);
  Instance = (WarBoardData_o *)v10->fields.component;
  if ( !Instance )
    goto LABEL_64;
  IconPosition = WarBoardWallComponent__GetIconPosition((WarBoardWallComponent_o *)Instance, 0);
  Instance = (WarBoardData_o *)WarBoardManager__CreateAttackEffectTask(v8, IconPosition, 0, 0);
  v105 = Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_1C941D4(Instance, v98->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( LODWORD(v98->max_length) <= 1 )
    goto LABEL_65;
  v98->m_Items[1] = (WarBoardTaskBase_o *)v105;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v98->m_Items[1], (int32_t)v105, v99, v100, v101, v102, v103, v104);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (WarBoardData_o *)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0);
  v112 = Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_1C941D4(Instance, v98->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( LODWORD(v98->max_length) <= 2 )
    goto LABEL_65;
  v98->m_Items[2] = (WarBoardTaskBase_o *)v112;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v98->m_Items[2], (int32_t)v112, v106, v107, v108, v109, v110, v111);
  v113 = (WarBoardOrthostichySchedule_o *)sub_1C942E4(WarBoardOrthostichySchedule_TypeInfo);
  WarBoardOrthostichySchedule___ctor_38922360(v113, v90, 0);
  if ( v113 )
  {
    Instance = (WarBoardData_o *)sub_1C941D4(v113, v98->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_66:
      v131 = sub_1C94314();
      sub_1C941C0(v131, 0);
    }
  }
  if ( LODWORD(v98->max_length) <= 3 )
LABEL_65:
    sub_1C942F8(Instance);
  v98->m_Items[3] = (WarBoardTaskBase_o *)v113;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v98->m_Items[3], (int32_t)v113, v114, v115, v116, v117, v118, v119);
  v120 = (WarBoardParallelSchedule_o *)sub_1C942E4(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor(v120, v98, 0);
  v127 = v23->fields._items;
  v128 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v23->fields._version;
  if ( !v127 )
    goto LABEL_64;
  v129 = v23->fields._size;
  if ( (unsigned int)v129 >= LODWORD(v127->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v23,
      (Il2CppObject *)v120,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
  }
  else
  {
    v130 = &v127->obj.klass + v129;
    v23->fields._size = v129 + 1;
    v130[4] = (Il2CppClass *)v120;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v130 + 4), (int32_t)v120, v121, v122, v123, v124, v125, v126);
  }
  if ( v23->fields._size >= 1 )
    WarBoardManager__AddTask_38721084(v8, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v23, 0);
}


bool WarBoardPieceBaseComponent__PlayEffect(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectKey,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return WarBoardPieceBaseComponent__SetEffect(this, effectKey, 1, v3);
}


void WarBoardPieceBaseComponent__PlaySimpleAnimation(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  const MethodInfo *v6; // x2

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    goto LABEL_5;
  if ( SimpleAnimation__IsPlaying(simpleAnimation, animationName, 0) )
    return;
  WarBoardPieceBaseComponent__StopSimpleAnimation(this, animationName, v6);
  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
LABEL_5:
    sub_1C942F0(simpleAnimation, animationName);
  SimpleAnimation__Play_67362784(simpleAnimation, animationName, 0);
}


void WarBoardPieceBaseComponent__RepareBreakPointByPiece(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct WarBoardPieceData_o *pieceData; // x8
  int breakPoint_k__BackingField; // w20
  WarBoardPieceBaseComponent_o *v5; // x19
  __int64 v6; // x21
  struct WarBoardBreakPointComponent_array *breakPoints; // x8

  pieceData = this->fields.pieceData;
  if ( !pieceData )
LABEL_8:
    sub_1C942F0(this, method);
  breakPoint_k__BackingField = pieceData->fields._breakPoint_k__BackingField;
  v5 = this;
  v6 = 0;
  while ( (int)v6 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v5->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v6 >= LODWORD(breakPoints->max_length) )
        sub_1C942F8(this);
      this = (WarBoardPieceBaseComponent_o *)breakPoints->m_Items[v6];
      if ( this )
      {
        WarBoardBreakPointComponent__SetActive(
          (WarBoardBreakPointComponent_o *)this,
          breakPoint_k__BackingField > (int)v6,
          0,
          v2);
        pieceData = v5->fields.pieceData;
        ++v6;
        if ( pieceData )
          continue;
      }
    }
    goto LABEL_8;
  }
}


void WarBoardPieceBaseComponent__Selectable(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  this->fields.isSelectable = 1;
}


void WarBoardPieceBaseComponent__SetButtonTweenTarget(
        WarBoardPieceBaseComponent_o *this,
        UnityEngine_Transform_array *parents,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x21
  UnityEngine_Component_o *ComponentsInChildren_object; // x0
  __int64 v6; // x1
  int max_length; // w8
  unsigned int v8; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v10; // x22
  unsigned __int64 v11; // x29
  UnityEngine_Object_o *v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v22; // x1
  Il2CppClass **v23; // x0
  struct UICommonButton_o *button; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4D2A01D & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____79067792);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2A01D = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length )
          goto LABEL_28;
        ComponentsInChildren_object = (UnityEngine_Component_o *)parents->m_Items[v8];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                   ComponentsInChildren_object,
                                                                   1,
                                                                   (const MethodInfo_3193628 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____79067792);
        if ( ComponentsInChildren_object )
        {
          klass = ComponentsInChildren_object[1].klass;
          v10 = ComponentsInChildren_object;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v8 >= max_length )
          goto LABEL_24;
      }
      v11 = 0;
      while ( v11 < (unsigned int)klass )
      {
        v12 = (UnityEngine_Object_o *)*((_QWORD *)&v10[1].monitor + v11);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v12, 0, 0);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)v12,
                                                                     0);
          if ( !v4 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___Contains(
                                                                     v4,
                                                                     (Il2CppObject *)ComponentsInChildren_object,
                                                                     (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v12,
                                                                       0);
            items = v4->fields._items;
            v20 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v4->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v4->fields._size;
            v22 = ComponentsInChildren_object;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v4,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_386AE34 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v4->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v22;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v22, v13, v14, v15, v16, v17, v18);
            }
          }
        }
        LODWORD(klass) = v10[1].klass;
        if ( (__int64)++v11 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1C942F8(ComponentsInChildren_object);
    }
  }
LABEL_24:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v4,
                                                                   (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1C942F0(ComponentsInChildren_object, v6);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&button->fields.tweenTargets,
    (int32_t)ComponentsInChildren_object,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
}


void WarBoardPieceBaseComponent__SetColliderEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_4D2A01F & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2A01F = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1C942F0(0, v6);
    if ( enable )
    {
      v8 = 1;
LABEL_11:
      UICommonButton__SetButtonEnableAndKeepState(v7, v8, 0, 0);
      return;
    }
    if ( v7->fields.mState )
    {
      v8 = 0;
      goto LABEL_11;
    }
    UICommonButton__SetColliderEnable(v7, 0, 1, 0);
  }
}


bool WarBoardPieceBaseComponent__SetEffect(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectKey,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v7; // x22
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_List_object__o *listEffectData; // x20
  System_Predicate_object__o *v17; // x21
  Il2CppObject *v18; // x20
  _QWORD *monitor; // x22
  __int64 v20; // x8
  unsigned __int64 v21; // x23
  bool v22; // w19
  UnityEngine_Object_o *v23; // x21

  if ( (byte_4D2A033 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
    sub_1C94098(&Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__);
    sub_1C94098(&WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo);
    byte_4D2A033 = 1;
  }
  v7 = sub_1C942E4(WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass83_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass83_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 16) = effectKey;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)effectKey, v10, v11, v12, v13, v14, v15);
  listEffectData = (System_Collections_Generic_List_object__o *)this->fields.listEffectData;
  v17 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__,
    0);
  if ( !listEffectData )
    goto LABEL_18;
  v8 = System_Collections_Generic_List_object___Find(
         listEffectData,
         (System_Predicate_T__o *)v17,
         (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__);
  v18 = v8;
  if ( !v8 )
    return v18 != 0;
  monitor = v8[1].monitor;
  if ( !monitor )
LABEL_18:
    sub_1C942F0(v8, v9);
  v20 = monitor[3];
  if ( (int)v20 >= 1 )
  {
    v21 = 0;
    v22 = isDisp;
    do
    {
      if ( v21 >= (unsigned int)v20 )
        sub_1C942F8(v8);
      v23 = (UnityEngine_Object_o *)monitor[v21 + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = (Il2CppObject *)UnityEngine_Object__op_Equality(v23, 0, 0);
      if ( ((unsigned __int8)v8 & 1) == 0 )
      {
        if ( !v23 )
          goto LABEL_18;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v23, v22, 0);
      }
      LODWORD(v20) = *((_DWORD *)monitor + 6);
      ++v21;
    }
    while ( (__int64)v21 < (int)v20 );
  }
  return v18 != 0;
}


void WarBoardPieceBaseComponent__SetTouchEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_4D2A01E & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2A01E = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1C942F0(0, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0);
  }
}


void WarBoardPieceBaseComponent__ShowActionCount(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  struct WarBoardPieceData_o *v4; // x8
  UnityEngine_Object_o *currentPieceActionPointRoot; // x20
  UnityEngine_GameObject_o *v6; // x20
  bool activeSelf; // w0
  __int64 v8; // x8
  __int64 v9; // x9
  __int64 v10; // x10
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2A021 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2A021 = 1;
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_23;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__get_isInfinitelyActable(pieceData, 0);
  if ( ((unsigned __int8)pieceData & 1) == 0 )
  {
    pieceData = (WarBoardPieceData_o *)this->fields.currentActionPointRoot;
    if ( !pieceData )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pieceData, 1, 0);
  }
  v4 = this->fields.pieceData;
  if ( !v4 || (pieceData = (WarBoardPieceData_o *)v4->fields._Cost_k__BackingField) == 0 )
LABEL_23:
    sub_1C942F0(pieceData, method);
  if ( WarBoardCost__get_HasCost((WarBoardCost_o *)pieceData, 0) )
  {
    currentPieceActionPointRoot = (UnityEngine_Object_o *)this->fields.currentPieceActionPointRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(currentPieceActionPointRoot, 0, 0) )
    {
      pieceData = (WarBoardPieceData_o *)this->fields.currentPieceActionPointRoot;
      if ( pieceData )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pieceData, 1, 0);
        pieceData = (WarBoardPieceData_o *)this->fields.currentActionPointRoot;
        if ( pieceData )
        {
          v6 = this->fields.currentPieceActionPointRoot;
          activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)pieceData, 0);
          v8 = 112;
          if ( activeSelf )
          {
            v8 = 124;
            v9 = 120;
          }
          else
          {
            v9 = 108;
          }
          if ( activeSelf )
            v10 = 116;
          else
            v10 = 104;
          v11.fields.x = *(float *)((char *)&this->klass + v10);
          v11.fields.y = *(float *)((char *)&this->klass + v9);
          v11.fields.z = *(float *)((char *)&this->klass + v8);
          GameObjectExtensions__SetLocalPosition(v6, v11, 0);
          goto LABEL_22;
        }
      }
      goto LABEL_23;
    }
  }
LABEL_22:
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr)(
    this,
    this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method);
}


void WarBoardPieceBaseComponent__ShowActionTarget(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectObject; // x0

  selectObject = this->fields.selectObject;
  if ( !selectObject )
    sub_1C942F0(0, method);
  UnityEngine_GameObject__SetActive(selectObject, 1, 0);
}


bool WarBoardPieceBaseComponent__ShowStatus(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  return 0;
}


bool WarBoardPieceBaseComponent__StopEffect(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectKey,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return WarBoardPieceBaseComponent__SetEffect(this, effectKey, 0, v3);
}


void WarBoardPieceBaseComponent__StopSimpleAnimation(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    goto LABEL_7;
  if ( SimpleAnimation__IsPlaying(simpleAnimation, animationName, 0) )
  {
    simpleAnimation = this->fields.simpleAnimation;
    if ( simpleAnimation )
    {
      SimpleAnimation__Stop_67360300(simpleAnimation, animationName, 0);
      simpleAnimation = this->fields.simpleAnimation;
      if ( simpleAnimation )
      {
        SimpleAnimation__Rewind(simpleAnimation, 0);
        return;
      }
    }
LABEL_7:
    sub_1C942F0(simpleAnimation, animationName);
  }
}


void WarBoardPieceBaseComponent__Unselectable(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  this->fields.isSelectable = 0;
}


void WarBoardPieceBaseComponent__UpdateDisplayActionCount(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  struct WarBoardPieceData_o *v4; // x8
  UILabel_o *currentActionPointLabel; // x20
  struct WarBoardPieceData_o *v6; // x8
  struct WarBoardCost_o *Cost_k__BackingField; // x8
  UILabel_o *currentPieceActionPointLabel; // x20
  int32_t currentActionCount_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  currentActionCount_k__BackingField = 0;
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_13;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__get_isInfinitelyActable(pieceData, 0);
  if ( ((unsigned __int8)pieceData & 1) == 0 )
  {
    v4 = this->fields.pieceData;
    if ( !v4 )
      goto LABEL_13;
    currentActionPointLabel = this->fields.currentActionPointLabel;
    currentActionCount_k__BackingField = v4->fields._currentActionCount_k__BackingField;
    pieceData = (WarBoardPieceData_o *)System_Int32__ToString((int32_t)&currentActionCount_k__BackingField, 0);
    if ( !currentActionPointLabel )
      goto LABEL_13;
    UILabel__set_text(currentActionPointLabel, (System_String_o *)pieceData, 0);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_13;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__get_HasCost(pieceData, 0);
  if ( ((unsigned __int8)pieceData & 1) != 0 )
  {
    v6 = this->fields.pieceData;
    if ( v6 )
    {
      Cost_k__BackingField = v6->fields._Cost_k__BackingField;
      if ( Cost_k__BackingField )
      {
        currentPieceActionPointLabel = this->fields.currentPieceActionPointLabel;
        currentActionCount_k__BackingField = Cost_k__BackingField->fields._CurrentActionPoint_k__BackingField;
        pieceData = (WarBoardPieceData_o *)System_Int32__ToString((int32_t)&currentActionCount_k__BackingField, 0);
        if ( currentPieceActionPointLabel )
        {
          UILabel__set_text(currentPieceActionPointLabel, (System_String_o *)pieceData, 0);
          goto LABEL_12;
        }
      }
    }
LABEL_13:
    sub_1C942F0(pieceData, method);
  }
LABEL_12:
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr)(
    this,
    this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method);
}


void WarBoardPieceBaseComponent__UpdateUiBrightnessByPieceStatus(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_Collections_Generic_HashSet_T__o *v4; // x22
  WarBoardPieceData_o *pieceData; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Collections_Generic_HashSet_T__o **v13; // x21
  System_Collections_Generic_HashSet_T__o *v14; // x23
  __int64 v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_IEnumerable_T__o *cannotActTurnDurk; // x24
  char v23; // w23
  System_Action_object__o *v24; // x25
  System_Collections_Generic_IEnumerable_T__o *v25; // x24
  System_Action_object__o *v26; // x25
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundActionCount; // x24
  System_Action_object__o *v28; // x25
  System_Collections_Generic_IEnumerable_T__o *v29; // x23
  System_Action_object__o *v30; // x24
  struct UICommonButton_o *button; // x8
  System_Collections_Generic_IEnumerable_T__o *tweenTargets; // x23
  System_Collections_Generic_List_object__o *v33; // x20
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *removeTweenTargetObjects; // x23
  Il2CppObject *gameObject; // x0
  __int64 v39; // x1
  UnityEngine_GameObject_o *v40; // x0
  Il2CppObject *v41; // x1
  UnityEngine_GameObject_o *v42; // x0
  Il2CppObject *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  Il2CppObject *v50; // x1
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  struct UICommonButton_o *v55; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  System_Collections_Generic_HashSet_Enumerator_T__o v63; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v64; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2A024 & 1) == 0 )
  {
    sub_1C94098(&System_Action_UIWidget__TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_UIWidget___);
    sub_1C94098(&Method_System_Linq_Enumerable_Distinct_GameObject___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_GameObject___);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_UIWidget__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_UIWidget__get_Count__);
    sub_1C94098(&System_Collections_Generic_HashSet_UIWidget__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__Remove__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject___ctor___78993432);
    sub_1C94098(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C94098(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__);
    sub_1C94098(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__);
    sub_1C94098(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__);
    sub_1C94098(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__);
    sub_1C94098(&WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo);
    byte_4D2A024 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  v3 = sub_1C942E4(WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass48_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass48_0_o *)v3, 0);
  v4 = (System_Collections_Generic_HashSet_T__o *)sub_1C942E4(System_Collections_Generic_HashSet_UIWidget__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v4,
    (const MethodInfo_371E7A8 *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  if ( !v3 )
    goto LABEL_39;
  *(_QWORD *)(v3 + 24) = v4;
  v13 = (System_Collections_Generic_HashSet_T__o **)(v3 + 24);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)v4, v7, v8, v9, v10, v11, v12);
  v14 = (System_Collections_Generic_HashSet_T__o *)sub_1C942E4(System_Collections_Generic_HashSet_UIWidget__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v14,
    (const MethodInfo_371E7A8 *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  *(_QWORD *)(v3 + 16) = v14;
  v15 = v3 + 16;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)v14, v16, v17, v18, v19, v20, v21);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_39;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasIconDarkenBuff(pieceData, 0);
  cannotActTurnDurk = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
  v23 = (char)pieceData;
  if ( cannotActTurnDurk )
  {
    v24 = (System_Action_object__o *)sub_1C942E4(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v24,
      (Il2CppObject *)v3,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__,
      0);
    BasicHelper__ForEach_object_(
      cannotActTurnDurk,
      (System_Action_T__o *)v24,
      (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_UIWidget___);
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_39;
    pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasVitalityToDoAnyActions(pieceData, 0);
    if ( v23 & 1 | (((unsigned __int8)pieceData & 1) == 0) )
    {
      v25 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
      v26 = (System_Action_object__o *)sub_1C942E4(System_Action_UIWidget__TypeInfo);
      System_Action_object____ctor(
        v26,
        (Il2CppObject *)v3,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__,
        0);
      BasicHelper__ForEach_object_(
        v25,
        (System_Action_T__o *)v26,
        (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v28 = (System_Action_object__o *)sub_1C942E4(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v28,
      (Il2CppObject *)v3,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__,
      0);
    BasicHelper__ForEach_object_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v28,
      (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_UIWidget___);
    if ( (v23 & 1) != 0 )
    {
      v29 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
      v30 = (System_Action_object__o *)sub_1C942E4(System_Action_UIWidget__TypeInfo);
      System_Action_object____ctor(
        v30,
        (Il2CppObject *)v3,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__,
        0);
      BasicHelper__ForEach_object_(
        v29,
        (System_Action_T__o *)v30,
        (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  if ( !*(_QWORD *)v15 )
    goto LABEL_39;
  if ( *(int *)(*(_QWORD *)v15 + 32LL) < 1 )
    return;
  button = this->fields.button;
  if ( !button )
    goto LABEL_39;
  tweenTargets = (System_Collections_Generic_IEnumerable_T__o *)button->fields.tweenTargets;
  v33 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor_59156264(
    v33,
    tweenTargets,
    (const MethodInfo_386A728 *)Method_System_Collections_Generic_List_GameObject___ctor___78993432);
  pieceData = *(WarBoardPieceData_o **)v15;
  if ( !*(_QWORD *)v15 )
    goto LABEL_39;
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v63,
    (System_Collections_Generic_HashSet_T__o *)pieceData,
    (const MethodInfo_371F310 *)Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__);
  v64 = v63;
  while ( 1 )
  {
    v34 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v64,
            (const MethodInfo_35EBC50 *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__);
    if ( !v34 )
      break;
    current = v64.fields._current;
    if ( !v64.fields._current )
      sub_1C942F0(v34, v35);
    removeTweenTargetObjects = this->fields.removeTweenTargetObjects;
    gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v64.fields._current,
                                   0);
    if ( !removeTweenTargetObjects )
      sub_1C942F0(gameObject, gameObject);
    if ( System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)removeTweenTargetObjects,
           gameObject,
           (const MethodInfo_386B1C4 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
    {
      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      v41 = (Il2CppObject *)v40;
      if ( !v33 )
        sub_1C942F0(v40, v40);
      goto LABEL_22;
    }
    if ( !*v13 )
      sub_1C942F0(0, v39);
    if ( System_Collections_Generic_HashSet_object___Contains(
           *v13,
           current,
           (const MethodInfo_371EE9C *)Method_System_Collections_Generic_HashSet_UIWidget__Contains__) )
    {
      v65.fields.r = 0.5;
      v65.fields.g = 0.5;
      v65.fields.b = 0.5;
      v65.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)current, v65, 0);
      v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      v41 = (Il2CppObject *)v42;
      if ( !v33 )
        sub_1C942F0(v42, v42);
LABEL_22:
      System_Collections_Generic_List_object___Remove(
        v33,
        v41,
        (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_GameObject__Remove__);
    }
    else
    {
      v66.fields.r = 1.0;
      v66.fields.g = 1.0;
      v66.fields.b = 1.0;
      v66.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)current, v66, 0);
      v43 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      v50 = v43;
      if ( !v33 )
        sub_1C942F0(v43, v43);
      items = v33->fields._items;
      v52 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v33->fields._version;
      if ( !items )
        sub_1C942F0(v43, v43);
      size = v33->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v33,
          v43,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &items->obj.klass + size;
        v33->fields._size = size + 1;
        v54[4] = (Il2CppClass *)v50;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v54 + 4), (int32_t)v50, v44, v45, v46, v47, v48, v49);
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v64,
    (const MethodInfo_35EBC4C *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__);
  v55 = this->fields.button;
  v56 = System_Linq_Enumerable__Distinct_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v33,
          (const MethodInfo_31BF74C *)Method_System_Linq_Enumerable_Distinct_GameObject___);
  pieceData = (WarBoardPieceData_o *)System_Linq_Enumerable__ToArray_object_(
                                       v56,
                                       (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_GameObject___);
  if ( !v55 )
LABEL_39:
    sub_1C942F0(pieceData, v6);
  v55->fields.tweenTargets = (struct UnityEngine_GameObject_array *)pieceData;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v55->fields.tweenTargets,
    (int32_t)pieceData,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
}


void WarBoardPieceBaseComponent__UpdateUiByBuffChanged(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *pieceStatusLabelComponent; // x20
  __int64 v4; // x1
  WarBoardPieceStatusLabel_o *v5; // x0

  if ( (byte_4D2A023 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2A023 = 1;
  }
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr)(
    this,
    this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method);
  pieceStatusLabelComponent = (UnityEngine_Object_o *)this->fields.pieceStatusLabelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pieceStatusLabelComponent, 0, 0) )
  {
    v5 = this->fields.pieceStatusLabelComponent;
    if ( !v5 )
      sub_1C942F0(0, v4);
    WarBoardPieceStatusLabel__SetupLabel(v5, this->fields.pieceData, 0);
  }
}


void WarBoardPieceBaseComponent__UpdateWidgetDepth(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1
  int32_t PieceDispPriority; // w0
  const MethodInfo *v7; // x2

  if ( (byte_4D2A037 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2A037 = 1;
  }
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, -20 * this->fields.dispPriotiry, v2);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_1C942F0(Instance, v5);
  PieceDispPriority = WarBoardData__GetPieceDispPriority(Instance, this->fields.pieceData, 0);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v7);
}


void WarBoardPieceBaseComponent__WidgetDepthIncrement(
        WarBoardPieceBaseComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *v4; // x21
  struct UIWidget_array *uiWidgets; // x8
  struct UIWidget_array **p_uiWidgets; // x20
  System_Object_array *ComponentsInChildren_object; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int max_length; // w21
  unsigned int i; // w22
  Il2CppClass **v23; // x0
  Il2CppClass *v24; // x8
  Il2CppClass *v25; // t1
  unsigned __int64 v26; // x22
  __int64 v27; // x24
  UnityEngine_Object_o *v28; // x21
  struct UIWidget_array *v29; // x8

  v4 = this;
  if ( (byte_4D2A030 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____79067792);
    this = (WarBoardPieceBaseComponent_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2A030 = 1;
  }
  uiWidgets = v4->fields.uiWidgets;
  p_uiWidgets = &v4->fields.uiWidgets;
  if ( !uiWidgets )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)v4,
                                    1,
                                    (const MethodInfo_3193628 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____79067792);
    v4->fields.uiWidgets = (struct UIWidget_array *)ComponentsInChildren_object;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&v4->fields.uiWidgets,
      (int32_t)ComponentsInChildren_object,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    uiWidgets = v4->fields.uiWidgets;
    if ( !uiWidgets )
      goto LABEL_26;
    max_length = uiWidgets->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i != max_length; ++i )
      {
        if ( !uiWidgets )
          goto LABEL_26;
        if ( i >= LODWORD(uiWidgets->max_length) )
          goto LABEL_28;
        v23 = &uiWidgets->obj.klass + (int)i;
        v25 = v23[4];
        this = (WarBoardPieceBaseComponent_o *)(v23 + 4);
        v24 = v25;
        if ( !v25 )
          goto LABEL_26;
        if ( SLODWORD(v24->_1.interfaceOffsets) >= 1001 )
        {
          this->klass = 0;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)this, 0, v15, v16, v17, v18, v19, v20);
        }
        uiWidgets = *p_uiWidgets;
      }
      if ( !uiWidgets )
LABEL_26:
        sub_1C942F0(this, v14);
    }
  }
  if ( (int)uiWidgets->max_length >= 1 )
  {
    v26 = 0;
    v27 = (unsigned int)uiWidgets->max_length - 1LL;
    while ( v26 < LODWORD(uiWidgets->max_length) )
    {
      v28 = (UnityEngine_Object_o *)uiWidgets->m_Items[v26];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardPieceBaseComponent_o *)UnityEngine_Object__op_Inequality(v28, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v29 = *p_uiWidgets;
        if ( !*p_uiWidgets )
          goto LABEL_26;
        if ( v26 >= LODWORD(v29->max_length) )
          break;
        this = (WarBoardPieceBaseComponent_o *)v29->m_Items[v26];
        if ( !this )
          goto LABEL_26;
        UIWidget__set_depth((UIWidget_o *)this, LODWORD(this->fields.pieceStatusLabelComponent) + value, 0);
      }
      if ( v27 == v26 )
        return;
      uiWidgets = *p_uiWidgets;
      ++v26;
      if ( !*p_uiWidgets )
        goto LABEL_26;
    }
LABEL_28:
    sub_1C942F8(this);
  }
}


WarBoardServantPieceBuffTurnComponent_o *WarBoardPieceBaseComponent__get_BuffTrunNotice(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


WarBoardPieceData_o *WarBoardPieceBaseComponent__get_PieceData(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.pieceData;
}


WarBoardControlUiDataComponent_o *WarBoardPieceBaseComponent__get_UiDataComp(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.uiDataComp;
}


void WarBoardPieceBaseComponent_ScriptEffectData___ctor(
        WarBoardPieceBaseComponent_ScriptEffectData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardPieceBaseComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2A03A & 1) == 0 )
  {
    sub_1C94098(&WarBoardPieceBaseComponent___c_TypeInfo);
    byte_4D2A03A = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(WarBoardPieceBaseComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardPieceBaseComponent___c_TypeInfo->static_fields->__9 = (struct WarBoardPieceBaseComponent___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)WarBoardPieceBaseComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardPieceBaseComponent___c___ctor(WarBoardPieceBaseComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_int__o *WarBoardPieceBaseComponent___c___GetParticipantVals_b__62_0(
        WarBoardPieceBaseComponent___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return (System_Collections_Generic_IEnumerable_int__o *)WarBoardPieceData__CreatePieceEventVals(x, 0);
}


void WarBoardPieceBaseComponent___c___OnAfterAttack_b__65_3(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2A03D & 1) == 0 )
  {
    sub_1C94098(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4D2A03D = 1;
  }
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__ResumeUiDataAll(0);
}


void WarBoardPieceBaseComponent___c___OnAttack_b__63_1(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D2A03B & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2A03B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v3);
  CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 0.0, 0, 0);
}


void WarBoardPieceBaseComponent___c___OnAttack_b__63_4(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2A03C & 1) == 0 )
  {
    sub_1C94098(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4D2A03C = 1;
  }
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__SetUiDataOnBattleAll(0);
}


void WarBoardPieceBaseComponent___c__DisplayClass48_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__0(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *targetUiWidgets; // x0

  if ( (byte_4D2A03E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_4D2A03E = 1;
  }
  targetUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_1C942F0(0, x);
  System_Collections_Generic_HashSet_object___Add(
    targetUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_371F98C *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *darkenUiWidgets; // x0

  if ( (byte_4D2A03F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_4D2A03F = 1;
  }
  darkenUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_1C942F0(0, x);
  System_Collections_Generic_HashSet_object___Add(
    darkenUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_371F98C *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *targetUiWidgets; // x0

  if ( (byte_4D2A040 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_4D2A040 = 1;
  }
  targetUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_1C942F0(0, x);
  System_Collections_Generic_HashSet_object___Add(
    targetUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_371F98C *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *darkenUiWidgets; // x0

  if ( (byte_4D2A041 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_4D2A041 = 1;
  }
  darkenUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_1C942F0(0, x);
  System_Collections_Generic_HashSet_object___Add(
    darkenUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_371F98C *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void WarBoardPieceBaseComponent___c__DisplayClass61_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  WarBoardSquareData_o *targetSquareData; // x0

  targetSquareData = this->fields.targetSquareData;
  if ( !targetSquareData )
    sub_1C942F0(0, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_4D2A042 & 1) == 0 )
  {
    sub_1C94098(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4D2A042 = 1;
  }
  targetUpdateUiDataSquareIndexes = this->fields.targetUpdateUiDataSquareIndexes;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll(targetUpdateUiDataSquareIndexes, 0, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_4D2A043 & 1) == 0 )
  {
    sub_1C94098(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4D2A043 = 1;
  }
  targetUpdateUiDataSquareIndexes = this->fields.targetUpdateUiDataSquareIndexes;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll(targetUpdateUiDataSquareIndexes, 0, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_g__AddAfterTask_0(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v5; // x1
  WarBoardPieceData_o *targetSquarePiece; // x0
  System_Int32_array *PieceEventVals; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v9; // x0
  WarBoardManager_o *warBoardManager; // x19

  if ( (byte_4D2A044 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C94098(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2A044 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 38, this->fields.pieceEventVals, 0);
  if ( !v3 )
    goto LABEL_13;
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetSquarePiece = this->fields.targetSquarePiece;
  if ( targetSquarePiece )
  {
    PieceEventVals = WarBoardPieceData__CreatePieceEventVals(targetSquarePiece, 0);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    EventTasks = WarBoardManager__GetEventTasks(Instance, 38, PieceEventVals, 0);
    System_Collections_Generic_List_object___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
      (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
LABEL_13:
    sub_1C942F0(Instance, v5);
  v9 = WarBoardManager__GetEventTasks(Instance, 37, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)v9,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_31A7F44 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_object___ToArray(
                                      v3,
                                      (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( warBoardManager )
    {
      WarBoardManager__InsertRunningTask(warBoardManager, (WarBoardTaskBase_array *)Instance, 0);
      return;
    }
    goto LABEL_13;
  }
}


void WarBoardPieceBaseComponent___c__DisplayClass63_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass63_0___OnAttack_b__0(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  WarBoardSquareData_o *targetSquareData; // x0

  targetSquareData = this->fields.targetSquareData;
  if ( !targetSquareData )
    sub_1C942F0(0, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass63_0___OnAttack_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *warBoardManager; // x0

  warBoardManager = this->fields.warBoardManager;
  if ( !warBoardManager )
    sub_1C942F0(0, method);
  WarBoardManager__TransitionBattle(warBoardManager, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass63_1___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass63_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass63_1___OnAttack_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass63_1_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent___c__DisplayClass63_0_o *CS___8__locals1; // x8
  WarBoardPieceBaseComponent___c__DisplayClass63_1_o *v3; // x19
  struct WarBoardPieceBaseComponent___c__DisplayClass63_0_o *v4; // x8
  struct WarBoardManager_o *warBoardManager; // x8
  struct MapCamera_o *mapCamera; // x8
  struct WarBoardPieceBaseComponent___c__DisplayClass63_0_o *v7; // x8
  struct WarBoardManager_o *v8; // x8
  struct MapCamera_o *v9; // x8
  struct WarBoardPieceBaseComponent___c__DisplayClass63_0_o *v10; // x8
  struct WarBoardManager_o *v11; // x8
  struct MapCamera_o *v12; // x8
  struct UnityEngine_Vector2_o *mScrl; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_16;
  v3 = this;
  this = (WarBoardPieceBaseComponent___c__DisplayClass63_1_o *)CS___8__locals1->fields.warBoardManager;
  if ( !this )
    goto LABEL_16;
  WarBoardManager__ClearPartyBuff((WarBoardManager_o *)this, 0);
  v4 = v3->fields.CS___8__locals1;
  if ( !v4 )
    goto LABEL_16;
  warBoardManager = v4->fields.warBoardManager;
  if ( !warBoardManager )
    goto LABEL_16;
  mapCamera = warBoardManager->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_16;
  this = (WarBoardPieceBaseComponent___c__DisplayClass63_1_o *)mapCamera->fields.mZoom;
  if ( !this )
    goto LABEL_16;
  MapZoom__SetZoomSize((MapZoom_o *)this, v3->fields.prevCameraSize, 1, 0, 0);
  v7 = v3->fields.CS___8__locals1;
  if ( !v7 )
    goto LABEL_16;
  v8 = v7->fields.warBoardManager;
  if ( !v8
    || (v9 = v8->fields.mapCamera) == 0
    || (this = (WarBoardPieceBaseComponent___c__DisplayClass63_1_o *)v9->fields.mScrl) == 0
    || (MapScroll__SetScrlPos((MapScroll_o *)this, v3->fields.prevCameraPos, 0), (v10 = v3->fields.CS___8__locals1) == 0)
    || (v11 = v10->fields.warBoardManager) == 0
    || (v12 = v11->fields.mapCamera) == 0
    || (mScrl = (struct UnityEngine_Vector2_o *)v12->fields.mScrl) == 0 )
  {
LABEL_16:
    sub_1C942F0(this, method);
  }
  mScrl[3] = v3->fields.prevCameraPos;
}


void WarBoardPieceBaseComponent___c__DisplayClass65_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *_4__this; // x0

  if ( (byte_4D2A046 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2A046 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
    sub_1C942F0(_4__this, method);
  }
  WarBoardManager__JudgmentGameSet((WarBoardManager_o *)_4__this, 0);
}


bool WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *targetPiece; // x8

  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    sub_1C942F0(this, method);
  return this->fields.moveAfterActionCheck && targetPiece->fields._isDead_k__BackingField;
}


void WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_g__AddAfterAttackEventTask_0(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  WarBoardPieceData_o *targetPiece; // x0
  struct WarBoardManager_o *warBoardManager; // x8
  int32_t id; // w21
  struct WarBoardPieceData_o *v8; // x8
  int32_t breakPoint_k__BackingField; // w23
  WarBoardMessageMaster_o *v10; // x22
  int32_t v11; // w2
  bool v12; // w4
  WarBoardMessageMaster_o *v13; // x0
  int32_t v14; // w1
  int32_t v15; // w3
  System_Int32_array *v16; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v18; // x0
  WarBoardManager_o *v19; // x19

  if ( (byte_4D2A045 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C94098(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    byte_4D2A045 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    goto LABEL_25;
  targetPiece = (WarBoardPieceData_o *)WarBoardPieceData__get_isMaster(targetPiece, 0);
  if ( ((unsigned __int8)targetPiece & 1) != 0 )
  {
    warBoardManager = this->fields.warBoardManager;
    if ( !warBoardManager )
      goto LABEL_25;
    targetPiece = (WarBoardPieceData_o *)warBoardManager->fields._warBoardData_k__BackingField;
    if ( !targetPiece )
      goto LABEL_25;
    id = WarBoardData__get_id((WarBoardData_o *)targetPiece, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    targetPiece = (WarBoardPieceData_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
    v8 = this->fields.targetPiece;
    if ( !v8 )
      goto LABEL_25;
    breakPoint_k__BackingField = v8->fields._breakPoint_k__BackingField;
    v10 = (WarBoardMessageMaster_o *)targetPiece;
    targetPiece = (WarBoardPieceData_o *)WarBoardPieceData__get_isPlayerMaster(this->fields.targetPiece, 0);
    if ( !v10 )
      goto LABEL_25;
    if ( ((unsigned __int8)targetPiece & 1) != 0 )
    {
      v11 = 12;
      v12 = 1;
      v13 = v10;
      v14 = id;
      v15 = breakPoint_k__BackingField;
    }
    else
    {
      v11 = 10;
      v13 = v10;
      v14 = id;
      v15 = breakPoint_k__BackingField;
      v12 = 0;
    }
    targetPiece = (WarBoardPieceData_o *)WarBoardMessageMaster__GetMessageTasks(v13, v14, v11, v15, v12, 0);
    if ( !v3 )
      goto LABEL_25;
    System_Collections_Generic_List_object___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
      (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  targetPiece = (WarBoardPieceData_o *)this->fields.__4__this;
  if ( !targetPiece )
    goto LABEL_25;
  targetPiece = (WarBoardPieceData_o *)WarBoardPieceBaseComponent__GetParticipantVals(
                                         (WarBoardPieceBaseComponent_o *)targetPiece,
                                         this->fields.targetPiece,
                                         0);
  if ( !this->fields.warBoardManager )
    goto LABEL_25;
  v16 = (System_Int32_array *)targetPiece;
  targetPiece = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                         this->fields.warBoardManager,
                                         2,
                                         (System_Int32_array *)targetPiece,
                                         0);
  if ( !v3 )
    goto LABEL_25;
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_25;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)targetPiece, 20, v16, 0);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_25;
  v18 = WarBoardManager__GetEventTasks((WarBoardManager_o *)targetPiece, 40, v16, 0);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)v18,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_31A7F44 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    v19 = this->fields.warBoardManager;
    targetPiece = (WarBoardPieceData_o *)System_Collections_Generic_List_object___ToArray(
                                           v3,
                                           (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( v19 )
    {
      WarBoardManager__InsertRunningTask(v19, (WarBoardTaskBase_array *)targetPiece, 0);
      return;
    }
LABEL_25:
    sub_1C942F0(targetPiece, v4);
  }
}


void WarBoardPieceBaseComponent___c__DisplayClass66_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass66_0___OnWallAttack_b__0(
        WarBoardPieceBaseComponent___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  WarBoardSquareData_o *targetSquareData; // x0

  targetSquareData = this->fields.targetSquareData;
  if ( !targetSquareData )
    sub_1C942F0(0, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass67_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass67_0___OnAfterWallAttack_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *_4__this; // x0

  if ( (byte_4D2A048 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2A048 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
    sub_1C942F0(_4__this, method);
  }
  WarBoardManager__JudgmentGameSet((WarBoardManager_o *)_4__this, 0);
}


bool WarBoardPieceBaseComponent___c__DisplayClass67_0___OnAfterWallAttack_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  struct WarBoardWallData_o *targetWall; // x8

  targetWall = this->fields.targetWall;
  if ( targetWall )
    LOBYTE(targetWall) = targetWall->fields._isDestroy_k__BackingField;
  return (unsigned __int8)targetWall & this->fields.moveAfterActionCheck;
}


void WarBoardPieceBaseComponent___c__DisplayClass67_0___OnAfterWallAttack_g__AddAfterAttackEventTask_0(
        WarBoardPieceBaseComponent___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v5; // x1
  WarBoardManager_o *warBoardManager; // x19

  if ( (byte_4D2A047 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C94098(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2A047 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 27, 0, 0);
  if ( !v3 )
    goto LABEL_9;
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_31A7F44 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_object___ToArray(
                                      v3,
                                      (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( warBoardManager )
    {
      WarBoardManager__InsertRunningTask(warBoardManager, (WarBoardTaskBase_array *)Instance, 0);
      return;
    }
LABEL_9:
    sub_1C942F0(Instance, v5);
  }
}


void WarBoardPieceBaseComponent___c__DisplayClass83_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardPieceBaseComponent___c__DisplayClass83_0___SetEffect_b__0(
        WarBoardPieceBaseComponent___c__DisplayClass83_0_o *this,
        WarBoardPieceBaseComponent_ScriptEffectData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C942F0(this, 0);
  return System_String__op_Equality(a->fields.key, this->fields.effectKey, 0);
}