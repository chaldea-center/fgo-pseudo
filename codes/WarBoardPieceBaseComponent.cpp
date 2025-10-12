void WarBoardPieceBaseComponent___ctor(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C35298 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C32C20(&StringLiteral_6860/*"Frame{0}"*/);
    byte_4C35298 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
  this->fields.listEffectData = (struct System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.listEffectData, (int32_t)v3, v4, v5);
  *(_OWORD *)&this->fields.positionPieceActionPointDefault.fields.x = xmmword_C0CA20;
  *(_QWORD *)&this->fields.positionPieceActionPointNext.fields.y = 1111228416;
  *(_OWORD *)&this->fields.pixelPerSecond = xmmword_C0E0F0;
  this->fields.lengthMoveAttack = 25.0;
  v6 = StringLiteral_6860/*"Frame{0}"*/;
  this->fields.baseFrameName = (struct System_String_o *)StringLiteral_6860/*"Frame{0}"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseFrameName, v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.removeTweenTargetObjects = (struct System_Collections_Generic_List_GameObject__o *)v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.removeTweenTargetObjects, (int32_t)v9, v10, v11);
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
  WarBoardPieceData_o *pieceData; // x0
  System_Int32_array *PieceEventVals; // x20
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  float pixelPerSecond; // s13
  float v15; // s11
  float v16; // s12
  float v17; // s14
  WarBoardMovePerformance_o *v18; // x0
  Il2CppObject *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v26; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v27; // x0
  Il2CppObject *Instance; // x20
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s3.4,4:s4.4,8:s5.4

  z = originalPos.fields.z;
  y = originalPos.fields.y;
  x = originalPos.fields.x;
  if ( (byte_4C3528F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardMovePerformance_TypeInfo);
    byte_4C3528F = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_16;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(pieceData, 0);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 36, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)pieceData, squareIndex, 0);
  pixelPerSecond = this->fields.pixelPerSecond;
  v15 = SquarePosition.fields.x;
  v16 = SquarePosition.fields.y;
  v17 = SquarePosition.fields.z;
  v18 = (WarBoardMovePerformance_o *)sub_1C32E6C(WarBoardMovePerformance_TypeInfo);
  v30.fields.x = x;
  v30.fields.y = y;
  v30.fields.z = z;
  v31.fields.x = v15;
  v31.fields.y = v16;
  v31.fields.z = v17;
  v19 = (Il2CppObject *)v18;
  WarBoardMovePerformance___ctor(v18, gameObject, v30, v31, pixelPerSecond, 0, 0);
  items = v9->fields._items;
  v23 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v9->fields._version;
  if ( !items )
    goto LABEL_16;
  size = v9->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      v19,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v19;
    sub_1C32BC4((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v19, v20, v21);
  }
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData
    || (v26 = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 38, PieceEventVals, 0),
        System_Collections_Generic_List_object___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)v26,
          (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0)
    || (v27 = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 37, 0, 0),
        System_Collections_Generic_List_object___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)v27,
          (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        pieceData = (WarBoardPieceData_o *)System_Collections_Generic_List_object___ToArray(
                                             v9,
                                             (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__),
        !Instance) )
  {
LABEL_16:
    sub_1C32E7C(pieceData);
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
  int32_t controllType_k__BackingField; // w8
  WarBoardManager_o *v5; // x20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x21
  struct WarBoardSeSetting_o *seSetting; // x8
  Il2CppMethodPointer methodPtr; // x2
  const MethodInfo *v10; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  struct WarBoardPieceData_o *v14; // x8
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x21
  struct WarBoardSeSetting_o *v17; // x8
  struct WarBoardPieceData_o *v18; // x8
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x21
  struct WarBoardSeSetting_o *v21; // x8
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x19
  struct WarBoardSeSetting_o *v24; // x8

  if ( (byte_4C35280 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&Method_WarBoardPieceBaseComponent_ClickIcon__);
    byte_4C35280 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  controllType_k__BackingField = Instance->fields._controllType_k__BackingField;
  v5 = Instance;
  if ( controllType_k__BackingField == 1 )
  {
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_41;
    if ( pieceData->fields._isEditing_k__BackingField )
    {
      v12 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1C32C38(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v13 = (System_Reflection_MethodBase_o *)sub_1C32C04(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
      v14 = this->fields.pieceData;
      if ( v14 )
      {
        WarBoardManager__SquareSelect(v5, v14->fields._nowSquareIndex_k__BackingField, 0);
        methodPtr = this->klass->vtable._14_EditPiece.methodPtr;
        v10 = this->klass->vtable._14_EditPiece.method;
        goto LABEL_33;
      }
LABEL_41:
      sub_1C32E7C(Instance);
    }
  }
  else if ( controllType_k__BackingField == 2 )
  {
    if ( WarBoardManager__get_isSelectedPiece(Instance, 0)
      && WarBoardManager__IsSelectedPieceSame(v5, this->fields.pieceData, 0) )
    {
      v6 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C32C38(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v6, v6[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        seSetting = Instance->fields.seSetting;
        if ( seSetting )
        {
          OverwriteAssetSoundName__PlaySe(v7, seSetting->fields.DeselectSe, 0, 0);
          WarBoardManager__DeselectPiece(v5, 1, 0, 0);
          methodPtr = this->klass->vtable._13_HideStatus.methodPtr;
          v10 = this->klass->vtable._13_HideStatus.method;
LABEL_33:
          ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))methodPtr)(this, v10);
          return;
        }
      }
      goto LABEL_41;
    }
    if ( WarBoardManager__get_isSelectedPiece(v5, 0) && this->fields.isSelectable )
    {
      v15 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1C32C38(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v16 = (System_Reflection_MethodBase_o *)sub_1C32C04(v15, v15[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v17 = Instance->fields.seSetting;
        if ( v17 )
        {
          Instance = (WarBoardManager_o *)OverwriteAssetSoundName__PlaySe(v16, v17->fields.SelectSe, 0, 0);
          v18 = this->fields.pieceData;
          if ( v18 )
          {
            WarBoardManager__SelectedPieceAction(v5, v18->fields._nowSquareIndex_k__BackingField, 0);
            return;
          }
        }
      }
      goto LABEL_41;
    }
    if ( WarBoardManager__IsNowTurn(v5, this->fields.pieceData, 0) )
    {
      v19 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v19 = (_QWORD *)sub_1C32C38(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v20 = (System_Reflection_MethodBase_o *)sub_1C32C04(v19, v19[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v21 = Instance->fields.seSetting;
        if ( v21 )
        {
          OverwriteAssetSoundName__PlaySe(v20, v21->fields.SelectSe, 0, 0);
          WarBoardManager__SelectPiece(v5, this->fields.pieceData, 0);
          methodPtr = this->klass->vtable._12_ShowStatus.methodPtr;
          v10 = this->klass->vtable._12_ShowStatus.method;
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
    v22 = Method_WarBoardPieceBaseComponent_ClickIcon__;
    if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
      v22 = (_QWORD *)sub_1C32C38(Method_WarBoardPieceBaseComponent_ClickIcon__);
    v23 = (System_Reflection_MethodBase_o *)sub_1C32C04(v22, v22[4]);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    v24 = Instance->fields.seSetting;
    if ( !v24 )
      goto LABEL_41;
    OverwriteAssetSoundName__PlaySe(v23, v24->fields.OpenSimpleInfoSe, 0, 0);
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
  Il2CppObject *CommonEffectAsset_object; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Object_o *v11; // x21
  Il2CppObject *v12; // x22
  WarBoardCommonEffectPerformance_o *v13; // x0
  Il2CppObject *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Nullable_Vector3__o v21; // 0:x3.16
  System_Nullable_Vector3__o v22; // 0:x5.16

  if ( (byte_4C35295 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardCommonEffectPerformance_TypeInfo);
    sub_1C32C20(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    byte_4C35295 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_31C24D4 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v11 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._41_GetEffectDisplayTransform.methodPtr)(
                                    this,
                                    this->klass->vtable._41_GetEffectDisplayTransform.method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v11, 0, 0) )
      v11 = (UnityEngine_Object_o *)transform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = UnityEngine_Object__Instantiate_object__51812484(
            CommonEffectAsset_object,
            (UnityEngine_Transform_o *)v11,
            (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    v13 = (WarBoardCommonEffectPerformance_o *)sub_1C32E6C(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v21.fields.hasValue = 0;
    *(_QWORD *)&v21.fields.value.fields.y = 0;
    *(_QWORD *)&v22.fields.hasValue = 0;
    *(_QWORD *)&v22.fields.value.fields.y = 0;
    v14 = (Il2CppObject *)v13;
    WarBoardCommonEffectPerformance___ctor(
      v13,
      0,
      (UnityEngine_GameObject_o *)v12,
      v21,
      v22,
      (System_Nullable_Vector3__o)0,
      0,
      0,
      1,
      0);
    if ( v7 )
    {
      items = v7->fields._items;
      v18 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v7->fields._version;
      if ( items )
      {
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            v14,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_17;
        }
        else
        {
          v20 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v14;
          sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
          if ( taskList )
          {
LABEL_17:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v7,
              (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_37974444(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v7,
            0);
          return;
        }
      }
    }
LABEL_21:
    sub_1C32E7C(Instance);
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
  UILabel_o *Instance; // x0
  UnityEngine_GameObject_o *v13; // x22
  WarBoardCommonEffectPerformance_o *v14; // x0
  Il2CppObject *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Nullable_Vector3__o v22; // 0:x3.16
  System_Nullable_Vector3__o v23; // 0:x5.16

  if ( (byte_4C35296 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardCommonEffectPerformance_TypeInfo);
    byte_4C35296 = 1;
  }
  effectDamageBaseObject = (UnityEngine_Object_o *)this->fields.effectDamageBaseObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(0, effectDamageBaseObject, 0) )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
    v13 = this->fields.effectDamageBaseObject;
    v14 = (WarBoardCommonEffectPerformance_o *)sub_1C32E6C(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v22.fields.hasValue = 0;
    *(_QWORD *)&v22.fields.value.fields.y = 0;
    *(_QWORD *)&v23.fields.hasValue = 0;
    *(_QWORD *)&v23.fields.value.fields.y = 0;
    v15 = (Il2CppObject *)v14;
    WarBoardCommonEffectPerformance___ctor(v14, 0, v13, v22, v23, (System_Nullable_Vector3__o)0, 0, 0, 0, 0);
    if ( v10 )
    {
      items = v10->fields._items;
      v19 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v10->fields._version;
      if ( items )
      {
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v15,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_15;
        }
        else
        {
          v21 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v15;
          sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v15, v16, v17);
          if ( taskList )
          {
LABEL_15:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v10,
              (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        Instance = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_37974444(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v10,
            0);
          return;
        }
      }
    }
LABEL_19:
    sub_1C32E7C(Instance);
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

  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
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

  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
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
  const MethodInfo *v20; // x3

  v4 = this;
  if ( (byte_4C35289 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Concat_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__);
    this = (WarBoardPieceBaseComponent_o *)sub_1C32C20(&WarBoardPieceBaseComponent___c_TypeInfo);
    byte_4C35289 = 1;
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
             (const MethodInfo_30F9D18 *)Method_System_Linq_Enumerable_Concat_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v7,
               (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_28:
    sub_1C32E7C(this);
  }
  this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      _9__62_0 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(
        _9__62_0,
        v17,
        Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__,
        0);
      static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      static_fields->__9__62_0 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__62_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__62_0, (int32_t)_9__62_0, v19, v20);
    }
    v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                m_CachedPtr,
                                                                (System_Func_TSource__IEnumerable_TResult___o *)_9__62_0,
                                                                (const MethodInfo_311683C *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v7,
             (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v9 = Method_System_Array_Empty_int___;
  v10 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v10 )
  {
    sub_1C83390(Method_System_Array_Empty_int___);
    v10 = v9[7];
  }
  v11 = *(_QWORD *)(v10 + 16);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C83334(inited);
  if ( !*(_DWORD *)(v11 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v11);
  v12 = *(_QWORD *)(v9[7] + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C83334(inited);
  return **(System_Int32_array ***)(v12 + 184);
}


WarBoardSimpleAnimationPerformance_o *WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x20
  WarBoardSimpleAnimationPerformance_o *v6; // x21

  if ( (byte_4C35291 & 1) == 0 )
  {
    sub_1C32C20(&WarBoardSimpleAnimationPerformance_TypeInfo);
    byte_4C35291 = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v6 = (WarBoardSimpleAnimationPerformance_o *)sub_1C32E6C(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(v6, simpleAnimation, animationName, 0);
  return v6;
}


void WarBoardPieceBaseComponent__HideActionCount(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *currentActionPointRoot; // x0
  UnityEngine_Object_o *currentPieceActionPointRoot; // x20

  if ( (byte_4C35282 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C35282 = 1;
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
    sub_1C32E7C(currentActionPointRoot);
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
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(selectObject, 0, 0);
}


void WarBoardPieceBaseComponent__HideStatus(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v3; // x0
  __int64 v4; // x0
  WarBoardManager_o *v5; // x0

  if ( (byte_4C35285 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_4C35285 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C83334(v2);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C83334(v2);
  v5 = **(WarBoardManager_o ***)(v4 + 184);
  if ( !v5 )
    sub_1C32E7C(0);
  WarBoardManager__HideSimplePopup(v5, 0, 0);
}


void WarBoardPieceBaseComponent__Initialize(
        WarBoardPieceBaseComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  __int64 gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_Transform_o *transform; // x21
  __int64 breakPointMax_k__BackingField; // x21
  struct WarBoardBreakPointComponent_array *v13; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Object_c **v17; // x25
  unsigned __int64 v18; // x29
  float v19; // s8
  __int64 v20; // x23
  int v21; // w26
  float v22; // s9
  __int64 v23; // x27
  Il2CppObject *breakPointPrefab; // x24
  UnityEngine_Transform_o *v25; // x0
  UnityEngine_Object_c *v26; // x8
  UnityEngine_Object_c **v27; // x21
  UnityEngine_Transform_o *v28; // x25
  UnityEngine_GameObject_o *v29; // x25
  WarBoardBreakPointComponent_o *v30; // x24
  struct UIWidget_o *breakPointParent; // x8
  int32_t mDepth; // w28
  bool isMaster; // w25
  const MethodInfo *v34; // x6
  unsigned int *v35; // x25
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x3
  struct WarBoardBreakPointComponent_array *v39; // x8
  float maxSpacing; // s0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  UnityEngine_Transform_array *v43; // x21
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  UnityEngine_Transform_o *v46; // x22
  const MethodInfo *v47; // x2
  int32_t PieceDispPriority; // w0
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x1
  Il2CppObject *CommonEffectAsset_object; // x20
  UnityEngine_Transform_o *v52; // x21
  UnityEngine_Object_o *v53; // x22
  Il2CppObject *v54; // x0
  UnityEngine_GameObject_o **p_effectDamageBaseObject; // x20
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  UnityEngine_Object_o *v58; // x21
  Il2CppObject *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  __int64 v62; // x0
  __int64 v63; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3527C & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&UnityEngine_Transform___TypeInfo);
    sub_1C32C20(&WarBoardBreakPointComponent___TypeInfo);
    sub_1C32C20(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_1C32C20(&StringLiteral_23144/*"root_text/type01/dm_base"*/);
    sub_1C32C20(&StringLiteral_18826/*"ef_dm_base"*/);
    byte_4C3527C = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_26;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.simpleAnimation, (int32_t)Component_object, v7, v8);
  this->fields.pieceData = pieceData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.pieceData, (int32_t)pieceData, v9, v10);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v13 = (struct WarBoardBreakPointComponent_array *)sub_1C32CC8(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v13;
  p_breakPoints = &this->fields.breakPoints;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.breakPoints, (int32_t)v13, v15, v16);
  gameObject = (__int64)this->fields.breakPointParent;
  if ( !gameObject )
    goto LABEL_26;
  v17 = &UnityEngine_Object_TypeInfo;
  if ( (int)breakPointMax_k__BackingField >= 1 )
  {
    v18 = 0;
    v19 = 0.0;
    v20 = 1;
    v21 = 2 * breakPointMax_k__BackingField - 2;
    v22 = (float)*(int *)(gameObject + 168) / (float)(int)breakPointMax_k__BackingField;
    v23 = 8;
    v63 = breakPointMax_k__BackingField;
    while ( 1 )
    {
      breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
      v25 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      v26 = *v17;
      v27 = v17;
      v28 = v25;
      if ( !v26->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v26);
      gameObject = (__int64)UnityEngine_Object__Instantiate_object__51812484(
                              breakPointPrefab,
                              v28,
                              (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
      if ( !gameObject )
        goto LABEL_26;
      v29 = (UnityEngine_GameObject_o *)gameObject;
      v30 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)gameObject,
                                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      gameObject = (__int64)UnityEngine_GameObject__get_transform(v29, 0);
      if ( !gameObject )
        goto LABEL_26;
      v65.fields.y = 0.0;
      v65.fields.z = 0.0;
      v65.fields.x = v19;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v65, 0);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        goto LABEL_26;
      mDepth = breakPointParent->fields.mDepth;
      isMaster = WarBoardPieceData__get_isMaster(pieceData, 0);
      gameObject = WarBoardPieceData__get_isEnemyServant(pieceData, 0);
      if ( !v30 )
        goto LABEL_26;
      WarBoardBreakPointComponent__Initialize(v30, v21 + mDepth, v20, isMaster, gameObject & 1, 0, v34);
      v35 = (unsigned int *)*p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_26;
      gameObject = sub_1C32D5C(v30, *(_QWORD *)(*(_QWORD *)v35 + 64LL));
      if ( !gameObject )
        goto LABEL_57;
      if ( v18 >= v35[6] )
        goto LABEL_56;
      *(_QWORD *)&v35[v23] = v30;
      sub_1C32BC4((CGThumbnailListItem_o *)&v35[v23], (int32_t)v30, v36, v37);
      v39 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_26;
      if ( v18 >= LODWORD(v39->max_length) )
        goto LABEL_56;
      v17 = v27;
      gameObject = *(__int64 *)((char *)&v39->obj.klass + v23 * 4);
      if ( !gameObject )
        goto LABEL_26;
      WarBoardBreakPointComponent__SetActive(
        (WarBoardBreakPointComponent_o *)gameObject,
        (__int64)v18 < pieceData->fields._breakPoint_k__BackingField,
        0,
        v38);
      if ( v63 == v20 )
        break;
      maxSpacing = v30->fields.maxSpacing;
      gameObject = (__int64)this->fields.breakPointParent;
      ++v18;
      v21 -= 2;
      if ( maxSpacing >= v22 )
        maxSpacing = v22;
      ++v20;
      v19 = v19 + maxSpacing;
      v23 += 2;
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
  sub_1C32BC4((CGThumbnailListItem_o *)&pieceData->fields.pieceComponent, (int32_t)this, v41, v42);
  if ( pieceData->fields._isDead_k__BackingField )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_26;
LABEL_30:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    return;
  }
  v43 = (UnityEngine_Transform_array *)sub_1C32CC8(UnityEngine_Transform___TypeInfo, 1);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v43 )
    goto LABEL_26;
  v46 = (UnityEngine_Transform_o *)gameObject;
  if ( gameObject )
  {
    gameObject = sub_1C32D5C(gameObject, v43->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_57:
      v62 = sub_1C32EA0();
      sub_1C32D48(v62, 0);
    }
  }
  if ( !LODWORD(v43->max_length) )
LABEL_56:
    sub_1C32E84(gameObject);
  v43->m_Items[0] = v46;
  sub_1C32BC4((CGThumbnailListItem_o *)v43->m_Items, (int32_t)v46, v44, v45);
  WarBoardPieceBaseComponent__SetButtonTweenTarget(this, v43, v47);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_26;
  gameObject = *(_QWORD *)(gameObject + 440);
  if ( !gameObject )
    goto LABEL_26;
  PieceDispPriority = WarBoardData__GetPieceDispPriority((WarBoardData_o *)gameObject, pieceData, 0);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v49);
  WarBoardPieceBaseComponent__UpdateUiByBuffChanged(this, v50);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_26;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)gameObject,
                               (System_String_o *)StringLiteral_18826/*"ef_dm_base"*/,
                               (const MethodInfo_31C24D4 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !(*v17)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v17);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0, 0) )
  {
    v52 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v53 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._41_GetEffectDisplayTransform.methodPtr)(
                                    this,
                                    this->klass->vtable._41_GetEffectDisplayTransform.method);
    if ( !(*v17)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v17);
    if ( UnityEngine_Object__op_Inequality(v53, 0, 0) )
      v52 = (UnityEngine_Transform_o *)v53;
    if ( !(*v17)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v17);
    v54 = UnityEngine_Object__Instantiate_object__51812484(
            CommonEffectAsset_object,
            v52,
            (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    this->fields.effectDamageBaseObject = (struct UnityEngine_GameObject_o *)v54;
    p_effectDamageBaseObject = &this->fields.effectDamageBaseObject;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.effectDamageBaseObject, (int32_t)v54, v56, v57);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.effectDamageBaseObject, 0, 0) )
    {
      v58 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                      *p_effectDamageBaseObject,
                                      (System_String_o *)StringLiteral_23144/*"root_text/type01/dm_base"*/,
                                      0);
      if ( !(*v17)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v17);
      gameObject = UnityEngine_Object__op_Inequality(v58, 0, 0);
      if ( (gameObject & 1) != 0 )
      {
        if ( !v58 )
          goto LABEL_26;
        v59 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)v58,
                (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        this->fields.effectDamageBaseLabel = (struct UILabel_o *)v59;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.effectDamageBaseLabel, (int32_t)v59, v60, v61);
      }
      gameObject = (__int64)*p_effectDamageBaseObject;
      if ( !*p_effectDamageBaseObject )
LABEL_26:
        sub_1C32E7C(gameObject);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x19
  Il2CppObject *Instance; // x0
  WarBoardData_o **v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  WarBoardPieceData_o *Piece_37788996; // x0
  WarBoardData_o **v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x24
  WarBoardTaskBase_TaskCallback_o *v19; // x25
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  float32x2_t v29; // d9
  float v30; // s10
  float z; // s8
  float32x2_t v32; // d0 OVERLAPPED
  float32x2_t v33; // d9
  float v34; // s8
  float v35; // s10
  float32x2_t v36; // d9
  float v37; // s8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s10
  float v40; // s0
  unsigned __int64 v41; // d1
  float v42; // s0
  __int64 v43; // x24
  WarBoardTaskBase_TaskCallback_o *v44; // x25
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct WarBoardPieceData_o *v47; // x8
  UnityEngine_GameObject_o *v48; // x26
  float v49; // s8
  float v50; // s9
  float v51; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float v55; // s14
  WarBoardMovePerformance_o *v56; // x0
  WarBoardTaskBase_o *v57; // x25
  bool IsEnabledMovedAfterDefend; // w0
  System_Func_bool__o *v59; // x23
  __int64 v60; // x21
  System_Delegate_o **v61; // x22
  System_Delegate_o *v62; // x23
  WarBoardPieceBaseComponent___c_c *v63; // x0
  WarBoardTaskBase_TaskCallback_o *_9__65_3; // x24
  Il2CppObject *v65; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v66; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  System_Delegate_o *v69; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  System_Delegate_o *v72; // x8
  WarBoardTaskBase_TaskCallback_c *v73; // x1
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  struct System_Object_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  Il2CppClass **v79; // x0
  unsigned __int64 v80; // [xsp+0h] [xbp-A0h]
  __int64 v81; // [xsp+0h] [xbp-A0h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4C3528C & 1) == 0 )
  {
    sub_1C32C20(&System_Func_bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__);
    sub_1C32C20(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__);
    sub_1C32C20(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__);
    sub_1C32C20(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__);
    sub_1C32C20(&WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo);
    sub_1C32C20(&WarBoardPieceBaseComponent___c_TypeInfo);
    sub_1C32C20(&WarBoardCallbackTask_TypeInfo);
    sub_1C32C20(&WarBoardConditionalJumpTask_TypeInfo);
    sub_1C32C20(&WarBoardMovePerformance_TypeInfo);
    byte_4C3528C = 1;
  }
  v5 = sub_1C32E6C(WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass65_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass65_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_60;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v7, v8);
  *(_DWORD *)(v5 + 52) = squareIndex;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v5 + 24) = Instance;
  v11 = (WarBoardData_o **)(v5 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)Instance, v12, v13);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_60;
  gameObject = *(WarBoardData_o **)(*(_QWORD *)(v5 + 24) + 440LL);
  if ( !gameObject )
    goto LABEL_60;
  Piece_37788996 = WarBoardData__GetPiece_37788996(gameObject, *(_DWORD *)(v5 + 52), 0);
  *(_QWORD *)(v5 + 16) = Piece_37788996;
  v15 = (WarBoardData_o **)(v5 + 16);
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Piece_37788996, v16, v17);
  v18 = sub_1C32E6C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v18, 0, 0);
  v19 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__,
    0);
  if ( !v18 )
    goto LABEL_60;
  *(_QWORD *)(v18 + 32) = v19;
  sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 32), (int32_t)v19, v20, v21);
  if ( !v9 )
    goto LABEL_60;
  items = v9->fields._items;
  v25 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v9->fields._version;
  if ( !items )
    goto LABEL_60;
  size = v9->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v18,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v27[4] = (Il2CppClass *)v18;
    sub_1C32BC4((CGThumbnailListItem_o *)(v27 + 4), v18, v22, v23);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_60;
  gameObject = *v11;
  if ( !*v11 )
    goto LABEL_60;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0);
  gameObject = *(WarBoardData_o **)(v5 + 24);
  *(UnityEngine_Vector3_o *)(v5 + 40) = SquarePosition;
  if ( !gameObject )
    goto LABEL_60;
  *(UnityEngine_Vector3_o *)v32.n64_u64 = WarBoardManager__GetSquarePosition(
                                            (WarBoardManager_o *)gameObject,
                                            *(_DWORD *)(v5 + 52),
                                            0);
  v29.n64_u64[0] = *(unsigned __int64 *)(v5 + 40);
  v30 = *(float *)(v5 + 48);
  z = v83.fields.z;
  v32.n64_u32[1] = LODWORD(v83.fields.y);
  if ( !byte_4C313D3 )
  {
    v80 = v32.n64_u64[0];
    sub_1C32C20(&System_Math_TypeInfo);
    v32.n64_u64[0] = v80;
    byte_4C313D3 = 1;
  }
  v33.n64_u64[0] = vsub_f32(v32, v29).n64_u64[0];
  v34 = z - v30;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v35 = vaddv_f32(vmul_f32(v33, v33)) + (float)(v34 * v34);
  if ( !byte_4C313D4 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C313D4 = 1;
  }
  v83.fields.y = sqrtf(v35);
  v81 = *(_QWORD *)&v83.fields.y;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    *(_QWORD *)&v83.fields.y = v81;
  }
  if ( v83.fields.y <= 0.00001 )
  {
    if ( !byte_4C313D1 )
    {
      sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v36.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    v37 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v36.n64_u64[0] = vdiv_f32(v33, vdup_lane_s32(*(int32x2_t *)&v83.fields.y, 0)).n64_u64[0];
    v37 = v34 / v83.fields.y;
  }
  gameObject = *v15;
  if ( !*v15 )
    goto LABEL_60;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant((WarBoardPieceData_o *)gameObject, 0) )
    lengthOnAttack = this->fields.lengthOnEncount;
  v40 = *(float *)&v81 - lengthOnAttack;
  if ( (float)(*(float *)&v81 - lengthOnAttack) > 0.0 )
  {
    v41 = vadd_f32(vmul_n_f32(v36, v40), *(float32x2_t *)(v5 + 40)).n64_u64[0];
    v42 = (float)(v37 * v40) + *(float *)(v5 + 48);
    *(_QWORD *)(v5 + 40) = v41;
    *(float *)(v5 + 48) = v42;
  }
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_60;
  WarBoardPieceData__CreatePieceEventVals((WarBoardPieceData_o *)gameObject, 0);
  v43 = sub_1C32E6C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v43, 0, 0);
  v44 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v44,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__,
    0);
  if ( !v43 )
    goto LABEL_60;
  *(_QWORD *)(v43 + 32) = v44;
  sub_1C32BC4((CGThumbnailListItem_o *)(v43 + 32), (int32_t)v44, v45, v46);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v47 = this->fields.pieceData;
  if ( !v47 )
    goto LABEL_60;
  v48 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v5 + 24);
  if ( !gameObject )
    goto LABEL_60;
  v49 = *(float *)(v5 + 40);
  v50 = *(float *)(v5 + 44);
  v51 = *(float *)(v5 + 48);
  v84 = WarBoardManager__GetSquarePosition(
          (WarBoardManager_o *)gameObject,
          v47->fields._nowSquareIndex_k__BackingField,
          0);
  pixelPerSecond = this->fields.pixelPerSecond;
  x = v84.fields.x;
  y = v84.fields.y;
  v55 = v84.fields.z;
  v56 = (WarBoardMovePerformance_o *)sub_1C32E6C(WarBoardMovePerformance_TypeInfo);
  v85.fields.x = v49;
  v85.fields.y = v50;
  v85.fields.z = v51;
  v86.fields.x = x;
  v86.fields.y = y;
  v86.fields.z = v55;
  v57 = (WarBoardTaskBase_o *)v56;
  WarBoardMovePerformance___ctor(v56, v48, v85, v86, pixelPerSecond, 0, 0);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_60;
  if ( WarBoardPieceData__IsEnabledMoveAfterAttack((WarBoardPieceData_o *)gameObject, 0) )
  {
    gameObject = *v15;
    if ( !*v15 )
      goto LABEL_60;
    IsEnabledMovedAfterDefend = WarBoardPieceData__IsEnabledMovedAfterDefend((WarBoardPieceData_o *)gameObject, 0);
  }
  else
  {
    IsEnabledMovedAfterDefend = 0;
  }
  *(_BYTE *)(v5 + 56) = IsEnabledMovedAfterDefend;
  v59 = (System_Func_bool__o *)sub_1C32E6C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v59,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__,
    0);
  v60 = sub_1C32E6C(WarBoardConditionalJumpTask_TypeInfo);
  WarBoardConditionalJumpTask___ctor((WarBoardConditionalJumpTask_o *)v60, v59, (WarBoardTaskBase_o *)v43, v57, 0);
  if ( !v60 )
LABEL_60:
    sub_1C32E7C(gameObject);
  v61 = (System_Delegate_o **)(v60 + 40);
  v62 = *(System_Delegate_o **)(v60 + 40);
  v63 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v63 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  _9__65_3 = v63->static_fields->__9__65_3;
  if ( !_9__65_3 )
  {
    if ( !v63->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v63);
      v63 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    v65 = (Il2CppObject *)v63->static_fields->__9;
    _9__65_3 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__65_3,
      v65,
      Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__,
      0);
    v66 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v66->__9__65_3 = _9__65_3;
    sub_1C32BC4((CGThumbnailListItem_o *)&v66->__9__65_3, (int32_t)_9__65_3, v67, v68);
  }
  v69 = System_Delegate__Combine(v62, (System_Delegate_o *)_9__65_3, 0);
  v72 = v69;
  if ( v69 )
  {
    v73 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v69->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v61 = v69;
      if ( (WarBoardTaskBase_TaskCallback_c *)v69->klass == v73 )
        goto LABEL_54;
    }
    sub_1C3313C(v69);
  }
  *v61 = v72;
LABEL_54:
  sub_1C32BC4((CGThumbnailListItem_o *)(v60 + 40), (int32_t)v72, v70, v71);
  v76 = v9->fields._items;
  v77 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v9->fields._version;
  if ( !v76 )
    goto LABEL_60;
  v78 = v9->fields._size;
  if ( (unsigned int)v78 >= LODWORD(v76->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v60,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
  }
  else
  {
    v79 = &v76->obj.klass + v78;
    v9->fields._size = v78 + 1;
    v79[4] = (Il2CppClass *)v60;
    sub_1C32BC4((CGThumbnailListItem_o *)(v79 + 4), v60, v74, v75);
  }
  gameObject = *v11;
  if ( !*v11 )
    goto LABEL_60;
  WarBoardManager__AddTask_37974444(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v9,
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  Il2CppObject *Instance; // x0
  WarBoardData_o **v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  WarBoardWallData_o *Wall; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x23
  WarBoardTaskBase_TaskCallback_o *v18; // x24
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  int32x2_t v28; // d3
  float32x2_t v29; // d9
  float v30; // s10
  float v31; // s2
  float v32; // s8
  unsigned __int32 v33; // s1
  float32x2_t v34; // d0 OVERLAPPED
  float32x2_t v35; // d9
  float v36; // s8
  float v37; // s10
  float32x2_t v38; // d0
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v41; // s2
  float v42; // s1
  __int64 v43; // x23
  WarBoardTaskBase_TaskCallback_o *v44; // x24
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct WarBoardPieceData_o *v47; // x8
  UnityEngine_GameObject_o *v48; // x25
  float v49; // s8
  float v50; // s9
  float v51; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float v55; // s14
  WarBoardMovePerformance_o *v56; // x0
  WarBoardTaskBase_o *v57; // x24
  System_Func_bool__o *v58; // x25
  WarBoardConditionalJumpTask_o *v59; // x19
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  unsigned __int64 v66; // [xsp+0h] [xbp-A0h]
  unsigned __int64 v67; // [xsp+0h] [xbp-A0h]
  unsigned __int32 v68; // [xsp+0h] [xbp-A0h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4C3528E & 1) == 0 )
  {
    sub_1C32C20(&System_Func_bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__);
    sub_1C32C20(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__);
    sub_1C32C20(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__);
    sub_1C32C20(&WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo);
    sub_1C32C20(&WarBoardCallbackTask_TypeInfo);
    sub_1C32C20(&WarBoardConditionalJumpTask_TypeInfo);
    sub_1C32C20(&WarBoardMovePerformance_TypeInfo);
    byte_4C3528E = 1;
  }
  v5 = sub_1C32E6C(WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass67_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass67_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_40;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8);
  *(_DWORD *)(v5 + 44) = squareIndex;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v5 + 16) = Instance;
  v11 = (WarBoardData_o **)(v5 + 16);
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Instance, v12, v13);
  if ( !*(_QWORD *)(v5 + 16) )
    goto LABEL_40;
  gameObject = *(WarBoardData_o **)(*(_QWORD *)(v5 + 16) + 440LL);
  if ( !gameObject )
    goto LABEL_40;
  Wall = WarBoardData__GetWall(gameObject, *(_DWORD *)(v5 + 44), 1, 0);
  *(_QWORD *)(v5 + 48) = Wall;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 48), (int32_t)Wall, v15, v16);
  v17 = sub_1C32E6C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v17, 0, 0);
  v18 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__,
    0);
  if ( !v17 )
    goto LABEL_40;
  *(_QWORD *)(v17 + 32) = v18;
  sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 32), (int32_t)v18, v19, v20);
  if ( !v9 )
    goto LABEL_40;
  items = v9->fields._items;
  v24 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v9->fields._version;
  if ( !items )
    goto LABEL_40;
  size = v9->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v17,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v17;
    sub_1C32BC4((CGThumbnailListItem_o *)(v26 + 4), v17, v21, v22);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_40;
  gameObject = *v11;
  if ( !*v11 )
    goto LABEL_40;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0);
  gameObject = *(WarBoardData_o **)(v5 + 16);
  *(UnityEngine_Vector3_o *)(v5 + 32) = SquarePosition;
  if ( !gameObject )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)v34.n64_u64 = WarBoardManager__GetSquarePosition(
                                            (WarBoardManager_o *)gameObject,
                                            *(_DWORD *)(v5 + 44),
                                            0);
  v29.n64_u64[0] = *(unsigned __int64 *)(v5 + 32);
  v30 = *(float *)(v5 + 40);
  v32 = v31;
  v34.n64_u32[1] = v33;
  if ( !byte_4C313D3 )
  {
    v66 = v34.n64_u64[0];
    sub_1C32C20(&System_Math_TypeInfo);
    v34.n64_u64[0] = v66;
    byte_4C313D3 = 1;
  }
  v35.n64_u64[0] = vsub_f32(v34, v29).n64_u64[0];
  v36 = v32 - v30;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v37 = vaddv_f32(vmul_f32(v35, v35)) + (float)(v36 * v36);
  if ( !byte_4C313D4 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C313D4 = 1;
  }
  v28.n64_f32[0] = sqrtf(v37);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    v67 = v28.n64_u64[0];
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v28.n64_u64[0] = v67;
  }
  if ( v28.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_4C313D1 )
    {
      v68 = v28.n64_u32[0];
      sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      v28.n64_u32[0] = v68;
      byte_4C313D1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v38.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    v38.n64_u64[0] = vdiv_f32(v35, vdup_lane_s32(v28, 0)).n64_u64[0];
    z = v36 / v28.n64_f32[0];
  }
  v41 = v28.n64_f32[0] - this->fields.lengthOnAttack;
  if ( v41 > 0.0 )
  {
    v42 = (float)(z * v41) + *(float *)(v5 + 40);
    *(float32x2_t *)(v5 + 32) = vadd_f32(vmul_n_f32(v38, v41), *(float32x2_t *)(v5 + 32));
    *(float *)(v5 + 40) = v42;
  }
  v43 = sub_1C32E6C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v43, 0, 0);
  v44 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v44,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__,
    0);
  if ( !v43 )
    goto LABEL_40;
  *(_QWORD *)(v43 + 32) = v44;
  sub_1C32BC4((CGThumbnailListItem_o *)(v43 + 32), (int32_t)v44, v45, v46);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v47 = this->fields.pieceData;
  if ( !v47 )
    goto LABEL_40;
  v48 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v5 + 16);
  if ( !gameObject )
    goto LABEL_40;
  v49 = *(float *)(v5 + 32);
  v50 = *(float *)(v5 + 36);
  v51 = *(float *)(v5 + 40);
  v70 = WarBoardManager__GetSquarePosition(
          (WarBoardManager_o *)gameObject,
          v47->fields._nowSquareIndex_k__BackingField,
          0);
  pixelPerSecond = this->fields.pixelPerSecond;
  x = v70.fields.x;
  y = v70.fields.y;
  v55 = v70.fields.z;
  v56 = (WarBoardMovePerformance_o *)sub_1C32E6C(WarBoardMovePerformance_TypeInfo);
  v71.fields.x = v49;
  v71.fields.y = v50;
  v71.fields.z = v51;
  v72.fields.x = x;
  v72.fields.y = y;
  v72.fields.z = v55;
  v57 = (WarBoardTaskBase_o *)v56;
  WarBoardMovePerformance___ctor(v56, v48, v71, v72, pixelPerSecond, 0, 0);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_40;
  *(_BYTE *)(v5 + 56) = WarBoardPieceData__IsEnabledMoveAfterAttack((WarBoardPieceData_o *)gameObject, 0);
  v58 = (System_Func_bool__o *)sub_1C32E6C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v58,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__,
    0);
  v59 = (WarBoardConditionalJumpTask_o *)sub_1C32E6C(WarBoardConditionalJumpTask_TypeInfo);
  WarBoardConditionalJumpTask___ctor(v59, v58, (WarBoardTaskBase_o *)v43, v57, 0);
  v62 = v9->fields._items;
  v63 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v9->fields._version;
  if ( !v62 )
    goto LABEL_40;
  v64 = v9->fields._size;
  if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v59,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
  }
  else
  {
    v65 = &v62->obj.klass + v64;
    v9->fields._size = v64 + 1;
    v65[4] = (Il2CppClass *)v59;
    sub_1C32BC4((CGThumbnailListItem_o *)(v65 + 4), (int32_t)v59, v60, v61);
  }
  gameObject = *v11;
  if ( !*v11 )
LABEL_40:
    sub_1C32E7C(gameObject);
  WarBoardManager__AddTask_37974444(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v9,
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 *v9; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceData_o *v11; // x22
  float x; // s11
  float y; // s9
  float z; // s10
  float v15; // s8
  float v16; // s12
  WarBoardSquareData_o *Square; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_object__o *v20; // x20
  const MethodInfo *v21; // x2
  System_Int32_array *ParticipantVals; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v24; // x0
  __int64 v25; // x25
  WarBoardTaskBase_TaskCallback_c **v26; // x19
  System_Delegate_o **v27; // x26
  System_Delegate_o *v28; // x27
  WarBoardTaskBase_TaskCallback_o *v29; // x28
  System_Delegate_o *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  WarBoardPieceBaseComponent_c *v33; // x8
  WarBoardTaskBase_TaskCallback_c *v34; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  float v41; // s13
  float v42; // s14
  float v43; // s12
  float v44; // s8
  float v45; // s14
  float v46; // s13
  float v47; // s15
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s12
  float v50; // s0
  float v51; // s3
  float v52; // s1
  float v53; // s2
  float v54; // s0
  float v55; // s15
  float v56; // s8
  float v57; // s13
  UnityEngine_GameObject_o *gameObject; // x0
  float pixelPerSecond; // s12
  UnityEngine_GameObject_o *v60; // x26
  WarBoardMovePerformance_o *v61; // x0
  Il2CppObject *v62; // x25
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x0
  System_Collections_Generic_List_object__o *v69; // x25
  System_Collections_Generic_List_WarBoardTaskBase__o *v70; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v71; // x0
  float lengthMoveAttack; // s0
  float v73; // s8
  float v74; // s12
  float v75; // s13
  UnityEngine_GameObject_o *v76; // x0
  float v77; // s14
  UnityEngine_GameObject_o *v78; // x21
  WarBoardMovePerformance_o *v79; // x0
  WarBoardTaskBase_o *v80; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *v81; // x21
  WarBoardMessageMaster_o *v82; // x23
  int32_t id; // w26
  System_Collections_Generic_List_object__o *v84; // x0
  int32_t breakPoint_k__BackingField; // w27
  int32_t v86; // w2
  bool v87; // w4
  WarBoardMessageMaster_o *v88; // x0
  int32_t v89; // w1
  int32_t v90; // w3
  __int64 v91; // x24
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  Il2CppObject **v94; // x22
  float lengthOnEncount; // s0
  float v96; // s1
  float v97; // s12
  float v98; // s2
  float v99; // s0
  float v100; // s8
  float v101; // s14
  float v102; // s9
  float v103; // s11
  float v104; // s15
  float v105; // s13
  float v106; // s14
  float v107; // s10
  float v108; // s12
  float v109; // s13
  float v110; // s14
  float v111; // s15
  struct UnityEngine_Vector3_StaticFields *v112; // x8
  float v113; // s1
  _QWORD *monitor; // x8
  __int64 v115; // x8
  float v116; // s10
  float ZoomSize; // s0
  __int64 v118; // x8
  __int64 v119; // x8
  __int64 v120; // x8
  const MethodInfo_38C2B00 *v121; // x2
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  __int64 v123; // x8
  WarBoardManager_o *v124; // x23
  float v125; // s8
  float v126; // s10
  float encountCameraSize; // s0
  System_Nullable_float__o p_size; // x0
  System_Nullable_float__o v129; // x3
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  struct System_Object_array *v132; // x8
  _QWORD *v133; // x9
  __int64 v134; // x10
  __int64 v135; // x1
  Il2CppClass **v136; // x0
  System_Collections_Generic_IEnumerable_T__o *v137; // x23
  int32_t v138; // w2
  const MethodInfo *v139; // x3
  WarBoardTaskBase_array *v140; // x23
  WarBoardManager_o *v141; // x24
  int v142; // s0 OVERLAPPED
  int32_t v145; // w2
  const MethodInfo *v146; // x3
  WarBoardTaskBase_o *v147; // x24
  int32_t v148; // w2
  const MethodInfo *v149; // x3
  WarBoardTaskBase_o *v150; // x24
  const MethodInfo *v151; // x2
  int32_t v152; // w2
  const MethodInfo *v153; // x3
  WarBoardTaskBase_o *v154; // x22
  WarBoardOrthostichySchedule_o *v155; // x22
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  WarBoardParallelSchedule_o *v158; // x21
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  struct System_Object_array *v161; // x8
  _QWORD *v162; // x9
  __int64 v163; // x10
  Il2CppClass **v164; // x0
  CGThumbnailListItem_o *v165; // x0
  int32_t v166; // w1
  int32_t v167; // w2
  const MethodInfo *v168; // x3
  WarBoardPieceBaseComponent___c_c *v169; // x8
  System_Action_o *_9__63_1; // x23
  Il2CppObject *v171; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v172; // x0
  int32_t v173; // w2
  const MethodInfo *v174; // x3
  struct UIWidget_o **p_breakPointParent; // x23
  System_Delegate_o *breakPointParent; // x25
  WarBoardTaskBase_TaskCallback_o *v177; // x26
  System_Delegate_o *v178; // x0
  int32_t v179; // w2
  const MethodInfo *v180; // x3
  WarBoardTaskBase_TaskCallback_c *v181; // x1
  int32_t v182; // w2
  const MethodInfo *v183; // x3
  struct System_Object_array *v184; // x8
  _QWORD *v185; // x9
  __int64 v186; // x10
  Il2CppClass **v187; // x0
  System_Delegate_o *v188; // x23
  Il2CppObject *v189; // x22
  WarBoardTaskBase_TaskCallback_o *v190; // x24
  WarBoardPieceBaseComponent_c *v191; // x0
  WarBoardTaskBase_TaskCallback_c *v192; // x1
  System_Delegate_o *v193; // x22
  WarBoardPieceBaseComponent___c_c *v194; // x0
  WarBoardTaskBase_TaskCallback_o *_9__63_4; // x23
  Il2CppObject *v196; // x24
  struct WarBoardPieceBaseComponent___c_StaticFields *v197; // x0
  int32_t v198; // w2
  const MethodInfo *v199; // x3
  WarBoardPieceBaseComponent_c *v200; // x0
  int32_t v201; // w2
  const MethodInfo *v202; // x3
  WarBoardTaskBase_TaskCallback_c *v203; // x1
  __int64 v204; // x0
  float v205; // [xsp+0h] [xbp-E0h]
  float v206; // [xsp+4h] [xbp-DCh]
  float v207; // [xsp+10h] [xbp-D0h]
  float v208; // [xsp+14h] [xbp-CCh]
  WarBoardManager_o **v209; // [xsp+18h] [xbp-C8h]
  float v210; // [xsp+24h] [xbp-BCh]
  System_Nullable_float__o size; // [xsp+28h] [xbp-B8h] BYREF
  System_Nullable_Vector3__o v212; // [xsp+30h] [xbp-B0h] BYREF
  System_Nullable_Vector3__o v213; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v215; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v216; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v217; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v218; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v219; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v220; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v221; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4C3528A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C32C20(&Method_System_Nullable_Vector3___ctor__);
    sub_1C32C20(&Method_System_Nullable_float___ctor__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__);
    sub_1C32C20(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__);
    sub_1C32C20(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__);
    sub_1C32C20(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__);
    sub_1C32C20(&WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo);
    sub_1C32C20(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__);
    sub_1C32C20(&WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo);
    sub_1C32C20(&WarBoardPieceBaseComponent___c_TypeInfo);
    sub_1C32C20(&WarBoardCallbackTask_TypeInfo);
    sub_1C32C20(&WarBoardMovePerformance_TypeInfo);
    sub_1C32C20(&WarBoardOrthostichySchedule_TypeInfo);
    sub_1C32C20(&WarBoardParallelSchedule_TypeInfo);
    sub_1C32C20(&WarBoardTaskBase___TypeInfo);
    sub_1C32C20(&StringLiteral_8939/*"MasterDamage"*/);
    byte_4C3528A = 1;
  }
  v5 = sub_1C32E6C(WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass63_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass63_0_o *)v5, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v5 )
    goto LABEL_157;
  *(_QWORD *)(v5 + 24) = Instance;
  v9 = (__int64 *)(v5 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), Instance, v7, v8);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_157;
  Instance = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 440LL);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardData__GetPiece_37788996((WarBoardData_o *)Instance, squareIndex, 0);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_157;
  v11 = (WarBoardPieceData_o *)Instance;
  Instance = *v9;
  if ( !*v9 )
    goto LABEL_157;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0);
  Instance = *v9;
  if ( !*v9 )
    goto LABEL_157;
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v215 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, squareIndex, 0);
  v210 = v215.fields.x;
  if ( !*v9 )
    goto LABEL_157;
  Instance = *(_QWORD *)(*v9 + 440);
  if ( !Instance )
    goto LABEL_157;
  v15 = v215.fields.y;
  v16 = v215.fields.z;
  Square = WarBoardData__GetSquare((WarBoardData_o *)Instance, squareIndex, 0);
  *(_QWORD *)(v5 + 16) = Square;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Square, v18, v19);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  ParticipantVals = WarBoardPieceBaseComponent__GetParticipantVals(this, v11, v21);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 42, ParticipantVals, 0);
  if ( !v20 )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 43, ParticipantVals, 0);
  System_Collections_Generic_List_object___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v209 = (WarBoardManager_o **)(v5 + 24);
  v24 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 41, ParticipantVals, 0);
  System_Collections_Generic_List_object___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)v24,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v25 = sub_1C32E6C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v25, 0, 0);
  if ( !v25 )
    goto LABEL_157;
  v26 = &WarBoardTaskBase_TaskCallback_TypeInfo;
  v27 = (System_Delegate_o **)(v25 + 32);
  v28 = *(System_Delegate_o **)(v25 + 32);
  v29 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v29,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__,
    0);
  v30 = System_Delegate__Combine(v28, (System_Delegate_o *)v29, 0);
  v33 = (WarBoardPieceBaseComponent_c *)v30;
  if ( v30 )
  {
    v34 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v30->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_152;
    *v27 = v30;
    if ( (WarBoardTaskBase_TaskCallback_c *)v30->klass != v34 )
      goto LABEL_152;
  }
  else
  {
    *v27 = 0;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)(v25 + 32), (int32_t)v30, v31, v32);
  items = v20->fields._items;
  v38 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v20->fields._version;
  if ( !items )
    goto LABEL_157;
  v39 = v20->fields._size;
  if ( (unsigned int)v39 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)v25,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &items->obj.klass + v39;
    v20->fields._size = v39 + 1;
    v40[4] = (Il2CppClass *)v25;
    sub_1C32BC4((CGThumbnailListItem_o *)(v40 + 4), v25, v35, v36);
  }
  if ( !byte_4C313D3 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C313D3 = 1;
  }
  v207 = v16;
  v208 = v15;
  v41 = v15 - y;
  v42 = v210 - x;
  v43 = v16 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4C313D4 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C313D4 = 1;
  }
  Instance = (__int64)System_Math_TypeInfo;
  v44 = sqrtf((float)(v43 * v43) + (float)((float)(v42 * v42) + (float)(v41 * v41)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v44 <= 0.00001 )
  {
    if ( !byte_4C313D1 )
    {
      Instance = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v45 = static_fields->zeroVector.fields.x;
    v46 = static_fields->zeroVector.fields.y;
    v47 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v45 = v42 / v44;
    v46 = v41 / v44;
    v47 = v43 / v44;
  }
  if ( !v11 )
    goto LABEL_157;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant(v11, 0) )
    lengthOnAttack = this->fields.lengthOnEncount;
  v50 = v44 - lengthOnAttack;
  if ( (float)(v44 - lengthOnAttack) > 0.0 )
  {
    v51 = v47;
    v206 = v46;
    v52 = v45 * v50;
    v53 = v46 * v50;
    v54 = v47 * v50;
    v55 = y;
    v56 = x;
    v205 = v51;
    x = x + v52;
    y = y + v53;
    v57 = z + v54;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    pixelPerSecond = this->fields.pixelPerSecond;
    v60 = gameObject;
    v61 = (WarBoardMovePerformance_o *)sub_1C32E6C(WarBoardMovePerformance_TypeInfo);
    v216.fields.x = v56;
    v216.fields.y = v55;
    v216.fields.z = z;
    v220.fields.x = x;
    v220.fields.y = y;
    v220.fields.z = v57;
    v62 = (Il2CppObject *)v61;
    z = v57;
    WarBoardMovePerformance___ctor(v61, v60, v216, v220, pixelPerSecond, 5, 0);
    v65 = v20->fields._items;
    v66 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v20->fields._version;
    if ( !v65 )
      goto LABEL_157;
    v67 = v20->fields._size;
    if ( (unsigned int)v67 >= LODWORD(v65->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        v62,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
    }
    else
    {
      v68 = &v65->obj.klass + v67;
      v20->fields._size = v67 + 1;
      v68[4] = (Il2CppClass *)v62;
      sub_1C32BC4((CGThumbnailListItem_o *)(v68 + 4), (int32_t)v62, v63, v64);
    }
    v46 = v206;
    v47 = v205;
  }
  v69 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v69,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 1, ParticipantVals, 0);
  if ( !v69 )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    v69,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v70 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 19, ParticipantVals, 0);
  System_Collections_Generic_List_object___AddRange(
    v69,
    (System_Collections_Generic_IEnumerable_T__o *)v70,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v71 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 39, ParticipantVals, 0);
  System_Collections_Generic_List_object___AddRange(
    v69,
    (System_Collections_Generic_IEnumerable_T__o *)v71,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !WarBoardPieceData__get_isMaster(v11, 0) )
  {
    v91 = sub_1C32E6C(WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo);
    WarBoardPieceBaseComponent___c__DisplayClass63_1___ctor(
      (WarBoardPieceBaseComponent___c__DisplayClass63_1_o *)v91,
      0);
    if ( v91 )
    {
      *(_QWORD *)(v91 + 32) = v5;
      v94 = (Il2CppObject **)(v91 + 32);
      sub_1C32BC4((CGThumbnailListItem_o *)(v91 + 32), v5, v92, v93);
      System_Collections_Generic_List_object___AddRange(
        v20,
        (System_Collections_Generic_IEnumerable_T__o *)v69,
        (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      lengthOnEncount = this->fields.lengthOnEncount;
      v96 = v45 * lengthOnEncount;
      v97 = v210 - (float)(v45 * lengthOnEncount);
      v98 = v46 * lengthOnEncount;
      v99 = v47 * lengthOnEncount;
      v100 = x + v96;
      v101 = v208 - v98;
      v102 = y + v98;
      v103 = z + v99;
      v104 = v207 - v99;
      if ( !byte_4C313D4 )
      {
        sub_1C32C20(&System_Math_TypeInfo);
        byte_4C313D4 = 1;
      }
      v105 = v97 - v100;
      v106 = v101 - v102;
      v107 = v104 - v103;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v108 = sqrtf((float)(v107 * v107) + (float)((float)(v105 * v105) + (float)(v106 * v106)));
      if ( v108 <= 0.00001 )
      {
        if ( !byte_4C313D1 )
        {
          sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
          byte_4C313D1 = 1;
        }
        v112 = UnityEngine_Vector3_TypeInfo->static_fields;
        v109 = v112->zeroVector.fields.x;
        v110 = v112->zeroVector.fields.y;
        v111 = v112->zeroVector.fields.z;
      }
      else
      {
        v109 = v105 / v108;
        v110 = v106 / v108;
        v111 = v107 / v108;
      }
      if ( !byte_4C313D3 )
      {
        sub_1C32C20(&System_Math_TypeInfo);
        byte_4C313D3 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      Instance = ((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._35_GetIconLocalPosition.methodPtr)(
                   this,
                   this->klass->vtable._35_GetIconLocalPosition.method);
      v26 = (WarBoardTaskBase_TaskCallback_c **)(v5 + 24);
      if ( *v94 )
      {
        monitor = (*v94)[1].monitor;
        if ( monitor )
        {
          v115 = monitor[6];
          if ( v115 )
          {
            Instance = *(_QWORD *)(v115 + 80);
            if ( Instance )
            {
              v116 = v113;
              ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)Instance, 0);
              v118 = *(_QWORD *)(v91 + 32);
              *(float *)(v91 + 16) = ZoomSize;
              if ( v118 )
              {
                v119 = *(_QWORD *)(v118 + 24);
                if ( v119 )
                {
                  v120 = *(_QWORD *)(v119 + 48);
                  if ( v120 )
                  {
                    Instance = *(_QWORD *)(v120 + 72);
                    if ( Instance )
                    {
                      ScrlPos = MapScroll__GetScrlPos((MapScroll_o *)Instance, 0);
                      v123 = *(_QWORD *)(v91 + 32);
                      *(UnityEngine_Vector2_o *)(v91 + 20) = ScrlPos;
                      if ( v123 )
                      {
                        v124 = *(WarBoardManager_o **)(v123 + 24);
                        *(_QWORD *)&v213.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                        v125 = v100 + (float)((float)(v108 * v109) * 0.5);
                        v126 = (float)(v102 + (float)((float)(v108 * v110) * 0.5)) + v116;
                        *(_QWORD *)&v213.fields.hasValue = &v212;
                        v218.fields.x = v125;
                        v218.fields.y = v126;
                        v218.fields.z = v103 + (float)((float)(v108 * v111) * 0.5);
                        *(_QWORD *)&v212.fields.hasValue = 0;
                        *(_QWORD *)&v212.fields.value.fields.y = 0;
                        System_Nullable_Vector3____ctor(v213, v218, v121);
                        encountCameraSize = this->fields.encountCameraSize;
                        p_size = (System_Nullable_float__o)&size;
                        size = 0;
                        System_Nullable_float____ctor(
                          p_size,
                          encountCameraSize,
                          (const MethodInfo_38C063C *)Method_System_Nullable_float___ctor__);
                        if ( v124 )
                        {
                          v129 = size;
                          Instance = (__int64)WarBoardManager__GetCameraPerformanceTask(v124, v212, v129, 1, 0, 1, 0);
                          v132 = v20->fields._items;
                          v133 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                          ++v20->fields._version;
                          if ( v132 )
                          {
                            v134 = v20->fields._size;
                            v135 = Instance;
                            if ( (unsigned int)v134 >= LODWORD(v132->max_length) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v20,
                                (Il2CppObject *)Instance,
                                *(const MethodInfo_37987BC **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v136 = &v132->obj.klass + v134;
                              v20->fields._size = v134 + 1;
                              v136[4] = (Il2CppClass *)v135;
                              sub_1C32BC4((CGThumbnailListItem_o *)(v136 + 4), v135, v130, v131);
                            }
                            if ( *v94 )
                            {
                              Instance = (__int64)(*v94)[1].monitor;
                              if ( Instance )
                              {
                                v219.fields.x = v125;
                                v219.fields.y = v126;
                                v219.fields.z = v103 + (float)((float)(v108 * v111) * 0.5);
                                Instance = (__int64)WarBoardManager__CreateEncountkEffectTask(
                                                      (WarBoardManager_o *)Instance,
                                                      v219,
                                                      1,
                                                      0);
                                v169 = WarBoardPieceBaseComponent___c_TypeInfo;
                                this = (WarBoardPieceBaseComponent_o *)Instance;
                                if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
                                  v169 = WarBoardPieceBaseComponent___c_TypeInfo;
                                }
                                _9__63_1 = v169->static_fields->__9__63_1;
                                if ( !_9__63_1 )
                                {
                                  if ( !v169->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(v169);
                                    v169 = WarBoardPieceBaseComponent___c_TypeInfo;
                                  }
                                  v171 = (Il2CppObject *)v169->static_fields->__9;
                                  _9__63_1 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    _9__63_1,
                                    v171,
                                    Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__,
                                    0);
                                  v172 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
                                  v172->__9__63_1 = _9__63_1;
                                  sub_1C32BC4((CGThumbnailListItem_o *)&v172->__9__63_1, (int32_t)_9__63_1, v173, v174);
                                }
                                if ( this )
                                {
                                  this->fields.currentActionPointLabel = (struct UILabel_o *)_9__63_1;
                                  sub_1C32BC4(
                                    (CGThumbnailListItem_o *)&this->fields.currentActionPointLabel,
                                    (int32_t)_9__63_1,
                                    v167,
                                    v168);
                                  p_breakPointParent = &this->fields.breakPointParent;
                                  breakPointParent = (System_Delegate_o *)this->fields.breakPointParent;
                                  v177 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
                                  WarBoardTaskBase_TaskCallback___ctor(
                                    v177,
                                    (Il2CppObject *)v91,
                                    Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__,
                                    0);
                                  v178 = System_Delegate__Combine(breakPointParent, (System_Delegate_o *)v177, 0);
                                  v33 = (WarBoardPieceBaseComponent_c *)v178;
                                  if ( v178 )
                                  {
                                    v181 = WarBoardTaskBase_TaskCallback_TypeInfo;
                                    if ( (WarBoardTaskBase_TaskCallback_c *)v178->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
                                      goto LABEL_152;
                                    *p_breakPointParent = (struct UIWidget_o *)v178;
                                    if ( (WarBoardTaskBase_TaskCallback_c *)v178->klass != v181 )
                                      goto LABEL_152;
                                  }
                                  else
                                  {
                                    *p_breakPointParent = 0;
                                  }
                                  sub_1C32BC4(
                                    (CGThumbnailListItem_o *)&this->fields.breakPointParent,
                                    (int32_t)v178,
                                    v179,
                                    v180);
                                  v184 = v20->fields._items;
                                  v185 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                                  ++v20->fields._version;
                                  if ( v184 )
                                  {
                                    v186 = v20->fields._size;
                                    if ( (unsigned int)v186 >= LODWORD(v184->max_length) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        v20,
                                        (Il2CppObject *)this,
                                        *(const MethodInfo_37987BC **)(*(_QWORD *)(v185[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v187 = &v184->obj.klass + v186;
                                      v20->fields._size = v186 + 1;
                                      v187[4] = (Il2CppClass *)this;
                                      sub_1C32BC4((CGThumbnailListItem_o *)(v187 + 4), (int32_t)this, v182, v183);
                                    }
                                    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                                          v20,
                                                          0,
                                                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
                                    if ( Instance )
                                    {
                                      this = (WarBoardPieceBaseComponent_o *)(Instance + 32);
                                      v188 = *(System_Delegate_o **)(Instance + 32);
                                      v189 = *v94;
                                      v190 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
                                      WarBoardTaskBase_TaskCallback___ctor(
                                        v190,
                                        v189,
                                        Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__,
                                        0);
                                      v191 = (WarBoardPieceBaseComponent_c *)System_Delegate__Combine(
                                                                               v188,
                                                                               (System_Delegate_o *)v190,
                                                                               0);
                                      v33 = v191;
                                      if ( v191 )
                                      {
                                        v192 = WarBoardTaskBase_TaskCallback_TypeInfo;
                                        if ( v191->_1.image != WarBoardTaskBase_TaskCallback_TypeInfo )
                                          goto LABEL_152;
                                        this->klass = v191;
                                        if ( v191->_1.image != v192 )
                                          goto LABEL_152;
                                      }
                                      else
                                      {
                                        this->klass = 0;
                                      }
                                      v165 = (CGThumbnailListItem_o *)this;
                                      v166 = (int)v33;
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
    sub_1C32E7C(Instance);
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v73 = x + (float)(v45 * lengthMoveAttack);
  v74 = y + (float)(v46 * lengthMoveAttack);
  v75 = z + (float)(v47 * lengthMoveAttack);
  v76 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v77 = this->fields.pixelPerSecond;
  v78 = v76;
  v79 = (WarBoardMovePerformance_o *)sub_1C32E6C(WarBoardMovePerformance_TypeInfo);
  v217.fields.x = v73;
  v217.fields.y = v74;
  v217.fields.z = v75;
  v221.fields.x = x;
  v221.fields.y = y;
  v221.fields.z = z;
  v80 = (WarBoardTaskBase_o *)v79;
  WarBoardMovePerformance___ctor(v79, v78, v217, v221, v77, 4, 0);
  v81 = (System_Collections_Generic_List_WarBoardTaskBase__o *)WarBoardPieceData__DecrementBreakPointPerformance(v11, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  v26 = (WarBoardTaskBase_TaskCallback_c **)(v5 + 24);
  if ( !*v209 )
    goto LABEL_157;
  v82 = (WarBoardMessageMaster_o *)Instance;
  Instance = (__int64)(*v209)->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_157;
  id = WarBoardData__get_id((WarBoardData_o *)Instance, 0);
  v84 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v84,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  breakPoint_k__BackingField = v11->fields._breakPoint_k__BackingField;
  Instance = WarBoardPieceData__get_isPlayerMaster(v11, 0);
  if ( !v82 )
    goto LABEL_157;
  if ( (Instance & 1) != 0 )
  {
    v86 = 11;
    v87 = 1;
    v88 = v82;
    v89 = id;
    v90 = breakPoint_k__BackingField;
  }
  else
  {
    v86 = 9;
    v88 = v82;
    v89 = id;
    v90 = breakPoint_k__BackingField;
    v87 = 0;
  }
  Instance = (__int64)WarBoardMessageMaster__GetMessageTasks(v88, v89, v86, v90, v87, 0);
  v137 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( !Instance )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Instance,
    (System_Collections_Generic_IEnumerable_T__o *)v69,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v137,
         (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_object___AddRange(
      v20,
      v137,
      (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = sub_1C32CC8(WarBoardTaskBase___TypeInfo, 5);
  if ( !Instance )
    goto LABEL_157;
  v140 = (WarBoardTaskBase_array *)Instance;
  if ( v80 )
  {
    Instance = sub_1C32D5C(v80, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
    if ( !Instance )
      goto LABEL_159;
  }
  if ( !LODWORD(v140->max_length) )
    goto LABEL_158;
  v140->m_Items[0] = v80;
  sub_1C32BC4((CGThumbnailListItem_o *)v140->m_Items, (int32_t)v80, v138, v139);
  Instance = (__int64)v11->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_157;
  v141 = *v209;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 856LL))(
               Instance,
               *(_QWORD *)(*(_QWORD *)Instance + 864LL));
  if ( !v141 )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__CreateAttackEffectTask(v141, *(UnityEngine_Vector3_o *)&v142, 0, 0);
  v147 = (WarBoardTaskBase_o *)Instance;
  if ( Instance )
  {
    Instance = sub_1C32D5C(Instance, v140->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( LODWORD(v140->max_length) <= 1 )
    goto LABEL_158;
  v140->m_Items[1] = v147;
  sub_1C32BC4((CGThumbnailListItem_o *)&v140->m_Items[1], (int32_t)v147, v145, v146);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0);
  v150 = (WarBoardTaskBase_o *)Instance;
  if ( Instance )
  {
    Instance = sub_1C32D5C(Instance, v140->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( LODWORD(v140->max_length) <= 2 )
    goto LABEL_158;
  v140->m_Items[2] = v150;
  sub_1C32BC4((CGThumbnailListItem_o *)&v140->m_Items[2], (int32_t)v150, v148, v149);
  Instance = (__int64)v11->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)Instance,
                        (System_String_o *)StringLiteral_8939/*"MasterDamage"*/,
                        v151);
  v154 = (WarBoardTaskBase_o *)Instance;
  if ( Instance )
  {
    Instance = sub_1C32D5C(Instance, v140->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( LODWORD(v140->max_length) <= 3 )
    goto LABEL_158;
  v140->m_Items[3] = v154;
  sub_1C32BC4((CGThumbnailListItem_o *)&v140->m_Items[3], (int32_t)v154, v152, v153);
  v155 = (WarBoardOrthostichySchedule_o *)sub_1C32E6C(WarBoardOrthostichySchedule_TypeInfo);
  WarBoardOrthostichySchedule___ctor_38175692(v155, v81, 0);
  if ( v155 )
  {
    Instance = sub_1C32D5C(v155, v140->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_159:
      v204 = sub_1C32EA0();
      sub_1C32D48(v204, 0);
    }
  }
  if ( LODWORD(v140->max_length) <= 4 )
LABEL_158:
    sub_1C32E84(Instance);
  v140->m_Items[4] = (WarBoardTaskBase_o *)v155;
  sub_1C32BC4((CGThumbnailListItem_o *)&v140->m_Items[4], (int32_t)v155, v156, v157);
  v158 = (WarBoardParallelSchedule_o *)sub_1C32E6C(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor(v158, v140, 0);
  v161 = v20->fields._items;
  v162 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v20->fields._version;
  if ( !v161 )
    goto LABEL_157;
  v163 = v20->fields._size;
  if ( (unsigned int)v163 >= LODWORD(v161->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)v158,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v162[4] + 192LL) + 112LL));
    goto LABEL_141;
  }
  v164 = &v161->obj.klass + v163;
  v20->fields._size = v163 + 1;
  v164[4] = (Il2CppClass *)v158;
  v165 = (CGThumbnailListItem_o *)(v164 + 4);
  v166 = (int)v158;
LABEL_140:
  sub_1C32BC4(v165, v166, v159, v160);
LABEL_141:
  if ( v20->fields._size < 1 )
    return;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                        v20,
                        0,
                        (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
  if ( !Instance )
    goto LABEL_157;
  this = (WarBoardPieceBaseComponent_o *)(Instance + 32);
  v193 = *(System_Delegate_o **)(Instance + 32);
  v194 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v194 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  _9__63_4 = v194->static_fields->__9__63_4;
  if ( !_9__63_4 )
  {
    if ( !v194->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v194);
      v194 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    v196 = (Il2CppObject *)v194->static_fields->__9;
    _9__63_4 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(_9__63_4, v196, Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__, 0);
    v197 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v197->__9__63_4 = _9__63_4;
    sub_1C32BC4((CGThumbnailListItem_o *)&v197->__9__63_4, (int32_t)_9__63_4, v198, v199);
  }
  v200 = (WarBoardPieceBaseComponent_c *)System_Delegate__Combine(v193, (System_Delegate_o *)_9__63_4, 0);
  v33 = v200;
  if ( !v200 )
    goto LABEL_153;
  v203 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( v200->_1.image != WarBoardTaskBase_TaskCallback_TypeInfo || (this->klass = v200, v200->_1.image != v203) )
  {
LABEL_152:
    sub_1C3313C(v33);
LABEL_153:
    this->klass = v33;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)this, (int32_t)v33, v201, v202);
  Instance = (__int64)*v26;
  if ( !*v26 )
    goto LABEL_157;
  WarBoardManager__AddTask_37974444(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v20,
    0);
}


void WarBoardPieceBaseComponent__OnAttackResume(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  WarBoardManager_o *v6; // x22
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceData_o *v8; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  float v12; // s11
  float v13; // s12
  float v14; // s13
  float v15; // s8
  float v16; // s15
  float v17; // s14
  float v18; // s11
  float v19; // s12
  float v20; // s13
  float v21; // s14
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s8
  WarBoardControlUiDataComponent_c *v24; // x0
  float v25; // [xsp+4Ch] [xbp-24h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3528B & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4C3528B = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v6 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_27;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_37788996(Instance, squareIndex, 0);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_27;
  v8 = (WarBoardPieceData_o *)Instance;
  SquarePosition = WarBoardManager__GetSquarePosition(v6, pieceData->fields._nowSquareIndex_k__BackingField, 0);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v27 = WarBoardManager__GetSquarePosition(v6, squareIndex, 0);
  v12 = v27.fields.x;
  v13 = v27.fields.y;
  v14 = v27.fields.z;
  if ( !byte_4C313D3 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C313D3 = 1;
  }
  v25 = x;
  v15 = v12 - x;
  v16 = v13 - y;
  v17 = v14 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4C313D4 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C313D4 = 1;
  }
  Instance = (WarBoardData_o *)System_Math_TypeInfo;
  v18 = sqrtf((float)(v17 * v17) + (float)((float)(v15 * v15) + (float)(v16 * v16)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v18 <= 0.00001 )
  {
    if ( !byte_4C313D1 )
    {
      Instance = (WarBoardData_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v19 = static_fields->zeroVector.fields.x;
    v20 = static_fields->zeroVector.fields.y;
    v21 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v19 = v15 / v18;
    v20 = v16 / v18;
    v21 = v17 / v18;
  }
  if ( !v8 )
    goto LABEL_27;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant(v8, 0) )
    lengthOnAttack = this->fields.lengthOnEncount;
  Instance = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance
    || (Instance = (WarBoardData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0)) == 0 )
  {
LABEL_27:
    sub_1C32E7C(Instance);
  }
  v28.fields.x = v25 + (float)(v19 * (float)(v18 - lengthOnAttack));
  v28.fields.y = y + (float)(v20 * (float)(v18 - lengthOnAttack));
  v28.fields.z = z + (float)(v21 * (float)(v18 - lengthOnAttack));
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v28, 0);
  v24 = WarBoardControlUiDataComponent_TypeInfo;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__SetUiDataOnBattleAll((const MethodInfo *)v24);
}


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
  const MethodInfo_38C2B00 *v16; // x2
  System_Nullable_float__o v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  WarBoardPieceBaseComponent_o *v23; // x1
  Il2CppClass **v24; // x0
  WarBoardTaskBase_array *v25; // x26
  Il2CppObject *v26; // x27
  const MethodInfo_38C2B00 *v27; // x2
  System_Nullable_float__o v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  WarBoardPieceBaseComponent_o *v31; // x24
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v33; // x24
  struct WarBoardBreakPointComponent_array *breakPoints; // x10
  __int64 v35; // x0
  System_Nullable_Vector3__o v36; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v37; // 0:x0.16
  System_Nullable_Vector3__o v38; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  v14 = this;
  if ( (byte_4C35292 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_System_Nullable_Vector3___ctor__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardPieceBaseComponent_o *)sub_1C32C20(&WarBoardTaskBase___TypeInfo);
    byte_4C35292 = 1;
  }
  if ( cameraMove )
  {
    this = (WarBoardPieceBaseComponent_o *)v14->fields.pieceData;
    if ( !this )
      goto LABEL_32;
    this = (WarBoardPieceBaseComponent_o *)WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)this, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( taskList )
      {
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0);
        if ( this )
        {
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
          *(_QWORD *)&v37.fields.hasValue = &v36;
          *(_QWORD *)&v36.fields.hasValue = 0;
          *(_QWORD *)&v36.fields.value.fields.y = 0;
          *(_QWORD *)&v37.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v37, localPosition, v16);
          if ( Instance )
          {
            v17 = cameraSize;
            this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                     (WarBoardManager_o *)Instance,
                                                     v36,
                                                     v17,
                                                     1,
                                                     0,
                                                     1,
                                                     0);
            items = taskList->fields._items;
            v21 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
            ++taskList->fields._version;
            if ( items )
            {
              size = taskList->fields._size;
              v23 = this;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)taskList,
                  (Il2CppObject *)this,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
              }
              else
              {
                v24 = &items->obj.klass + size;
                taskList->fields._size = size + 1;
                v24[4] = (Il2CppClass *)v23;
                sub_1C32BC4((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v23, v18, v19);
              }
              goto LABEL_21;
            }
          }
        }
      }
      else
      {
        v25 = (WarBoardTaskBase_array *)sub_1C32CC8(WarBoardTaskBase___TypeInfo, 1);
        v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0);
        if ( this )
        {
          v40 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
          *(_QWORD *)&v38.fields.hasValue = &v36;
          v36 = (System_Nullable_Vector3__o)0LL;
          *(_QWORD *)&v38.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v38, v40, v27);
          if ( v26 )
          {
            v28 = cameraSize;
            this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                     (WarBoardManager_o *)v26,
                                                     v36,
                                                     v28,
                                                     1,
                                                     0,
                                                     1,
                                                     0);
            if ( v25 )
            {
              v31 = this;
              if ( this )
              {
                this = (WarBoardPieceBaseComponent_o *)sub_1C32D5C(this, v25->obj.klass->_1.element_class);
                if ( !this )
                {
                  v35 = sub_1C32EA0();
                  sub_1C32D48(v35, 0);
                }
              }
              if ( !LODWORD(v25->max_length) )
LABEL_34:
                sub_1C32E84(this);
              v25->m_Items[0] = (WarBoardTaskBase_o *)v31;
              sub_1C32BC4((CGThumbnailListItem_o *)v25->m_Items, (int32_t)v31, v29, v30);
              if ( Instance )
              {
                WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v25, 0);
                goto LABEL_21;
              }
            }
          }
        }
      }
LABEL_32:
      sub_1C32E7C(this);
    }
  }
LABEL_21:
  pieceData = v14->fields.pieceData;
  if ( !pieceData )
    goto LABEL_32;
  v33 = 0;
  if ( dummyPoint < 0 )
    dummyPoint = pieceData->fields._breakPoint_k__BackingField;
  while ( (int)v33 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v14->fields.breakPoints;
    if ( !breakPoints )
      goto LABEL_32;
    if ( (unsigned int)v33 >= LODWORD(breakPoints->max_length) )
      goto LABEL_34;
    this = (WarBoardPieceBaseComponent_o *)breakPoints->m_Items[v33];
    if ( this )
    {
      if ( (int)v33 >= oldBreakPoint || dummyPoint > (int)v33 )
      {
        WarBoardBreakPointComponent__SetActive(
          (WarBoardBreakPointComponent_o *)this,
          dummyPoint > (int)v33,
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
      ++v33;
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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void WarBoardPieceBaseComponent__OnDeselect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  int32_t dispPriotiry; // w20
  WarBoardData_o *Instance; // x0
  int v5; // w8
  const MethodInfo *v6; // x2

  if ( (byte_4C35287 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C35287 = 1;
  }
  dispPriotiry = this->fields.dispPriotiry;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_1C32E7C(Instance);
  v5 = dispPriotiry - WarBoardData__GetPieceMaxDispPriotiry(Instance, 0);
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * v5, v6);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  WarBoardPieceData_o **v10; // x20
  WarBoardPieceData_o *Piece_37788996; // x0
  WarBoardPieceData_o **v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x8
  WarBoardSquareData_o *Square; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x25
  System_Collections_Generic_List_object__o *v20; // x24
  System_Delegate_o *p_EndCallback; // x26
  WarBoardTaskBase_TaskCallback_o *v22; // x27
  System_Delegate_o *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Delegate_c *v26; // x8
  WarBoardTaskBase_TaskCallback_c *v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t groupId_k__BackingField; // w9
  __int64 v32; // x29
  struct WarBoardPieceData_o *v33; // x8
  UnityEngine_GameObject_o *v34; // x26
  float x; // s8
  float y; // s9
  float z; // s10
  float pixelPerSecond; // s13
  float v39; // s11
  float v40; // s12
  float v41; // s14
  WarBoardMovePerformance_o *v42; // x0
  WarBoardMovePerformance_o *v43; // x27
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  WarBoardTaskBase_array *v46; // x26
  UnityEngine_GameObject_o *v47; // x27
  struct WarBoardPieceData_o *v48; // x8
  float v49; // s8
  float v50; // s9
  float v51; // s10
  float v52; // s13
  float v53; // s11
  float v54; // s12
  float v55; // s14
  WarBoardMovePerformance_o *v56; // x0
  WarBoardTaskBase_o *v57; // x28
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  System_Delegate_o *v62; // x27
  WarBoardTaskBase_TaskCallback_o *v63; // x28
  System_Delegate_o *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  WarBoardTaskBase_TaskCallback_c *v67; // x1
  System_Delegate_o *EndCallback; // x28
  System_Delegate_o *v69; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  WarBoardTaskBase_TaskCallback_c *v72; // x1
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  struct System_Object_array *items; // x8
  _QWORD *v76; // x9
  __int64 size; // x10
  Il2CppClass **v78; // x0
  struct WarBoardPieceData_o *v79; // x8
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x0
  System_Collections_Generic_List_object__o *v92; // x22
  System_Int32_array *PieceEventVals; // x0
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  System_Int32_array *v96; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v98; // x0
  WarBoardManager_o *v99; // x20
  WarBoardTaskBase_array *v100; // x21
  __int64 v101; // x22
  WarBoardTaskBase_TaskCallback_o *v102; // x23
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  __int64 v107; // x0
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v114; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v115; // 0:s3.4,4:s4.4,8:s5.4

  LODWORD(v4) = squareIndex;
  if ( (byte_4C35288 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__);
    sub_1C32C20(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__);
    sub_1C32C20(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__);
    sub_1C32C20(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__);
    sub_1C32C20(&WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo);
    sub_1C32C20(&WarBoardCallbackTask_TypeInfo);
    sub_1C32C20(&WarBoardMovePerformance_TypeInfo);
    sub_1C32C20(&WarBoardParallelSchedule_TypeInfo);
    sub_1C32C20(&WarBoardTaskBase___TypeInfo);
    byte_4C35288 = 1;
  }
  v6 = sub_1C32E6C(WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass61_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass61_0_o *)v6, 0);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v6 )
    goto LABEL_83;
  *(_QWORD *)(v6 + 48) = Instance;
  v10 = (WarBoardPieceData_o **)(v6 + 48);
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 48), (int32_t)Instance, v8, v9);
  if ( !*(_QWORD *)(v6 + 48) )
    goto LABEL_83;
  Instance = *(WarBoardPieceData_o **)(*(_QWORD *)(v6 + 48) + 440LL);
  if ( !Instance )
    goto LABEL_83;
  Piece_37788996 = WarBoardData__GetPiece_37788996((WarBoardData_o *)Instance, (int32_t)v4, 0);
  *(_QWORD *)(v6 + 40) = Piece_37788996;
  v12 = (WarBoardPieceData_o **)(v6 + 40);
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 40), (int32_t)Piece_37788996, v13, v14);
  v15 = *(_QWORD *)(v6 + 48);
  if ( !v15 )
    goto LABEL_83;
  Instance = *(WarBoardPieceData_o **)(v15 + 440);
  if ( !Instance )
    goto LABEL_83;
  Square = WarBoardData__GetSquare((WarBoardData_o *)Instance, (int32_t)v4, 0);
  *(_QWORD *)(v6 + 16) = Square;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 16), (int32_t)Square, v17, v18);
  v19 = sub_1C32E6C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v19, 0, 0);
  if ( !v19 )
    goto LABEL_83;
  v20 = (System_Collections_Generic_List_object__o *)(v19 + 32);
  p_EndCallback = *(System_Delegate_o **)(v19 + 32);
  v22 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v22,
    (Il2CppObject *)v6,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__,
    0);
  v23 = System_Delegate__Combine(p_EndCallback, (System_Delegate_o *)v22, 0);
  v26 = (System_Delegate_c *)v23;
  if ( v23 )
  {
    v27 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v23->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_44;
    v20->klass = (System_Collections_Generic_List_object__c *)v23;
    if ( (WarBoardTaskBase_TaskCallback_c *)v23->klass != v27 )
      goto LABEL_44;
  }
  else
  {
    v20->klass = 0;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 32), (int32_t)v23, v24, v25);
  Instance = (WarBoardPieceData_o *)sub_1C32CC8(int___TypeInfo, 2);
  pieceData = this->fields.pieceData;
  if ( !pieceData || !Instance )
    goto LABEL_83;
  groupId_k__BackingField = Instance->fields._groupId_k__BackingField;
  if ( !groupId_k__BackingField
    || (Instance->fields._limitActionCount_k__BackingField = pieceData->fields._nowSquareIndex_k__BackingField,
        groupId_k__BackingField == 1) )
  {
LABEL_84:
    sub_1C32E84(Instance);
  }
  Instance->fields._currentActionCount_k__BackingField = (int)v4;
  *(_QWORD *)(v6 + 24) = Instance;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 24), (int32_t)Instance, v28, v29);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v32 = *(_QWORD *)(v6 + 40);
  Instance = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v33 = this->fields.pieceData;
  if ( !v33 )
    goto LABEL_83;
  v34 = (UnityEngine_GameObject_o *)Instance;
  Instance = *(WarBoardPieceData_o **)(v6 + 48);
  if ( !Instance )
    goto LABEL_83;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     v33->fields._nowSquareIndex_k__BackingField,
                     0);
  Instance = *v10;
  if ( !*v10 )
    goto LABEL_83;
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v109 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, (int32_t)v4, 0);
  pixelPerSecond = this->fields.pixelPerSecond;
  v39 = v109.fields.x;
  v40 = v109.fields.y;
  v41 = v109.fields.z;
  v42 = (WarBoardMovePerformance_o *)sub_1C32E6C(WarBoardMovePerformance_TypeInfo);
  v110.fields.x = x;
  v110.fields.y = y;
  v110.fields.z = z;
  v114.fields.x = v39;
  v114.fields.y = v40;
  v114.fields.z = v41;
  v43 = v42;
  WarBoardMovePerformance___ctor(v42, v34, v110, v114, pixelPerSecond, 0, 0);
  if ( v32 )
  {
    Instance = (WarBoardPieceData_o *)sub_1C32CC8(WarBoardTaskBase___TypeInfo, 3);
    if ( !Instance )
      goto LABEL_83;
    v46 = (WarBoardTaskBase_array *)Instance;
    if ( v43 )
    {
      Instance = (WarBoardPieceData_o *)sub_1C32D5C(v43, Instance->klass->_1.element_class);
      if ( !Instance )
        goto LABEL_85;
    }
    if ( !LODWORD(v46->max_length) )
      goto LABEL_84;
    v46->m_Items[0] = (WarBoardTaskBase_o *)v43;
    sub_1C32BC4((CGThumbnailListItem_o *)v46->m_Items, (int32_t)v43, v44, v45);
    Instance = *v12;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( *v12 )
    {
      Instance = (WarBoardPieceData_o *)WarBoardPieceData__get_gameObject(Instance, 0);
      if ( *v10 )
      {
        v47 = (UnityEngine_GameObject_o *)Instance;
        v111 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)*v10, (int32_t)v4, 0);
        v48 = this->fields.pieceData;
        if ( v48 )
        {
          Instance = *v10;
          if ( *v10 )
          {
            v49 = v111.fields.x;
            v50 = v111.fields.y;
            v51 = v111.fields.z;
            v112 = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     v48->fields._nowSquareIndex_k__BackingField,
                     0);
            v52 = this->fields.pixelPerSecond;
            v53 = v112.fields.x;
            v54 = v112.fields.y;
            v55 = v112.fields.z;
            v56 = (WarBoardMovePerformance_o *)sub_1C32E6C(WarBoardMovePerformance_TypeInfo);
            v113.fields.x = v49;
            v113.fields.y = v50;
            v113.fields.z = v51;
            v115.fields.x = v53;
            v115.fields.y = v54;
            v115.fields.z = v55;
            v57 = (WarBoardTaskBase_o *)v56;
            WarBoardMovePerformance___ctor(v56, v47, v113, v115, v52, 0, 0);
            if ( !v57 || (Instance = (WarBoardPieceData_o *)sub_1C32D5C(v57, v46->obj.klass->_1.element_class)) != 0 )
            {
              if ( LODWORD(v46->max_length) <= 1 )
                goto LABEL_84;
              v46->m_Items[1] = v57;
              sub_1C32BC4((CGThumbnailListItem_o *)&v46->m_Items[1], (int32_t)v57, v58, v59);
              Instance = (WarBoardPieceData_o *)sub_1C32D5C(v19, v46->obj.klass->_1.element_class);
              if ( Instance )
              {
                if ( LODWORD(v46->max_length) <= 2 )
                  goto LABEL_84;
                v46->m_Items[2] = (WarBoardTaskBase_o *)v19;
                sub_1C32BC4((CGThumbnailListItem_o *)&v46->m_Items[2], v19, v60, v61);
                v19 = sub_1C32E6C(WarBoardParallelSchedule_TypeInfo);
                WarBoardParallelSchedule___ctor((WarBoardParallelSchedule_o *)v19, v46, 0);
                if ( !v19 )
                  goto LABEL_83;
                p_EndCallback = (System_Delegate_o *)(v19 + 40);
                v62 = *(System_Delegate_o **)(v19 + 40);
                v63 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
                WarBoardTaskBase_TaskCallback___ctor(
                  v63,
                  (Il2CppObject *)v6,
                  Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__,
                  0);
                v64 = System_Delegate__Combine(v62, (System_Delegate_o *)v63, 0);
                v26 = (System_Delegate_c *)v64;
                if ( !v64 )
                  goto LABEL_45;
                v67 = WarBoardTaskBase_TaskCallback_TypeInfo;
                if ( (WarBoardTaskBase_TaskCallback_c *)v64->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
                {
                  p_EndCallback->klass = (System_Delegate_c *)v64;
                  if ( (WarBoardTaskBase_TaskCallback_c *)v64->klass == v67 )
                  {
LABEL_46:
                    sub_1C32BC4((CGThumbnailListItem_o *)p_EndCallback, (int32_t)v26, v65, v66);
                    if ( !v20 )
                      goto LABEL_83;
                    items = v20->fields._items;
                    v76 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                    ++v20->fields._version;
                    if ( !items )
                      goto LABEL_83;
                    size = v20->fields._size;
                    if ( (unsigned int)size >= LODWORD(items->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v20,
                        (Il2CppObject *)v19,
                        *(const MethodInfo_37987BC **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v78 = &items->obj.klass + size;
                      v20->fields._size = size + 1;
                      v78[4] = (Il2CppClass *)v19;
                      sub_1C32BC4((CGThumbnailListItem_o *)(v78 + 4), v19, v73, v74);
                    }
                    v79 = this->fields.pieceData;
                    if ( !v79 )
                      goto LABEL_83;
                    Instance = *v12;
                    if ( !*v12 )
                      goto LABEL_83;
                    WarBoardPieceData__SetSquareIndex(Instance, v79->fields._nowSquareIndex_k__BackingField, 0);
                    goto LABEL_64;
                  }
                }
LABEL_44:
                sub_1C3313C(v26);
LABEL_45:
                p_EndCallback->klass = v26;
                goto LABEL_46;
              }
            }
LABEL_85:
            v107 = sub_1C32EA0();
            sub_1C32D48(v107, 0);
          }
        }
      }
    }
LABEL_83:
    sub_1C32E7C(Instance);
  }
  if ( !v43 )
    goto LABEL_83;
  v12 = (WarBoardPieceData_o **)(unsigned int)v4;
  p_EndCallback = (System_Delegate_o *)&v43->fields.EndCallback;
  EndCallback = (System_Delegate_o *)v43->fields.EndCallback;
  v4 = &WarBoardTaskBase_TaskCallback_TypeInfo;
  v3 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v3,
    (Il2CppObject *)v6,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__,
    0);
  v69 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v3, 0);
  v26 = (System_Delegate_c *)v69;
  if ( v69 )
  {
    v72 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v69->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_44;
    p_EndCallback->klass = (System_Delegate_c *)v69;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    LODWORD(v4) = (_DWORD)v12;
    if ( (WarBoardTaskBase_TaskCallback_c *)v69->klass != v72 )
      goto LABEL_44;
  }
  else
  {
    p_EndCallback->klass = 0;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    LODWORD(v4) = (_DWORD)v12;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)&v43->fields.EndCallback, (int32_t)v69, v70, v71);
  v12 = (WarBoardPieceData_o **)(v6 + 40);
  if ( !v20 )
    goto LABEL_83;
  v82 = v20->fields._items;
  v83 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v20->fields._version;
  if ( !v82 )
    goto LABEL_83;
  v84 = v20->fields._size;
  if ( (unsigned int)v84 >= LODWORD(v82->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)v43,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
  }
  else
  {
    v85 = &v82->obj.klass + v84;
    v20->fields._size = v84 + 1;
    v85[4] = (Il2CppClass *)v43;
    sub_1C32BC4((CGThumbnailListItem_o *)(v85 + 4), (int32_t)v43, v80, v81);
  }
  v88 = v20->fields._items;
  v89 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v20->fields._version;
  if ( !v88 )
    goto LABEL_83;
  v90 = v20->fields._size;
  if ( (unsigned int)v90 >= LODWORD(v88->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)v19,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
  }
  else
  {
    v91 = &v88->obj.klass + v90;
    v20->fields._size = v90 + 1;
    v91[4] = (Il2CppClass *)v19;
    sub_1C32BC4((CGThumbnailListItem_o *)(v91 + 4), v19, v86, v87);
  }
LABEL_64:
  Instance = this->fields.pieceData;
  if ( !Instance )
    goto LABEL_83;
  WarBoardPieceData__SetSquareIndex(Instance, (int32_t)v4, 0);
  v92 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v92,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = this->fields.pieceData;
  if ( !Instance )
    goto LABEL_83;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(Instance, 0);
  *(_QWORD *)(v6 + 32) = PieceEventVals;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 32), (int32_t)PieceEventVals, v94, v95);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                      (WarBoardManager_o *)Instance,
                                      30,
                                      *(System_Int32_array **)(v6 + 32),
                                      0);
  if ( !v92 )
    goto LABEL_83;
  System_Collections_Generic_List_object___AddRange(
    v92,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( *v12 )
  {
    v96 = WarBoardPieceData__CreatePieceEventVals(*v12, 0);
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 30, v96, 0);
    System_Collections_Generic_List_object___AddRange(
      v92,
      (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
      (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  v98 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 36, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    v92,
    (System_Collections_Generic_IEnumerable_T__o *)v98,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v92,
         (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    Instance = *v10;
    if ( !*v10 )
      goto LABEL_83;
    WarBoardManager__AddTask_37974444(
      (WarBoardManager_o *)Instance,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v92,
      0);
  }
  Instance = *v10;
  if ( !*v10 )
    goto LABEL_83;
  WarBoardManager__AddTask_37974444(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v20,
    0);
  v99 = *(WarBoardManager_o **)(v6 + 48);
  v100 = (WarBoardTaskBase_array *)sub_1C32CC8(WarBoardTaskBase___TypeInfo, 1);
  v101 = sub_1C32E6C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v101, 0, 0);
  v102 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(v3->klass);
  WarBoardTaskBase_TaskCallback___ctor(
    v102,
    (Il2CppObject *)v6,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__,
    0);
  if ( !v101 )
    goto LABEL_83;
  *(_QWORD *)(v101 + 32) = v102;
  sub_1C32BC4((CGThumbnailListItem_o *)(v101 + 32), (int32_t)v102, v103, v104);
  if ( !v100 )
    goto LABEL_83;
  Instance = (WarBoardPieceData_o *)sub_1C32D5C(v101, v100->obj.klass->_1.element_class);
  if ( !Instance )
    goto LABEL_85;
  if ( !LODWORD(v100->max_length) )
    goto LABEL_84;
  v100->m_Items[0] = (WarBoardTaskBase_o *)v101;
  sub_1C32BC4((CGThumbnailListItem_o *)v100->m_Items, v101, v105, v106);
  if ( !v99 )
    goto LABEL_83;
  WarBoardManager__AddTask(v99, 0, v100, 0);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void WarBoardPieceBaseComponent__OnSelect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  int v4; // w8
  const MethodInfo *v5; // x2

  if ( (byte_4C35286 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C35286 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_1C32E7C(Instance);
  v4 = WarBoardData__GetPieceMaxDispPriotiry(Instance, 0) - this->fields.dispPriotiry;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * v4, v5);
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

  if ( (byte_4C35294 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_18826/*"ef_dm_base"*/);
    byte_4C35294 = 1;
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
  WarBoardManager_o *v7; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardWallData_o *v9; // x21
  float x; // s8
  float y; // s10
  float z; // s15
  float v13; // s11
  float v14; // s9
  float v15; // s13
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_object__o *v18; // x20
  __int64 v19; // x24
  System_Delegate_o **v20; // x25
  System_Delegate_o *v21; // x26
  WarBoardTaskBase_TaskCallback_o *v22; // x27
  System_Delegate_o *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Delegate_o *v26; // x8
  WarBoardTaskBase_TaskCallback_c *v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  float v34; // s12
  float v35; // s14
  float v36; // s8
  float v37; // s9
  float v38; // s11
  float v39; // s13
  float v40; // s1
  float v41; // s2
  float v42; // s9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v44; // s0
  float v45; // s8
  float v46; // s11
  float v47; // s12
  float v48; // s15
  float v49; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  float pixelPerSecond; // s14
  UnityEngine_GameObject_o *v52; // x24
  WarBoardMovePerformance_o *v53; // x0
  Il2CppObject *v54; // x23
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x0
  float lengthMoveAttack; // s0
  float v62; // s1
  float v63; // s2
  float v64; // s0
  float v65; // s8
  float v66; // s9
  float v67; // s10
  UnityEngine_GameObject_o *v68; // x0
  float v69; // s14
  UnityEngine_GameObject_o *v70; // x22
  WarBoardMovePerformance_o *v71; // x0
  WarBoardTaskBase_o *v72; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *v73; // x22
  System_Collections_Generic_List_object__o *v74; // x23
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  WarBoardTaskBase_array *v77; // x23
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  WarBoardData_o *v80; // x21
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  WarBoardData_o *v83; // x21
  WarBoardOrthostichySchedule_o *v84; // x21
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  WarBoardParallelSchedule_o *v87; // x21
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  struct System_Object_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  Il2CppClass **v93; // x0
  __int64 v94; // x0
  float v95; // [xsp+8h] [xbp-A8h]
  float v96; // [xsp+Ch] [xbp-A4h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o IconPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v102; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v103; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4C3528D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__);
    sub_1C32C20(&WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo);
    sub_1C32C20(&WarBoardCallbackTask_TypeInfo);
    sub_1C32C20(&WarBoardMovePerformance_TypeInfo);
    sub_1C32C20(&WarBoardOrthostichySchedule_TypeInfo);
    sub_1C32C20(&WarBoardParallelSchedule_TypeInfo);
    sub_1C32C20(&WarBoardTaskBase___TypeInfo);
    byte_4C3528D = 1;
  }
  v5 = sub_1C32E6C(WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass66_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass66_0_o *)v5, 0);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  v7 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_64;
  Instance = (WarBoardData_o *)WarBoardData__GetWall(Instance, squareIndex, 0, 0);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_64;
  v9 = (WarBoardWallData_o *)Instance;
  SquarePosition = WarBoardManager__GetSquarePosition(v7, pieceData->fields._nowSquareIndex_k__BackingField, 0);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v98 = WarBoardManager__GetSquarePosition(v7, squareIndex, 0);
  Instance = v7->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_64;
  v13 = v98.fields.x;
  v14 = v98.fields.y;
  v15 = v98.fields.z;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, 0);
  if ( !v5 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 16) = Instance;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Instance, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v19 = sub_1C32E6C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v19, 0, 0);
  if ( !v19 )
    goto LABEL_64;
  v20 = (System_Delegate_o **)(v19 + 32);
  v21 = *(System_Delegate_o **)(v19 + 32);
  v22 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__,
    0);
  v23 = System_Delegate__Combine(v21, (System_Delegate_o *)v22, 0);
  v26 = v23;
  if ( v23 )
  {
    v27 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v23->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v20 = v23;
      if ( (WarBoardTaskBase_TaskCallback_c *)v23->klass == v27 )
        goto LABEL_14;
    }
    sub_1C3313C(v23);
  }
  *v20 = v26;
LABEL_14:
  sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 32), (int32_t)v26, v24, v25);
  if ( !v18 )
    goto LABEL_64;
  items = v18->fields._items;
  v31 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v18->fields._version;
  if ( !items )
    goto LABEL_64;
  size = v18->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v18,
      (Il2CppObject *)v19,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    v18->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v19;
    sub_1C32BC4((CGThumbnailListItem_o *)(v33 + 4), v19, v28, v29);
  }
  if ( !byte_4C313D3 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C313D3 = 1;
  }
  v34 = x;
  v35 = v13 - x;
  v36 = v14 - y;
  v37 = v15 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4C313D4 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C313D4 = 1;
  }
  v38 = sqrtf((float)(v37 * v37) + (float)((float)(v35 * v35) + (float)(v36 * v36)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v39 = z;
  if ( v38 <= 0.00001 )
  {
    if ( !byte_4C313D1 )
    {
      sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v40 = static_fields->zeroVector.fields.x;
    v41 = static_fields->zeroVector.fields.y;
    v42 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v40 = v35 / v38;
    v41 = v36 / v38;
    v42 = v37 / v38;
  }
  v44 = v38 - this->fields.lengthOnAttack;
  if ( v44 <= 0.0 )
  {
    v46 = v34;
    v47 = y;
  }
  else
  {
    v95 = v41;
    v96 = v40;
    v45 = v34;
    v46 = v34 + (float)(v40 * v44);
    v47 = y + (float)(v41 * v44);
    v48 = y;
    v49 = v39;
    v39 = v39 + (float)(v42 * v44);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    pixelPerSecond = this->fields.pixelPerSecond;
    v52 = gameObject;
    v53 = (WarBoardMovePerformance_o *)sub_1C32E6C(WarBoardMovePerformance_TypeInfo);
    v99.fields.x = v45;
    v99.fields.y = v48;
    v99.fields.z = v49;
    v102.fields.x = v46;
    v102.fields.y = v47;
    v102.fields.z = v39;
    v54 = (Il2CppObject *)v53;
    WarBoardMovePerformance___ctor(v53, v52, v99, v102, pixelPerSecond, 5, 0);
    v57 = v18->fields._items;
    v58 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v18->fields._version;
    if ( !v57 )
      goto LABEL_64;
    v59 = v18->fields._size;
    if ( (unsigned int)v59 >= LODWORD(v57->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v18,
        v54,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
    }
    else
    {
      v60 = &v57->obj.klass + v59;
      v18->fields._size = v59 + 1;
      v60[4] = (Il2CppClass *)v54;
      sub_1C32BC4((CGThumbnailListItem_o *)(v60 + 4), (int32_t)v54, v55, v56);
    }
    v41 = v95;
    v40 = v96;
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v62 = v40 * lengthMoveAttack;
  v63 = v41 * lengthMoveAttack;
  v64 = v42 * lengthMoveAttack;
  v65 = v46 + v62;
  v66 = v47 + v63;
  v67 = v39 + v64;
  v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v69 = this->fields.pixelPerSecond;
  v70 = v68;
  v71 = (WarBoardMovePerformance_o *)sub_1C32E6C(WarBoardMovePerformance_TypeInfo);
  v100.fields.x = v65;
  v100.fields.y = v66;
  v100.fields.z = v67;
  v103.fields.x = v46;
  v103.fields.y = v47;
  v103.fields.z = v39;
  v72 = (WarBoardTaskBase_o *)v71;
  WarBoardMovePerformance___ctor(v71, v70, v100, v103, v69, 4, 0);
  if ( !v9 )
    goto LABEL_64;
  v73 = WarBoardWallData__DecrementBreakPointPerformance(v9, 1, 0);
  v74 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v74,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 26, 0, 0), !v74)
    || (System_Collections_Generic_List_object___AddRange(
          v74,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        System_Collections_Generic_List_object___AddRange(
          v18,
          (System_Collections_Generic_IEnumerable_T__o *)v74,
          (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (Instance = (WarBoardData_o *)sub_1C32CC8(WarBoardTaskBase___TypeInfo, 4)) == 0) )
  {
LABEL_64:
    sub_1C32E7C(Instance);
  }
  v77 = (WarBoardTaskBase_array *)Instance;
  if ( v72 )
  {
    Instance = (WarBoardData_o *)sub_1C32D5C(v72, Instance->klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( !LODWORD(v77->max_length) )
    goto LABEL_65;
  v77->m_Items[0] = v72;
  sub_1C32BC4((CGThumbnailListItem_o *)v77->m_Items, (int32_t)v72, v75, v76);
  Instance = (WarBoardData_o *)v9->fields.component;
  if ( !Instance )
    goto LABEL_64;
  IconPosition = WarBoardWallComponent__GetIconPosition((WarBoardWallComponent_o *)Instance, 0);
  Instance = (WarBoardData_o *)WarBoardManager__CreateAttackEffectTask(v7, IconPosition, 0, 0);
  v80 = Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_1C32D5C(Instance, v77->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( LODWORD(v77->max_length) <= 1 )
    goto LABEL_65;
  v77->m_Items[1] = (WarBoardTaskBase_o *)v80;
  sub_1C32BC4((CGThumbnailListItem_o *)&v77->m_Items[1], (int32_t)v80, v78, v79);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (WarBoardData_o *)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0);
  v83 = Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_1C32D5C(Instance, v77->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( LODWORD(v77->max_length) <= 2 )
    goto LABEL_65;
  v77->m_Items[2] = (WarBoardTaskBase_o *)v83;
  sub_1C32BC4((CGThumbnailListItem_o *)&v77->m_Items[2], (int32_t)v83, v81, v82);
  v84 = (WarBoardOrthostichySchedule_o *)sub_1C32E6C(WarBoardOrthostichySchedule_TypeInfo);
  WarBoardOrthostichySchedule___ctor_38175692(v84, v73, 0);
  if ( v84 )
  {
    Instance = (WarBoardData_o *)sub_1C32D5C(v84, v77->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_66:
      v94 = sub_1C32EA0();
      sub_1C32D48(v94, 0);
    }
  }
  if ( LODWORD(v77->max_length) <= 3 )
LABEL_65:
    sub_1C32E84(Instance);
  v77->m_Items[3] = (WarBoardTaskBase_o *)v84;
  sub_1C32BC4((CGThumbnailListItem_o *)&v77->m_Items[3], (int32_t)v84, v85, v86);
  v87 = (WarBoardParallelSchedule_o *)sub_1C32E6C(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor(v87, v77, 0);
  v90 = v18->fields._items;
  v91 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v18->fields._version;
  if ( !v90 )
    goto LABEL_64;
  v92 = v18->fields._size;
  if ( (unsigned int)v92 >= LODWORD(v90->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v18,
      (Il2CppObject *)v87,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
  }
  else
  {
    v93 = &v90->obj.klass + v92;
    v18->fields._size = v92 + 1;
    v93[4] = (Il2CppClass *)v87;
    sub_1C32BC4((CGThumbnailListItem_o *)(v93 + 4), (int32_t)v87, v88, v89);
  }
  if ( v18->fields._size >= 1 )
    WarBoardManager__AddTask_37974444(v7, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v18, 0);
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
    sub_1C32E7C(simpleAnimation);
  SimpleAnimation__Play_66464300(simpleAnimation, animationName, 0);
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
    sub_1C32E7C(this);
  breakPoint_k__BackingField = pieceData->fields._breakPoint_k__BackingField;
  v5 = this;
  v6 = 0;
  while ( (int)v6 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v5->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v6 >= LODWORD(breakPoints->max_length) )
        sub_1C32E84(this);
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
  int max_length; // w8
  unsigned int v7; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v9; // x22
  unsigned __int64 v10; // x29
  UnityEngine_Object_o *v11; // x23
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v17; // x1
  Il2CppClass **v18; // x0
  struct UICommonButton_o *button; // x19
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C3527D & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78081984);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3527D = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( v7 >= max_length )
          goto LABEL_28;
        ComponentsInChildren_object = (UnityEngine_Component_o *)parents->m_Items[v7];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                   ComponentsInChildren_object,
                                                                   1,
                                                                   (const MethodInfo_30D48E4 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78081984);
        if ( ComponentsInChildren_object )
        {
          klass = ComponentsInChildren_object[1].klass;
          v9 = ComponentsInChildren_object;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v7 >= max_length )
          goto LABEL_24;
      }
      v10 = 0;
      while ( v10 < (unsigned int)klass )
      {
        v11 = (UnityEngine_Object_o *)*((_QWORD *)&v9[1].monitor + v10);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v11, 0, 0);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v11 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)v11,
                                                                     0);
          if ( !v4 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___Contains(
                                                                     v4,
                                                                     (Il2CppObject *)ComponentsInChildren_object,
                                                                     (const MethodInfo_3798B4C *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v11,
                                                                       0);
            items = v4->fields._items;
            v15 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v4->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v4->fields._size;
            v17 = ComponentsInChildren_object;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v4,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
            }
            else
            {
              v18 = &items->obj.klass + size;
              v4->fields._size = size + 1;
              v18[4] = (Il2CppClass *)v17;
              sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v17, v12, v13);
            }
          }
        }
        LODWORD(klass) = v9[1].klass;
        if ( (__int64)++v10 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1C32E84(ComponentsInChildren_object);
    }
  }
LABEL_24:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v4,
                                                                   (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1C32E7C(ComponentsInChildren_object);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&button->fields.tweenTargets, (int32_t)ComponentsInChildren_object, v20, v21);
}


void WarBoardPieceBaseComponent__SetColliderEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  struct UICommonButton_o *v6; // x0
  bool v7; // w1

  if ( (byte_4C3527F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3527F = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0, 0) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      sub_1C32E7C(0);
    if ( enable )
    {
      v7 = 1;
LABEL_11:
      UICommonButton__SetButtonEnableAndKeepState(v6, v7, 0, 0);
      return;
    }
    if ( v6->fields.mState )
    {
      v7 = 0;
      goto LABEL_11;
    }
    UICommonButton__SetColliderEnable(v6, 0, 1, 0);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *listEffectData; // x20
  System_Predicate_object__o *v12; // x21
  Il2CppObject *v13; // x20
  _QWORD *monitor; // x22
  __int64 v15; // x8
  unsigned __int64 v16; // x23
  bool v17; // w19
  UnityEngine_Object_o *v18; // x21

  if ( (byte_4C35293 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
    sub_1C32C20(&Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__);
    sub_1C32C20(&WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo);
    byte_4C35293 = 1;
  }
  v7 = sub_1C32E6C(WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass83_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass83_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 16) = effectKey;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)effectKey, v9, v10);
  listEffectData = (System_Collections_Generic_List_object__o *)this->fields.listEffectData;
  v12 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__,
    0);
  if ( !listEffectData )
    goto LABEL_18;
  v8 = System_Collections_Generic_List_object___Find(
         listEffectData,
         (System_Predicate_T__o *)v12,
         (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__);
  v13 = v8;
  if ( !v8 )
    return v13 != 0;
  monitor = v8[1].monitor;
  if ( !monitor )
LABEL_18:
    sub_1C32E7C(v8);
  v15 = monitor[3];
  if ( (int)v15 >= 1 )
  {
    v16 = 0;
    v17 = isDisp;
    do
    {
      if ( v16 >= (unsigned int)v15 )
        sub_1C32E84(v8);
      v18 = (UnityEngine_Object_o *)monitor[v16 + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = (Il2CppObject *)UnityEngine_Object__op_Equality(v18, 0, 0);
      if ( ((unsigned __int8)v8 & 1) == 0 )
      {
        if ( !v18 )
          goto LABEL_18;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v18, v17, 0);
      }
      LODWORD(v15) = *((_DWORD *)monitor + 6);
      ++v16;
    }
    while ( (__int64)v16 < (int)v15 );
  }
  return v13 != 0;
}


void WarBoardPieceBaseComponent__SetTouchEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  UICommonButton_o *v6; // x0

  if ( (byte_4C3527E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3527E = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0, 0) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      sub_1C32E7C(0);
    UICommonButton__SetButtonEnableAndKeepState(v6, enable, 0, 0);
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

  if ( (byte_4C35281 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C35281 = 1;
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
    sub_1C32E7C(pieceData);
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
    sub_1C32E7C(0);
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
      SimpleAnimation__Stop_66461816(simpleAnimation, animationName, 0);
      simpleAnimation = this->fields.simpleAnimation;
      if ( simpleAnimation )
      {
        SimpleAnimation__Rewind(simpleAnimation, 0);
        return;
      }
    }
LABEL_7:
    sub_1C32E7C(simpleAnimation);
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
    sub_1C32E7C(pieceData);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_HashSet_T__o **v8; // x21
  System_Collections_Generic_HashSet_T__o *v9; // x23
  __int64 v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_T__o *cannotActTurnDurk; // x24
  char v14; // w23
  System_Action_object__o *v15; // x25
  System_Collections_Generic_IEnumerable_T__o *v16; // x24
  System_Action_object__o *v17; // x25
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundActionCount; // x24
  System_Action_object__o *v19; // x25
  System_Collections_Generic_IEnumerable_T__o *v20; // x23
  System_Action_object__o *v21; // x24
  struct UICommonButton_o *button; // x8
  System_Collections_Generic_IEnumerable_T__o *tweenTargets; // x23
  System_Collections_Generic_List_object__o *v24; // x20
  _BOOL8 v25; // x0
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *removeTweenTargetObjects; // x23
  Il2CppObject *gameObject; // x0
  UnityEngine_GameObject_o *v29; // x0
  Il2CppObject *v30; // x1
  UnityEngine_GameObject_o *v31; // x0
  Il2CppObject *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppObject *v35; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  struct UICommonButton_o *v40; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Collections_Generic_HashSet_Enumerator_T__o v44; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v45; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C35284 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_UIWidget__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_UIWidget___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Distinct_GameObject___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_GameObject___);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_UIWidget__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_UIWidget__get_Count__);
    sub_1C32C20(&System_Collections_Generic_HashSet_UIWidget__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor___78008376);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C32C20(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__);
    sub_1C32C20(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__);
    sub_1C32C20(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__);
    sub_1C32C20(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__);
    sub_1C32C20(&WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo);
    byte_4C35284 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v3 = sub_1C32E6C(WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass48_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass48_0_o *)v3, 0);
  v4 = (System_Collections_Generic_HashSet_T__o *)sub_1C32E6C(System_Collections_Generic_HashSet_UIWidget__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v4,
    (const MethodInfo_364F828 *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  if ( !v3 )
    goto LABEL_39;
  *(_QWORD *)(v3 + 24) = v4;
  v8 = (System_Collections_Generic_HashSet_T__o **)(v3 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v4, v6, v7);
  v9 = (System_Collections_Generic_HashSet_T__o *)sub_1C32E6C(System_Collections_Generic_HashSet_UIWidget__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v9,
    (const MethodInfo_364F828 *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  *(_QWORD *)(v3 + 16) = v9;
  v10 = v3 + 16;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 16), (int32_t)v9, v11, v12);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_39;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasIconDarkenBuff(pieceData, 0);
  cannotActTurnDurk = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
  v14 = (char)pieceData;
  if ( cannotActTurnDurk )
  {
    v15 = (System_Action_object__o *)sub_1C32E6C(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v15,
      (Il2CppObject *)v3,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__,
      0);
    BasicHelper__ForEach_object_(
      cannotActTurnDurk,
      (System_Action_T__o *)v15,
      (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_UIWidget___);
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_39;
    pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasVitalityToDoAnyActions(pieceData, 0);
    if ( v14 & 1 | (((unsigned __int8)pieceData & 1) == 0) )
    {
      v16 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
      v17 = (System_Action_object__o *)sub_1C32E6C(System_Action_UIWidget__TypeInfo);
      System_Action_object____ctor(
        v17,
        (Il2CppObject *)v3,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__,
        0);
      BasicHelper__ForEach_object_(
        v16,
        (System_Action_T__o *)v17,
        (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v19 = (System_Action_object__o *)sub_1C32E6C(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v19,
      (Il2CppObject *)v3,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__,
      0);
    BasicHelper__ForEach_object_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v19,
      (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_UIWidget___);
    if ( (v14 & 1) != 0 )
    {
      v20 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
      v21 = (System_Action_object__o *)sub_1C32E6C(System_Action_UIWidget__TypeInfo);
      System_Action_object____ctor(
        v21,
        (Il2CppObject *)v3,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__,
        0);
      BasicHelper__ForEach_object_(
        v20,
        (System_Action_T__o *)v21,
        (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  if ( !*(_QWORD *)v10 )
    goto LABEL_39;
  if ( *(int *)(*(_QWORD *)v10 + 32LL) < 1 )
    return;
  button = this->fields.button;
  if ( !button )
    goto LABEL_39;
  tweenTargets = (System_Collections_Generic_IEnumerable_T__o *)button->fields.tweenTargets;
  v24 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor_58294448(
    v24,
    tweenTargets,
    (const MethodInfo_37980B0 *)Method_System_Collections_Generic_List_GameObject___ctor___78008376);
  pieceData = *(WarBoardPieceData_o **)v10;
  if ( !*(_QWORD *)v10 )
    goto LABEL_39;
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v44,
    (System_Collections_Generic_HashSet_T__o *)pieceData,
    (const MethodInfo_3650390 *)Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__);
  v45 = v44;
  while ( 1 )
  {
    v25 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v45,
            (const MethodInfo_3522A38 *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__);
    if ( !v25 )
      break;
    current = v45.fields._current;
    if ( !v45.fields._current )
      sub_1C32E7C(v25);
    removeTweenTargetObjects = this->fields.removeTweenTargetObjects;
    gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v45.fields._current,
                                   0);
    if ( !removeTweenTargetObjects )
      sub_1C32E7C(gameObject);
    if ( System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)removeTweenTargetObjects,
           gameObject,
           (const MethodInfo_3798B4C *)Method_System_Collections_Generic_List_GameObject__Contains__) )
    {
      v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      v30 = (Il2CppObject *)v29;
      if ( !v24 )
        sub_1C32E7C(v29);
      goto LABEL_22;
    }
    if ( !*v8 )
      sub_1C32E7C(0);
    if ( System_Collections_Generic_HashSet_object___Contains(
           *v8,
           current,
           (const MethodInfo_364FF1C *)Method_System_Collections_Generic_HashSet_UIWidget__Contains__) )
    {
      v46.fields.r = 0.5;
      v46.fields.g = 0.5;
      v46.fields.b = 0.5;
      v46.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)current, v46, 0);
      v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      v30 = (Il2CppObject *)v31;
      if ( !v24 )
        sub_1C32E7C(v31);
LABEL_22:
      System_Collections_Generic_List_object___Remove(
        v24,
        v30,
        (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_GameObject__Remove__);
    }
    else
    {
      v47.fields.r = 1.0;
      v47.fields.g = 1.0;
      v47.fields.b = 1.0;
      v47.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)current, v47, 0);
      v32 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      v35 = v32;
      if ( !v24 )
        sub_1C32E7C(v32);
      items = v24->fields._items;
      v37 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v24->fields._version;
      if ( !items )
        sub_1C32E7C(v32);
      size = v24->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v24,
          v32,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v24->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v35;
        sub_1C32BC4((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v35, v33, v34);
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v45,
    (const MethodInfo_3522A34 *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__);
  v40 = this->fields.button;
  v41 = System_Linq_Enumerable__Distinct_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v24,
          (const MethodInfo_3100694 *)Method_System_Linq_Enumerable_Distinct_GameObject___);
  pieceData = (WarBoardPieceData_o *)System_Linq_Enumerable__ToArray_object_(
                                       v41,
                                       (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_GameObject___);
  if ( !v40 )
LABEL_39:
    sub_1C32E7C(pieceData);
  v40->fields.tweenTargets = (struct UnityEngine_GameObject_array *)pieceData;
  sub_1C32BC4((CGThumbnailListItem_o *)&v40->fields.tweenTargets, (int32_t)pieceData, v42, v43);
}


void WarBoardPieceBaseComponent__UpdateUiByBuffChanged(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *pieceStatusLabelComponent; // x20
  WarBoardPieceStatusLabel_o *v4; // x0

  if ( (byte_4C35283 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C35283 = 1;
  }
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr)(
    this,
    this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method);
  pieceStatusLabelComponent = (UnityEngine_Object_o *)this->fields.pieceStatusLabelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pieceStatusLabelComponent, 0, 0) )
  {
    v4 = this->fields.pieceStatusLabelComponent;
    if ( !v4 )
      sub_1C32E7C(0);
    WarBoardPieceStatusLabel__SetupLabel(v4, this->fields.pieceData, 0);
  }
}


void WarBoardPieceBaseComponent__UpdateWidgetDepth(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarBoardData_o *Instance; // x0
  int32_t PieceDispPriority; // w0
  const MethodInfo *v6; // x2

  if ( (byte_4C35297 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C35297 = 1;
  }
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, -20 * this->fields.dispPriotiry, v2);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_1C32E7C(Instance);
  PieceDispPriority = WarBoardData__GetPieceDispPriority(Instance, this->fields.pieceData, 0);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v6);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int max_length; // w21
  unsigned int i; // w22
  Il2CppClass **v14; // x0
  Il2CppClass *v15; // x8
  Il2CppClass *v16; // t1
  unsigned __int64 v17; // x22
  __int64 v18; // x24
  UnityEngine_Object_o *v19; // x21
  struct UIWidget_array *v20; // x8

  v4 = this;
  if ( (byte_4C35290 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78081984);
    this = (WarBoardPieceBaseComponent_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C35290 = 1;
  }
  uiWidgets = v4->fields.uiWidgets;
  p_uiWidgets = &v4->fields.uiWidgets;
  if ( !uiWidgets )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)v4,
                                    1,
                                    (const MethodInfo_30D48E4 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78081984);
    v4->fields.uiWidgets = (struct UIWidget_array *)ComponentsInChildren_object;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.uiWidgets, (int32_t)ComponentsInChildren_object, v8, v9);
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
        v14 = &uiWidgets->obj.klass + (int)i;
        v16 = v14[4];
        this = (WarBoardPieceBaseComponent_o *)(v14 + 4);
        v15 = v16;
        if ( !v16 )
          goto LABEL_26;
        if ( SLODWORD(v15->_1.interfaceOffsets) >= 1001 )
        {
          this->klass = 0;
          sub_1C32BC4((CGThumbnailListItem_o *)this, 0, v10, v11);
        }
        uiWidgets = *p_uiWidgets;
      }
      if ( !uiWidgets )
LABEL_26:
        sub_1C32E7C(this);
    }
  }
  if ( (int)uiWidgets->max_length >= 1 )
  {
    v17 = 0;
    v18 = (unsigned int)uiWidgets->max_length - 1LL;
    while ( v17 < LODWORD(uiWidgets->max_length) )
    {
      v19 = (UnityEngine_Object_o *)uiWidgets->m_Items[v17];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardPieceBaseComponent_o *)UnityEngine_Object__op_Inequality(v19, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v20 = *p_uiWidgets;
        if ( !*p_uiWidgets )
          goto LABEL_26;
        if ( v17 >= LODWORD(v20->max_length) )
          break;
        this = (WarBoardPieceBaseComponent_o *)v20->m_Items[v17];
        if ( !this )
          goto LABEL_26;
        UIWidget__set_depth((UIWidget_o *)this, LODWORD(this->fields.pieceStatusLabelComponent) + value, 0);
      }
      if ( v18 == v17 )
        return;
      uiWidgets = *p_uiWidgets;
      ++v17;
      if ( !*p_uiWidgets )
        goto LABEL_26;
    }
LABEL_28:
    sub_1C32E84(this);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C3529A & 1) == 0 )
  {
    sub_1C32C20(&WarBoardPieceBaseComponent___c_TypeInfo);
    byte_4C3529A = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(WarBoardPieceBaseComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardPieceBaseComponent___c_TypeInfo->static_fields->__9 = (struct WarBoardPieceBaseComponent___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)WarBoardPieceBaseComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
  return (System_Collections_Generic_IEnumerable_int__o *)WarBoardPieceData__CreatePieceEventVals(x, 0);
}


void WarBoardPieceBaseComponent___c___OnAfterAttack_b__65_3(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3529D & 1) == 0 )
  {
    sub_1C32C20(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4C3529D = 1;
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

  if ( (byte_4C3529B & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3529B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 0.0, 0, 0);
}


void WarBoardPieceBaseComponent___c___OnAttack_b__63_4(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3529C & 1) == 0 )
  {
    sub_1C32C20(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4C3529C = 1;
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

  if ( (byte_4C3529E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_4C3529E = 1;
  }
  targetUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_1C32E7C(0);
  System_Collections_Generic_HashSet_object___Add(
    targetUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_3650A0C *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *darkenUiWidgets; // x0

  if ( (byte_4C3529F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_4C3529F = 1;
  }
  darkenUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_1C32E7C(0);
  System_Collections_Generic_HashSet_object___Add(
    darkenUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_3650A0C *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *targetUiWidgets; // x0

  if ( (byte_4C352A0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_4C352A0 = 1;
  }
  targetUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_1C32E7C(0);
  System_Collections_Generic_HashSet_object___Add(
    targetUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_3650A0C *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *darkenUiWidgets; // x0

  if ( (byte_4C352A1 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_4C352A1 = 1;
  }
  darkenUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_1C32E7C(0);
  System_Collections_Generic_HashSet_object___Add(
    darkenUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_3650A0C *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
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
    sub_1C32E7C(0);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_4C352A2 & 1) == 0 )
  {
    sub_1C32C20(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4C352A2 = 1;
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

  if ( (byte_4C352A3 & 1) == 0 )
  {
    sub_1C32C20(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4C352A3 = 1;
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
  WarBoardPieceData_o *targetSquarePiece; // x0
  System_Int32_array *PieceEventVals; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v8; // x0
  WarBoardManager_o *warBoardManager; // x19

  if ( (byte_4C352A4 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C352A4 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 38, this->fields.pieceEventVals, 0);
  if ( !v3 )
    goto LABEL_13;
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetSquarePiece = this->fields.targetSquarePiece;
  if ( targetSquarePiece )
  {
    PieceEventVals = WarBoardPieceData__CreatePieceEventVals(targetSquarePiece, 0);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    EventTasks = WarBoardManager__GetEventTasks(Instance, 38, PieceEventVals, 0);
    System_Collections_Generic_List_object___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
      (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
LABEL_13:
    sub_1C32E7C(Instance);
  v8 = WarBoardManager__GetEventTasks(Instance, 37, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)v8,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_object___ToArray(
                                      v3,
                                      (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
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
    sub_1C32E7C(0);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass63_0___OnAttack_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *warBoardManager; // x0

  warBoardManager = this->fields.warBoardManager;
  if ( !warBoardManager )
    sub_1C32E7C(0);
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
    sub_1C32E7C(this);
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

  if ( (byte_4C352A6 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C352A6 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
    sub_1C32E7C(_4__this);
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
    sub_1C32E7C(this);
  return this->fields.moveAfterActionCheck && targetPiece->fields._isDead_k__BackingField;
}


void WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_g__AddAfterAttackEventTask_0(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  WarBoardPieceData_o *targetPiece; // x0
  struct WarBoardManager_o *warBoardManager; // x8
  int32_t id; // w21
  struct WarBoardPieceData_o *v7; // x8
  int32_t breakPoint_k__BackingField; // w23
  WarBoardMessageMaster_o *v9; // x22
  int32_t v10; // w2
  bool v11; // w4
  WarBoardMessageMaster_o *v12; // x0
  int32_t v13; // w1
  int32_t v14; // w3
  System_Int32_array *v15; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v17; // x0
  WarBoardManager_o *v18; // x19

  if ( (byte_4C352A5 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    byte_4C352A5 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
    targetPiece = (WarBoardPieceData_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
    v7 = this->fields.targetPiece;
    if ( !v7 )
      goto LABEL_25;
    breakPoint_k__BackingField = v7->fields._breakPoint_k__BackingField;
    v9 = (WarBoardMessageMaster_o *)targetPiece;
    targetPiece = (WarBoardPieceData_o *)WarBoardPieceData__get_isPlayerMaster(this->fields.targetPiece, 0);
    if ( !v9 )
      goto LABEL_25;
    if ( ((unsigned __int8)targetPiece & 1) != 0 )
    {
      v10 = 12;
      v11 = 1;
      v12 = v9;
      v13 = id;
      v14 = breakPoint_k__BackingField;
    }
    else
    {
      v10 = 10;
      v12 = v9;
      v13 = id;
      v14 = breakPoint_k__BackingField;
      v11 = 0;
    }
    targetPiece = (WarBoardPieceData_o *)WarBoardMessageMaster__GetMessageTasks(v12, v13, v10, v14, v11, 0);
    if ( !v3 )
      goto LABEL_25;
    System_Collections_Generic_List_object___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
      (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
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
  v15 = (System_Int32_array *)targetPiece;
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
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_25;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)targetPiece, 20, v15, 0);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_25;
  v17 = WarBoardManager__GetEventTasks((WarBoardManager_o *)targetPiece, 40, v15, 0);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)v17,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    v18 = this->fields.warBoardManager;
    targetPiece = (WarBoardPieceData_o *)System_Collections_Generic_List_object___ToArray(
                                           v3,
                                           (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( v18 )
    {
      WarBoardManager__InsertRunningTask(v18, (WarBoardTaskBase_array *)targetPiece, 0);
      return;
    }
LABEL_25:
    sub_1C32E7C(targetPiece);
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
    sub_1C32E7C(0);
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

  if ( (byte_4C352A8 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C352A8 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
    sub_1C32E7C(_4__this);
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
  WarBoardManager_o *warBoardManager; // x19

  if ( (byte_4C352A7 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C352A7 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 27, 0, 0);
  if ( !v3 )
    goto LABEL_9;
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_object___ToArray(
                                      v3,
                                      (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( warBoardManager )
    {
      WarBoardManager__InsertRunningTask(warBoardManager, (WarBoardTaskBase_array *)Instance, 0);
      return;
    }
LABEL_9:
    sub_1C32E7C(Instance);
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
    sub_1C32E7C(this);
  return System_String__op_Equality(a->fields.key, this->fields.effectKey, 0);
}