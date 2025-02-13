void __fastcall WarBoardPieceBaseComponent___ctor(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  int64_t v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4BD9EE3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C21E38(&StringLiteral_7004/*"Frame{0}"*/);
    byte_4BD9EE3 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
  this->fields.listEffectData = (struct System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.listEffectData, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  *(_OWORD *)&this->fields.positionPieceActionPointDefault.fields.x = xmmword_BFE180;
  *(_QWORD *)&this->fields.positionPieceActionPointNext.fields.y = 1111228416LL;
  *(_OWORD *)&this->fields.pixelPerSecond = xmmword_BFF6D0;
  this->fields.lengthMoveAttack = 25.0;
  v10 = StringLiteral_7004/*"Frame{0}"*/;
  this->fields.baseFrameName = (struct System_String_o *)StringLiteral_7004/*"Frame{0}"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.baseFrameName, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.removeTweenTargetObjects = (struct System_Collections_Generic_List_GameObject__o *)v17;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.removeTweenTargetObjects,
    (int64_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__AddDeadMoveTask(
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
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
  if ( (byte_4BD9EDA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C21E38(&WarBoardMovePerformance_TypeInfo);
    byte_4BD9EDA = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_16;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(pieceData, 0LL);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  pieceData = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                       (WarBoardManager_o *)pieceData,
                                       30,
                                       PieceEventVals,
                                       0LL);
  if ( !v9 )
    goto LABEL_16;
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)pieceData,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 36, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)pieceData, squareIndex, 0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  v16 = SquarePosition.fields.x;
  v17 = SquarePosition.fields.y;
  v18 = SquarePosition.fields.z;
  v19 = (WarBoardMovePerformance_o *)sub_1C22084(WarBoardMovePerformance_TypeInfo);
  v35.fields.x = x;
  v35.fields.y = y;
  v35.fields.z = z;
  v36.fields.x = v16;
  v36.fields.y = v17;
  v36.fields.z = v18;
  v20 = (Il2CppObject *)v19;
  WarBoardMovePerformance___ctor(v19, gameObject, v35, v36, pixelPerSecond, 0, 0LL);
  items = v9->fields._items;
  v28 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v9->fields._version;
  if ( !items )
    goto LABEL_16;
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      v20,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v20;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)v20, v21, v22, v23, v24, v25, v26);
  }
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData
    || (v31 = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 38, PieceEventVals, 0LL),
        System_Collections_Generic_List_object___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)v31,
          (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v32 = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 37, 0LL, 0LL),
        System_Collections_Generic_List_object___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)v32,
          (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        pieceData = (WarBoardPieceData_o *)System_Collections_Generic_List_object___ToArray(
                                             v9,
                                             (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__),
        !Instance) )
  {
LABEL_16:
    sub_1C22094(pieceData, v10);
  }
  WarBoardManager__InsertRunningTask((WarBoardManager_o *)Instance, (WarBoardTaskBase_array *)pieceData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__ChangeCriticalStars(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardPieceBaseComponent__ChangeStatus(
        WarBoardPieceBaseComponent_o *this,
        bool isBreak,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardPieceBaseComponent__ClickIcon(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v4; // x1
  int32_t controllType_k__BackingField; // w8
  WarBoardManager_o *v6; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x21
  struct WarBoardSeSetting_o *seSetting; // x8
  const MethodInfo *v10; // x2
  Il2CppMethodPointer methodPtr; // x1
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

  if ( (byte_4BD9ECB & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C21E38(&Method_WarBoardPieceBaseComponent_ClickIcon__);
    byte_4BD9ECB = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v13 = (_QWORD *)sub_1C21E50(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v14 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
      v15 = this->fields.pieceData;
      if ( v15 )
      {
        WarBoardManager__SquareSelect(v6, v15->fields._nowSquareIndex_k__BackingField, 0LL);
        v10 = this->klass->vtable._14_EditPiece.method;
        methodPtr = this->klass->vtable._15_ChangeStatus.methodPtr;
        goto LABEL_33;
      }
LABEL_41:
      sub_1C22094(Instance, v4);
    }
  }
  else if ( controllType_k__BackingField == 2 )
  {
    if ( WarBoardManager__get_isSelectedPiece(Instance, 0LL)
      && WarBoardManager__IsSelectedPieceSame(v6, this->fields.pieceData, 0LL) )
    {
      v7 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C21E50(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v7, v7[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        seSetting = Instance->fields.seSetting;
        if ( seSetting )
        {
          OverwriteAssetSoundName__PlaySe(v8, seSetting->fields.DeselectSe, 0, 0LL);
          WarBoardManager__DeselectPiece(v6, 1, 0LL, 0LL);
          v10 = this->klass->vtable._13_HideStatus.method;
          methodPtr = this->klass->vtable._14_EditPiece.methodPtr;
LABEL_33:
          ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v10)(this, methodPtr);
          return;
        }
      }
      goto LABEL_41;
    }
    if ( WarBoardManager__get_isSelectedPiece(v6, 0LL) && this->fields.isSelectable )
    {
      v16 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v16 = (_QWORD *)sub_1C21E50(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v17 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v16, v16[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v18 = Instance->fields.seSetting;
        if ( v18 )
        {
          Instance = (WarBoardManager_o *)OverwriteAssetSoundName__PlaySe(v17, v18->fields.SelectSe, 0, 0LL);
          v19 = this->fields.pieceData;
          if ( v19 )
          {
            WarBoardManager__SelectedPieceAction(v6, v19->fields._nowSquareIndex_k__BackingField, 0LL);
            return;
          }
        }
      }
      goto LABEL_41;
    }
    if ( WarBoardManager__IsNowTurn(v6, this->fields.pieceData, 0LL) )
    {
      v20 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v20 = (_QWORD *)sub_1C21E50(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v21 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v20, v20[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v22 = Instance->fields.seSetting;
        if ( v22 )
        {
          OverwriteAssetSoundName__PlaySe(v21, v22->fields.SelectSe, 0, 0LL);
          WarBoardManager__SelectPiece(v6, this->fields.pieceData, 0LL);
          v10 = this->klass->vtable._12_ShowStatus.method;
          methodPtr = this->klass->vtable._13_HideStatus.methodPtr;
          goto LABEL_33;
        }
      }
      goto LABEL_41;
    }
  }
  if ( (((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._12_ShowStatus.method)(
          this,
          this->klass->vtable._13_HideStatus.methodPtr) & 1) != 0 )
  {
    v23 = Method_WarBoardPieceBaseComponent_ClickIcon__;
    if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
      v23 = (_QWORD *)sub_1C21E50(Method_WarBoardPieceBaseComponent_ClickIcon__);
    v24 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v23, v23[4]);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    v25 = Instance->fields.seSetting;
    if ( !v25 )
      goto LABEL_41;
    OverwriteAssetSoundName__PlaySe(v24, v25->fields.OpenSimpleInfoSe, 0, 0LL);
  }
}


void __fastcall WarBoardPieceBaseComponent__CreateEffect(
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Nullable_Vector3__o v26; // 0:x3.16
  System_Nullable_Vector3__o v27; // 0:x5.16

  if ( (byte_4BD9EE0 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C21E38(&WarBoardCommonEffectPerformance_TypeInfo);
    sub_1C21E38(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    byte_4BD9EE0 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_308EDEC *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v12 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, void *))this->klass->vtable._41_GetEffectDisplayTransform.method)(
                                    this,
                                    this->klass[1]._1.image);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
      v12 = (UnityEngine_Object_o *)transform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__Instantiate_object__50551272(
            CommonEffectAsset_object,
            (UnityEngine_Transform_o *)v12,
            (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    v14 = (WarBoardCommonEffectPerformance_o *)sub_1C22084(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v26.fields.hasValue = 0LL;
    *(_QWORD *)&v26.fields.value.fields.y = 0LL;
    *(_QWORD *)&v27.fields.hasValue = 0LL;
    *(_QWORD *)&v27.fields.value.fields.y = 0LL;
    v15 = (Il2CppObject *)v14;
    WarBoardCommonEffectPerformance___ctor(
      v14,
      0LL,
      (UnityEngine_GameObject_o *)v13,
      v26,
      v27,
      (System_Nullable_Vector3__o)0,
      0,
      0,
      1,
      0LL);
    if ( v7 )
    {
      items = v7->fields._items;
      v23 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v7->fields._version;
      if ( items )
      {
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            v15,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_17;
        }
        else
        {
          v25 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v15;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)v15, v16, v17, v18, v19, v20, v21);
          if ( taskList )
          {
LABEL_17:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v7,
              (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_36670272(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v7,
            0LL);
          return;
        }
      }
    }
LABEL_21:
    sub_1C22094(Instance, v9);
  }
}


void __fastcall WarBoardPieceBaseComponent__CreateEffectText(
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Nullable_Vector3__o v27; // 0:x3.16
  System_Nullable_Vector3__o v28; // 0:x5.16

  if ( (byte_4BD9EE1 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C21E38(&WarBoardCommonEffectPerformance_TypeInfo);
    byte_4BD9EE1 = 1;
  }
  effectDamageBaseObject = (UnityEngine_Object_o *)this->fields.effectDamageBaseObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(0LL, effectDamageBaseObject, 0LL) )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    effectDamageBaseLabel = (UnityEngine_Object_o *)this->fields.effectDamageBaseLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(effectDamageBaseLabel, 0LL, 0LL) )
    {
      Instance = this->fields.effectDamageBaseLabel;
      if ( !Instance )
        goto LABEL_19;
      UILabel__set_text(Instance, popText, 0LL);
    }
    v14 = this->fields.effectDamageBaseObject;
    v15 = (WarBoardCommonEffectPerformance_o *)sub_1C22084(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v27.fields.hasValue = 0LL;
    *(_QWORD *)&v27.fields.value.fields.y = 0LL;
    *(_QWORD *)&v28.fields.hasValue = 0LL;
    *(_QWORD *)&v28.fields.value.fields.y = 0LL;
    v16 = (Il2CppObject *)v15;
    WarBoardCommonEffectPerformance___ctor(v15, 0LL, v14, v27, v28, (System_Nullable_Vector3__o)0, 0, 0, 0, 0LL);
    if ( v10 )
    {
      items = v10->fields._items;
      v24 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v10->fields._version;
      if ( items )
      {
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v16,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_15;
        }
        else
        {
          v26 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v16;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)v16, v17, v18, v19, v20, v21, v22);
          if ( taskList )
          {
LABEL_15:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v10,
              (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        Instance = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_36670272(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v10,
            0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_1C22094(Instance, v12);
  }
}


void __fastcall WarBoardPieceBaseComponent__EditPiece(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_Transform_o *__fastcall WarBoardPieceBaseComponent__GetEffectDisplayTransform(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  return 0LL;
}


UnityEngine_Vector3_o __fastcall WarBoardPieceBaseComponent__GetIconLocalPosition(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
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


UnityEngine_Vector3_o __fastcall WarBoardPieceBaseComponent__GetIconPosition(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
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


System_Int32_array *__fastcall WarBoardPieceBaseComponent__GetParticipantVals(
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
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  WarBoardPieceBaseComponent___c_c *v15; // x0
  System_Func_object__object__o *_9__62_0; // x20
  Il2CppObject *v17; // x21
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  v4 = this;
  if ( (byte_4BD9ED4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Empty_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Concat_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C21E38(&Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__);
    this = (WarBoardPieceBaseComponent_o *)sub_1C21E38(&WarBoardPieceBaseComponent___c_TypeInfo);
    byte_4BD9ED4 = 1;
  }
  if ( !targetPiece )
    goto LABEL_28;
  if ( WarBoardPieceData__get_isMaster(targetPiece, 0LL) )
  {
    this = (WarBoardPieceBaseComponent_o *)v4->fields.pieceData;
    if ( this )
    {
      PieceEventVals = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardPieceData__CreatePieceEventVals(
                                                                              (WarBoardPieceData_o *)this,
                                                                              0LL);
      v6 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardPieceData__CreatePieceEventVals(
                                                                  targetPiece,
                                                                  0LL);
      v7 = System_Linq_Enumerable__Concat_int_(
             PieceEventVals,
             v6,
             (const MethodInfo_2FC7870 *)Method_System_Linq_Enumerable_Concat_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v7,
               (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_28:
    sub_1C22094(this, targetPiece);
  }
  this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !this )
    goto LABEL_28;
  this = (WarBoardPieceBaseComponent_o *)this[1].fields.turnDarkUiWidgetsAroundActionCount;
  if ( !this )
    goto LABEL_28;
  this = (WarBoardPieceBaseComponent_o *)WarBoardData__LoadBattleParticipantInfo((WarBoardData_o *)this, 0LL);
  if ( !this )
    goto LABEL_28;
  if ( !LOBYTE(this->fields.m_CancellationTokenSource) )
  {
    v14 = *(System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.m_CachedPtr;
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
      _9__62_0 = (System_Func_object__object__o *)sub_1C22084(System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(
        _9__62_0,
        v17,
        Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__,
        0LL);
      static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      static_fields->__9__62_0 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__62_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__62_0,
        (int64_t)_9__62_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                v14,
                                                                (System_Func_TSource__IEnumerable_TResult___o *)_9__62_0,
                                                                (const MethodInfo_2FE3ACC *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v7,
             (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v9 = Method_System_Array_Empty_int___;
  v10 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v10 )
  {
    sub_1C73D70(Method_System_Array_Empty_int___);
    v10 = v9[7];
  }
  v11 = *(_QWORD *)(v10 + 16);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C73D14(inited);
  if ( !*(_DWORD *)(v11 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v11);
  v12 = *(_QWORD *)(v9[7] + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C73D14(inited);
  return **(System_Int32_array ***)(v12 + 184);
}


WarBoardSimpleAnimationPerformance_o *__fastcall WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x20
  WarBoardSimpleAnimationPerformance_o *v6; // x21

  if ( (byte_4BD9EDC & 1) == 0 )
  {
    sub_1C21E38(&WarBoardSimpleAnimationPerformance_TypeInfo);
    byte_4BD9EDC = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v6 = (WarBoardSimpleAnimationPerformance_o *)sub_1C22084(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(v6, simpleAnimation, animationName, 0LL);
  return v6;
}


void __fastcall WarBoardPieceBaseComponent__HideActionCount(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *currentActionPointRoot; // x0
  UnityEngine_Object_o *currentPieceActionPointRoot; // x20

  if ( (byte_4BD9ECD & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9ECD = 1;
  }
  currentActionPointRoot = this->fields.currentActionPointRoot;
  if ( !currentActionPointRoot )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(currentActionPointRoot, 0, 0LL);
  currentPieceActionPointRoot = (UnityEngine_Object_o *)this->fields.currentPieceActionPointRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentPieceActionPointRoot, 0LL, 0LL) )
  {
    currentActionPointRoot = this->fields.currentPieceActionPointRoot;
    if ( currentActionPointRoot )
    {
      UnityEngine_GameObject__SetActive(currentActionPointRoot, 0, 0LL);
      goto LABEL_9;
    }
LABEL_10:
    sub_1C22094(currentActionPointRoot, method);
  }
LABEL_9:
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
    this,
    this->klass->vtable._12_ShowStatus.methodPtr);
}


void __fastcall WarBoardPieceBaseComponent__HideActionTarget(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectObject; // x0

  selectObject = this->fields.selectObject;
  if ( !selectObject )
    sub_1C22094(0LL, method);
  UnityEngine_GameObject__SetActive(selectObject, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__HideStatus(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v3; // x0
  __int64 v4; // x0
  WarBoardManager_o *v5; // x0

  if ( (byte_4BD9ED0 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    byte_4BD9ED0 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C73D14(v2);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C73D14(v2);
  v5 = **(WarBoardManager_o ***)(v4 + 184);
  if ( !v5 )
    sub_1C22094(0LL, method);
  WarBoardManager__HideSimplePopup(v5, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__Initialize(
        WarBoardPieceBaseComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  __int64 gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  UnityEngine_Transform_o *transform; // x21
  int v21; // s0
  __int64 breakPointMax_k__BackingField; // x21
  struct WarBoardBreakPointComponent_array *v25; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  UnityEngine_Object_c **v33; // x25
  unsigned __int64 v34; // x29
  float v35; // s8
  __int64 v36; // x23
  int v37; // w26
  float v38; // s9
  __int64 v39; // x27
  Il2CppObject *breakPointPrefab; // x24
  UnityEngine_Transform_o *v41; // x0
  UnityEngine_Object_c *v42; // x8
  UnityEngine_Object_c **v43; // x21
  UnityEngine_Transform_o *v44; // x25
  UnityEngine_GameObject_o *v45; // x25
  WarBoardBreakPointComponent_o *v46; // x24
  struct UIWidget_o *breakPointParent; // x8
  int32_t mDepth; // w28
  bool isMaster; // w25
  const MethodInfo *v50; // x6
  unsigned int *v51; // x25
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  const MethodInfo *v58; // x3
  struct WarBoardBreakPointComponent_array *v59; // x8
  float maxSpacing; // s0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  UnityEngine_Transform_array *v67; // x21
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x22
  const MethodInfo *v75; // x2
  int32_t PieceDispPriority; // w0
  const MethodInfo *v77; // x2
  const MethodInfo *v78; // x1
  Il2CppObject *CommonEffectAsset_object; // x20
  UnityEngine_Transform_o *v80; // x21
  UnityEngine_Object_o *v81; // x22
  Il2CppObject *v82; // x0
  UnityEngine_GameObject_o **p_effectDamageBaseObject; // x20
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  UnityEngine_Object_o *v90; // x21
  Il2CppObject *v91; // x0
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  __int64 v98; // x0
  __int64 v99; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD9EC7 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C21E38(&UnityEngine_Transform___TypeInfo);
    sub_1C21E38(&WarBoardBreakPointComponent___TypeInfo);
    sub_1C21E38(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
    sub_1C21E38(&StringLiteral_23388/*"root_text/type01/dm_base"*/);
    sub_1C21E38(&StringLiteral_19151/*"ef_dm_base"*/);
    byte_4BD9EC7 = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.simpleAnimation,
    (int64_t)Component_object,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.pieceData = pieceData;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.pieceData, (int64_t)pieceData, v14, v15, v16, v17, v18, v19);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_26;
  if ( !gameObject )
    goto LABEL_26;
  *(UnityEngine_Vector3_o *)&v21 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)gameObject,
                                     pieceData->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_26;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v21, 0LL);
  breakPointMax_k__BackingField = (unsigned int)pieceData->fields._breakPointMax_k__BackingField;
  v25 = (struct WarBoardBreakPointComponent_array *)sub_1C21EE0(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v25;
  p_breakPoints = &this->fields.breakPoints;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.breakPoints, (int64_t)v25, v27, v28, v29, v30, v31, v32);
  gameObject = (__int64)this->fields.breakPointParent;
  if ( !gameObject )
    goto LABEL_26;
  v33 = &UnityEngine_Object_TypeInfo;
  if ( (int)breakPointMax_k__BackingField >= 1 )
  {
    v34 = 0LL;
    v35 = 0.0;
    v36 = 1LL;
    v37 = 2 * breakPointMax_k__BackingField - 2;
    v38 = (float)*(int *)(gameObject + 168) / (float)(int)breakPointMax_k__BackingField;
    v39 = 8LL;
    v99 = breakPointMax_k__BackingField;
    while ( 1 )
    {
      breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
      v41 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      v42 = *v33;
      v43 = v33;
      v44 = v41;
      if ( !v42->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v42);
      gameObject = (__int64)UnityEngine_Object__Instantiate_object__50551272(
                              breakPointPrefab,
                              v44,
                              (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
      if ( !gameObject )
        goto LABEL_26;
      v45 = (UnityEngine_GameObject_o *)gameObject;
      v46 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)gameObject,
                                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      gameObject = (__int64)UnityEngine_GameObject__get_transform(v45, 0LL);
      if ( !gameObject )
        goto LABEL_26;
      v100.fields.y = 0.0;
      v100.fields.z = 0.0;
      v100.fields.x = v35;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v100, 0LL);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        goto LABEL_26;
      mDepth = breakPointParent->fields.mDepth;
      isMaster = WarBoardPieceData__get_isMaster(pieceData, 0LL);
      gameObject = WarBoardPieceData__get_isEnemyServant(pieceData, 0LL);
      if ( !v46 )
        goto LABEL_26;
      WarBoardBreakPointComponent__Initialize(v46, v37 + mDepth, v36, isMaster, gameObject & 1, 0, v50);
      v51 = (unsigned int *)*p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_26;
      gameObject = sub_1C21F74(v46, *(_QWORD *)(*(_QWORD *)v51 + 64LL));
      if ( !gameObject )
        goto LABEL_57;
      if ( v34 >= v51[6] )
        goto LABEL_56;
      *(_QWORD *)&v51[v39] = v46;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v51[v39], (int64_t)v46, v52, v53, v54, v55, v56, v57);
      v59 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_26;
      if ( v34 >= v59->max_length )
        goto LABEL_56;
      v33 = v43;
      gameObject = *(__int64 *)((char *)&v59->obj.klass + v39 * 4);
      if ( !gameObject )
        goto LABEL_26;
      WarBoardBreakPointComponent__SetActive(
        (WarBoardBreakPointComponent_o *)gameObject,
        (__int64)v34 < pieceData->fields._breakPoint_k__BackingField,
        0,
        v58);
      if ( v99 == v36 )
        break;
      maxSpacing = v46->fields.maxSpacing;
      gameObject = (__int64)this->fields.breakPointParent;
      ++v34;
      v37 -= 2;
      if ( maxSpacing >= v38 )
        maxSpacing = v38;
      ++v36;
      v35 = v35 + maxSpacing;
      v39 += 2LL;
      if ( !gameObject )
        goto LABEL_26;
    }
  }
  gameObject = (__int64)this->fields.selectObject;
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._10_UpdateDisplayActionCount.method)(
    this,
    this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr);
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._9_HideActionCount.method)(
    this,
    this->klass->vtable._10_UpdateDisplayActionCount.methodPtr);
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._17_ChangeCriticalStars.method)(
    this,
    this->klass->vtable._18_Selectable.methodPtr);
  pieceData->fields.pieceComponent = this;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&pieceData->fields.pieceComponent,
    (int64_t)this,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  if ( pieceData->fields._isDead_k__BackingField )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_26;
LABEL_30:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    return;
  }
  v67 = (UnityEngine_Transform_array *)sub_1C21EE0(UnityEngine_Transform___TypeInfo, 1LL);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v67 )
    goto LABEL_26;
  v74 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1C21F74(gameObject, v67->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_57:
      v98 = sub_1C220B8();
      sub_1C21F60(v98, 0LL);
    }
  }
  if ( !v67->max_length )
LABEL_56:
    sub_1C2209C(gameObject, v6);
  v67->m_Items[0] = (UnityEngine_Transform_o *)v74;
  sub_1C21DDC((PartyOrganizationUtility_o *)v67->m_Items, v74, v68, v69, v70, v71, v72, v73);
  WarBoardPieceBaseComponent__SetButtonTweenTarget(this, v67, v75);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_26;
  gameObject = *(_QWORD *)(gameObject + 440);
  if ( !gameObject )
    goto LABEL_26;
  PieceDispPriority = WarBoardData__GetPieceDispPriority((WarBoardData_o *)gameObject, pieceData, 0LL);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v77);
  WarBoardPieceBaseComponent__UpdateUiByBuffChanged(this, v78);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_26;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)gameObject,
                               (System_String_o *)StringLiteral_19151/*"ef_dm_base"*/,
                               (const MethodInfo_308EDEC *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !(*v33)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v33);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    v80 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v81 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, void *))this->klass->vtable._41_GetEffectDisplayTransform.method)(
                                    this,
                                    this->klass[1]._1.image);
    if ( !(*v33)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v33);
    if ( UnityEngine_Object__op_Inequality(v81, 0LL, 0LL) )
      v80 = (UnityEngine_Transform_o *)v81;
    if ( !(*v33)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v33);
    v82 = UnityEngine_Object__Instantiate_object__50551272(
            CommonEffectAsset_object,
            v80,
            (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    this->fields.effectDamageBaseObject = (struct UnityEngine_GameObject_o *)v82;
    p_effectDamageBaseObject = &this->fields.effectDamageBaseObject;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.effectDamageBaseObject,
      (int64_t)v82,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.effectDamageBaseObject, 0LL, 0LL) )
    {
      v90 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                      *p_effectDamageBaseObject,
                                      (System_String_o *)StringLiteral_23388/*"root_text/type01/dm_base"*/,
                                      0LL);
      if ( !(*v33)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v33);
      gameObject = UnityEngine_Object__op_Inequality(v90, 0LL, 0LL);
      if ( (gameObject & 1) != 0 )
      {
        if ( !v90 )
          goto LABEL_26;
        v91 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)v90,
                (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        this->fields.effectDamageBaseLabel = (struct UILabel_o *)v91;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.effectDamageBaseLabel,
          (int64_t)v91,
          v92,
          v93,
          v94,
          v95,
          v96,
          v97);
      }
      gameObject = (__int64)*p_effectDamageBaseObject;
      if ( !*p_effectDamageBaseObject )
LABEL_26:
        sub_1C22094(gameObject, v6);
      goto LABEL_30;
    }
  }
}


bool __fastcall WarBoardPieceBaseComponent__IsModifyStatus(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall WarBoardPieceBaseComponent__LongTapIcon(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAfterAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x22
  WarBoardData_o *gameObject; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_List_object__o *v14; // x19
  Il2CppObject *Instance; // x0
  WarBoardData_o **v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  WarBoardPieceData_o *Piece_36484864; // x0
  WarBoardData_o **v24; // x23
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x24
  WarBoardTaskBase_TaskCallback_o *v32; // x25
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  int32x2_t v50; // d1
  float32x2_t v51; // d9
  float v52; // s10
  float v53; // s2
  float v54; // s8
  float32x2_t v55; // d0
  float32x2_t v56; // d9
  float v57; // s8
  float v58; // s10
  float32x2_t v59; // d9
  float z; // s8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s10
  float v63; // s0
  unsigned __int64 v64; // d1
  float v65; // s0
  __int64 v66; // x24
  WarBoardTaskBase_TaskCallback_o *v67; // x25
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
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
  System_Func_bool__o *v86; // x23
  int64_t v87; // x21
  _QWORD *v88; // x22
  System_Delegate_o *v89; // x23
  WarBoardPieceBaseComponent___c_c *v90; // x0
  WarBoardTaskBase_TaskCallback_o *_9__65_3; // x24
  Il2CppObject *v92; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v93; // x0
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  System_Delegate_o *v100; // x0
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  int64_t v107; // x8
  WarBoardTaskBase_TaskCallback_c *v108; // x1
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  struct System_Object_array *v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  Il2CppClass **v118; // x0
  unsigned __int64 v119; // [xsp+0h] [xbp-A0h]
  unsigned __int64 v120; // [xsp+0h] [xbp-A0h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v122; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v123; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v124; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4BD9ED7 & 1) == 0 )
  {
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C21E38(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C21E38(&Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__);
    sub_1C21E38(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__);
    sub_1C21E38(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__);
    sub_1C21E38(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__);
    sub_1C21E38(&WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo);
    sub_1C21E38(&WarBoardPieceBaseComponent___c_TypeInfo);
    sub_1C21E38(&WarBoardCallbackTask_TypeInfo);
    sub_1C21E38(&WarBoardConditionalJumpTask_TypeInfo);
    sub_1C21E38(&WarBoardMovePerformance_TypeInfo);
    byte_4BD9ED7 = 1;
  }
  v5 = sub_1C22084(WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass65_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass65_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_60;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 52) = squareIndex;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v5 + 24) = Instance;
  v16 = (WarBoardData_o **)(v5 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)Instance, v17, v18, v19, v20, v21, v22);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_60;
  gameObject = *(WarBoardData_o **)(*(_QWORD *)(v5 + 24) + 440LL);
  if ( !gameObject )
    goto LABEL_60;
  Piece_36484864 = WarBoardData__GetPiece_36484864(gameObject, *(_DWORD *)(v5 + 52), 0LL);
  *(_QWORD *)(v5 + 16) = Piece_36484864;
  v24 = (WarBoardData_o **)(v5 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)Piece_36484864, v25, v26, v27, v28, v29, v30);
  v31 = sub_1C22084(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v31, 0LL, 0LL);
  v32 = (WarBoardTaskBase_TaskCallback_o *)sub_1C22084(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v32,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__,
    0LL);
  if ( !v31 )
    goto LABEL_60;
  *(_QWORD *)(v31 + 32) = v32;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v31 + 32), (int64_t)v32, v33, v34, v35, v36, v37, v38);
  if ( !v14 )
    goto LABEL_60;
  items = v14->fields._items;
  v46 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v14->fields._version;
  if ( !items )
    goto LABEL_60;
  size = v14->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v31,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &items->obj.klass + size;
    v14->fields._size = size + 1;
    v48[4] = (Il2CppClass *)v31;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v48 + 4), v31, v39, v40, v41, v42, v43, v44);
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
                     0LL);
  gameObject = *(WarBoardData_o **)(v5 + 24);
  *(UnityEngine_Vector3_o *)(v5 + 40) = SquarePosition;
  if ( !gameObject )
    goto LABEL_60;
  *(UnityEngine_Vector3_o *)v55.n64_u64 = WarBoardManager__GetSquarePosition(
                                            (WarBoardManager_o *)gameObject,
                                            *(_DWORD *)(v5 + 52),
                                            0LL);
  v51.n64_u64[0] = *(unsigned __int64 *)(v5 + 40);
  v52 = *(float *)(v5 + 48);
  v54 = v53;
  v55.n64_u32[1] = v50.n64_u32[0];
  if ( !byte_4BD6BB3 )
  {
    v119 = v55.n64_u64[0];
    sub_1C21E38(&System_Math_TypeInfo);
    v55.n64_u64[0] = v119;
    byte_4BD6BB3 = 1;
  }
  v56.n64_u64[0] = vsub_f32(v55, v51).n64_u64[0];
  v57 = v54 - v52;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v58 = vaddv_f32(vmul_f32(v56, v56)) + (float)(v57 * v57);
  if ( !byte_4BD6BB4 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD6BB4 = 1;
  }
  v50.n64_f32[0] = sqrtf(v58);
  v120 = v50.n64_u64[0];
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v50.n64_u64[0] = v120;
  }
  if ( v50.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_4BD6BB1 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v59.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    v59.n64_u64[0] = vdiv_f32(v56, vdup_lane_s32(v50, 0)).n64_u64[0];
    z = v57 / v50.n64_f32[0];
  }
  gameObject = *v24;
  if ( !*v24 )
    goto LABEL_60;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant((WarBoardPieceData_o *)gameObject, 0LL) )
    lengthOnAttack = this->fields.lengthOnEncount;
  v63 = *(float *)&v120 - lengthOnAttack;
  if ( (float)(*(float *)&v120 - lengthOnAttack) > 0.0 )
  {
    v64 = vadd_f32(vmul_n_f32(v59, v63), *(float32x2_t *)(v5 + 40)).n64_u64[0];
    v65 = (float)(z * v63) + *(float *)(v5 + 48);
    *(_QWORD *)(v5 + 40) = v64;
    *(float *)(v5 + 48) = v65;
  }
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_60;
  WarBoardPieceData__CreatePieceEventVals((WarBoardPieceData_o *)gameObject, 0LL);
  v66 = sub_1C22084(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v66, 0LL, 0LL);
  v67 = (WarBoardTaskBase_TaskCallback_o *)sub_1C22084(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v67,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__,
    0LL);
  if ( !v66 )
    goto LABEL_60;
  *(_QWORD *)(v66 + 32) = v67;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v66 + 32), (int64_t)v67, v68, v69, v70, v71, v72, v73);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
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
  v122 = WarBoardManager__GetSquarePosition(
           (WarBoardManager_o *)gameObject,
           v74->fields._nowSquareIndex_k__BackingField,
           0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  x = v122.fields.x;
  y = v122.fields.y;
  v82 = v122.fields.z;
  v83 = (WarBoardMovePerformance_o *)sub_1C22084(WarBoardMovePerformance_TypeInfo);
  v123.fields.x = v76;
  v123.fields.y = v77;
  v123.fields.z = v78;
  v124.fields.x = x;
  v124.fields.y = y;
  v124.fields.z = v82;
  v84 = (WarBoardTaskBase_o *)v83;
  WarBoardMovePerformance___ctor(v83, v75, v123, v124, pixelPerSecond, 0, 0LL);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_60;
  if ( WarBoardPieceData__IsEnabledMoveAfterAttack((WarBoardPieceData_o *)gameObject, 0LL) )
  {
    gameObject = *v24;
    if ( !*v24 )
      goto LABEL_60;
    IsEnabledMovedAfterDefend = WarBoardPieceData__IsEnabledMovedAfterDefend((WarBoardPieceData_o *)gameObject, 0LL);
  }
  else
  {
    IsEnabledMovedAfterDefend = 0;
  }
  *(_BYTE *)(v5 + 56) = IsEnabledMovedAfterDefend;
  v86 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v86,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__,
    0LL);
  v87 = sub_1C22084(WarBoardConditionalJumpTask_TypeInfo);
  WarBoardConditionalJumpTask___ctor((WarBoardConditionalJumpTask_o *)v87, v86, (WarBoardTaskBase_o *)v66, v84, 0LL);
  if ( !v87 )
LABEL_60:
    sub_1C22094(gameObject, v7);
  v88 = (_QWORD *)(v87 + 40);
  v89 = *(System_Delegate_o **)(v87 + 40);
  v90 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v90 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  _9__65_3 = v90->static_fields->__9__65_3;
  if ( !_9__65_3 )
  {
    if ( !v90->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v90);
      v90 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    v92 = (Il2CppObject *)v90->static_fields->__9;
    _9__65_3 = (WarBoardTaskBase_TaskCallback_o *)sub_1C22084(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__65_3,
      v92,
      Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__,
      0LL);
    v93 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v93->__9__65_3 = _9__65_3;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v93->__9__65_3, (int64_t)_9__65_3, v94, v95, v96, v97, v98, v99);
  }
  v100 = System_Delegate__Combine(v89, (System_Delegate_o *)_9__65_3, 0LL);
  v107 = (int64_t)v100;
  if ( v100 )
  {
    v108 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v100->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v88 = v100;
      if ( (WarBoardTaskBase_TaskCallback_c *)v100->klass == v108 )
        goto LABEL_54;
    }
    sub_1C22354(v100);
  }
  *v88 = v107;
LABEL_54:
  sub_1C21DDC((PartyOrganizationUtility_o *)(v87 + 40), v107, v101, v102, v103, v104, v105, v106);
  v115 = v14->fields._items;
  v116 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v14->fields._version;
  if ( !v115 )
    goto LABEL_60;
  v117 = v14->fields._size;
  if ( (unsigned int)v117 >= v115->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v87,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
  }
  else
  {
    v118 = &v115->obj.klass + v117;
    v14->fields._size = v117 + 1;
    v118[4] = (Il2CppClass *)v87;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v118 + 4), v87, v109, v110, v111, v112, v113, v114);
  }
  gameObject = *v16;
  if ( !*v16 )
    goto LABEL_60;
  WarBoardManager__AddTask_36670272(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v14,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAfterWallAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x22
  WarBoardData_o *gameObject; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_List_object__o *v14; // x20
  Il2CppObject *Instance; // x0
  WarBoardData_o **v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  WarBoardWallData_o *Wall; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x23
  WarBoardTaskBase_TaskCallback_o *v31; // x24
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
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
  float32x2_t v55; // d0
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
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
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
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
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

  if ( (byte_4BD9ED9 & 1) == 0 )
  {
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C21E38(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C21E38(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__);
    sub_1C21E38(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__);
    sub_1C21E38(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__);
    sub_1C21E38(&WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo);
    sub_1C21E38(&WarBoardCallbackTask_TypeInfo);
    sub_1C21E38(&WarBoardConditionalJumpTask_TypeInfo);
    sub_1C21E38(&WarBoardMovePerformance_TypeInfo);
    byte_4BD9ED9 = 1;
  }
  v5 = sub_1C22084(WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass67_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass67_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_40;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 44) = squareIndex;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v5 + 16) = Instance;
  v16 = (WarBoardData_o **)(v5 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)Instance, v17, v18, v19, v20, v21, v22);
  if ( !*(_QWORD *)(v5 + 16) )
    goto LABEL_40;
  gameObject = *(WarBoardData_o **)(*(_QWORD *)(v5 + 16) + 440LL);
  if ( !gameObject )
    goto LABEL_40;
  Wall = WarBoardData__GetWall(gameObject, *(_DWORD *)(v5 + 44), 1, 0LL);
  *(_QWORD *)(v5 + 48) = Wall;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 48), (int64_t)Wall, v24, v25, v26, v27, v28, v29);
  v30 = sub_1C22084(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v30, 0LL, 0LL);
  v31 = (WarBoardTaskBase_TaskCallback_o *)sub_1C22084(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v31,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__,
    0LL);
  if ( !v30 )
    goto LABEL_40;
  *(_QWORD *)(v30 + 32) = v31;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 32), (int64_t)v31, v32, v33, v34, v35, v36, v37);
  if ( !v14 )
    goto LABEL_40;
  items = v14->fields._items;
  v45 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v14->fields._version;
  if ( !items )
    goto LABEL_40;
  size = v14->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v30,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = &items->obj.klass + size;
    v14->fields._size = size + 1;
    v47[4] = (Il2CppClass *)v30;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v47 + 4), v30, v38, v39, v40, v41, v42, v43);
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
                     0LL);
  gameObject = *(WarBoardData_o **)(v5 + 16);
  *(UnityEngine_Vector3_o *)(v5 + 32) = SquarePosition;
  if ( !gameObject )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)v55.n64_u64 = WarBoardManager__GetSquarePosition(
                                            (WarBoardManager_o *)gameObject,
                                            *(_DWORD *)(v5 + 44),
                                            0LL);
  v50.n64_u64[0] = *(unsigned __int64 *)(v5 + 32);
  v51 = *(float *)(v5 + 40);
  v53 = v52;
  v55.n64_u32[1] = v54;
  if ( !byte_4BD6BB3 )
  {
    v95 = v55.n64_u64[0];
    sub_1C21E38(&System_Math_TypeInfo);
    v55.n64_u64[0] = v95;
    byte_4BD6BB3 = 1;
  }
  v56.n64_u64[0] = vsub_f32(v55, v50).n64_u64[0];
  v57 = v53 - v51;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v58 = vaddv_f32(vmul_f32(v56, v56)) + (float)(v57 * v57);
  if ( !byte_4BD6BB4 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD6BB4 = 1;
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
    if ( !byte_4BD6BB1 )
    {
      v97 = v49.n64_u32[0];
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      v49.n64_u32[0] = v97;
      byte_4BD6BB1 = 1;
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
  v64 = sub_1C22084(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v64, 0LL, 0LL);
  v65 = (WarBoardTaskBase_TaskCallback_o *)sub_1C22084(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v65,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__,
    0LL);
  if ( !v64 )
    goto LABEL_40;
  *(_QWORD *)(v64 + 32) = v65;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v64 + 32), (int64_t)v65, v66, v67, v68, v69, v70, v71);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
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
          0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  x = v99.fields.x;
  y = v99.fields.y;
  v80 = v99.fields.z;
  v81 = (WarBoardMovePerformance_o *)sub_1C22084(WarBoardMovePerformance_TypeInfo);
  v100.fields.x = v74;
  v100.fields.y = v75;
  v100.fields.z = v76;
  v101.fields.x = x;
  v101.fields.y = y;
  v101.fields.z = v80;
  v82 = (WarBoardTaskBase_o *)v81;
  WarBoardMovePerformance___ctor(v81, v73, v100, v101, pixelPerSecond, 0, 0LL);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_40;
  *(_BYTE *)(v5 + 56) = WarBoardPieceData__IsEnabledMoveAfterAttack((WarBoardPieceData_o *)gameObject, 0LL);
  v83 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v83,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__,
    0LL);
  v84 = (WarBoardConditionalJumpTask_o *)sub_1C22084(WarBoardConditionalJumpTask_TypeInfo);
  WarBoardConditionalJumpTask___ctor(v84, v83, (WarBoardTaskBase_o *)v64, v82, 0LL);
  v91 = v14->fields._items;
  v92 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v14->fields._version;
  if ( !v91 )
    goto LABEL_40;
  v93 = v14->fields._size;
  if ( (unsigned int)v93 >= v91->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)v84,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
  }
  else
  {
    v94 = &v91->obj.klass + v93;
    v14->fields._size = v93 + 1;
    v94[4] = (Il2CppClass *)v84;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v94 + 4), (int64_t)v84, v85, v86, v87, v88, v89, v90);
  }
  gameObject = *v16;
  if ( !*v16 )
LABEL_40:
    sub_1C22094(gameObject, v7);
  WarBoardManager__AddTask_36670272(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v14,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  int64_t v5; // x23
  int64_t Instance; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t *v14; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceData_o *v16; // x22
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s11
  float v21; // s9
  float v22; // s10
  float v23; // s1
  float v24; // s2
  float v25; // s0
  float v26; // s8
  float v27; // s12
  WarBoardSquareData_o *Square; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_Generic_List_object__o *v35; // x20
  const MethodInfo *v36; // x2
  System_Int32_array *ParticipantVals; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v39; // x0
  int64_t v40; // x25
  WarBoardTaskBase_TaskCallback_c **v41; // x19
  System_Delegate_o **v42; // x26
  System_Delegate_o *v43; // x27
  WarBoardTaskBase_TaskCallback_o *v44; // x28
  System_Delegate_o *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  WarBoardPieceBaseComponent_c *v52; // x8
  WarBoardTaskBase_TaskCallback_c *v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  float v64; // s13
  float v65; // s14
  float v66; // s12
  float v67; // s8
  float x; // s14
  float y; // s13
  float z; // s15
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s12
  float v73; // s0
  float v74; // s3
  float v75; // s1
  float v76; // s2
  float v77; // s0
  float v78; // s15
  float v79; // s8
  float v80; // s13
  UnityEngine_GameObject_o *gameObject; // x0
  float pixelPerSecond; // s12
  UnityEngine_GameObject_o *v83; // x26
  WarBoardMovePerformance_o *v84; // x0
  Il2CppObject *v85; // x25
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  struct System_Object_array *v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  Il2CppClass **v95; // x0
  System_Collections_Generic_List_object__o *v96; // x25
  System_Collections_Generic_List_WarBoardTaskBase__o *v97; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v98; // x0
  float lengthMoveAttack; // s0
  float v100; // s8
  float v101; // s12
  float v102; // s13
  UnityEngine_GameObject_o *v103; // x0
  float v104; // s14
  UnityEngine_GameObject_o *v105; // x21
  WarBoardMovePerformance_o *v106; // x0
  int64_t v107; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *v108; // x21
  WarBoardMessageMaster_o *v109; // x23
  int32_t id; // w26
  System_Collections_Generic_List_object__o *v111; // x0
  int32_t breakPoint_k__BackingField; // w27
  int32_t v113; // w2
  bool v114; // w4
  WarBoardMessageMaster_o *v115; // x0
  int32_t v116; // w1
  int32_t v117; // w3
  __int64 v118; // x24
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  Il2CppObject **v125; // x22
  float lengthOnEncount; // s0
  float v127; // s1
  float v128; // s12
  float v129; // s2
  float v130; // s0
  float v131; // s8
  float v132; // s14
  float v133; // s9
  float v134; // s11
  float v135; // s15
  float v136; // s13
  float v137; // s14
  float v138; // s10
  float v139; // s12
  float v140; // s13
  float v141; // s14
  float v142; // s15
  struct UnityEngine_Vector3_StaticFields *v143; // x8
  float v144; // s1
  _QWORD *monitor; // x8
  __int64 v146; // x8
  float v147; // s10
  float ZoomSize; // s0
  __int64 v149; // x8
  __int64 v150; // x8
  __int64 v151; // x8
  const MethodInfo_376FA28 *v152; // x2
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  __int64 v154; // x8
  WarBoardManager_o *v155; // x23
  float v156; // s8
  float v157; // s10
  float encountCameraSize; // s0
  int64_t v159; // x2
  int32_t v160; // w3
  System_String_o *v161; // x4
  BattleSetupInfo_o *v162; // x5
  FollowerInfo_o *v163; // x6
  PartyListViewItem_o *v164; // x7
  struct System_Object_array *v165; // x8
  _QWORD *v166; // x9
  __int64 v167; // x10
  int64_t v168; // x1
  Il2CppClass **v169; // x0
  System_Collections_Generic_IEnumerable_T__o *v170; // x23
  int64_t v171; // x2
  int32_t v172; // w3
  System_String_o *v173; // x4
  BattleSetupInfo_o *v174; // x5
  FollowerInfo_o *v175; // x6
  PartyListViewItem_o *v176; // x7
  WarBoardTaskBase_array *v177; // x23
  WarBoardManager_o *v178; // x24
  int v179; // s0
  int64_t v182; // x2
  int32_t v183; // w3
  System_String_o *v184; // x4
  BattleSetupInfo_o *v185; // x5
  FollowerInfo_o *v186; // x6
  PartyListViewItem_o *v187; // x7
  int64_t v188; // x24
  int64_t v189; // x2
  int32_t v190; // w3
  System_String_o *v191; // x4
  BattleSetupInfo_o *v192; // x5
  FollowerInfo_o *v193; // x6
  PartyListViewItem_o *v194; // x7
  int64_t v195; // x24
  const MethodInfo *v196; // x2
  int64_t v197; // x2
  int32_t v198; // w3
  System_String_o *v199; // x4
  BattleSetupInfo_o *v200; // x5
  FollowerInfo_o *v201; // x6
  PartyListViewItem_o *v202; // x7
  int64_t v203; // x22
  WarBoardOrthostichySchedule_o *v204; // x22
  int64_t v205; // x2
  int32_t v206; // w3
  System_String_o *v207; // x4
  BattleSetupInfo_o *v208; // x5
  FollowerInfo_o *v209; // x6
  PartyListViewItem_o *v210; // x7
  WarBoardParallelSchedule_o *v211; // x21
  int64_t v212; // x2
  int32_t v213; // w3
  System_String_o *v214; // x4
  BattleSetupInfo_o *v215; // x5
  FollowerInfo_o *v216; // x6
  PartyListViewItem_o *v217; // x7
  struct System_Object_array *v218; // x8
  _QWORD *v219; // x9
  __int64 v220; // x10
  Il2CppClass **v221; // x0
  PartyOrganizationUtility_o *v222; // x0
  int64_t v223; // x1
  int64_t v224; // x2
  int32_t v225; // w3
  System_String_o *v226; // x4
  BattleSetupInfo_o *v227; // x5
  FollowerInfo_o *v228; // x6
  PartyListViewItem_o *v229; // x7
  WarBoardPieceBaseComponent___c_c *v230; // x8
  System_Action_o *_9__63_1; // x23
  Il2CppObject *v232; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v233; // x0
  int64_t v234; // x2
  int32_t v235; // w3
  System_String_o *v236; // x4
  BattleSetupInfo_o *v237; // x5
  FollowerInfo_o *v238; // x6
  PartyListViewItem_o *v239; // x7
  struct UIWidget_o **p_breakPointParent; // x23
  System_Delegate_o *breakPointParent; // x25
  WarBoardTaskBase_TaskCallback_o *v242; // x26
  System_Delegate_o *v243; // x0
  int64_t v244; // x2
  int32_t v245; // w3
  System_String_o *v246; // x4
  BattleSetupInfo_o *v247; // x5
  FollowerInfo_o *v248; // x6
  PartyListViewItem_o *v249; // x7
  WarBoardTaskBase_TaskCallback_c *v250; // x1
  int64_t v251; // x2
  int32_t v252; // w3
  System_String_o *v253; // x4
  BattleSetupInfo_o *v254; // x5
  FollowerInfo_o *v255; // x6
  PartyListViewItem_o *v256; // x7
  struct System_Object_array *v257; // x8
  _QWORD *v258; // x9
  __int64 v259; // x10
  Il2CppClass **v260; // x0
  System_Delegate_o *v261; // x23
  Il2CppObject *v262; // x22
  WarBoardTaskBase_TaskCallback_o *v263; // x24
  WarBoardPieceBaseComponent_c *v264; // x0
  WarBoardTaskBase_TaskCallback_c *v265; // x1
  System_Delegate_o *v266; // x22
  WarBoardPieceBaseComponent___c_c *v267; // x0
  WarBoardTaskBase_TaskCallback_o *_9__63_4; // x23
  Il2CppObject *v269; // x24
  struct WarBoardPieceBaseComponent___c_StaticFields *v270; // x0
  int64_t v271; // x2
  int32_t v272; // w3
  System_String_o *v273; // x4
  BattleSetupInfo_o *v274; // x5
  FollowerInfo_o *v275; // x6
  PartyListViewItem_o *v276; // x7
  WarBoardPieceBaseComponent_c *v277; // x0
  int64_t v278; // x2
  int32_t v279; // w3
  System_String_o *v280; // x4
  BattleSetupInfo_o *v281; // x5
  FollowerInfo_o *v282; // x6
  PartyListViewItem_o *v283; // x7
  WarBoardTaskBase_TaskCallback_c *v284; // x1
  __int64 v285; // x0
  float v286; // [xsp+0h] [xbp-E0h]
  float v287; // [xsp+4h] [xbp-DCh]
  float v288; // [xsp+10h] [xbp-D0h]
  float v289; // [xsp+14h] [xbp-CCh]
  WarBoardManager_o **v290; // [xsp+18h] [xbp-C8h]
  float v291; // [xsp+24h] [xbp-BCh]
  System_Nullable_float__o size; // [xsp+28h] [xbp-B8h] BYREF
  System_Nullable_Vector3__o v293; // [xsp+30h] [xbp-B0h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v295; // 0:x3.8
  System_Nullable_Vector3__o v296; // 0:x0.16
  UnityEngine_Vector3_o v297; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v298; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v299; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v300; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v301; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v302; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4BD9ED5 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C21E38(&Method_System_Nullable_Vector3___ctor__);
    sub_1C21E38(&Method_System_Nullable_float___ctor__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C21E38(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C21E38(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__);
    sub_1C21E38(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__);
    sub_1C21E38(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__);
    sub_1C21E38(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__);
    sub_1C21E38(&WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo);
    sub_1C21E38(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__);
    sub_1C21E38(&WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo);
    sub_1C21E38(&WarBoardPieceBaseComponent___c_TypeInfo);
    sub_1C21E38(&WarBoardCallbackTask_TypeInfo);
    sub_1C21E38(&WarBoardMovePerformance_TypeInfo);
    sub_1C21E38(&WarBoardOrthostichySchedule_TypeInfo);
    sub_1C21E38(&WarBoardParallelSchedule_TypeInfo);
    sub_1C21E38(&WarBoardTaskBase___TypeInfo);
    sub_1C21E38(&StringLiteral_9087/*"MasterDamage"*/);
    byte_4BD9ED5 = 1;
  }
  v5 = sub_1C22084(WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass63_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass63_0_o *)v5, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v5 )
    goto LABEL_157;
  *(_QWORD *)(v5 + 24) = Instance;
  v14 = (int64_t *)(v5 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), Instance, v8, v9, v10, v11, v12, v13);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_157;
  Instance = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 440LL);
  if ( !Instance )
    goto LABEL_157;
  Instance = (int64_t)WarBoardData__GetPiece_36484864((WarBoardData_o *)Instance, squareIndex, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_157;
  v16 = (WarBoardPieceData_o *)Instance;
  Instance = *v14;
  if ( !*v14 )
    goto LABEL_157;
  *(UnityEngine_Vector3_o *)&v17 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)Instance,
                                     pieceData->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  Instance = *v14;
  if ( !*v14 )
    goto LABEL_157;
  v20 = v17;
  v21 = v18;
  v22 = v19;
  *(UnityEngine_Vector3_o *)(&v23 - 1) = WarBoardManager__GetSquarePosition(
                                           (WarBoardManager_o *)Instance,
                                           squareIndex,
                                           0LL);
  v291 = v25;
  if ( !*v14 )
    goto LABEL_157;
  Instance = *(_QWORD *)(*v14 + 440);
  if ( !Instance )
    goto LABEL_157;
  v26 = v23;
  v27 = v24;
  Square = WarBoardData__GetSquare((WarBoardData_o *)Instance, squareIndex, 0LL);
  *(_QWORD *)(v5 + 16) = Square;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)Square, v29, v30, v31, v32, v33, v34);
  v35 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  ParticipantVals = WarBoardPieceBaseComponent__GetParticipantVals(this, v16, v36);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (int64_t)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 42, ParticipantVals, 0LL);
  if ( !v35 )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    v35,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 43, ParticipantVals, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v35,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v290 = (WarBoardManager_o **)(v5 + 24);
  v39 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 41, ParticipantVals, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v35,
    (System_Collections_Generic_IEnumerable_T__o *)v39,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v40 = sub_1C22084(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v40, 0LL, 0LL);
  if ( !v40 )
    goto LABEL_157;
  v41 = &WarBoardTaskBase_TaskCallback_TypeInfo;
  v42 = (System_Delegate_o **)(v40 + 32);
  v43 = *(System_Delegate_o **)(v40 + 32);
  v44 = (WarBoardTaskBase_TaskCallback_o *)sub_1C22084(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v44,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__,
    0LL);
  v45 = System_Delegate__Combine(v43, (System_Delegate_o *)v44, 0LL);
  v52 = (WarBoardPieceBaseComponent_c *)v45;
  if ( v45 )
  {
    v53 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v45->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_152;
    *v42 = v45;
    if ( (WarBoardTaskBase_TaskCallback_c *)v45->klass != v53 )
      goto LABEL_152;
  }
  else
  {
    *v42 = 0LL;
  }
  sub_1C21DDC((PartyOrganizationUtility_o *)(v40 + 32), (int64_t)v45, v46, v47, v48, v49, v50, v51);
  items = v35->fields._items;
  v61 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v35->fields._version;
  if ( !items )
    goto LABEL_157;
  v62 = v35->fields._size;
  if ( (unsigned int)v62 >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v35,
      (Il2CppObject *)v40,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
  }
  else
  {
    v63 = &items->obj.klass + v62;
    v35->fields._size = v62 + 1;
    v63[4] = (Il2CppClass *)v40;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v63 + 4), v40, v54, v55, v56, v57, v58, v59);
  }
  if ( !byte_4BD6BB3 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD6BB3 = 1;
  }
  v288 = v27;
  v289 = v26;
  v64 = v26 - v21;
  v65 = v291 - v20;
  v66 = v27 - v22;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4BD6BB4 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD6BB4 = 1;
  }
  Instance = (int64_t)System_Math_TypeInfo;
  v67 = sqrtf((float)(v66 * v66) + (float)((float)(v65 * v65) + (float)(v64 * v64)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v67 <= 0.00001 )
  {
    if ( !byte_4BD6BB1 )
    {
      Instance = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    x = v65 / v67;
    y = v64 / v67;
    z = v66 / v67;
  }
  if ( !v16 )
    goto LABEL_157;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant(v16, 0LL) )
    lengthOnAttack = this->fields.lengthOnEncount;
  v73 = v67 - lengthOnAttack;
  if ( (float)(v67 - lengthOnAttack) > 0.0 )
  {
    v74 = z;
    v287 = y;
    v75 = x * v73;
    v76 = y * v73;
    v77 = z * v73;
    v78 = v21;
    v79 = v20;
    v286 = v74;
    v20 = v20 + v75;
    v21 = v21 + v76;
    v80 = v22 + v77;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    pixelPerSecond = this->fields.pixelPerSecond;
    v83 = gameObject;
    v84 = (WarBoardMovePerformance_o *)sub_1C22084(WarBoardMovePerformance_TypeInfo);
    v297.fields.x = v79;
    v297.fields.y = v78;
    v297.fields.z = v22;
    v301.fields.x = v20;
    v301.fields.y = v21;
    v301.fields.z = v80;
    v85 = (Il2CppObject *)v84;
    v22 = v80;
    WarBoardMovePerformance___ctor(v84, v83, v297, v301, pixelPerSecond, 5, 0LL);
    v92 = v35->fields._items;
    v93 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v35->fields._version;
    if ( !v92 )
      goto LABEL_157;
    v94 = v35->fields._size;
    if ( (unsigned int)v94 >= v92->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v35,
        v85,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
    }
    else
    {
      v95 = &v92->obj.klass + v94;
      v35->fields._size = v94 + 1;
      v95[4] = (Il2CppClass *)v85;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v95 + 4), (int64_t)v85, v86, v87, v88, v89, v90, v91);
    }
    y = v287;
    z = v286;
  }
  v96 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v96,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (int64_t)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 1, ParticipantVals, 0LL);
  if ( !v96 )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    v96,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v97 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 19, ParticipantVals, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v96,
    (System_Collections_Generic_IEnumerable_T__o *)v97,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v98 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 39, ParticipantVals, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v96,
    (System_Collections_Generic_IEnumerable_T__o *)v98,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !WarBoardPieceData__get_isMaster(v16, 0LL) )
  {
    v118 = sub_1C22084(WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo);
    WarBoardPieceBaseComponent___c__DisplayClass63_1___ctor(
      (WarBoardPieceBaseComponent___c__DisplayClass63_1_o *)v118,
      0LL);
    if ( v118 )
    {
      *(_QWORD *)(v118 + 32) = v5;
      v125 = (Il2CppObject **)(v118 + 32);
      sub_1C21DDC((PartyOrganizationUtility_o *)(v118 + 32), v5, v119, v120, v121, v122, v123, v124);
      System_Collections_Generic_List_object___AddRange(
        v35,
        (System_Collections_Generic_IEnumerable_T__o *)v96,
        (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      lengthOnEncount = this->fields.lengthOnEncount;
      v127 = x * lengthOnEncount;
      v128 = v291 - (float)(x * lengthOnEncount);
      v129 = y * lengthOnEncount;
      v130 = z * lengthOnEncount;
      v131 = v20 + v127;
      v132 = v289 - v129;
      v133 = v21 + v129;
      v134 = v22 + v130;
      v135 = v288 - v130;
      if ( !byte_4BD6BB4 )
      {
        sub_1C21E38(&System_Math_TypeInfo);
        byte_4BD6BB4 = 1;
      }
      v136 = v128 - v131;
      v137 = v132 - v133;
      v138 = v135 - v134;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v139 = sqrtf((float)(v138 * v138) + (float)((float)(v136 * v136) + (float)(v137 * v137)));
      if ( v139 <= 0.00001 )
      {
        if ( !byte_4BD6BB1 )
        {
          sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
          byte_4BD6BB1 = 1;
        }
        v143 = UnityEngine_Vector3_TypeInfo->static_fields;
        v140 = v143->zeroVector.fields.x;
        v141 = v143->zeroVector.fields.y;
        v142 = v143->zeroVector.fields.z;
      }
      else
      {
        v140 = v136 / v139;
        v141 = v137 / v139;
        v142 = v138 / v139;
      }
      if ( !byte_4BD6BB3 )
      {
        sub_1C21E38(&System_Math_TypeInfo);
        byte_4BD6BB3 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      Instance = ((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._35_GetIconLocalPosition.method)(
                   this,
                   this->klass->vtable._36_OnShowDamagePopup.methodPtr);
      v41 = (WarBoardTaskBase_TaskCallback_c **)(v5 + 24);
      if ( *v125 )
      {
        monitor = (*v125)[1].monitor;
        if ( monitor )
        {
          v146 = monitor[6];
          if ( v146 )
          {
            Instance = *(_QWORD *)(v146 + 80);
            if ( Instance )
            {
              v147 = v144;
              ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)Instance, 0LL);
              v149 = *(_QWORD *)(v118 + 32);
              *(float *)(v118 + 16) = ZoomSize;
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
                      ScrlPos = MapScroll__GetScrlPos((MapScroll_o *)Instance, 0LL);
                      v154 = *(_QWORD *)(v118 + 32);
                      *(UnityEngine_Vector2_o *)(v118 + 20) = ScrlPos;
                      if ( v154 )
                      {
                        v155 = *(WarBoardManager_o **)(v154 + 24);
                        *(_QWORD *)&v296.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                        v156 = v131 + (float)((float)(v139 * v140) * 0.5);
                        v157 = (float)(v133 + (float)((float)(v139 * v141) * 0.5)) + v147;
                        *(_QWORD *)&v296.fields.hasValue = &v293;
                        v299.fields.x = v156;
                        v299.fields.y = v157;
                        v299.fields.z = v134 + (float)((float)(v139 * v142) * 0.5);
                        *(_QWORD *)&v293.fields.hasValue = 0LL;
                        *(_QWORD *)&v293.fields.value.fields.y = 0LL;
                        System_Nullable_Vector3____ctor(v296, v299, v152);
                        encountCameraSize = this->fields.encountCameraSize;
                        p_size = (System_Nullable_float__o)&size;
                        size = 0LL;
                        System_Nullable_float____ctor(
                          p_size,
                          encountCameraSize,
                          (const MethodInfo_376D9C4 *)Method_System_Nullable_float___ctor__);
                        if ( v155 )
                        {
                          v295 = size;
                          Instance = (int64_t)WarBoardManager__GetCameraPerformanceTask(v155, v293, v295, 1, 0, 1, 0LL);
                          v165 = v35->fields._items;
                          v166 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                          ++v35->fields._version;
                          if ( v165 )
                          {
                            v167 = v35->fields._size;
                            v168 = Instance;
                            if ( (unsigned int)v167 >= v165->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v35,
                                (Il2CppObject *)Instance,
                                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v166[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v169 = &v165->obj.klass + v167;
                              v35->fields._size = v167 + 1;
                              v169[4] = (Il2CppClass *)v168;
                              sub_1C21DDC(
                                (PartyOrganizationUtility_o *)(v169 + 4),
                                v168,
                                v159,
                                v160,
                                v161,
                                v162,
                                v163,
                                v164);
                            }
                            if ( *v125 )
                            {
                              Instance = (int64_t)(*v125)[1].monitor;
                              if ( Instance )
                              {
                                v300.fields.x = v156;
                                v300.fields.y = v157;
                                v300.fields.z = v134 + (float)((float)(v139 * v142) * 0.5);
                                Instance = (int64_t)WarBoardManager__CreateEncountkEffectTask(
                                                      (WarBoardManager_o *)Instance,
                                                      v300,
                                                      1,
                                                      0LL);
                                v230 = WarBoardPieceBaseComponent___c_TypeInfo;
                                this = (WarBoardPieceBaseComponent_o *)Instance;
                                if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
                                  v230 = WarBoardPieceBaseComponent___c_TypeInfo;
                                }
                                _9__63_1 = v230->static_fields->__9__63_1;
                                if ( !_9__63_1 )
                                {
                                  if ( !v230->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(v230);
                                    v230 = WarBoardPieceBaseComponent___c_TypeInfo;
                                  }
                                  v232 = (Il2CppObject *)v230->static_fields->__9;
                                  _9__63_1 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    _9__63_1,
                                    v232,
                                    Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__,
                                    0LL);
                                  v233 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
                                  v233->__9__63_1 = _9__63_1;
                                  sub_1C21DDC(
                                    (PartyOrganizationUtility_o *)&v233->__9__63_1,
                                    (int64_t)_9__63_1,
                                    v234,
                                    v235,
                                    v236,
                                    v237,
                                    v238,
                                    v239);
                                }
                                if ( this )
                                {
                                  this->fields.currentActionPointLabel = (struct UILabel_o *)_9__63_1;
                                  sub_1C21DDC(
                                    (PartyOrganizationUtility_o *)&this->fields.currentActionPointLabel,
                                    (int64_t)_9__63_1,
                                    v224,
                                    v225,
                                    v226,
                                    v227,
                                    v228,
                                    v229);
                                  p_breakPointParent = &this->fields.breakPointParent;
                                  breakPointParent = (System_Delegate_o *)this->fields.breakPointParent;
                                  v242 = (WarBoardTaskBase_TaskCallback_o *)sub_1C22084(WarBoardTaskBase_TaskCallback_TypeInfo);
                                  WarBoardTaskBase_TaskCallback___ctor(
                                    v242,
                                    (Il2CppObject *)v118,
                                    Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__,
                                    0LL);
                                  v243 = System_Delegate__Combine(breakPointParent, (System_Delegate_o *)v242, 0LL);
                                  v52 = (WarBoardPieceBaseComponent_c *)v243;
                                  if ( v243 )
                                  {
                                    v250 = WarBoardTaskBase_TaskCallback_TypeInfo;
                                    if ( (WarBoardTaskBase_TaskCallback_c *)v243->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
                                      goto LABEL_152;
                                    *p_breakPointParent = (struct UIWidget_o *)v243;
                                    if ( (WarBoardTaskBase_TaskCallback_c *)v243->klass != v250 )
                                      goto LABEL_152;
                                  }
                                  else
                                  {
                                    *p_breakPointParent = 0LL;
                                  }
                                  sub_1C21DDC(
                                    (PartyOrganizationUtility_o *)&this->fields.breakPointParent,
                                    (int64_t)v243,
                                    v244,
                                    v245,
                                    v246,
                                    v247,
                                    v248,
                                    v249);
                                  v257 = v35->fields._items;
                                  v258 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                                  ++v35->fields._version;
                                  if ( v257 )
                                  {
                                    v259 = v35->fields._size;
                                    if ( (unsigned int)v259 >= v257->max_length )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        v35,
                                        (Il2CppObject *)this,
                                        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v258[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v260 = &v257->obj.klass + v259;
                                      v35->fields._size = v259 + 1;
                                      v260[4] = (Il2CppClass *)this;
                                      sub_1C21DDC(
                                        (PartyOrganizationUtility_o *)(v260 + 4),
                                        (int64_t)this,
                                        v251,
                                        v252,
                                        v253,
                                        v254,
                                        v255,
                                        v256);
                                    }
                                    Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                                          v35,
                                                          0,
                                                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
                                    if ( Instance )
                                    {
                                      this = (WarBoardPieceBaseComponent_o *)(Instance + 32);
                                      v261 = *(System_Delegate_o **)(Instance + 32);
                                      v262 = *v125;
                                      v263 = (WarBoardTaskBase_TaskCallback_o *)sub_1C22084(WarBoardTaskBase_TaskCallback_TypeInfo);
                                      WarBoardTaskBase_TaskCallback___ctor(
                                        v263,
                                        v262,
                                        Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__,
                                        0LL);
                                      v264 = (WarBoardPieceBaseComponent_c *)System_Delegate__Combine(
                                                                               v261,
                                                                               (System_Delegate_o *)v263,
                                                                               0LL);
                                      v52 = v264;
                                      if ( v264 )
                                      {
                                        v265 = WarBoardTaskBase_TaskCallback_TypeInfo;
                                        if ( v264->_1.image != WarBoardTaskBase_TaskCallback_TypeInfo )
                                          goto LABEL_152;
                                        this->klass = v264;
                                        if ( v264->_1.image != v265 )
                                          goto LABEL_152;
                                      }
                                      else
                                      {
                                        this->klass = 0LL;
                                      }
                                      v222 = (PartyOrganizationUtility_o *)this;
                                      v223 = (int64_t)v52;
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
    sub_1C22094(Instance, v7);
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v100 = v20 + (float)(x * lengthMoveAttack);
  v101 = v21 + (float)(y * lengthMoveAttack);
  v102 = v22 + (float)(z * lengthMoveAttack);
  v103 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v104 = this->fields.pixelPerSecond;
  v105 = v103;
  v106 = (WarBoardMovePerformance_o *)sub_1C22084(WarBoardMovePerformance_TypeInfo);
  v298.fields.x = v100;
  v298.fields.y = v101;
  v298.fields.z = v102;
  v302.fields.x = v20;
  v302.fields.y = v21;
  v302.fields.z = v22;
  v107 = (int64_t)v106;
  WarBoardMovePerformance___ctor(v106, v105, v298, v302, v104, 4, 0LL);
  v108 = (System_Collections_Generic_List_WarBoardTaskBase__o *)WarBoardPieceData__DecrementBreakPointPerformance(
                                                                  v16,
                                                                  0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  v41 = (WarBoardTaskBase_TaskCallback_c **)(v5 + 24);
  if ( !*v290 )
    goto LABEL_157;
  v109 = (WarBoardMessageMaster_o *)Instance;
  Instance = (int64_t)(*v290)->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_157;
  id = WarBoardData__get_id((WarBoardData_o *)Instance, 0LL);
  v111 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v111,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  breakPoint_k__BackingField = v16->fields._breakPoint_k__BackingField;
  Instance = WarBoardPieceData__get_isPlayerMaster(v16, 0LL);
  if ( !v109 )
    goto LABEL_157;
  if ( (Instance & 1) != 0 )
  {
    v113 = 11;
    v114 = 1;
    v115 = v109;
    v116 = id;
    v117 = breakPoint_k__BackingField;
  }
  else
  {
    v113 = 9;
    v115 = v109;
    v116 = id;
    v117 = breakPoint_k__BackingField;
    v114 = 0;
  }
  Instance = (int64_t)WarBoardMessageMaster__GetMessageTasks(v115, v116, v113, v117, v114, 0LL);
  v170 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( !Instance )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Instance,
    (System_Collections_Generic_IEnumerable_T__o *)v96,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v170,
         (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_object___AddRange(
      v35,
      v170,
      (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = sub_1C21EE0(WarBoardTaskBase___TypeInfo, 5LL);
  if ( !Instance )
    goto LABEL_157;
  v177 = (WarBoardTaskBase_array *)Instance;
  if ( v107 )
  {
    Instance = sub_1C21F74(v107, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
    if ( !Instance )
      goto LABEL_159;
  }
  if ( !v177->max_length )
    goto LABEL_158;
  v177->m_Items[0] = (WarBoardTaskBase_o *)v107;
  sub_1C21DDC((PartyOrganizationUtility_o *)v177->m_Items, v107, v171, v172, v173, v174, v175, v176);
  Instance = (int64_t)v16->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_157;
  v178 = *v290;
  Instance = (*(__int64 (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 856LL))(
               Instance,
               *(_QWORD *)(*(_QWORD *)Instance + 864LL));
  if ( !v178 )
    goto LABEL_157;
  Instance = (int64_t)WarBoardManager__CreateAttackEffectTask(v178, *(UnityEngine_Vector3_o *)&v179, 0, 0LL);
  v188 = Instance;
  if ( Instance )
  {
    Instance = sub_1C21F74(Instance, v177->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( v177->max_length <= 1 )
    goto LABEL_158;
  v177->m_Items[1] = (WarBoardTaskBase_o *)v188;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v177->m_Items[1], v188, v182, v183, v184, v185, v186, v187);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (int64_t)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0LL);
  v195 = Instance;
  if ( Instance )
  {
    Instance = sub_1C21F74(Instance, v177->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( v177->max_length <= 2 )
    goto LABEL_158;
  v177->m_Items[2] = (WarBoardTaskBase_o *)v195;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v177->m_Items[2], v195, v189, v190, v191, v192, v193, v194);
  Instance = (int64_t)v16->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_157;
  Instance = (int64_t)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)Instance,
                        (System_String_o *)StringLiteral_9087/*"MasterDamage"*/,
                        v196);
  v203 = Instance;
  if ( Instance )
  {
    Instance = sub_1C21F74(Instance, v177->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( v177->max_length <= 3 )
    goto LABEL_158;
  v177->m_Items[3] = (WarBoardTaskBase_o *)v203;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v177->m_Items[3], v203, v197, v198, v199, v200, v201, v202);
  v204 = (WarBoardOrthostichySchedule_o *)sub_1C22084(WarBoardOrthostichySchedule_TypeInfo);
  WarBoardOrthostichySchedule___ctor_36870952(v204, v108, 0LL);
  if ( v204 )
  {
    Instance = sub_1C21F74(v204, v177->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_159:
      v285 = sub_1C220B8();
      sub_1C21F60(v285, 0LL);
    }
  }
  if ( v177->max_length <= 4 )
LABEL_158:
    sub_1C2209C(Instance, v7);
  v177->m_Items[4] = (WarBoardTaskBase_o *)v204;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v177->m_Items[4], (int64_t)v204, v205, v206, v207, v208, v209, v210);
  v211 = (WarBoardParallelSchedule_o *)sub_1C22084(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor(v211, v177, 0LL);
  v218 = v35->fields._items;
  v219 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v35->fields._version;
  if ( !v218 )
    goto LABEL_157;
  v220 = v35->fields._size;
  if ( (unsigned int)v220 >= v218->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v35,
      (Il2CppObject *)v211,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v219[4] + 192LL) + 112LL));
    goto LABEL_141;
  }
  v221 = &v218->obj.klass + v220;
  v35->fields._size = v220 + 1;
  v221[4] = (Il2CppClass *)v211;
  v222 = (PartyOrganizationUtility_o *)(v221 + 4);
  v223 = (int64_t)v211;
LABEL_140:
  sub_1C21DDC(v222, v223, v212, v213, v214, v215, v216, v217);
LABEL_141:
  if ( v35->fields._size < 1 )
    return;
  Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v35,
                        0,
                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
  if ( !Instance )
    goto LABEL_157;
  this = (WarBoardPieceBaseComponent_o *)(Instance + 32);
  v266 = *(System_Delegate_o **)(Instance + 32);
  v267 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v267 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  _9__63_4 = v267->static_fields->__9__63_4;
  if ( !_9__63_4 )
  {
    if ( !v267->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v267);
      v267 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    v269 = (Il2CppObject *)v267->static_fields->__9;
    _9__63_4 = (WarBoardTaskBase_TaskCallback_o *)sub_1C22084(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(_9__63_4, v269, Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__, 0LL);
    v270 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v270->__9__63_4 = _9__63_4;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v270->__9__63_4, (int64_t)_9__63_4, v271, v272, v273, v274, v275, v276);
  }
  v277 = (WarBoardPieceBaseComponent_c *)System_Delegate__Combine(v266, (System_Delegate_o *)_9__63_4, 0LL);
  v52 = v277;
  if ( !v277 )
    goto LABEL_153;
  v284 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( v277->_1.image != WarBoardTaskBase_TaskCallback_TypeInfo || (this->klass = v277, v277->_1.image != v284) )
  {
LABEL_152:
    sub_1C22354(v52);
LABEL_153:
    this->klass = v52;
  }
  sub_1C21DDC((PartyOrganizationUtility_o *)this, (int64_t)v52, v278, v279, v280, v281, v282, v283);
  Instance = (int64_t)*v41;
  if ( !*v41 )
    goto LABEL_157;
  WarBoardManager__AddTask_36670272(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v35,
    0LL);
}


void __fastcall WarBoardPieceBaseComponent__OnAttackResume(
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

  if ( (byte_4BD9ED6 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C21E38(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4BD9ED6 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v7 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_27;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_36484864(Instance, squareIndex, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_27;
  v9 = (WarBoardPieceData_o *)Instance;
  SquarePosition = WarBoardManager__GetSquarePosition(v7, pieceData->fields._nowSquareIndex_k__BackingField, 0LL);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v28 = WarBoardManager__GetSquarePosition(v7, squareIndex, 0LL);
  v13 = v28.fields.x;
  v14 = v28.fields.y;
  v15 = v28.fields.z;
  if ( !byte_4BD6BB3 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD6BB3 = 1;
  }
  v26 = x;
  v16 = v13 - x;
  v17 = v14 - y;
  v18 = v15 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4BD6BB4 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD6BB4 = 1;
  }
  Instance = (WarBoardData_o *)System_Math_TypeInfo;
  v19 = sqrtf((float)(v18 * v18) + (float)((float)(v16 * v16) + (float)(v17 * v17)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v19 <= 0.00001 )
  {
    if ( !byte_4BD6BB1 )
    {
      Instance = (WarBoardData_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
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
  if ( WarBoardPieceData__get_isServant(v9, 0LL) )
    lengthOnAttack = this->fields.lengthOnEncount;
  Instance = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance
    || (Instance = (WarBoardData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL)) == 0LL )
  {
LABEL_27:
    sub_1C22094(Instance, v6);
  }
  v29.fields.x = v26 + (float)(v20 * (float)(v19 - lengthOnAttack));
  v29.fields.y = y + (float)(v21 * (float)(v19 - lengthOnAttack));
  v29.fields.z = z + (float)(v22 * (float)(v19 - lengthOnAttack));
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v29, 0LL);
  v25 = WarBoardControlUiDataComponent_TypeInfo;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__SetUiDataOnBattleAll((const MethodInfo *)v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnBreak(
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
  const MethodInfo_376FA28 *v16; // x2
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  WarBoardPieceBaseComponent_o *v26; // x1
  Il2CppClass **v27; // x0
  WarBoardTaskBase_array *v28; // x26
  Il2CppObject *v29; // x27
  const MethodInfo_376FA28 *v30; // x2
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  WarBoardPieceBaseComponent_o *v37; // x24
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v39; // x24
  struct WarBoardBreakPointComponent_array *breakPoints; // x10
  __int64 v41; // x0
  System_Nullable_Vector3__o v42; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v43; // 0:x3.8
  System_Nullable_float__o v44; // 0:x3.8
  System_Nullable_Vector3__o v45; // 0:x0.16
  System_Nullable_Vector3__o v46; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  v14 = this;
  if ( (byte_4BD9EDD & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C21E38(&Method_System_Nullable_Vector3___ctor__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardPieceBaseComponent_o *)sub_1C21E38(&WarBoardTaskBase___TypeInfo);
    byte_4BD9EDD = 1;
  }
  if ( cameraMove )
  {
    this = (WarBoardPieceBaseComponent_o *)v14->fields.pieceData;
    if ( !this )
      goto LABEL_32;
    this = (WarBoardPieceBaseComponent_o *)WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( taskList )
      {
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0LL);
        if ( this )
        {
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
          *(_QWORD *)&v45.fields.hasValue = &v42;
          *(_QWORD *)&v42.fields.hasValue = 0LL;
          *(_QWORD *)&v42.fields.value.fields.y = 0LL;
          *(_QWORD *)&v45.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v45, localPosition, v16);
          if ( Instance )
          {
            v43 = cameraSize;
            this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                     (WarBoardManager_o *)Instance,
                                                     v42,
                                                     v43,
                                                     1,
                                                     0,
                                                     1,
                                                     0LL);
            items = taskList->fields._items;
            v24 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
            ++taskList->fields._version;
            if ( items )
            {
              size = taskList->fields._size;
              v26 = this;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)taskList,
                  (Il2CppObject *)this,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
              }
              else
              {
                v27 = &items->obj.klass + size;
                taskList->fields._size = size + 1;
                v27[4] = (Il2CppClass *)v26;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v27 + 4), (int64_t)v26, v17, v18, v19, v20, v21, v22);
              }
              goto LABEL_21;
            }
          }
        }
      }
      else
      {
        v28 = (WarBoardTaskBase_array *)sub_1C21EE0(WarBoardTaskBase___TypeInfo, 1LL);
        v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0LL);
        if ( this )
        {
          v48 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
          *(_QWORD *)&v46.fields.hasValue = &v42;
          v42 = (System_Nullable_Vector3__o)0LL;
          *(_QWORD *)&v46.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v46, v48, v30);
          if ( v29 )
          {
            v44 = cameraSize;
            this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                     (WarBoardManager_o *)v29,
                                                     v42,
                                                     v44,
                                                     1,
                                                     0,
                                                     1,
                                                     0LL);
            if ( v28 )
            {
              v37 = this;
              if ( this )
              {
                this = (WarBoardPieceBaseComponent_o *)sub_1C21F74(this, v28->obj.klass->_1.element_class);
                if ( !this )
                {
                  v41 = sub_1C220B8();
                  sub_1C21F60(v41, 0LL);
                }
              }
              if ( !v28->max_length )
LABEL_34:
                sub_1C2209C(this, *(_QWORD *)&oldBreakPoint);
              v28->m_Items[0] = (WarBoardTaskBase_o *)v37;
              sub_1C21DDC((PartyOrganizationUtility_o *)v28->m_Items, (int64_t)v37, v31, v32, v33, v34, v35, v36);
              if ( Instance )
              {
                WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v28, 0LL);
                goto LABEL_21;
              }
            }
          }
        }
      }
LABEL_32:
      sub_1C22094(this, *(_QWORD *)&oldBreakPoint);
    }
  }
LABEL_21:
  pieceData = v14->fields.pieceData;
  if ( !pieceData )
    goto LABEL_32;
  v39 = 0LL;
  if ( dummyPoint < 0 )
    dummyPoint = pieceData->fields._breakPoint_k__BackingField;
  while ( (int)v39 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v14->fields.breakPoints;
    if ( !breakPoints )
      goto LABEL_32;
    if ( (unsigned int)v39 >= breakPoints->max_length )
      goto LABEL_34;
    this = (WarBoardPieceBaseComponent_o *)breakPoints->m_Items[v39];
    if ( this )
    {
      if ( (int)v39 >= oldBreakPoint || dummyPoint > (int)v39 )
      {
        WarBoardBreakPointComponent__SetActive(
          (WarBoardBreakPointComponent_o *)this,
          dummyPoint > (int)v39,
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
        startCallback = 0LL;
      }
      pieceData = v14->fields.pieceData;
      ++v39;
      if ( pieceData )
        continue;
    }
    goto LABEL_32;
  }
}


void __fastcall WarBoardPieceBaseComponent__OnDamage(
        WarBoardPieceBaseComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardPieceBaseComponent__OnDead(
        WarBoardPieceBaseComponent_o *this,
        System_Nullable_float__o cameraSize,
        WarBoardManager_TaskList_o *taskList,
        bool cameraMove,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C22094(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__OnDeselect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  int32_t dispPriotiry; // w20
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1
  int v6; // w8
  const MethodInfo *v7; // x2

  if ( (byte_4BD9ED2 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4BD9ED2 = 1;
  }
  dispPriotiry = this->fields.dispPriotiry;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1C22094(Instance, v5);
  v6 = dispPriotiry - WarBoardData__GetPieceMaxDispPriotiry(Instance, 0LL);
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * v6, v7);
}


void __fastcall WarBoardPieceBaseComponent__OnGuts(
        WarBoardPieceBaseComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardPieceBaseComponent__OnInvincible(
        WarBoardPieceBaseComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardPieceBaseComponent__OnMapDamage(
        WarBoardPieceBaseComponent_o *this,
        int32_t damage,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardPieceBaseComponent__OnMapGainHP(
        WarBoardPieceBaseComponent_o *this,
        int32_t oldHp,
        int32_t gainHp,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnMove(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardTaskBase_TaskCallback_o *v3; // x29
  WarBoardTaskBase_TaskCallback_c **v4; // x22
  __int64 v6; // x19
  WarBoardPieceData_o *Instance; // x0
  WarBoardPieceData_o *v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  WarBoardPieceData_o **v15; // x20
  WarBoardPieceData_o *Piece_36484864; // x0
  WarBoardPieceData_o **v17; // x23
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x8
  WarBoardSquareData_o *Square; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x25
  System_Collections_Generic_List_object__o *v33; // x24
  System_Delegate_o *v34; // x26
  WarBoardTaskBase_TaskCallback_o *v35; // x27
  System_Delegate_o *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x8
  WarBoardTaskBase_TaskCallback_c *v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t groupId_k__BackingField; // w9
  __int64 v53; // x29
  struct WarBoardPieceData_o *v54; // x8
  UnityEngine_GameObject_o *v55; // x26
  float v56; // s0
  float v57; // s1
  float v58; // s2
  float v59; // s8
  float v60; // s9
  float v61; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float z; // s14
  WarBoardMovePerformance_o *v66; // x0
  int64_t v67; // x27
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  WarBoardTaskBase_array *v74; // x26
  UnityEngine_GameObject_o *v75; // x27
  float v76; // s0
  float v77; // s1
  float v78; // s2
  struct WarBoardPieceData_o *v79; // x8
  float v80; // s8
  float v81; // s9
  float v82; // s10
  float v83; // s13
  float v84; // s11
  float v85; // s12
  float v86; // s14
  WarBoardMovePerformance_o *v87; // x0
  int64_t v88; // x28
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  System_Delegate_o *v101; // x27
  WarBoardTaskBase_TaskCallback_o *v102; // x28
  System_Delegate_o *v103; // x0
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  WarBoardTaskBase_TaskCallback_c *v110; // x1
  System_Delegate_o *v111; // x28
  System_Delegate_o *v112; // x0
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  WarBoardTaskBase_TaskCallback_c *v119; // x1
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  struct System_Object_array *items; // x8
  _QWORD *v127; // x9
  __int64 size; // x10
  Il2CppClass **v129; // x0
  struct WarBoardPieceData_o *v130; // x8
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  struct System_Object_array *v137; // x8
  _QWORD *v138; // x9
  __int64 v139; // x10
  Il2CppClass **v140; // x0
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  struct System_Object_array *v147; // x8
  _QWORD *v148; // x9
  __int64 v149; // x10
  Il2CppClass **v150; // x0
  System_Collections_Generic_List_object__o *v151; // x22
  System_Int32_array *PieceEventVals; // x0
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  System_Int32_array *v159; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v161; // x0
  WarBoardManager_o *v162; // x20
  WarBoardTaskBase_array *v163; // x21
  int64_t v164; // x22
  WarBoardTaskBase_TaskCallback_o *v165; // x23
  int64_t v166; // x2
  int32_t v167; // w3
  System_String_o *v168; // x4
  BattleSetupInfo_o *v169; // x5
  FollowerInfo_o *v170; // x6
  PartyListViewItem_o *v171; // x7
  int64_t v172; // x2
  int32_t v173; // w3
  System_String_o *v174; // x4
  BattleSetupInfo_o *v175; // x5
  FollowerInfo_o *v176; // x6
  PartyListViewItem_o *v177; // x7
  __int64 v178; // x0
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v180; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v181; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v182; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v183; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v184; // 0:s3.4,4:s4.4,8:s5.4

  LODWORD(v4) = squareIndex;
  if ( (byte_4BD9ED3 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C21E38(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C21E38(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__);
    sub_1C21E38(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__);
    sub_1C21E38(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__);
    sub_1C21E38(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__);
    sub_1C21E38(&WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo);
    sub_1C21E38(&WarBoardCallbackTask_TypeInfo);
    sub_1C21E38(&WarBoardMovePerformance_TypeInfo);
    sub_1C21E38(&WarBoardParallelSchedule_TypeInfo);
    sub_1C21E38(&WarBoardTaskBase___TypeInfo);
    byte_4BD9ED3 = 1;
  }
  v6 = sub_1C22084(WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass61_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass61_0_o *)v6, 0LL);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v6 )
    goto LABEL_83;
  *(_QWORD *)(v6 + 48) = Instance;
  v15 = (WarBoardPieceData_o **)(v6 + 48);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 48), (int64_t)Instance, v9, v10, v11, v12, v13, v14);
  if ( !*(_QWORD *)(v6 + 48) )
    goto LABEL_83;
  Instance = *(WarBoardPieceData_o **)(*(_QWORD *)(v6 + 48) + 440LL);
  if ( !Instance )
    goto LABEL_83;
  Piece_36484864 = WarBoardData__GetPiece_36484864((WarBoardData_o *)Instance, (int32_t)v4, 0LL);
  *(_QWORD *)(v6 + 40) = Piece_36484864;
  v17 = (WarBoardPieceData_o **)(v6 + 40);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)Piece_36484864, v18, v19, v20, v21, v22, v23);
  v24 = *(_QWORD *)(v6 + 48);
  if ( !v24 )
    goto LABEL_83;
  Instance = *(WarBoardPieceData_o **)(v24 + 440);
  if ( !Instance )
    goto LABEL_83;
  Square = WarBoardData__GetSquare((WarBoardData_o *)Instance, (int32_t)v4, 0LL);
  *(_QWORD *)(v6 + 16) = Square;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 16), (int64_t)Square, v26, v27, v28, v29, v30, v31);
  v32 = sub_1C22084(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v32, 0LL, 0LL);
  if ( !v32 )
    goto LABEL_83;
  v33 = (System_Collections_Generic_List_object__o *)(v32 + 32);
  v34 = *(System_Delegate_o **)(v32 + 32);
  v35 = (WarBoardTaskBase_TaskCallback_o *)sub_1C22084(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v35,
    (Il2CppObject *)v6,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__,
    0LL);
  v36 = System_Delegate__Combine(v34, (System_Delegate_o *)v35, 0LL);
  v43 = (int64_t)v36;
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
    v33->klass = 0LL;
  }
  sub_1C21DDC((PartyOrganizationUtility_o *)(v32 + 32), (int64_t)v36, v37, v38, v39, v40, v41, v42);
  Instance = (WarBoardPieceData_o *)sub_1C21EE0(int___TypeInfo, 2LL);
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
    sub_1C2209C(Instance, v8);
  }
  Instance->fields._currentActionCount_k__BackingField = (int)v4;
  *(_QWORD *)(v6 + 24) = Instance;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 24), (int64_t)Instance, v45, v46, v47, v48, v49, v50);
  v33 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v53 = *(_QWORD *)(v6 + 40);
  Instance = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v54 = this->fields.pieceData;
  if ( !v54 )
    goto LABEL_83;
  v55 = (UnityEngine_GameObject_o *)Instance;
  Instance = *(WarBoardPieceData_o **)(v6 + 48);
  if ( !Instance )
    goto LABEL_83;
  *(UnityEngine_Vector3_o *)&v56 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)Instance,
                                     v54->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  Instance = *v15;
  if ( !*v15 )
    goto LABEL_83;
  v59 = v56;
  v60 = v57;
  v61 = v58;
  SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, (int32_t)v4, 0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v66 = (WarBoardMovePerformance_o *)sub_1C22084(WarBoardMovePerformance_TypeInfo);
  v180.fields.x = v59;
  v180.fields.y = v60;
  v180.fields.z = v61;
  v183.fields.x = x;
  v183.fields.y = y;
  v183.fields.z = z;
  v67 = (int64_t)v66;
  WarBoardMovePerformance___ctor(v66, v55, v180, v183, pixelPerSecond, 0, 0LL);
  if ( v53 )
  {
    Instance = (WarBoardPieceData_o *)sub_1C21EE0(WarBoardTaskBase___TypeInfo, 3LL);
    if ( !Instance )
      goto LABEL_83;
    v74 = (WarBoardTaskBase_array *)Instance;
    if ( v67 )
    {
      Instance = (WarBoardPieceData_o *)sub_1C21F74(v67, Instance->klass->_1.element_class);
      if ( !Instance )
        goto LABEL_85;
    }
    if ( !v74->max_length )
      goto LABEL_84;
    v74->m_Items[0] = (WarBoardTaskBase_o *)v67;
    sub_1C21DDC((PartyOrganizationUtility_o *)v74->m_Items, v67, v68, v69, v70, v71, v72, v73);
    Instance = *v17;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( *v17 )
    {
      Instance = (WarBoardPieceData_o *)WarBoardPieceData__get_gameObject(Instance, 0LL);
      if ( *v15 )
      {
        v75 = (UnityEngine_GameObject_o *)Instance;
        *(UnityEngine_Vector3_o *)&v76 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)*v15, (int32_t)v4, 0LL);
        v79 = this->fields.pieceData;
        if ( v79 )
        {
          Instance = *v15;
          if ( *v15 )
          {
            v80 = v76;
            v81 = v77;
            v82 = v78;
            v181 = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     v79->fields._nowSquareIndex_k__BackingField,
                     0LL);
            v83 = this->fields.pixelPerSecond;
            v84 = v181.fields.x;
            v85 = v181.fields.y;
            v86 = v181.fields.z;
            v87 = (WarBoardMovePerformance_o *)sub_1C22084(WarBoardMovePerformance_TypeInfo);
            v182.fields.x = v80;
            v182.fields.y = v81;
            v182.fields.z = v82;
            v184.fields.x = v84;
            v184.fields.y = v85;
            v184.fields.z = v86;
            v88 = (int64_t)v87;
            WarBoardMovePerformance___ctor(v87, v75, v182, v184, v83, 0, 0LL);
            if ( !v88 || (Instance = (WarBoardPieceData_o *)sub_1C21F74(v88, v74->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v74->max_length <= 1 )
                goto LABEL_84;
              v74->m_Items[1] = (WarBoardTaskBase_o *)v88;
              sub_1C21DDC((PartyOrganizationUtility_o *)&v74->m_Items[1], v88, v89, v90, v91, v92, v93, v94);
              Instance = (WarBoardPieceData_o *)sub_1C21F74(v32, v74->obj.klass->_1.element_class);
              if ( Instance )
              {
                if ( v74->max_length <= 2 )
                  goto LABEL_84;
                v74->m_Items[2] = (WarBoardTaskBase_o *)v32;
                sub_1C21DDC((PartyOrganizationUtility_o *)&v74->m_Items[2], v32, v95, v96, v97, v98, v99, v100);
                v32 = sub_1C22084(WarBoardParallelSchedule_TypeInfo);
                WarBoardParallelSchedule___ctor((WarBoardParallelSchedule_o *)v32, v74, 0LL);
                if ( !v32 )
                  goto LABEL_83;
                v34 = (System_Delegate_o *)(v32 + 40);
                v101 = *(System_Delegate_o **)(v32 + 40);
                v102 = (WarBoardTaskBase_TaskCallback_o *)sub_1C22084(WarBoardTaskBase_TaskCallback_TypeInfo);
                WarBoardTaskBase_TaskCallback___ctor(
                  v102,
                  (Il2CppObject *)v6,
                  Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__,
                  0LL);
                v103 = System_Delegate__Combine(v101, (System_Delegate_o *)v102, 0LL);
                v43 = (int64_t)v103;
                if ( !v103 )
                  goto LABEL_45;
                v110 = WarBoardTaskBase_TaskCallback_TypeInfo;
                if ( (WarBoardTaskBase_TaskCallback_c *)v103->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
                {
                  v34->klass = (System_Delegate_c *)v103;
                  if ( (WarBoardTaskBase_TaskCallback_c *)v103->klass == v110 )
                  {
LABEL_46:
                    sub_1C21DDC((PartyOrganizationUtility_o *)v34, v43, v104, v105, v106, v107, v108, v109);
                    if ( !v33 )
                      goto LABEL_83;
                    items = v33->fields._items;
                    v127 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                    ++v33->fields._version;
                    if ( !items )
                      goto LABEL_83;
                    size = v33->fields._size;
                    if ( (unsigned int)size >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v33,
                        (Il2CppObject *)v32,
                        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v129 = &items->obj.klass + size;
                      v33->fields._size = size + 1;
                      v129[4] = (Il2CppClass *)v32;
                      sub_1C21DDC((PartyOrganizationUtility_o *)(v129 + 4), v32, v120, v121, v122, v123, v124, v125);
                    }
                    v130 = this->fields.pieceData;
                    if ( !v130 )
                      goto LABEL_83;
                    Instance = *v17;
                    if ( !*v17 )
                      goto LABEL_83;
                    WarBoardPieceData__SetSquareIndex(Instance, v130->fields._nowSquareIndex_k__BackingField, 0LL);
                    goto LABEL_64;
                  }
                }
LABEL_44:
                sub_1C22354(v43);
LABEL_45:
                v34->klass = (System_Delegate_c *)v43;
                goto LABEL_46;
              }
            }
LABEL_85:
            v178 = sub_1C220B8();
            sub_1C21F60(v178, 0LL);
          }
        }
      }
    }
LABEL_83:
    sub_1C22094(Instance, v8);
  }
  if ( !v67 )
    goto LABEL_83;
  v17 = (WarBoardPieceData_o **)(unsigned int)v4;
  v34 = (System_Delegate_o *)(v67 + 40);
  v111 = *(System_Delegate_o **)(v67 + 40);
  v4 = &WarBoardTaskBase_TaskCallback_TypeInfo;
  v3 = (WarBoardTaskBase_TaskCallback_o *)sub_1C22084(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v3,
    (Il2CppObject *)v6,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__,
    0LL);
  v112 = System_Delegate__Combine(v111, (System_Delegate_o *)v3, 0LL);
  v43 = (int64_t)v112;
  if ( v112 )
  {
    v119 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v112->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_44;
    v34->klass = (System_Delegate_c *)v112;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    LODWORD(v4) = (_DWORD)v17;
    if ( (WarBoardTaskBase_TaskCallback_c *)v112->klass != v119 )
      goto LABEL_44;
  }
  else
  {
    v34->klass = 0LL;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    LODWORD(v4) = (_DWORD)v17;
  }
  sub_1C21DDC((PartyOrganizationUtility_o *)(v67 + 40), (int64_t)v112, v113, v114, v115, v116, v117, v118);
  v17 = (WarBoardPieceData_o **)(v6 + 40);
  if ( !v33 )
    goto LABEL_83;
  v137 = v33->fields._items;
  v138 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v33->fields._version;
  if ( !v137 )
    goto LABEL_83;
  v139 = v33->fields._size;
  if ( (unsigned int)v139 >= v137->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)v67,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
  }
  else
  {
    v140 = &v137->obj.klass + v139;
    v33->fields._size = v139 + 1;
    v140[4] = (Il2CppClass *)v67;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v140 + 4), v67, v131, v132, v133, v134, v135, v136);
  }
  v147 = v33->fields._items;
  v148 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v33->fields._version;
  if ( !v147 )
    goto LABEL_83;
  v149 = v33->fields._size;
  if ( (unsigned int)v149 >= v147->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)v32,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
  }
  else
  {
    v150 = &v147->obj.klass + v149;
    v33->fields._size = v149 + 1;
    v150[4] = (Il2CppClass *)v32;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v150 + 4), v32, v141, v142, v143, v144, v145, v146);
  }
LABEL_64:
  Instance = this->fields.pieceData;
  if ( !Instance )
    goto LABEL_83;
  WarBoardPieceData__SetSquareIndex(Instance, (int32_t)v4, 0LL);
  v151 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v151,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = this->fields.pieceData;
  if ( !Instance )
    goto LABEL_83;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(Instance, 0LL);
  *(_QWORD *)(v6 + 32) = PieceEventVals;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)PieceEventVals, v153, v154, v155, v156, v157, v158);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                      (WarBoardManager_o *)Instance,
                                      30,
                                      *(System_Int32_array **)(v6 + 32),
                                      0LL);
  if ( !v151 )
    goto LABEL_83;
  System_Collections_Generic_List_object___AddRange(
    v151,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( *v17 )
  {
    v159 = WarBoardPieceData__CreatePieceEventVals(*v17, 0LL);
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 30, v159, 0LL);
    System_Collections_Generic_List_object___AddRange(
      v151,
      (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
      (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  v161 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 36, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v151,
    (System_Collections_Generic_IEnumerable_T__o *)v161,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v151,
         (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    Instance = *v15;
    if ( !*v15 )
      goto LABEL_83;
    WarBoardManager__AddTask_36670272(
      (WarBoardManager_o *)Instance,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v151,
      0LL);
  }
  Instance = *v15;
  if ( !*v15 )
    goto LABEL_83;
  WarBoardManager__AddTask_36670272(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v33,
    0LL);
  v162 = *(WarBoardManager_o **)(v6 + 48);
  v163 = (WarBoardTaskBase_array *)sub_1C21EE0(WarBoardTaskBase___TypeInfo, 1LL);
  v164 = sub_1C22084(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v164, 0LL, 0LL);
  v165 = (WarBoardTaskBase_TaskCallback_o *)sub_1C22084(v3->klass);
  WarBoardTaskBase_TaskCallback___ctor(
    v165,
    (Il2CppObject *)v6,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__,
    0LL);
  if ( !v164 )
    goto LABEL_83;
  *(_QWORD *)(v164 + 32) = v165;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v164 + 32), (int64_t)v165, v166, v167, v168, v169, v170, v171);
  if ( !v163 )
    goto LABEL_83;
  Instance = (WarBoardPieceData_o *)sub_1C21F74(v164, v163->obj.klass->_1.element_class);
  if ( !Instance )
    goto LABEL_85;
  if ( !v163->max_length )
    goto LABEL_84;
  v163->m_Items[0] = (WarBoardTaskBase_o *)v164;
  sub_1C21DDC((PartyOrganizationUtility_o *)v163->m_Items, v164, v172, v173, v174, v175, v176, v177);
  if ( !v162 )
    goto LABEL_83;
  WarBoardManager__AddTask(v162, 0, v163, 0LL);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  WarBoardManager__JudgmentGameSet((WarBoardManager_o *)Instance, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__OnRevive(
        WarBoardPieceBaseComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C22094(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__OnSelect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1
  int v5; // w8
  const MethodInfo *v6; // x2

  if ( (byte_4BD9ED1 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4BD9ED1 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1C22094(Instance, v4);
  v5 = WarBoardData__GetPieceMaxDispPriotiry(Instance, 0LL) - this->fields.dispPriotiry;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * v5, v6);
}


void __fastcall WarBoardPieceBaseComponent__OnShowDamagePopup(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *popText,
        int32_t popTextColor,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  System_String_o *v8; // x1
  int32_t v9; // w3
  const MethodInfo *v10; // x5

  if ( (byte_4BD9EDF & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_19151/*"ef_dm_base"*/);
    byte_4BD9EDF = 1;
  }
  if ( !System_String__IsNullOrEmpty(popText, 0LL) )
    WarBoardPieceBaseComponent__CreateEffectText(this, v8, popText, v9, taskList, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnWallAttack(
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
  float v14; // s0
  float v15; // s1
  float v16; // s2
  float v17; // s11
  float v18; // s9
  float v19; // s13
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_List_object__o *v26; // x20
  int64_t v27; // x24
  _QWORD *v28; // x25
  System_Delegate_o *v29; // x26
  WarBoardTaskBase_TaskCallback_o *v30; // x27
  System_Delegate_o *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x8
  WarBoardTaskBase_TaskCallback_c *v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  float v50; // s12
  float v51; // s14
  float v52; // s8
  float v53; // s9
  float v54; // s11
  float v55; // s13
  float v56; // s1
  float v57; // s2
  float v58; // s9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v60; // s0
  float v61; // s8
  float v62; // s11
  float v63; // s12
  float v64; // s15
  float v65; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  float pixelPerSecond; // s14
  UnityEngine_GameObject_o *v68; // x24
  WarBoardMovePerformance_o *v69; // x0
  Il2CppObject *v70; // x23
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x0
  float lengthMoveAttack; // s0
  float v82; // s1
  float v83; // s2
  float v84; // s0
  float v85; // s8
  float v86; // s9
  float v87; // s10
  UnityEngine_GameObject_o *v88; // x0
  float v89; // s14
  UnityEngine_GameObject_o *v90; // x22
  WarBoardMovePerformance_o *v91; // x0
  int64_t v92; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *v93; // x22
  System_Collections_Generic_List_object__o *v94; // x23
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  WarBoardTaskBase_array *v101; // x23
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  int64_t v108; // x21
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  int64_t v115; // x21
  WarBoardOrthostichySchedule_o *v116; // x21
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  WarBoardParallelSchedule_o *v123; // x21
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  struct System_Object_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  Il2CppClass **v133; // x0
  __int64 v134; // x0
  float v135; // [xsp+8h] [xbp-A8h]
  float v136; // [xsp+Ch] [xbp-A4h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v138; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v139; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o IconPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v141; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v142; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4BD9ED8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C21E38(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C21E38(&Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__);
    sub_1C21E38(&WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo);
    sub_1C21E38(&WarBoardCallbackTask_TypeInfo);
    sub_1C21E38(&WarBoardMovePerformance_TypeInfo);
    sub_1C21E38(&WarBoardOrthostichySchedule_TypeInfo);
    sub_1C21E38(&WarBoardParallelSchedule_TypeInfo);
    sub_1C21E38(&WarBoardTaskBase___TypeInfo);
    byte_4BD9ED8 = 1;
  }
  v5 = sub_1C22084(WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass66_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass66_0_o *)v5, 0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  v8 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_64;
  Instance = (WarBoardData_o *)WarBoardData__GetWall(Instance, squareIndex, 0, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_64;
  v10 = (WarBoardWallData_o *)Instance;
  SquarePosition = WarBoardManager__GetSquarePosition(v8, pieceData->fields._nowSquareIndex_k__BackingField, 0LL);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  *(UnityEngine_Vector3_o *)&v14 = WarBoardManager__GetSquarePosition(v8, squareIndex, 0LL);
  Instance = v8->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_64;
  v17 = v14;
  v18 = v15;
  v19 = v16;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, 0LL);
  if ( !v5 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 16) = Instance;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)Instance, v20, v21, v22, v23, v24, v25);
  v26 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v27 = sub_1C22084(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v27, 0LL, 0LL);
  if ( !v27 )
    goto LABEL_64;
  v28 = (_QWORD *)(v27 + 32);
  v29 = *(System_Delegate_o **)(v27 + 32);
  v30 = (WarBoardTaskBase_TaskCallback_o *)sub_1C22084(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v30,
    (Il2CppObject *)v5,
    Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__,
    0LL);
  v31 = System_Delegate__Combine(v29, (System_Delegate_o *)v30, 0LL);
  v38 = (int64_t)v31;
  if ( v31 )
  {
    v39 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v31->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v28 = v31;
      if ( (WarBoardTaskBase_TaskCallback_c *)v31->klass == v39 )
        goto LABEL_14;
    }
    sub_1C22354(v31);
  }
  *v28 = v38;
LABEL_14:
  sub_1C21DDC((PartyOrganizationUtility_o *)(v27 + 32), v38, v32, v33, v34, v35, v36, v37);
  if ( !v26 )
    goto LABEL_64;
  items = v26->fields._items;
  v47 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v26->fields._version;
  if ( !items )
    goto LABEL_64;
  size = v26->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      (Il2CppObject *)v27,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &items->obj.klass + size;
    v26->fields._size = size + 1;
    v49[4] = (Il2CppClass *)v27;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v49 + 4), v27, v40, v41, v42, v43, v44, v45);
  }
  if ( !byte_4BD6BB3 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD6BB3 = 1;
  }
  v50 = x;
  v51 = v17 - x;
  v52 = v18 - y;
  v53 = v19 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4BD6BB4 )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD6BB4 = 1;
  }
  v54 = sqrtf((float)(v53 * v53) + (float)((float)(v51 * v51) + (float)(v52 * v52)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v55 = z;
  if ( v54 <= 0.00001 )
  {
    if ( !byte_4BD6BB1 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v56 = static_fields->zeroVector.fields.x;
    v57 = static_fields->zeroVector.fields.y;
    v58 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v56 = v51 / v54;
    v57 = v52 / v54;
    v58 = v53 / v54;
  }
  v60 = v54 - this->fields.lengthOnAttack;
  if ( v60 <= 0.0 )
  {
    v62 = v50;
    v63 = y;
  }
  else
  {
    v135 = v57;
    v136 = v56;
    v61 = v50;
    v62 = v50 + (float)(v56 * v60);
    v63 = y + (float)(v57 * v60);
    v64 = y;
    v65 = v55;
    v55 = v55 + (float)(v58 * v60);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    pixelPerSecond = this->fields.pixelPerSecond;
    v68 = gameObject;
    v69 = (WarBoardMovePerformance_o *)sub_1C22084(WarBoardMovePerformance_TypeInfo);
    v138.fields.x = v61;
    v138.fields.y = v64;
    v138.fields.z = v65;
    v141.fields.x = v62;
    v141.fields.y = v63;
    v141.fields.z = v55;
    v70 = (Il2CppObject *)v69;
    WarBoardMovePerformance___ctor(v69, v68, v138, v141, pixelPerSecond, 5, 0LL);
    v77 = v26->fields._items;
    v78 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v26->fields._version;
    if ( !v77 )
      goto LABEL_64;
    v79 = v26->fields._size;
    if ( (unsigned int)v79 >= v77->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v26,
        v70,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
    }
    else
    {
      v80 = &v77->obj.klass + v79;
      v26->fields._size = v79 + 1;
      v80[4] = (Il2CppClass *)v70;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 4), (int64_t)v70, v71, v72, v73, v74, v75, v76);
    }
    v57 = v135;
    v56 = v136;
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v82 = v56 * lengthMoveAttack;
  v83 = v57 * lengthMoveAttack;
  v84 = v58 * lengthMoveAttack;
  v85 = v62 + v82;
  v86 = v63 + v83;
  v87 = v55 + v84;
  v88 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v89 = this->fields.pixelPerSecond;
  v90 = v88;
  v91 = (WarBoardMovePerformance_o *)sub_1C22084(WarBoardMovePerformance_TypeInfo);
  v139.fields.x = v85;
  v139.fields.y = v86;
  v139.fields.z = v87;
  v142.fields.x = v62;
  v142.fields.y = v63;
  v142.fields.z = v55;
  v92 = (int64_t)v91;
  WarBoardMovePerformance___ctor(v91, v90, v139, v142, v89, 4, 0LL);
  if ( !v10 )
    goto LABEL_64;
  v93 = WarBoardWallData__DecrementBreakPointPerformance(v10, 1, 0LL);
  v94 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v94,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 26, 0LL, 0LL), !v94)
    || (System_Collections_Generic_List_object___AddRange(
          v94,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        System_Collections_Generic_List_object___AddRange(
          v26,
          (System_Collections_Generic_IEnumerable_T__o *)v94,
          (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (Instance = (WarBoardData_o *)sub_1C21EE0(WarBoardTaskBase___TypeInfo, 4LL)) == 0LL) )
  {
LABEL_64:
    sub_1C22094(Instance, v7);
  }
  v101 = (WarBoardTaskBase_array *)Instance;
  if ( v92 )
  {
    Instance = (WarBoardData_o *)sub_1C21F74(v92, Instance->klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( !v101->max_length )
    goto LABEL_65;
  v101->m_Items[0] = (WarBoardTaskBase_o *)v92;
  sub_1C21DDC((PartyOrganizationUtility_o *)v101->m_Items, v92, v95, v96, v97, v98, v99, v100);
  Instance = (WarBoardData_o *)v10->fields.component;
  if ( !Instance )
    goto LABEL_64;
  IconPosition = WarBoardWallComponent__GetIconPosition((WarBoardWallComponent_o *)Instance, 0LL);
  Instance = (WarBoardData_o *)WarBoardManager__CreateAttackEffectTask(v8, IconPosition, 0, 0LL);
  v108 = (int64_t)Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_1C21F74(Instance, v101->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( v101->max_length <= 1 )
    goto LABEL_65;
  v101->m_Items[1] = (WarBoardTaskBase_o *)v108;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v101->m_Items[1], v108, v102, v103, v104, v105, v106, v107);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (WarBoardData_o *)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0LL);
  v115 = (int64_t)Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_1C21F74(Instance, v101->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( v101->max_length <= 2 )
    goto LABEL_65;
  v101->m_Items[2] = (WarBoardTaskBase_o *)v115;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v101->m_Items[2], v115, v109, v110, v111, v112, v113, v114);
  v116 = (WarBoardOrthostichySchedule_o *)sub_1C22084(WarBoardOrthostichySchedule_TypeInfo);
  WarBoardOrthostichySchedule___ctor_36870952(v116, v93, 0LL);
  if ( v116 )
  {
    Instance = (WarBoardData_o *)sub_1C21F74(v116, v101->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_66:
      v134 = sub_1C220B8();
      sub_1C21F60(v134, 0LL);
    }
  }
  if ( v101->max_length <= 3 )
LABEL_65:
    sub_1C2209C(Instance, v7);
  v101->m_Items[3] = (WarBoardTaskBase_o *)v116;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v101->m_Items[3], (int64_t)v116, v117, v118, v119, v120, v121, v122);
  v123 = (WarBoardParallelSchedule_o *)sub_1C22084(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor(v123, v101, 0LL);
  v130 = v26->fields._items;
  v131 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v26->fields._version;
  if ( !v130 )
    goto LABEL_64;
  v132 = v26->fields._size;
  if ( (unsigned int)v132 >= v130->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      (Il2CppObject *)v123,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
  }
  else
  {
    v133 = &v130->obj.klass + v132;
    v26->fields._size = v132 + 1;
    v133[4] = (Il2CppClass *)v123;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v133 + 4), (int64_t)v123, v124, v125, v126, v127, v128, v129);
  }
  if ( v26->fields._size >= 1 )
    WarBoardManager__AddTask_36670272(v8, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v26, 0LL);
}


bool __fastcall WarBoardPieceBaseComponent__PlayEffect(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectKey,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return WarBoardPieceBaseComponent__SetEffect(this, effectKey, 1, v3);
}


void __fastcall WarBoardPieceBaseComponent__PlaySimpleAnimation(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0
  const MethodInfo *v6; // x2

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    goto LABEL_5;
  if ( SimpleAnimation__IsPlaying(simpleAnimation, animationName, 0LL) )
    return;
  WarBoardPieceBaseComponent__StopSimpleAnimation(this, animationName, v6);
  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
LABEL_5:
    sub_1C22094(simpleAnimation, animationName);
  SimpleAnimation__Play_65253852(simpleAnimation, animationName, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__RepareBreakPointByPiece(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
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
    sub_1C22094(this, method);
  breakPoint_k__BackingField = pieceData->fields._breakPoint_k__BackingField;
  v5 = this;
  v6 = 0LL;
  while ( (int)v6 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v5->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v6 >= breakPoints->max_length )
        sub_1C2209C(this, method);
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


void __fastcall WarBoardPieceBaseComponent__Selectable(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  this->fields.isSelectable = 1;
}


void __fastcall WarBoardPieceBaseComponent__SetButtonTweenTarget(
        WarBoardPieceBaseComponent_o *this,
        UnityEngine_Transform_array *parents,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x21
  int64_t ComponentsInChildren_object; // x0
  __int64 v6; // x1
  signed int max_length; // w8
  unsigned int v8; // w24
  UnityEngine_Component_c *v9; // x8
  int64_t v10; // x22
  unsigned __int64 v11; // x29
  UnityEngine_Object_o *v12; // x23
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  int64_t v22; // x1
  Il2CppClass **v23; // x0
  struct UICommonButton_o *button; // x19
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4BD9EC8 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77649128);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9EC8 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
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
        ComponentsInChildren_object = (int64_t)parents->m_Items[v8];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (int64_t)UnityEngine_Component__GetComponentsInChildren_object_(
                                                 (UnityEngine_Component_o *)ComponentsInChildren_object,
                                                 1,
                                                 (const MethodInfo_2FA7394 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77649128);
        if ( ComponentsInChildren_object )
        {
          v9 = *(UnityEngine_Component_c **)(ComponentsInChildren_object + 24);
          v10 = ComponentsInChildren_object;
          if ( (int)v9 >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v8 >= max_length )
          goto LABEL_24;
      }
      v11 = 0LL;
      while ( v11 < (unsigned int)v9 )
      {
        v12 = *(UnityEngine_Object_o **)(v10 + 32 + 8 * v11);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
        if ( (ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_27;
          ComponentsInChildren_object = (int64_t)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v12,
                                                   0LL);
          if ( !v4 )
            goto LABEL_27;
          ComponentsInChildren_object = System_Collections_Generic_List_object___Contains(
                                          v4,
                                          (Il2CppObject *)ComponentsInChildren_object,
                                          (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( (ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (int64_t)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v12,
                                                     0LL);
            items = v4->fields._items;
            v20 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v4->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v4->fields._size;
            v22 = ComponentsInChildren_object;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v4,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v4->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v22;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v23 + 4), v22, v13, v14, v15, v16, v17, v18);
            }
          }
        }
        LODWORD(v9) = *(_DWORD *)(v10 + 24);
        if ( (__int64)++v11 >= (int)v9 )
          goto LABEL_23;
      }
LABEL_28:
      sub_1C2209C(ComponentsInChildren_object, v6);
    }
  }
LABEL_24:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_object = (int64_t)System_Collections_Generic_List_object___ToArray(
                                                 v4,
                                                 (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1C22094(ComponentsInChildren_object, v6);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&button->fields.tweenTargets,
    ComponentsInChildren_object,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
}


void __fastcall WarBoardPieceBaseComponent__SetColliderEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_4BD9ECA & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9ECA = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1C22094(0LL, v6);
    if ( enable )
    {
      v8 = 1;
LABEL_11:
      UICommonButton__SetButtonEnableAndKeepState(v7, v8, 0, 0LL);
      return;
    }
    if ( v7->fields.mState )
    {
      v8 = 0;
      goto LABEL_11;
    }
    UICommonButton__SetColliderEnable(v7, 0, 1, 0LL);
  }
}


bool __fastcall WarBoardPieceBaseComponent__SetEffect(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectKey,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v7; // x22
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Collections_Generic_List_object__o *listEffectData; // x20
  System_Predicate_object__o *v17; // x21
  Il2CppObject *v18; // x20
  _QWORD *monitor; // x22
  __int64 v20; // x8
  unsigned __int64 v21; // x23
  bool v22; // w19
  UnityEngine_Object_o *v23; // x21

  if ( (byte_4BD9EDE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
    sub_1C21E38(&Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__);
    sub_1C21E38(&WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo);
    byte_4BD9EDE = 1;
  }
  v7 = sub_1C22084(WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass83_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass83_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 16) = effectKey;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)effectKey, v10, v11, v12, v13, v14, v15);
  listEffectData = (System_Collections_Generic_List_object__o *)this->fields.listEffectData;
  v17 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__,
    0LL);
  if ( !listEffectData )
    goto LABEL_18;
  v8 = System_Collections_Generic_List_object___Find(
         listEffectData,
         (System_Predicate_T__o *)v17,
         (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__);
  v18 = v8;
  if ( !v8 )
    return v18 != 0LL;
  monitor = v8[1].monitor;
  if ( !monitor )
LABEL_18:
    sub_1C22094(v8, v9);
  v20 = monitor[3];
  if ( (int)v20 >= 1 )
  {
    v21 = 0LL;
    v22 = isDisp;
    do
    {
      if ( v21 >= (unsigned int)v20 )
        sub_1C2209C(v8, v9);
      v23 = (UnityEngine_Object_o *)monitor[v21 + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = (Il2CppObject *)UnityEngine_Object__op_Equality(v23, 0LL, 0LL);
      if ( ((unsigned __int8)v8 & 1) == 0 )
      {
        if ( !v23 )
          goto LABEL_18;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v23, v22, 0LL);
      }
      LODWORD(v20) = *((_DWORD *)monitor + 6);
      ++v21;
    }
    while ( (__int64)v21 < (int)v20 );
  }
  return v18 != 0LL;
}


void __fastcall WarBoardPieceBaseComponent__SetTouchEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_4BD9EC9 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9EC9 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1C22094(0LL, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0LL);
  }
}


void __fastcall WarBoardPieceBaseComponent__ShowActionCount(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
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

  if ( (byte_4BD9ECC & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9ECC = 1;
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_25;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__get_isInfinitelyActable(pieceData, 0LL);
  if ( ((unsigned __int8)pieceData & 1) == 0 )
  {
    pieceData = (WarBoardPieceData_o *)this->fields.currentActionPointRoot;
    if ( !pieceData )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pieceData, 1, 0LL);
  }
  v4 = this->fields.pieceData;
  if ( !v4 || (pieceData = (WarBoardPieceData_o *)v4->fields._Cost_k__BackingField) == 0LL )
LABEL_25:
    sub_1C22094(pieceData, method);
  if ( WarBoardCost__get_HasCost((WarBoardCost_o *)pieceData, 0LL) )
  {
    currentPieceActionPointRoot = (UnityEngine_Object_o *)this->fields.currentPieceActionPointRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(currentPieceActionPointRoot, 0LL, 0LL) )
    {
      pieceData = (WarBoardPieceData_o *)this->fields.currentPieceActionPointRoot;
      if ( pieceData )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pieceData, 1, 0LL);
        pieceData = (WarBoardPieceData_o *)this->fields.currentActionPointRoot;
        if ( pieceData )
        {
          v6 = this->fields.currentPieceActionPointRoot;
          activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)pieceData, 0LL);
          v8 = 112LL;
          if ( activeSelf )
            v8 = 124LL;
          if ( activeSelf )
            v9 = 120LL;
          else
            v9 = 108LL;
          if ( activeSelf )
            v10 = 116LL;
          else
            v10 = 104LL;
          v11.fields.x = *(float *)((char *)&this->klass + v10);
          v11.fields.y = *(float *)((char *)&this->klass + v9);
          v11.fields.z = *(float *)((char *)&this->klass + v8);
          GameObjectExtensions__SetLocalPosition(v6, v11, 0LL);
          goto LABEL_24;
        }
      }
      goto LABEL_25;
    }
  }
LABEL_24:
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
    this,
    this->klass->vtable._12_ShowStatus.methodPtr);
}


void __fastcall WarBoardPieceBaseComponent__ShowActionTarget(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectObject; // x0

  selectObject = this->fields.selectObject;
  if ( !selectObject )
    sub_1C22094(0LL, method);
  UnityEngine_GameObject__SetActive(selectObject, 1, 0LL);
}


bool __fastcall WarBoardPieceBaseComponent__ShowStatus(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall WarBoardPieceBaseComponent__StopEffect(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectKey,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return WarBoardPieceBaseComponent__SetEffect(this, effectKey, 0, v3);
}


void __fastcall WarBoardPieceBaseComponent__StopSimpleAnimation(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x0

  simpleAnimation = this->fields.simpleAnimation;
  if ( !simpleAnimation )
    goto LABEL_7;
  if ( SimpleAnimation__IsPlaying(simpleAnimation, animationName, 0LL) )
  {
    simpleAnimation = this->fields.simpleAnimation;
    if ( simpleAnimation )
    {
      SimpleAnimation__Stop_65251368(simpleAnimation, animationName, 0LL);
      simpleAnimation = this->fields.simpleAnimation;
      if ( simpleAnimation )
      {
        SimpleAnimation__Rewind(simpleAnimation, 0LL);
        return;
      }
    }
LABEL_7:
    sub_1C22094(simpleAnimation, animationName);
  }
}


void __fastcall WarBoardPieceBaseComponent__Unselectable(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  this->fields.isSelectable = 0;
}


void __fastcall WarBoardPieceBaseComponent__UpdateDisplayActionCount(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
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
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__get_isInfinitelyActable(pieceData, 0LL);
  if ( ((unsigned __int8)pieceData & 1) == 0 )
  {
    v4 = this->fields.pieceData;
    if ( !v4 )
      goto LABEL_13;
    currentActionPointLabel = this->fields.currentActionPointLabel;
    currentActionCount_k__BackingField = v4->fields._currentActionCount_k__BackingField;
    pieceData = (WarBoardPieceData_o *)System_Int32__ToString((int32_t)&currentActionCount_k__BackingField, 0LL);
    if ( !currentActionPointLabel )
      goto LABEL_13;
    UILabel__set_text(currentActionPointLabel, (System_String_o *)pieceData, 0LL);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_13;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__get_HasCost(pieceData, 0LL);
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
        pieceData = (WarBoardPieceData_o *)System_Int32__ToString((int32_t)&currentActionCount_k__BackingField, 0LL);
        if ( currentPieceActionPointLabel )
        {
          UILabel__set_text(currentPieceActionPointLabel, (System_String_o *)pieceData, 0LL);
          goto LABEL_12;
        }
      }
    }
LABEL_13:
    sub_1C22094(pieceData, method);
  }
LABEL_12:
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
    this,
    this->klass->vtable._12_ShowStatus.methodPtr);
}


void __fastcall WarBoardPieceBaseComponent__UpdateUiBrightnessByPieceStatus(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_Collections_Generic_HashSet_T__o *v4; // x22
  int64_t pieceData; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_HashSet_T__o **v13; // x21
  System_Collections_Generic_HashSet_T__o *v14; // x23
  int64_t *v15; // x22
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
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
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x1
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  struct UICommonButton_o *v55; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_Collections_Generic_HashSet_Enumerator_T__o v63; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v64; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD9ECF & 1) == 0 )
  {
    sub_1C21E38(&System_Action_UIWidget__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_UIWidget___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Distinct_GameObject___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_GameObject___);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_UIWidget__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_UIWidget__get_Count__);
    sub_1C21E38(&System_Collections_Generic_HashSet_UIWidget__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor___77574864);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C21E38(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__);
    sub_1C21E38(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__);
    sub_1C21E38(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__);
    sub_1C21E38(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__);
    sub_1C21E38(&WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo);
    byte_4BD9ECF = 1;
  }
  memset(&v64, 0, sizeof(v64));
  v3 = sub_1C22084(WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass48_0___ctor((WarBoardPieceBaseComponent___c__DisplayClass48_0_o *)v3, 0LL);
  v4 = (System_Collections_Generic_HashSet_T__o *)sub_1C22084(System_Collections_Generic_HashSet_UIWidget__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v4,
    (const MethodInfo_3508BA4 *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  if ( !v3 )
    goto LABEL_39;
  *(_QWORD *)(v3 + 24) = v4;
  v13 = (System_Collections_Generic_HashSet_T__o **)(v3 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)v4, v7, v8, v9, v10, v11, v12);
  v14 = (System_Collections_Generic_HashSet_T__o *)sub_1C22084(System_Collections_Generic_HashSet_UIWidget__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v14,
    (const MethodInfo_3508BA4 *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  *(_QWORD *)(v3 + 16) = v14;
  v15 = (int64_t *)(v3 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)v14, v16, v17, v18, v19, v20, v21);
  pieceData = (int64_t)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_39;
  pieceData = WarBoardPieceData__HasIconDarkenBuff((WarBoardPieceData_o *)pieceData, 0LL);
  cannotActTurnDurk = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
  v23 = pieceData;
  if ( cannotActTurnDurk )
  {
    v24 = (System_Action_object__o *)sub_1C22084(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v24,
      (Il2CppObject *)v3,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__,
      0LL);
    BasicHelper__ForEach_object_(
      cannotActTurnDurk,
      (System_Action_T__o *)v24,
      (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_UIWidget___);
    pieceData = (int64_t)this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_39;
    pieceData = WarBoardPieceData__HasVitalityToDoAnyActions((WarBoardPieceData_o *)pieceData, 0LL);
    if ( v23 & 1 | ((pieceData & 1) == 0) )
    {
      v25 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
      v26 = (System_Action_object__o *)sub_1C22084(System_Action_UIWidget__TypeInfo);
      System_Action_object____ctor(
        v26,
        (Il2CppObject *)v3,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__,
        0LL);
      BasicHelper__ForEach_object_(
        v25,
        (System_Action_T__o *)v26,
        (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v28 = (System_Action_object__o *)sub_1C22084(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v28,
      (Il2CppObject *)v3,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__,
      0LL);
    BasicHelper__ForEach_object_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v28,
      (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_UIWidget___);
    if ( (v23 & 1) != 0 )
    {
      v29 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
      v30 = (System_Action_object__o *)sub_1C22084(System_Action_UIWidget__TypeInfo);
      System_Action_object____ctor(
        v30,
        (Il2CppObject *)v3,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__,
        0LL);
      BasicHelper__ForEach_object_(
        v29,
        (System_Action_T__o *)v30,
        (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  if ( !*v15 )
    goto LABEL_39;
  if ( *(int *)(*v15 + 32) < 1 )
    return;
  button = this->fields.button;
  if ( !button )
    goto LABEL_39;
  tweenTargets = (System_Collections_Generic_IEnumerable_T__o *)button->fields.tweenTargets;
  v33 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor_56945064(
    v33,
    tweenTargets,
    (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_GameObject___ctor___77574864);
  pieceData = *v15;
  if ( !*v15 )
    goto LABEL_39;
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v63,
    (System_Collections_Generic_HashSet_T__o *)pieceData,
    (const MethodInfo_350970C *)Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__);
  v64 = v63;
  while ( 1 )
  {
    v34 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v64,
            (const MethodInfo_33E0D2C *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__);
    if ( !v34 )
      break;
    current = v64.fields._current;
    if ( !v64.fields._current )
      sub_1C22094(v34, v35);
    removeTweenTargetObjects = this->fields.removeTweenTargetObjects;
    gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v64.fields._current,
                                   0LL);
    if ( !removeTweenTargetObjects )
      sub_1C22094(gameObject, gameObject);
    if ( System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)removeTweenTargetObjects,
           gameObject,
           (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
    {
      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      v41 = (Il2CppObject *)v40;
      if ( !v33 )
        sub_1C22094(v40, v40);
      goto LABEL_22;
    }
    if ( !*v13 )
      sub_1C22094(0LL, v39);
    if ( System_Collections_Generic_HashSet_object___Contains(
           *v13,
           current,
           (const MethodInfo_3509298 *)Method_System_Collections_Generic_HashSet_UIWidget__Contains__) )
    {
      v65.fields.r = 0.5;
      v65.fields.g = 0.5;
      v65.fields.b = 0.5;
      v65.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)current, v65, 0LL);
      v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      v41 = (Il2CppObject *)v42;
      if ( !v33 )
        sub_1C22094(v42, v42);
LABEL_22:
      System_Collections_Generic_List_object___Remove(
        v33,
        v41,
        (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_GameObject__Remove__);
    }
    else
    {
      v66.fields.r = 1.0;
      v66.fields.g = 1.0;
      v66.fields.b = 1.0;
      v66.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)current, v66, 0LL);
      v43 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      v50 = (int64_t)v43;
      if ( !v33 )
        sub_1C22094(v43, v43);
      items = v33->fields._items;
      v52 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v33->fields._version;
      if ( !items )
        sub_1C22094(v43, v43);
      size = v33->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v33,
          v43,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &items->obj.klass + size;
        v33->fields._size = size + 1;
        v54[4] = (Il2CppClass *)v50;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v54 + 4), v50, v44, v45, v46, v47, v48, v49);
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v64,
    (const MethodInfo_33E0D28 *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__);
  v55 = this->fields.button;
  v56 = System_Linq_Enumerable__Distinct_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v33,
          (const MethodInfo_2FCD2BC *)Method_System_Linq_Enumerable_Distinct_GameObject___);
  pieceData = (int64_t)System_Linq_Enumerable__ToArray_object_(
                         v56,
                         (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_GameObject___);
  if ( !v55 )
LABEL_39:
    sub_1C22094(pieceData, v6);
  v55->fields.tweenTargets = (struct UnityEngine_GameObject_array *)pieceData;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v55->fields.tweenTargets, pieceData, v57, v58, v59, v60, v61, v62);
}


void __fastcall WarBoardPieceBaseComponent__UpdateUiByBuffChanged(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *pieceStatusLabelComponent; // x20
  __int64 v4; // x1
  WarBoardPieceStatusLabel_o *v5; // x0

  if ( (byte_4BD9ECE & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9ECE = 1;
  }
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
    this,
    this->klass->vtable._12_ShowStatus.methodPtr);
  pieceStatusLabelComponent = (UnityEngine_Object_o *)this->fields.pieceStatusLabelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pieceStatusLabelComponent, 0LL, 0LL) )
  {
    v5 = this->fields.pieceStatusLabelComponent;
    if ( !v5 )
      sub_1C22094(0LL, v4);
    WarBoardPieceStatusLabel__SetupLabel(v5, this->fields.pieceData, 0LL);
  }
}


void __fastcall WarBoardPieceBaseComponent__UpdateWidgetDepth(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1
  int32_t PieceDispPriority; // w0
  const MethodInfo *v7; // x2

  if ( (byte_4BD9EE2 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4BD9EE2 = 1;
  }
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, -20 * this->fields.dispPriotiry, v2);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1C22094(Instance, v5);
  PieceDispPriority = WarBoardData__GetPieceDispPriority(Instance, this->fields.pieceData, 0LL);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__WidgetDepthIncrement(
        WarBoardPieceBaseComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *v4; // x21
  struct UIWidget_array *uiWidgets; // x8
  struct UIWidget_array **p_uiWidgets; // x20
  System_Object_array *ComponentsInChildren_object; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int max_length; // w21
  il2cpp_array_size_t i; // w22
  Il2CppClass **v22; // x0
  Il2CppClass *v23; // x8
  Il2CppClass *v24; // t1
  unsigned __int64 v25; // x22
  __int64 v26; // x24
  UnityEngine_Object_o *v27; // x21
  struct UIWidget_array *v28; // x8

  v4 = this;
  if ( (byte_4BD9EDB & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77649128);
    this = (WarBoardPieceBaseComponent_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9EDB = 1;
  }
  uiWidgets = v4->fields.uiWidgets;
  p_uiWidgets = &v4->fields.uiWidgets;
  if ( !uiWidgets )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)v4,
                                    1,
                                    (const MethodInfo_2FA7394 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77649128);
    v4->fields.uiWidgets = (struct UIWidget_array *)ComponentsInChildren_object;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v4->fields.uiWidgets,
      (int64_t)ComponentsInChildren_object,
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
        if ( i >= uiWidgets->max_length )
          goto LABEL_28;
        v22 = &uiWidgets->obj.klass + (int)i;
        v24 = v22[4];
        this = (WarBoardPieceBaseComponent_o *)(v22 + 4);
        v23 = v24;
        if ( !v24 )
          goto LABEL_26;
        if ( SLODWORD(v23->_1.interfaceOffsets) >= 1001 )
        {
          this->klass = 0LL;
          sub_1C21DDC((PartyOrganizationUtility_o *)this, 0LL, v14, v15, v16, v17, v18, v19);
        }
        uiWidgets = *p_uiWidgets;
      }
      if ( !uiWidgets )
LABEL_26:
        sub_1C22094(this, *(_QWORD *)&value);
    }
  }
  if ( (int)*(_QWORD *)&uiWidgets->max_length >= 1 )
  {
    v25 = 0LL;
    v26 = (unsigned int)*(_QWORD *)&uiWidgets->max_length - 1LL;
    while ( v25 < uiWidgets->max_length )
    {
      v27 = (UnityEngine_Object_o *)uiWidgets->m_Items[v25];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardPieceBaseComponent_o *)UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v28 = *p_uiWidgets;
        if ( !*p_uiWidgets )
          goto LABEL_26;
        if ( v25 >= v28->max_length )
          break;
        this = (WarBoardPieceBaseComponent_o *)v28->m_Items[v25];
        if ( !this )
          goto LABEL_26;
        UIWidget__set_depth((UIWidget_o *)this, LODWORD(this->fields.pieceStatusLabelComponent) + value, 0LL);
      }
      if ( v26 == v25 )
        return;
      uiWidgets = *p_uiWidgets;
      ++v25;
      if ( !*p_uiWidgets )
        goto LABEL_26;
    }
LABEL_28:
    sub_1C2209C(this, *(_QWORD *)&value);
  }
}


WarBoardServantPieceBuffTurnComponent_o *__fastcall WarBoardPieceBaseComponent__get_BuffTrunNotice(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  return 0LL;
}


WarBoardPieceData_o *__fastcall WarBoardPieceBaseComponent__get_PieceData(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.pieceData;
}


WarBoardControlUiDataComponent_o *__fastcall WarBoardPieceBaseComponent__get_UiDataComp(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.uiDataComp;
}


void __fastcall WarBoardPieceBaseComponent_ScriptEffectData___ctor(
        WarBoardPieceBaseComponent_ScriptEffectData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD9EE5 & 1) == 0 )
  {
    sub_1C21E38(&WarBoardPieceBaseComponent___c_TypeInfo);
    byte_4BD9EE5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(WarBoardPieceBaseComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardPieceBaseComponent___c_TypeInfo->static_fields->__9 = (struct WarBoardPieceBaseComponent___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)WarBoardPieceBaseComponent___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardPieceBaseComponent___c___ctor(WarBoardPieceBaseComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall WarBoardPieceBaseComponent___c___GetParticipantVals_b__62_0(
        WarBoardPieceBaseComponent___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)WarBoardPieceData__CreatePieceEventVals(x, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAfterAttack_b__65_3(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BD9EE8 & 1) == 0 )
  {
    sub_1C21E38(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4BD9EE8 = 1;
  }
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__ResumeUiDataAll(0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAttack_b__63_1(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD9EE6 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD9EE6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 0.0, 0LL, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAttack_b__63_4(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BD9EE7 & 1) == 0 )
  {
    sub_1C21E38(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4BD9EE7 = 1;
  }
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__SetUiDataOnBattleAll(0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__0(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *targetUiWidgets; // x0

  if ( (byte_4BD9EE9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_4BD9EE9 = 1;
  }
  targetUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_1C22094(0LL, x);
  System_Collections_Generic_HashSet_object___Add(
    targetUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_3509D88 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *darkenUiWidgets; // x0

  if ( (byte_4BD9EEA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_4BD9EEA = 1;
  }
  darkenUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_1C22094(0LL, x);
  System_Collections_Generic_HashSet_object___Add(
    darkenUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_3509D88 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *targetUiWidgets; // x0

  if ( (byte_4BD9EEB & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_4BD9EEB = 1;
  }
  targetUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_1C22094(0LL, x);
  System_Collections_Generic_HashSet_object___Add(
    targetUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_3509D88 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *darkenUiWidgets; // x0

  if ( (byte_4BD9EEC & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_UIWidget__Add__);
    byte_4BD9EEC = 1;
  }
  darkenUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_1C22094(0LL, x);
  System_Collections_Generic_HashSet_object___Add(
    darkenUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_3509D88 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  WarBoardSquareData_o *targetSquareData; // x0

  targetSquareData = this->fields.targetSquareData;
  if ( !targetSquareData )
    sub_1C22094(0LL, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_4BD9EED & 1) == 0 )
  {
    sub_1C21E38(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4BD9EED = 1;
  }
  targetUpdateUiDataSquareIndexes = this->fields.targetUpdateUiDataSquareIndexes;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll(targetUpdateUiDataSquareIndexes, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_4BD9EEE & 1) == 0 )
  {
    sub_1C21E38(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4BD9EEE = 1;
  }
  targetUpdateUiDataSquareIndexes = this->fields.targetUpdateUiDataSquareIndexes;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll(targetUpdateUiDataSquareIndexes, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_g__AddAfterTask_0(
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

  if ( (byte_4BD9EEF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4BD9EEF = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 38, this->fields.pieceEventVals, 0LL);
  if ( !v3 )
    goto LABEL_13;
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetSquarePiece = this->fields.targetSquarePiece;
  if ( targetSquarePiece )
  {
    PieceEventVals = WarBoardPieceData__CreatePieceEventVals(targetSquarePiece, 0LL);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    EventTasks = WarBoardManager__GetEventTasks(Instance, 38, PieceEventVals, 0LL);
    System_Collections_Generic_List_object___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
      (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
LABEL_13:
    sub_1C22094(Instance, v5);
  v9 = WarBoardManager__GetEventTasks(Instance, 37, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)v9,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_object___ToArray(
                                      v3,
                                      (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( warBoardManager )
    {
      WarBoardManager__InsertRunningTask(warBoardManager, (WarBoardTaskBase_array *)Instance, 0LL);
      return;
    }
    goto LABEL_13;
  }
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass63_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass63_0___OnAttack_b__0(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  WarBoardSquareData_o *targetSquareData; // x0

  targetSquareData = this->fields.targetSquareData;
  if ( !targetSquareData )
    sub_1C22094(0LL, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass63_0___OnAttack_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *warBoardManager; // x0

  warBoardManager = this->fields.warBoardManager;
  if ( !warBoardManager )
    sub_1C22094(0LL, method);
  WarBoardManager__TransitionBattle(warBoardManager, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass63_1___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass63_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass63_1___OnAttack_b__2(
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
  WarBoardManager__ClearPartyBuff((WarBoardManager_o *)this, 0LL);
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
  MapZoom__SetZoomSize((MapZoom_o *)this, v3->fields.prevCameraSize, 1, 0, 0LL);
  v7 = v3->fields.CS___8__locals1;
  if ( !v7 )
    goto LABEL_16;
  v8 = v7->fields.warBoardManager;
  if ( !v8
    || (v9 = v8->fields.mapCamera) == 0LL
    || (this = (WarBoardPieceBaseComponent___c__DisplayClass63_1_o *)v9->fields.mScrl) == 0LL
    || (MapScroll__SetScrlPos((MapScroll_o *)this, v3->fields.prevCameraPos, 0LL),
        (v10 = v3->fields.CS___8__locals1) == 0LL)
    || (v11 = v10->fields.warBoardManager) == 0LL
    || (v12 = v11->fields.mapCamera) == 0LL
    || (mScrl = (struct UnityEngine_Vector2_o *)v12->fields.mScrl) == 0LL )
  {
LABEL_16:
    sub_1C22094(this, method);
  }
  mScrl[3] = v3->fields.prevCameraPos;
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass65_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *_4__this; // x0

  if ( (byte_4BD9EF1 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4BD9EF1 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0LL),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_1C22094(_4__this, method);
  }
  WarBoardManager__JudgmentGameSet((WarBoardManager_o *)_4__this, 0LL);
}


bool __fastcall WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *targetPiece; // x8

  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    sub_1C22094(this, method);
  return this->fields.moveAfterActionCheck && targetPiece->fields._isDead_k__BackingField;
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_g__AddAfterAttackEventTask_0(
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

  if ( (byte_4BD9EF0 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    byte_4BD9EF0 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    goto LABEL_25;
  targetPiece = (WarBoardPieceData_o *)WarBoardPieceData__get_isMaster(targetPiece, 0LL);
  if ( ((unsigned __int8)targetPiece & 1) != 0 )
  {
    warBoardManager = this->fields.warBoardManager;
    if ( !warBoardManager )
      goto LABEL_25;
    targetPiece = (WarBoardPieceData_o *)warBoardManager->fields._warBoardData_k__BackingField;
    if ( !targetPiece )
      goto LABEL_25;
    id = WarBoardData__get_id((WarBoardData_o *)targetPiece, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    targetPiece = (WarBoardPieceData_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
    v8 = this->fields.targetPiece;
    if ( !v8 )
      goto LABEL_25;
    breakPoint_k__BackingField = v8->fields._breakPoint_k__BackingField;
    v10 = (WarBoardMessageMaster_o *)targetPiece;
    targetPiece = (WarBoardPieceData_o *)WarBoardPieceData__get_isPlayerMaster(this->fields.targetPiece, 0LL);
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
    targetPiece = (WarBoardPieceData_o *)WarBoardMessageMaster__GetMessageTasks(v13, v14, v11, v15, v12, 0LL);
    if ( !v3 )
      goto LABEL_25;
    System_Collections_Generic_List_object___AddRange(
      v3,
      (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
      (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  targetPiece = (WarBoardPieceData_o *)this->fields.__4__this;
  if ( !targetPiece )
    goto LABEL_25;
  targetPiece = (WarBoardPieceData_o *)WarBoardPieceBaseComponent__GetParticipantVals(
                                         (WarBoardPieceBaseComponent_o *)targetPiece,
                                         this->fields.targetPiece,
                                         0LL);
  if ( !this->fields.warBoardManager )
    goto LABEL_25;
  v16 = (System_Int32_array *)targetPiece;
  targetPiece = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                         this->fields.warBoardManager,
                                         2,
                                         (System_Int32_array *)targetPiece,
                                         0LL);
  if ( !v3 )
    goto LABEL_25;
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_25;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)targetPiece, 20, v16, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_25;
  v18 = WarBoardManager__GetEventTasks((WarBoardManager_o *)targetPiece, 40, v16, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)v18,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    v19 = this->fields.warBoardManager;
    targetPiece = (WarBoardPieceData_o *)System_Collections_Generic_List_object___ToArray(
                                           v3,
                                           (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( v19 )
    {
      WarBoardManager__InsertRunningTask(v19, (WarBoardTaskBase_array *)targetPiece, 0LL);
      return;
    }
LABEL_25:
    sub_1C22094(targetPiece, v4);
  }
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass66_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass66_0___OnWallAttack_b__0(
        WarBoardPieceBaseComponent___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  WarBoardSquareData_o *targetSquareData; // x0

  targetSquareData = this->fields.targetSquareData;
  if ( !targetSquareData )
    sub_1C22094(0LL, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass67_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass67_0___OnAfterWallAttack_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *_4__this; // x0

  if ( (byte_4BD9EF3 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4BD9EF3 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0LL),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_1C22094(_4__this, method);
  }
  WarBoardManager__JudgmentGameSet((WarBoardManager_o *)_4__this, 0LL);
}


bool __fastcall WarBoardPieceBaseComponent___c__DisplayClass67_0___OnAfterWallAttack_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  struct WarBoardWallData_o *targetWall; // x8

  targetWall = this->fields.targetWall;
  if ( targetWall )
    LOBYTE(targetWall) = targetWall->fields._isDestroy_k__BackingField;
  return (unsigned __int8)targetWall & this->fields.moveAfterActionCheck;
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass67_0___OnAfterWallAttack_g__AddAfterAttackEventTask_0(
        WarBoardPieceBaseComponent___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v5; // x1
  WarBoardManager_o *warBoardManager; // x19

  if ( (byte_4BD9EF2 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4BD9EF2 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 27, 0LL, 0LL);
  if ( !v3 )
    goto LABEL_9;
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_object___ToArray(
                                      v3,
                                      (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( warBoardManager )
    {
      WarBoardManager__InsertRunningTask(warBoardManager, (WarBoardTaskBase_array *)Instance, 0LL);
      return;
    }
LABEL_9:
    sub_1C22094(Instance, v5);
  }
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass83_0___ctor(
        WarBoardPieceBaseComponent___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardPieceBaseComponent___c__DisplayClass83_0___SetEffect_b__0(
        WarBoardPieceBaseComponent___c__DisplayClass83_0_o *this,
        WarBoardPieceBaseComponent_ScriptEffectData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C22094(this, 0LL);
  return System_String__op_Equality(a->fields.key, this->fields.effectKey, 0LL);
}