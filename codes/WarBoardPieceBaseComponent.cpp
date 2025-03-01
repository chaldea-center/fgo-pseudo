void __fastcall WarBoardPieceBaseComponent___ctor(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_List_object__o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4BFB0D2 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__, v3);
    sub_1C2E12C(&System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo, v4);
    sub_1C2E12C(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    sub_1C2E12C(&StringLiteral_6995/*"Frame{0}"*/, v6);
    byte_4BFB0D2 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
  this->fields.listEffectData = (struct System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__o *)v7;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.listEffectData, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  *(_OWORD *)&this->fields.positionPieceActionPointDefault.fields.x = xmmword_C061F0;
  *(_QWORD *)&this->fields.positionPieceActionPointNext.fields.y = 1111228416LL;
  *(_OWORD *)&this->fields.pixelPerSecond = xmmword_C07770;
  this->fields.lengthMoveAttack = 25.0;
  v14 = StringLiteral_6995/*"Frame{0}"*/;
  this->fields.baseFrameName = (struct System_String_o *)StringLiteral_6995/*"Frame{0}"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.baseFrameName, v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.removeTweenTargetObjects = (struct System_Collections_Generic_List_GameObject__o *)v21;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.removeTweenTargetObjects,
    (int64_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x19
  __int64 v16; // x1
  WarBoardPieceData_o *pieceData; // x0
  System_Int32_array *PieceEventVals; // x20
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  UnityEngine_GameObject_o *gameObject; // x23
  float pixelPerSecond; // s13
  float v22; // s11
  float v23; // s12
  float v24; // s14
  WarBoardMovePerformance_o *v25; // x0
  Il2CppObject *v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v37; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v38; // x0
  Il2CppObject *Instance; // x20
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s3.4,4:s4.4,8:s5.4

  z = originalPos.fields.z;
  y = originalPos.fields.y;
  x = originalPos.fields.x;
  if ( (byte_4BFB0C9 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&squareIndex);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v11);
    sub_1C2E12C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v12);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    sub_1C2E12C(&WarBoardMovePerformance_TypeInfo, v14);
    byte_4BFB0C9 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_16;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(pieceData, 0LL);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  pieceData = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                       (WarBoardManager_o *)pieceData,
                                       30,
                                       PieceEventVals,
                                       0LL);
  if ( !v15 )
    goto LABEL_16;
  System_Collections_Generic_List_object___AddRange(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)pieceData,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 36, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)pieceData, squareIndex, 0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  v22 = SquarePosition.fields.x;
  v23 = SquarePosition.fields.y;
  v24 = SquarePosition.fields.z;
  v25 = (WarBoardMovePerformance_o *)sub_1C2E378(WarBoardMovePerformance_TypeInfo);
  v41.fields.x = x;
  v41.fields.y = y;
  v41.fields.z = z;
  v42.fields.x = v22;
  v42.fields.y = v23;
  v42.fields.z = v24;
  v26 = (Il2CppObject *)v25;
  WarBoardMovePerformance___ctor(v25, gameObject, v41, v42, pixelPerSecond, 0, 0LL);
  items = v15->fields._items;
  v34 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v15->fields._version;
  if ( !items )
    goto LABEL_16;
  size = v15->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      v26,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v36[4] = (Il2CppClass *)v26;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)v26, v27, v28, v29, v30, v31, v32);
  }
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData
    || (v37 = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 38, PieceEventVals, 0LL),
        System_Collections_Generic_List_object___AddRange(
          v15,
          (System_Collections_Generic_IEnumerable_T__o *)v37,
          (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v38 = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 37, 0LL, 0LL),
        System_Collections_Generic_List_object___AddRange(
          v15,
          (System_Collections_Generic_IEnumerable_T__o *)v38,
          (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        pieceData = (WarBoardPieceData_o *)System_Collections_Generic_List_object___ToArray(
                                             v15,
                                             (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__),
        !Instance) )
  {
LABEL_16:
    sub_1C2E388(pieceData, v16);
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
  __int64 v3; // x1
  WarBoardManager_o *Instance; // x0
  __int64 v5; // x1
  int32_t controllType_k__BackingField; // w8
  WarBoardManager_o *v7; // x20
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x21
  struct WarBoardSeSetting_o *seSetting; // x8
  const MethodInfo *v11; // x2
  Il2CppMethodPointer methodPtr; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  struct WarBoardPieceData_o *v16; // x8
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x21
  struct WarBoardSeSetting_o *v19; // x8
  struct WarBoardPieceData_o *v20; // x8
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x21
  struct WarBoardSeSetting_o *v23; // x8
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x19
  struct WarBoardSeSetting_o *v26; // x8

  if ( (byte_4BFB0BA & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1C2E12C(&Method_WarBoardPieceBaseComponent_ClickIcon__, v3);
    byte_4BFB0BA = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  controllType_k__BackingField = Instance->fields._controllType_k__BackingField;
  v7 = Instance;
  if ( controllType_k__BackingField == 1 )
  {
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_41;
    if ( pieceData->fields._isEditing_k__BackingField )
    {
      v14 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1C2E144(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v15 = (System_Reflection_MethodBase_o *)sub_1C2E110(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0LL);
      v16 = this->fields.pieceData;
      if ( v16 )
      {
        WarBoardManager__SquareSelect(v7, v16->fields._nowSquareIndex_k__BackingField, 0LL);
        v11 = this->klass->vtable._14_EditPiece.method;
        methodPtr = this->klass->vtable._15_ChangeStatus.methodPtr;
        goto LABEL_33;
      }
LABEL_41:
      sub_1C2E388(Instance, v5);
    }
  }
  else if ( controllType_k__BackingField == 2 )
  {
    if ( WarBoardManager__get_isSelectedPiece(Instance, 0LL)
      && WarBoardManager__IsSelectedPieceSame(v7, this->fields.pieceData, 0LL) )
    {
      v8 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1C2E144(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v9 = (System_Reflection_MethodBase_o *)sub_1C2E110(v8, v8[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        seSetting = Instance->fields.seSetting;
        if ( seSetting )
        {
          OverwriteAssetSoundName__PlaySe(v9, seSetting->fields.DeselectSe, 0, 0LL);
          WarBoardManager__DeselectPiece(v7, 1, 0LL, 0LL);
          v11 = this->klass->vtable._13_HideStatus.method;
          methodPtr = this->klass->vtable._14_EditPiece.methodPtr;
LABEL_33:
          ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v11)(this, methodPtr);
          return;
        }
      }
      goto LABEL_41;
    }
    if ( WarBoardManager__get_isSelectedPiece(v7, 0LL) && this->fields.isSelectable )
    {
      v17 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_1C2E144(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v18 = (System_Reflection_MethodBase_o *)sub_1C2E110(v17, v17[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v19 = Instance->fields.seSetting;
        if ( v19 )
        {
          Instance = (WarBoardManager_o *)OverwriteAssetSoundName__PlaySe(v18, v19->fields.SelectSe, 0, 0LL);
          v20 = this->fields.pieceData;
          if ( v20 )
          {
            WarBoardManager__SelectedPieceAction(v7, v20->fields._nowSquareIndex_k__BackingField, 0LL);
            return;
          }
        }
      }
      goto LABEL_41;
    }
    if ( WarBoardManager__IsNowTurn(v7, this->fields.pieceData, 0LL) )
    {
      v21 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v21 = (_QWORD *)sub_1C2E144(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v22 = (System_Reflection_MethodBase_o *)sub_1C2E110(v21, v21[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v23 = Instance->fields.seSetting;
        if ( v23 )
        {
          OverwriteAssetSoundName__PlaySe(v22, v23->fields.SelectSe, 0, 0LL);
          WarBoardManager__SelectPiece(v7, this->fields.pieceData, 0LL);
          v11 = this->klass->vtable._12_ShowStatus.method;
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
    v24 = Method_WarBoardPieceBaseComponent_ClickIcon__;
    if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
      v24 = (_QWORD *)sub_1C2E144(Method_WarBoardPieceBaseComponent_ClickIcon__);
    v25 = (System_Reflection_MethodBase_o *)sub_1C2E110(v24, v24[4]);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    v26 = Instance->fields.seSetting;
    if ( !v26 )
      goto LABEL_41;
    OverwriteAssetSoundName__PlaySe(v25, v26->fields.OpenSimpleInfoSe, 0, 0LL);
  }
}


void __fastcall WarBoardPieceBaseComponent__CreateEffect(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *effectName,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x20
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *CommonEffectAsset_object; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Object_o *v20; // x21
  Il2CppObject *v21; // x22
  WarBoardCommonEffectPerformance_o *v22; // x0
  Il2CppObject *v23; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Nullable_Vector3__o v34; // 0:x3.16
  System_Nullable_Vector3__o v35; // 0:x5.16

  if ( (byte_4BFB0CF & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, effectName);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8);
    sub_1C2E12C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v9);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject____77847040, v10);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v11);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v12);
    sub_1C2E12C(&WarBoardCommonEffectPerformance_TypeInfo, v13);
    sub_1C2E12C(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v14);
    byte_4BFB0CF = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_30B1398 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v20 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, void *))this->klass->vtable._41_GetEffectDisplayTransform.method)(
                                    this,
                                    this->klass[1]._1.image);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
      v20 = (UnityEngine_Object_o *)transform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v21 = UnityEngine_Object__Instantiate_object__50692032(
            CommonEffectAsset_object,
            (UnityEngine_Transform_o *)v20,
            (const MethodInfo_3057FC0 *)Method_UnityEngine_Object_Instantiate_GameObject____77847040);
    v22 = (WarBoardCommonEffectPerformance_o *)sub_1C2E378(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v34.fields.hasValue = 0LL;
    *(_QWORD *)&v34.fields.value.fields.y = 0LL;
    *(_QWORD *)&v35.fields.hasValue = 0LL;
    *(_QWORD *)&v35.fields.value.fields.y = 0LL;
    v23 = (Il2CppObject *)v22;
    WarBoardCommonEffectPerformance___ctor(
      v22,
      0LL,
      (UnityEngine_GameObject_o *)v21,
      v34,
      v35,
      (System_Nullable_Vector3__o)0,
      0,
      0,
      1,
      0LL);
    if ( v15 )
    {
      items = v15->fields._items;
      v31 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v15->fields._version;
      if ( items )
      {
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            v23,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_17;
        }
        else
        {
          v33 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v23;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v23, v24, v25, v26, v27, v28, v29);
          if ( taskList )
          {
LABEL_17:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v15,
              (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_36732244(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v15,
            0LL);
          return;
        }
      }
    }
LABEL_21:
    sub_1C2E388(Instance, v17);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Object_o *effectDamageBaseObject; // x20
  System_Collections_Generic_List_object__o *v16; // x20
  UnityEngine_Object_o *effectDamageBaseLabel; // x23
  __int64 v18; // x1
  UILabel_o *Instance; // x0
  UnityEngine_GameObject_o *v20; // x22
  WarBoardCommonEffectPerformance_o *v21; // x0
  Il2CppObject *v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Nullable_Vector3__o v33; // 0:x3.16
  System_Nullable_Vector3__o v34; // 0:x5.16

  if ( (byte_4BFB0D0 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, effectName);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v10);
    sub_1C2E12C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v11);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v12);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    sub_1C2E12C(&WarBoardCommonEffectPerformance_TypeInfo, v14);
    byte_4BFB0D0 = 1;
  }
  effectDamageBaseObject = (UnityEngine_Object_o *)this->fields.effectDamageBaseObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(0LL, effectDamageBaseObject, 0LL) )
  {
    v16 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
    v20 = this->fields.effectDamageBaseObject;
    v21 = (WarBoardCommonEffectPerformance_o *)sub_1C2E378(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v33.fields.hasValue = 0LL;
    *(_QWORD *)&v33.fields.value.fields.y = 0LL;
    *(_QWORD *)&v34.fields.hasValue = 0LL;
    *(_QWORD *)&v34.fields.value.fields.y = 0LL;
    v22 = (Il2CppObject *)v21;
    WarBoardCommonEffectPerformance___ctor(v21, 0LL, v20, v33, v34, (System_Nullable_Vector3__o)0, 0, 0, 0, 0LL);
    if ( v16 )
    {
      items = v16->fields._items;
      v30 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v16->fields._version;
      if ( items )
      {
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            v22,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_15;
        }
        else
        {
          v32 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v22;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)v22, v23, v24, v25, v26, v27, v28);
          if ( taskList )
          {
LABEL_15:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v16,
              (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        Instance = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_36732244(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v16,
            0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_1C2E388(Instance, v18);
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

  if ( !byte_4BF7D91 )
  {
    sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, method);
    byte_4BF7D91 = 1;
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

  if ( !byte_4BF7D91 )
  {
    sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, method);
    byte_4BF7D91 = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *PieceEventVals; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  long double inited; // q0
  _QWORD *v16; // x19
  __int64 v17; // x8
  __int64 v18; // x0
  __int64 v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  WarBoardPieceBaseComponent___c_c *v22; // x0
  System_Func_object__object__o *_9__62_0; // x20
  Il2CppObject *v24; // x21
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  v4 = this;
  if ( (byte_4BFB0C3 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Array_Empty_int___, targetPiece);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Concat_int___, v5);
    sub_1C2E12C(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___, v6);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1C2E12C(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo, v8);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1C2E12C(&Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__, v10);
    this = (WarBoardPieceBaseComponent_o *)sub_1C2E12C(&WarBoardPieceBaseComponent___c_TypeInfo, v11);
    byte_4BFB0C3 = 1;
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
      v13 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardPieceData__CreatePieceEventVals(
                                                                   targetPiece,
                                                                   0LL);
      v14 = System_Linq_Enumerable__Concat_int_(
              PieceEventVals,
              v13,
              (const MethodInfo_2FE97F8 *)Method_System_Linq_Enumerable_Concat_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v14,
               (const MethodInfo_300BC24 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_28:
    sub_1C2E388(this, targetPiece);
  }
  this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v21 = *(System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.m_CachedPtr;
    v22 = WarBoardPieceBaseComponent___c_TypeInfo;
    if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
      v22 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    _9__62_0 = (System_Func_object__object__o *)v22->static_fields->__9__62_0;
    if ( !_9__62_0 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = WarBoardPieceBaseComponent___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v22->static_fields->__9;
      _9__62_0 = (System_Func_object__object__o *)sub_1C2E378(System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(
        _9__62_0,
        v24,
        Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__,
        0LL);
      static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      static_fields->__9__62_0 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__62_0;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&static_fields->__9__62_0,
        (int64_t)_9__62_0,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v21,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__62_0,
                                                                 (const MethodInfo_30060A4 *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v14,
             (const MethodInfo_300BC24 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v16 = Method_System_Array_Empty_int___;
  v17 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v17 )
  {
    sub_1C80064(Method_System_Array_Empty_int___);
    v17 = v16[7];
  }
  v18 = *(_QWORD *)(v17 + 16);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C80008(inited);
  if ( !*(_DWORD *)(v18 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v18);
  v19 = *(_QWORD *)(v16[7] + 16LL);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1C80008(inited);
  return **(System_Int32_array ***)(v19 + 184);
}


WarBoardSimpleAnimationPerformance_o *__fastcall WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x20
  WarBoardSimpleAnimationPerformance_o *v6; // x21

  if ( (byte_4BFB0CB & 1) == 0 )
  {
    sub_1C2E12C(&WarBoardSimpleAnimationPerformance_TypeInfo, animationName);
    byte_4BFB0CB = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v6 = (WarBoardSimpleAnimationPerformance_o *)sub_1C2E378(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(v6, simpleAnimation, animationName, 0LL);
  return v6;
}


void __fastcall WarBoardPieceBaseComponent__HideActionCount(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *currentActionPointRoot; // x0
  UnityEngine_Object_o *currentPieceActionPointRoot; // x20

  if ( (byte_4BFB0BC & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFB0BC = 1;
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
    sub_1C2E388(currentActionPointRoot, method);
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
    sub_1C2E388(0LL, method);
  UnityEngine_GameObject__SetActive(selectObject, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__HideStatus(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v3; // x0
  __int64 v4; // x0
  WarBoardManager_o *v5; // x0

  if ( (byte_4BFB0BF & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    byte_4BFB0BF = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C80008(v2);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C80008(v2);
  v5 = **(WarBoardManager_o ***)(v4 + 184);
  if ( !v5 )
    sub_1C2E388(0LL, method);
  WarBoardManager__HideSimplePopup(v5, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__Initialize(
        WarBoardPieceBaseComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 gameObject; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UnityEngine_Transform_o *transform; // x21
  int v31; // s0
  __int64 breakPointMax_k__BackingField; // x21
  struct WarBoardBreakPointComponent_array *v35; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  UnityEngine_Object_c **v43; // x25
  unsigned __int64 v44; // x29
  float v45; // s8
  __int64 v46; // x23
  int v47; // w26
  float v48; // s9
  __int64 v49; // x27
  Il2CppObject *breakPointPrefab; // x24
  UnityEngine_Transform_o *v51; // x0
  UnityEngine_Object_c *v52; // x8
  UnityEngine_Object_c **v53; // x21
  UnityEngine_Transform_o *v54; // x25
  UnityEngine_GameObject_o *v55; // x25
  WarBoardBreakPointComponent_o *v56; // x24
  struct UIWidget_o *breakPointParent; // x8
  int32_t mDepth; // w28
  bool isMaster; // w25
  const MethodInfo *v60; // x6
  unsigned int *v61; // x25
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  const MethodInfo *v68; // x3
  struct WarBoardBreakPointComponent_array *v69; // x8
  float maxSpacing; // s0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  UnityEngine_Transform_array *v77; // x21
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x22
  const MethodInfo *v85; // x2
  int32_t PieceDispPriority; // w0
  const MethodInfo *v87; // x2
  const MethodInfo *v88; // x1
  Il2CppObject *CommonEffectAsset_object; // x20
  UnityEngine_Transform_o *v90; // x21
  UnityEngine_Object_o *v91; // x22
  Il2CppObject *v92; // x0
  UnityEngine_GameObject_o **p_effectDamageBaseObject; // x20
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  UnityEngine_Object_o *v100; // x21
  Il2CppObject *v101; // x0
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  __int64 v108; // x0
  __int64 v109; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BFB0B6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_UILabel___, pieceData);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___, v6);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject____77847040, v7);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v8);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1C2E12C(&UnityEngine_Transform___TypeInfo, v10);
    sub_1C2E12C(&WarBoardBreakPointComponent___TypeInfo, v11);
    sub_1C2E12C(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v12);
    sub_1C2E12C(&StringLiteral_23408/*"root_text/type01/dm_base"*/, v13);
    sub_1C2E12C(&StringLiteral_19161/*"ef_dm_base"*/, v14);
    byte_4BFB0B6 = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.simpleAnimation,
    (int64_t)Component_object,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.pieceData = pieceData;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.pieceData, (int64_t)pieceData, v24, v25, v26, v27, v28, v29);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_26;
  if ( !gameObject )
    goto LABEL_26;
  *(UnityEngine_Vector3_o *)&v31 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)gameObject,
                                     pieceData->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_26;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v31, 0LL);
  breakPointMax_k__BackingField = (unsigned int)pieceData->fields._breakPointMax_k__BackingField;
  v35 = (struct WarBoardBreakPointComponent_array *)sub_1C2E1D4(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v35;
  p_breakPoints = &this->fields.breakPoints;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.breakPoints, (int64_t)v35, v37, v38, v39, v40, v41, v42);
  gameObject = (__int64)this->fields.breakPointParent;
  if ( !gameObject )
    goto LABEL_26;
  v43 = &UnityEngine_Object_TypeInfo;
  if ( (int)breakPointMax_k__BackingField >= 1 )
  {
    v44 = 0LL;
    v45 = 0.0;
    v46 = 1LL;
    v47 = 2 * breakPointMax_k__BackingField - 2;
    v48 = (float)*(int *)(gameObject + 168) / (float)(int)breakPointMax_k__BackingField;
    v49 = 8LL;
    v109 = breakPointMax_k__BackingField;
    while ( 1 )
    {
      breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
      v51 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      v52 = *v43;
      v53 = v43;
      v54 = v51;
      if ( !v52->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v52);
      gameObject = (__int64)UnityEngine_Object__Instantiate_object__50692032(
                              breakPointPrefab,
                              v54,
                              (const MethodInfo_3057FC0 *)Method_UnityEngine_Object_Instantiate_GameObject____77847040);
      if ( !gameObject )
        goto LABEL_26;
      v55 = (UnityEngine_GameObject_o *)gameObject;
      v56 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)gameObject,
                                               (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      gameObject = (__int64)UnityEngine_GameObject__get_transform(v55, 0LL);
      if ( !gameObject )
        goto LABEL_26;
      v110.fields.y = 0.0;
      v110.fields.z = 0.0;
      v110.fields.x = v45;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v110, 0LL);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        goto LABEL_26;
      mDepth = breakPointParent->fields.mDepth;
      isMaster = WarBoardPieceData__get_isMaster(pieceData, 0LL);
      gameObject = WarBoardPieceData__get_isEnemyServant(pieceData, 0LL);
      if ( !v56 )
        goto LABEL_26;
      WarBoardBreakPointComponent__Initialize(v56, v47 + mDepth, v46, isMaster, gameObject & 1, 0, v60);
      v61 = (unsigned int *)*p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_26;
      gameObject = sub_1C2E268(v56, *(_QWORD *)(*(_QWORD *)v61 + 64LL));
      if ( !gameObject )
        goto LABEL_57;
      if ( v44 >= v61[6] )
        goto LABEL_56;
      *(_QWORD *)&v61[v49] = v56;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v61[v49], (int64_t)v56, v62, v63, v64, v65, v66, v67);
      v69 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_26;
      if ( v44 >= v69->max_length )
        goto LABEL_56;
      v43 = v53;
      gameObject = *(__int64 *)((char *)&v69->obj.klass + v49 * 4);
      if ( !gameObject )
        goto LABEL_26;
      WarBoardBreakPointComponent__SetActive(
        (WarBoardBreakPointComponent_o *)gameObject,
        (__int64)v44 < pieceData->fields._breakPoint_k__BackingField,
        0,
        v68);
      if ( v109 == v46 )
        break;
      maxSpacing = v56->fields.maxSpacing;
      gameObject = (__int64)this->fields.breakPointParent;
      ++v44;
      v47 -= 2;
      if ( maxSpacing >= v48 )
        maxSpacing = v48;
      ++v46;
      v45 = v45 + maxSpacing;
      v49 += 2LL;
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
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&pieceData->fields.pieceComponent,
    (int64_t)this,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  if ( pieceData->fields._isDead_k__BackingField )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_26;
LABEL_30:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    return;
  }
  v77 = (UnityEngine_Transform_array *)sub_1C2E1D4(UnityEngine_Transform___TypeInfo, 1LL);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v77 )
    goto LABEL_26;
  v84 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1C2E268(gameObject, v77->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_57:
      v108 = sub_1C2E3AC();
      sub_1C2E254(v108, 0LL);
    }
  }
  if ( !v77->max_length )
LABEL_56:
    sub_1C2E390(gameObject, v16);
  v77->m_Items[0] = (UnityEngine_Transform_o *)v84;
  sub_1C2E0D0((PartyOrganizationUtility_o *)v77->m_Items, v84, v78, v79, v80, v81, v82, v83);
  WarBoardPieceBaseComponent__SetButtonTweenTarget(this, v77, v85);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_26;
  gameObject = *(_QWORD *)(gameObject + 440);
  if ( !gameObject )
    goto LABEL_26;
  PieceDispPriority = WarBoardData__GetPieceDispPriority((WarBoardData_o *)gameObject, pieceData, 0LL);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v87);
  WarBoardPieceBaseComponent__UpdateUiByBuffChanged(this, v88);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_26;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)gameObject,
                               (System_String_o *)StringLiteral_19161/*"ef_dm_base"*/,
                               (const MethodInfo_30B1398 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !(*v43)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v43);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    v90 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v91 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, void *))this->klass->vtable._41_GetEffectDisplayTransform.method)(
                                    this,
                                    this->klass[1]._1.image);
    if ( !(*v43)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v43);
    if ( UnityEngine_Object__op_Inequality(v91, 0LL, 0LL) )
      v90 = (UnityEngine_Transform_o *)v91;
    if ( !(*v43)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v43);
    v92 = UnityEngine_Object__Instantiate_object__50692032(
            CommonEffectAsset_object,
            v90,
            (const MethodInfo_3057FC0 *)Method_UnityEngine_Object_Instantiate_GameObject____77847040);
    this->fields.effectDamageBaseObject = (struct UnityEngine_GameObject_o *)v92;
    p_effectDamageBaseObject = &this->fields.effectDamageBaseObject;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.effectDamageBaseObject,
      (int64_t)v92,
      v94,
      v95,
      v96,
      v97,
      v98,
      v99);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.effectDamageBaseObject, 0LL, 0LL) )
    {
      v100 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                       *p_effectDamageBaseObject,
                                       (System_String_o *)StringLiteral_23408/*"root_text/type01/dm_base"*/,
                                       0LL);
      if ( !(*v43)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v43);
      gameObject = UnityEngine_Object__op_Inequality(v100, 0LL, 0LL);
      if ( (gameObject & 1) != 0 )
      {
        if ( !v100 )
          goto LABEL_26;
        v101 = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)v100,
                 (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        this->fields.effectDamageBaseLabel = (struct UILabel_o *)v101;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&this->fields.effectDamageBaseLabel,
          (int64_t)v101,
          v102,
          v103,
          v104,
          v105,
          v106,
          v107);
      }
      gameObject = (__int64)*p_effectDamageBaseObject;
      if ( !*p_effectDamageBaseObject )
LABEL_26:
        sub_1C2E388(gameObject, v16);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x22
  WarBoardData_o *gameObject; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_List_object__o *v28; // x19
  Il2CppObject *Instance; // x0
  WarBoardData_o **v30; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  WarBoardPieceData_o *Piece_36546836; // x0
  WarBoardData_o **v38; // x23
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x24
  WarBoardTaskBase_TaskCallback_o *v46; // x25
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  int32x2_t v64; // d1
  float32x2_t v65; // d9
  float v66; // s10
  float v67; // s2
  float v68; // s8
  float32x2_t v69; // d0
  float32x2_t v70; // d9
  float v71; // s8
  float v72; // s10
  float32x2_t v73; // d9
  float z; // s8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s10
  float v77; // s0
  unsigned __int64 v78; // d1
  float v79; // s0
  __int64 v80; // x24
  WarBoardTaskBase_TaskCallback_o *v81; // x25
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct WarBoardPieceData_o *v88; // x8
  UnityEngine_GameObject_o *v89; // x26
  float v90; // s8
  float v91; // s9
  float v92; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float v96; // s14
  WarBoardMovePerformance_o *v97; // x0
  WarBoardTaskBase_o *v98; // x25
  bool IsEnabledMovedAfterDefend; // w0
  System_Func_bool__o *v100; // x23
  int64_t v101; // x21
  _QWORD *v102; // x22
  System_Delegate_o *v103; // x23
  WarBoardPieceBaseComponent___c_c *v104; // x0
  WarBoardTaskBase_TaskCallback_o *_9__65_3; // x24
  Il2CppObject *v106; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v107; // x0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  System_Delegate_o *v114; // x0
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  int64_t v121; // x8
  WarBoardTaskBase_TaskCallback_c *v122; // x1
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  struct System_Object_array *v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  Il2CppClass **v132; // x0
  unsigned __int64 v133; // [xsp+0h] [xbp-A0h]
  unsigned __int64 v134; // [xsp+0h] [xbp-A0h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v137; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v138; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4BFB0C6 & 1) == 0 )
  {
    sub_1C2E12C(&System_Func_bool__TypeInfo, *(_QWORD *)&squareIndex);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_1C2E12C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_1C2E12C(&WarBoardTaskBase_TaskCallback_TypeInfo, v9);
    sub_1C2E12C(&Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__, v10);
    sub_1C2E12C(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__, v11);
    sub_1C2E12C(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__, v12);
    sub_1C2E12C(
      &Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__,
      v13);
    sub_1C2E12C(&WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo, v14);
    sub_1C2E12C(&WarBoardPieceBaseComponent___c_TypeInfo, v15);
    sub_1C2E12C(&WarBoardCallbackTask_TypeInfo, v16);
    sub_1C2E12C(&WarBoardConditionalJumpTask_TypeInfo, v17);
    sub_1C2E12C(&WarBoardMovePerformance_TypeInfo, v18);
    byte_4BFB0C6 = 1;
  }
  v19 = sub_1C2E378(WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass65_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass65_0_o *)v19,
    0LL);
  if ( !v19 )
    goto LABEL_60;
  *(_QWORD *)(v19 + 32) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)this, v22, v23, v24, v25, v26, v27);
  *(_DWORD *)(v19 + 52) = squareIndex;
  v28 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v19 + 24) = Instance;
  v30 = (WarBoardData_o **)(v19 + 24);
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)Instance, v31, v32, v33, v34, v35, v36);
  if ( !*(_QWORD *)(v19 + 24) )
    goto LABEL_60;
  gameObject = *(WarBoardData_o **)(*(_QWORD *)(v19 + 24) + 440LL);
  if ( !gameObject )
    goto LABEL_60;
  Piece_36546836 = WarBoardData__GetPiece_36546836(gameObject, *(_DWORD *)(v19 + 52), 0LL);
  *(_QWORD *)(v19 + 16) = Piece_36546836;
  v38 = (WarBoardData_o **)(v19 + 16);
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)Piece_36546836, v39, v40, v41, v42, v43, v44);
  v45 = sub_1C2E378(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v45, 0LL, 0LL);
  v46 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v46,
    (Il2CppObject *)v19,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__,
    0LL);
  if ( !v45 )
    goto LABEL_60;
  *(_QWORD *)(v45 + 32) = v46;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v45 + 32), (int64_t)v46, v47, v48, v49, v50, v51, v52);
  if ( !v28 )
    goto LABEL_60;
  items = v28->fields._items;
  v60 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v28->fields._version;
  if ( !items )
    goto LABEL_60;
  size = v28->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      (Il2CppObject *)v45,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v62 = &items->obj.klass + size;
    v28->fields._size = size + 1;
    v62[4] = (Il2CppClass *)v45;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v62 + 4), v45, v53, v54, v55, v56, v57, v58);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_60;
  gameObject = *v30;
  if ( !*v30 )
    goto LABEL_60;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0LL);
  gameObject = *(WarBoardData_o **)(v19 + 24);
  *(UnityEngine_Vector3_o *)(v19 + 40) = SquarePosition;
  if ( !gameObject )
    goto LABEL_60;
  *(UnityEngine_Vector3_o *)v69.n64_u64 = WarBoardManager__GetSquarePosition(
                                            (WarBoardManager_o *)gameObject,
                                            *(_DWORD *)(v19 + 52),
                                            0LL);
  v65.n64_u64[0] = *(unsigned __int64 *)(v19 + 40);
  v66 = *(float *)(v19 + 48);
  v68 = v67;
  v69.n64_u32[1] = v64.n64_u32[0];
  if ( !byte_4BF7D93 )
  {
    v133 = v69.n64_u64[0];
    sub_1C2E12C(&System_Math_TypeInfo, v21);
    v69.n64_u64[0] = v133;
    byte_4BF7D93 = 1;
  }
  v70.n64_u64[0] = vsub_f32(v69, v65).n64_u64[0];
  v71 = v68 - v66;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v72 = vaddv_f32(vmul_f32(v70, v70)) + (float)(v71 * v71);
  if ( !byte_4BF7D94 )
  {
    sub_1C2E12C(&System_Math_TypeInfo, v21);
    byte_4BF7D94 = 1;
  }
  v64.n64_f32[0] = sqrtf(v72);
  v134 = v64.n64_u64[0];
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v64.n64_u64[0] = v134;
  }
  if ( v64.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_4BF7D91 )
    {
      sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v21);
      byte_4BF7D91 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v73.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    v73.n64_u64[0] = vdiv_f32(v70, vdup_lane_s32(v64, 0)).n64_u64[0];
    z = v71 / v64.n64_f32[0];
  }
  gameObject = *v38;
  if ( !*v38 )
    goto LABEL_60;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant((WarBoardPieceData_o *)gameObject, 0LL) )
    lengthOnAttack = this->fields.lengthOnEncount;
  v77 = *(float *)&v134 - lengthOnAttack;
  if ( (float)(*(float *)&v134 - lengthOnAttack) > 0.0 )
  {
    v78 = vadd_f32(vmul_n_f32(v73, v77), *(float32x2_t *)(v19 + 40)).n64_u64[0];
    v79 = (float)(z * v77) + *(float *)(v19 + 48);
    *(_QWORD *)(v19 + 40) = v78;
    *(float *)(v19 + 48) = v79;
  }
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_60;
  WarBoardPieceData__CreatePieceEventVals((WarBoardPieceData_o *)gameObject, 0LL);
  v80 = sub_1C2E378(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v80, 0LL, 0LL);
  v81 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v81,
    (Il2CppObject *)v19,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__,
    0LL);
  if ( !v80 )
    goto LABEL_60;
  *(_QWORD *)(v80 + 32) = v81;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v80 + 32), (int64_t)v81, v82, v83, v84, v85, v86, v87);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v88 = this->fields.pieceData;
  if ( !v88 )
    goto LABEL_60;
  v89 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v19 + 24);
  if ( !gameObject )
    goto LABEL_60;
  v90 = *(float *)(v19 + 40);
  v91 = *(float *)(v19 + 44);
  v92 = *(float *)(v19 + 48);
  v136 = WarBoardManager__GetSquarePosition(
           (WarBoardManager_o *)gameObject,
           v88->fields._nowSquareIndex_k__BackingField,
           0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  x = v136.fields.x;
  y = v136.fields.y;
  v96 = v136.fields.z;
  v97 = (WarBoardMovePerformance_o *)sub_1C2E378(WarBoardMovePerformance_TypeInfo);
  v137.fields.x = v90;
  v137.fields.y = v91;
  v137.fields.z = v92;
  v138.fields.x = x;
  v138.fields.y = y;
  v138.fields.z = v96;
  v98 = (WarBoardTaskBase_o *)v97;
  WarBoardMovePerformance___ctor(v97, v89, v137, v138, pixelPerSecond, 0, 0LL);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_60;
  if ( WarBoardPieceData__IsEnabledMoveAfterAttack((WarBoardPieceData_o *)gameObject, 0LL) )
  {
    gameObject = *v38;
    if ( !*v38 )
      goto LABEL_60;
    IsEnabledMovedAfterDefend = WarBoardPieceData__IsEnabledMovedAfterDefend((WarBoardPieceData_o *)gameObject, 0LL);
  }
  else
  {
    IsEnabledMovedAfterDefend = 0;
  }
  *(_BYTE *)(v19 + 56) = IsEnabledMovedAfterDefend;
  v100 = (System_Func_bool__o *)sub_1C2E378(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v100,
    (Il2CppObject *)v19,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__,
    0LL);
  v101 = sub_1C2E378(WarBoardConditionalJumpTask_TypeInfo);
  WarBoardConditionalJumpTask___ctor((WarBoardConditionalJumpTask_o *)v101, v100, (WarBoardTaskBase_o *)v80, v98, 0LL);
  if ( !v101 )
LABEL_60:
    sub_1C2E388(gameObject, v21);
  v102 = (_QWORD *)(v101 + 40);
  v103 = *(System_Delegate_o **)(v101 + 40);
  v104 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v104 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  _9__65_3 = v104->static_fields->__9__65_3;
  if ( !_9__65_3 )
  {
    if ( !v104->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v104);
      v104 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    v106 = (Il2CppObject *)v104->static_fields->__9;
    _9__65_3 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__65_3,
      v106,
      Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__,
      0LL);
    v107 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v107->__9__65_3 = _9__65_3;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v107->__9__65_3, (int64_t)_9__65_3, v108, v109, v110, v111, v112, v113);
  }
  v114 = System_Delegate__Combine(v103, (System_Delegate_o *)_9__65_3, 0LL);
  v121 = (int64_t)v114;
  if ( v114 )
  {
    v122 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v114->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v102 = v114;
      if ( (WarBoardTaskBase_TaskCallback_c *)v114->klass == v122 )
        goto LABEL_54;
    }
    sub_1C2E648(v114);
  }
  *v102 = v121;
LABEL_54:
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v101 + 40), v121, v115, v116, v117, v118, v119, v120);
  v129 = v28->fields._items;
  v130 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v28->fields._version;
  if ( !v129 )
    goto LABEL_60;
  v131 = v28->fields._size;
  if ( (unsigned int)v131 >= v129->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      (Il2CppObject *)v101,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
  }
  else
  {
    v132 = &v129->obj.klass + v131;
    v28->fields._size = v131 + 1;
    v132[4] = (Il2CppClass *)v101;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v132 + 4), v101, v123, v124, v125, v126, v127, v128);
  }
  gameObject = *v30;
  if ( !*v30 )
    goto LABEL_60;
  WarBoardManager__AddTask_36732244(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v28,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAfterWallAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x22
  WarBoardData_o *gameObject; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_List_object__o *v26; // x20
  Il2CppObject *Instance; // x0
  WarBoardData_o **v28; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  WarBoardWallData_o *Wall; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x23
  WarBoardTaskBase_TaskCallback_o *v43; // x24
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v61; // x1
  int32x2_t v62; // d3
  float32x2_t v63; // d9
  float v64; // s10
  float v65; // s2
  float v66; // s8
  unsigned __int32 v67; // s1
  float32x2_t v68; // d0
  float32x2_t v69; // d9
  float v70; // s8
  float v71; // s10
  float32x2_t v72; // d0
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v75; // s2
  float v76; // s1
  __int64 v77; // x23
  WarBoardTaskBase_TaskCallback_o *v78; // x24
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct WarBoardPieceData_o *v85; // x8
  UnityEngine_GameObject_o *v86; // x25
  float v87; // s8
  float v88; // s9
  float v89; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float v93; // s14
  WarBoardMovePerformance_o *v94; // x0
  WarBoardTaskBase_o *v95; // x24
  System_Func_bool__o *v96; // x25
  WarBoardConditionalJumpTask_o *v97; // x19
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  struct System_Object_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  Il2CppClass **v107; // x0
  unsigned __int64 v108; // [xsp+0h] [xbp-A0h]
  unsigned __int64 v109; // [xsp+0h] [xbp-A0h]
  unsigned __int32 v110; // [xsp+0h] [xbp-A0h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v114; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4BFB0C8 & 1) == 0 )
  {
    sub_1C2E12C(&System_Func_bool__TypeInfo, *(_QWORD *)&squareIndex);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_1C2E12C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_1C2E12C(&WarBoardTaskBase_TaskCallback_TypeInfo, v9);
    sub_1C2E12C(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__, v10);
    sub_1C2E12C(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__, v11);
    sub_1C2E12C(
      &Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__,
      v12);
    sub_1C2E12C(&WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo, v13);
    sub_1C2E12C(&WarBoardCallbackTask_TypeInfo, v14);
    sub_1C2E12C(&WarBoardConditionalJumpTask_TypeInfo, v15);
    sub_1C2E12C(&WarBoardMovePerformance_TypeInfo, v16);
    byte_4BFB0C8 = 1;
  }
  v17 = sub_1C2E378(WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass67_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass67_0_o *)v17,
    0LL);
  if ( !v17 )
    goto LABEL_40;
  *(_QWORD *)(v17 + 24) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)this, v20, v21, v22, v23, v24, v25);
  *(_DWORD *)(v17 + 44) = squareIndex;
  v26 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v17 + 16) = Instance;
  v28 = (WarBoardData_o **)(v17 + 16);
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)Instance, v29, v30, v31, v32, v33, v34);
  if ( !*(_QWORD *)(v17 + 16) )
    goto LABEL_40;
  gameObject = *(WarBoardData_o **)(*(_QWORD *)(v17 + 16) + 440LL);
  if ( !gameObject )
    goto LABEL_40;
  Wall = WarBoardData__GetWall(gameObject, *(_DWORD *)(v17 + 44), 1, 0LL);
  *(_QWORD *)(v17 + 48) = Wall;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v17 + 48), (int64_t)Wall, v36, v37, v38, v39, v40, v41);
  v42 = sub_1C2E378(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v42, 0LL, 0LL);
  v43 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v43,
    (Il2CppObject *)v17,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__,
    0LL);
  if ( !v42 )
    goto LABEL_40;
  *(_QWORD *)(v42 + 32) = v43;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v42 + 32), (int64_t)v43, v44, v45, v46, v47, v48, v49);
  if ( !v26 )
    goto LABEL_40;
  items = v26->fields._items;
  v57 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v26->fields._version;
  if ( !items )
    goto LABEL_40;
  size = v26->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      (Il2CppObject *)v42,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
  }
  else
  {
    v59 = &items->obj.klass + size;
    v26->fields._size = size + 1;
    v59[4] = (Il2CppClass *)v42;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v59 + 4), v42, v50, v51, v52, v53, v54, v55);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_40;
  gameObject = *v28;
  if ( !*v28 )
    goto LABEL_40;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0LL);
  gameObject = *(WarBoardData_o **)(v17 + 16);
  *(UnityEngine_Vector3_o *)(v17 + 32) = SquarePosition;
  if ( !gameObject )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)v68.n64_u64 = WarBoardManager__GetSquarePosition(
                                            (WarBoardManager_o *)gameObject,
                                            *(_DWORD *)(v17 + 44),
                                            0LL);
  v63.n64_u64[0] = *(unsigned __int64 *)(v17 + 32);
  v64 = *(float *)(v17 + 40);
  v66 = v65;
  v68.n64_u32[1] = v67;
  if ( !byte_4BF7D93 )
  {
    v108 = v68.n64_u64[0];
    sub_1C2E12C(&System_Math_TypeInfo, v61);
    v68.n64_u64[0] = v108;
    byte_4BF7D93 = 1;
  }
  v69.n64_u64[0] = vsub_f32(v68, v63).n64_u64[0];
  v70 = v66 - v64;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v71 = vaddv_f32(vmul_f32(v69, v69)) + (float)(v70 * v70);
  if ( !byte_4BF7D94 )
  {
    sub_1C2E12C(&System_Math_TypeInfo, v61);
    byte_4BF7D94 = 1;
  }
  v62.n64_f32[0] = sqrtf(v71);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    v109 = v62.n64_u64[0];
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v62.n64_u64[0] = v109;
  }
  if ( v62.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_4BF7D91 )
    {
      v110 = v62.n64_u32[0];
      sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v61);
      v62.n64_u32[0] = v110;
      byte_4BF7D91 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v72.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    v72.n64_u64[0] = vdiv_f32(v69, vdup_lane_s32(v62, 0)).n64_u64[0];
    z = v70 / v62.n64_f32[0];
  }
  v75 = v62.n64_f32[0] - this->fields.lengthOnAttack;
  if ( v75 > 0.0 )
  {
    v76 = (float)(z * v75) + *(float *)(v17 + 40);
    *(float32x2_t *)(v17 + 32) = vadd_f32(vmul_n_f32(v72, v75), *(float32x2_t *)(v17 + 32));
    *(float *)(v17 + 40) = v76;
  }
  v77 = sub_1C2E378(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v77, 0LL, 0LL);
  v78 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v78,
    (Il2CppObject *)v17,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__,
    0LL);
  if ( !v77 )
    goto LABEL_40;
  *(_QWORD *)(v77 + 32) = v78;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v77 + 32), (int64_t)v78, v79, v80, v81, v82, v83, v84);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v85 = this->fields.pieceData;
  if ( !v85 )
    goto LABEL_40;
  v86 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v17 + 16);
  if ( !gameObject )
    goto LABEL_40;
  v87 = *(float *)(v17 + 32);
  v88 = *(float *)(v17 + 36);
  v89 = *(float *)(v17 + 40);
  v112 = WarBoardManager__GetSquarePosition(
           (WarBoardManager_o *)gameObject,
           v85->fields._nowSquareIndex_k__BackingField,
           0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  x = v112.fields.x;
  y = v112.fields.y;
  v93 = v112.fields.z;
  v94 = (WarBoardMovePerformance_o *)sub_1C2E378(WarBoardMovePerformance_TypeInfo);
  v113.fields.x = v87;
  v113.fields.y = v88;
  v113.fields.z = v89;
  v114.fields.x = x;
  v114.fields.y = y;
  v114.fields.z = v93;
  v95 = (WarBoardTaskBase_o *)v94;
  WarBoardMovePerformance___ctor(v94, v86, v113, v114, pixelPerSecond, 0, 0LL);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_40;
  *(_BYTE *)(v17 + 56) = WarBoardPieceData__IsEnabledMoveAfterAttack((WarBoardPieceData_o *)gameObject, 0LL);
  v96 = (System_Func_bool__o *)sub_1C2E378(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v96,
    (Il2CppObject *)v17,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__,
    0LL);
  v97 = (WarBoardConditionalJumpTask_o *)sub_1C2E378(WarBoardConditionalJumpTask_TypeInfo);
  WarBoardConditionalJumpTask___ctor(v97, v96, (WarBoardTaskBase_o *)v77, v95, 0LL);
  v104 = v26->fields._items;
  v105 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v26->fields._version;
  if ( !v104 )
    goto LABEL_40;
  v106 = v26->fields._size;
  if ( (unsigned int)v106 >= v104->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      (Il2CppObject *)v97,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
  }
  else
  {
    v107 = &v104->obj.klass + v106;
    v26->fields._size = v106 + 1;
    v107[4] = (Il2CppClass *)v97;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v107 + 4), (int64_t)v97, v98, v99, v100, v101, v102, v103);
  }
  gameObject = *v28;
  if ( !*v28 )
LABEL_40:
    sub_1C2E388(gameObject, v19);
  WarBoardManager__AddTask_36732244(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v26,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAttack(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  int64_t v32; // x23
  int64_t Instance; // x0
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t *v41; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceData_o *v43; // x22
  float v44; // s0
  float v45; // s1
  float v46; // s2
  float v47; // s11
  float v48; // s9
  float v49; // s10
  float v50; // s1
  float v51; // s2
  float v52; // s0
  float v53; // s8
  float v54; // s12
  WarBoardSquareData_o *Square; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  System_Collections_Generic_List_object__o *v62; // x20
  const MethodInfo *v63; // x2
  System_Int32_array *ParticipantVals; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v66; // x0
  int64_t v67; // x25
  WarBoardTaskBase_TaskCallback_c **v68; // x19
  System_Delegate_o **v69; // x26
  System_Delegate_o *v70; // x27
  WarBoardTaskBase_TaskCallback_o *v71; // x28
  System_Delegate_o *v72; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  WarBoardPieceBaseComponent_c *v79; // x8
  WarBoardTaskBase_TaskCallback_c *v80; // x1
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  struct System_Object_array *items; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  float v91; // s13
  float v92; // s14
  float v93; // s12
  float v94; // s8
  float x; // s14
  float y; // s13
  float z; // s15
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s12
  float v100; // s0
  float v101; // s3
  float v102; // s1
  float v103; // s2
  float v104; // s0
  float v105; // s15
  float v106; // s8
  float v107; // s13
  UnityEngine_GameObject_o *gameObject; // x0
  float pixelPerSecond; // s12
  UnityEngine_GameObject_o *v110; // x26
  WarBoardMovePerformance_o *v111; // x0
  Il2CppObject *v112; // x25
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  struct System_Object_array *v119; // x8
  _QWORD *v120; // x9
  __int64 v121; // x10
  Il2CppClass **v122; // x0
  System_Collections_Generic_List_object__o *v123; // x25
  System_Collections_Generic_List_WarBoardTaskBase__o *v124; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v125; // x0
  float lengthMoveAttack; // s0
  float v127; // s8
  float v128; // s12
  float v129; // s13
  UnityEngine_GameObject_o *v130; // x0
  float v131; // s14
  UnityEngine_GameObject_o *v132; // x21
  WarBoardMovePerformance_o *v133; // x0
  int64_t v134; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *v135; // x21
  WarBoardMessageMaster_o *v136; // x23
  int32_t id; // w26
  System_Collections_Generic_List_object__o *v138; // x0
  int32_t breakPoint_k__BackingField; // w27
  int32_t v140; // w2
  bool v141; // w4
  WarBoardMessageMaster_o *v142; // x0
  int32_t v143; // w1
  int32_t v144; // w3
  __int64 v145; // x24
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  Il2CppObject **v152; // x22
  __int64 v153; // x1
  float lengthOnEncount; // s0
  float v155; // s1
  float v156; // s12
  float v157; // s2
  float v158; // s0
  float v159; // s8
  float v160; // s14
  float v161; // s9
  float v162; // s11
  float v163; // s15
  float v164; // s13
  float v165; // s14
  float v166; // s10
  float v167; // s12
  float v168; // s13
  float v169; // s14
  float v170; // s15
  struct UnityEngine_Vector3_StaticFields *v171; // x8
  float v172; // s1
  _QWORD *monitor; // x8
  __int64 v174; // x8
  float v175; // s10
  float ZoomSize; // s0
  __int64 v177; // x8
  __int64 v178; // x8
  __int64 v179; // x8
  const MethodInfo_378C1F0 *v180; // x2
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  __int64 v182; // x8
  WarBoardManager_o *v183; // x23
  float v184; // s8
  float v185; // s10
  float encountCameraSize; // s0
  int64_t v187; // x2
  int32_t v188; // w3
  System_String_o *v189; // x4
  BattleSetupInfo_o *v190; // x5
  FollowerInfo_o *v191; // x6
  PartyListViewItem_o *v192; // x7
  struct System_Object_array *v193; // x8
  _QWORD *v194; // x9
  __int64 v195; // x10
  int64_t v196; // x1
  Il2CppClass **v197; // x0
  System_Collections_Generic_IEnumerable_T__o *v198; // x23
  int64_t v199; // x2
  int32_t v200; // w3
  System_String_o *v201; // x4
  BattleSetupInfo_o *v202; // x5
  FollowerInfo_o *v203; // x6
  PartyListViewItem_o *v204; // x7
  WarBoardTaskBase_array *v205; // x23
  WarBoardManager_o *v206; // x24
  int v207; // s0
  int64_t v210; // x2
  int32_t v211; // w3
  System_String_o *v212; // x4
  BattleSetupInfo_o *v213; // x5
  FollowerInfo_o *v214; // x6
  PartyListViewItem_o *v215; // x7
  int64_t v216; // x24
  int64_t v217; // x2
  int32_t v218; // w3
  System_String_o *v219; // x4
  BattleSetupInfo_o *v220; // x5
  FollowerInfo_o *v221; // x6
  PartyListViewItem_o *v222; // x7
  int64_t v223; // x24
  const MethodInfo *v224; // x2
  int64_t v225; // x2
  int32_t v226; // w3
  System_String_o *v227; // x4
  BattleSetupInfo_o *v228; // x5
  FollowerInfo_o *v229; // x6
  PartyListViewItem_o *v230; // x7
  int64_t v231; // x22
  WarBoardOrthostichySchedule_o *v232; // x22
  int64_t v233; // x2
  int32_t v234; // w3
  System_String_o *v235; // x4
  BattleSetupInfo_o *v236; // x5
  FollowerInfo_o *v237; // x6
  PartyListViewItem_o *v238; // x7
  WarBoardParallelSchedule_o *v239; // x21
  int64_t v240; // x2
  int32_t v241; // w3
  System_String_o *v242; // x4
  BattleSetupInfo_o *v243; // x5
  FollowerInfo_o *v244; // x6
  PartyListViewItem_o *v245; // x7
  struct System_Object_array *v246; // x8
  _QWORD *v247; // x9
  __int64 v248; // x10
  Il2CppClass **v249; // x0
  PartyOrganizationUtility_o *v250; // x0
  int64_t v251; // x1
  int64_t v252; // x2
  int32_t v253; // w3
  System_String_o *v254; // x4
  BattleSetupInfo_o *v255; // x5
  FollowerInfo_o *v256; // x6
  PartyListViewItem_o *v257; // x7
  WarBoardPieceBaseComponent___c_c *v258; // x8
  System_Action_o *_9__63_1; // x23
  Il2CppObject *v260; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v261; // x0
  int64_t v262; // x2
  int32_t v263; // w3
  System_String_o *v264; // x4
  BattleSetupInfo_o *v265; // x5
  FollowerInfo_o *v266; // x6
  PartyListViewItem_o *v267; // x7
  struct UIWidget_o **p_breakPointParent; // x23
  System_Delegate_o *breakPointParent; // x25
  WarBoardTaskBase_TaskCallback_o *v270; // x26
  System_Delegate_o *v271; // x0
  int64_t v272; // x2
  int32_t v273; // w3
  System_String_o *v274; // x4
  BattleSetupInfo_o *v275; // x5
  FollowerInfo_o *v276; // x6
  PartyListViewItem_o *v277; // x7
  WarBoardTaskBase_TaskCallback_c *v278; // x1
  int64_t v279; // x2
  int32_t v280; // w3
  System_String_o *v281; // x4
  BattleSetupInfo_o *v282; // x5
  FollowerInfo_o *v283; // x6
  PartyListViewItem_o *v284; // x7
  struct System_Object_array *v285; // x8
  _QWORD *v286; // x9
  __int64 v287; // x10
  Il2CppClass **v288; // x0
  System_Delegate_o *v289; // x23
  Il2CppObject *v290; // x22
  WarBoardTaskBase_TaskCallback_o *v291; // x24
  WarBoardPieceBaseComponent_c *v292; // x0
  WarBoardTaskBase_TaskCallback_c *v293; // x1
  System_Delegate_o *v294; // x22
  WarBoardPieceBaseComponent___c_c *v295; // x0
  WarBoardTaskBase_TaskCallback_o *_9__63_4; // x23
  Il2CppObject *v297; // x24
  struct WarBoardPieceBaseComponent___c_StaticFields *v298; // x0
  int64_t v299; // x2
  int32_t v300; // w3
  System_String_o *v301; // x4
  BattleSetupInfo_o *v302; // x5
  FollowerInfo_o *v303; // x6
  PartyListViewItem_o *v304; // x7
  WarBoardPieceBaseComponent_c *v305; // x0
  int64_t v306; // x2
  int32_t v307; // w3
  System_String_o *v308; // x4
  BattleSetupInfo_o *v309; // x5
  FollowerInfo_o *v310; // x6
  PartyListViewItem_o *v311; // x7
  WarBoardTaskBase_TaskCallback_c *v312; // x1
  __int64 v313; // x0
  float v314; // [xsp+0h] [xbp-E0h]
  float v315; // [xsp+4h] [xbp-DCh]
  float v316; // [xsp+10h] [xbp-D0h]
  float v317; // [xsp+14h] [xbp-CCh]
  WarBoardManager_o **v318; // [xsp+18h] [xbp-C8h]
  float v319; // [xsp+24h] [xbp-BCh]
  System_Nullable_float__o size; // [xsp+28h] [xbp-B8h] BYREF
  System_Nullable_Vector3__o v321; // [xsp+30h] [xbp-B0h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v323; // 0:x3.8
  System_Nullable_Vector3__o v324; // 0:x0.16
  UnityEngine_Vector3_o v325; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v326; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v327; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v328; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v329; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v330; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4BFB0C4 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&squareIndex);
    sub_1C2E12C(&Method_DataManager_GetMaster_WarBoardMessageMaster___, v5);
    sub_1C2E12C(&DataManager_TypeInfo, v6);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__, v12);
    sub_1C2E12C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v13);
    sub_1C2E12C(&Method_System_Nullable_Vector3___ctor__, v14);
    sub_1C2E12C(&Method_System_Nullable_float___ctor__, v15);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    sub_1C2E12C(&WarBoardTaskBase_TaskCallback_TypeInfo, v17);
    sub_1C2E12C(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__, v18);
    sub_1C2E12C(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__, v19);
    sub_1C2E12C(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__, v20);
    sub_1C2E12C(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__, v21);
    sub_1C2E12C(&WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo, v22);
    sub_1C2E12C(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__, v23);
    sub_1C2E12C(&WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo, v24);
    sub_1C2E12C(&WarBoardPieceBaseComponent___c_TypeInfo, v25);
    sub_1C2E12C(&WarBoardCallbackTask_TypeInfo, v26);
    sub_1C2E12C(&WarBoardMovePerformance_TypeInfo, v27);
    sub_1C2E12C(&WarBoardOrthostichySchedule_TypeInfo, v28);
    sub_1C2E12C(&WarBoardParallelSchedule_TypeInfo, v29);
    sub_1C2E12C(&WarBoardTaskBase___TypeInfo, v30);
    sub_1C2E12C(&StringLiteral_9081/*"MasterDamage"*/, v31);
    byte_4BFB0C4 = 1;
  }
  v32 = sub_1C2E378(WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass63_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass63_0_o *)v32,
    0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v32 )
    goto LABEL_157;
  *(_QWORD *)(v32 + 24) = Instance;
  v41 = (int64_t *)(v32 + 24);
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v32 + 24), Instance, v35, v36, v37, v38, v39, v40);
  if ( !*(_QWORD *)(v32 + 24) )
    goto LABEL_157;
  Instance = *(_QWORD *)(*(_QWORD *)(v32 + 24) + 440LL);
  if ( !Instance )
    goto LABEL_157;
  Instance = (int64_t)WarBoardData__GetPiece_36546836((WarBoardData_o *)Instance, squareIndex, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_157;
  v43 = (WarBoardPieceData_o *)Instance;
  Instance = *v41;
  if ( !*v41 )
    goto LABEL_157;
  *(UnityEngine_Vector3_o *)&v44 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)Instance,
                                     pieceData->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  Instance = *v41;
  if ( !*v41 )
    goto LABEL_157;
  v47 = v44;
  v48 = v45;
  v49 = v46;
  *(UnityEngine_Vector3_o *)(&v50 - 1) = WarBoardManager__GetSquarePosition(
                                           (WarBoardManager_o *)Instance,
                                           squareIndex,
                                           0LL);
  v319 = v52;
  if ( !*v41 )
    goto LABEL_157;
  Instance = *(_QWORD *)(*v41 + 440);
  if ( !Instance )
    goto LABEL_157;
  v53 = v50;
  v54 = v51;
  Square = WarBoardData__GetSquare((WarBoardData_o *)Instance, squareIndex, 0LL);
  *(_QWORD *)(v32 + 16) = Square;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v32 + 16), (int64_t)Square, v56, v57, v58, v59, v60, v61);
  v62 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v62,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  ParticipantVals = WarBoardPieceBaseComponent__GetParticipantVals(this, v43, v63);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (int64_t)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 42, ParticipantVals, 0LL);
  if ( !v62 )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    v62,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 43, ParticipantVals, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v62,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v318 = (WarBoardManager_o **)(v32 + 24);
  v66 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 41, ParticipantVals, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v62,
    (System_Collections_Generic_IEnumerable_T__o *)v66,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v67 = sub_1C2E378(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v67, 0LL, 0LL);
  if ( !v67 )
    goto LABEL_157;
  v68 = &WarBoardTaskBase_TaskCallback_TypeInfo;
  v69 = (System_Delegate_o **)(v67 + 32);
  v70 = *(System_Delegate_o **)(v67 + 32);
  v71 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v71,
    (Il2CppObject *)v32,
    Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__,
    0LL);
  v72 = System_Delegate__Combine(v70, (System_Delegate_o *)v71, 0LL);
  v79 = (WarBoardPieceBaseComponent_c *)v72;
  if ( v72 )
  {
    v80 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v72->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_152;
    *v69 = v72;
    if ( (WarBoardTaskBase_TaskCallback_c *)v72->klass != v80 )
      goto LABEL_152;
  }
  else
  {
    *v69 = 0LL;
  }
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v67 + 32), (int64_t)v72, v73, v74, v75, v76, v77, v78);
  items = v62->fields._items;
  v88 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v62->fields._version;
  if ( !items )
    goto LABEL_157;
  v89 = v62->fields._size;
  if ( (unsigned int)v89 >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v62,
      (Il2CppObject *)v67,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
  }
  else
  {
    v90 = &items->obj.klass + v89;
    v62->fields._size = v89 + 1;
    v90[4] = (Il2CppClass *)v67;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v90 + 4), v67, v81, v82, v83, v84, v85, v86);
  }
  if ( !byte_4BF7D93 )
  {
    sub_1C2E12C(&System_Math_TypeInfo, v34);
    byte_4BF7D93 = 1;
  }
  v316 = v54;
  v317 = v53;
  v91 = v53 - v48;
  v92 = v319 - v47;
  v93 = v54 - v49;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4BF7D94 )
  {
    sub_1C2E12C(&System_Math_TypeInfo, v34);
    byte_4BF7D94 = 1;
  }
  Instance = (int64_t)System_Math_TypeInfo;
  v94 = sqrtf((float)(v93 * v93) + (float)((float)(v92 * v92) + (float)(v91 * v91)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v94 <= 0.00001 )
  {
    if ( !byte_4BF7D91 )
    {
      Instance = sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v34);
      byte_4BF7D91 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    x = v92 / v94;
    y = v91 / v94;
    z = v93 / v94;
  }
  if ( !v43 )
    goto LABEL_157;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant(v43, 0LL) )
    lengthOnAttack = this->fields.lengthOnEncount;
  v100 = v94 - lengthOnAttack;
  if ( (float)(v94 - lengthOnAttack) > 0.0 )
  {
    v101 = z;
    v315 = y;
    v102 = x * v100;
    v103 = y * v100;
    v104 = z * v100;
    v105 = v48;
    v106 = v47;
    v314 = v101;
    v47 = v47 + v102;
    v48 = v48 + v103;
    v107 = v49 + v104;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    pixelPerSecond = this->fields.pixelPerSecond;
    v110 = gameObject;
    v111 = (WarBoardMovePerformance_o *)sub_1C2E378(WarBoardMovePerformance_TypeInfo);
    v325.fields.x = v106;
    v325.fields.y = v105;
    v325.fields.z = v49;
    v329.fields.x = v47;
    v329.fields.y = v48;
    v329.fields.z = v107;
    v112 = (Il2CppObject *)v111;
    v49 = v107;
    WarBoardMovePerformance___ctor(v111, v110, v325, v329, pixelPerSecond, 5, 0LL);
    v119 = v62->fields._items;
    v120 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v62->fields._version;
    if ( !v119 )
      goto LABEL_157;
    v121 = v62->fields._size;
    if ( (unsigned int)v121 >= v119->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v62,
        v112,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
    }
    else
    {
      v122 = &v119->obj.klass + v121;
      v62->fields._size = v121 + 1;
      v122[4] = (Il2CppClass *)v112;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v122 + 4), (int64_t)v112, v113, v114, v115, v116, v117, v118);
    }
    y = v315;
    z = v314;
  }
  v123 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v123,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (int64_t)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 1, ParticipantVals, 0LL);
  if ( !v123 )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    v123,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v124 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 19, ParticipantVals, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v123,
    (System_Collections_Generic_IEnumerable_T__o *)v124,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v125 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 39, ParticipantVals, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v123,
    (System_Collections_Generic_IEnumerable_T__o *)v125,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !WarBoardPieceData__get_isMaster(v43, 0LL) )
  {
    v145 = sub_1C2E378(WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo);
    WarBoardPieceBaseComponent___c__DisplayClass63_1___ctor(
      (WarBoardPieceBaseComponent___c__DisplayClass63_1_o *)v145,
      0LL);
    if ( v145 )
    {
      *(_QWORD *)(v145 + 32) = v32;
      v152 = (Il2CppObject **)(v145 + 32);
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v145 + 32), v32, v146, v147, v148, v149, v150, v151);
      System_Collections_Generic_List_object___AddRange(
        v62,
        (System_Collections_Generic_IEnumerable_T__o *)v123,
        (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      lengthOnEncount = this->fields.lengthOnEncount;
      v155 = x * lengthOnEncount;
      v156 = v319 - (float)(x * lengthOnEncount);
      v157 = y * lengthOnEncount;
      v158 = z * lengthOnEncount;
      v159 = v47 + v155;
      v160 = v317 - v157;
      v161 = v48 + v157;
      v162 = v49 + v158;
      v163 = v316 - v158;
      if ( !byte_4BF7D94 )
      {
        sub_1C2E12C(&System_Math_TypeInfo, v153);
        byte_4BF7D94 = 1;
      }
      v164 = v156 - v159;
      v165 = v160 - v161;
      v166 = v163 - v162;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v167 = sqrtf((float)(v166 * v166) + (float)((float)(v164 * v164) + (float)(v165 * v165)));
      if ( v167 <= 0.00001 )
      {
        if ( !byte_4BF7D91 )
        {
          sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v153);
          byte_4BF7D91 = 1;
        }
        v171 = UnityEngine_Vector3_TypeInfo->static_fields;
        v168 = v171->zeroVector.fields.x;
        v169 = v171->zeroVector.fields.y;
        v170 = v171->zeroVector.fields.z;
      }
      else
      {
        v168 = v164 / v167;
        v169 = v165 / v167;
        v170 = v166 / v167;
      }
      if ( !byte_4BF7D93 )
      {
        sub_1C2E12C(&System_Math_TypeInfo, v153);
        byte_4BF7D93 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      Instance = ((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._35_GetIconLocalPosition.method)(
                   this,
                   this->klass->vtable._36_OnShowDamagePopup.methodPtr);
      v68 = (WarBoardTaskBase_TaskCallback_c **)(v32 + 24);
      if ( *v152 )
      {
        monitor = (*v152)[1].monitor;
        if ( monitor )
        {
          v174 = monitor[6];
          if ( v174 )
          {
            Instance = *(_QWORD *)(v174 + 80);
            if ( Instance )
            {
              v175 = v172;
              ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)Instance, 0LL);
              v177 = *(_QWORD *)(v145 + 32);
              *(float *)(v145 + 16) = ZoomSize;
              if ( v177 )
              {
                v178 = *(_QWORD *)(v177 + 24);
                if ( v178 )
                {
                  v179 = *(_QWORD *)(v178 + 48);
                  if ( v179 )
                  {
                    Instance = *(_QWORD *)(v179 + 72);
                    if ( Instance )
                    {
                      ScrlPos = MapScroll__GetScrlPos((MapScroll_o *)Instance, 0LL);
                      v182 = *(_QWORD *)(v145 + 32);
                      *(UnityEngine_Vector2_o *)(v145 + 20) = ScrlPos;
                      if ( v182 )
                      {
                        v183 = *(WarBoardManager_o **)(v182 + 24);
                        *(_QWORD *)&v324.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                        v184 = v159 + (float)((float)(v167 * v168) * 0.5);
                        v185 = (float)(v161 + (float)((float)(v167 * v169) * 0.5)) + v175;
                        *(_QWORD *)&v324.fields.hasValue = &v321;
                        v327.fields.x = v184;
                        v327.fields.y = v185;
                        v327.fields.z = v162 + (float)((float)(v167 * v170) * 0.5);
                        *(_QWORD *)&v321.fields.hasValue = 0LL;
                        *(_QWORD *)&v321.fields.value.fields.y = 0LL;
                        System_Nullable_Vector3____ctor(v324, v327, v180);
                        encountCameraSize = this->fields.encountCameraSize;
                        p_size = (System_Nullable_float__o)&size;
                        size = 0LL;
                        System_Nullable_float____ctor(
                          p_size,
                          encountCameraSize,
                          (const MethodInfo_378A18C *)Method_System_Nullable_float___ctor__);
                        if ( v183 )
                        {
                          v323 = size;
                          Instance = (int64_t)WarBoardManager__GetCameraPerformanceTask(v183, v321, v323, 1, 0, 1, 0LL);
                          v193 = v62->fields._items;
                          v194 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                          ++v62->fields._version;
                          if ( v193 )
                          {
                            v195 = v62->fields._size;
                            v196 = Instance;
                            if ( (unsigned int)v195 >= v193->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v62,
                                (Il2CppObject *)Instance,
                                *(const MethodInfo_366B8AC **)(*(_QWORD *)(v194[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v197 = &v193->obj.klass + v195;
                              v62->fields._size = v195 + 1;
                              v197[4] = (Il2CppClass *)v196;
                              sub_1C2E0D0(
                                (PartyOrganizationUtility_o *)(v197 + 4),
                                v196,
                                v187,
                                v188,
                                v189,
                                v190,
                                v191,
                                v192);
                            }
                            if ( *v152 )
                            {
                              Instance = (int64_t)(*v152)[1].monitor;
                              if ( Instance )
                              {
                                v328.fields.x = v184;
                                v328.fields.y = v185;
                                v328.fields.z = v162 + (float)((float)(v167 * v170) * 0.5);
                                Instance = (int64_t)WarBoardManager__CreateEncountkEffectTask(
                                                      (WarBoardManager_o *)Instance,
                                                      v328,
                                                      1,
                                                      0LL);
                                v258 = WarBoardPieceBaseComponent___c_TypeInfo;
                                this = (WarBoardPieceBaseComponent_o *)Instance;
                                if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
                                  v258 = WarBoardPieceBaseComponent___c_TypeInfo;
                                }
                                _9__63_1 = v258->static_fields->__9__63_1;
                                if ( !_9__63_1 )
                                {
                                  if ( !v258->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(v258);
                                    v258 = WarBoardPieceBaseComponent___c_TypeInfo;
                                  }
                                  v260 = (Il2CppObject *)v258->static_fields->__9;
                                  _9__63_1 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    _9__63_1,
                                    v260,
                                    Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__,
                                    0LL);
                                  v261 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
                                  v261->__9__63_1 = _9__63_1;
                                  sub_1C2E0D0(
                                    (PartyOrganizationUtility_o *)&v261->__9__63_1,
                                    (int64_t)_9__63_1,
                                    v262,
                                    v263,
                                    v264,
                                    v265,
                                    v266,
                                    v267);
                                }
                                if ( this )
                                {
                                  this->fields.currentActionPointLabel = (struct UILabel_o *)_9__63_1;
                                  sub_1C2E0D0(
                                    (PartyOrganizationUtility_o *)&this->fields.currentActionPointLabel,
                                    (int64_t)_9__63_1,
                                    v252,
                                    v253,
                                    v254,
                                    v255,
                                    v256,
                                    v257);
                                  p_breakPointParent = &this->fields.breakPointParent;
                                  breakPointParent = (System_Delegate_o *)this->fields.breakPointParent;
                                  v270 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(WarBoardTaskBase_TaskCallback_TypeInfo);
                                  WarBoardTaskBase_TaskCallback___ctor(
                                    v270,
                                    (Il2CppObject *)v145,
                                    Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__,
                                    0LL);
                                  v271 = System_Delegate__Combine(breakPointParent, (System_Delegate_o *)v270, 0LL);
                                  v79 = (WarBoardPieceBaseComponent_c *)v271;
                                  if ( v271 )
                                  {
                                    v278 = WarBoardTaskBase_TaskCallback_TypeInfo;
                                    if ( (WarBoardTaskBase_TaskCallback_c *)v271->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
                                      goto LABEL_152;
                                    *p_breakPointParent = (struct UIWidget_o *)v271;
                                    if ( (WarBoardTaskBase_TaskCallback_c *)v271->klass != v278 )
                                      goto LABEL_152;
                                  }
                                  else
                                  {
                                    *p_breakPointParent = 0LL;
                                  }
                                  sub_1C2E0D0(
                                    (PartyOrganizationUtility_o *)&this->fields.breakPointParent,
                                    (int64_t)v271,
                                    v272,
                                    v273,
                                    v274,
                                    v275,
                                    v276,
                                    v277);
                                  v285 = v62->fields._items;
                                  v286 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                                  ++v62->fields._version;
                                  if ( v285 )
                                  {
                                    v287 = v62->fields._size;
                                    if ( (unsigned int)v287 >= v285->max_length )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        v62,
                                        (Il2CppObject *)this,
                                        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v286[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v288 = &v285->obj.klass + v287;
                                      v62->fields._size = v287 + 1;
                                      v288[4] = (Il2CppClass *)this;
                                      sub_1C2E0D0(
                                        (PartyOrganizationUtility_o *)(v288 + 4),
                                        (int64_t)this,
                                        v279,
                                        v280,
                                        v281,
                                        v282,
                                        v283,
                                        v284);
                                    }
                                    Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                                          v62,
                                                          0,
                                                          (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
                                    if ( Instance )
                                    {
                                      this = (WarBoardPieceBaseComponent_o *)(Instance + 32);
                                      v289 = *(System_Delegate_o **)(Instance + 32);
                                      v290 = *v152;
                                      v291 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(WarBoardTaskBase_TaskCallback_TypeInfo);
                                      WarBoardTaskBase_TaskCallback___ctor(
                                        v291,
                                        v290,
                                        Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__,
                                        0LL);
                                      v292 = (WarBoardPieceBaseComponent_c *)System_Delegate__Combine(
                                                                               v289,
                                                                               (System_Delegate_o *)v291,
                                                                               0LL);
                                      v79 = v292;
                                      if ( v292 )
                                      {
                                        v293 = WarBoardTaskBase_TaskCallback_TypeInfo;
                                        if ( v292->_1.image != WarBoardTaskBase_TaskCallback_TypeInfo )
                                          goto LABEL_152;
                                        this->klass = v292;
                                        if ( v292->_1.image != v293 )
                                          goto LABEL_152;
                                      }
                                      else
                                      {
                                        this->klass = 0LL;
                                      }
                                      v250 = (PartyOrganizationUtility_o *)this;
                                      v251 = (int64_t)v79;
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
    sub_1C2E388(Instance, v34);
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v127 = v47 + (float)(x * lengthMoveAttack);
  v128 = v48 + (float)(y * lengthMoveAttack);
  v129 = v49 + (float)(z * lengthMoveAttack);
  v130 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v131 = this->fields.pixelPerSecond;
  v132 = v130;
  v133 = (WarBoardMovePerformance_o *)sub_1C2E378(WarBoardMovePerformance_TypeInfo);
  v326.fields.x = v127;
  v326.fields.y = v128;
  v326.fields.z = v129;
  v330.fields.x = v47;
  v330.fields.y = v48;
  v330.fields.z = v49;
  v134 = (int64_t)v133;
  WarBoardMovePerformance___ctor(v133, v132, v326, v330, v131, 4, 0LL);
  v135 = (System_Collections_Generic_List_WarBoardTaskBase__o *)WarBoardPieceData__DecrementBreakPointPerformance(
                                                                  v43,
                                                                  0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  v68 = (WarBoardTaskBase_TaskCallback_c **)(v32 + 24);
  if ( !*v318 )
    goto LABEL_157;
  v136 = (WarBoardMessageMaster_o *)Instance;
  Instance = (int64_t)(*v318)->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_157;
  id = WarBoardData__get_id((WarBoardData_o *)Instance, 0LL);
  v138 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v138,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  breakPoint_k__BackingField = v43->fields._breakPoint_k__BackingField;
  Instance = WarBoardPieceData__get_isPlayerMaster(v43, 0LL);
  if ( !v136 )
    goto LABEL_157;
  if ( (Instance & 1) != 0 )
  {
    v140 = 11;
    v141 = 1;
    v142 = v136;
    v143 = id;
    v144 = breakPoint_k__BackingField;
  }
  else
  {
    v140 = 9;
    v142 = v136;
    v143 = id;
    v144 = breakPoint_k__BackingField;
    v141 = 0;
  }
  Instance = (int64_t)WarBoardMessageMaster__GetMessageTasks(v142, v143, v140, v144, v141, 0LL);
  v198 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( !Instance )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Instance,
    (System_Collections_Generic_IEnumerable_T__o *)v123,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v198,
         (const MethodInfo_2FDD22C *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_object___AddRange(
      v62,
      v198,
      (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = sub_1C2E1D4(WarBoardTaskBase___TypeInfo, 5LL);
  if ( !Instance )
    goto LABEL_157;
  v205 = (WarBoardTaskBase_array *)Instance;
  if ( v134 )
  {
    Instance = sub_1C2E268(v134, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
    if ( !Instance )
      goto LABEL_159;
  }
  if ( !v205->max_length )
    goto LABEL_158;
  v205->m_Items[0] = (WarBoardTaskBase_o *)v134;
  sub_1C2E0D0((PartyOrganizationUtility_o *)v205->m_Items, v134, v199, v200, v201, v202, v203, v204);
  Instance = (int64_t)v43->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_157;
  v206 = *v318;
  Instance = (*(__int64 (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 856LL))(
               Instance,
               *(_QWORD *)(*(_QWORD *)Instance + 864LL));
  if ( !v206 )
    goto LABEL_157;
  Instance = (int64_t)WarBoardManager__CreateAttackEffectTask(v206, *(UnityEngine_Vector3_o *)&v207, 0, 0LL);
  v216 = Instance;
  if ( Instance )
  {
    Instance = sub_1C2E268(Instance, v205->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( v205->max_length <= 1 )
    goto LABEL_158;
  v205->m_Items[1] = (WarBoardTaskBase_o *)v216;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v205->m_Items[1], v216, v210, v211, v212, v213, v214, v215);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (int64_t)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0LL);
  v223 = Instance;
  if ( Instance )
  {
    Instance = sub_1C2E268(Instance, v205->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( v205->max_length <= 2 )
    goto LABEL_158;
  v205->m_Items[2] = (WarBoardTaskBase_o *)v223;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v205->m_Items[2], v223, v217, v218, v219, v220, v221, v222);
  Instance = (int64_t)v43->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_157;
  Instance = (int64_t)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)Instance,
                        (System_String_o *)StringLiteral_9081/*"MasterDamage"*/,
                        v224);
  v231 = Instance;
  if ( Instance )
  {
    Instance = sub_1C2E268(Instance, v205->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( v205->max_length <= 3 )
    goto LABEL_158;
  v205->m_Items[3] = (WarBoardTaskBase_o *)v231;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v205->m_Items[3], v231, v225, v226, v227, v228, v229, v230);
  v232 = (WarBoardOrthostichySchedule_o *)sub_1C2E378(WarBoardOrthostichySchedule_TypeInfo);
  WarBoardOrthostichySchedule___ctor_36932928(v232, v135, 0LL);
  if ( v232 )
  {
    Instance = sub_1C2E268(v232, v205->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_159:
      v313 = sub_1C2E3AC();
      sub_1C2E254(v313, 0LL);
    }
  }
  if ( v205->max_length <= 4 )
LABEL_158:
    sub_1C2E390(Instance, v34);
  v205->m_Items[4] = (WarBoardTaskBase_o *)v232;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v205->m_Items[4], (int64_t)v232, v233, v234, v235, v236, v237, v238);
  v239 = (WarBoardParallelSchedule_o *)sub_1C2E378(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor(v239, v205, 0LL);
  v246 = v62->fields._items;
  v247 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v62->fields._version;
  if ( !v246 )
    goto LABEL_157;
  v248 = v62->fields._size;
  if ( (unsigned int)v248 >= v246->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v62,
      (Il2CppObject *)v239,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v247[4] + 192LL) + 112LL));
    goto LABEL_141;
  }
  v249 = &v246->obj.klass + v248;
  v62->fields._size = v248 + 1;
  v249[4] = (Il2CppClass *)v239;
  v250 = (PartyOrganizationUtility_o *)(v249 + 4);
  v251 = (int64_t)v239;
LABEL_140:
  sub_1C2E0D0(v250, v251, v240, v241, v242, v243, v244, v245);
LABEL_141:
  if ( v62->fields._size < 1 )
    return;
  Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v62,
                        0,
                        (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
  if ( !Instance )
    goto LABEL_157;
  this = (WarBoardPieceBaseComponent_o *)(Instance + 32);
  v294 = *(System_Delegate_o **)(Instance + 32);
  v295 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v295 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  _9__63_4 = v295->static_fields->__9__63_4;
  if ( !_9__63_4 )
  {
    if ( !v295->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v295);
      v295 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    v297 = (Il2CppObject *)v295->static_fields->__9;
    _9__63_4 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(_9__63_4, v297, Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__, 0LL);
    v298 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v298->__9__63_4 = _9__63_4;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v298->__9__63_4, (int64_t)_9__63_4, v299, v300, v301, v302, v303, v304);
  }
  v305 = (WarBoardPieceBaseComponent_c *)System_Delegate__Combine(v294, (System_Delegate_o *)_9__63_4, 0LL);
  v79 = v305;
  if ( !v305 )
    goto LABEL_153;
  v312 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( v305->_1.image != WarBoardTaskBase_TaskCallback_TypeInfo || (this->klass = v305, v305->_1.image != v312) )
  {
LABEL_152:
    sub_1C2E648(v79);
LABEL_153:
    this->klass = v79;
  }
  sub_1C2E0D0((PartyOrganizationUtility_o *)this, (int64_t)v79, v306, v307, v308, v309, v310, v311);
  Instance = (int64_t)*v68;
  if ( !*v68 )
    goto LABEL_157;
  WarBoardManager__AddTask_36732244(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v62,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__OnAttackResume(
        WarBoardPieceBaseComponent_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WarBoardData_o *Instance; // x0
  __int64 v7; // x1
  WarBoardManager_o *v8; // x22
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceData_o *v10; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  float v14; // s11
  float v15; // s12
  float v16; // s13
  float v17; // s8
  float v18; // s15
  float v19; // s14
  float v20; // s11
  float v21; // s12
  float v22; // s13
  float v23; // s14
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s8
  WarBoardControlUiDataComponent_c *v26; // x0
  float v27; // [xsp+4Ch] [xbp-24h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BFB0C5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&squareIndex);
    sub_1C2E12C(&WarBoardControlUiDataComponent_TypeInfo, v5);
    byte_4BFB0C5 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v8 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_27;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_36546836(Instance, squareIndex, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_27;
  v10 = (WarBoardPieceData_o *)Instance;
  SquarePosition = WarBoardManager__GetSquarePosition(v8, pieceData->fields._nowSquareIndex_k__BackingField, 0LL);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v29 = WarBoardManager__GetSquarePosition(v8, squareIndex, 0LL);
  v14 = v29.fields.x;
  v15 = v29.fields.y;
  v16 = v29.fields.z;
  if ( !byte_4BF7D93 )
  {
    sub_1C2E12C(&System_Math_TypeInfo, v7);
    byte_4BF7D93 = 1;
  }
  v27 = x;
  v17 = v14 - x;
  v18 = v15 - y;
  v19 = v16 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4BF7D94 )
  {
    sub_1C2E12C(&System_Math_TypeInfo, v7);
    byte_4BF7D94 = 1;
  }
  Instance = (WarBoardData_o *)System_Math_TypeInfo;
  v20 = sqrtf((float)(v19 * v19) + (float)((float)(v17 * v17) + (float)(v18 * v18)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v20 <= 0.00001 )
  {
    if ( !byte_4BF7D91 )
    {
      Instance = (WarBoardData_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v7);
      byte_4BF7D91 = 1;
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
  if ( !v10 )
    goto LABEL_27;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant(v10, 0LL) )
    lengthOnAttack = this->fields.lengthOnEncount;
  Instance = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance
    || (Instance = (WarBoardData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL)) == 0LL )
  {
LABEL_27:
    sub_1C2E388(Instance, v7);
  }
  v30.fields.x = v27 + (float)(v21 * (float)(v20 - lengthOnAttack));
  v30.fields.y = y + (float)(v22 * (float)(v20 - lengthOnAttack));
  v30.fields.z = z + (float)(v23 * (float)(v20 - lengthOnAttack));
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v30, 0LL);
  v26 = WarBoardControlUiDataComponent_TypeInfo;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__SetUiDataOnBattleAll((const MethodInfo *)v26);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  Il2CppObject *Instance; // x25
  const MethodInfo_378C1F0 *v19; // x2
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  WarBoardPieceBaseComponent_o *v29; // x1
  Il2CppClass **v30; // x0
  WarBoardTaskBase_array *v31; // x26
  Il2CppObject *v32; // x27
  const MethodInfo_378C1F0 *v33; // x2
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  WarBoardPieceBaseComponent_o *v40; // x24
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v42; // x24
  struct WarBoardBreakPointComponent_array *breakPoints; // x10
  __int64 v44; // x0
  System_Nullable_Vector3__o v45; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v46; // 0:x3.8
  System_Nullable_float__o v47; // 0:x3.8
  System_Nullable_Vector3__o v48; // 0:x0.16
  System_Nullable_Vector3__o v49; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  v14 = this;
  if ( (byte_4BFB0CC & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, *(_QWORD *)&oldBreakPoint);
    sub_1C2E12C(&Method_System_Nullable_Vector3___ctor__, v15);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    this = (WarBoardPieceBaseComponent_o *)sub_1C2E12C(&WarBoardTaskBase___TypeInfo, v17);
    byte_4BFB0CC = 1;
  }
  if ( cameraMove )
  {
    this = (WarBoardPieceBaseComponent_o *)v14->fields.pieceData;
    if ( !this )
      goto LABEL_32;
    this = (WarBoardPieceBaseComponent_o *)WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( taskList )
      {
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0LL);
        if ( this )
        {
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
          *(_QWORD *)&v48.fields.hasValue = &v45;
          *(_QWORD *)&v45.fields.hasValue = 0LL;
          *(_QWORD *)&v45.fields.value.fields.y = 0LL;
          *(_QWORD *)&v48.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v48, localPosition, v19);
          if ( Instance )
          {
            v46 = cameraSize;
            this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                     (WarBoardManager_o *)Instance,
                                                     v45,
                                                     v46,
                                                     1,
                                                     0,
                                                     1,
                                                     0LL);
            items = taskList->fields._items;
            v27 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
            ++taskList->fields._version;
            if ( items )
            {
              size = taskList->fields._size;
              v29 = this;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)taskList,
                  (Il2CppObject *)this,
                  *(const MethodInfo_366B8AC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
              }
              else
              {
                v30 = &items->obj.klass + size;
                taskList->fields._size = size + 1;
                v30[4] = (Il2CppClass *)v29;
                sub_1C2E0D0((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)v29, v20, v21, v22, v23, v24, v25);
              }
              goto LABEL_21;
            }
          }
        }
      }
      else
      {
        v31 = (WarBoardTaskBase_array *)sub_1C2E1D4(WarBoardTaskBase___TypeInfo, 1LL);
        v32 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0LL);
        if ( this )
        {
          v51 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
          *(_QWORD *)&v49.fields.hasValue = &v45;
          v45 = (System_Nullable_Vector3__o)0LL;
          *(_QWORD *)&v49.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v49, v51, v33);
          if ( v32 )
          {
            v47 = cameraSize;
            this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                     (WarBoardManager_o *)v32,
                                                     v45,
                                                     v47,
                                                     1,
                                                     0,
                                                     1,
                                                     0LL);
            if ( v31 )
            {
              v40 = this;
              if ( this )
              {
                this = (WarBoardPieceBaseComponent_o *)sub_1C2E268(this, v31->obj.klass->_1.element_class);
                if ( !this )
                {
                  v44 = sub_1C2E3AC();
                  sub_1C2E254(v44, 0LL);
                }
              }
              if ( !v31->max_length )
LABEL_34:
                sub_1C2E390(this, *(_QWORD *)&oldBreakPoint);
              v31->m_Items[0] = (WarBoardTaskBase_o *)v40;
              sub_1C2E0D0((PartyOrganizationUtility_o *)v31->m_Items, (int64_t)v40, v34, v35, v36, v37, v38, v39);
              if ( Instance )
              {
                WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v31, 0LL);
                goto LABEL_21;
              }
            }
          }
        }
      }
LABEL_32:
      sub_1C2E388(this, *(_QWORD *)&oldBreakPoint);
    }
  }
LABEL_21:
  pieceData = v14->fields.pieceData;
  if ( !pieceData )
    goto LABEL_32;
  v42 = 0LL;
  if ( dummyPoint < 0 )
    dummyPoint = pieceData->fields._breakPoint_k__BackingField;
  while ( (int)v42 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v14->fields.breakPoints;
    if ( !breakPoints )
      goto LABEL_32;
    if ( (unsigned int)v42 >= breakPoints->max_length )
      goto LABEL_34;
    this = (WarBoardPieceBaseComponent_o *)breakPoints->m_Items[v42];
    if ( this )
    {
      if ( (int)v42 >= oldBreakPoint || dummyPoint > (int)v42 )
      {
        WarBoardBreakPointComponent__SetActive(
          (WarBoardBreakPointComponent_o *)this,
          dummyPoint > (int)v42,
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
      ++v42;
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
    sub_1C2E388(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__OnDeselect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  int32_t dispPriotiry; // w20
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1
  int v6; // w8
  const MethodInfo *v7; // x2

  if ( (byte_4BFB0C1 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4BFB0C1 = 1;
  }
  dispPriotiry = this->fields.dispPriotiry;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1C2E388(Instance, v5);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x19
  WarBoardPieceData_o *Instance; // x0
  WarBoardPieceData_o *v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  WarBoardPieceData_o **v31; // x20
  WarBoardPieceData_o *Piece_36546836; // x0
  WarBoardPieceData_o **v33; // x23
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x8
  WarBoardSquareData_o *Square; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x25
  System_Collections_Generic_List_object__o *v49; // x24
  System_Delegate_o *v50; // x26
  WarBoardTaskBase_TaskCallback_o *v51; // x27
  System_Delegate_o *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x8
  WarBoardTaskBase_TaskCallback_c *v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t groupId_k__BackingField; // w9
  __int64 v69; // x29
  struct WarBoardPieceData_o *v70; // x8
  UnityEngine_GameObject_o *v71; // x26
  float v72; // s0
  float v73; // s1
  float v74; // s2
  float v75; // s8
  float v76; // s9
  float v77; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float z; // s14
  WarBoardMovePerformance_o *v82; // x0
  int64_t v83; // x27
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  WarBoardTaskBase_array *v90; // x26
  UnityEngine_GameObject_o *v91; // x27
  float v92; // s0
  float v93; // s1
  float v94; // s2
  struct WarBoardPieceData_o *v95; // x8
  float v96; // s8
  float v97; // s9
  float v98; // s10
  float v99; // s13
  float v100; // s11
  float v101; // s12
  float v102; // s14
  WarBoardMovePerformance_o *v103; // x0
  int64_t v104; // x28
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  System_Delegate_o *v117; // x27
  WarBoardTaskBase_TaskCallback_o *v118; // x28
  System_Delegate_o *v119; // x0
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  WarBoardTaskBase_TaskCallback_c *v126; // x1
  System_Delegate_o *v127; // x28
  System_Delegate_o *v128; // x0
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  WarBoardTaskBase_TaskCallback_c *v135; // x1
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  struct System_Object_array *items; // x8
  _QWORD *v143; // x9
  __int64 size; // x10
  Il2CppClass **v145; // x0
  struct WarBoardPieceData_o *v146; // x8
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  struct System_Object_array *v153; // x8
  _QWORD *v154; // x9
  __int64 v155; // x10
  Il2CppClass **v156; // x0
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  struct System_Object_array *v163; // x8
  _QWORD *v164; // x9
  __int64 v165; // x10
  Il2CppClass **v166; // x0
  System_Collections_Generic_List_object__o *v167; // x22
  System_Int32_array *PieceEventVals; // x0
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  System_Int32_array *v175; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v177; // x0
  WarBoardManager_o *v178; // x20
  WarBoardTaskBase_array *v179; // x21
  int64_t v180; // x22
  WarBoardTaskBase_TaskCallback_o *v181; // x23
  int64_t v182; // x2
  int32_t v183; // w3
  System_String_o *v184; // x4
  BattleSetupInfo_o *v185; // x5
  FollowerInfo_o *v186; // x6
  PartyListViewItem_o *v187; // x7
  int64_t v188; // x2
  int32_t v189; // w3
  System_String_o *v190; // x4
  BattleSetupInfo_o *v191; // x5
  FollowerInfo_o *v192; // x6
  PartyListViewItem_o *v193; // x7
  __int64 v194; // x0
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v196; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v197; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v198; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v199; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v200; // 0:s3.4,4:s4.4,8:s5.4

  LODWORD(v4) = squareIndex;
  if ( (byte_4BFB0C2 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, *(_QWORD *)&squareIndex);
    sub_1C2E12C(&int___TypeInfo, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v9);
    sub_1C2E12C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v10);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_1C2E12C(&WarBoardTaskBase_TaskCallback_TypeInfo, v12);
    sub_1C2E12C(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__, v13);
    sub_1C2E12C(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__, v14);
    sub_1C2E12C(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__, v15);
    sub_1C2E12C(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__, v16);
    sub_1C2E12C(&WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo, v17);
    sub_1C2E12C(&WarBoardCallbackTask_TypeInfo, v18);
    sub_1C2E12C(&WarBoardMovePerformance_TypeInfo, v19);
    sub_1C2E12C(&WarBoardParallelSchedule_TypeInfo, v20);
    sub_1C2E12C(&WarBoardTaskBase___TypeInfo, v21);
    byte_4BFB0C2 = 1;
  }
  v22 = sub_1C2E378(WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass61_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass61_0_o *)v22,
    0LL);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v22 )
    goto LABEL_83;
  *(_QWORD *)(v22 + 48) = Instance;
  v31 = (WarBoardPieceData_o **)(v22 + 48);
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v22 + 48), (int64_t)Instance, v25, v26, v27, v28, v29, v30);
  if ( !*(_QWORD *)(v22 + 48) )
    goto LABEL_83;
  Instance = *(WarBoardPieceData_o **)(*(_QWORD *)(v22 + 48) + 440LL);
  if ( !Instance )
    goto LABEL_83;
  Piece_36546836 = WarBoardData__GetPiece_36546836((WarBoardData_o *)Instance, (int32_t)v4, 0LL);
  *(_QWORD *)(v22 + 40) = Piece_36546836;
  v33 = (WarBoardPieceData_o **)(v22 + 40);
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v22 + 40), (int64_t)Piece_36546836, v34, v35, v36, v37, v38, v39);
  v40 = *(_QWORD *)(v22 + 48);
  if ( !v40 )
    goto LABEL_83;
  Instance = *(WarBoardPieceData_o **)(v40 + 440);
  if ( !Instance )
    goto LABEL_83;
  Square = WarBoardData__GetSquare((WarBoardData_o *)Instance, (int32_t)v4, 0LL);
  *(_QWORD *)(v22 + 16) = Square;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v22 + 16), (int64_t)Square, v42, v43, v44, v45, v46, v47);
  v48 = sub_1C2E378(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v48, 0LL, 0LL);
  if ( !v48 )
    goto LABEL_83;
  v49 = (System_Collections_Generic_List_object__o *)(v48 + 32);
  v50 = *(System_Delegate_o **)(v48 + 32);
  v51 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v51,
    (Il2CppObject *)v22,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__,
    0LL);
  v52 = System_Delegate__Combine(v50, (System_Delegate_o *)v51, 0LL);
  v59 = (int64_t)v52;
  if ( v52 )
  {
    v60 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v52->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_44;
    v49->klass = (System_Collections_Generic_List_object__c *)v52;
    if ( (WarBoardTaskBase_TaskCallback_c *)v52->klass != v60 )
      goto LABEL_44;
  }
  else
  {
    v49->klass = 0LL;
  }
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v48 + 32), (int64_t)v52, v53, v54, v55, v56, v57, v58);
  Instance = (WarBoardPieceData_o *)sub_1C2E1D4(int___TypeInfo, 2LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_83;
  v24 = Instance;
  if ( !Instance )
    goto LABEL_83;
  groupId_k__BackingField = Instance->fields._groupId_k__BackingField;
  if ( !groupId_k__BackingField
    || (Instance->fields._limitActionCount_k__BackingField = pieceData->fields._nowSquareIndex_k__BackingField,
        groupId_k__BackingField == 1) )
  {
LABEL_84:
    sub_1C2E390(Instance, v24);
  }
  Instance->fields._currentActionCount_k__BackingField = (int)v4;
  *(_QWORD *)(v22 + 24) = Instance;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v22 + 24), (int64_t)Instance, v61, v62, v63, v64, v65, v66);
  v49 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v49,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v69 = *(_QWORD *)(v22 + 40);
  Instance = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v70 = this->fields.pieceData;
  if ( !v70 )
    goto LABEL_83;
  v71 = (UnityEngine_GameObject_o *)Instance;
  Instance = *(WarBoardPieceData_o **)(v22 + 48);
  if ( !Instance )
    goto LABEL_83;
  *(UnityEngine_Vector3_o *)&v72 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)Instance,
                                     v70->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  Instance = *v31;
  if ( !*v31 )
    goto LABEL_83;
  v75 = v72;
  v76 = v73;
  v77 = v74;
  SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, (int32_t)v4, 0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v82 = (WarBoardMovePerformance_o *)sub_1C2E378(WarBoardMovePerformance_TypeInfo);
  v196.fields.x = v75;
  v196.fields.y = v76;
  v196.fields.z = v77;
  v199.fields.x = x;
  v199.fields.y = y;
  v199.fields.z = z;
  v83 = (int64_t)v82;
  WarBoardMovePerformance___ctor(v82, v71, v196, v199, pixelPerSecond, 0, 0LL);
  if ( v69 )
  {
    Instance = (WarBoardPieceData_o *)sub_1C2E1D4(WarBoardTaskBase___TypeInfo, 3LL);
    if ( !Instance )
      goto LABEL_83;
    v90 = (WarBoardTaskBase_array *)Instance;
    if ( v83 )
    {
      Instance = (WarBoardPieceData_o *)sub_1C2E268(v83, Instance->klass->_1.element_class);
      if ( !Instance )
        goto LABEL_85;
    }
    if ( !v90->max_length )
      goto LABEL_84;
    v90->m_Items[0] = (WarBoardTaskBase_o *)v83;
    sub_1C2E0D0((PartyOrganizationUtility_o *)v90->m_Items, v83, v84, v85, v86, v87, v88, v89);
    Instance = *v33;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( *v33 )
    {
      Instance = (WarBoardPieceData_o *)WarBoardPieceData__get_gameObject(Instance, 0LL);
      if ( *v31 )
      {
        v91 = (UnityEngine_GameObject_o *)Instance;
        *(UnityEngine_Vector3_o *)&v92 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)*v31, (int32_t)v4, 0LL);
        v95 = this->fields.pieceData;
        if ( v95 )
        {
          Instance = *v31;
          if ( *v31 )
          {
            v96 = v92;
            v97 = v93;
            v98 = v94;
            v197 = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     v95->fields._nowSquareIndex_k__BackingField,
                     0LL);
            v99 = this->fields.pixelPerSecond;
            v100 = v197.fields.x;
            v101 = v197.fields.y;
            v102 = v197.fields.z;
            v103 = (WarBoardMovePerformance_o *)sub_1C2E378(WarBoardMovePerformance_TypeInfo);
            v198.fields.x = v96;
            v198.fields.y = v97;
            v198.fields.z = v98;
            v200.fields.x = v100;
            v200.fields.y = v101;
            v200.fields.z = v102;
            v104 = (int64_t)v103;
            WarBoardMovePerformance___ctor(v103, v91, v198, v200, v99, 0, 0LL);
            if ( !v104 || (Instance = (WarBoardPieceData_o *)sub_1C2E268(v104, v90->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v90->max_length <= 1 )
                goto LABEL_84;
              v90->m_Items[1] = (WarBoardTaskBase_o *)v104;
              sub_1C2E0D0((PartyOrganizationUtility_o *)&v90->m_Items[1], v104, v105, v106, v107, v108, v109, v110);
              Instance = (WarBoardPieceData_o *)sub_1C2E268(v48, v90->obj.klass->_1.element_class);
              if ( Instance )
              {
                if ( v90->max_length <= 2 )
                  goto LABEL_84;
                v90->m_Items[2] = (WarBoardTaskBase_o *)v48;
                sub_1C2E0D0((PartyOrganizationUtility_o *)&v90->m_Items[2], v48, v111, v112, v113, v114, v115, v116);
                v48 = sub_1C2E378(WarBoardParallelSchedule_TypeInfo);
                WarBoardParallelSchedule___ctor((WarBoardParallelSchedule_o *)v48, v90, 0LL);
                if ( !v48 )
                  goto LABEL_83;
                v50 = (System_Delegate_o *)(v48 + 40);
                v117 = *(System_Delegate_o **)(v48 + 40);
                v118 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(WarBoardTaskBase_TaskCallback_TypeInfo);
                WarBoardTaskBase_TaskCallback___ctor(
                  v118,
                  (Il2CppObject *)v22,
                  Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__,
                  0LL);
                v119 = System_Delegate__Combine(v117, (System_Delegate_o *)v118, 0LL);
                v59 = (int64_t)v119;
                if ( !v119 )
                  goto LABEL_45;
                v126 = WarBoardTaskBase_TaskCallback_TypeInfo;
                if ( (WarBoardTaskBase_TaskCallback_c *)v119->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
                {
                  v50->klass = (System_Delegate_c *)v119;
                  if ( (WarBoardTaskBase_TaskCallback_c *)v119->klass == v126 )
                  {
LABEL_46:
                    sub_1C2E0D0((PartyOrganizationUtility_o *)v50, v59, v120, v121, v122, v123, v124, v125);
                    if ( !v49 )
                      goto LABEL_83;
                    items = v49->fields._items;
                    v143 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                    ++v49->fields._version;
                    if ( !items )
                      goto LABEL_83;
                    size = v49->fields._size;
                    if ( (unsigned int)size >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v49,
                        (Il2CppObject *)v48,
                        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v145 = &items->obj.klass + size;
                      v49->fields._size = size + 1;
                      v145[4] = (Il2CppClass *)v48;
                      sub_1C2E0D0((PartyOrganizationUtility_o *)(v145 + 4), v48, v136, v137, v138, v139, v140, v141);
                    }
                    v146 = this->fields.pieceData;
                    if ( !v146 )
                      goto LABEL_83;
                    Instance = *v33;
                    if ( !*v33 )
                      goto LABEL_83;
                    WarBoardPieceData__SetSquareIndex(Instance, v146->fields._nowSquareIndex_k__BackingField, 0LL);
                    goto LABEL_64;
                  }
                }
LABEL_44:
                sub_1C2E648(v59);
LABEL_45:
                v50->klass = (System_Delegate_c *)v59;
                goto LABEL_46;
              }
            }
LABEL_85:
            v194 = sub_1C2E3AC();
            sub_1C2E254(v194, 0LL);
          }
        }
      }
    }
LABEL_83:
    sub_1C2E388(Instance, v24);
  }
  if ( !v83 )
    goto LABEL_83;
  v33 = (WarBoardPieceData_o **)(unsigned int)v4;
  v50 = (System_Delegate_o *)(v83 + 40);
  v127 = *(System_Delegate_o **)(v83 + 40);
  v4 = &WarBoardTaskBase_TaskCallback_TypeInfo;
  v3 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v3,
    (Il2CppObject *)v22,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__,
    0LL);
  v128 = System_Delegate__Combine(v127, (System_Delegate_o *)v3, 0LL);
  v59 = (int64_t)v128;
  if ( v128 )
  {
    v135 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v128->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_44;
    v50->klass = (System_Delegate_c *)v128;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    LODWORD(v4) = (_DWORD)v33;
    if ( (WarBoardTaskBase_TaskCallback_c *)v128->klass != v135 )
      goto LABEL_44;
  }
  else
  {
    v50->klass = 0LL;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    LODWORD(v4) = (_DWORD)v33;
  }
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v83 + 40), (int64_t)v128, v129, v130, v131, v132, v133, v134);
  v33 = (WarBoardPieceData_o **)(v22 + 40);
  if ( !v49 )
    goto LABEL_83;
  v153 = v49->fields._items;
  v154 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v49->fields._version;
  if ( !v153 )
    goto LABEL_83;
  v155 = v49->fields._size;
  if ( (unsigned int)v155 >= v153->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v49,
      (Il2CppObject *)v83,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
  }
  else
  {
    v156 = &v153->obj.klass + v155;
    v49->fields._size = v155 + 1;
    v156[4] = (Il2CppClass *)v83;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v156 + 4), v83, v147, v148, v149, v150, v151, v152);
  }
  v163 = v49->fields._items;
  v164 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v49->fields._version;
  if ( !v163 )
    goto LABEL_83;
  v165 = v49->fields._size;
  if ( (unsigned int)v165 >= v163->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v49,
      (Il2CppObject *)v48,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
  }
  else
  {
    v166 = &v163->obj.klass + v165;
    v49->fields._size = v165 + 1;
    v166[4] = (Il2CppClass *)v48;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v166 + 4), v48, v157, v158, v159, v160, v161, v162);
  }
LABEL_64:
  Instance = this->fields.pieceData;
  if ( !Instance )
    goto LABEL_83;
  WarBoardPieceData__SetSquareIndex(Instance, (int32_t)v4, 0LL);
  v167 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v167,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = this->fields.pieceData;
  if ( !Instance )
    goto LABEL_83;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(Instance, 0LL);
  *(_QWORD *)(v22 + 32) = PieceEventVals;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v22 + 32), (int64_t)PieceEventVals, v169, v170, v171, v172, v173, v174);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                      (WarBoardManager_o *)Instance,
                                      30,
                                      *(System_Int32_array **)(v22 + 32),
                                      0LL);
  if ( !v167 )
    goto LABEL_83;
  System_Collections_Generic_List_object___AddRange(
    v167,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( *v33 )
  {
    v175 = WarBoardPieceData__CreatePieceEventVals(*v33, 0LL);
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 30, v175, 0LL);
    System_Collections_Generic_List_object___AddRange(
      v167,
      (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
      (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  v177 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 36, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v167,
    (System_Collections_Generic_IEnumerable_T__o *)v177,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v167,
         (const MethodInfo_2FDD22C *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    Instance = *v31;
    if ( !*v31 )
      goto LABEL_83;
    WarBoardManager__AddTask_36732244(
      (WarBoardManager_o *)Instance,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v167,
      0LL);
  }
  Instance = *v31;
  if ( !*v31 )
    goto LABEL_83;
  WarBoardManager__AddTask_36732244(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v49,
    0LL);
  v178 = *(WarBoardManager_o **)(v22 + 48);
  v179 = (WarBoardTaskBase_array *)sub_1C2E1D4(WarBoardTaskBase___TypeInfo, 1LL);
  v180 = sub_1C2E378(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v180, 0LL, 0LL);
  v181 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(v3->klass);
  WarBoardTaskBase_TaskCallback___ctor(
    v181,
    (Il2CppObject *)v22,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__,
    0LL);
  if ( !v180 )
    goto LABEL_83;
  *(_QWORD *)(v180 + 32) = v181;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v180 + 32), (int64_t)v181, v182, v183, v184, v185, v186, v187);
  if ( !v179 )
    goto LABEL_83;
  Instance = (WarBoardPieceData_o *)sub_1C2E268(v180, v179->obj.klass->_1.element_class);
  if ( !Instance )
    goto LABEL_85;
  if ( !v179->max_length )
    goto LABEL_84;
  v179->m_Items[0] = (WarBoardTaskBase_o *)v180;
  sub_1C2E0D0((PartyOrganizationUtility_o *)v179->m_Items, v180, v188, v189, v190, v191, v192, v193);
  if ( !v178 )
    goto LABEL_83;
  WarBoardManager__AddTask(v178, 0, v179, 0LL);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1C2E388(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__OnSelect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1
  int v5; // w8
  const MethodInfo *v6; // x2

  if ( (byte_4BFB0C0 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4BFB0C0 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1C2E388(Instance, v4);
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

  if ( (byte_4BFB0CE & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_19161/*"ef_dm_base"*/, popText);
    byte_4BFB0CE = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x23
  WarBoardData_o *Instance; // x0
  __int64 v20; // x1
  WarBoardManager_o *v21; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardWallData_o *v23; // x21
  float x; // s8
  float y; // s10
  float z; // s15
  float v27; // s0
  float v28; // s1
  float v29; // s2
  float v30; // s11
  float v31; // s9
  float v32; // s13
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_List_object__o *v39; // x20
  int64_t v40; // x24
  _QWORD *v41; // x25
  System_Delegate_o *v42; // x26
  WarBoardTaskBase_TaskCallback_o *v43; // x27
  System_Delegate_o *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x8
  WarBoardTaskBase_TaskCallback_c *v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  __int64 v63; // x1
  float v64; // s12
  float v65; // s14
  float v66; // s8
  float v67; // s9
  float v68; // s11
  float v69; // s13
  float v70; // s1
  float v71; // s2
  float v72; // s9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v74; // s0
  float v75; // s8
  float v76; // s11
  float v77; // s12
  float v78; // s15
  float v79; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  float pixelPerSecond; // s14
  UnityEngine_GameObject_o *v82; // x24
  WarBoardMovePerformance_o *v83; // x0
  Il2CppObject *v84; // x23
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
  float lengthMoveAttack; // s0
  float v96; // s1
  float v97; // s2
  float v98; // s0
  float v99; // s8
  float v100; // s9
  float v101; // s10
  UnityEngine_GameObject_o *v102; // x0
  float v103; // s14
  UnityEngine_GameObject_o *v104; // x22
  WarBoardMovePerformance_o *v105; // x0
  int64_t v106; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *v107; // x22
  System_Collections_Generic_List_object__o *v108; // x23
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  WarBoardTaskBase_array *v115; // x23
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  int64_t v122; // x21
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  int64_t v129; // x21
  WarBoardOrthostichySchedule_o *v130; // x21
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  WarBoardParallelSchedule_o *v137; // x21
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  struct System_Object_array *v144; // x8
  _QWORD *v145; // x9
  __int64 v146; // x10
  Il2CppClass **v147; // x0
  __int64 v148; // x0
  float v149; // [xsp+8h] [xbp-A8h]
  float v150; // [xsp+Ch] [xbp-A4h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v152; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v153; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o IconPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v155; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v156; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4BFB0C7 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&squareIndex);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__, v7);
    sub_1C2E12C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v8);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1C2E12C(&WarBoardTaskBase_TaskCallback_TypeInfo, v10);
    sub_1C2E12C(&Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__, v11);
    sub_1C2E12C(&WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo, v12);
    sub_1C2E12C(&WarBoardCallbackTask_TypeInfo, v13);
    sub_1C2E12C(&WarBoardMovePerformance_TypeInfo, v14);
    sub_1C2E12C(&WarBoardOrthostichySchedule_TypeInfo, v15);
    sub_1C2E12C(&WarBoardParallelSchedule_TypeInfo, v16);
    sub_1C2E12C(&WarBoardTaskBase___TypeInfo, v17);
    byte_4BFB0C7 = 1;
  }
  v18 = sub_1C2E378(WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass66_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass66_0_o *)v18,
    0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  v21 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_64;
  Instance = (WarBoardData_o *)WarBoardData__GetWall(Instance, squareIndex, 0, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_64;
  v23 = (WarBoardWallData_o *)Instance;
  SquarePosition = WarBoardManager__GetSquarePosition(v21, pieceData->fields._nowSquareIndex_k__BackingField, 0LL);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  *(UnityEngine_Vector3_o *)&v27 = WarBoardManager__GetSquarePosition(v21, squareIndex, 0LL);
  Instance = v21->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_64;
  v30 = v27;
  v31 = v28;
  v32 = v29;
  Instance = (WarBoardData_o *)WarBoardData__GetSquare(Instance, squareIndex, 0LL);
  if ( !v18 )
    goto LABEL_64;
  *(_QWORD *)(v18 + 16) = Instance;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)Instance, v33, v34, v35, v36, v37, v38);
  v39 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v40 = sub_1C2E378(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v40, 0LL, 0LL);
  if ( !v40 )
    goto LABEL_64;
  v41 = (_QWORD *)(v40 + 32);
  v42 = *(System_Delegate_o **)(v40 + 32);
  v43 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2E378(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v43,
    (Il2CppObject *)v18,
    Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__,
    0LL);
  v44 = System_Delegate__Combine(v42, (System_Delegate_o *)v43, 0LL);
  v51 = (int64_t)v44;
  if ( v44 )
  {
    v52 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v44->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v41 = v44;
      if ( (WarBoardTaskBase_TaskCallback_c *)v44->klass == v52 )
        goto LABEL_14;
    }
    sub_1C2E648(v44);
  }
  *v41 = v51;
LABEL_14:
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v40 + 32), v51, v45, v46, v47, v48, v49, v50);
  if ( !v39 )
    goto LABEL_64;
  items = v39->fields._items;
  v60 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v39->fields._version;
  if ( !items )
    goto LABEL_64;
  size = v39->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v39,
      (Il2CppObject *)v40,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v62 = &items->obj.klass + size;
    v39->fields._size = size + 1;
    v62[4] = (Il2CppClass *)v40;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v62 + 4), v40, v53, v54, v55, v56, v57, v58);
  }
  if ( !byte_4BF7D93 )
  {
    sub_1C2E12C(&System_Math_TypeInfo, v63);
    byte_4BF7D93 = 1;
  }
  v64 = x;
  v65 = v30 - x;
  v66 = v31 - y;
  v67 = v32 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_4BF7D94 )
  {
    sub_1C2E12C(&System_Math_TypeInfo, v63);
    byte_4BF7D94 = 1;
  }
  v68 = sqrtf((float)(v67 * v67) + (float)((float)(v65 * v65) + (float)(v66 * v66)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v69 = z;
  if ( v68 <= 0.00001 )
  {
    if ( !byte_4BF7D91 )
    {
      sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v63);
      byte_4BF7D91 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v70 = static_fields->zeroVector.fields.x;
    v71 = static_fields->zeroVector.fields.y;
    v72 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v70 = v65 / v68;
    v71 = v66 / v68;
    v72 = v67 / v68;
  }
  v74 = v68 - this->fields.lengthOnAttack;
  if ( v74 <= 0.0 )
  {
    v76 = v64;
    v77 = y;
  }
  else
  {
    v149 = v71;
    v150 = v70;
    v75 = v64;
    v76 = v64 + (float)(v70 * v74);
    v77 = y + (float)(v71 * v74);
    v78 = y;
    v79 = v69;
    v69 = v69 + (float)(v72 * v74);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    pixelPerSecond = this->fields.pixelPerSecond;
    v82 = gameObject;
    v83 = (WarBoardMovePerformance_o *)sub_1C2E378(WarBoardMovePerformance_TypeInfo);
    v152.fields.x = v75;
    v152.fields.y = v78;
    v152.fields.z = v79;
    v155.fields.x = v76;
    v155.fields.y = v77;
    v155.fields.z = v69;
    v84 = (Il2CppObject *)v83;
    WarBoardMovePerformance___ctor(v83, v82, v152, v155, pixelPerSecond, 5, 0LL);
    v91 = v39->fields._items;
    v92 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v39->fields._version;
    if ( !v91 )
      goto LABEL_64;
    v93 = v39->fields._size;
    if ( (unsigned int)v93 >= v91->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v39,
        v84,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
    }
    else
    {
      v94 = &v91->obj.klass + v93;
      v39->fields._size = v93 + 1;
      v94[4] = (Il2CppClass *)v84;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v94 + 4), (int64_t)v84, v85, v86, v87, v88, v89, v90);
    }
    v71 = v149;
    v70 = v150;
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v96 = v70 * lengthMoveAttack;
  v97 = v71 * lengthMoveAttack;
  v98 = v72 * lengthMoveAttack;
  v99 = v76 + v96;
  v100 = v77 + v97;
  v101 = v69 + v98;
  v102 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v103 = this->fields.pixelPerSecond;
  v104 = v102;
  v105 = (WarBoardMovePerformance_o *)sub_1C2E378(WarBoardMovePerformance_TypeInfo);
  v153.fields.x = v99;
  v153.fields.y = v100;
  v153.fields.z = v101;
  v156.fields.x = v76;
  v156.fields.y = v77;
  v156.fields.z = v69;
  v106 = (int64_t)v105;
  WarBoardMovePerformance___ctor(v105, v104, v153, v156, v103, 4, 0LL);
  if ( !v23 )
    goto LABEL_64;
  v107 = WarBoardWallData__DecrementBreakPointPerformance(v23, 1, 0LL);
  v108 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v108,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 26, 0LL, 0LL), !v108)
    || (System_Collections_Generic_List_object___AddRange(
          v108,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        System_Collections_Generic_List_object___AddRange(
          v39,
          (System_Collections_Generic_IEnumerable_T__o *)v108,
          (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (Instance = (WarBoardData_o *)sub_1C2E1D4(WarBoardTaskBase___TypeInfo, 4LL)) == 0LL) )
  {
LABEL_64:
    sub_1C2E388(Instance, v20);
  }
  v115 = (WarBoardTaskBase_array *)Instance;
  if ( v106 )
  {
    Instance = (WarBoardData_o *)sub_1C2E268(v106, Instance->klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( !v115->max_length )
    goto LABEL_65;
  v115->m_Items[0] = (WarBoardTaskBase_o *)v106;
  sub_1C2E0D0((PartyOrganizationUtility_o *)v115->m_Items, v106, v109, v110, v111, v112, v113, v114);
  Instance = (WarBoardData_o *)v23->fields.component;
  if ( !Instance )
    goto LABEL_64;
  IconPosition = WarBoardWallComponent__GetIconPosition((WarBoardWallComponent_o *)Instance, 0LL);
  Instance = (WarBoardData_o *)WarBoardManager__CreateAttackEffectTask(v21, IconPosition, 0, 0LL);
  v122 = (int64_t)Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_1C2E268(Instance, v115->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( v115->max_length <= 1 )
    goto LABEL_65;
  v115->m_Items[1] = (WarBoardTaskBase_o *)v122;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v115->m_Items[1], v122, v116, v117, v118, v119, v120, v121);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (WarBoardData_o *)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0LL);
  v129 = (int64_t)Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_1C2E268(Instance, v115->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( v115->max_length <= 2 )
    goto LABEL_65;
  v115->m_Items[2] = (WarBoardTaskBase_o *)v129;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v115->m_Items[2], v129, v123, v124, v125, v126, v127, v128);
  v130 = (WarBoardOrthostichySchedule_o *)sub_1C2E378(WarBoardOrthostichySchedule_TypeInfo);
  WarBoardOrthostichySchedule___ctor_36932928(v130, v107, 0LL);
  if ( v130 )
  {
    Instance = (WarBoardData_o *)sub_1C2E268(v130, v115->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_66:
      v148 = sub_1C2E3AC();
      sub_1C2E254(v148, 0LL);
    }
  }
  if ( v115->max_length <= 3 )
LABEL_65:
    sub_1C2E390(Instance, v20);
  v115->m_Items[3] = (WarBoardTaskBase_o *)v130;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v115->m_Items[3], (int64_t)v130, v131, v132, v133, v134, v135, v136);
  v137 = (WarBoardParallelSchedule_o *)sub_1C2E378(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor(v137, v115, 0LL);
  v144 = v39->fields._items;
  v145 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v39->fields._version;
  if ( !v144 )
    goto LABEL_64;
  v146 = v39->fields._size;
  if ( (unsigned int)v146 >= v144->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v39,
      (Il2CppObject *)v137,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v145[4] + 192LL) + 112LL));
  }
  else
  {
    v147 = &v144->obj.klass + v146;
    v39->fields._size = v146 + 1;
    v147[4] = (Il2CppClass *)v137;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v147 + 4), (int64_t)v137, v138, v139, v140, v141, v142, v143);
  }
  if ( v39->fields._size >= 1 )
    WarBoardManager__AddTask_36732244(v21, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v39, 0LL);
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
    sub_1C2E388(simpleAnimation, animationName);
  SimpleAnimation__Play_65373960(simpleAnimation, animationName, 0LL);
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
    sub_1C2E388(this, method);
  breakPoint_k__BackingField = pieceData->fields._breakPoint_k__BackingField;
  v5 = this;
  v6 = 0LL;
  while ( (int)v6 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v5->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v6 >= breakPoints->max_length )
        sub_1C2E390(this, method);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  int64_t ComponentsInChildren_object; // x0
  __int64 v12; // x1
  signed int max_length; // w8
  unsigned int v14; // w24
  UnityEngine_Component_c *v15; // x8
  int64_t v16; // x22
  unsigned __int64 v17; // x29
  UnityEngine_Object_o *v18; // x23
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  int64_t v28; // x1
  Il2CppClass **v29; // x0
  struct UICommonButton_o *button; // x19
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4BFB0B7 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77780256, parents);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__ToArray__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_1C2E12C(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v9);
    byte_4BFB0B7 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
          goto LABEL_28;
        ComponentsInChildren_object = (int64_t)parents->m_Items[v14];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (int64_t)UnityEngine_Component__GetComponentsInChildren_object_(
                                                 (UnityEngine_Component_o *)ComponentsInChildren_object,
                                                 1,
                                                 (const MethodInfo_2FC8DC0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77780256);
        if ( ComponentsInChildren_object )
        {
          v15 = *(UnityEngine_Component_c **)(ComponentsInChildren_object + 24);
          v16 = ComponentsInChildren_object;
          if ( (int)v15 >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v14 >= max_length )
          goto LABEL_24;
      }
      v17 = 0LL;
      while ( v17 < (unsigned int)v15 )
      {
        v18 = *(UnityEngine_Object_o **)(v16 + 32 + 8 * v17);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
        if ( (ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v18 )
            goto LABEL_27;
          ComponentsInChildren_object = (int64_t)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v18,
                                                   0LL);
          if ( !v10 )
            goto LABEL_27;
          ComponentsInChildren_object = System_Collections_Generic_List_object___Contains(
                                          v10,
                                          (Il2CppObject *)ComponentsInChildren_object,
                                          (const MethodInfo_366BC3C *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( (ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (int64_t)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v18,
                                                     0LL);
            items = v10->fields._items;
            v26 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v10->fields._size;
            v28 = ComponentsInChildren_object;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_366B8AC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v29[4] = (Il2CppClass *)v28;
              sub_1C2E0D0((PartyOrganizationUtility_o *)(v29 + 4), v28, v19, v20, v21, v22, v23, v24);
            }
          }
        }
        LODWORD(v15) = *(_DWORD *)(v16 + 24);
        if ( (__int64)++v17 >= (int)v15 )
          goto LABEL_23;
      }
LABEL_28:
      sub_1C2E390(ComponentsInChildren_object, v12);
    }
  }
LABEL_24:
  if ( !v10
    || (button = this->fields.button,
        ComponentsInChildren_object = (int64_t)System_Collections_Generic_List_object___ToArray(
                                                 v10,
                                                 (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1C2E388(ComponentsInChildren_object, v12);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&button->fields.tweenTargets,
    ComponentsInChildren_object,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__SetColliderEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_4BFB0B9 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, enable);
    byte_4BFB0B9 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1C2E388(0LL, v6);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_List_object__o *listEffectData; // x20
  System_Predicate_object__o *v21; // x21
  Il2CppObject *v22; // x20
  _QWORD *monitor; // x22
  __int64 v24; // x8
  unsigned __int64 v25; // x23
  bool v26; // w19
  UnityEngine_Object_o *v27; // x21

  if ( (byte_4BFB0CD & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__, effectKey);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    sub_1C2E12C(&System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo, v8);
    sub_1C2E12C(&Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__, v9);
    sub_1C2E12C(&WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo, v10);
    byte_4BFB0CD = 1;
  }
  v11 = sub_1C2E378(WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass83_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass83_0_o *)v11,
    0LL);
  if ( !v11 )
    goto LABEL_18;
  *(_QWORD *)(v11 + 16) = effectKey;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)effectKey, v14, v15, v16, v17, v18, v19);
  listEffectData = (System_Collections_Generic_List_object__o *)this->fields.listEffectData;
  v21 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
  System_Predicate_object____ctor(
    v21,
    (Il2CppObject *)v11,
    Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__,
    0LL);
  if ( !listEffectData )
    goto LABEL_18;
  v12 = System_Collections_Generic_List_object___Find(
          listEffectData,
          (System_Predicate_T__o *)v21,
          (const MethodInfo_366BF14 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__);
  v22 = v12;
  if ( !v12 )
    return v22 != 0LL;
  monitor = v12[1].monitor;
  if ( !monitor )
LABEL_18:
    sub_1C2E388(v12, v13);
  v24 = monitor[3];
  if ( (int)v24 >= 1 )
  {
    v25 = 0LL;
    v26 = isDisp;
    do
    {
      if ( v25 >= (unsigned int)v24 )
        sub_1C2E390(v12, v13);
      v27 = (UnityEngine_Object_o *)monitor[v25 + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v12 = (Il2CppObject *)UnityEngine_Object__op_Equality(v27, 0LL, 0LL);
      if ( ((unsigned __int8)v12 & 1) == 0 )
      {
        if ( !v27 )
          goto LABEL_18;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v27, v26, 0LL);
      }
      LODWORD(v24) = *((_DWORD *)monitor + 6);
      ++v25;
    }
    while ( (__int64)v25 < (int)v24 );
  }
  return v22 != 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__SetTouchEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_4BFB0B8 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, enable);
    byte_4BFB0B8 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1C2E388(0LL, v6);
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

  if ( (byte_4BFB0BB & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFB0BB = 1;
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
    sub_1C2E388(pieceData, method);
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
    sub_1C2E388(0LL, method);
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
      SimpleAnimation__Stop_65371476(simpleAnimation, animationName, 0LL);
      simpleAnimation = this->fields.simpleAnimation;
      if ( simpleAnimation )
      {
        SimpleAnimation__Rewind(simpleAnimation, 0LL);
        return;
      }
    }
LABEL_7:
    sub_1C2E388(simpleAnimation, animationName);
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
    sub_1C2E388(pieceData, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x20
  System_Collections_Generic_HashSet_T__o *v25; // x22
  int64_t pieceData; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_HashSet_T__o **v34; // x21
  System_Collections_Generic_HashSet_T__o *v35; // x23
  int64_t *v36; // x22
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Collections_Generic_IEnumerable_T__o *cannotActTurnDurk; // x24
  char v44; // w23
  System_Action_object__o *v45; // x25
  System_Collections_Generic_IEnumerable_T__o *v46; // x24
  System_Action_object__o *v47; // x25
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundActionCount; // x24
  System_Action_object__o *v49; // x25
  System_Collections_Generic_IEnumerable_T__o *v50; // x23
  System_Action_object__o *v51; // x24
  struct UICommonButton_o *button; // x8
  System_Collections_Generic_IEnumerable_T__o *tweenTargets; // x23
  System_Collections_Generic_List_object__o *v54; // x20
  _BOOL8 v55; // x0
  __int64 v56; // x1
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *removeTweenTargetObjects; // x23
  Il2CppObject *gameObject; // x0
  __int64 v60; // x1
  UnityEngine_GameObject_o *v61; // x0
  Il2CppObject *v62; // x1
  UnityEngine_GameObject_o *v63; // x0
  Il2CppObject *v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x1
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x0
  struct UICommonButton_o *v76; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  System_Collections_Generic_HashSet_Enumerator_T__o v84; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v85; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Color_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BFB0BE & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_UIWidget__TypeInfo, method);
    sub_1C2E12C(&Method_BasicHelper_ForEach_UIWidget___, v3);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Distinct_GameObject___, v4);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_GameObject___, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__get_Current__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_UIWidget__Contains__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_UIWidget___ctor__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_UIWidget__get_Count__, v12);
    sub_1C2E12C(&System_Collections_Generic_HashSet_UIWidget__TypeInfo, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__Add__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__Contains__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__Remove__, v16);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject___ctor___77705800, v17);
    sub_1C2E12C(&System_Collections_Generic_List_GameObject__TypeInfo, v18);
    sub_1C2E12C(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__, v19);
    sub_1C2E12C(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__, v20);
    sub_1C2E12C(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__, v21);
    sub_1C2E12C(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__, v22);
    sub_1C2E12C(&WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo, v23);
    byte_4BFB0BE = 1;
  }
  memset(&v85, 0, sizeof(v85));
  v24 = sub_1C2E378(WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo);
  WarBoardPieceBaseComponent___c__DisplayClass48_0___ctor(
    (WarBoardPieceBaseComponent___c__DisplayClass48_0_o *)v24,
    0LL);
  v25 = (System_Collections_Generic_HashSet_T__o *)sub_1C2E378(System_Collections_Generic_HashSet_UIWidget__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v25,
    (const MethodInfo_3527820 *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  if ( !v24 )
    goto LABEL_39;
  *(_QWORD *)(v24 + 24) = v25;
  v34 = (System_Collections_Generic_HashSet_T__o **)(v24 + 24);
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v24 + 24), (int64_t)v25, v28, v29, v30, v31, v32, v33);
  v35 = (System_Collections_Generic_HashSet_T__o *)sub_1C2E378(System_Collections_Generic_HashSet_UIWidget__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v35,
    (const MethodInfo_3527820 *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  *(_QWORD *)(v24 + 16) = v35;
  v36 = (int64_t *)(v24 + 16);
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v24 + 16), (int64_t)v35, v37, v38, v39, v40, v41, v42);
  pieceData = (int64_t)this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_39;
  pieceData = WarBoardPieceData__HasIconDarkenBuff((WarBoardPieceData_o *)pieceData, 0LL);
  cannotActTurnDurk = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
  v44 = pieceData;
  if ( cannotActTurnDurk )
  {
    v45 = (System_Action_object__o *)sub_1C2E378(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v45,
      (Il2CppObject *)v24,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__,
      0LL);
    BasicHelper__ForEach_object_(
      cannotActTurnDurk,
      (System_Action_T__o *)v45,
      (const MethodInfo_2FBE538 *)Method_BasicHelper_ForEach_UIWidget___);
    pieceData = (int64_t)this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_39;
    pieceData = WarBoardPieceData__HasVitalityToDoAnyActions((WarBoardPieceData_o *)pieceData, 0LL);
    if ( v44 & 1 | ((pieceData & 1) == 0) )
    {
      v46 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
      v47 = (System_Action_object__o *)sub_1C2E378(System_Action_UIWidget__TypeInfo);
      System_Action_object____ctor(
        v47,
        (Il2CppObject *)v24,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__,
        0LL);
      BasicHelper__ForEach_object_(
        v46,
        (System_Action_T__o *)v47,
        (const MethodInfo_2FBE538 *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v49 = (System_Action_object__o *)sub_1C2E378(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v49,
      (Il2CppObject *)v24,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__,
      0LL);
    BasicHelper__ForEach_object_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v49,
      (const MethodInfo_2FBE538 *)Method_BasicHelper_ForEach_UIWidget___);
    if ( (v44 & 1) != 0 )
    {
      v50 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
      v51 = (System_Action_object__o *)sub_1C2E378(System_Action_UIWidget__TypeInfo);
      System_Action_object____ctor(
        v51,
        (Il2CppObject *)v24,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__,
        0LL);
      BasicHelper__ForEach_object_(
        v50,
        (System_Action_T__o *)v51,
        (const MethodInfo_2FBE538 *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  if ( !*v36 )
    goto LABEL_39;
  if ( *(int *)(*v36 + 32) < 1 )
    return;
  button = this->fields.button;
  if ( !button )
    goto LABEL_39;
  tweenTargets = (System_Collections_Generic_IEnumerable_T__o *)button->fields.tweenTargets;
  v54 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor_57061792(
    v54,
    tweenTargets,
    (const MethodInfo_366B1A0 *)Method_System_Collections_Generic_List_GameObject___ctor___77705800);
  pieceData = *v36;
  if ( !*v36 )
    goto LABEL_39;
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v84,
    (System_Collections_Generic_HashSet_T__o *)pieceData,
    (const MethodInfo_3528388 *)Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__);
  v85 = v84;
  while ( 1 )
  {
    v55 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v85,
            (const MethodInfo_33FFC54 *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__);
    if ( !v55 )
      break;
    current = v85.fields._current;
    if ( !v85.fields._current )
      sub_1C2E388(v55, v56);
    removeTweenTargetObjects = this->fields.removeTweenTargetObjects;
    gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v85.fields._current,
                                   0LL);
    if ( !removeTweenTargetObjects )
      sub_1C2E388(gameObject, gameObject);
    if ( System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)removeTweenTargetObjects,
           gameObject,
           (const MethodInfo_366BC3C *)Method_System_Collections_Generic_List_GameObject__Contains__) )
    {
      v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      v62 = (Il2CppObject *)v61;
      if ( !v54 )
        sub_1C2E388(v61, v61);
      goto LABEL_22;
    }
    if ( !*v34 )
      sub_1C2E388(0LL, v60);
    if ( System_Collections_Generic_HashSet_object___Contains(
           *v34,
           current,
           (const MethodInfo_3527F14 *)Method_System_Collections_Generic_HashSet_UIWidget__Contains__) )
    {
      v86.fields.r = 0.5;
      v86.fields.g = 0.5;
      v86.fields.b = 0.5;
      v86.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)current, v86, 0LL);
      v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      v62 = (Il2CppObject *)v63;
      if ( !v54 )
        sub_1C2E388(v63, v63);
LABEL_22:
      System_Collections_Generic_List_object___Remove(
        v54,
        v62,
        (const MethodInfo_366CDD4 *)Method_System_Collections_Generic_List_GameObject__Remove__);
    }
    else
    {
      v87.fields.r = 1.0;
      v87.fields.g = 1.0;
      v87.fields.b = 1.0;
      v87.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)current, v87, 0LL);
      v64 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      v71 = (int64_t)v64;
      if ( !v54 )
        sub_1C2E388(v64, v64);
      items = v54->fields._items;
      v73 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v54->fields._version;
      if ( !items )
        sub_1C2E388(v64, v64);
      size = v54->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v54,
          v64,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      }
      else
      {
        v75 = &items->obj.klass + size;
        v54->fields._size = size + 1;
        v75[4] = (Il2CppClass *)v71;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v75 + 4), v71, v65, v66, v67, v68, v69, v70);
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v85,
    (const MethodInfo_33FFC50 *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__);
  v76 = this->fields.button;
  v77 = System_Linq_Enumerable__Distinct_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v54,
          (const MethodInfo_2FEF244 *)Method_System_Linq_Enumerable_Distinct_GameObject___);
  pieceData = (int64_t)System_Linq_Enumerable__ToArray_object_(
                         v77,
                         (const MethodInfo_300BDBC *)Method_System_Linq_Enumerable_ToArray_GameObject___);
  if ( !v76 )
LABEL_39:
    sub_1C2E388(pieceData, v27);
  v76->fields.tweenTargets = (struct UnityEngine_GameObject_array *)pieceData;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v76->fields.tweenTargets, pieceData, v78, v79, v80, v81, v82, v83);
}


void __fastcall WarBoardPieceBaseComponent__UpdateUiByBuffChanged(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *pieceStatusLabelComponent; // x20
  __int64 v4; // x1
  WarBoardPieceStatusLabel_o *v5; // x0

  if ( (byte_4BFB0BD & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFB0BD = 1;
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
      sub_1C2E388(0LL, v4);
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

  if ( (byte_4BFB0D1 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4BFB0D1 = 1;
  }
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, -20 * this->fields.dispPriotiry, v2);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1C2E388(Instance, v5);
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
  __int64 v5; // x1
  struct UIWidget_array *uiWidgets; // x8
  struct UIWidget_array **p_uiWidgets; // x20
  System_Object_array *ComponentsInChildren_object; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int max_length; // w21
  il2cpp_array_size_t i; // w22
  Il2CppClass **v23; // x0
  Il2CppClass *v24; // x8
  Il2CppClass *v25; // t1
  unsigned __int64 v26; // x22
  __int64 v27; // x24
  UnityEngine_Object_o *v28; // x21
  struct UIWidget_array *v29; // x8

  v4 = this;
  if ( (byte_4BFB0CA & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77780256, *(_QWORD *)&value);
    this = (WarBoardPieceBaseComponent_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    byte_4BFB0CA = 1;
  }
  uiWidgets = v4->fields.uiWidgets;
  p_uiWidgets = &v4->fields.uiWidgets;
  if ( !uiWidgets )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)v4,
                                    1,
                                    (const MethodInfo_2FC8DC0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77780256);
    v4->fields.uiWidgets = (struct UIWidget_array *)ComponentsInChildren_object;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&v4->fields.uiWidgets,
      (int64_t)ComponentsInChildren_object,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
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
        v23 = &uiWidgets->obj.klass + (int)i;
        v25 = v23[4];
        this = (WarBoardPieceBaseComponent_o *)(v23 + 4);
        v24 = v25;
        if ( !v25 )
          goto LABEL_26;
        if ( SLODWORD(v24->_1.interfaceOffsets) >= 1001 )
        {
          this->klass = 0LL;
          sub_1C2E0D0((PartyOrganizationUtility_o *)this, 0LL, v15, v16, v17, v18, v19, v20);
        }
        uiWidgets = *p_uiWidgets;
      }
      if ( !uiWidgets )
LABEL_26:
        sub_1C2E388(this, *(_QWORD *)&value);
    }
  }
  if ( (int)*(_QWORD *)&uiWidgets->max_length >= 1 )
  {
    v26 = 0LL;
    v27 = (unsigned int)*(_QWORD *)&uiWidgets->max_length - 1LL;
    while ( v26 < uiWidgets->max_length )
    {
      v28 = (UnityEngine_Object_o *)uiWidgets->m_Items[v26];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardPieceBaseComponent_o *)UnityEngine_Object__op_Inequality(v28, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v29 = *p_uiWidgets;
        if ( !*p_uiWidgets )
          goto LABEL_26;
        if ( v26 >= v29->max_length )
          break;
        this = (WarBoardPieceBaseComponent_o *)v29->m_Items[v26];
        if ( !this )
          goto LABEL_26;
        UIWidget__set_depth((UIWidget_o *)this, LODWORD(this->fields.pieceStatusLabelComponent) + value, 0LL);
      }
      if ( v27 == v26 )
        return;
      uiWidgets = *p_uiWidgets;
      ++v26;
      if ( !*p_uiWidgets )
        goto LABEL_26;
    }
LABEL_28:
    sub_1C2E390(this, *(_QWORD *)&value);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFB0D4 & 1) == 0 )
  {
    sub_1C2E12C(&WarBoardPieceBaseComponent___c_TypeInfo, v1);
    byte_4BFB0D4 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(WarBoardPieceBaseComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardPieceBaseComponent___c_TypeInfo->static_fields->__9 = (struct WarBoardPieceBaseComponent___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)WarBoardPieceBaseComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C2E388(this, 0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)WarBoardPieceData__CreatePieceEventVals(x, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAfterAttack_b__65_3(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BFB0D7 & 1) == 0 )
  {
    sub_1C2E12C(&WarBoardControlUiDataComponent_TypeInfo, method);
    byte_4BFB0D7 = 1;
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

  if ( (byte_4BFB0D5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4BFB0D5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v3);
  CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 0.0, 0LL, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAttack_b__63_4(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BFB0D6 & 1) == 0 )
  {
    sub_1C2E12C(&WarBoardControlUiDataComponent_TypeInfo, method);
    byte_4BFB0D6 = 1;
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

  if ( (byte_4BFB0D8 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x);
    byte_4BFB0D8 = 1;
  }
  targetUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_1C2E388(0LL, x);
  System_Collections_Generic_HashSet_object___Add(
    targetUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_3528A04 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *darkenUiWidgets; // x0

  if ( (byte_4BFB0D9 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x);
    byte_4BFB0D9 = 1;
  }
  darkenUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_1C2E388(0LL, x);
  System_Collections_Generic_HashSet_object___Add(
    darkenUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_3528A04 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *targetUiWidgets; // x0

  if ( (byte_4BFB0DA & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x);
    byte_4BFB0DA = 1;
  }
  targetUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_1C2E388(0LL, x);
  System_Collections_Generic_HashSet_object___Add(
    targetUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_3528A04 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *darkenUiWidgets; // x0

  if ( (byte_4BFB0DB & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x);
    byte_4BFB0DB = 1;
  }
  darkenUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_1C2E388(0LL, x);
  System_Collections_Generic_HashSet_object___Add(
    darkenUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_3528A04 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
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
    sub_1C2E388(0LL, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_4BFB0DC & 1) == 0 )
  {
    sub_1C2E12C(&WarBoardControlUiDataComponent_TypeInfo, method);
    byte_4BFB0DC = 1;
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

  if ( (byte_4BFB0DD & 1) == 0 )
  {
    sub_1C2E12C(&WarBoardControlUiDataComponent_TypeInfo, method);
    byte_4BFB0DD = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v10; // x1
  WarBoardPieceData_o *targetSquarePiece; // x0
  System_Int32_array *PieceEventVals; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v14; // x0
  WarBoardManager_o *warBoardManager; // x19

  if ( (byte_4BFB0DE & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v5);
    sub_1C2E12C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v6);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    byte_4BFB0DE = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 38, this->fields.pieceEventVals, 0LL);
  if ( !v8 )
    goto LABEL_13;
  System_Collections_Generic_List_object___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetSquarePiece = this->fields.targetSquarePiece;
  if ( targetSquarePiece )
  {
    PieceEventVals = WarBoardPieceData__CreatePieceEventVals(targetSquarePiece, 0LL);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    EventTasks = WarBoardManager__GetEventTasks(Instance, 38, PieceEventVals, 0LL);
    System_Collections_Generic_List_object___AddRange(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
      (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
LABEL_13:
    sub_1C2E388(Instance, v10);
  v14 = WarBoardManager__GetEventTasks(Instance, 37, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)v14,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v8,
         (const MethodInfo_2FDD22C *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
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
    sub_1C2E388(0LL, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass63_0___OnAttack_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *warBoardManager; // x0

  warBoardManager = this->fields.warBoardManager;
  if ( !warBoardManager )
    sub_1C2E388(0LL, method);
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
    sub_1C2E388(this, method);
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

  if ( (byte_4BFB0E0 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4BFB0E0 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0LL),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_1C2E388(_4__this, method);
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
    sub_1C2E388(this, method);
  return this->fields.moveAfterActionCheck && targetPiece->fields._isDead_k__BackingField;
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass65_0___OnAfterAttack_g__AddAfterAttackEventTask_0(
        WarBoardPieceBaseComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x1
  WarBoardPieceData_o *targetPiece; // x0
  struct WarBoardManager_o *warBoardManager; // x8
  int32_t id; // w21
  struct WarBoardPieceData_o *v14; // x8
  int32_t breakPoint_k__BackingField; // w23
  WarBoardMessageMaster_o *v16; // x22
  int32_t v17; // w2
  bool v18; // w4
  WarBoardMessageMaster_o *v19; // x0
  int32_t v20; // w1
  int32_t v21; // w3
  System_Int32_array *v22; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v24; // x0
  WarBoardManager_o *v25; // x19

  if ( (byte_4BFB0DF & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_WarBoardMessageMaster___, method);
    sub_1C2E12C(&DataManager_TypeInfo, v3);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v7);
    sub_1C2E12C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v8);
    byte_4BFB0DF = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
    targetPiece = (WarBoardPieceData_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
    v14 = this->fields.targetPiece;
    if ( !v14 )
      goto LABEL_25;
    breakPoint_k__BackingField = v14->fields._breakPoint_k__BackingField;
    v16 = (WarBoardMessageMaster_o *)targetPiece;
    targetPiece = (WarBoardPieceData_o *)WarBoardPieceData__get_isPlayerMaster(this->fields.targetPiece, 0LL);
    if ( !v16 )
      goto LABEL_25;
    if ( ((unsigned __int8)targetPiece & 1) != 0 )
    {
      v17 = 12;
      v18 = 1;
      v19 = v16;
      v20 = id;
      v21 = breakPoint_k__BackingField;
    }
    else
    {
      v17 = 10;
      v19 = v16;
      v20 = id;
      v21 = breakPoint_k__BackingField;
      v18 = 0;
    }
    targetPiece = (WarBoardPieceData_o *)WarBoardMessageMaster__GetMessageTasks(v19, v20, v17, v21, v18, 0LL);
    if ( !v9 )
      goto LABEL_25;
    System_Collections_Generic_List_object___AddRange(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
      (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
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
  v22 = (System_Int32_array *)targetPiece;
  targetPiece = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                         this->fields.warBoardManager,
                                         2,
                                         (System_Int32_array *)targetPiece,
                                         0LL);
  if ( !v9 )
    goto LABEL_25;
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_25;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)targetPiece, 20, v22, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_25;
  v24 = WarBoardManager__GetEventTasks((WarBoardManager_o *)targetPiece, 40, v22, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)v24,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v9,
         (const MethodInfo_2FDD22C *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    v25 = this->fields.warBoardManager;
    targetPiece = (WarBoardPieceData_o *)System_Collections_Generic_List_object___ToArray(
                                           v9,
                                           (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( v25 )
    {
      WarBoardManager__InsertRunningTask(v25, (WarBoardTaskBase_array *)targetPiece, 0LL);
      return;
    }
LABEL_25:
    sub_1C2E388(targetPiece, v10);
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
    sub_1C2E388(0LL, method);
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

  if ( (byte_4BFB0E2 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4BFB0E2 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, 0LL),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_1C2E388(_4__this, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v10; // x1
  WarBoardManager_o *warBoardManager; // x19

  if ( (byte_4BFB0E1 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v5);
    sub_1C2E12C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v6);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    byte_4BFB0E1 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 27, 0LL, 0LL);
  if ( !v8 )
    goto LABEL_9;
  System_Collections_Generic_List_object___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v8,
         (const MethodInfo_2FDD22C *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( warBoardManager )
    {
      WarBoardManager__InsertRunningTask(warBoardManager, (WarBoardTaskBase_array *)Instance, 0LL);
      return;
    }
LABEL_9:
    sub_1C2E388(Instance, v10);
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
    sub_1C2E388(this, 0LL);
  return System_String__op_Equality(a->fields.key, this->fields.effectKey, 0LL);
}