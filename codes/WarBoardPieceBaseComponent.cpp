void WarBoardPieceBaseComponent___ctor(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct System_String_o *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_object__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_5935E93 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_21FFC50(&StringLiteral_7139/*"Frame{0}"*/);
    byte_5935E93 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
  this->fields.listEffectData = (struct System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.listEffectData, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (struct System_String_o *)StringLiteral_7139/*"Frame{0}"*/;
  this->fields.lengthMoveAttack = 25.0;
  *(_OWORD *)&this->fields.positionPieceActionPointDefault.fields.x = xmmword_E93E70;
  *(_QWORD *)&this->fields.positionPieceActionPointNext.fields.y = 1111228416;
  *(_OWORD *)&this->fields.pixelPerSecond = xmmword_E935A0;
  this->fields.baseFrameName = v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseFrameName,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.removeTweenTargetObjects = (struct System_Collections_Generic_List_GameObject__o *)v17;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.removeTweenTargetObjects,
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
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
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
  if ( (byte_5935E8A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardMovePerformance_TypeInfo);
    byte_5935E8A = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_16;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(pieceData, 0);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 36, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)pieceData, squareIndex, 0);
  pixelPerSecond = this->fields.pixelPerSecond;
  v16 = SquarePosition.fields.x;
  v17 = SquarePosition.fields.y;
  v18 = SquarePosition.fields.z;
  v19 = (WarBoardMovePerformance_o *)sub_21FFEBC(WarBoardMovePerformance_TypeInfo);
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
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v20;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 4), (int32_t)v20, v21, v22, v23, v24, v25, v26);
  }
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData
    || (v31 = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 38, PieceEventVals, 0),
        System_Collections_Generic_List_object___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)v31,
          (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0)
    || (v32 = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 37, 0, 0),
        System_Collections_Generic_List_object___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)v32,
          (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        pieceData = (WarBoardPieceData_o *)System_Collections_Generic_List_object___ToArray(
                                             v9,
                                             (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__),
        !Instance) )
  {
LABEL_16:
    sub_21FFECC(pieceData, v10);
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
  const MethodInfo *v10; // x1
  Il2CppMethodPointer methodPtr; // x2
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

  if ( (byte_5935E7B & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardPieceBaseComponent_ClickIcon__);
    byte_5935E7B = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v13 = (_QWORD *)sub_21FFC68(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v14 = (System_Reflection_MethodBase_o *)sub_21FFC34(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
      v15 = this->fields.pieceData;
      if ( v15 )
      {
        WarBoardManager__SquareSelect(v6, v15->fields._nowSquareIndex_k__BackingField, 0);
        v10 = this->klass->vtable._14_EditPiece.method;
        methodPtr = this->klass->vtable._14_EditPiece.methodPtr;
        goto LABEL_33;
      }
LABEL_41:
      sub_21FFECC(Instance, v4);
    }
  }
  else if ( controllType_k__BackingField == 2 )
  {
    if ( WarBoardManager__get_isSelectedPiece(Instance, 0)
      && WarBoardManager__IsSelectedPieceSame(v6, this->fields.pieceData, 0) )
    {
      v7 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_21FFC68(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v8 = (System_Reflection_MethodBase_o *)sub_21FFC34(v7, v7[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        seSetting = Instance->fields.seSetting;
        if ( seSetting )
        {
          OverwriteAssetSoundName__PlaySe(v8, seSetting->fields.DeselectSe, 0, 0);
          WarBoardManager__DeselectPiece(v6, 1, 0, 0);
          v10 = this->klass->vtable._13_HideStatus.method;
          methodPtr = this->klass->vtable._13_HideStatus.methodPtr;
LABEL_33:
          ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))methodPtr)(this, v10);
          return;
        }
      }
      goto LABEL_41;
    }
    if ( WarBoardManager__get_isSelectedPiece(v6, 0) && this->fields.isSelectable )
    {
      v16 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v16 = (_QWORD *)sub_21FFC68(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v17 = (System_Reflection_MethodBase_o *)sub_21FFC34(v16, v16[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v20 = (_QWORD *)sub_21FFC68(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v21 = (System_Reflection_MethodBase_o *)sub_21FFC34(v20, v20[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v22 = Instance->fields.seSetting;
        if ( v22 )
        {
          OverwriteAssetSoundName__PlaySe(v21, v22->fields.SelectSe, 0, 0);
          WarBoardManager__SelectPiece(v6, this->fields.pieceData, 0);
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
    v23 = Method_WarBoardPieceBaseComponent_ClickIcon__;
    if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
      v23 = (_QWORD *)sub_21FFC68(Method_WarBoardPieceBaseComponent_ClickIcon__);
    v24 = (System_Reflection_MethodBase_o *)sub_21FFC34(v23, v23[4]);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *CommonEffectAsset_object; // x22
  UnityEngine_Transform_o *transform; // x23
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *v19; // x22
  WarBoardCommonEffectPerformance_o *v20; // x0
  Il2CppObject *v21; // x21
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Nullable_Vector3__o v32; // 0:x3.16
  System_Nullable_Vector3__o v33; // 0:x5.16

  if ( (byte_5935E90 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardCommonEffectPerformance_TypeInfo);
    sub_21FFC50(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    byte_5935E90 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_39E28E0 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v16 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._41_GetEffectDisplayTransform.methodPtr)(
                                    this,
                                    this->klass->vtable._41_GetEffectDisplayTransform.method);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
    if ( !UnityEngine_Object__op_Inequality(v16, 0, 0) )
      v16 = (UnityEngine_Object_o *)transform;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
    v19 = UnityEngine_Object__Instantiate_object__59506996(
            CommonEffectAsset_object,
            (UnityEngine_Transform_o *)v16,
            (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    v20 = (WarBoardCommonEffectPerformance_o *)sub_21FFEBC(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v32.fields.hasValue = 0;
    *(_QWORD *)&v32.fields.value.fields.y = 0;
    *(_QWORD *)&v33.fields.hasValue = 0;
    *(_QWORD *)&v33.fields.value.fields.y = 0;
    v21 = (Il2CppObject *)v20;
    WarBoardCommonEffectPerformance___ctor(
      v20,
      0,
      (UnityEngine_GameObject_o *)v19,
      v32,
      v33,
      (System_Nullable_Vector3__o)0,
      0,
      0,
      1,
      0);
    if ( v7 )
    {
      items = v7->fields._items;
      v29 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v7->fields._version;
      if ( items )
      {
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            v21,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_17;
        }
        else
        {
          v31 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v21;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)v21, v22, v23, v24, v25, v26, v27);
          if ( taskList )
          {
LABEL_17:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v7,
              (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_44947516(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v7,
            0);
          return;
        }
      }
    }
LABEL_21:
    sub_21FFECC(Instance, v9);
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
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *effectDamageBaseLabel; // x23
  __int64 v14; // x1
  UILabel_o *Instance; // x0
  UnityEngine_GameObject_o *v16; // x22
  WarBoardCommonEffectPerformance_o *v17; // x0
  Il2CppObject *v18; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Nullable_Vector3__o v29; // 0:x3.16
  System_Nullable_Vector3__o v30; // 0:x5.16

  if ( (byte_5935E91 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardCommonEffectPerformance_TypeInfo);
    byte_5935E91 = 1;
  }
  effectDamageBaseObject = (UnityEngine_Object_o *)this->fields.effectDamageBaseObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, effectName, popText);
  if ( !UnityEngine_Object__op_Equality(0, effectDamageBaseObject, 0) )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    effectDamageBaseLabel = (UnityEngine_Object_o *)this->fields.effectDamageBaseLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    if ( UnityEngine_Object__op_Inequality(effectDamageBaseLabel, 0, 0) )
    {
      Instance = this->fields.effectDamageBaseLabel;
      if ( !Instance )
        goto LABEL_19;
      UILabel__set_text(Instance, popText, 0);
    }
    v16 = this->fields.effectDamageBaseObject;
    v17 = (WarBoardCommonEffectPerformance_o *)sub_21FFEBC(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v29.fields.hasValue = 0;
    *(_QWORD *)&v29.fields.value.fields.y = 0;
    *(_QWORD *)&v30.fields.hasValue = 0;
    *(_QWORD *)&v30.fields.value.fields.y = 0;
    v18 = (Il2CppObject *)v17;
    WarBoardCommonEffectPerformance___ctor(v17, 0, v16, v29, v30, (System_Nullable_Vector3__o)0, 0, 0, 0, 0);
    if ( v10 )
    {
      items = v10->fields._items;
      v26 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v10->fields._version;
      if ( items )
      {
        size = v10->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v18,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_15;
        }
        else
        {
          v28 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v18;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)v18, v19, v20, v21, v22, v23, v24);
          if ( taskList )
          {
LABEL_15:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v10,
              (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        Instance = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_44947516(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v10,
            0);
          return;
        }
      }
    }
LABEL_19:
    sub_21FFECC(Instance, v14);
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

  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
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

  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
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
  __int64 v8; // x2
  long double v9; // q0
  _QWORD *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *m_CachedPtr; // x19
  WarBoardPieceBaseComponent___c_c *v16; // x0
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__62_0; // x20
  Il2CppObject *v19; // x21
  struct WarBoardPieceBaseComponent___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  v4 = this;
  if ( (byte_5935E84 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Concat_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__);
    this = (WarBoardPieceBaseComponent_o *)sub_21FFC50(&WarBoardPieceBaseComponent___c_TypeInfo);
    byte_5935E84 = 1;
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
             (const MethodInfo_3842AD4 *)Method_System_Linq_Enumerable_Concat_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v7,
               (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_28:
    sub_21FFECC(this, targetPiece);
  }
  this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v16 = WarBoardPieceBaseComponent___c_TypeInfo;
    if ( !*(&WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo, targetPiece, v8);
      v16 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__62_0 = (System_Func_object__object__o *)static_fields->__9__62_0;
    if ( !_9__62_0 )
    {
      if ( !*(&v16->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v16, targetPiece, v8);
        static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__62_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(
        _9__62_0,
        v19,
        Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__,
        0);
      v20 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      v20->__9__62_0 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__62_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v20->__9__62_0, (int32_t)_9__62_0, v21, v22, v23, v24, v25, v26);
    }
    v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                m_CachedPtr,
                                                                (System_Func_TSource__IEnumerable_TResult___o *)_9__62_0,
                                                                (const MethodInfo_3860774 *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v7,
             (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v10 = Method_System_Array_Empty_int___;
  v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v11 )
  {
    sub_2237B54(Method_System_Array_Empty_int___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_2237AF8(v9);
  if ( !*(_DWORD *)(v12 + 228) )
    *(__n128 *)&v9 = j_il2cpp_runtime_class_init_0(v12, targetPiece, v8);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_2237AF8(v9);
  return **(System_Int32_array ***)(v13 + 184);
}


WarBoardSimpleAnimationPerformance_o *WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x20
  WarBoardSimpleAnimationPerformance_o *v6; // x21

  if ( (byte_5935E8C & 1) == 0 )
  {
    sub_21FFC50(&WarBoardSimpleAnimationPerformance_TypeInfo);
    byte_5935E8C = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v6 = (WarBoardSimpleAnimationPerformance_o *)sub_21FFEBC(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(v6, simpleAnimation, animationName, 0);
  return v6;
}


void WarBoardPieceBaseComponent__HideActionCount(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *currentActionPointRoot; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *currentPieceActionPointRoot; // x20

  if ( (byte_5935E7D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935E7D = 1;
  }
  currentActionPointRoot = this->fields.currentActionPointRoot;
  if ( !currentActionPointRoot )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(currentActionPointRoot, 0, 0);
  currentPieceActionPointRoot = (UnityEngine_Object_o *)this->fields.currentPieceActionPointRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( UnityEngine_Object__op_Inequality(currentPieceActionPointRoot, 0, 0) )
  {
    currentActionPointRoot = this->fields.currentPieceActionPointRoot;
    if ( currentActionPointRoot )
    {
      UnityEngine_GameObject__SetActive(currentActionPointRoot, 0, 0);
      goto LABEL_9;
    }
LABEL_10:
    sub_21FFECC(currentActionPointRoot, method);
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
    sub_21FFECC(0, method);
  UnityEngine_GameObject__SetActive(selectObject, 0, 0);
}


void WarBoardPieceBaseComponent__HideStatus(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v3; // x0
  __int64 v4; // x0
  WarBoardManager_o *v5; // x0

  if ( (byte_5935E80 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_5935E80 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_2237AF8(v2);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_2237AF8(v2);
  v5 = **(WarBoardManager_o ***)(v4 + 184);
  if ( !v5 )
    sub_21FFECC(0, method);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UnityEngine_Transform_o *transform; // x21
  __int64 breakPointMax_k__BackingField; // x21
  struct WarBoardBreakPointComponent_array *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct UIWidget_o *breakPointParent; // x8
  UnityEngine_Object_c **v30; // x25
  float v31; // s8
  unsigned __int64 v32; // x27
  __int64 v33; // x26
  int v34; // w28
  float v35; // s9
  Il2CppObject *breakPointPrefab; // x23
  __int64 v37; // x1
  __int64 v38; // x2
  UnityEngine_Transform_o *v39; // x24
  UnityEngine_GameObject_o *v40; // x24
  __int64 v41; // x22
  WarBoardBreakPointComponent_o *v42; // x23
  UnityEngine_Object_c **v43; // x21
  struct UIWidget_o *v44; // x8
  WarBoardPieceBaseComponent_o *v45; // x20
  int32_t mDepth; // w29
  bool isMaster; // w25
  const MethodInfo *v48; // x6
  unsigned __int64 v49; // x24
  unsigned int *v50; // x25
  __int64 v51; // x1
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  const MethodInfo *v58; // x3
  struct WarBoardBreakPointComponent_array *v59; // x8
  float maxSpacing; // s0
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  UnityEngine_Transform_array *v67; // x21
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  UnityEngine_Transform_o *v74; // x22
  const MethodInfo *v75; // x2
  int32_t PieceDispPriority; // w0
  const MethodInfo *v77; // x2
  const MethodInfo *v78; // x1
  __int64 v79; // x1
  __int64 v80; // x2
  Il2CppObject *CommonEffectAsset_object; // x20
  UnityEngine_Transform_o *v82; // x21
  __int64 v83; // x1
  __int64 v84; // x2
  UnityEngine_Object_o *v85; // x22
  __int64 v86; // x1
  __int64 v87; // x2
  Il2CppObject *v88; // x0
  UnityEngine_GameObject_o **p_effectDamageBaseObject; // x20
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  __int64 v96; // x1
  __int64 v97; // x2
  UnityEngine_Object_o *v98; // x21
  Il2CppObject *v99; // x0
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  __int64 v106; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5935E77 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&UnityEngine_Transform___TypeInfo);
    sub_21FFC50(&WarBoardBreakPointComponent___TypeInfo);
    sub_21FFC50(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_21FFC50(&StringLiteral_24308/*"root_text/type01/dm_base"*/);
    sub_21FFC50(&StringLiteral_19652/*"ef_dm_base"*/);
    byte_5935E77 = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_53;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.simpleAnimation,
    (int32_t)Component_object,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.pieceData = pieceData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.pieceData,
    (int32_t)pieceData,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_53;
  if ( !gameObject )
    goto LABEL_53;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0);
  if ( !transform )
    goto LABEL_53;
  UnityEngine_Transform__set_localPosition(transform, SquarePosition, 0);
  breakPointMax_k__BackingField = (unsigned int)pieceData->fields._breakPointMax_k__BackingField;
  v22 = (struct WarBoardBreakPointComponent_array *)sub_21FFD10(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v22;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.breakPoints, (int32_t)v22, v23, v24, v25, v26, v27, v28);
  breakPointParent = this->fields.breakPointParent;
  p_breakPoints = &this->fields.breakPoints;
  if ( !breakPointParent )
    goto LABEL_53;
  v30 = &UnityEngine_Object_TypeInfo;
  if ( (int)breakPointMax_k__BackingField >= 1 )
  {
    v31 = 0.0;
    v32 = 0;
    v33 = 8;
    v34 = 2 * breakPointMax_k__BackingField - 2;
    v35 = (float)breakPointParent->fields.mWidth / (float)(int)breakPointMax_k__BackingField;
    do
    {
      gameObject = (__int64)this->fields.breakPointParent;
      if ( !gameObject )
        goto LABEL_53;
      breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
      v39 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !*(&(*v30)->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(*v30, v37, v38);
      gameObject = (__int64)UnityEngine_Object__Instantiate_object__59506996(
                              breakPointPrefab,
                              v39,
                              (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
      if ( !gameObject )
        goto LABEL_53;
      v40 = (UnityEngine_GameObject_o *)gameObject;
      v41 = breakPointMax_k__BackingField;
      v42 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)gameObject,
                                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      gameObject = (__int64)UnityEngine_GameObject__get_transform(v40, 0);
      if ( !gameObject )
        goto LABEL_53;
      v109.fields.y = 0.0;
      v109.fields.z = 0.0;
      v109.fields.x = v31;
      v43 = v30;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v109, 0);
      v44 = this->fields.breakPointParent;
      if ( !v44 )
        goto LABEL_53;
      v45 = this;
      mDepth = v44->fields.mDepth;
      isMaster = WarBoardPieceData__get_isMaster(pieceData, 0);
      gameObject = WarBoardPieceData__get_isEnemyServant(pieceData, 0);
      if ( !v42 )
        goto LABEL_53;
      v49 = v32 + 1;
      WarBoardBreakPointComponent__Initialize(v42, v34 + mDepth, v32 + 1, isMaster, gameObject & 1, 0, v48);
      v50 = (unsigned int *)*p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_53;
      gameObject = sub_21FFDA4(v42, *(_QWORD *)(*(_QWORD *)v50 + 64LL));
      if ( !gameObject )
        goto LABEL_56;
      if ( v32 >= v50[6] )
        goto LABEL_55;
      this = v45;
      *(_QWORD *)&v50[v33] = v42;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v50[v33], (int32_t)v42, v52, v53, v54, v55, v56, v57);
      v59 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_53;
      if ( v32 >= LODWORD(v59->max_length) )
        goto LABEL_55;
      gameObject = (__int64)v59->m_Items[v32];
      if ( !gameObject )
        goto LABEL_53;
      v30 = v43;
      breakPointMax_k__BackingField = v41;
      WarBoardBreakPointComponent__SetActive(
        (WarBoardBreakPointComponent_o *)gameObject,
        (__int64)v32 < pieceData->fields._breakPoint_k__BackingField,
        0,
        v58);
      maxSpacing = v42->fields.maxSpacing;
      v34 -= 2;
      v33 += 2;
      ++v32;
      if ( maxSpacing >= v35 )
        maxSpacing = v35;
      v31 = v31 + maxSpacing;
    }
    while ( v41 != v49 );
  }
  gameObject = (__int64)this->fields.selectObject;
  if ( !gameObject )
    goto LABEL_53;
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&pieceData->fields.pieceComponent,
    (int32_t)this,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  if ( pieceData->fields._isDead_k__BackingField )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_53;
LABEL_29:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    return;
  }
  v67 = (UnityEngine_Transform_array *)sub_21FFD10(UnityEngine_Transform___TypeInfo, 1);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v67 )
    goto LABEL_53;
  v74 = (UnityEngine_Transform_o *)gameObject;
  if ( gameObject )
  {
    gameObject = sub_21FFDA4(gameObject, v67->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_56:
      v106 = sub_21FFEF0(gameObject, v51);
      sub_21FFD90(v106, 0);
    }
  }
  if ( !LODWORD(v67->max_length) )
LABEL_55:
    sub_21FFED4(gameObject);
  v67->m_Items[0] = v74;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v67->m_Items, (int32_t)v74, v68, v69, v70, v71, v72, v73);
  WarBoardPieceBaseComponent__SetButtonTweenTarget(this, v67, v75);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_53;
  gameObject = *(_QWORD *)(gameObject + 440);
  if ( !gameObject )
    goto LABEL_53;
  PieceDispPriority = WarBoardData__GetPieceDispPriority((WarBoardData_o *)gameObject, pieceData, 0);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v77);
  WarBoardPieceBaseComponent__UpdateUiByBuffChanged(this, v78);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_53;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)gameObject,
                               (System_String_o *)StringLiteral_19652/*"ef_dm_base"*/,
                               (const MethodInfo_39E28E0 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !*(&(*v30)->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(*v30, v79, v80);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0, 0) )
  {
    v82 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v85 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._41_GetEffectDisplayTransform.methodPtr)(
                                    this,
                                    this->klass->vtable._41_GetEffectDisplayTransform.method);
    if ( !*(&(*v30)->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(*v30, v83, v84);
    if ( UnityEngine_Object__op_Inequality(v85, 0, 0) )
      v82 = (UnityEngine_Transform_o *)v85;
    if ( !*(&(*v30)->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(*v30, v86, v87);
    v88 = UnityEngine_Object__Instantiate_object__59506996(
            CommonEffectAsset_object,
            v82,
            (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    this->fields.effectDamageBaseObject = (struct UnityEngine_GameObject_o *)v88;
    p_effectDamageBaseObject = &this->fields.effectDamageBaseObject;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.effectDamageBaseObject,
      (int32_t)v88,
      v90,
      v91,
      v92,
      v93,
      v94,
      v95);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.effectDamageBaseObject, 0, 0) )
    {
      v98 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                      *p_effectDamageBaseObject,
                                      (System_String_o *)StringLiteral_24308/*"root_text/type01/dm_base"*/,
                                      0);
      if ( !*(&(*v30)->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(*v30, v96, v97);
      gameObject = UnityEngine_Object__op_Inequality(v98, 0, 0);
      if ( (gameObject & 1) != 0 )
      {
        if ( !v98 )
          goto LABEL_53;
        v99 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)v98,
                (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        this->fields.effectDamageBaseLabel = (struct UILabel_o *)v99;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.effectDamageBaseLabel,
          (int32_t)v99,
          v100,
          v101,
          v102,
          v103,
          v104,
          v105);
      }
      gameObject = (__int64)*p_effectDamageBaseObject;
      if ( !*p_effectDamageBaseObject )
LABEL_53:
        sub_21FFECC(gameObject, v6);
      goto LABEL_29;
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_WarBoardTaskBase__c *v14; // x0
  System_Collections_Generic_List_object__o *v15; // x19
  Il2CppObject *Instance; // x0
  WarBoardData_o **v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  WarBoardPieceData_o *Piece_44763860; // x0
  WarBoardData_o **v25; // x23
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x24
  WarBoardTaskBase_TaskCallback_o *v33; // x25
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v51; // x2
  float z; // s8
  float32x2_t v53; // d9
  float32x2_t v54; // d0 OVERLAPPED
  float v55; // s10
  float32x2_t v56; // d9
  float v57; // s8
  float v58; // s10
  float v59; // s8
  float32x2_t v60; // d9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s10
  float v63; // s0
  unsigned __int64 v64; // d1
  float v65; // s0
  __int64 v66; // x24
  WarBoardTaskBase_TaskCallback_o *v67; // x25
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  struct WarBoardPieceData_o *v74; // x8
  UnityEngine_GameObject_o *v75; // x26
  float v76; // s8
  float v77; // s9
  float v78; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float v82; // s14
  WarBoardMovePerformance_o *v83; // x0
  WarBoardTaskBase_o *v84; // x25
  bool IsEnabledMovedAfterDefend; // w0
  bool v86; // w9
  System_Func_bool__c *v87; // x0
  System_Func_bool__o *v88; // x23
  __int64 v89; // x21
  __int64 v90; // x2
  System_Delegate_o **v91; // x22
  System_Delegate_o *v92; // x23
  WarBoardPieceBaseComponent___c_c *v93; // x0
  struct WarBoardPieceBaseComponent___c_StaticFields *v94; // x8
  WarBoardTaskBase_TaskCallback_o *_9__65_3; // x24
  Il2CppObject *v96; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v97; // x0
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  System_Delegate_o *v104; // x0
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  int32_t v111; // w8
  WarBoardTaskBase_TaskCallback_c *v112; // x1
  System_String_o *v113; // x2
  System_String_o *v114; // x3
  int32_t v115; // w4
  int32_t v116; // w5
  bool v117; // w6
  bool v118; // w7
  struct System_Object_array *v119; // x8
  _QWORD *v120; // x9
  __int64 v121; // x10
  Il2CppClass **v122; // x0
  unsigned __int64 v123; // [xsp+0h] [xbp-A0h]
  __int64 v124; // [xsp+0h] [xbp-A0h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v126; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v127; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v128; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v129; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_5935E87 & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__);
    sub_21FFC50(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__);
    sub_21FFC50(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__);
    sub_21FFC50(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__);
    sub_21FFC50(&WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo);
    sub_21FFC50(&WarBoardPieceBaseComponent___c_TypeInfo);
    sub_21FFC50(&WarBoardCallbackTask_TypeInfo);
    sub_21FFC50(&WarBoardConditionalJumpTask_TypeInfo);
    sub_21FFC50(&WarBoardMovePerformance_TypeInfo);
    byte_5935E87 = 1;
  }
  v5 = sub_21FFEBC(WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass65_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass65_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_60;
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v14 = System_Collections_Generic_List_WarBoardTaskBase__TypeInfo;
  *(_DWORD *)(v5 + 52) = squareIndex;
  v15 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v14);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v5 + 24) = Instance;
  v17 = (WarBoardData_o **)(v5 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)Instance, v18, v19, v20, v21, v22, v23);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_60;
  gameObject = *(WarBoardData_o **)(*(_QWORD *)(v5 + 24) + 440LL);
  if ( !gameObject )
    goto LABEL_60;
  Piece_44763860 = WarBoardData__GetPiece_44763860(gameObject, *(_DWORD *)(v5 + 52), 0);
  *(_QWORD *)(v5 + 16) = Piece_44763860;
  v25 = (WarBoardData_o **)(v5 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)Piece_44763860, v26, v27, v28, v29, v30, v31);
  v32 = sub_21FFEBC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v32, 0, 0);
  v33 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v33,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__,
    0);
  if ( !v32 )
    goto LABEL_60;
  *(_QWORD *)(v32 + 32) = v33;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 32), (int32_t)v33, v34, v35, v36, v37, v38, v39);
  if ( !v15 )
    goto LABEL_60;
  items = v15->fields._items;
  v47 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v15->fields._version;
  if ( !items )
    goto LABEL_60;
  size = v15->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)v32,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v49[4] = (Il2CppClass *)v32;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v49 + 4), v32, v40, v41, v42, v43, v44, v45);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_60;
  gameObject = *v17;
  if ( !*v17 )
    goto LABEL_60;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0);
  gameObject = *(WarBoardData_o **)(v5 + 24);
  *(UnityEngine_Vector3_o *)(v5 + 40) = SquarePosition;
  if ( !gameObject )
    goto LABEL_60;
  *(UnityEngine_Vector3_o *)v54.n64_u64 = WarBoardManager__GetSquarePosition(
                                            (WarBoardManager_o *)gameObject,
                                            *(_DWORD *)(v5 + 52),
                                            0);
  z = v126.fields.z;
  v53.n64_u64[0] = *(unsigned __int64 *)(v5 + 40);
  v54.n64_u32[1] = LODWORD(v126.fields.y);
  v55 = *(float *)(v5 + 48);
  if ( !byte_5931942 )
  {
    v123 = v54.n64_u64[0];
    sub_21FFC50(&System_Math_TypeInfo);
    v54.n64_u64[0] = v123;
    byte_5931942 = 1;
  }
  v56.n64_u64[0] = vsub_f32(v54, v53).n64_u64[0];
  v57 = z - v55;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7, v51);
  v58 = vaddv_f32(vmul_f32(v56, v56)) + (float)(v57 * v57);
  if ( !byte_5931943 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931943 = 1;
  }
  v126.fields.y = sqrtf(v58);
  v124 = *(_QWORD *)&v126.fields.y;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7, v51);
    *(_QWORD *)&v126.fields.y = v124;
  }
  if ( v126.fields.y <= 0.00001 )
  {
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v60.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    v59 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v59 = v57 / v126.fields.y;
    v60.n64_u64[0] = vdiv_f32(v56, vdup_lane_s32(*(int32x2_t *)&v126.fields.y, 0)).n64_u64[0];
  }
  gameObject = *v25;
  if ( !*v25 )
    goto LABEL_60;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant((WarBoardPieceData_o *)gameObject, 0) )
    lengthOnAttack = this->fields.lengthOnEncount;
  v63 = *(float *)&v124 - lengthOnAttack;
  if ( (float)(*(float *)&v124 - lengthOnAttack) > 0.0 )
  {
    v64 = vadd_f32(vmul_n_f32(v60, v63), *(float32x2_t *)(v5 + 40)).n64_u64[0];
    v65 = (float)(v59 * v63) + *(float *)(v5 + 48);
    *(_QWORD *)(v5 + 40) = v64;
    *(float *)(v5 + 48) = v65;
  }
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_60;
  WarBoardPieceData__CreatePieceEventVals((WarBoardPieceData_o *)gameObject, 0);
  v66 = sub_21FFEBC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v66, 0, 0);
  v67 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v67,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__,
    0);
  if ( !v66 )
    goto LABEL_60;
  *(_QWORD *)(v66 + 32) = v67;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v66 + 32), (int32_t)v67, v68, v69, v70, v71, v72, v73);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v74 = this->fields.pieceData;
  if ( !v74 )
    goto LABEL_60;
  v75 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v5 + 24);
  if ( !gameObject )
    goto LABEL_60;
  v76 = *(float *)(v5 + 40);
  v77 = *(float *)(v5 + 44);
  v78 = *(float *)(v5 + 48);
  v127 = WarBoardManager__GetSquarePosition(
           (WarBoardManager_o *)gameObject,
           v74->fields._nowSquareIndex_k__BackingField,
           0);
  pixelPerSecond = this->fields.pixelPerSecond;
  x = v127.fields.x;
  y = v127.fields.y;
  v82 = v127.fields.z;
  v83 = (WarBoardMovePerformance_o *)sub_21FFEBC(WarBoardMovePerformance_TypeInfo);
  v128.fields.x = v76;
  v128.fields.y = v77;
  v128.fields.z = v78;
  v129.fields.x = x;
  v129.fields.y = y;
  v129.fields.z = v82;
  v84 = (WarBoardTaskBase_o *)v83;
  WarBoardMovePerformance___ctor(v83, v75, v128, v129, pixelPerSecond, 0, 0);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_60;
  if ( WarBoardPieceData__IsEnabledMoveAfterAttack((WarBoardPieceData_o *)gameObject, 0) )
  {
    gameObject = *v25;
    if ( !*v25 )
      goto LABEL_60;
    IsEnabledMovedAfterDefend = WarBoardPieceData__IsEnabledMovedAfterDefend((WarBoardPieceData_o *)gameObject, 0);
  }
  else
  {
    IsEnabledMovedAfterDefend = 0;
  }
  v86 = IsEnabledMovedAfterDefend;
  v87 = System_Func_bool__TypeInfo;
  *(_BYTE *)(v5 + 56) = v86;
  v88 = (System_Func_bool__o *)sub_21FFEBC(v87);
  System_Func_bool____ctor(
    v88,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__,
    0);
  v89 = sub_21FFEBC(WarBoardConditionalJumpTask_TypeInfo);
  WarBoardConditionalJumpTask___ctor((WarBoardConditionalJumpTask_o *)v89, v88, (WarBoardTaskBase_o *)v66, v84, 0);
  if ( !v89 )
LABEL_60:
    sub_21FFECC(gameObject, v7);
  v91 = (System_Delegate_o **)(v89 + 40);
  v92 = *(System_Delegate_o **)(v89 + 40);
  v93 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( !*(&WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo, v7, v90);
    v93 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  v94 = v93->static_fields;
  _9__65_3 = v94->__9__65_3;
  if ( !_9__65_3 )
  {
    if ( !*(&v93->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v93, v7, v90);
      v94 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    }
    v96 = (Il2CppObject *)v94->__9;
    _9__65_3 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__65_3,
      v96,
      Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__,
      0);
    v97 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v97->__9__65_3 = _9__65_3;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v97->__9__65_3,
      (int32_t)_9__65_3,
      v98,
      v99,
      v100,
      v101,
      v102,
      v103);
  }
  v104 = System_Delegate__Combine(v92, (System_Delegate_o *)_9__65_3, 0);
  v111 = (int)v104;
  if ( v104 )
  {
    v112 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v104->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v91 = v104;
      if ( (WarBoardTaskBase_TaskCallback_c *)v104->klass == v112 )
        goto LABEL_54;
    }
    sub_220024C(v104, v112, v105, v106);
  }
  *v91 = 0;
LABEL_54:
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v89 + 40), v111, v105, v106, v107, v108, v109, v110);
  v119 = v15->fields._items;
  v120 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v15->fields._version;
  if ( !v119 )
    goto LABEL_60;
  v121 = v15->fields._size;
  if ( (unsigned int)v121 >= LODWORD(v119->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)v89,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
  }
  else
  {
    v122 = &v119->obj.klass + v121;
    v15->fields._size = v121 + 1;
    v122[4] = (Il2CppClass *)v89;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v122 + 4), v89, v113, v114, v115, v116, v117, v118);
  }
  gameObject = *v17;
  if ( !*v17 )
    goto LABEL_60;
  WarBoardManager__AddTask_44947516(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v15,
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_WarBoardTaskBase__c *v14; // x0
  System_Collections_Generic_List_object__o *v15; // x20
  Il2CppObject *Instance; // x0
  WarBoardData_o **v17; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  WarBoardWallData_o *Wall; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x23
  WarBoardTaskBase_TaskCallback_o *v32; // x24
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v50; // x1
  __int64 v51; // x2
  int32x2_t v52; // d3
  float v53; // s2
  float v54; // s8
  float32x2_t v55; // d9
  unsigned __int32 v56; // s1
  float32x2_t v57; // d0 OVERLAPPED
  float v58; // s10
  float32x2_t v59; // d9
  float v60; // s8
  float v61; // s10
  float z; // s1
  float32x2_t v63; // d0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v65; // s2
  float v66; // s1
  __int64 v67; // x23
  WarBoardTaskBase_TaskCallback_o *v68; // x24
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  struct WarBoardPieceData_o *v75; // x8
  UnityEngine_GameObject_o *v76; // x25
  float v77; // s8
  float v78; // s9
  float v79; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float v83; // s14
  WarBoardMovePerformance_o *v84; // x0
  WarBoardTaskBase_o *v85; // x24
  bool IsEnabledMoveAfterAttack; // w0
  System_Func_bool__c *v87; // x8
  System_Func_bool__o *v88; // x25
  WarBoardConditionalJumpTask_o *v89; // x19
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  struct System_Object_array *v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  Il2CppClass **v99; // x0
  unsigned __int64 v100; // [xsp+0h] [xbp-A0h]
  unsigned __int64 v101; // [xsp+0h] [xbp-A0h]
  unsigned __int32 v102; // [xsp+0h] [xbp-A0h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_5935E89 & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__);
    sub_21FFC50(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__);
    sub_21FFC50(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__);
    sub_21FFC50(&WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo);
    sub_21FFC50(&WarBoardCallbackTask_TypeInfo);
    sub_21FFC50(&WarBoardConditionalJumpTask_TypeInfo);
    sub_21FFC50(&WarBoardMovePerformance_TypeInfo);
    byte_5935E89 = 1;
  }
  v5 = sub_21FFEBC(WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass67_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass67_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_40;
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v14 = System_Collections_Generic_List_WarBoardTaskBase__TypeInfo;
  *(_DWORD *)(v5 + 44) = squareIndex;
  v15 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v14);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v5 + 16) = Instance;
  v17 = (WarBoardData_o **)(v5 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)Instance, v18, v19, v20, v21, v22, v23);
  if ( !*(_QWORD *)(v5 + 16) )
    goto LABEL_40;
  gameObject = *(WarBoardData_o **)(*(_QWORD *)(v5 + 16) + 440LL);
  if ( !gameObject )
    goto LABEL_40;
  Wall = WarBoardData__GetWall(gameObject, *(_DWORD *)(v5 + 44), 1, 0);
  *(_QWORD *)(v5 + 48) = Wall;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 48), (int32_t)Wall, v25, v26, v27, v28, v29, v30);
  v31 = sub_21FFEBC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v31, 0, 0);
  v32 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v32,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__,
    0);
  if ( !v31 )
    goto LABEL_40;
  *(_QWORD *)(v31 + 32) = v32;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 32), (int32_t)v32, v33, v34, v35, v36, v37, v38);
  if ( !v15 )
    goto LABEL_40;
  items = v15->fields._items;
  v46 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v15->fields._version;
  if ( !items )
    goto LABEL_40;
  size = v15->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)v31,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v48[4] = (Il2CppClass *)v31;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v48 + 4), v31, v39, v40, v41, v42, v43, v44);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_40;
  gameObject = *v17;
  if ( !*v17 )
    goto LABEL_40;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0);
  gameObject = *(WarBoardData_o **)(v5 + 16);
  *(UnityEngine_Vector3_o *)(v5 + 32) = SquarePosition;
  if ( !gameObject )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)v57.n64_u64 = WarBoardManager__GetSquarePosition(
                                            (WarBoardManager_o *)gameObject,
                                            *(_DWORD *)(v5 + 44),
                                            0);
  v54 = v53;
  v55.n64_u64[0] = *(unsigned __int64 *)(v5 + 32);
  v57.n64_u32[1] = v56;
  v58 = *(float *)(v5 + 40);
  if ( !byte_5931942 )
  {
    v100 = v57.n64_u64[0];
    sub_21FFC50(&System_Math_TypeInfo);
    v57.n64_u64[0] = v100;
    byte_5931942 = 1;
  }
  v59.n64_u64[0] = vsub_f32(v57, v55).n64_u64[0];
  v60 = v54 - v58;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v50, v51);
  v61 = vaddv_f32(vmul_f32(v59, v59)) + (float)(v60 * v60);
  if ( !byte_5931943 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931943 = 1;
  }
  v52.n64_f32[0] = sqrtf(v61);
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    v101 = v52.n64_u64[0];
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v50, v51);
    v52.n64_u64[0] = v101;
  }
  if ( v52.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_5931940 )
    {
      v102 = v52.n64_u32[0];
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      v52.n64_u32[0] = v102;
      byte_5931940 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v63.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    z = v60 / v52.n64_f32[0];
    v63.n64_u64[0] = vdiv_f32(v59, vdup_lane_s32(v52, 0)).n64_u64[0];
  }
  v65 = v52.n64_f32[0] - this->fields.lengthOnAttack;
  if ( v65 > 0.0 )
  {
    v66 = (float)(z * v65) + *(float *)(v5 + 40);
    *(float32x2_t *)(v5 + 32) = vadd_f32(vmul_n_f32(v63, v65), *(float32x2_t *)(v5 + 32));
    *(float *)(v5 + 40) = v66;
  }
  v67 = sub_21FFEBC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v67, 0, 0);
  v68 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v68,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__,
    0);
  if ( !v67 )
    goto LABEL_40;
  *(_QWORD *)(v67 + 32) = v68;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v67 + 32), (int32_t)v68, v69, v70, v71, v72, v73, v74);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v75 = this->fields.pieceData;
  if ( !v75 )
    goto LABEL_40;
  v76 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v5 + 16);
  if ( !gameObject )
    goto LABEL_40;
  v77 = *(float *)(v5 + 32);
  v78 = *(float *)(v5 + 36);
  v79 = *(float *)(v5 + 40);
  v104 = WarBoardManager__GetSquarePosition(
           (WarBoardManager_o *)gameObject,
           v75->fields._nowSquareIndex_k__BackingField,
           0);
  pixelPerSecond = this->fields.pixelPerSecond;
  x = v104.fields.x;
  y = v104.fields.y;
  v83 = v104.fields.z;
  v84 = (WarBoardMovePerformance_o *)sub_21FFEBC(WarBoardMovePerformance_TypeInfo);
  v105.fields.x = v77;
  v105.fields.y = v78;
  v105.fields.z = v79;
  v106.fields.x = x;
  v106.fields.y = y;
  v106.fields.z = v83;
  v85 = (WarBoardTaskBase_o *)v84;
  WarBoardMovePerformance___ctor(v84, v76, v105, v106, pixelPerSecond, 0, 0);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_40;
  IsEnabledMoveAfterAttack = WarBoardPieceData__IsEnabledMoveAfterAttack((WarBoardPieceData_o *)gameObject, 0);
  v87 = System_Func_bool__TypeInfo;
  *(_BYTE *)(v5 + 56) = IsEnabledMoveAfterAttack;
  v88 = (System_Func_bool__o *)sub_21FFEBC(v87);
  System_Func_bool____ctor(
    v88,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__,
    0);
  v89 = (WarBoardConditionalJumpTask_o *)sub_21FFEBC(WarBoardConditionalJumpTask_TypeInfo);
  WarBoardConditionalJumpTask___ctor(v89, v88, (WarBoardTaskBase_o *)v67, v85, 0);
  v96 = v15->fields._items;
  v97 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v15->fields._version;
  if ( !v96 )
    goto LABEL_40;
  v98 = v15->fields._size;
  if ( (unsigned int)v98 >= LODWORD(v96->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)v89,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
  }
  else
  {
    v99 = &v96->obj.klass + v98;
    v15->fields._size = v98 + 1;
    v99[4] = (Il2CppClass *)v89;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v99 + 4), (int32_t)v89, v90, v91, v92, v93, v94, v95);
  }
  gameObject = *v17;
  if ( !*v17 )
LABEL_40:
    sub_21FFECC(gameObject, v7);
  WarBoardManager__AddTask_44947516(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v15,
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 *v14; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceData_o *v16; // x22
  float x; // s11
  float y; // s15
  float z; // s14
  float v20; // s13
  float v21; // s9
  float v22; // s12
  WarBoardSquareData_o *Square; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Collections_Generic_List_object__o *v30; // x20
  const MethodInfo *v31; // x2
  System_Int32_array *ParticipantVals; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v34; // x0
  __int64 v35; // x25
  WarBoardTaskBase_TaskCallback_c **v36; // x19
  System_Delegate_o **v37; // x26
  System_Delegate_o *v38; // x27
  WarBoardTaskBase_TaskCallback_o *v39; // x28
  System_Delegate_o *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  void *v47; // x8
  WarBoardTaskBase_TaskCallback_c *v48; // x1
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  __int64 v59; // x2
  float v60; // s8
  float v61; // s10
  float v62; // s12
  float v63; // s9
  float v64; // s13
  float v65; // s8
  float v66; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s12
  float v69; // s0
  float v70; // s1
  float v71; // s2
  float v72; // s0
  float v73; // s13
  float v74; // s10
  float v75; // s8
  float v76; // s9
  UnityEngine_GameObject_o *gameObject; // x26
  float pixelPerSecond; // s12
  WarBoardMovePerformance_o *v79; // x0
  Il2CppObject *v80; // x25
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  System_Collections_Generic_List_object__o *v91; // x25
  System_Collections_Generic_List_WarBoardTaskBase__o *v92; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v93; // x0
  float lengthMoveAttack; // s0
  float v95; // s9
  float v96; // s12
  float v97; // s13
  UnityEngine_GameObject_o *v98; // x0
  float v99; // s8
  float v100; // s14
  UnityEngine_GameObject_o *v101; // x21
  WarBoardMovePerformance_o *v102; // x0
  WarBoardTaskBase_o *v103; // x24
  __int64 v104; // x1
  __int64 v105; // x2
  System_Collections_Generic_List_WarBoardTaskBase__o *v106; // x21
  WarBoardMessageMaster_o *v107; // x23
  int32_t id; // w26
  System_Collections_Generic_List_object__o *v109; // x0
  int32_t breakPoint_k__BackingField; // w27
  WarBoardMessageMaster_o *v111; // x0
  int32_t v112; // w1
  int32_t v113; // w2
  int32_t v114; // w3
  bool v115; // w4
  __int64 v116; // x24
  System_String_o *v117; // x2
  System_String_o *v118; // x3
  int32_t v119; // w4
  int32_t v120; // w5
  bool v121; // w6
  bool v122; // w7
  Il2CppObject **v123; // x22
  __int64 v124; // x1
  __int64 v125; // x2
  float lengthOnEncount; // s0
  float v127; // s2
  float v128; // s1
  float v129; // s0
  float v130; // s12
  float v131; // s10
  float v132; // s8
  float v133; // s9
  float v134; // s11
  float v135; // s13
  float v136; // s10
  float v137; // s14
  float v138; // s13
  float v139; // s12
  float v140; // s15
  float v141; // s14
  float v142; // s13
  struct UnityEngine_Vector3_StaticFields *v143; // x8
  float v144; // s1
  _QWORD *monitor; // x8
  __int64 v146; // x8
  float v147; // s10
  float ZoomSize; // s0
  __int64 v149; // x8
  __int64 v150; // x8
  __int64 v151; // x8
  const MethodInfo_45B5018 *v152; // x2
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  __int64 v154; // x8
  WarBoardManager_o *v155; // x23
  float v156; // s10
  System_Nullable_float__o p_size; // x0
  float encountCameraSize; // s0
  System_Nullable_float__o v159; // x3
  System_String_o *v160; // x2
  System_String_o *v161; // x3
  int32_t v162; // w4
  int32_t v163; // w5
  bool v164; // w6
  bool v165; // w7
  struct System_Object_array *v166; // x8
  _QWORD *v167; // x9
  __int64 v168; // x10
  __int64 v169; // x1
  Il2CppClass **v170; // x0
  System_Collections_Generic_IEnumerable_T__o *v171; // x23
  System_String_o *v172; // x2
  System_String_o *v173; // x3
  int32_t v174; // w4
  int32_t v175; // w5
  bool v176; // w6
  bool v177; // w7
  WarBoardTaskBase_array *v178; // x23
  __int64 v179; // x1
  WarBoardManager_o *v180; // x24
  int v181; // s0 OVERLAPPED
  System_String_o *v184; // x2
  System_String_o *v185; // x3
  int32_t v186; // w4
  int32_t v187; // w5
  bool v188; // w6
  bool v189; // w7
  WarBoardTaskBase_o *v190; // x24
  System_String_o *v191; // x2
  System_String_o *v192; // x3
  int32_t v193; // w4
  int32_t v194; // w5
  bool v195; // w6
  bool v196; // w7
  WarBoardTaskBase_o *v197; // x24
  const MethodInfo *v198; // x2
  System_String_o *v199; // x2
  System_String_o *v200; // x3
  int32_t v201; // w4
  int32_t v202; // w5
  bool v203; // w6
  bool v204; // w7
  WarBoardTaskBase_o *v205; // x22
  WarBoardOrthostichySchedule_o *v206; // x22
  System_String_o *v207; // x2
  System_String_o *v208; // x3
  int32_t v209; // w4
  int32_t v210; // w5
  bool v211; // w6
  bool v212; // w7
  WarBoardParallelSchedule_o *v213; // x21
  int32_t v214; // w4
  int32_t v215; // w5
  bool v216; // w6
  bool v217; // w7
  struct System_Object_array *v218; // x8
  _QWORD *v219; // x9
  __int64 v220; // x10
  Il2CppClass **v221; // x0
  int32_t v222; // w1
  MissionNaviTransitionBoardItem_o *v223; // x0
  System_String_o *v224; // x2
  System_String_o *v225; // x3
  int32_t v226; // w4
  int32_t v227; // w5
  bool v228; // w6
  bool v229; // w7
  WarBoardPieceBaseComponent___c_c *v230; // x8
  struct WarBoardPieceBaseComponent___c_StaticFields *v231; // x9
  System_Action_o *_9__63_1; // x23
  Il2CppObject *v233; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v234; // x0
  System_String_o *v235; // x2
  System_String_o *v236; // x3
  int32_t v237; // w4
  int32_t v238; // w5
  bool v239; // w6
  bool v240; // w7
  struct UIWidget_o **p_breakPointParent; // x23
  System_Delegate_o *breakPointParent; // x25
  WarBoardTaskBase_TaskCallback_o *v243; // x26
  System_Delegate_o *v244; // x0
  int32_t v245; // w4
  int32_t v246; // w5
  bool v247; // w6
  bool v248; // w7
  System_String_o *v249; // x2
  System_String_o *v250; // x3
  int32_t v251; // w4
  int32_t v252; // w5
  bool v253; // w6
  bool v254; // w7
  struct System_Object_array *v255; // x8
  _QWORD *v256; // x9
  __int64 v257; // x10
  Il2CppClass **v258; // x0
  Il2CppObject *v259; // x22
  System_Delegate_o *v260; // x23
  WarBoardTaskBase_TaskCallback_o *v261; // x24
  WarBoardPieceBaseComponent_c *v262; // x0
  __int64 v263; // x2
  __int64 v264; // x21
  WarBoardPieceBaseComponent___c_c *v265; // x0
  System_Delegate_o *v266; // x22
  System_Delegate_o *v267; // t1
  struct WarBoardPieceBaseComponent___c_StaticFields *v268; // x8
  WarBoardTaskBase_TaskCallback_o *_9__63_4; // x23
  Il2CppObject *v270; // x24
  struct WarBoardPieceBaseComponent___c_StaticFields *v271; // x0
  System_String_o *v272; // x2
  System_String_o *v273; // x3
  int32_t v274; // w4
  int32_t v275; // w5
  bool v276; // w6
  bool v277; // w7
  WarBoardPieceBaseComponent_c *v278; // x0
  int32_t v279; // w4
  int32_t v280; // w5
  bool v281; // w6
  bool v282; // w7
  __int64 v283; // x0
  float v284; // [xsp+8h] [xbp-D8h]
  float v285; // [xsp+Ch] [xbp-D4h]
  float v286; // [xsp+14h] [xbp-CCh]
  float v287; // [xsp+18h] [xbp-C8h]
  float v288; // [xsp+1Ch] [xbp-C4h]
  WarBoardManager_o **v289; // [xsp+20h] [xbp-C0h]
  System_Nullable_float__o size; // [xsp+28h] [xbp-B8h] BYREF
  System_Nullable_Vector3__o v291; // [xsp+30h] [xbp-B0h] BYREF
  System_Nullable_Vector3__o v292; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v294; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v295; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v296; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v297; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v298; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v299; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v300; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_5935E85 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_21FFC50(&Method_System_Nullable_Vector3___ctor__);
    sub_21FFC50(&Method_System_Nullable_float___ctor__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__);
    sub_21FFC50(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__);
    sub_21FFC50(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__);
    sub_21FFC50(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__);
    sub_21FFC50(&WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo);
    sub_21FFC50(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__);
    sub_21FFC50(&WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo);
    sub_21FFC50(&WarBoardPieceBaseComponent___c_TypeInfo);
    sub_21FFC50(&WarBoardCallbackTask_TypeInfo);
    sub_21FFC50(&WarBoardMovePerformance_TypeInfo);
    sub_21FFC50(&WarBoardOrthostichySchedule_TypeInfo);
    sub_21FFC50(&WarBoardParallelSchedule_TypeInfo);
    sub_21FFC50(&WarBoardTaskBase___TypeInfo);
    sub_21FFC50(&StringLiteral_9295/*"MasterDamage"*/);
    byte_5935E85 = 1;
  }
  v5 = sub_21FFEBC(WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass63_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass63_0_o *)v5, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v5 )
    goto LABEL_158;
  *(_QWORD *)(v5 + 24) = Instance;
  v14 = (__int64 *)(v5 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), Instance, v8, v9, v10, v11, v12, v13);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_158;
  Instance = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 440LL);
  if ( !Instance )
    goto LABEL_158;
  Instance = (__int64)WarBoardData__GetPiece_44763860((WarBoardData_o *)Instance, squareIndex, 0);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_158;
  v16 = (WarBoardPieceData_o *)Instance;
  Instance = *v14;
  if ( !*v14 )
    goto LABEL_158;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0);
  Instance = *v14;
  if ( !*v14 )
    goto LABEL_158;
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v294 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, squareIndex, 0);
  if ( !*v14 )
    goto LABEL_158;
  Instance = *(_QWORD *)(*v14 + 440);
  if ( !Instance )
    goto LABEL_158;
  v20 = v294.fields.x;
  v21 = v294.fields.y;
  v22 = v294.fields.z;
  Square = WarBoardData__GetSquare((WarBoardData_o *)Instance, squareIndex, 0);
  *(_QWORD *)(v5 + 16) = Square;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)Square, v24, v25, v26, v27, v28, v29);
  v30 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  ParticipantVals = WarBoardPieceBaseComponent__GetParticipantVals(this, v16, v31);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_158;
  Instance = (__int64)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 42, ParticipantVals, 0);
  if ( !v30 )
    goto LABEL_158;
  System_Collections_Generic_List_object___AddRange(
    v30,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_158;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 43, ParticipantVals, 0);
  System_Collections_Generic_List_object___AddRange(
    v30,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_158;
  v289 = (WarBoardManager_o **)(v5 + 24);
  v34 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 41, ParticipantVals, 0);
  System_Collections_Generic_List_object___AddRange(
    v30,
    (System_Collections_Generic_IEnumerable_T__o *)v34,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v35 = sub_21FFEBC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v35, 0, 0);
  if ( !v35 )
    goto LABEL_158;
  v36 = &WarBoardTaskBase_TaskCallback_TypeInfo;
  v37 = (System_Delegate_o **)(v35 + 32);
  v38 = *(System_Delegate_o **)(v35 + 32);
  v39 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v39,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__,
    0);
  v40 = System_Delegate__Combine(v38, (System_Delegate_o *)v39, 0);
  v47 = v40;
  if ( v40 )
  {
    v48 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v40->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_153;
    *v37 = v40;
    if ( (WarBoardTaskBase_TaskCallback_c *)v40->klass != v48 )
      goto LABEL_153;
  }
  else
  {
    *v37 = 0;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v35 + 32), (int32_t)v40, v41, v42, v43, v44, v45, v46);
  items = v30->fields._items;
  v56 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v30->fields._version;
  if ( !items )
    goto LABEL_158;
  v57 = v30->fields._size;
  if ( (unsigned int)v57 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      (Il2CppObject *)v35,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  }
  else
  {
    v58 = &items->obj.klass + v57;
    v30->fields._size = v57 + 1;
    v58[4] = (Il2CppClass *)v35;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v58 + 4), v35, v49, v50, v51, v52, v53, v54);
  }
  if ( !byte_5931942 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931942 = 1;
  }
  v60 = v20 - x;
  v61 = v21 - y;
  v286 = v22;
  v287 = v21;
  v62 = v22 - z;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7, v59);
  if ( !byte_5931943 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931943 = 1;
  }
  v63 = sqrtf((float)(v62 * v62) + (float)((float)(v60 * v60) + (float)(v61 * v61)));
  Instance = (__int64)System_Math_TypeInfo;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7, v59);
  v288 = v20;
  if ( v63 <= 0.00001 )
  {
    if ( !byte_5931940 )
    {
      Instance = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v64 = static_fields->zeroVector.fields.x;
    v65 = static_fields->zeroVector.fields.y;
    v66 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v64 = v60 / v63;
    v65 = v61 / v63;
    v66 = v62 / v63;
  }
  if ( !v16 )
    goto LABEL_158;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant(v16, 0) )
    lengthOnAttack = this->fields.lengthOnEncount;
  v69 = v63 - lengthOnAttack;
  if ( (float)(v63 - lengthOnAttack) > 0.0 )
  {
    v70 = v64 * v69;
    v71 = v65 * v69;
    v72 = v66 * v69;
    v284 = v66;
    v285 = v64;
    v73 = v65;
    v74 = z;
    v75 = y;
    v76 = x;
    x = x + v70;
    y = y + v71;
    z = z + v72;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    pixelPerSecond = this->fields.pixelPerSecond;
    v79 = (WarBoardMovePerformance_o *)sub_21FFEBC(WarBoardMovePerformance_TypeInfo);
    v295.fields.x = v76;
    v295.fields.y = v75;
    v295.fields.z = v74;
    v299.fields.x = x;
    v299.fields.y = y;
    v299.fields.z = z;
    v80 = (Il2CppObject *)v79;
    WarBoardMovePerformance___ctor(v79, gameObject, v295, v299, pixelPerSecond, 5, 0);
    v87 = v30->fields._items;
    v88 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v30->fields._version;
    if ( !v87 )
      goto LABEL_158;
    v89 = v30->fields._size;
    if ( (unsigned int)v89 >= LODWORD(v87->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v30,
        v80,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    }
    else
    {
      v90 = &v87->obj.klass + v89;
      v30->fields._size = v89 + 1;
      v90[4] = (Il2CppClass *)v80;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v90 + 4), (int32_t)v80, v81, v82, v83, v84, v85, v86);
    }
    v65 = v73;
    v66 = v284;
    v64 = v285;
  }
  v91 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v91,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_158;
  Instance = (__int64)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 1, ParticipantVals, 0);
  if ( !v91 )
    goto LABEL_158;
  System_Collections_Generic_List_object___AddRange(
    v91,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_158;
  v92 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 19, ParticipantVals, 0);
  System_Collections_Generic_List_object___AddRange(
    v91,
    (System_Collections_Generic_IEnumerable_T__o *)v92,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_158;
  v93 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 39, ParticipantVals, 0);
  System_Collections_Generic_List_object___AddRange(
    v91,
    (System_Collections_Generic_IEnumerable_T__o *)v93,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !WarBoardPieceData__get_isMaster(v16, 0) )
  {
    v116 = sub_21FFEBC(WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo);
    WarBoardPieceBaseComponent___c__DisplayClass63_1___ctor(
      (WarBoardPieceBaseComponent___c__DisplayClass63_1_o *)v116,
      0);
    if ( v116 )
    {
      *(_QWORD *)(v116 + 32) = v5;
      v123 = (Il2CppObject **)(v116 + 32);
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v116 + 32), v5, v117, v118, v119, v120, v121, v122);
      System_Collections_Generic_List_object___AddRange(
        v30,
        (System_Collections_Generic_IEnumerable_T__o *)v91,
        (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      lengthOnEncount = this->fields.lengthOnEncount;
      v127 = v65 * lengthOnEncount;
      v128 = v64 * lengthOnEncount;
      v129 = v66 * lengthOnEncount;
      v130 = v287 - v127;
      v131 = v288 - v128;
      v132 = x + v128;
      v133 = y + v127;
      v134 = z + v129;
      v135 = v286 - v129;
      if ( !byte_5931943 )
      {
        sub_21FFC50(&System_Math_TypeInfo);
        byte_5931943 = 1;
      }
      v136 = v131 - v132;
      v137 = v130 - v133;
      v138 = v135 - v134;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v124, v125);
      v139 = sqrtf((float)(v138 * v138) + (float)((float)(v136 * v136) + (float)(v137 * v137)));
      if ( v139 <= 0.00001 )
      {
        if ( !byte_5931940 )
        {
          sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931940 = 1;
        }
        v143 = UnityEngine_Vector3_TypeInfo->static_fields;
        v142 = v143->zeroVector.fields.x;
        v140 = v143->zeroVector.fields.y;
        v141 = v143->zeroVector.fields.z;
      }
      else
      {
        v140 = v137 / v139;
        v141 = v138 / v139;
        v142 = v136 / v139;
      }
      if ( !byte_5931942 )
      {
        sub_21FFC50(&System_Math_TypeInfo);
        byte_5931942 = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v124, v125);
      Instance = ((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._35_GetIconLocalPosition.methodPtr)(
                   this,
                   this->klass->vtable._35_GetIconLocalPosition.method);
      v36 = (WarBoardTaskBase_TaskCallback_c **)(v5 + 24);
      if ( *v123 )
      {
        monitor = (*v123)[1].monitor;
        if ( monitor )
        {
          v146 = monitor[6];
          if ( v146 )
          {
            Instance = *(_QWORD *)(v146 + 80);
            if ( Instance )
            {
              v147 = v144;
              ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)Instance, 0);
              v149 = *(_QWORD *)(v116 + 32);
              *(float *)(v116 + 16) = ZoomSize;
              if ( v149 )
              {
                v150 = *(_QWORD *)(v149 + 24);
                if ( v150 )
                {
                  v151 = *(_QWORD *)(v150 + 48);
                  if ( v151 )
                  {
                    Instance = *(_QWORD *)(v151 + 72);
                    if ( Instance )
                    {
                      ScrlPos = MapScroll__GetScrlPos((MapScroll_o *)Instance, 0);
                      v154 = *(_QWORD *)(v116 + 32);
                      *(UnityEngine_Vector2_o *)(v116 + 20) = ScrlPos;
                      if ( v154 )
                      {
                        *(_QWORD *)&v292.fields.hasValue = &v291;
                        v155 = *(WarBoardManager_o **)(v154 + 24);
                        *(_QWORD *)&v291.fields.hasValue = 0;
                        *(_QWORD *)&v291.fields.value.fields.y = 0;
                        *(_QWORD *)&v292.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                        v156 = (float)(v133 + (float)((float)(v139 * v140) * 0.5)) + v147;
                        v297.fields.x = v132 + (float)((float)(v139 * v142) * 0.5);
                        v297.fields.z = v134 + (float)((float)(v139 * v141) * 0.5);
                        v297.fields.y = v156;
                        System_Nullable_Vector3____ctor(v292, v297, v152);
                        p_size = (System_Nullable_float__o)&size;
                        encountCameraSize = this->fields.encountCameraSize;
                        size = 0;
                        System_Nullable_float____ctor(
                          p_size,
                          encountCameraSize,
                          (const MethodInfo_45B27E0 *)Method_System_Nullable_float___ctor__);
                        if ( v155 )
                        {
                          v159 = size;
                          Instance = (__int64)WarBoardManager__GetCameraPerformanceTask(v155, v291, v159, 1, 0, 1, 0);
                          v166 = v30->fields._items;
                          v167 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                          ++v30->fields._version;
                          if ( v166 )
                          {
                            v168 = v30->fields._size;
                            v169 = Instance;
                            if ( (unsigned int)v168 >= LODWORD(v166->max_length) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v30,
                                (Il2CppObject *)Instance,
                                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v167[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v170 = &v166->obj.klass + v168;
                              v30->fields._size = v168 + 1;
                              v170[4] = (Il2CppClass *)v169;
                              sub_21FFBF4(
                                (MissionNaviTransitionBoardItem_o *)(v170 + 4),
                                v169,
                                v160,
                                v161,
                                v162,
                                v163,
                                v164,
                                v165);
                            }
                            if ( *v123 )
                            {
                              Instance = (__int64)(*v123)[1].monitor;
                              if ( Instance )
                              {
                                v298.fields.x = v132 + (float)((float)(v139 * v142) * 0.5);
                                v298.fields.y = v156;
                                v298.fields.z = v134 + (float)((float)(v139 * v141) * 0.5);
                                Instance = (__int64)WarBoardManager__CreateEncountkEffectTask(
                                                      (WarBoardManager_o *)Instance,
                                                      v298,
                                                      1,
                                                      0);
                                v230 = WarBoardPieceBaseComponent___c_TypeInfo;
                                this = (WarBoardPieceBaseComponent_o *)Instance;
                                if ( !*(&WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished + 1) )
                                {
                                  j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo, v7, v224);
                                  v230 = WarBoardPieceBaseComponent___c_TypeInfo;
                                }
                                v231 = v230->static_fields;
                                _9__63_1 = v231->__9__63_1;
                                if ( !_9__63_1 )
                                {
                                  if ( !*(&v230->_2.cctor_finished + 1) )
                                  {
                                    j_il2cpp_runtime_class_init_0(v230, v7, v224);
                                    v231 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
                                  }
                                  v233 = (Il2CppObject *)v231->__9;
                                  _9__63_1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    _9__63_1,
                                    v233,
                                    Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__,
                                    0);
                                  v234 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
                                  v234->__9__63_1 = _9__63_1;
                                  sub_21FFBF4(
                                    (MissionNaviTransitionBoardItem_o *)&v234->__9__63_1,
                                    (int32_t)_9__63_1,
                                    v235,
                                    v236,
                                    v237,
                                    v238,
                                    v239,
                                    v240);
                                }
                                if ( this )
                                {
                                  this->fields.currentActionPointLabel = (struct UILabel_o *)_9__63_1;
                                  sub_21FFBF4(
                                    (MissionNaviTransitionBoardItem_o *)&this->fields.currentActionPointLabel,
                                    (int32_t)_9__63_1,
                                    v224,
                                    v225,
                                    v226,
                                    v227,
                                    v228,
                                    v229);
                                  p_breakPointParent = &this->fields.breakPointParent;
                                  breakPointParent = (System_Delegate_o *)this->fields.breakPointParent;
                                  v243 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
                                  WarBoardTaskBase_TaskCallback___ctor(
                                    v243,
                                    (Il2CppObject *)v116,
                                    Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__,
                                    0);
                                  v244 = System_Delegate__Combine(breakPointParent, (System_Delegate_o *)v243, 0);
                                  v47 = v244;
                                  if ( v244 )
                                  {
                                    v48 = WarBoardTaskBase_TaskCallback_TypeInfo;
                                    if ( (WarBoardTaskBase_TaskCallback_c *)v244->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
                                      goto LABEL_153;
                                    *p_breakPointParent = (struct UIWidget_o *)v244;
                                    if ( (WarBoardTaskBase_TaskCallback_c *)v244->klass != v48 )
                                      goto LABEL_153;
                                  }
                                  else
                                  {
                                    *p_breakPointParent = 0;
                                  }
                                  sub_21FFBF4(
                                    (MissionNaviTransitionBoardItem_o *)&this->fields.breakPointParent,
                                    (int32_t)v244,
                                    v41,
                                    v42,
                                    v245,
                                    v246,
                                    v247,
                                    v248);
                                  v255 = v30->fields._items;
                                  v256 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                                  ++v30->fields._version;
                                  if ( v255 )
                                  {
                                    v257 = v30->fields._size;
                                    if ( (unsigned int)v257 >= LODWORD(v255->max_length) )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        v30,
                                        (Il2CppObject *)this,
                                        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v256[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v258 = &v255->obj.klass + v257;
                                      v30->fields._size = v257 + 1;
                                      v258[4] = (Il2CppClass *)this;
                                      sub_21FFBF4(
                                        (MissionNaviTransitionBoardItem_o *)(v258 + 4),
                                        (int32_t)this,
                                        v249,
                                        v250,
                                        v251,
                                        v252,
                                        v253,
                                        v254);
                                    }
                                    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                                          v30,
                                                          0,
                                                          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
                                    if ( Instance )
                                    {
                                      v259 = *v123;
                                      this = (WarBoardPieceBaseComponent_o *)(Instance + 32);
                                      v260 = *(System_Delegate_o **)(Instance + 32);
                                      v261 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
                                      WarBoardTaskBase_TaskCallback___ctor(
                                        v261,
                                        v259,
                                        Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__,
                                        0);
                                      v262 = (WarBoardPieceBaseComponent_c *)System_Delegate__Combine(
                                                                               v260,
                                                                               (System_Delegate_o *)v261,
                                                                               0);
                                      v47 = v262;
                                      if ( v262 )
                                      {
                                        v48 = WarBoardTaskBase_TaskCallback_TypeInfo;
                                        if ( v262->_1.image != WarBoardTaskBase_TaskCallback_TypeInfo )
                                          goto LABEL_153;
                                        this->klass = v262;
                                        if ( v262->_1.image != v48 )
                                          goto LABEL_153;
                                      }
                                      else
                                      {
                                        this->klass = 0;
                                      }
                                      v223 = (MissionNaviTransitionBoardItem_o *)this;
                                      v222 = (int)v47;
                                      goto LABEL_141;
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
LABEL_158:
    sub_21FFECC(Instance, v7);
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v95 = x + (float)(v64 * lengthMoveAttack);
  v96 = y + (float)(v65 * lengthMoveAttack);
  v97 = z + (float)(v66 * lengthMoveAttack);
  v98 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v99 = z;
  v100 = this->fields.pixelPerSecond;
  v101 = v98;
  v102 = (WarBoardMovePerformance_o *)sub_21FFEBC(WarBoardMovePerformance_TypeInfo);
  v296.fields.x = v95;
  v296.fields.y = v96;
  v296.fields.z = v97;
  v300.fields.x = x;
  v300.fields.y = y;
  v300.fields.z = v99;
  v103 = (WarBoardTaskBase_o *)v102;
  WarBoardMovePerformance___ctor(v102, v101, v296, v300, v100, 4, 0);
  v106 = (System_Collections_Generic_List_WarBoardTaskBase__o *)WarBoardPieceData__DecrementBreakPointPerformance(
                                                                  v16,
                                                                  0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v104, v105);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  v36 = (WarBoardTaskBase_TaskCallback_c **)(v5 + 24);
  if ( !*v289 )
    goto LABEL_158;
  v107 = (WarBoardMessageMaster_o *)Instance;
  Instance = (__int64)(*v289)->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_158;
  id = WarBoardData__get_id((WarBoardData_o *)Instance, 0);
  v109 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v109,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  breakPoint_k__BackingField = v16->fields._breakPoint_k__BackingField;
  Instance = WarBoardPieceData__get_isPlayerMaster(v16, 0);
  if ( (Instance & 1) != 0 )
  {
    if ( !v107 )
      goto LABEL_158;
    v111 = v107;
    v112 = id;
    v113 = 11;
    v114 = breakPoint_k__BackingField;
    v115 = 1;
  }
  else
  {
    if ( !v107 )
      goto LABEL_158;
    v111 = v107;
    v112 = id;
    v113 = 9;
    v114 = breakPoint_k__BackingField;
    v115 = 0;
  }
  Instance = (__int64)WarBoardMessageMaster__GetMessageTasks(v111, v112, v113, v114, v115, 0);
  v171 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( !Instance )
    goto LABEL_158;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Instance,
    (System_Collections_Generic_IEnumerable_T__o *)v91,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v171,
         (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_object___AddRange(
      v30,
      v171,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = sub_21FFD10(WarBoardTaskBase___TypeInfo, 5);
  if ( !Instance )
    goto LABEL_158;
  v178 = (WarBoardTaskBase_array *)Instance;
  if ( v103 )
  {
    Instance = sub_21FFDA4(v103, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
    if ( !Instance )
      goto LABEL_160;
  }
  if ( !LODWORD(v178->max_length) )
    goto LABEL_159;
  v178->m_Items[0] = v103;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v178->m_Items, (int32_t)v103, v172, v173, v174, v175, v176, v177);
  Instance = (__int64)v16->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_158;
  v180 = *v289;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 856LL))(
               Instance,
               *(_QWORD *)(*(_QWORD *)Instance + 864LL));
  if ( !v180 )
    goto LABEL_158;
  Instance = (__int64)WarBoardManager__CreateAttackEffectTask(v180, *(UnityEngine_Vector3_o *)&v181, 0, 0);
  v190 = (WarBoardTaskBase_o *)Instance;
  if ( Instance )
  {
    Instance = sub_21FFDA4(Instance, v178->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_160;
  }
  if ( (v178->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_159;
  v178->m_Items[1] = v190;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v178->m_Items[1], (int32_t)v190, v184, v185, v186, v187, v188, v189);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_158;
  Instance = (__int64)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0);
  v197 = (WarBoardTaskBase_o *)Instance;
  if ( Instance )
  {
    Instance = sub_21FFDA4(Instance, v178->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_160;
  }
  if ( LODWORD(v178->max_length) <= 2 )
    goto LABEL_159;
  v178->m_Items[2] = v197;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v178->m_Items[2], (int32_t)v197, v191, v192, v193, v194, v195, v196);
  Instance = (__int64)v16->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_158;
  Instance = (__int64)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)Instance,
                        (System_String_o *)StringLiteral_9295/*"MasterDamage"*/,
                        v198);
  v205 = (WarBoardTaskBase_o *)Instance;
  if ( Instance )
  {
    Instance = sub_21FFDA4(Instance, v178->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_160;
  }
  if ( (v178->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_159;
  v178->m_Items[3] = v205;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v178->m_Items[3], (int32_t)v205, v199, v200, v201, v202, v203, v204);
  v206 = (WarBoardOrthostichySchedule_o *)sub_21FFEBC(WarBoardOrthostichySchedule_TypeInfo);
  WarBoardOrthostichySchedule___ctor_45146948(v206, v106, 0);
  if ( v206 )
  {
    Instance = sub_21FFDA4(v206, v178->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_160:
      v283 = sub_21FFEF0(Instance, v179);
      sub_21FFD90(v283, 0);
    }
  }
  if ( LODWORD(v178->max_length) <= 4 )
LABEL_159:
    sub_21FFED4(Instance);
  v178->m_Items[4] = (WarBoardTaskBase_o *)v206;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v178->m_Items[4], (int32_t)v206, v207, v208, v209, v210, v211, v212);
  v213 = (WarBoardParallelSchedule_o *)sub_21FFEBC(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor(v213, v178, 0);
  v218 = v30->fields._items;
  v219 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v30->fields._version;
  if ( !v218 )
    goto LABEL_158;
  v220 = v30->fields._size;
  if ( (unsigned int)v220 >= LODWORD(v218->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      (Il2CppObject *)v213,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v219[4] + 192LL) + 112LL));
    goto LABEL_142;
  }
  v221 = &v218->obj.klass + v220;
  v222 = (int)v213;
  v30->fields._size = v220 + 1;
  v221[4] = (Il2CppClass *)v213;
  v223 = (MissionNaviTransitionBoardItem_o *)(v221 + 4);
LABEL_141:
  sub_21FFBF4(v223, v222, v41, v42, v214, v215, v216, v217);
LABEL_142:
  if ( v30->fields._size < 1 )
    return;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                        v30,
                        0,
                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
  if ( !Instance )
    goto LABEL_158;
  v264 = Instance;
  v265 = WarBoardPieceBaseComponent___c_TypeInfo;
  v267 = *(System_Delegate_o **)(v264 + 32);
  this = (WarBoardPieceBaseComponent_o *)(v264 + 32);
  v266 = v267;
  if ( !*(&WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo, v7, v263);
    v265 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  v268 = v265->static_fields;
  _9__63_4 = v268->__9__63_4;
  if ( !_9__63_4 )
  {
    if ( !*(&v265->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v265, v7, v263);
      v268 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    }
    v270 = (Il2CppObject *)v268->__9;
    _9__63_4 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(_9__63_4, v270, Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__, 0);
    v271 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v271->__9__63_4 = _9__63_4;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v271->__9__63_4,
      (int32_t)_9__63_4,
      v272,
      v273,
      v274,
      v275,
      v276,
      v277);
  }
  v278 = (WarBoardPieceBaseComponent_c *)System_Delegate__Combine(v266, (System_Delegate_o *)_9__63_4, 0);
  v47 = v278;
  if ( !v278 )
    goto LABEL_154;
  v48 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( v278->_1.image != WarBoardTaskBase_TaskCallback_TypeInfo || (this->klass = v278, v278->_1.image != v48) )
  {
LABEL_153:
    sub_220024C(v47, v48, v41, v42);
LABEL_154:
    this->klass = 0;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)this, (int32_t)v47, v41, v42, v279, v280, v281, v282);
  Instance = (__int64)*v36;
  if ( !*v36 )
    goto LABEL_158;
  WarBoardManager__AddTask_44947516(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v30,
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
  __int64 v13; // x2
  float v14; // s11
  float v15; // s12
  float v16; // s13
  float v17; // s14
  float v18; // s15
  float v19; // s8
  float v20; // s11
  float v21; // s12
  float v22; // s13
  float v23; // s14
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s8
  __int64 v26; // x1
  __int64 v27; // x2
  WarBoardControlUiDataComponent_c *v28; // x0
  float v29; // [xsp+4Ch] [xbp-24h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5935E86 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardControlUiDataComponent_TypeInfo);
    byte_5935E86 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v7 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_27;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_44763860(Instance, squareIndex, 0);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_27;
  v9 = (WarBoardPieceData_o *)Instance;
  SquarePosition = WarBoardManager__GetSquarePosition(v7, pieceData->fields._nowSquareIndex_k__BackingField, 0);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v31 = WarBoardManager__GetSquarePosition(v7, squareIndex, 0);
  v14 = v31.fields.x;
  v15 = v31.fields.y;
  v16 = v31.fields.z;
  if ( !byte_5931942 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931942 = 1;
  }
  v17 = v14 - x;
  v18 = v15 - y;
  v29 = x;
  v19 = v16 - z;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6, v13);
  if ( !byte_5931943 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931943 = 1;
  }
  v20 = sqrtf((float)(v19 * v19) + (float)((float)(v17 * v17) + (float)(v18 * v18)));
  Instance = (WarBoardData_o *)System_Math_TypeInfo;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6, v13);
  if ( v20 <= 0.00001 )
  {
    if ( !byte_5931940 )
    {
      Instance = (WarBoardData_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v21 = static_fields->zeroVector.fields.x;
    v22 = static_fields->zeroVector.fields.y;
    v23 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v21 = v17 / v20;
    v22 = v18 / v20;
    v23 = v19 / v20;
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
    sub_21FFECC(Instance, v6);
  }
  v32.fields.x = v29 + (float)(v21 * (float)(v20 - lengthOnAttack));
  v32.fields.y = y + (float)(v22 * (float)(v20 - lengthOnAttack));
  v32.fields.z = z + (float)(v23 * (float)(v20 - lengthOnAttack));
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v32, 0);
  v28 = WarBoardControlUiDataComponent_TypeInfo;
  if ( !*(&WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, v26, v27);
  WarBoardControlUiDataComponent__SetUiDataOnBattleAll((const MethodInfo *)v28);
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
  WarBoardPieceBaseComponent_o *v14; // x21
  Il2CppObject *Instance; // x25
  const MethodInfo_45B5018 *v16; // x2
  System_Nullable_float__o v17; // x3
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  WarBoardPieceBaseComponent_o *v27; // x1
  Il2CppClass **v28; // x0
  WarBoardTaskBase_array *v29; // x26
  Il2CppObject *v30; // x27
  const MethodInfo_45B5018 *v31; // x2
  System_Nullable_float__o v32; // x3
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  WarBoardPieceBaseComponent_o *v39; // x24
  __int64 v40; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t breakPoint_k__BackingField; // w9
  signed __int64 v43; // x24
  signed __int64 v44; // x23
  struct WarBoardBreakPointComponent_array *breakPoints; // x8
  __int64 v46; // x0
  System_Nullable_Vector3__o v47; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v48; // 0:x0.16
  System_Nullable_Vector3__o v49; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  v14 = this;
  if ( (byte_5935E8D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_System_Nullable_Vector3___ctor__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardPieceBaseComponent_o *)sub_21FFC50(&WarBoardTaskBase___TypeInfo);
    byte_5935E8D = 1;
  }
  if ( cameraMove )
  {
    this = (WarBoardPieceBaseComponent_o *)v14->fields.pieceData;
    if ( !this )
      goto LABEL_37;
    this = (WarBoardPieceBaseComponent_o *)WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)this, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( taskList )
      {
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0);
        if ( this )
        {
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
          *(_QWORD *)&v48.fields.hasValue = &v47;
          *(_QWORD *)&v47.fields.hasValue = 0;
          *(_QWORD *)&v47.fields.value.fields.y = 0;
          *(_QWORD *)&v48.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v48, localPosition, v16);
          if ( Instance )
          {
            v17 = cameraSize;
            this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                     (WarBoardManager_o *)Instance,
                                                     v47,
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
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
              }
              else
              {
                v28 = &items->obj.klass + size;
                taskList->fields._size = size + 1;
                v28[4] = (Il2CppClass *)v27;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)v27, v18, v19, v20, v21, v22, v23);
              }
              goto LABEL_21;
            }
          }
        }
      }
      else
      {
        v29 = (WarBoardTaskBase_array *)sub_21FFD10(WarBoardTaskBase___TypeInfo, 1);
        v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0);
        if ( this )
        {
          v51 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
          *(_QWORD *)&v49.fields.hasValue = &v47;
          v47 = (System_Nullable_Vector3__o)0LL;
          *(_QWORD *)&v49.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v49, v51, v31);
          if ( v30 )
          {
            v32 = cameraSize;
            this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                     (WarBoardManager_o *)v30,
                                                     v47,
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
                this = (WarBoardPieceBaseComponent_o *)sub_21FFDA4(this, v29->obj.klass->_1.element_class);
                if ( !this )
                {
                  v46 = sub_21FFEF0(0, v40);
                  sub_21FFD90(v46, 0);
                }
              }
              if ( !LODWORD(v29->max_length) )
LABEL_39:
                sub_21FFED4(this);
              v29->m_Items[0] = (WarBoardTaskBase_o *)v39;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v29->m_Items, (int32_t)v39, v33, v34, v35, v36, v37, v38);
              if ( Instance )
              {
                WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v29, 0);
                goto LABEL_21;
              }
            }
          }
        }
      }
LABEL_37:
      sub_21FFECC(this, *(_QWORD *)&oldBreakPoint);
    }
  }
LABEL_21:
  pieceData = v14->fields.pieceData;
  if ( !pieceData )
    goto LABEL_37;
  breakPoint_k__BackingField = pieceData->fields._breakPoint_k__BackingField;
  v43 = 0;
  if ( dummyPoint >= 0 )
    breakPoint_k__BackingField = dummyPoint;
  v44 = breakPoint_k__BackingField;
  while ( v43 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v14->fields.breakPoints;
    if ( v43 >= oldBreakPoint || v43 < v44 )
    {
      if ( !breakPoints )
        goto LABEL_37;
      if ( v43 >= (unsigned __int64)LODWORD(breakPoints->max_length) )
        goto LABEL_39;
      this = (WarBoardPieceBaseComponent_o *)breakPoints->m_Items[v43];
      if ( !this )
        goto LABEL_37;
      WarBoardBreakPointComponent__SetActive(
        (WarBoardBreakPointComponent_o *)this,
        v43 < v44,
        0,
        (const MethodInfo *)taskList);
    }
    else
    {
      if ( !breakPoints )
        goto LABEL_37;
      if ( v43 >= (unsigned __int64)LODWORD(breakPoints->max_length) )
        goto LABEL_39;
      this = (WarBoardPieceBaseComponent_o *)breakPoints->m_Items[v43];
      if ( !this )
        goto LABEL_37;
      WarBoardBreakPointComponent__OnBreak(
        (WarBoardBreakPointComponent_o *)this,
        (System_Collections_Generic_List_WarBoardTaskBase__o *)taskList,
        startCallback,
        (const MethodInfo *)taskList);
      startCallback = 0;
    }
    pieceData = v14->fields.pieceData;
    ++v43;
    if ( !pieceData )
      goto LABEL_37;
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
    sub_21FFECC(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void WarBoardPieceBaseComponent__OnDeselect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  int32_t dispPriotiry; // w20
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1
  int32_t PieceMaxDispPriotiry; // w8
  const MethodInfo *v7; // x2

  if ( (byte_5935E82 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5935E82 = 1;
  }
  dispPriotiry = this->fields.dispPriotiry;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_21FFECC(Instance, v5);
  PieceMaxDispPriotiry = WarBoardData__GetPieceMaxDispPriotiry(Instance, 0);
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * (dispPriotiry - PieceMaxDispPriotiry), v7);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  WarBoardPieceData_o **v15; // x20
  WarBoardPieceData_o *Piece_44763860; // x0
  WarBoardPieceData_o **v17; // x23
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x8
  WarBoardSquareData_o *Square; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x25
  System_Collections_Generic_List_object__o *v33; // x24
  WarBoardMovePerformance_o *v34; // x26
  WarBoardTaskBase_TaskCallback_o *v35; // x27
  System_Delegate_o *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_Delegate_o *v43; // x8
  WarBoardTaskBase_TaskCallback_c *v44; // x1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t groupId_k__BackingField; // w9
  __int64 v53; // x28
  __int64 v54; // x8
  struct WarBoardPieceData_o *v55; // x9
  UnityEngine_GameObject_o *v56; // x27
  float x; // s8
  float y; // s9
  float z; // s10
  float pixelPerSecond; // s13
  float v61; // s11
  float v62; // s12
  float v63; // s14
  WarBoardMovePerformance_o *v64; // x0
  WarBoardTaskBase_o *v65; // x28
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  WarBoardTaskBase_array *v72; // x26
  __int64 v73; // x1
  UnityEngine_GameObject_o *v74; // x27
  struct WarBoardPieceData_o *v75; // x8
  float v76; // s8
  float v77; // s9
  float v78; // s10
  float v79; // s13
  float v80; // s11
  float v81; // s12
  float v82; // s14
  WarBoardMovePerformance_o *v83; // x0
  WarBoardTaskBase_o *v84; // x28
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  System_Delegate_o *v97; // x27
  WarBoardTaskBase_TaskCallback_o *v98; // x28
  System_Delegate_o *v99; // x0
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  float v104; // s8
  float v105; // s9
  float v106; // s10
  float v107; // s13
  float v108; // s11
  float v109; // s12
  float v110; // s14
  WarBoardMovePerformance_o *v111; // x0
  System_Delegate_o **p_EndCallback; // x27
  System_Delegate_o *EndCallback; // x28
  System_Delegate_o *v114; // x0
  int32_t v115; // w4
  int32_t v116; // w5
  bool v117; // w6
  bool v118; // w7
  System_String_o *v119; // x2
  System_String_o *v120; // x3
  int32_t v121; // w4
  int32_t v122; // w5
  bool v123; // w6
  bool v124; // w7
  struct System_Object_array *items; // x8
  _QWORD *v126; // x9
  __int64 size; // x10
  Il2CppClass **v128; // x0
  struct WarBoardPieceData_o *v129; // x8
  System_String_o *v130; // x2
  System_String_o *v131; // x3
  int32_t v132; // w4
  int32_t v133; // w5
  bool v134; // w6
  bool v135; // w7
  struct System_Object_array *v136; // x8
  _QWORD *v137; // x9
  __int64 v138; // x10
  Il2CppClass **v139; // x0
  System_String_o *v140; // x2
  System_String_o *v141; // x3
  int32_t v142; // w4
  int32_t v143; // w5
  bool v144; // w6
  bool v145; // w7
  struct System_Object_array *v146; // x8
  _QWORD *v147; // x9
  __int64 v148; // x10
  Il2CppClass **v149; // x0
  System_Collections_Generic_List_object__o *v150; // x22
  System_Int32_array *PieceEventVals; // x0
  System_String_o *v152; // x2
  System_String_o *v153; // x3
  int32_t v154; // w4
  int32_t v155; // w5
  bool v156; // w6
  bool v157; // w7
  System_Int32_array *v158; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v160; // x0
  WarBoardManager_o *v161; // x20
  WarBoardTaskBase_array *v162; // x21
  __int64 v163; // x22
  WarBoardTaskBase_TaskCallback_o *v164; // x23
  System_String_o *v165; // x2
  System_String_o *v166; // x3
  int32_t v167; // w4
  int32_t v168; // w5
  bool v169; // w6
  bool v170; // w7
  System_String_o *v171; // x2
  System_String_o *v172; // x3
  int32_t v173; // w4
  int32_t v174; // w5
  bool v175; // w6
  bool v176; // w7
  __int64 v177; // x0
  int v178; // [xsp+Ch] [xbp-94h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v180; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v181; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v182; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v183; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v184; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v185; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v186; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v187; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v188; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v189; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v190; // 0:s3.4,4:s4.4,8:s5.4

  LODWORD(v4) = squareIndex;
  if ( (byte_5935E83 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__);
    sub_21FFC50(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__);
    sub_21FFC50(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__);
    sub_21FFC50(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__);
    sub_21FFC50(&WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo);
    sub_21FFC50(&WarBoardCallbackTask_TypeInfo);
    sub_21FFC50(&WarBoardMovePerformance_TypeInfo);
    sub_21FFC50(&WarBoardParallelSchedule_TypeInfo);
    sub_21FFC50(&WarBoardTaskBase___TypeInfo);
    byte_5935E83 = 1;
  }
  v6 = sub_21FFEBC(WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass61_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass61_0_o *)v6, 0);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v6 )
    goto LABEL_86;
  *(_QWORD *)(v6 + 48) = Instance;
  v15 = (WarBoardPieceData_o **)(v6 + 48);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 48), (int32_t)Instance, v9, v10, v11, v12, v13, v14);
  if ( !*(_QWORD *)(v6 + 48) )
    goto LABEL_86;
  Instance = *(WarBoardPieceData_o **)(*(_QWORD *)(v6 + 48) + 440LL);
  if ( !Instance )
    goto LABEL_86;
  Piece_44763860 = WarBoardData__GetPiece_44763860((WarBoardData_o *)Instance, (int32_t)v4, 0);
  *(_QWORD *)(v6 + 40) = Piece_44763860;
  v17 = (WarBoardPieceData_o **)(v6 + 40);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 40), (int32_t)Piece_44763860, v18, v19, v20, v21, v22, v23);
  v24 = *(_QWORD *)(v6 + 48);
  if ( !v24 )
    goto LABEL_86;
  Instance = *(WarBoardPieceData_o **)(v24 + 440);
  if ( !Instance )
    goto LABEL_86;
  Square = WarBoardData__GetSquare((WarBoardData_o *)Instance, (int32_t)v4, 0);
  *(_QWORD *)(v6 + 16) = Square;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)Square, v26, v27, v28, v29, v30, v31);
  v32 = sub_21FFEBC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v32, 0, 0);
  if ( !v32 )
    goto LABEL_86;
  v33 = (System_Collections_Generic_List_object__o *)(v32 + 32);
  v34 = *(WarBoardMovePerformance_o **)(v32 + 32);
  v35 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v35,
    (Il2CppObject *)v6,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__,
    0);
  v36 = System_Delegate__Combine((System_Delegate_o *)v34, (System_Delegate_o *)v35, 0);
  v43 = v36;
  if ( v36 )
  {
    v44 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v36->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_47;
    v33->klass = (System_Collections_Generic_List_object__c *)v36;
    if ( (WarBoardTaskBase_TaskCallback_c *)v36->klass != v44 )
      goto LABEL_47;
  }
  else
  {
    v33->klass = 0;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 32), (int32_t)v36, v37, v38, v39, v40, v41, v42);
  Instance = (WarBoardPieceData_o *)sub_21FFD10(int___TypeInfo, 2);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_86;
  v8 = Instance;
  if ( !Instance )
    goto LABEL_86;
  groupId_k__BackingField = Instance->fields._groupId_k__BackingField;
  if ( !groupId_k__BackingField
    || (Instance->fields._limitActionCount_k__BackingField = pieceData->fields._nowSquareIndex_k__BackingField,
        groupId_k__BackingField == 1) )
  {
LABEL_87:
    sub_21FFED4(Instance);
  }
  *(_QWORD *)(v6 + 24) = Instance;
  Instance->fields._currentActionCount_k__BackingField = (int)v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 24), (int32_t)Instance, v45, v46, v47, v48, v49, v50);
  v33 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v53 = *(_QWORD *)(v6 + 40);
  Instance = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v54 = *(_QWORD *)(v6 + 48);
  v55 = this->fields.pieceData;
  v56 = (UnityEngine_GameObject_o *)Instance;
  if ( v53 )
  {
    if ( !v55 )
      goto LABEL_86;
    if ( !v54 )
      goto LABEL_86;
    SquarePosition = WarBoardManager__GetSquarePosition(
                       (WarBoardManager_o *)*(_QWORD *)(v6 + 48),
                       v55->fields._nowSquareIndex_k__BackingField,
                       0);
    Instance = *v15;
    if ( !*v15 )
      goto LABEL_86;
    x = SquarePosition.fields.x;
    y = SquarePosition.fields.y;
    z = SquarePosition.fields.z;
    v180 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, (int32_t)v4, 0);
    pixelPerSecond = this->fields.pixelPerSecond;
    v61 = v180.fields.x;
    v62 = v180.fields.y;
    v63 = v180.fields.z;
    v64 = (WarBoardMovePerformance_o *)sub_21FFEBC(WarBoardMovePerformance_TypeInfo);
    v181.fields.x = x;
    v181.fields.y = y;
    v181.fields.z = z;
    v188.fields.x = v61;
    v188.fields.y = v62;
    v188.fields.z = v63;
    v65 = (WarBoardTaskBase_o *)v64;
    WarBoardMovePerformance___ctor(v64, v56, v181, v188, pixelPerSecond, 0, 0);
    Instance = (WarBoardPieceData_o *)sub_21FFD10(WarBoardTaskBase___TypeInfo, 3);
    if ( !Instance )
      goto LABEL_86;
    v72 = (WarBoardTaskBase_array *)Instance;
    if ( v65 )
    {
      Instance = (WarBoardPieceData_o *)sub_21FFDA4(v65, Instance->klass->_1.element_class);
      if ( !Instance )
        goto LABEL_88;
    }
    if ( !LODWORD(v72->max_length) )
      goto LABEL_87;
    v72->m_Items[0] = v65;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v72->m_Items, (int32_t)v65, v66, v67, v68, v69, v70, v71);
    Instance = *v17;
    if ( !*v17
      || (Instance = (WarBoardPieceData_o *)WarBoardPieceData__get_gameObject(Instance, 0), !*v15)
      || (v74 = (UnityEngine_GameObject_o *)Instance,
          v182 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)*v15, (int32_t)v4, 0),
          (v75 = this->fields.pieceData) == 0)
      || (Instance = *v15) == 0 )
    {
LABEL_86:
      sub_21FFECC(Instance, v8);
    }
    v76 = v182.fields.x;
    v77 = v182.fields.y;
    v78 = v182.fields.z;
    v183 = WarBoardManager__GetSquarePosition(
             (WarBoardManager_o *)Instance,
             v75->fields._nowSquareIndex_k__BackingField,
             0);
    v79 = this->fields.pixelPerSecond;
    v80 = v183.fields.x;
    v81 = v183.fields.y;
    v82 = v183.fields.z;
    v83 = (WarBoardMovePerformance_o *)sub_21FFEBC(WarBoardMovePerformance_TypeInfo);
    v184.fields.x = v76;
    v184.fields.y = v77;
    v184.fields.z = v78;
    v189.fields.x = v80;
    v189.fields.y = v81;
    v189.fields.z = v82;
    v84 = (WarBoardTaskBase_o *)v83;
    WarBoardMovePerformance___ctor(v83, v74, v184, v189, v79, 0, 0);
    if ( v84 )
    {
      Instance = (WarBoardPieceData_o *)sub_21FFDA4(v84, v72->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_88;
    }
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (v72->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_87;
    v72->m_Items[1] = v84;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v72->m_Items[1], (int32_t)v84, v85, v86, v87, v88, v89, v90);
    Instance = (WarBoardPieceData_o *)sub_21FFDA4(v32, v72->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_88:
      v177 = sub_21FFEF0(Instance, v73);
      sub_21FFD90(v177, 0);
    }
    if ( LODWORD(v72->max_length) <= 2 )
      goto LABEL_87;
    v72->m_Items[2] = (WarBoardTaskBase_o *)v32;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v72->m_Items[2], v32, v91, v92, v93, v94, v95, v96);
    v32 = sub_21FFEBC(WarBoardParallelSchedule_TypeInfo);
    WarBoardParallelSchedule___ctor((WarBoardParallelSchedule_o *)v32, v72, 0);
    if ( !v32 )
      goto LABEL_86;
    v34 = (WarBoardMovePerformance_o *)(v32 + 40);
    v97 = *(System_Delegate_o **)(v32 + 40);
    v98 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      v98,
      (Il2CppObject *)v6,
      Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__,
      0);
    v99 = System_Delegate__Combine(v97, (System_Delegate_o *)v98, 0);
    v43 = v99;
    if ( !v99 )
      goto LABEL_48;
    v44 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v99->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      v34->klass = (WarBoardMovePerformance_c *)v99;
      if ( (WarBoardTaskBase_TaskCallback_c *)v99->klass == v44 )
      {
LABEL_49:
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v34, (int32_t)v43, v37, v38, v100, v101, v102, v103);
        if ( !v33 )
          goto LABEL_86;
        items = v33->fields._items;
        v126 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
        ++v33->fields._version;
        if ( !items )
          goto LABEL_86;
        size = v33->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v33,
            (Il2CppObject *)v32,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
        }
        else
        {
          v128 = &items->obj.klass + size;
          v33->fields._size = size + 1;
          v128[4] = (Il2CppClass *)v32;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v128 + 4), v32, v119, v120, v121, v122, v123, v124);
        }
        v129 = this->fields.pieceData;
        if ( !v129 )
          goto LABEL_86;
        Instance = *v17;
        if ( !*v17 )
          goto LABEL_86;
        WarBoardPieceData__SetSquareIndex(Instance, v129->fields._nowSquareIndex_k__BackingField, 0);
        goto LABEL_67;
      }
    }
LABEL_47:
    sub_220024C(v43, v44, v37, v38);
LABEL_48:
    v34->klass = 0;
    goto LABEL_49;
  }
  if ( !v55 )
    goto LABEL_86;
  if ( !v54 )
    goto LABEL_86;
  v185 = WarBoardManager__GetSquarePosition(
           (WarBoardManager_o *)*(_QWORD *)(v6 + 48),
           v55->fields._nowSquareIndex_k__BackingField,
           0);
  Instance = *v15;
  if ( !*v15 )
    goto LABEL_86;
  v104 = v185.fields.x;
  v105 = v185.fields.y;
  v106 = v185.fields.z;
  v178 = (int)v4;
  v186 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, (int32_t)v4, 0);
  v107 = this->fields.pixelPerSecond;
  v108 = v186.fields.x;
  v109 = v186.fields.y;
  v110 = v186.fields.z;
  v111 = (WarBoardMovePerformance_o *)sub_21FFEBC(WarBoardMovePerformance_TypeInfo);
  v187.fields.x = v104;
  v187.fields.y = v105;
  v187.fields.z = v106;
  v190.fields.x = v108;
  v190.fields.y = v109;
  v190.fields.z = v110;
  v34 = v111;
  WarBoardMovePerformance___ctor(v111, v56, v187, v190, v107, 0, 0);
  if ( !v34 )
    goto LABEL_86;
  p_EndCallback = (System_Delegate_o **)&v34->fields.EndCallback;
  EndCallback = (System_Delegate_o *)v34->fields.EndCallback;
  v4 = &WarBoardTaskBase_TaskCallback_TypeInfo;
  v3 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v3,
    (Il2CppObject *)v6,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__,
    0);
  v114 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v3, 0);
  v43 = v114;
  if ( v114 )
  {
    v44 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v114->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_47;
    *p_EndCallback = v114;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    LODWORD(v4) = v178;
    if ( (WarBoardTaskBase_TaskCallback_c *)v114->klass != v44 )
      goto LABEL_47;
  }
  else
  {
    *p_EndCallback = 0;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    LODWORD(v4) = v178;
  }
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v34->fields.EndCallback,
    (int32_t)v114,
    v37,
    v38,
    v115,
    v116,
    v117,
    v118);
  if ( !v33 )
    goto LABEL_86;
  v136 = v33->fields._items;
  v137 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v33->fields._version;
  if ( !v136 )
    goto LABEL_86;
  v138 = v33->fields._size;
  if ( (unsigned int)v138 >= LODWORD(v136->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)v34,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
  }
  else
  {
    v139 = &v136->obj.klass + v138;
    v33->fields._size = v138 + 1;
    v139[4] = (Il2CppClass *)v34;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v139 + 4), (int32_t)v34, v130, v131, v132, v133, v134, v135);
  }
  v146 = v33->fields._items;
  v147 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v33->fields._version;
  if ( !v146 )
    goto LABEL_86;
  v148 = v33->fields._size;
  if ( (unsigned int)v148 >= LODWORD(v146->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)v32,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v147[4] + 192LL) + 112LL));
  }
  else
  {
    v149 = &v146->obj.klass + v148;
    v33->fields._size = v148 + 1;
    v149[4] = (Il2CppClass *)v32;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v149 + 4), v32, v140, v141, v142, v143, v144, v145);
  }
LABEL_67:
  Instance = this->fields.pieceData;
  if ( !Instance )
    goto LABEL_86;
  WarBoardPieceData__SetSquareIndex(Instance, (int32_t)v4, 0);
  v150 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v150,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = this->fields.pieceData;
  if ( !Instance )
    goto LABEL_86;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(Instance, 0);
  *(_QWORD *)(v6 + 32) = PieceEventVals;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v6 + 32),
    (int32_t)PieceEventVals,
    v152,
    v153,
    v154,
    v155,
    v156,
    v157);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  Instance = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                      (WarBoardManager_o *)Instance,
                                      30,
                                      *(System_Int32_array **)(v6 + 32),
                                      0);
  if ( !v150 )
    goto LABEL_86;
  System_Collections_Generic_List_object___AddRange(
    v150,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( *v17 )
  {
    v158 = WarBoardPieceData__CreatePieceEventVals(*v17, 0);
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_86;
    EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 30, v158, 0);
    System_Collections_Generic_List_object___AddRange(
      v150,
      (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  v160 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 36, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    v150,
    (System_Collections_Generic_IEnumerable_T__o *)v160,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v150,
         (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    Instance = *v15;
    if ( !*v15 )
      goto LABEL_86;
    WarBoardManager__AddTask_44947516(
      (WarBoardManager_o *)Instance,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v150,
      0);
  }
  Instance = *v15;
  if ( !*v15 )
    goto LABEL_86;
  WarBoardManager__AddTask_44947516(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v33,
    0);
  v161 = *(WarBoardManager_o **)(v6 + 48);
  v162 = (WarBoardTaskBase_array *)sub_21FFD10(WarBoardTaskBase___TypeInfo, 1);
  v163 = sub_21FFEBC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v163, 0, 0);
  v164 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(v3->klass);
  WarBoardTaskBase_TaskCallback___ctor(
    v164,
    (Il2CppObject *)v6,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__,
    0);
  if ( !v163 )
    goto LABEL_86;
  *(_QWORD *)(v163 + 32) = v164;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v163 + 32), (int32_t)v164, v165, v166, v167, v168, v169, v170);
  if ( !v162 )
    goto LABEL_86;
  Instance = (WarBoardPieceData_o *)sub_21FFDA4(v163, v162->obj.klass->_1.element_class);
  if ( !Instance )
    goto LABEL_88;
  if ( !LODWORD(v162->max_length) )
    goto LABEL_87;
  v162->m_Items[0] = (WarBoardTaskBase_o *)v163;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v162->m_Items, v163, v171, v172, v173, v174, v175, v176);
  if ( !v161 )
    goto LABEL_86;
  WarBoardManager__AddTask(v161, 0, v162, 0);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
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
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void WarBoardPieceBaseComponent__OnSelect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1
  int v5; // w8
  const MethodInfo *v6; // x2

  if ( (byte_5935E81 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5935E81 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_21FFECC(Instance, v4);
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

  if ( (byte_5935E8F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19652/*"ef_dm_base"*/);
    byte_5935E8F = 1;
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
  float x; // s15
  float y; // s10
  float z; // s14
  float v14; // s11
  float v15; // s12
  float v16; // s13
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_List_object__o *v23; // x20
  __int64 v24; // x24
  System_Delegate_o **v25; // x25
  System_Delegate_o *v26; // x26
  WarBoardTaskBase_TaskCallback_o *v27; // x27
  System_Delegate_o *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  int32_t v35; // w8
  WarBoardTaskBase_TaskCallback_c *v36; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  float v49; // s8
  float v50; // s9
  float v51; // s12
  float v52; // s11
  float v53; // s1
  float v54; // s2
  float v55; // s9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v57; // s0
  float v58; // s11
  float v59; // s12
  float v60; // s13
  UnityEngine_GameObject_o *gameObject; // x0
  float pixelPerSecond; // s8
  UnityEngine_GameObject_o *v63; // x24
  WarBoardMovePerformance_o *v64; // x0
  Il2CppObject *v65; // x23
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass **v75; // x0
  float lengthMoveAttack; // s0
  float v77; // s1
  float v78; // s2
  float v79; // s0
  float v80; // s8
  float v81; // s9
  float v82; // s10
  UnityEngine_GameObject_o *v83; // x0
  float v84; // s14
  UnityEngine_GameObject_o *v85; // x22
  WarBoardMovePerformance_o *v86; // x0
  WarBoardTaskBase_o *v87; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *v88; // x22
  System_Collections_Generic_List_object__o *v89; // x23
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  WarBoardTaskBase_array *v96; // x23
  __int64 v97; // x1
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  WarBoardData_o *v104; // x21
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  WarBoardData_o *v111; // x21
  WarBoardOrthostichySchedule_o *v112; // x21
  System_String_o *v113; // x2
  System_String_o *v114; // x3
  int32_t v115; // w4
  int32_t v116; // w5
  bool v117; // w6
  bool v118; // w7
  WarBoardParallelSchedule_o *v119; // x21
  System_String_o *v120; // x2
  System_String_o *v121; // x3
  int32_t v122; // w4
  int32_t v123; // w5
  bool v124; // w6
  bool v125; // w7
  struct System_Object_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  Il2CppClass **v129; // x0
  __int64 v130; // x0
  float v131; // [xsp+8h] [xbp-A8h]
  float v132; // [xsp+Ch] [xbp-A4h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v134; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v135; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o IconPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v138; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v139; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_5935E88 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__);
    sub_21FFC50(&WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo);
    sub_21FFC50(&WarBoardCallbackTask_TypeInfo);
    sub_21FFC50(&WarBoardMovePerformance_TypeInfo);
    sub_21FFC50(&WarBoardOrthostichySchedule_TypeInfo);
    sub_21FFC50(&WarBoardParallelSchedule_TypeInfo);
    sub_21FFC50(&WarBoardTaskBase___TypeInfo);
    byte_5935E88 = 1;
  }
  v5 = sub_21FFEBC(WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass66_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass66_0_o *)v5, 0);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v134 = WarBoardManager__GetSquarePosition(v8, squareIndex, 0);
  Instance = v8->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_64;
  v14 = v134.fields.x;
  v15 = v134.fields.y;
  v16 = v134.fields.z;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, 0);
  if ( !v5 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 16) = Instance;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)Instance, v17, v18, v19, v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v24 = sub_21FFEBC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v24, 0, 0);
  if ( !v24 )
    goto LABEL_64;
  v25 = (System_Delegate_o **)(v24 + 32);
  v26 = *(System_Delegate_o **)(v24 + 32);
  v27 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v27,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__,
    0);
  v28 = System_Delegate__Combine(v26, (System_Delegate_o *)v27, 0);
  v35 = (int)v28;
  if ( v28 )
  {
    v36 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v28->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v25 = v28;
      if ( (WarBoardTaskBase_TaskCallback_c *)v28->klass == v36 )
        goto LABEL_14;
    }
    sub_220024C(v28, v36, v29, v30);
  }
  *v25 = 0;
LABEL_14:
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 32), v35, v29, v30, v31, v32, v33, v34);
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
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = &items->obj.klass + size;
    v23->fields._size = size + 1;
    v46[4] = (Il2CppClass *)v24;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v46 + 4), v24, v37, v38, v39, v40, v41, v42);
  }
  if ( !byte_5931942 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931942 = 1;
  }
  v49 = v14 - x;
  v50 = v15 - y;
  v51 = v16 - z;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v47, v48);
  if ( !byte_5931943 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931943 = 1;
  }
  v52 = sqrtf((float)(v51 * v51) + (float)((float)(v49 * v49) + (float)(v50 * v50)));
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v47, v48);
  if ( v52 <= 0.00001 )
  {
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v53 = static_fields->zeroVector.fields.x;
    v54 = static_fields->zeroVector.fields.y;
    v55 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v53 = v49 / v52;
    v54 = v50 / v52;
    v55 = v51 / v52;
  }
  v57 = v52 - this->fields.lengthOnAttack;
  if ( v57 <= 0.0 )
  {
    v58 = x;
    v59 = y;
    v60 = z;
  }
  else
  {
    v131 = v54;
    v132 = v53;
    v58 = x + (float)(v53 * v57);
    v59 = y + (float)(v54 * v57);
    v60 = z + (float)(v55 * v57);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    pixelPerSecond = this->fields.pixelPerSecond;
    v63 = gameObject;
    v64 = (WarBoardMovePerformance_o *)sub_21FFEBC(WarBoardMovePerformance_TypeInfo);
    v135.fields.x = x;
    v135.fields.y = y;
    v135.fields.z = z;
    v138.fields.x = v58;
    v138.fields.y = v59;
    v138.fields.z = v60;
    v65 = (Il2CppObject *)v64;
    WarBoardMovePerformance___ctor(v64, v63, v135, v138, pixelPerSecond, 5, 0);
    v72 = v23->fields._items;
    v73 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v23->fields._version;
    if ( !v72 )
      goto LABEL_64;
    v74 = v23->fields._size;
    if ( (unsigned int)v74 >= LODWORD(v72->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v23,
        v65,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    }
    else
    {
      v75 = &v72->obj.klass + v74;
      v23->fields._size = v74 + 1;
      v75[4] = (Il2CppClass *)v65;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v75 + 4), (int32_t)v65, v66, v67, v68, v69, v70, v71);
    }
    v54 = v131;
    v53 = v132;
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v77 = v53 * lengthMoveAttack;
  v78 = v54 * lengthMoveAttack;
  v79 = v55 * lengthMoveAttack;
  v80 = v58 + v77;
  v81 = v59 + v78;
  v82 = v60 + v79;
  v83 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v84 = this->fields.pixelPerSecond;
  v85 = v83;
  v86 = (WarBoardMovePerformance_o *)sub_21FFEBC(WarBoardMovePerformance_TypeInfo);
  v136.fields.x = v80;
  v136.fields.y = v81;
  v136.fields.z = v82;
  v139.fields.x = v58;
  v139.fields.y = v59;
  v139.fields.z = v60;
  v87 = (WarBoardTaskBase_o *)v86;
  WarBoardMovePerformance___ctor(v86, v85, v136, v139, v84, 4, 0);
  if ( !v10 )
    goto LABEL_64;
  v88 = WarBoardWallData__DecrementBreakPointPerformance(v10, 1, 0);
  v89 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v89,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 26, 0, 0), !v89)
    || (System_Collections_Generic_List_object___AddRange(
          v89,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        System_Collections_Generic_List_object___AddRange(
          v23,
          (System_Collections_Generic_IEnumerable_T__o *)v89,
          (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (Instance = (WarBoardData_o *)sub_21FFD10(WarBoardTaskBase___TypeInfo, 4)) == 0) )
  {
LABEL_64:
    sub_21FFECC(Instance, v7);
  }
  v96 = (WarBoardTaskBase_array *)Instance;
  if ( v87 )
  {
    Instance = (WarBoardData_o *)sub_21FFDA4(v87, Instance->klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( !LODWORD(v96->max_length) )
    goto LABEL_65;
  v96->m_Items[0] = v87;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v96->m_Items, (int32_t)v87, v90, v91, v92, v93, v94, v95);
  Instance = (WarBoardData_o *)v10->fields.component;
  if ( !Instance )
    goto LABEL_64;
  IconPosition = WarBoardWallComponent__GetIconPosition((WarBoardWallComponent_o *)Instance, 0);
  Instance = (WarBoardData_o *)WarBoardManager__CreateAttackEffectTask(v8, IconPosition, 0, 0);
  v104 = Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_21FFDA4(Instance, v96->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( (v96->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_65;
  v96->m_Items[1] = (WarBoardTaskBase_o *)v104;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v96->m_Items[1], (int32_t)v104, v98, v99, v100, v101, v102, v103);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (WarBoardData_o *)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0);
  v111 = Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_21FFDA4(Instance, v96->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( LODWORD(v96->max_length) <= 2 )
    goto LABEL_65;
  v96->m_Items[2] = (WarBoardTaskBase_o *)v111;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v96->m_Items[2], (int32_t)v111, v105, v106, v107, v108, v109, v110);
  v112 = (WarBoardOrthostichySchedule_o *)sub_21FFEBC(WarBoardOrthostichySchedule_TypeInfo);
  WarBoardOrthostichySchedule___ctor_45146948(v112, v88, 0);
  if ( v112 )
  {
    Instance = (WarBoardData_o *)sub_21FFDA4(v112, v96->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_66:
      v130 = sub_21FFEF0(Instance, v97);
      sub_21FFD90(v130, 0);
    }
  }
  if ( (v96->max_length & 0xFFFFFFFC) == 0 )
LABEL_65:
    sub_21FFED4(Instance);
  v96->m_Items[3] = (WarBoardTaskBase_o *)v112;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v96->m_Items[3], (int32_t)v112, v113, v114, v115, v116, v117, v118);
  v119 = (WarBoardParallelSchedule_o *)sub_21FFEBC(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor(v119, v96, 0);
  v126 = v23->fields._items;
  v127 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v23->fields._version;
  if ( !v126 )
    goto LABEL_64;
  v128 = v23->fields._size;
  if ( (unsigned int)v128 >= LODWORD(v126->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v23,
      (Il2CppObject *)v119,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
  }
  else
  {
    v129 = &v126->obj.klass + v128;
    v23->fields._size = v128 + 1;
    v129[4] = (Il2CppClass *)v119;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v129 + 4), (int32_t)v119, v120, v121, v122, v123, v124, v125);
  }
  if ( v23->fields._size >= 1 )
    WarBoardManager__AddTask_44947516(v8, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v23, 0);
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
    sub_21FFECC(simpleAnimation, animationName);
  SimpleAnimation__Play_78338864(simpleAnimation, animationName, 0);
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
    sub_21FFECC(this, method);
  breakPoint_k__BackingField = pieceData->fields._breakPoint_k__BackingField;
  v5 = this;
  v6 = 0;
  while ( (int)v6 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v5->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v6 >= LODWORD(breakPoints->max_length) )
        sub_21FFED4(this);
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
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v8; // x28
  __int64 v9; // x2
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v11; // x22
  unsigned __int64 v12; // x29
  UnityEngine_Object_o *v13; // x23
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v23; // x1
  Il2CppClass **v24; // x0
  struct UICommonButton_o *button; // x19
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_5935E78 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91505760);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935E78 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length_low = LODWORD(parents->max_length);
    if ( (int)max_length_low >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length_low )
          goto LABEL_28;
        ComponentsInChildren_object = (UnityEngine_Component_o *)parents->m_Items[v8];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                   ComponentsInChildren_object,
                                                                   1,
                                                                   (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91505760);
        if ( ComponentsInChildren_object )
        {
          klass = ComponentsInChildren_object[1].klass;
          v11 = ComponentsInChildren_object;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_23:
        max_length_low = LODWORD(parents->max_length);
        if ( (int)++v8 >= (int)max_length_low )
          goto LABEL_24;
      }
      v12 = 0;
      while ( v12 < (unsigned int)klass )
      {
        v13 = (UnityEngine_Object_o *)*((_QWORD *)&v11[1].monitor + v12);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v9);
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v13, 0, 0);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)v13,
                                                                     0);
          if ( !v4 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___Contains(
                                                                     v4,
                                                                     (Il2CppObject *)ComponentsInChildren_object,
                                                                     (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v13,
                                                                       0);
            items = v4->fields._items;
            v21 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v4->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v4->fields._size;
            v23 = ComponentsInChildren_object;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v4,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v4->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v23;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v23, v14, v15, v16, v17, v18, v19);
            }
          }
        }
        LODWORD(klass) = v11[1].klass;
        if ( (__int64)++v12 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_21FFED4(ComponentsInChildren_object);
    }
  }
LABEL_24:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v4,
                                                                   (const MethodInfo_445164C *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_21FFECC(ComponentsInChildren_object, v6);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&button->fields.tweenTargets,
    (int32_t)ComponentsInChildren_object,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceBaseComponent__SetColliderEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_5935E7A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935E7A = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable, method);
  if ( !UnityEngine_Object__op_Equality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( enable )
    {
      if ( v7 )
      {
        v8 = 1;
LABEL_12:
        UICommonButton__SetButtonEnableAndKeepState(v7, v8, 0, 0);
        return;
      }
LABEL_14:
      sub_21FFECC(v7, v6);
    }
    if ( !v7 )
      goto LABEL_14;
    if ( v7->fields.mState )
    {
      v8 = 0;
      goto LABEL_12;
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *listEffectData; // x20
  System_Predicate_object__o *v17; // x21
  __int64 v18; // x2
  Il2CppObject *v19; // x20
  _QWORD *monitor; // x22
  __int64 v21; // x8
  unsigned __int64 v22; // x23
  UnityEngine_Object_o *v23; // x21

  if ( (byte_5935E8E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
    sub_21FFC50(&Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__);
    sub_21FFC50(&WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo);
    byte_5935E8E = 1;
  }
  v7 = sub_21FFEBC(WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass83_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass83_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 16) = effectKey;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)effectKey, v10, v11, v12, v13, v14, v15);
  listEffectData = (System_Collections_Generic_List_object__o *)this->fields.listEffectData;
  v17 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
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
         (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__);
  v19 = v8;
  if ( !v8 )
    return v19 != 0;
  monitor = v8[1].monitor;
  if ( !monitor )
LABEL_18:
    sub_21FFECC(v8, v9);
  v21 = monitor[3];
  if ( (int)v21 >= 1 )
  {
    v22 = 0;
    do
    {
      if ( v22 >= (unsigned int)v21 )
        sub_21FFED4(v8);
      v23 = (UnityEngine_Object_o *)monitor[v22 + 4];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v18);
      v8 = (Il2CppObject *)UnityEngine_Object__op_Equality(v23, 0, 0);
      if ( ((unsigned __int8)v8 & 1) == 0 )
      {
        if ( !v23 )
          goto LABEL_18;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v23, isDisp, 0);
      }
      LODWORD(v21) = *((_DWORD *)monitor + 6);
      ++v22;
    }
    while ( (__int64)v22 < (int)v21 );
  }
  return v19 != 0;
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceBaseComponent__SetTouchEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_5935E79 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935E79 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable, method);
  if ( UnityEngine_Object__op_Inequality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_21FFECC(0, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0);
  }
}


void WarBoardPieceBaseComponent__ShowActionCount(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  struct WarBoardPieceData_o *v4; // x8
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *currentPieceActionPointRoot; // x20
  UnityEngine_GameObject_o *v8; // x20
  bool activeSelf; // w0
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x10
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5935E7C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935E7C = 1;
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
    sub_21FFECC(pieceData, method);
  if ( WarBoardCost__get_HasCost((WarBoardCost_o *)pieceData, 0) )
  {
    currentPieceActionPointRoot = (UnityEngine_Object_o *)this->fields.currentPieceActionPointRoot;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( UnityEngine_Object__op_Inequality(currentPieceActionPointRoot, 0, 0) )
    {
      pieceData = (WarBoardPieceData_o *)this->fields.currentPieceActionPointRoot;
      if ( pieceData )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pieceData, 1, 0);
        pieceData = (WarBoardPieceData_o *)this->fields.currentActionPointRoot;
        if ( pieceData )
        {
          v8 = this->fields.currentPieceActionPointRoot;
          activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)pieceData, 0);
          v10 = 112;
          if ( activeSelf )
          {
            v10 = 124;
            v11 = 120;
          }
          else
          {
            v11 = 108;
          }
          if ( activeSelf )
            v12 = 116;
          else
            v12 = 104;
          v13.fields.y = *(float *)((char *)&this->klass + v11);
          v13.fields.z = *(float *)((char *)&this->klass + v10);
          v13.fields.x = *(float *)((char *)&this->klass + v12);
          GameObjectExtensions__SetLocalPosition(v8, v13, 0);
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
    sub_21FFECC(0, method);
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
      SimpleAnimation__Stop_78336432(simpleAnimation, animationName, 0);
      simpleAnimation = this->fields.simpleAnimation;
      if ( simpleAnimation )
      {
        SimpleAnimation__Rewind(simpleAnimation, 0);
        return;
      }
    }
LABEL_7:
    sub_21FFECC(simpleAnimation, animationName);
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

  pieceData = this->fields.pieceData;
  currentActionCount_k__BackingField = 0;
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
    sub_21FFECC(pieceData, method);
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
  System_Collections_Generic_HashSet_object__o *v4; // x22
  WarBoardPieceData_o *pieceData; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Collections_Generic_HashSet_object__o **v13; // x21
  System_Collections_Generic_HashSet_object__o *v14; // x23
  __int64 v15; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
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
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  Il2CppObject *v50; // x1
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  struct UICommonButton_o *v55; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_Collections_Generic_HashSet_Enumerator_T__o v63; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v64; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5935E7F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_UIWidget__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_UIWidget___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Distinct_GameObject___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_GameObject___);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_UIWidget__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_UIWidget__get_Count__);
    sub_21FFC50(&System_Collections_Generic_HashSet_UIWidget__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor___91425392);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_21FFC50(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__);
    sub_21FFC50(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__);
    sub_21FFC50(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__);
    sub_21FFC50(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__);
    sub_21FFC50(&WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo);
    byte_5935E7F = 1;
  }
  memset(&v64, 0, sizeof(v64));
  v3 = sub_21FFEBC(WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass48_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass48_0_o *)v3, 0);
  v4 = (System_Collections_Generic_HashSet_object__o *)sub_21FFEBC(System_Collections_Generic_HashSet_UIWidget__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v4,
    (const MethodInfo_4286740 *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  if ( !v3 )
    goto LABEL_40;
  *(_QWORD *)(v3 + 24) = v4;
  v13 = (System_Collections_Generic_HashSet_object__o **)(v3 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)v4, v7, v8, v9, v10, v11, v12);
  v14 = (System_Collections_Generic_HashSet_object__o *)sub_21FFEBC(System_Collections_Generic_HashSet_UIWidget__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v14,
    (const MethodInfo_4286740 *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  *(_QWORD *)(v3 + 16) = v14;
  v15 = v3 + 16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)v14, v16, v17, v18, v19, v20, v21);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_40;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasIconDarkenBuff(pieceData, 0);
  cannotActTurnDurk = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
  v23 = (char)pieceData;
  if ( cannotActTurnDurk )
  {
    v24 = (System_Action_object__o *)sub_21FFEBC(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v24,
      (Il2CppObject *)v3,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__,
      0);
    BasicHelper__ForEach_object_(
      cannotActTurnDurk,
      (System_Action_T__o *)v24,
      (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_UIWidget___);
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_40;
    pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasVitalityToDoAnyActions(pieceData, 0);
    if ( v23 & 1 | (((unsigned __int8)pieceData & 1) == 0) )
    {
      v25 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
      v26 = (System_Action_object__o *)sub_21FFEBC(System_Action_UIWidget__TypeInfo);
      System_Action_object____ctor(
        v26,
        (Il2CppObject *)v3,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__,
        0);
      BasicHelper__ForEach_object_(
        v25,
        (System_Action_T__o *)v26,
        (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v28 = (System_Action_object__o *)sub_21FFEBC(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v28,
      (Il2CppObject *)v3,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__,
      0);
    BasicHelper__ForEach_object_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v28,
      (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_UIWidget___);
    if ( (v23 & 1) != 0 )
    {
      v29 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
      v30 = (System_Action_object__o *)sub_21FFEBC(System_Action_UIWidget__TypeInfo);
      System_Action_object____ctor(
        v30,
        (Il2CppObject *)v3,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__,
        0);
      BasicHelper__ForEach_object_(
        v29,
        (System_Action_T__o *)v30,
        (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  if ( !*(_QWORD *)v15 )
    goto LABEL_40;
  if ( *(int *)(*(_QWORD *)v15 + 32LL) < 1 )
    return;
  button = this->fields.button;
  if ( !button )
    goto LABEL_40;
  tweenTargets = (System_Collections_Generic_IEnumerable_T__o *)button->fields.tweenTargets;
  v33 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor_71627776(
    v33,
    tweenTargets,
    (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_GameObject___ctor___91425392);
  pieceData = *(WarBoardPieceData_o **)v15;
  if ( !*(_QWORD *)v15 )
    goto LABEL_40;
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v63,
    (System_Collections_Generic_HashSet_object__o *)pieceData,
    (const MethodInfo_42872B8 *)Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__);
  v64 = v63;
  v63.fields._set = 0;
  *(_QWORD *)&v63.fields._index = &v64;
  while ( 1 )
  {
    v34 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v64,
            (const MethodInfo_40C79B8 *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__);
    if ( !v34 )
      break;
    current = v64.fields._current;
    if ( !v64.fields._current )
      sub_21FFECC(v34, v35);
    removeTweenTargetObjects = this->fields.removeTweenTargetObjects;
    gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v64.fields._current,
                                   0);
    if ( !removeTweenTargetObjects )
      sub_21FFECC(gameObject, gameObject);
    if ( System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)removeTweenTargetObjects,
           gameObject,
           (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
    {
      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      v41 = (Il2CppObject *)v40;
      if ( !v33 )
        sub_21FFECC(v40, v40);
      goto LABEL_22;
    }
    if ( !*v13 )
      sub_21FFECC(0, v39);
    if ( System_Collections_Generic_HashSet_object___Contains(
           *v13,
           current,
           (const MethodInfo_4286E44 *)Method_System_Collections_Generic_HashSet_UIWidget__Contains__) )
    {
      v65.fields.r = 0.5;
      v65.fields.g = 0.5;
      v65.fields.b = 0.5;
      v65.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)current, v65, 0);
      v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      v41 = (Il2CppObject *)v42;
      if ( !v33 )
        sub_21FFECC(v42, v42);
LABEL_22:
      System_Collections_Generic_List_object___Remove(
        v33,
        v41,
        (const MethodInfo_445101C *)Method_System_Collections_Generic_List_GameObject__Remove__);
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
      if ( !v33
        || (items = v33->fields._items,
            v52 = Method_System_Collections_Generic_List_GameObject__Add__,
            ++v33->fields._version,
            !items) )
      {
        sub_21FFECC(v43, v43);
      }
      size = v33->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v33,
          v43,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &items->obj.klass + size;
        v33->fields._size = size + 1;
        v54[4] = (Il2CppClass *)v50;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v54 + 4), (int32_t)v50, v44, v45, v46, v47, v48, v49);
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v64,
    (const MethodInfo_40C79B4 *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__);
  v55 = this->fields.button;
  v56 = System_Linq_Enumerable__Distinct_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v33,
          (const MethodInfo_38491DC *)Method_System_Linq_Enumerable_Distinct_GameObject___);
  pieceData = (WarBoardPieceData_o *)System_Linq_Enumerable__ToArray_object_(
                                       v56,
                                       (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_GameObject___);
  if ( !v55 )
LABEL_40:
    sub_21FFECC(pieceData, v6);
  v55->fields.tweenTargets = (struct UnityEngine_GameObject_array *)pieceData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v55->fields.tweenTargets,
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
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *pieceStatusLabelComponent; // x20
  __int64 v6; // x1
  WarBoardPieceStatusLabel_o *v7; // x0

  if ( (byte_5935E7E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935E7E = 1;
  }
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr)(
    this,
    this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method);
  pieceStatusLabelComponent = (UnityEngine_Object_o *)this->fields.pieceStatusLabelComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( UnityEngine_Object__op_Inequality(pieceStatusLabelComponent, 0, 0) )
  {
    v7 = this->fields.pieceStatusLabelComponent;
    if ( !v7 )
      sub_21FFECC(0, v6);
    WarBoardPieceStatusLabel__SetupLabel(v7, this->fields.pieceData, 0);
  }
}


void WarBoardPieceBaseComponent__UpdateWidgetDepth(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1
  int32_t PieceDispPriority; // w8
  const MethodInfo *v7; // x2

  if ( (byte_5935E92 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5935E92 = 1;
  }
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, -20 * this->fields.dispPriotiry, v2);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_21FFECC(Instance, v5);
  PieceDispPriority = WarBoardData__GetPieceDispPriority(Instance, this->fields.pieceData, 0);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v7);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceBaseComponent__WidgetDepthIncrement(
        WarBoardPieceBaseComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *v4; // x20
  struct UIWidget_array *uiWidgets; // x8
  System_Object_array *ComponentsInChildren_object; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int max_length; // w21
  unsigned int v19; // w22
  __int64 v20; // x23
  struct UIWidget_array *v21; // x8
  __int64 v22; // x9
  il2cpp_array_size_t v23; // x8
  unsigned __int64 v24; // x22
  __int64 v25; // x24
  struct UIWidget_array *v26; // x8
  UnityEngine_Object_o *v27; // x21
  struct UIWidget_array *v28; // x8

  v4 = this;
  if ( (byte_5935E8B & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91505760);
    this = (WarBoardPieceBaseComponent_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935E8B = 1;
  }
  uiWidgets = v4->fields.uiWidgets;
  if ( !uiWidgets )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)v4,
                                    1,
                                    (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91505760);
    v4->fields.uiWidgets = (struct UIWidget_array *)ComponentsInChildren_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v4->fields.uiWidgets,
      (int32_t)ComponentsInChildren_object,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    uiWidgets = v4->fields.uiWidgets;
    if ( !uiWidgets )
      goto LABEL_27;
    max_length = uiWidgets->max_length;
    if ( max_length >= 1 )
    {
      v19 = 0;
      v20 = 32;
      do
      {
        v21 = v4->fields.uiWidgets;
        if ( !v21 )
          goto LABEL_27;
        if ( v19 >= LODWORD(v21->max_length) )
LABEL_28:
          sub_21FFED4(this);
        v22 = *(__int64 *)((char *)&v21->obj.klass + v20);
        if ( !v22 )
          goto LABEL_27;
        if ( *(int *)(v22 + 176) >= 1001 )
        {
          *(Il2CppClass **)((char *)&v21->obj.klass + v20) = 0;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)((char *)v21 + v20),
            0,
            (System_String_o *)method,
            v13,
            v14,
            v15,
            v16,
            v17);
        }
        ++v19;
        v20 += 8;
      }
      while ( max_length != v19 );
      uiWidgets = v4->fields.uiWidgets;
      if ( !uiWidgets )
LABEL_27:
        sub_21FFECC(this, *(_QWORD *)&value);
    }
  }
  v23 = uiWidgets->max_length;
  if ( (int)v23 >= 1 )
  {
    v24 = 0;
    v25 = (unsigned int)v23;
    while ( 1 )
    {
      v26 = v4->fields.uiWidgets;
      if ( !v26 )
        goto LABEL_27;
      if ( v24 >= LODWORD(v26->max_length) )
        goto LABEL_28;
      v27 = (UnityEngine_Object_o *)v26->m_Items[v24];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&value, method);
      this = (WarBoardPieceBaseComponent_o *)UnityEngine_Object__op_Inequality(v27, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v28 = v4->fields.uiWidgets;
        if ( !v28 )
          goto LABEL_27;
        if ( v24 >= LODWORD(v28->max_length) )
          goto LABEL_28;
        this = (WarBoardPieceBaseComponent_o *)v28->m_Items[v24];
        if ( !this )
          goto LABEL_27;
        UIWidget__set_depth((UIWidget_o *)this, LODWORD(this->fields.pieceStatusLabelComponent) + value, 0);
      }
      if ( v25 == ++v24 )
        return;
    }
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5935E95 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardPieceBaseComponent___c_TypeInfo);
    byte_5935E95 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(WarBoardPieceBaseComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardPieceBaseComponent___c_TypeInfo->static_fields->__9 = (struct WarBoardPieceBaseComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarBoardPieceBaseComponent___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, 0);
  return (System_Collections_Generic_IEnumerable_int__o *)WarBoardPieceData__CreatePieceEventVals(x, 0);
}


void WarBoardPieceBaseComponent___c___OnAfterAttack_b__65_3(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5935E98 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardControlUiDataComponent_TypeInfo);
    byte_5935E98 = 1;
  }
  if ( !*(&WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, method, v2);
  WarBoardControlUiDataComponent__ResumeUiDataAll(0);
}


void WarBoardPieceBaseComponent___c___OnAttack_b__63_1(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_5935E96 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5935E96 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
  CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 0.0, 0, 0);
}


void WarBoardPieceBaseComponent___c___OnAttack_b__63_4(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5935E97 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardControlUiDataComponent_TypeInfo);
    byte_5935E97 = 1;
  }
  if ( !*(&WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, method, v2);
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
  struct System_Collections_Generic_HashSet_UIWidget__o *targetUiWidgets; // x0

  if ( (byte_5935E99 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_5935E99 = 1;
  }
  targetUiWidgets = this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_21FFECC(0, x);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_object__o *)targetUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_4287934 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_UIWidget__o *darkenUiWidgets; // x0

  if ( (byte_5935E9A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_5935E9A = 1;
  }
  darkenUiWidgets = this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_21FFECC(0, x);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_object__o *)darkenUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_4287934 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_UIWidget__o *targetUiWidgets; // x0

  if ( (byte_5935E9B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_5935E9B = 1;
  }
  targetUiWidgets = this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_21FFECC(0, x);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_object__o *)targetUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_4287934 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_UIWidget__o *darkenUiWidgets; // x0

  if ( (byte_5935E9C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_5935E9C = 1;
  }
  darkenUiWidgets = this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_21FFECC(0, x);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_object__o *)darkenUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_4287934 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
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
    sub_21FFECC(0, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_5935E9D & 1) == 0 )
  {
    sub_21FFC50(&WarBoardControlUiDataComponent_TypeInfo);
    byte_5935E9D = 1;
  }
  targetUpdateUiDataSquareIndexes = this->fields.targetUpdateUiDataSquareIndexes;
  if ( !*(&WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, method, v2);
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll(targetUpdateUiDataSquareIndexes, 0, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_5935E9E & 1) == 0 )
  {
    sub_21FFC50(&WarBoardControlUiDataComponent_TypeInfo);
    byte_5935E9E = 1;
  }
  targetUpdateUiDataSquareIndexes = this->fields.targetUpdateUiDataSquareIndexes;
  if ( !*(&WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, method, v2);
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

  if ( (byte_5935E9F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5935E9F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 38, this->fields.pieceEventVals, 0);
  if ( !v3 )
    goto LABEL_13;
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetSquarePiece = this->fields.targetSquarePiece;
  if ( targetSquarePiece )
  {
    PieceEventVals = WarBoardPieceData__CreatePieceEventVals(targetSquarePiece, 0);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    EventTasks = WarBoardManager__GetEventTasks(Instance, 38, PieceEventVals, 0);
    System_Collections_Generic_List_object___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
LABEL_13:
    sub_21FFECC(Instance, v5);
  v9 = WarBoardManager__GetEventTasks(Instance, 37, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)v9,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_object___ToArray(
                                      v3,
                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
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
    sub_21FFECC(0, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0);
}


void WarBoardPieceBaseComponent___c__DisplayClass63_0___OnAttack_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *warBoardManager; // x0

  warBoardManager = this->fields.warBoardManager;
  if ( !warBoardManager )
    sub_21FFECC(0, method);
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
    sub_21FFECC(this, method);
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

  if ( (byte_5935EA1 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5935EA1 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
    sub_21FFECC(_4__this, method);
  }
  WarBoardManager__JudgmentGameSet((WarBoardManager_o *)_4__this, 0);
}


bool WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *targetPiece; // x8
  bool v3; // zf

  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    sub_21FFECC(this, method);
  v3 = !targetPiece->fields._isDead_k__BackingField || !this->fields.moveAfterActionCheck;
  return !v3;
}


void WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_g__AddAfterAttackEventTask_0(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  WarBoardPieceData_o *targetPiece; // x0
  struct WarBoardManager_o *warBoardManager; // x8
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t id; // w21
  struct WarBoardPieceData_o *v10; // x8
  WarBoardMessageMaster_o *v11; // x22
  int32_t breakPoint_k__BackingField; // w23
  WarBoardMessageMaster_o *v13; // x0
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  bool v17; // w4
  System_Int32_array *v18; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v20; // x0
  WarBoardManager_o *v21; // x19

  if ( (byte_5935EA0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    byte_5935EA0 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    goto LABEL_26;
  targetPiece = (WarBoardPieceData_o *)WarBoardPieceData__get_isMaster(targetPiece, 0);
  if ( ((unsigned __int8)targetPiece & 1) != 0 )
  {
    warBoardManager = this->fields.warBoardManager;
    if ( !warBoardManager )
      goto LABEL_26;
    targetPiece = (WarBoardPieceData_o *)warBoardManager->fields._warBoardData_k__BackingField;
    if ( !targetPiece )
      goto LABEL_26;
    id = WarBoardData__get_id((WarBoardData_o *)targetPiece, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
    targetPiece = (WarBoardPieceData_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
    v10 = this->fields.targetPiece;
    if ( !v10 )
      goto LABEL_26;
    v11 = (WarBoardMessageMaster_o *)targetPiece;
    breakPoint_k__BackingField = v10->fields._breakPoint_k__BackingField;
    targetPiece = (WarBoardPieceData_o *)WarBoardPieceData__get_isPlayerMaster(this->fields.targetPiece, 0);
    if ( ((unsigned __int8)targetPiece & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_26;
      v13 = v11;
      v14 = id;
      v15 = 12;
      v16 = breakPoint_k__BackingField;
      v17 = 1;
    }
    else
    {
      if ( !v11 )
        goto LABEL_26;
      v13 = v11;
      v14 = id;
      v15 = 10;
      v16 = breakPoint_k__BackingField;
      v17 = 0;
    }
    targetPiece = (WarBoardPieceData_o *)WarBoardMessageMaster__GetMessageTasks(v13, v14, v15, v16, v17, 0);
    if ( !v3 )
LABEL_26:
      sub_21FFECC(targetPiece, v4);
    System_Collections_Generic_List_object___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  targetPiece = (WarBoardPieceData_o *)this->fields.__4__this;
  if ( !targetPiece )
    goto LABEL_26;
  targetPiece = (WarBoardPieceData_o *)WarBoardPieceBaseComponent__GetParticipantVals(
                                         (WarBoardPieceBaseComponent_o *)targetPiece,
                                         this->fields.targetPiece,
                                         0);
  if ( !this->fields.warBoardManager )
    goto LABEL_26;
  v18 = (System_Int32_array *)targetPiece;
  targetPiece = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                         this->fields.warBoardManager,
                                         2,
                                         (System_Int32_array *)targetPiece,
                                         0);
  if ( !v3 )
    goto LABEL_26;
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_26;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)targetPiece, 20, v18, 0);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_26;
  v20 = WarBoardManager__GetEventTasks((WarBoardManager_o *)targetPiece, 40, v18, 0);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)v20,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    v21 = this->fields.warBoardManager;
    targetPiece = (WarBoardPieceData_o *)System_Collections_Generic_List_object___ToArray(
                                           v3,
                                           (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( v21 )
    {
      WarBoardManager__InsertRunningTask(v21, (WarBoardTaskBase_array *)targetPiece, 0);
      return;
    }
    goto LABEL_26;
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
    sub_21FFECC(0, method);
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

  if ( (byte_5935EA3 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5935EA3 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
    sub_21FFECC(_4__this, method);
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

  if ( (byte_5935EA2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5935EA2 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 27, 0, 0);
  if ( !v3 )
    goto LABEL_9;
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_object___ToArray(
                                      v3,
                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( warBoardManager )
    {
      WarBoardManager__InsertRunningTask(warBoardManager, (WarBoardTaskBase_array *)Instance, 0);
      return;
    }
LABEL_9:
    sub_21FFECC(Instance, v5);
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
    sub_21FFECC(this, 0);
  return System_String__op_Equality(a->fields.key, this->fields.effectKey, 0);
}