void __fastcall WarBoardPieceBaseComponent___ctor(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FC68B & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__, v3);
    sub_1B64A00(&System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo, v4);
    sub_1B64A00(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    sub_1B64A00(&StringLiteral_6803/*"Frame{0}"*/, v6);
    byte_49FC68B = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData___ctor__);
  this->fields.listEffectData = (struct System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__o *)v7;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.listEffectData, (int32_t)v7, v8, v9);
  *(_OWORD *)&this->fields.positionPieceActionPointDefault.fields.x = xmmword_BA31D0;
  *(_QWORD *)&this->fields.positionPieceActionPointNext.fields.y = 1111228416LL;
  *(_OWORD *)&this->fields.pixelPerSecond = xmmword_BA4750;
  this->fields.lengthMoveAttack = 25.0;
  v10 = StringLiteral_6803/*"Frame{0}"*/;
  this->fields.baseFrameName = (struct System_String_o *)StringLiteral_6803/*"Frame{0}"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.baseFrameName, v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.removeTweenTargetObjects = (struct System_Collections_Generic_List_GameObject__o *)v13;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.removeTweenTargetObjects, (int32_t)v13, v14, v15);
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
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v33; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v34; // x0
  Il2CppObject *Instance; // x20
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s3.4,4:s4.4,8:s5.4

  z = originalPos.fields.z;
  y = originalPos.fields.y;
  x = originalPos.fields.x;
  if ( (byte_49FC682 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&squareIndex);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v11);
    sub_1B64A00(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v12);
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    sub_1B64A00(&WarBoardMovePerformance_TypeInfo, v14);
    byte_49FC682 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_16;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(pieceData, 0LL);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 36, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_16;
  SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)pieceData, squareIndex, 0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  v22 = SquarePosition.fields.x;
  v23 = SquarePosition.fields.y;
  v24 = SquarePosition.fields.z;
  v25 = (WarBoardMovePerformance_o *)sub_1B64C4C(WarBoardMovePerformance_TypeInfo);
  v37.fields.x = x;
  v37.fields.y = y;
  v37.fields.z = z;
  v38.fields.x = v22;
  v38.fields.y = v23;
  v38.fields.z = v24;
  v26 = (Il2CppObject *)v25;
  WarBoardMovePerformance___ctor(v25, gameObject, v37, v38, pixelPerSecond, 0, 0LL);
  items = v15->fields._items;
  v30 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v15->fields._version;
  if ( !items )
    goto LABEL_16;
  size = v15->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      v26,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v32[4] = (Il2CppClass *)v26;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v32 + 4), (int32_t)v26, v27, v28);
  }
  pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData
    || (v33 = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 38, PieceEventVals, 0LL),
        System_Collections_Generic_List_object___AddRange(
          v15,
          (System_Collections_Generic_IEnumerable_T__o *)v33,
          (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (pieceData = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v34 = WarBoardManager__GetEventTasks((WarBoardManager_o *)pieceData, 37, 0LL, 0LL),
        System_Collections_Generic_List_object___AddRange(
          v15,
          (System_Collections_Generic_IEnumerable_T__o *)v34,
          (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        pieceData = (WarBoardPieceData_o *)System_Collections_Generic_List_object___ToArray(
                                             v15,
                                             (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__),
        !Instance) )
  {
LABEL_16:
    sub_1B64C5C(pieceData, v16);
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

  if ( (byte_49FC673 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1B64A00(&Method_WarBoardPieceBaseComponent_ClickIcon__, v3);
    byte_49FC673 = 1;
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v14 = (_QWORD *)sub_1B64A18(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v15 = (System_Reflection_MethodBase_o *)sub_1B649E4(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
      v16 = this->fields.pieceData;
      if ( v16 )
      {
        WarBoardManager__SquareSelect(v7, v16->fields._nowSquareIndex_k__BackingField, 0LL);
        v11 = this->klass->vtable._14_EditPiece.method;
        methodPtr = this->klass->vtable._15_ChangeStatus.methodPtr;
        goto LABEL_33;
      }
LABEL_41:
      sub_1B64C5C(Instance, v5);
    }
  }
  else if ( controllType_k__BackingField == 2 )
  {
    if ( WarBoardManager__get_isSelectedPiece(Instance, 0LL)
      && WarBoardManager__IsSelectedPieceSame(v7, this->fields.pieceData, 0LL) )
    {
      v8 = Method_WarBoardPieceBaseComponent_ClickIcon__;
      if ( (*((_BYTE *)Method_WarBoardPieceBaseComponent_ClickIcon__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1B64A18(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v9 = (System_Reflection_MethodBase_o *)sub_1B649E4(v8, v8[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        seSetting = Instance->fields.seSetting;
        if ( seSetting )
        {
          OverwriteAssetSoundName__PlaySe(v9, seSetting->fields.DeselectSe, 0LL);
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
        v17 = (_QWORD *)sub_1B64A18(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v18 = (System_Reflection_MethodBase_o *)sub_1B649E4(v17, v17[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v19 = Instance->fields.seSetting;
        if ( v19 )
        {
          Instance = (WarBoardManager_o *)OverwriteAssetSoundName__PlaySe(v18, v19->fields.SelectSe, 0LL);
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
        v21 = (_QWORD *)sub_1B64A18(Method_WarBoardPieceBaseComponent_ClickIcon__);
      v22 = (System_Reflection_MethodBase_o *)sub_1B649E4(v21, v21[4]);
      Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        v23 = Instance->fields.seSetting;
        if ( v23 )
        {
          OverwriteAssetSoundName__PlaySe(v22, v23->fields.SelectSe, 0LL);
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
      v24 = (_QWORD *)sub_1B64A18(Method_WarBoardPieceBaseComponent_ClickIcon__);
    v25 = (System_Reflection_MethodBase_o *)sub_1B649E4(v24, v24[4]);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    v26 = Instance->fields.seSetting;
    if ( !v26 )
      goto LABEL_41;
    OverwriteAssetSoundName__PlaySe(v25, v26->fields.OpenSimpleInfoSe, 0LL);
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
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Nullable_Vector3__o v30; // 0:x3.16
  System_Nullable_Vector3__o v31; // 0:x5.16

  if ( (byte_49FC688 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, effectName);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8);
    sub_1B64A00(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v9);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject____75801880, v10);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v11);
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v12);
    sub_1B64A00(&WarBoardCommonEffectPerformance_TypeInfo, v13);
    sub_1B64A00(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v14);
    byte_49FC688 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)Instance,
                               effectName,
                               (const MethodInfo_2F18684 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
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
    v21 = UnityEngine_Object__Instantiate_object__49014464(
            CommonEffectAsset_object,
            (UnityEngine_Transform_o *)v20,
            (const MethodInfo_2EBE6C0 *)Method_UnityEngine_Object_Instantiate_GameObject____75801880);
    v22 = (WarBoardCommonEffectPerformance_o *)sub_1B64C4C(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v30.fields.hasValue = 0LL;
    *(_QWORD *)&v30.fields.value.fields.y = 0LL;
    *(_QWORD *)&v31.fields.hasValue = 0LL;
    *(_QWORD *)&v31.fields.value.fields.y = 0LL;
    v23 = (Il2CppObject *)v22;
    WarBoardCommonEffectPerformance___ctor(
      v22,
      0LL,
      (UnityEngine_GameObject_o *)v21,
      v30,
      v31,
      (System_Nullable_Vector3__o)0,
      0,
      0,
      1,
      0LL);
    if ( v15 )
    {
      items = v15->fields._items;
      v27 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v15->fields._version;
      if ( items )
      {
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            v23,
            *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_17;
        }
        else
        {
          v29 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v23;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v23, v24, v25);
          if ( taskList )
          {
LABEL_17:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v15,
              (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_35192188(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v15,
            0LL);
          return;
        }
      }
    }
LABEL_21:
    sub_1B64C5C(Instance, v17);
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
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Nullable_Vector3__o v29; // 0:x3.16
  System_Nullable_Vector3__o v30; // 0:x5.16

  if ( (byte_49FC689 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, effectName);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v10);
    sub_1B64A00(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v11);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v12);
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    sub_1B64A00(&WarBoardCommonEffectPerformance_TypeInfo, v14);
    byte_49FC689 = 1;
  }
  effectDamageBaseObject = (UnityEngine_Object_o *)this->fields.effectDamageBaseObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(0LL, effectDamageBaseObject, 0LL) )
  {
    v16 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
    v21 = (WarBoardCommonEffectPerformance_o *)sub_1B64C4C(WarBoardCommonEffectPerformance_TypeInfo);
    *(_QWORD *)&v29.fields.hasValue = 0LL;
    *(_QWORD *)&v29.fields.value.fields.y = 0LL;
    *(_QWORD *)&v30.fields.hasValue = 0LL;
    *(_QWORD *)&v30.fields.value.fields.y = 0LL;
    v22 = (Il2CppObject *)v21;
    WarBoardCommonEffectPerformance___ctor(v21, 0LL, v20, v29, v30, (System_Nullable_Vector3__o)0, 0, 0, 0, 0LL);
    if ( v16 )
    {
      items = v16->fields._items;
      v26 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
      ++v16->fields._version;
      if ( items )
      {
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            v22,
            *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          if ( taskList )
            goto LABEL_15;
        }
        else
        {
          v28 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v22;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v22, v23, v24);
          if ( taskList )
          {
LABEL_15:
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)taskList,
              (System_Collections_Generic_IEnumerable_T__o *)v16,
              (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
            return;
          }
        }
        Instance = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( Instance )
        {
          WarBoardManager__AddTask_35192188(
            (WarBoardManager_o *)Instance,
            0,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v16,
            0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_1B64C5C(Instance, v18);
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

  if ( !byte_49F9821 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F9821 = 1;
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

  if ( !byte_49F9821 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F9821 = 1;
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
  _QWORD *v15; // x19
  __int64 v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  WarBoardPieceBaseComponent___c_c *v21; // x0
  System_Func_object__object__o *_9__62_0; // x20
  Il2CppObject *v23; // x21
  struct WarBoardPieceBaseComponent___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3

  v4 = this;
  if ( (byte_49FC67C & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Array_Empty_int___, targetPiece);
    sub_1B64A00(&Method_System_Linq_Enumerable_Concat_int___, v5);
    sub_1B64A00(&Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___, v6);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B64A00(&System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo, v8);
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1B64A00(&Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__, v10);
    this = (WarBoardPieceBaseComponent_o *)sub_1B64A00(&WarBoardPieceBaseComponent___c_TypeInfo, v11);
    byte_49FC67C = 1;
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
              (const MethodInfo_2E5500C *)Method_System_Linq_Enumerable_Concat_int___);
      return System_Linq_Enumerable__ToArray_int_(
               v14,
               (const MethodInfo_2E73B20 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_28:
    sub_1B64C5C(this, targetPiece);
  }
  this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v20 = *(System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.m_CachedPtr;
    v21 = WarBoardPieceBaseComponent___c_TypeInfo;
    if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
      v21 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    _9__62_0 = (System_Func_object__object__o *)v21->static_fields->__9__62_0;
    if ( !_9__62_0 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = WarBoardPieceBaseComponent___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v21->static_fields->__9;
      _9__62_0 = (System_Func_object__object__o *)sub_1B64C4C(System_Func_WarBoardPieceData__IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(
        _9__62_0,
        v23,
        Method_WarBoardPieceBaseComponent___c__GetParticipantVals_b__62_0__,
        0LL);
      static_fields = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
      static_fields->__9__62_0 = (struct System_Func_WarBoardPieceData__IEnumerable_int___o *)_9__62_0;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__62_0, (int32_t)_9__62_0, v25, v26);
    }
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                 v20,
                                                                 (System_Func_TSource__IEnumerable_TResult___o *)_9__62_0,
                                                                 (const MethodInfo_2E6E1B4 *)Method_System_Linq_Enumerable_SelectMany_WarBoardPieceData__int___);
    return System_Linq_Enumerable__ToArray_int_(
             v14,
             (const MethodInfo_2E73B20 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  v15 = Method_System_Array_Empty_int___;
  v16 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v16 )
  {
    sub_1BB6938(Method_System_Array_Empty_int___);
    v16 = v15[7];
  }
  v17 = *(_QWORD *)(v16 + 16);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1BB68DC(v17);
  if ( !*(_DWORD *)(v17 + 224) )
    j_il2cpp_runtime_class_init_0(v17);
  v18 = *(_QWORD *)(v15[7] + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1BB68DC(v18);
  return **(System_Int32_array ***)(v18 + 184);
}


WarBoardSimpleAnimationPerformance_o *__fastcall WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
        WarBoardPieceBaseComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  SimpleAnimation_o *simpleAnimation; // x20
  WarBoardSimpleAnimationPerformance_o *v6; // x21

  if ( (byte_49FC684 & 1) == 0 )
  {
    sub_1B64A00(&WarBoardSimpleAnimationPerformance_TypeInfo, animationName);
    byte_49FC684 = 1;
  }
  simpleAnimation = this->fields.simpleAnimation;
  v6 = (WarBoardSimpleAnimationPerformance_o *)sub_1B64C4C(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(v6, simpleAnimation, animationName, 0LL);
  return v6;
}


void __fastcall WarBoardPieceBaseComponent__HideActionCount(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *currentActionPointRoot; // x0
  UnityEngine_Object_o *currentPieceActionPointRoot; // x20

  if ( (byte_49FC675 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_49FC675 = 1;
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
    sub_1B64C5C(currentActionPointRoot, method);
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
    sub_1B64C5C(0LL, method);
  UnityEngine_GameObject__SetActive(selectObject, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__HideStatus(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x0
  WarBoardManager_o *v4; // x0

  if ( (byte_49FC678 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, method);
    byte_49FC678 = 1;
  }
  v2 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v2 + 309) & 1) == 0 )
    v2 = sub_1BB68DC(v2);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 192) + 16LL);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BB68DC(v3);
  v4 = **(WarBoardManager_o ***)(v3 + 184);
  if ( !v4 )
    sub_1B64C5C(0LL, method);
  WarBoardManager__HideSimplePopup(v4, 0LL, 0LL);
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
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_Transform_o *transform; // x21
  int v23; // s0
  __int64 breakPointMax_k__BackingField; // x21
  struct WarBoardBreakPointComponent_array *v27; // x0
  struct WarBoardBreakPointComponent_array **p_breakPoints; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  UnityEngine_Object_c **v31; // x25
  unsigned __int64 v32; // x29
  float v33; // s8
  __int64 v34; // x23
  int v35; // w26
  float v36; // s9
  __int64 v37; // x27
  Il2CppObject *breakPointPrefab; // x24
  UnityEngine_Transform_o *v39; // x0
  UnityEngine_Object_c *v40; // x8
  UnityEngine_Object_c **v41; // x21
  UnityEngine_Transform_o *v42; // x25
  UnityEngine_GameObject_o *v43; // x25
  WarBoardBreakPointComponent_o *v44; // x24
  struct UIWidget_o *breakPointParent; // x8
  int32_t mDepth; // w28
  bool isMaster; // w25
  const MethodInfo *v48; // x6
  unsigned int *v49; // x25
  int32_t v50; // w2
  int32_t v51; // w3
  const MethodInfo *v52; // x3
  struct WarBoardBreakPointComponent_array *v53; // x8
  float maxSpacing; // s0
  int32_t v55; // w2
  int32_t v56; // w3
  UnityEngine_Transform_array *v57; // x21
  int32_t v58; // w2
  int32_t v59; // w3
  UnityEngine_Transform_o *v60; // x22
  const MethodInfo *v61; // x2
  int32_t PieceDispPriority; // w0
  const MethodInfo *v63; // x2
  const MethodInfo *v64; // x1
  Il2CppObject *CommonEffectAsset_object; // x20
  UnityEngine_Transform_o *v66; // x21
  UnityEngine_Object_o *v67; // x22
  Il2CppObject *v68; // x0
  UnityEngine_GameObject_o **p_effectDamageBaseObject; // x20
  int32_t v70; // w2
  int32_t v71; // w3
  UnityEngine_Object_o *v72; // x21
  Il2CppObject *v73; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  __int64 v76; // x0
  __int64 v77; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FC66F & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_UILabel___, pieceData);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___, v6);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject____75801880, v7);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v8);
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1B64A00(&UnityEngine_Transform___TypeInfo, v10);
    sub_1B64A00(&WarBoardBreakPointComponent___TypeInfo, v11);
    sub_1B64A00(&Method_WarBoardManager_GetCommonEffectAsset_GameObject___, v12);
    sub_1B64A00(&StringLiteral_22872/*"root_text/type01/dm_base"*/, v13);
    sub_1B64A00(&StringLiteral_18757/*"ef_dm_base"*/, v14);
    byte_49FC66F = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimation = (struct SimpleAnimation_o *)Component_object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimation, (int32_t)Component_object, v18, v19);
  this->fields.pieceData = pieceData;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.pieceData, (int32_t)pieceData, v20, v21);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceData )
    goto LABEL_26;
  if ( !gameObject )
    goto LABEL_26;
  *(UnityEngine_Vector3_o *)&v23 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)gameObject,
                                     pieceData->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_26;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v23, 0LL);
  breakPointMax_k__BackingField = (unsigned int)pieceData->fields._breakPointMax_k__BackingField;
  v27 = (struct WarBoardBreakPointComponent_array *)sub_1B64AA8(
                                                      WarBoardBreakPointComponent___TypeInfo,
                                                      (unsigned int)breakPointMax_k__BackingField);
  this->fields.breakPoints = v27;
  p_breakPoints = &this->fields.breakPoints;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.breakPoints, (int32_t)v27, v29, v30);
  gameObject = (__int64)this->fields.breakPointParent;
  if ( !gameObject )
    goto LABEL_26;
  v31 = &UnityEngine_Object_TypeInfo;
  if ( (int)breakPointMax_k__BackingField >= 1 )
  {
    v32 = 0LL;
    v33 = 0.0;
    v34 = 1LL;
    v35 = 2 * breakPointMax_k__BackingField - 2;
    v36 = (float)*(int *)(gameObject + 168) / (float)(int)breakPointMax_k__BackingField;
    v37 = 8LL;
    v77 = breakPointMax_k__BackingField;
    while ( 1 )
    {
      breakPointPrefab = (Il2CppObject *)this->fields.breakPointPrefab;
      v39 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      v40 = *v31;
      v41 = v31;
      v42 = v39;
      if ( !v40->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v40);
      gameObject = (__int64)UnityEngine_Object__Instantiate_object__49014464(
                              breakPointPrefab,
                              v42,
                              (const MethodInfo_2EBE6C0 *)Method_UnityEngine_Object_Instantiate_GameObject____75801880);
      if ( !gameObject )
        goto LABEL_26;
      v43 = (UnityEngine_GameObject_o *)gameObject;
      v44 = (WarBoardBreakPointComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)gameObject,
                                               (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_WarBoardBreakPointComponent___);
      gameObject = (__int64)UnityEngine_GameObject__get_transform(v43, 0LL);
      if ( !gameObject )
        goto LABEL_26;
      v78.fields.y = 0.0;
      v78.fields.z = 0.0;
      v78.fields.x = v33;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v78, 0LL);
      breakPointParent = this->fields.breakPointParent;
      if ( !breakPointParent )
        goto LABEL_26;
      mDepth = breakPointParent->fields.mDepth;
      isMaster = WarBoardPieceData__get_isMaster(pieceData, 0LL);
      gameObject = WarBoardPieceData__get_isEnemyServant(pieceData, 0LL);
      if ( !v44 )
        goto LABEL_26;
      WarBoardBreakPointComponent__Initialize(v44, v35 + mDepth, v34, isMaster, gameObject & 1, 0, v48);
      v49 = (unsigned int *)*p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_26;
      gameObject = sub_1B64B3C(v44, *(_QWORD *)(*(_QWORD *)v49 + 64LL));
      if ( !gameObject )
        goto LABEL_57;
      if ( v32 >= v49[6] )
        goto LABEL_56;
      *(_QWORD *)&v49[v37] = v44;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v49[v37], (int32_t)v44, v50, v51);
      v53 = *p_breakPoints;
      if ( !*p_breakPoints )
        goto LABEL_26;
      if ( v32 >= v53->max_length )
        goto LABEL_56;
      v31 = v41;
      gameObject = *(__int64 *)((char *)&v53->obj.klass + v37 * 4);
      if ( !gameObject )
        goto LABEL_26;
      WarBoardBreakPointComponent__SetActive(
        (WarBoardBreakPointComponent_o *)gameObject,
        (__int64)v32 < pieceData->fields._breakPoint_k__BackingField,
        0,
        v52);
      if ( v77 == v34 )
        break;
      maxSpacing = v44->fields.maxSpacing;
      gameObject = (__int64)this->fields.breakPointParent;
      ++v32;
      v35 -= 2;
      if ( maxSpacing >= v36 )
        maxSpacing = v36;
      ++v34;
      v33 = v33 + maxSpacing;
      v37 += 2LL;
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
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&pieceData->fields.pieceComponent, (int32_t)this, v55, v56);
  if ( pieceData->fields._isDead_k__BackingField )
  {
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_26;
LABEL_30:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    return;
  }
  v57 = (UnityEngine_Transform_array *)sub_1B64AA8(UnityEngine_Transform___TypeInfo, 1LL);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v57 )
    goto LABEL_26;
  v60 = (UnityEngine_Transform_o *)gameObject;
  if ( gameObject )
  {
    gameObject = sub_1B64B3C(gameObject, v57->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_57:
      v76 = sub_1B64C80(gameObject);
      sub_1B64B28(v76, 0LL);
    }
  }
  if ( !v57->max_length )
LABEL_56:
    sub_1B64C64(gameObject, v16);
  v57->m_Items[0] = v60;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)v57->m_Items, (int32_t)v60, v58, v59);
  WarBoardPieceBaseComponent__SetButtonTweenTarget(this, v57, v61);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_26;
  gameObject = *(_QWORD *)(gameObject + 440);
  if ( !gameObject )
    goto LABEL_26;
  PieceDispPriority = WarBoardData__GetPieceDispPriority((WarBoardData_o *)gameObject, pieceData, 0LL);
  this->fields.dispPriotiry = PieceDispPriority;
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, 20 * PieceDispPriority, v63);
  WarBoardPieceBaseComponent__UpdateUiByBuffChanged(this, v64);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_26;
  CommonEffectAsset_object = WarBoardManager__GetCommonEffectAsset_object_(
                               (WarBoardManager_o *)gameObject,
                               (System_String_o *)StringLiteral_18757/*"ef_dm_base"*/,
                               (const MethodInfo_2F18684 *)Method_WarBoardManager_GetCommonEffectAsset_GameObject___);
  if ( !(*v31)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v31);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CommonEffectAsset_object, 0LL, 0LL) )
  {
    v66 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v67 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, void *))this->klass->vtable._41_GetEffectDisplayTransform.method)(
                                    this,
                                    this->klass[1]._1.image);
    if ( !(*v31)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v31);
    if ( UnityEngine_Object__op_Inequality(v67, 0LL, 0LL) )
      v66 = (UnityEngine_Transform_o *)v67;
    if ( !(*v31)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v31);
    v68 = UnityEngine_Object__Instantiate_object__49014464(
            CommonEffectAsset_object,
            v66,
            (const MethodInfo_2EBE6C0 *)Method_UnityEngine_Object_Instantiate_GameObject____75801880);
    this->fields.effectDamageBaseObject = (struct UnityEngine_GameObject_o *)v68;
    p_effectDamageBaseObject = &this->fields.effectDamageBaseObject;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.effectDamageBaseObject, (int32_t)v68, v70, v71);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this->fields.effectDamageBaseObject, 0LL, 0LL) )
    {
      v72 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                      *p_effectDamageBaseObject,
                                      (System_String_o *)StringLiteral_22872/*"root_text/type01/dm_base"*/,
                                      0LL);
      if ( !(*v31)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v31);
      gameObject = UnityEngine_Object__op_Inequality(v72, 0LL, 0LL);
      if ( (gameObject & 1) != 0 )
      {
        if ( !v72 )
          goto LABEL_26;
        v73 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)v72,
                (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        this->fields.effectDamageBaseLabel = (struct UILabel_o *)v73;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.effectDamageBaseLabel, (int32_t)v73, v74, v75);
      }
      gameObject = (__int64)*p_effectDamageBaseObject;
      if ( !*p_effectDamageBaseObject )
LABEL_26:
        sub_1B64C5C(gameObject, v16);
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
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_List_object__o *v24; // x19
  Il2CppObject *Instance; // x0
  WarBoardData_o **v26; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  WarBoardPieceData_o *Piece_35065340; // x0
  WarBoardData_o **v30; // x23
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x24
  WarBoardTaskBase_TaskCallback_o *v34; // x25
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  int32x2_t v44; // d1
  float32x2_t v45; // d9
  float v46; // s10
  float v47; // s2
  float v48; // s8
  float32x2_t v49; // d0
  float32x2_t v50; // d9
  float v51; // s8
  float v52; // s10
  float32x2_t v53; // d9
  float z; // s8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s10
  float v57; // s0
  unsigned __int64 v58; // d1
  float v59; // s0
  __int64 v60; // x24
  WarBoardTaskBase_TaskCallback_o *v61; // x25
  int32_t v62; // w2
  int32_t v63; // w3
  struct WarBoardPieceData_o *v64; // x8
  UnityEngine_GameObject_o *v65; // x26
  float v66; // s8
  float v67; // s9
  float v68; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float v72; // s14
  WarBoardMovePerformance_o *v73; // x0
  WarBoardTaskBase_o *v74; // x25
  bool IsEnabledMovedAfterDefend; // w0
  System_Func_bool__o *v76; // x23
  __int64 v77; // x21
  System_Delegate_o **v78; // x22
  System_Delegate_o *v79; // x23
  WarBoardPieceBaseComponent___c_c *v80; // x0
  WarBoardTaskBase_TaskCallback_o *_9__65_3; // x24
  Il2CppObject *v82; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v83; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  System_Delegate_o *v86; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  System_Delegate_o *v89; // x8
  WarBoardTaskBase_TaskCallback_c *v90; // x1
  int32_t v91; // w2
  int32_t v92; // w3
  struct System_Object_array *v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  Il2CppClass **v96; // x0
  unsigned __int64 v97; // [xsp+0h] [xbp-A0h]
  unsigned __int64 v98; // [xsp+0h] [xbp-A0h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v102; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_49FC67F & 1) == 0 )
  {
    sub_1B64A00(&System_Func_bool__TypeInfo, *(_QWORD *)&squareIndex);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_1B64A00(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_1B64A00(&WarBoardTaskBase_TaskCallback_TypeInfo, v9);
    sub_1B64A00(&Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__, v10);
    sub_1B64A00(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__, v11);
    sub_1B64A00(&Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__, v12);
    sub_1B64A00(
      &Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__,
      v13);
    sub_1B64A00(&WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo, v14);
    sub_1B64A00(&WarBoardPieceBaseComponent___c_TypeInfo, v15);
    sub_1B64A00(&WarBoardCallbackTask_TypeInfo, v16);
    sub_1B64A00(&WarBoardConditionalJumpTask_TypeInfo, v17);
    sub_1B64A00(&WarBoardMovePerformance_TypeInfo, v18);
    byte_49FC67F = 1;
  }
  v19 = sub_1B64C4C(WarBoardPieceBaseComponent___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_60;
  *(_QWORD *)(v19 + 32) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v19 + 32), (int32_t)this, v22, v23);
  *(_DWORD *)(v19 + 52) = squareIndex;
  v24 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v19 + 24) = Instance;
  v26 = (WarBoardData_o **)(v19 + 24);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v19 + 24), (int32_t)Instance, v27, v28);
  if ( !*(_QWORD *)(v19 + 24) )
    goto LABEL_60;
  gameObject = *(WarBoardData_o **)(*(_QWORD *)(v19 + 24) + 440LL);
  if ( !gameObject )
    goto LABEL_60;
  Piece_35065340 = WarBoardData__GetPiece_35065340(gameObject, *(_DWORD *)(v19 + 52), 0LL);
  *(_QWORD *)(v19 + 16) = Piece_35065340;
  v30 = (WarBoardData_o **)(v19 + 16);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v19 + 16), (int32_t)Piece_35065340, v31, v32);
  v33 = sub_1B64C4C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v33, 0LL, 0LL);
  v34 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64C4C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v34,
    (Il2CppObject *)v19,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_g__AddAfterAttackEventTask_0__,
    0LL);
  if ( !v33 )
    goto LABEL_60;
  *(_QWORD *)(v33 + 32) = v34;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v33 + 32), (int32_t)v34, v35, v36);
  if ( !v24 )
    goto LABEL_60;
  items = v24->fields._items;
  v40 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v24->fields._version;
  if ( !items )
    goto LABEL_60;
  size = v24->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v24,
      (Il2CppObject *)v33,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = &items->obj.klass + size;
    v24->fields._size = size + 1;
    v42[4] = (Il2CppClass *)v33;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v42 + 4), v33, v37, v38);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_60;
  gameObject = *v26;
  if ( !*v26 )
    goto LABEL_60;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0LL);
  gameObject = *(WarBoardData_o **)(v19 + 24);
  *(UnityEngine_Vector3_o *)(v19 + 40) = SquarePosition;
  if ( !gameObject )
    goto LABEL_60;
  *(UnityEngine_Vector3_o *)v49.n64_u64 = WarBoardManager__GetSquarePosition(
                                            (WarBoardManager_o *)gameObject,
                                            *(_DWORD *)(v19 + 52),
                                            0LL);
  v45.n64_u64[0] = *(unsigned __int64 *)(v19 + 40);
  v46 = *(float *)(v19 + 48);
  v48 = v47;
  v49.n64_u32[1] = v44.n64_u32[0];
  if ( !byte_49F9823 )
  {
    v97 = v49.n64_u64[0];
    sub_1B64A00(&System_Math_TypeInfo, v21);
    v49.n64_u64[0] = v97;
    byte_49F9823 = 1;
  }
  v50.n64_u64[0] = vsub_f32(v49, v45).n64_u64[0];
  v51 = v48 - v46;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v52 = vaddv_f32(vmul_f32(v50, v50)) + (float)(v51 * v51);
  if ( !byte_49F9824 )
  {
    sub_1B64A00(&System_Math_TypeInfo, v21);
    byte_49F9824 = 1;
  }
  v44.n64_f32[0] = sqrtf(v52);
  v98 = v44.n64_u64[0];
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v44.n64_u64[0] = v98;
  }
  if ( v44.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_49F9821 )
    {
      sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v21);
      byte_49F9821 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v53.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    v53.n64_u64[0] = vdiv_f32(v50, vdup_lane_s32(v44, 0)).n64_u64[0];
    z = v51 / v44.n64_f32[0];
  }
  gameObject = *v30;
  if ( !*v30 )
    goto LABEL_60;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant((WarBoardPieceData_o *)gameObject, 0LL) )
    lengthOnAttack = this->fields.lengthOnEncount;
  v57 = *(float *)&v98 - lengthOnAttack;
  if ( (float)(*(float *)&v98 - lengthOnAttack) > 0.0 )
  {
    v58 = vadd_f32(vmul_n_f32(v53, v57), *(float32x2_t *)(v19 + 40)).n64_u64[0];
    v59 = (float)(z * v57) + *(float *)(v19 + 48);
    *(_QWORD *)(v19 + 40) = v58;
    *(float *)(v19 + 48) = v59;
  }
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_60;
  WarBoardPieceData__CreatePieceEventVals((WarBoardPieceData_o *)gameObject, 0LL);
  v60 = sub_1B64C4C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v60, 0LL, 0LL);
  v61 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64C4C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v61,
    (Il2CppObject *)v19,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__1__,
    0LL);
  if ( !v60 )
    goto LABEL_60;
  *(_QWORD *)(v60 + 32) = v61;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v60 + 32), (int32_t)v61, v62, v63);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v64 = this->fields.pieceData;
  if ( !v64 )
    goto LABEL_60;
  v65 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v19 + 24);
  if ( !gameObject )
    goto LABEL_60;
  v66 = *(float *)(v19 + 40);
  v67 = *(float *)(v19 + 44);
  v68 = *(float *)(v19 + 48);
  v100 = WarBoardManager__GetSquarePosition(
           (WarBoardManager_o *)gameObject,
           v64->fields._nowSquareIndex_k__BackingField,
           0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  x = v100.fields.x;
  y = v100.fields.y;
  v72 = v100.fields.z;
  v73 = (WarBoardMovePerformance_o *)sub_1B64C4C(WarBoardMovePerformance_TypeInfo);
  v101.fields.x = v66;
  v101.fields.y = v67;
  v101.fields.z = v68;
  v102.fields.x = x;
  v102.fields.y = y;
  v102.fields.z = v72;
  v74 = (WarBoardTaskBase_o *)v73;
  WarBoardMovePerformance___ctor(v73, v65, v101, v102, pixelPerSecond, 0, 0LL);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_60;
  if ( WarBoardPieceData__IsEnabledMoveAfterAttack((WarBoardPieceData_o *)gameObject, 0LL) )
  {
    gameObject = *v30;
    if ( !*v30 )
      goto LABEL_60;
    IsEnabledMovedAfterDefend = WarBoardPieceData__IsEnabledMovedAfterDefend((WarBoardPieceData_o *)gameObject, 0LL);
  }
  else
  {
    IsEnabledMovedAfterDefend = 0;
  }
  *(_BYTE *)(v19 + 56) = IsEnabledMovedAfterDefend;
  v76 = (System_Func_bool__o *)sub_1B64C4C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v76,
    (Il2CppObject *)v19,
    Method_WarBoardPieceBaseComponent___c__DisplayClass65_0__OnAfterAttack_b__2__,
    0LL);
  v77 = sub_1B64C4C(WarBoardConditionalJumpTask_TypeInfo);
  WarBoardConditionalJumpTask___ctor((WarBoardConditionalJumpTask_o *)v77, v76, (WarBoardTaskBase_o *)v60, v74, 0LL);
  if ( !v77 )
LABEL_60:
    sub_1B64C5C(gameObject, v21);
  v78 = (System_Delegate_o **)(v77 + 40);
  v79 = *(System_Delegate_o **)(v77 + 40);
  v80 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v80 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  _9__65_3 = v80->static_fields->__9__65_3;
  if ( !_9__65_3 )
  {
    if ( !v80->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v80);
      v80 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    v82 = (Il2CppObject *)v80->static_fields->__9;
    _9__65_3 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64C4C(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__65_3,
      v82,
      Method_WarBoardPieceBaseComponent___c__OnAfterAttack_b__65_3__,
      0LL);
    v83 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v83->__9__65_3 = _9__65_3;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v83->__9__65_3, (int32_t)_9__65_3, v84, v85);
  }
  v86 = System_Delegate__Combine(v79, (System_Delegate_o *)_9__65_3, 0LL);
  v89 = v86;
  if ( v86 )
  {
    v90 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v86->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v78 = v86;
      if ( (WarBoardTaskBase_TaskCallback_c *)v86->klass == v90 )
        goto LABEL_54;
    }
    sub_1B64F1C(v86);
  }
  *v78 = v89;
LABEL_54:
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v77 + 40), (int32_t)v89, v87, v88);
  v93 = v24->fields._items;
  v94 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v24->fields._version;
  if ( !v93 )
    goto LABEL_60;
  v95 = v24->fields._size;
  if ( (unsigned int)v95 >= v93->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v24,
      (Il2CppObject *)v77,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
  }
  else
  {
    v96 = &v93->obj.klass + v95;
    v24->fields._size = v95 + 1;
    v96[4] = (Il2CppClass *)v77;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v96 + 4), v77, v91, v92);
  }
  gameObject = *v26;
  if ( !*v26 )
    goto LABEL_60;
  WarBoardManager__AddTask_35192188(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v24,
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
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_List_object__o *v22; // x20
  Il2CppObject *Instance; // x0
  WarBoardData_o **v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  WarBoardWallData_o *Wall; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x23
  WarBoardTaskBase_TaskCallback_o *v31; // x24
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v41; // x1
  int32x2_t v42; // d3
  float32x2_t v43; // d9
  float v44; // s10
  float v45; // s2
  float v46; // s8
  unsigned __int32 v47; // s1
  float32x2_t v48; // d0
  float32x2_t v49; // d9
  float v50; // s8
  float v51; // s10
  float32x2_t v52; // d0
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v55; // s2
  float v56; // s1
  __int64 v57; // x23
  WarBoardTaskBase_TaskCallback_o *v58; // x24
  int32_t v59; // w2
  int32_t v60; // w3
  struct WarBoardPieceData_o *v61; // x8
  UnityEngine_GameObject_o *v62; // x25
  float v63; // s8
  float v64; // s9
  float v65; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float v69; // s14
  WarBoardMovePerformance_o *v70; // x0
  WarBoardTaskBase_o *v71; // x24
  System_Func_bool__o *v72; // x25
  WarBoardConditionalJumpTask_o *v73; // x19
  int32_t v74; // w2
  int32_t v75; // w3
  struct System_Object_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  Il2CppClass **v79; // x0
  unsigned __int64 v80; // [xsp+0h] [xbp-A0h]
  unsigned __int64 v81; // [xsp+0h] [xbp-A0h]
  unsigned __int32 v82; // [xsp+0h] [xbp-A0h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_49FC681 & 1) == 0 )
  {
    sub_1B64A00(&System_Func_bool__TypeInfo, *(_QWORD *)&squareIndex);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_1B64A00(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_1B64A00(&WarBoardTaskBase_TaskCallback_TypeInfo, v9);
    sub_1B64A00(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__, v10);
    sub_1B64A00(&Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__, v11);
    sub_1B64A00(
      &Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__,
      v12);
    sub_1B64A00(&WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo, v13);
    sub_1B64A00(&WarBoardCallbackTask_TypeInfo, v14);
    sub_1B64A00(&WarBoardConditionalJumpTask_TypeInfo, v15);
    sub_1B64A00(&WarBoardMovePerformance_TypeInfo, v16);
    byte_49FC681 = 1;
  }
  v17 = sub_1B64C4C(WarBoardPieceBaseComponent___c__DisplayClass67_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_40;
  *(_QWORD *)(v17 + 24) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)this, v20, v21);
  *(_DWORD *)(v17 + 44) = squareIndex;
  v22 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  *(_QWORD *)(v17 + 16) = Instance;
  v24 = (WarBoardData_o **)(v17 + 16);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)Instance, v25, v26);
  if ( !*(_QWORD *)(v17 + 16) )
    goto LABEL_40;
  gameObject = *(WarBoardData_o **)(*(_QWORD *)(v17 + 16) + 440LL);
  if ( !gameObject )
    goto LABEL_40;
  Wall = WarBoardData__GetWall(gameObject, *(_DWORD *)(v17 + 44), 1, 0LL);
  *(_QWORD *)(v17 + 48) = Wall;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v17 + 48), (int32_t)Wall, v28, v29);
  v30 = sub_1B64C4C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v30, 0LL, 0LL);
  v31 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64C4C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v31,
    (Il2CppObject *)v17,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_g__AddAfterAttackEventTask_0__,
    0LL);
  if ( !v30 )
    goto LABEL_40;
  *(_QWORD *)(v30 + 32) = v31;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v30 + 32), (int32_t)v31, v32, v33);
  if ( !v22 )
    goto LABEL_40;
  items = v22->fields._items;
  v37 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v22->fields._version;
  if ( !items )
    goto LABEL_40;
  size = v22->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      (Il2CppObject *)v30,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = &items->obj.klass + size;
    v22->fields._size = size + 1;
    v39[4] = (Il2CppClass *)v30;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v39 + 4), v30, v34, v35);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_40;
  gameObject = *v24;
  if ( !*v24 )
    goto LABEL_40;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)gameObject,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0LL);
  gameObject = *(WarBoardData_o **)(v17 + 16);
  *(UnityEngine_Vector3_o *)(v17 + 32) = SquarePosition;
  if ( !gameObject )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)v48.n64_u64 = WarBoardManager__GetSquarePosition(
                                            (WarBoardManager_o *)gameObject,
                                            *(_DWORD *)(v17 + 44),
                                            0LL);
  v43.n64_u64[0] = *(unsigned __int64 *)(v17 + 32);
  v44 = *(float *)(v17 + 40);
  v46 = v45;
  v48.n64_u32[1] = v47;
  if ( !byte_49F9823 )
  {
    v80 = v48.n64_u64[0];
    sub_1B64A00(&System_Math_TypeInfo, v41);
    v48.n64_u64[0] = v80;
    byte_49F9823 = 1;
  }
  v49.n64_u64[0] = vsub_f32(v48, v43).n64_u64[0];
  v50 = v46 - v44;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v51 = vaddv_f32(vmul_f32(v49, v49)) + (float)(v50 * v50);
  if ( !byte_49F9824 )
  {
    sub_1B64A00(&System_Math_TypeInfo, v41);
    byte_49F9824 = 1;
  }
  v42.n64_f32[0] = sqrtf(v51);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    v81 = v42.n64_u64[0];
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v42.n64_u64[0] = v81;
  }
  if ( v42.n64_f32[0] <= 0.00001 )
  {
    if ( !byte_49F9821 )
    {
      v82 = v42.n64_u32[0];
      sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v41);
      v42.n64_u32[0] = v82;
      byte_49F9821 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v52.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    v52.n64_u64[0] = vdiv_f32(v49, vdup_lane_s32(v42, 0)).n64_u64[0];
    z = v50 / v42.n64_f32[0];
  }
  v55 = v42.n64_f32[0] - this->fields.lengthOnAttack;
  if ( v55 > 0.0 )
  {
    v56 = (float)(z * v55) + *(float *)(v17 + 40);
    *(float32x2_t *)(v17 + 32) = vadd_f32(vmul_n_f32(v52, v55), *(float32x2_t *)(v17 + 32));
    *(float *)(v17 + 40) = v56;
  }
  v57 = sub_1B64C4C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v57, 0LL, 0LL);
  v58 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64C4C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v58,
    (Il2CppObject *)v17,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__1__,
    0LL);
  if ( !v57 )
    goto LABEL_40;
  *(_QWORD *)(v57 + 32) = v58;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v57 + 32), (int32_t)v58, v59, v60);
  gameObject = (WarBoardData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v61 = this->fields.pieceData;
  if ( !v61 )
    goto LABEL_40;
  v62 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = *(WarBoardData_o **)(v17 + 16);
  if ( !gameObject )
    goto LABEL_40;
  v63 = *(float *)(v17 + 32);
  v64 = *(float *)(v17 + 36);
  v65 = *(float *)(v17 + 40);
  v84 = WarBoardManager__GetSquarePosition(
          (WarBoardManager_o *)gameObject,
          v61->fields._nowSquareIndex_k__BackingField,
          0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  x = v84.fields.x;
  y = v84.fields.y;
  v69 = v84.fields.z;
  v70 = (WarBoardMovePerformance_o *)sub_1B64C4C(WarBoardMovePerformance_TypeInfo);
  v85.fields.x = v63;
  v85.fields.y = v64;
  v85.fields.z = v65;
  v86.fields.x = x;
  v86.fields.y = y;
  v86.fields.z = v69;
  v71 = (WarBoardTaskBase_o *)v70;
  WarBoardMovePerformance___ctor(v70, v62, v85, v86, pixelPerSecond, 0, 0LL);
  gameObject = (WarBoardData_o *)this->fields.pieceData;
  if ( !gameObject )
    goto LABEL_40;
  *(_BYTE *)(v17 + 56) = WarBoardPieceData__IsEnabledMoveAfterAttack((WarBoardPieceData_o *)gameObject, 0LL);
  v72 = (System_Func_bool__o *)sub_1B64C4C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v72,
    (Il2CppObject *)v17,
    Method_WarBoardPieceBaseComponent___c__DisplayClass67_0__OnAfterWallAttack_b__2__,
    0LL);
  v73 = (WarBoardConditionalJumpTask_o *)sub_1B64C4C(WarBoardConditionalJumpTask_TypeInfo);
  WarBoardConditionalJumpTask___ctor(v73, v72, (WarBoardTaskBase_o *)v57, v71, 0LL);
  v76 = v22->fields._items;
  v77 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v22->fields._version;
  if ( !v76 )
    goto LABEL_40;
  v78 = v22->fields._size;
  if ( (unsigned int)v78 >= v76->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      (Il2CppObject *)v73,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
  }
  else
  {
    v79 = &v76->obj.klass + v78;
    v22->fields._size = v78 + 1;
    v79[4] = (Il2CppClass *)v73;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v79 + 4), (int32_t)v73, v74, v75);
  }
  gameObject = *v24;
  if ( !*v24 )
LABEL_40:
    sub_1B64C5C(gameObject, v19);
  WarBoardManager__AddTask_35192188(
    (WarBoardManager_o *)gameObject,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v22,
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
  __int64 v32; // x23
  __int64 Instance; // x0
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 *v37; // x19
  struct WarBoardPieceData_o *pieceData; // x8
  WarBoardPieceData_o *v39; // x22
  float v40; // s0
  float v41; // s1
  float v42; // s2
  float v43; // s11
  float v44; // s9
  float v45; // s10
  float v46; // s1
  float v47; // s2
  float v48; // s0
  float v49; // s8
  float v50; // s12
  WarBoardSquareData_o *Square; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_Collections_Generic_List_object__o *v54; // x20
  const MethodInfo *v55; // x2
  System_Int32_array *ParticipantVals; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v58; // x0
  __int64 v59; // x25
  WarBoardTaskBase_TaskCallback_c **v60; // x19
  System_Delegate_o **v61; // x26
  System_Delegate_o *v62; // x27
  WarBoardTaskBase_TaskCallback_o *v63; // x28
  System_Delegate_o *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  WarBoardPieceBaseComponent_c *v67; // x8
  WarBoardTaskBase_TaskCallback_c *v68; // x1
  int32_t v69; // w2
  int32_t v70; // w3
  struct System_Object_array *items; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  float v75; // s13
  float v76; // s14
  float v77; // s12
  float v78; // s8
  float x; // s14
  float y; // s13
  float z; // s15
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float lengthOnAttack; // s12
  float v84; // s0
  float v85; // s3
  float v86; // s1
  float v87; // s2
  float v88; // s0
  float v89; // s15
  float v90; // s8
  float v91; // s13
  UnityEngine_GameObject_o *gameObject; // x0
  float pixelPerSecond; // s12
  UnityEngine_GameObject_o *v94; // x26
  WarBoardMovePerformance_o *v95; // x0
  Il2CppObject *v96; // x25
  int32_t v97; // w2
  int32_t v98; // w3
  struct System_Object_array *v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  Il2CppClass **v102; // x0
  System_Collections_Generic_List_object__o *v103; // x25
  System_Collections_Generic_List_WarBoardTaskBase__o *v104; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v105; // x0
  float lengthMoveAttack; // s0
  float v107; // s8
  float v108; // s12
  float v109; // s13
  UnityEngine_GameObject_o *v110; // x0
  float v111; // s14
  UnityEngine_GameObject_o *v112; // x21
  WarBoardMovePerformance_o *v113; // x0
  WarBoardTaskBase_o *v114; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *v115; // x21
  WarBoardMessageMaster_o *v116; // x23
  int32_t id; // w26
  System_Collections_Generic_List_object__o *v118; // x0
  int32_t breakPoint_k__BackingField; // w27
  int32_t v120; // w2
  bool v121; // w4
  WarBoardMessageMaster_o *v122; // x0
  int32_t v123; // w1
  int32_t v124; // w3
  __int64 v125; // x24
  int32_t v126; // w2
  int32_t v127; // w3
  Il2CppObject **v128; // x22
  __int64 v129; // x1
  float lengthOnEncount; // s0
  float v131; // s1
  float v132; // s12
  float v133; // s2
  float v134; // s0
  float v135; // s8
  float v136; // s14
  float v137; // s9
  float v138; // s11
  float v139; // s15
  float v140; // s13
  float v141; // s14
  float v142; // s10
  float v143; // s12
  float v144; // s13
  float v145; // s14
  float v146; // s15
  struct UnityEngine_Vector3_StaticFields *v147; // x8
  float v148; // s1
  _QWORD *monitor; // x8
  __int64 v150; // x8
  float v151; // s10
  float ZoomSize; // s0
  __int64 v153; // x8
  __int64 v154; // x8
  __int64 v155; // x8
  const MethodInfo_35D4904 *v156; // x2
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  __int64 v158; // x8
  WarBoardManager_o *v159; // x23
  float v160; // s8
  float v161; // s10
  float encountCameraSize; // s0
  int32_t v163; // w2
  int32_t v164; // w3
  struct System_Object_array *v165; // x8
  _QWORD *v166; // x9
  __int64 v167; // x10
  __int64 v168; // x1
  Il2CppClass **v169; // x0
  System_Collections_Generic_IEnumerable_T__o *v170; // x23
  int32_t v171; // w2
  int32_t v172; // w3
  WarBoardTaskBase_array *v173; // x23
  WarBoardManager_o *v174; // x24
  int v175; // s0
  int32_t v178; // w2
  int32_t v179; // w3
  WarBoardTaskBase_o *v180; // x24
  int32_t v181; // w2
  int32_t v182; // w3
  WarBoardTaskBase_o *v183; // x24
  const MethodInfo *v184; // x2
  int32_t v185; // w2
  int32_t v186; // w3
  WarBoardTaskBase_o *v187; // x22
  WarBoardOrthostichySchedule_o *v188; // x22
  int32_t v189; // w2
  int32_t v190; // w3
  WarBoardParallelSchedule_o *v191; // x21
  int32_t v192; // w2
  int32_t v193; // w3
  struct System_Object_array *v194; // x8
  _QWORD *v195; // x9
  __int64 v196; // x10
  Il2CppClass **v197; // x0
  ServantStatusBattleListViewItem_o *v198; // x0
  int32_t v199; // w1
  int32_t v200; // w2
  int32_t v201; // w3
  WarBoardPieceBaseComponent___c_c *v202; // x8
  System_Action_o *_9__63_1; // x23
  Il2CppObject *v204; // x25
  struct WarBoardPieceBaseComponent___c_StaticFields *v205; // x0
  int32_t v206; // w2
  int32_t v207; // w3
  struct UIWidget_o **p_breakPointParent; // x23
  System_Delegate_o *breakPointParent; // x25
  WarBoardTaskBase_TaskCallback_o *v210; // x26
  System_Delegate_o *v211; // x0
  int32_t v212; // w2
  int32_t v213; // w3
  WarBoardTaskBase_TaskCallback_c *v214; // x1
  int32_t v215; // w2
  int32_t v216; // w3
  struct System_Object_array *v217; // x8
  _QWORD *v218; // x9
  __int64 v219; // x10
  Il2CppClass **v220; // x0
  System_Delegate_o *v221; // x23
  Il2CppObject *v222; // x22
  WarBoardTaskBase_TaskCallback_o *v223; // x24
  WarBoardPieceBaseComponent_c *v224; // x0
  WarBoardTaskBase_TaskCallback_c *v225; // x1
  System_Delegate_o *v226; // x22
  WarBoardPieceBaseComponent___c_c *v227; // x0
  WarBoardTaskBase_TaskCallback_o *_9__63_4; // x23
  Il2CppObject *v229; // x24
  struct WarBoardPieceBaseComponent___c_StaticFields *v230; // x0
  int32_t v231; // w2
  int32_t v232; // w3
  WarBoardPieceBaseComponent_c *v233; // x0
  int32_t v234; // w2
  int32_t v235; // w3
  WarBoardTaskBase_TaskCallback_c *v236; // x1
  __int64 v237; // x0
  float v238; // [xsp+0h] [xbp-E0h]
  float v239; // [xsp+4h] [xbp-DCh]
  float v240; // [xsp+10h] [xbp-D0h]
  float v241; // [xsp+14h] [xbp-CCh]
  WarBoardManager_o **v242; // [xsp+18h] [xbp-C8h]
  float v243; // [xsp+24h] [xbp-BCh]
  System_Nullable_float__o size; // [xsp+28h] [xbp-B8h] BYREF
  System_Nullable_Vector3__o v245; // [xsp+30h] [xbp-B0h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v247; // 0:x3.8
  System_Nullable_Vector3__o v248; // 0:x0.16
  UnityEngine_Vector3_o v249; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v250; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v251; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v252; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v253; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v254; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_49FC67D & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, *(_QWORD *)&squareIndex);
    sub_1B64A00(&Method_DataManager_GetMaster_WarBoardMessageMaster___, v5);
    sub_1B64A00(&DataManager_TypeInfo, v6);
    sub_1B64A00(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__, v12);
    sub_1B64A00(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v13);
    sub_1B64A00(&Method_System_Nullable_Vector3___ctor__, v14);
    sub_1B64A00(&Method_System_Nullable_float___ctor__, v15);
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    sub_1B64A00(&WarBoardTaskBase_TaskCallback_TypeInfo, v17);
    sub_1B64A00(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__, v18);
    sub_1B64A00(&Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__, v19);
    sub_1B64A00(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__, v20);
    sub_1B64A00(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__, v21);
    sub_1B64A00(&WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo, v22);
    sub_1B64A00(&Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__, v23);
    sub_1B64A00(&WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo, v24);
    sub_1B64A00(&WarBoardPieceBaseComponent___c_TypeInfo, v25);
    sub_1B64A00(&WarBoardCallbackTask_TypeInfo, v26);
    sub_1B64A00(&WarBoardMovePerformance_TypeInfo, v27);
    sub_1B64A00(&WarBoardOrthostichySchedule_TypeInfo, v28);
    sub_1B64A00(&WarBoardParallelSchedule_TypeInfo, v29);
    sub_1B64A00(&WarBoardTaskBase___TypeInfo, v30);
    sub_1B64A00(&StringLiteral_8858/*"MasterDamage"*/, v31);
    byte_49FC67D = 1;
  }
  v32 = sub_1B64C4C(WarBoardPieceBaseComponent___c__DisplayClass63_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v32 )
    goto LABEL_157;
  *(_QWORD *)(v32 + 24) = Instance;
  v37 = (__int64 *)(v32 + 24);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v32 + 24), Instance, v35, v36);
  if ( !*(_QWORD *)(v32 + 24) )
    goto LABEL_157;
  Instance = *(_QWORD *)(*(_QWORD *)(v32 + 24) + 440LL);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardData__GetPiece_35065340((WarBoardData_o *)Instance, squareIndex, 0LL);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_157;
  v39 = (WarBoardPieceData_o *)Instance;
  Instance = *v37;
  if ( !*v37 )
    goto LABEL_157;
  *(UnityEngine_Vector3_o *)&v40 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)Instance,
                                     pieceData->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  Instance = *v37;
  if ( !*v37 )
    goto LABEL_157;
  v43 = v40;
  v44 = v41;
  v45 = v42;
  *(UnityEngine_Vector3_o *)(&v46 - 1) = WarBoardManager__GetSquarePosition(
                                           (WarBoardManager_o *)Instance,
                                           squareIndex,
                                           0LL);
  v243 = v48;
  if ( !*v37 )
    goto LABEL_157;
  Instance = *(_QWORD *)(*v37 + 440);
  if ( !Instance )
    goto LABEL_157;
  v49 = v46;
  v50 = v47;
  Square = WarBoardData__GetSquare((WarBoardData_o *)Instance, squareIndex, 0LL);
  *(_QWORD *)(v32 + 16) = Square;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v32 + 16), (int32_t)Square, v52, v53);
  v54 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v54,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  ParticipantVals = WarBoardPieceBaseComponent__GetParticipantVals(this, v39, v55);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 42, ParticipantVals, 0LL);
  if ( !v54 )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    v54,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 43, ParticipantVals, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v54,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v242 = (WarBoardManager_o **)(v32 + 24);
  v58 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 41, ParticipantVals, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v54,
    (System_Collections_Generic_IEnumerable_T__o *)v58,
    (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v59 = sub_1B64C4C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v59, 0LL, 0LL);
  if ( !v59 )
    goto LABEL_157;
  v60 = &WarBoardTaskBase_TaskCallback_TypeInfo;
  v61 = (System_Delegate_o **)(v59 + 32);
  v62 = *(System_Delegate_o **)(v59 + 32);
  v63 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64C4C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v63,
    (Il2CppObject *)v32,
    Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__0__,
    0LL);
  v64 = System_Delegate__Combine(v62, (System_Delegate_o *)v63, 0LL);
  v67 = (WarBoardPieceBaseComponent_c *)v64;
  if ( v64 )
  {
    v68 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v64->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_152;
    *v61 = v64;
    if ( (WarBoardTaskBase_TaskCallback_c *)v64->klass != v68 )
      goto LABEL_152;
  }
  else
  {
    *v61 = 0LL;
  }
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v59 + 32), (int32_t)v64, v65, v66);
  items = v54->fields._items;
  v72 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v54->fields._version;
  if ( !items )
    goto LABEL_157;
  v73 = v54->fields._size;
  if ( (unsigned int)v73 >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v54,
      (Il2CppObject *)v59,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
  }
  else
  {
    v74 = &items->obj.klass + v73;
    v54->fields._size = v73 + 1;
    v74[4] = (Il2CppClass *)v59;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v74 + 4), v59, v69, v70);
  }
  if ( !byte_49F9823 )
  {
    sub_1B64A00(&System_Math_TypeInfo, v34);
    byte_49F9823 = 1;
  }
  v240 = v50;
  v241 = v49;
  v75 = v49 - v44;
  v76 = v243 - v43;
  v77 = v50 - v45;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_49F9824 )
  {
    sub_1B64A00(&System_Math_TypeInfo, v34);
    byte_49F9824 = 1;
  }
  Instance = (__int64)System_Math_TypeInfo;
  v78 = sqrtf((float)(v77 * v77) + (float)((float)(v76 * v76) + (float)(v75 * v75)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v78 <= 0.00001 )
  {
    if ( !byte_49F9821 )
    {
      Instance = sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v34);
      byte_49F9821 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    x = v76 / v78;
    y = v75 / v78;
    z = v77 / v78;
  }
  if ( !v39 )
    goto LABEL_157;
  lengthOnAttack = this->fields.lengthOnAttack;
  if ( WarBoardPieceData__get_isServant(v39, 0LL) )
    lengthOnAttack = this->fields.lengthOnEncount;
  v84 = v78 - lengthOnAttack;
  if ( (float)(v78 - lengthOnAttack) > 0.0 )
  {
    v85 = z;
    v239 = y;
    v86 = x * v84;
    v87 = y * v84;
    v88 = z * v84;
    v89 = v44;
    v90 = v43;
    v238 = v85;
    v43 = v43 + v86;
    v44 = v44 + v87;
    v91 = v45 + v88;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    pixelPerSecond = this->fields.pixelPerSecond;
    v94 = gameObject;
    v95 = (WarBoardMovePerformance_o *)sub_1B64C4C(WarBoardMovePerformance_TypeInfo);
    v249.fields.x = v90;
    v249.fields.y = v89;
    v249.fields.z = v45;
    v253.fields.x = v43;
    v253.fields.y = v44;
    v253.fields.z = v91;
    v96 = (Il2CppObject *)v95;
    v45 = v91;
    WarBoardMovePerformance___ctor(v95, v94, v249, v253, pixelPerSecond, 5, 0LL);
    v99 = v54->fields._items;
    v100 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v54->fields._version;
    if ( !v99 )
      goto LABEL_157;
    v101 = v54->fields._size;
    if ( (unsigned int)v101 >= v99->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v54,
        v96,
        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
    }
    else
    {
      v102 = &v99->obj.klass + v101;
      v54->fields._size = v101 + 1;
      v102[4] = (Il2CppClass *)v96;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v102 + 4), (int32_t)v96, v97, v98);
    }
    y = v239;
    z = v238;
  }
  v103 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v103,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 1, ParticipantVals, 0LL);
  if ( !v103 )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    v103,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v104 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 19, ParticipantVals, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v103,
    (System_Collections_Generic_IEnumerable_T__o *)v104,
    (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  v105 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 39, ParticipantVals, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v103,
    (System_Collections_Generic_IEnumerable_T__o *)v105,
    (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !WarBoardPieceData__get_isMaster(v39, 0LL) )
  {
    v125 = sub_1B64C4C(WarBoardPieceBaseComponent___c__DisplayClass63_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v125, 0LL);
    if ( v125 )
    {
      *(_QWORD *)(v125 + 32) = v32;
      v128 = (Il2CppObject **)(v125 + 32);
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v125 + 32), v32, v126, v127);
      System_Collections_Generic_List_object___AddRange(
        v54,
        (System_Collections_Generic_IEnumerable_T__o *)v103,
        (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      lengthOnEncount = this->fields.lengthOnEncount;
      v131 = x * lengthOnEncount;
      v132 = v243 - (float)(x * lengthOnEncount);
      v133 = y * lengthOnEncount;
      v134 = z * lengthOnEncount;
      v135 = v43 + v131;
      v136 = v241 - v133;
      v137 = v44 + v133;
      v138 = v45 + v134;
      v139 = v240 - v134;
      if ( !byte_49F9824 )
      {
        sub_1B64A00(&System_Math_TypeInfo, v129);
        byte_49F9824 = 1;
      }
      v140 = v132 - v135;
      v141 = v136 - v137;
      v142 = v139 - v138;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v143 = sqrtf((float)(v142 * v142) + (float)((float)(v140 * v140) + (float)(v141 * v141)));
      if ( v143 <= 0.00001 )
      {
        if ( !byte_49F9821 )
        {
          sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v129);
          byte_49F9821 = 1;
        }
        v147 = UnityEngine_Vector3_TypeInfo->static_fields;
        v144 = v147->zeroVector.fields.x;
        v145 = v147->zeroVector.fields.y;
        v146 = v147->zeroVector.fields.z;
      }
      else
      {
        v144 = v140 / v143;
        v145 = v141 / v143;
        v146 = v142 / v143;
      }
      if ( !byte_49F9823 )
      {
        sub_1B64A00(&System_Math_TypeInfo, v129);
        byte_49F9823 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      Instance = ((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._35_GetIconLocalPosition.method)(
                   this,
                   this->klass->vtable._36_OnShowDamagePopup.methodPtr);
      v60 = (WarBoardTaskBase_TaskCallback_c **)(v32 + 24);
      if ( *v128 )
      {
        monitor = (*v128)[1].monitor;
        if ( monitor )
        {
          v150 = monitor[6];
          if ( v150 )
          {
            Instance = *(_QWORD *)(v150 + 80);
            if ( Instance )
            {
              v151 = v148;
              ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)Instance, 0LL);
              v153 = *(_QWORD *)(v125 + 32);
              *(float *)(v125 + 16) = ZoomSize;
              if ( v153 )
              {
                v154 = *(_QWORD *)(v153 + 24);
                if ( v154 )
                {
                  v155 = *(_QWORD *)(v154 + 48);
                  if ( v155 )
                  {
                    Instance = *(_QWORD *)(v155 + 72);
                    if ( Instance )
                    {
                      ScrlPos = MapScroll__GetScrlPos((MapScroll_o *)Instance, 0LL);
                      v158 = *(_QWORD *)(v125 + 32);
                      *(UnityEngine_Vector2_o *)(v125 + 20) = ScrlPos;
                      if ( v158 )
                      {
                        v159 = *(WarBoardManager_o **)(v158 + 24);
                        *(_QWORD *)&v248.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                        v160 = v135 + (float)((float)(v143 * v144) * 0.5);
                        v161 = (float)(v137 + (float)((float)(v143 * v145) * 0.5)) + v151;
                        *(_QWORD *)&v248.fields.hasValue = &v245;
                        v251.fields.x = v160;
                        v251.fields.y = v161;
                        v251.fields.z = v138 + (float)((float)(v143 * v146) * 0.5);
                        *(_QWORD *)&v245.fields.hasValue = 0LL;
                        *(_QWORD *)&v245.fields.value.fields.y = 0LL;
                        System_Nullable_Vector3____ctor(v248, v251, v156);
                        encountCameraSize = this->fields.encountCameraSize;
                        p_size = (System_Nullable_float__o)&size;
                        size = 0LL;
                        System_Nullable_float____ctor(
                          p_size,
                          encountCameraSize,
                          (const MethodInfo_35D28A0 *)Method_System_Nullable_float___ctor__);
                        if ( v159 )
                        {
                          v247 = size;
                          Instance = (__int64)WarBoardManager__GetCameraPerformanceTask(v159, v245, v247, 1, 0, 1, 0LL);
                          v165 = v54->fields._items;
                          v166 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                          ++v54->fields._version;
                          if ( v165 )
                          {
                            v167 = v54->fields._size;
                            v168 = Instance;
                            if ( (unsigned int)v167 >= v165->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v54,
                                (Il2CppObject *)Instance,
                                *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v166[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v169 = &v165->obj.klass + v167;
                              v54->fields._size = v167 + 1;
                              v169[4] = (Il2CppClass *)v168;
                              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v169 + 4), v168, v163, v164);
                            }
                            if ( *v128 )
                            {
                              Instance = (__int64)(*v128)[1].monitor;
                              if ( Instance )
                              {
                                v252.fields.x = v160;
                                v252.fields.y = v161;
                                v252.fields.z = v138 + (float)((float)(v143 * v146) * 0.5);
                                Instance = (__int64)WarBoardManager__CreateEncountkEffectTask(
                                                      (WarBoardManager_o *)Instance,
                                                      v252,
                                                      1,
                                                      0LL);
                                v202 = WarBoardPieceBaseComponent___c_TypeInfo;
                                this = (WarBoardPieceBaseComponent_o *)Instance;
                                if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
                                  v202 = WarBoardPieceBaseComponent___c_TypeInfo;
                                }
                                _9__63_1 = v202->static_fields->__9__63_1;
                                if ( !_9__63_1 )
                                {
                                  if ( !v202->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(v202);
                                    v202 = WarBoardPieceBaseComponent___c_TypeInfo;
                                  }
                                  v204 = (Il2CppObject *)v202->static_fields->__9;
                                  _9__63_1 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    _9__63_1,
                                    v204,
                                    Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_1__,
                                    0LL);
                                  v205 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
                                  v205->__9__63_1 = _9__63_1;
                                  sub_1B649A4(
                                    (ServantStatusBattleListViewItem_o *)&v205->__9__63_1,
                                    (int32_t)_9__63_1,
                                    v206,
                                    v207);
                                }
                                if ( this )
                                {
                                  this->fields.currentActionPointLabel = (struct UILabel_o *)_9__63_1;
                                  sub_1B649A4(
                                    (ServantStatusBattleListViewItem_o *)&this->fields.currentActionPointLabel,
                                    (int32_t)_9__63_1,
                                    v200,
                                    v201);
                                  p_breakPointParent = &this->fields.breakPointParent;
                                  breakPointParent = (System_Delegate_o *)this->fields.breakPointParent;
                                  v210 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64C4C(WarBoardTaskBase_TaskCallback_TypeInfo);
                                  WarBoardTaskBase_TaskCallback___ctor(
                                    v210,
                                    (Il2CppObject *)v125,
                                    Method_WarBoardPieceBaseComponent___c__DisplayClass63_1__OnAttack_b__2__,
                                    0LL);
                                  v211 = System_Delegate__Combine(breakPointParent, (System_Delegate_o *)v210, 0LL);
                                  v67 = (WarBoardPieceBaseComponent_c *)v211;
                                  if ( v211 )
                                  {
                                    v214 = WarBoardTaskBase_TaskCallback_TypeInfo;
                                    if ( (WarBoardTaskBase_TaskCallback_c *)v211->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
                                      goto LABEL_152;
                                    *p_breakPointParent = (struct UIWidget_o *)v211;
                                    if ( (WarBoardTaskBase_TaskCallback_c *)v211->klass != v214 )
                                      goto LABEL_152;
                                  }
                                  else
                                  {
                                    *p_breakPointParent = 0LL;
                                  }
                                  sub_1B649A4(
                                    (ServantStatusBattleListViewItem_o *)&this->fields.breakPointParent,
                                    (int32_t)v211,
                                    v212,
                                    v213);
                                  v217 = v54->fields._items;
                                  v218 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                                  ++v54->fields._version;
                                  if ( v217 )
                                  {
                                    v219 = v54->fields._size;
                                    if ( (unsigned int)v219 >= v217->max_length )
                                    {
                                      System_Collections_Generic_List_object___AddWithResize(
                                        v54,
                                        (Il2CppObject *)this,
                                        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v218[4] + 192LL) + 112LL));
                                    }
                                    else
                                    {
                                      v220 = &v217->obj.klass + v219;
                                      v54->fields._size = v219 + 1;
                                      v220[4] = (Il2CppClass *)this;
                                      sub_1B649A4(
                                        (ServantStatusBattleListViewItem_o *)(v220 + 4),
                                        (int32_t)this,
                                        v215,
                                        v216);
                                    }
                                    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                                          v54,
                                                          0,
                                                          (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
                                    if ( Instance )
                                    {
                                      this = (WarBoardPieceBaseComponent_o *)(Instance + 32);
                                      v221 = *(System_Delegate_o **)(Instance + 32);
                                      v222 = *v128;
                                      v223 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64C4C(WarBoardTaskBase_TaskCallback_TypeInfo);
                                      WarBoardTaskBase_TaskCallback___ctor(
                                        v223,
                                        v222,
                                        Method_WarBoardPieceBaseComponent___c__DisplayClass63_0__OnAttack_b__3__,
                                        0LL);
                                      v224 = (WarBoardPieceBaseComponent_c *)System_Delegate__Combine(
                                                                               v221,
                                                                               (System_Delegate_o *)v223,
                                                                               0LL);
                                      v67 = v224;
                                      if ( v224 )
                                      {
                                        v225 = WarBoardTaskBase_TaskCallback_TypeInfo;
                                        if ( v224->_1.image != WarBoardTaskBase_TaskCallback_TypeInfo )
                                          goto LABEL_152;
                                        this->klass = v224;
                                        if ( v224->_1.image != v225 )
                                          goto LABEL_152;
                                      }
                                      else
                                      {
                                        this->klass = 0LL;
                                      }
                                      v198 = (ServantStatusBattleListViewItem_o *)this;
                                      v199 = (int)v67;
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
    sub_1B64C5C(Instance, v34);
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v107 = v43 + (float)(x * lengthMoveAttack);
  v108 = v44 + (float)(y * lengthMoveAttack);
  v109 = v45 + (float)(z * lengthMoveAttack);
  v110 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v111 = this->fields.pixelPerSecond;
  v112 = v110;
  v113 = (WarBoardMovePerformance_o *)sub_1B64C4C(WarBoardMovePerformance_TypeInfo);
  v250.fields.x = v107;
  v250.fields.y = v108;
  v250.fields.z = v109;
  v254.fields.x = v43;
  v254.fields.y = v44;
  v254.fields.z = v45;
  v114 = (WarBoardTaskBase_o *)v113;
  WarBoardMovePerformance___ctor(v113, v112, v250, v254, v111, 4, 0LL);
  v115 = (System_Collections_Generic_List_WarBoardTaskBase__o *)WarBoardPieceData__DecrementBreakPointPerformance(
                                                                  v39,
                                                                  0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  v60 = (WarBoardTaskBase_TaskCallback_c **)(v32 + 24);
  if ( !*v242 )
    goto LABEL_157;
  v116 = (WarBoardMessageMaster_o *)Instance;
  Instance = (__int64)(*v242)->fields._warBoardData_k__BackingField;
  if ( !Instance )
    goto LABEL_157;
  id = WarBoardData__get_id((WarBoardData_o *)Instance, 0LL);
  v118 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v118,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  breakPoint_k__BackingField = v39->fields._breakPoint_k__BackingField;
  Instance = WarBoardPieceData__get_isPlayerMaster(v39, 0LL);
  if ( !v116 )
    goto LABEL_157;
  if ( (Instance & 1) != 0 )
  {
    v120 = 11;
    v121 = 1;
    v122 = v116;
    v123 = id;
    v124 = breakPoint_k__BackingField;
  }
  else
  {
    v120 = 9;
    v122 = v116;
    v123 = id;
    v124 = breakPoint_k__BackingField;
    v121 = 0;
  }
  Instance = (__int64)WarBoardMessageMaster__GetMessageTasks(v122, v123, v120, v124, v121, 0LL);
  v170 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( !Instance )
    goto LABEL_157;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)Instance,
    (System_Collections_Generic_IEnumerable_T__o *)v103,
    (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v170,
         (const MethodInfo_2E49388 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    System_Collections_Generic_List_object___AddRange(
      v54,
      v170,
      (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = sub_1B64AA8(WarBoardTaskBase___TypeInfo, 5LL);
  if ( !Instance )
    goto LABEL_157;
  v173 = (WarBoardTaskBase_array *)Instance;
  if ( v114 )
  {
    Instance = sub_1B64B3C(v114, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
    if ( !Instance )
      goto LABEL_159;
  }
  if ( !v173->max_length )
    goto LABEL_158;
  v173->m_Items[0] = v114;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)v173->m_Items, (int32_t)v114, v171, v172);
  Instance = (__int64)v39->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_157;
  v174 = *v242;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 856LL))(
               Instance,
               *(_QWORD *)(*(_QWORD *)Instance + 864LL));
  if ( !v174 )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__CreateAttackEffectTask(v174, *(UnityEngine_Vector3_o *)&v175, 0, 0LL);
  v180 = (WarBoardTaskBase_o *)Instance;
  if ( Instance )
  {
    Instance = sub_1B64B3C(Instance, v173->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( v173->max_length <= 1 )
    goto LABEL_158;
  v173->m_Items[1] = v180;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v173->m_Items[1], (int32_t)v180, v178, v179);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0LL);
  v183 = (WarBoardTaskBase_o *)Instance;
  if ( Instance )
  {
    Instance = sub_1B64B3C(Instance, v173->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( v173->max_length <= 2 )
    goto LABEL_158;
  v173->m_Items[2] = v183;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v173->m_Items[2], (int32_t)v183, v181, v182);
  Instance = (__int64)v39->fields.pieceComponent;
  if ( !Instance )
    goto LABEL_157;
  Instance = (__int64)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)Instance,
                        (System_String_o *)StringLiteral_8858/*"MasterDamage"*/,
                        v184);
  v187 = (WarBoardTaskBase_o *)Instance;
  if ( Instance )
  {
    Instance = sub_1B64B3C(Instance, v173->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_159;
  }
  if ( v173->max_length <= 3 )
    goto LABEL_158;
  v173->m_Items[3] = v187;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v173->m_Items[3], (int32_t)v187, v185, v186);
  v188 = (WarBoardOrthostichySchedule_o *)sub_1B64C4C(WarBoardOrthostichySchedule_TypeInfo);
  WarBoardOrthostichySchedule___ctor_35392804(v188, v115, 0LL);
  if ( v188 )
  {
    Instance = sub_1B64B3C(v188, v173->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_159:
      v237 = sub_1B64C80(Instance);
      sub_1B64B28(v237, 0LL);
    }
  }
  if ( v173->max_length <= 4 )
LABEL_158:
    sub_1B64C64(Instance, v34);
  v173->m_Items[4] = (WarBoardTaskBase_o *)v188;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v173->m_Items[4], (int32_t)v188, v189, v190);
  v191 = (WarBoardParallelSchedule_o *)sub_1B64C4C(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor(v191, v173, 0LL);
  v194 = v54->fields._items;
  v195 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v54->fields._version;
  if ( !v194 )
    goto LABEL_157;
  v196 = v54->fields._size;
  if ( (unsigned int)v196 >= v194->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v54,
      (Il2CppObject *)v191,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
    goto LABEL_141;
  }
  v197 = &v194->obj.klass + v196;
  v54->fields._size = v196 + 1;
  v197[4] = (Il2CppClass *)v191;
  v198 = (ServantStatusBattleListViewItem_o *)(v197 + 4);
  v199 = (int)v191;
LABEL_140:
  sub_1B649A4(v198, v199, v192, v193);
LABEL_141:
  if ( v54->fields._size < 1 )
    return;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                        v54,
                        0,
                        (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__get_Item__);
  if ( !Instance )
    goto LABEL_157;
  this = (WarBoardPieceBaseComponent_o *)(Instance + 32);
  v226 = *(System_Delegate_o **)(Instance + 32);
  v227 = WarBoardPieceBaseComponent___c_TypeInfo;
  if ( !WarBoardPieceBaseComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceBaseComponent___c_TypeInfo);
    v227 = WarBoardPieceBaseComponent___c_TypeInfo;
  }
  _9__63_4 = v227->static_fields->__9__63_4;
  if ( !_9__63_4 )
  {
    if ( !v227->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v227);
      v227 = WarBoardPieceBaseComponent___c_TypeInfo;
    }
    v229 = (Il2CppObject *)v227->static_fields->__9;
    _9__63_4 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64C4C(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(_9__63_4, v229, Method_WarBoardPieceBaseComponent___c__OnAttack_b__63_4__, 0LL);
    v230 = WarBoardPieceBaseComponent___c_TypeInfo->static_fields;
    v230->__9__63_4 = _9__63_4;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v230->__9__63_4, (int32_t)_9__63_4, v231, v232);
  }
  v233 = (WarBoardPieceBaseComponent_c *)System_Delegate__Combine(v226, (System_Delegate_o *)_9__63_4, 0LL);
  v67 = v233;
  if ( !v233 )
    goto LABEL_153;
  v236 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( v233->_1.image != WarBoardTaskBase_TaskCallback_TypeInfo || (this->klass = v233, v233->_1.image != v236) )
  {
LABEL_152:
    sub_1B64F1C(v67);
LABEL_153:
    this->klass = v67;
  }
  sub_1B649A4((ServantStatusBattleListViewItem_o *)this, (int32_t)v67, v234, v235);
  Instance = (__int64)*v60;
  if ( !*v60 )
    goto LABEL_157;
  WarBoardManager__AddTask_35192188(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v54,
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

  if ( (byte_49FC67E & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&squareIndex);
    sub_1B64A00(&WarBoardControlUiDataComponent_TypeInfo, v5);
    byte_49FC67E = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v8 = (WarBoardManager_o *)Instance;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_27;
  Instance = (WarBoardData_o *)WarBoardData__GetPiece_35065340(Instance, squareIndex, 0LL);
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
  if ( !byte_49F9823 )
  {
    sub_1B64A00(&System_Math_TypeInfo, v7);
    byte_49F9823 = 1;
  }
  v27 = x;
  v17 = v14 - x;
  v18 = v15 - y;
  v19 = v16 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_49F9824 )
  {
    sub_1B64A00(&System_Math_TypeInfo, v7);
    byte_49F9824 = 1;
  }
  Instance = (WarBoardData_o *)System_Math_TypeInfo;
  v20 = sqrtf((float)(v19 * v19) + (float)((float)(v17 * v17) + (float)(v18 * v18)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v20 <= 0.00001 )
  {
    if ( !byte_49F9821 )
    {
      Instance = (WarBoardData_o *)sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v7);
      byte_49F9821 = 1;
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
    sub_1B64C5C(Instance, v7);
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
  const MethodInfo_35D4904 *v19; // x2
  int32_t v20; // w2
  int32_t v21; // w3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  WarBoardPieceBaseComponent_o *v25; // x1
  Il2CppClass **v26; // x0
  WarBoardTaskBase_array *v27; // x26
  Il2CppObject *v28; // x27
  const MethodInfo_35D4904 *v29; // x2
  int32_t v30; // w2
  int32_t v31; // w3
  WarBoardPieceBaseComponent_o *v32; // x24
  struct WarBoardPieceData_o *pieceData; // x8
  __int64 v34; // x24
  struct WarBoardBreakPointComponent_array *breakPoints; // x10
  __int64 v36; // x0
  System_Nullable_Vector3__o v37; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v38; // 0:x3.8
  System_Nullable_float__o v39; // 0:x3.8
  System_Nullable_Vector3__o v40; // 0:x0.16
  System_Nullable_Vector3__o v41; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  v14 = this;
  if ( (byte_49FC685 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, *(_QWORD *)&oldBreakPoint);
    sub_1B64A00(&Method_System_Nullable_Vector3___ctor__, v15);
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    this = (WarBoardPieceBaseComponent_o *)sub_1B64A00(&WarBoardTaskBase___TypeInfo, v17);
    byte_49FC685 = 1;
  }
  if ( cameraMove )
  {
    this = (WarBoardPieceBaseComponent_o *)v14->fields.pieceData;
    if ( !this )
      goto LABEL_32;
    this = (WarBoardPieceBaseComponent_o *)WarBoardPieceData__get_IsStageBoss((WarBoardPieceData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( taskList )
      {
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0LL);
        if ( this )
        {
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
          *(_QWORD *)&v40.fields.hasValue = &v37;
          *(_QWORD *)&v37.fields.hasValue = 0LL;
          *(_QWORD *)&v37.fields.value.fields.y = 0LL;
          *(_QWORD *)&v40.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v40, localPosition, v19);
          if ( Instance )
          {
            v38 = cameraSize;
            this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                     (WarBoardManager_o *)Instance,
                                                     v37,
                                                     v38,
                                                     1,
                                                     0,
                                                     1,
                                                     0LL);
            items = taskList->fields._items;
            v23 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
            ++taskList->fields._version;
            if ( items )
            {
              size = taskList->fields._size;
              v25 = this;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)taskList,
                  (Il2CppObject *)this,
                  *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
              }
              else
              {
                v26 = &items->obj.klass + size;
                taskList->fields._size = size + 1;
                v26[4] = (Il2CppClass *)v25;
                sub_1B649A4((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v25, v20, v21);
              }
              goto LABEL_21;
            }
          }
        }
      }
      else
      {
        v27 = (WarBoardTaskBase_array *)sub_1B64AA8(WarBoardTaskBase___TypeInfo, 1LL);
        v28 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        this = (WarBoardPieceBaseComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v14, 0LL);
        if ( this )
        {
          v43 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
          *(_QWORD *)&v41.fields.hasValue = &v37;
          v37 = (System_Nullable_Vector3__o)0LL;
          *(_QWORD *)&v41.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          System_Nullable_Vector3____ctor(v41, v43, v29);
          if ( v28 )
          {
            v39 = cameraSize;
            this = (WarBoardPieceBaseComponent_o *)WarBoardManager__GetCameraPerformanceTask(
                                                     (WarBoardManager_o *)v28,
                                                     v37,
                                                     v39,
                                                     1,
                                                     0,
                                                     1,
                                                     0LL);
            if ( v27 )
            {
              v32 = this;
              if ( this )
              {
                this = (WarBoardPieceBaseComponent_o *)sub_1B64B3C(this, v27->obj.klass->_1.element_class);
                if ( !this )
                {
                  v36 = sub_1B64C80(0LL);
                  sub_1B64B28(v36, 0LL);
                }
              }
              if ( !v27->max_length )
LABEL_34:
                sub_1B64C64(this, *(_QWORD *)&oldBreakPoint);
              v27->m_Items[0] = (WarBoardTaskBase_o *)v32;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)v27->m_Items, (int32_t)v32, v30, v31);
              if ( Instance )
              {
                WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, v27, 0LL);
                goto LABEL_21;
              }
            }
          }
        }
      }
LABEL_32:
      sub_1B64C5C(this, *(_QWORD *)&oldBreakPoint);
    }
  }
LABEL_21:
  pieceData = v14->fields.pieceData;
  if ( !pieceData )
    goto LABEL_32;
  v34 = 0LL;
  if ( dummyPoint < 0 )
    dummyPoint = pieceData->fields._breakPoint_k__BackingField;
  while ( (int)v34 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v14->fields.breakPoints;
    if ( !breakPoints )
      goto LABEL_32;
    if ( (unsigned int)v34 >= breakPoints->max_length )
      goto LABEL_34;
    this = (WarBoardPieceBaseComponent_o *)breakPoints->m_Items[v34];
    if ( this )
    {
      if ( (int)v34 >= oldBreakPoint || dummyPoint > (int)v34 )
      {
        WarBoardBreakPointComponent__SetActive(
          (WarBoardBreakPointComponent_o *)this,
          dummyPoint > (int)v34,
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
      ++v34;
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
    sub_1B64C5C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__OnDeselect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  int32_t dispPriotiry; // w20
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1
  int v6; // w8
  const MethodInfo *v7; // x2

  if ( (byte_49FC67A & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49FC67A = 1;
  }
  dispPriotiry = this->fields.dispPriotiry;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1B64C5C(Instance, v5);
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
  int32_t v25; // w2
  int32_t v26; // w3
  WarBoardPieceData_o **v27; // x20
  WarBoardPieceData_o *Piece_35065340; // x0
  WarBoardPieceData_o **v29; // x23
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x8
  WarBoardSquareData_o *Square; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x25
  System_Collections_Generic_List_object__o *v37; // x24
  System_Delegate_o *p_EndCallback; // x26
  WarBoardTaskBase_TaskCallback_o *v39; // x27
  System_Delegate_o *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_Delegate_c *v43; // x8
  WarBoardTaskBase_TaskCallback_c *v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t groupId_k__BackingField; // w9
  __int64 v49; // x29
  struct WarBoardPieceData_o *v50; // x8
  UnityEngine_GameObject_o *v51; // x26
  float v52; // s0
  float v53; // s1
  float v54; // s2
  float v55; // s8
  float v56; // s9
  float v57; // s10
  float pixelPerSecond; // s13
  float x; // s11
  float y; // s12
  float z; // s14
  WarBoardMovePerformance_o *v62; // x0
  WarBoardMovePerformance_o *v63; // x27
  int32_t v64; // w2
  int32_t v65; // w3
  WarBoardTaskBase_array *v66; // x26
  UnityEngine_GameObject_o *v67; // x27
  float v68; // s0
  float v69; // s1
  float v70; // s2
  struct WarBoardPieceData_o *v71; // x8
  float v72; // s8
  float v73; // s9
  float v74; // s10
  float v75; // s13
  float v76; // s11
  float v77; // s12
  float v78; // s14
  WarBoardMovePerformance_o *v79; // x0
  WarBoardTaskBase_o *v80; // x28
  int32_t v81; // w2
  int32_t v82; // w3
  int32_t v83; // w2
  int32_t v84; // w3
  System_Delegate_o *v85; // x27
  WarBoardTaskBase_TaskCallback_o *v86; // x28
  System_Delegate_o *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  WarBoardTaskBase_TaskCallback_c *v90; // x1
  System_Delegate_o *EndCallback; // x28
  System_Delegate_o *v92; // x0
  int32_t v93; // w2
  int32_t v94; // w3
  WarBoardTaskBase_TaskCallback_c *v95; // x1
  int32_t v96; // w2
  int32_t v97; // w3
  struct System_Object_array *items; // x8
  _QWORD *v99; // x9
  __int64 size; // x10
  Il2CppClass **v101; // x0
  struct WarBoardPieceData_o *v102; // x8
  int32_t v103; // w2
  int32_t v104; // w3
  struct System_Object_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  Il2CppClass **v108; // x0
  int32_t v109; // w2
  int32_t v110; // w3
  struct System_Object_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  Il2CppClass **v114; // x0
  System_Collections_Generic_List_object__o *v115; // x22
  System_Int32_array *PieceEventVals; // x0
  int32_t v117; // w2
  int32_t v118; // w3
  System_Int32_array *v119; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v121; // x0
  WarBoardManager_o *v122; // x20
  WarBoardTaskBase_array *v123; // x21
  __int64 v124; // x22
  WarBoardTaskBase_TaskCallback_o *v125; // x23
  int32_t v126; // w2
  int32_t v127; // w3
  int32_t v128; // w2
  int32_t v129; // w3
  __int64 v130; // x0
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v132; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v133; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v134; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v135; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v136; // 0:s3.4,4:s4.4,8:s5.4

  LODWORD(v4) = squareIndex;
  if ( (byte_49FC67B & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, *(_QWORD *)&squareIndex);
    sub_1B64A00(&int___TypeInfo, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v9);
    sub_1B64A00(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v10);
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_1B64A00(&WarBoardTaskBase_TaskCallback_TypeInfo, v12);
    sub_1B64A00(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__, v13);
    sub_1B64A00(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__, v14);
    sub_1B64A00(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__, v15);
    sub_1B64A00(&Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__, v16);
    sub_1B64A00(&WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo, v17);
    sub_1B64A00(&WarBoardCallbackTask_TypeInfo, v18);
    sub_1B64A00(&WarBoardMovePerformance_TypeInfo, v19);
    sub_1B64A00(&WarBoardParallelSchedule_TypeInfo, v20);
    sub_1B64A00(&WarBoardTaskBase___TypeInfo, v21);
    byte_49FC67B = 1;
  }
  v22 = sub_1B64C4C(WarBoardPieceBaseComponent___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v22 )
    goto LABEL_83;
  *(_QWORD *)(v22 + 48) = Instance;
  v27 = (WarBoardPieceData_o **)(v22 + 48);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v22 + 48), (int32_t)Instance, v25, v26);
  if ( !*(_QWORD *)(v22 + 48) )
    goto LABEL_83;
  Instance = *(WarBoardPieceData_o **)(*(_QWORD *)(v22 + 48) + 440LL);
  if ( !Instance )
    goto LABEL_83;
  Piece_35065340 = WarBoardData__GetPiece_35065340((WarBoardData_o *)Instance, (int32_t)v4, 0LL);
  *(_QWORD *)(v22 + 40) = Piece_35065340;
  v29 = (WarBoardPieceData_o **)(v22 + 40);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v22 + 40), (int32_t)Piece_35065340, v30, v31);
  v32 = *(_QWORD *)(v22 + 48);
  if ( !v32 )
    goto LABEL_83;
  Instance = *(WarBoardPieceData_o **)(v32 + 440);
  if ( !Instance )
    goto LABEL_83;
  Square = WarBoardData__GetSquare((WarBoardData_o *)Instance, (int32_t)v4, 0LL);
  *(_QWORD *)(v22 + 16) = Square;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v22 + 16), (int32_t)Square, v34, v35);
  v36 = sub_1B64C4C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v36, 0LL, 0LL);
  if ( !v36 )
    goto LABEL_83;
  v37 = (System_Collections_Generic_List_object__o *)(v36 + 32);
  p_EndCallback = *(System_Delegate_o **)(v36 + 32);
  v39 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64C4C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v39,
    (Il2CppObject *)v22,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__1__,
    0LL);
  v40 = System_Delegate__Combine(p_EndCallback, (System_Delegate_o *)v39, 0LL);
  v43 = (System_Delegate_c *)v40;
  if ( v40 )
  {
    v44 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v40->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_44;
    v37->klass = (System_Collections_Generic_List_object__c *)v40;
    if ( (WarBoardTaskBase_TaskCallback_c *)v40->klass != v44 )
      goto LABEL_44;
  }
  else
  {
    v37->klass = 0LL;
  }
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v36 + 32), (int32_t)v40, v41, v42);
  Instance = (WarBoardPieceData_o *)sub_1B64AA8(int___TypeInfo, 2LL);
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
    sub_1B64C64(Instance, v24);
  }
  Instance->fields._currentActionCount_k__BackingField = (int)v4;
  *(_QWORD *)(v22 + 24) = Instance;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v22 + 24), (int32_t)Instance, v45, v46);
  v37 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v49 = *(_QWORD *)(v22 + 40);
  Instance = (WarBoardPieceData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v50 = this->fields.pieceData;
  if ( !v50 )
    goto LABEL_83;
  v51 = (UnityEngine_GameObject_o *)Instance;
  Instance = *(WarBoardPieceData_o **)(v22 + 48);
  if ( !Instance )
    goto LABEL_83;
  *(UnityEngine_Vector3_o *)&v52 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)Instance,
                                     v50->fields._nowSquareIndex_k__BackingField,
                                     0LL);
  Instance = *v27;
  if ( !*v27 )
    goto LABEL_83;
  v55 = v52;
  v56 = v53;
  v57 = v54;
  SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)Instance, (int32_t)v4, 0LL);
  pixelPerSecond = this->fields.pixelPerSecond;
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  v62 = (WarBoardMovePerformance_o *)sub_1B64C4C(WarBoardMovePerformance_TypeInfo);
  v132.fields.x = v55;
  v132.fields.y = v56;
  v132.fields.z = v57;
  v135.fields.x = x;
  v135.fields.y = y;
  v135.fields.z = z;
  v63 = v62;
  WarBoardMovePerformance___ctor(v62, v51, v132, v135, pixelPerSecond, 0, 0LL);
  if ( v49 )
  {
    Instance = (WarBoardPieceData_o *)sub_1B64AA8(WarBoardTaskBase___TypeInfo, 3LL);
    if ( !Instance )
      goto LABEL_83;
    v66 = (WarBoardTaskBase_array *)Instance;
    if ( v63 )
    {
      Instance = (WarBoardPieceData_o *)sub_1B64B3C(v63, Instance->klass->_1.element_class);
      if ( !Instance )
        goto LABEL_85;
    }
    if ( !v66->max_length )
      goto LABEL_84;
    v66->m_Items[0] = (WarBoardTaskBase_o *)v63;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)v66->m_Items, (int32_t)v63, v64, v65);
    Instance = *v29;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( *v29 )
    {
      Instance = (WarBoardPieceData_o *)WarBoardPieceData__get_gameObject(Instance, 0LL);
      if ( *v27 )
      {
        v67 = (UnityEngine_GameObject_o *)Instance;
        *(UnityEngine_Vector3_o *)&v68 = WarBoardManager__GetSquarePosition((WarBoardManager_o *)*v27, (int32_t)v4, 0LL);
        v71 = this->fields.pieceData;
        if ( v71 )
        {
          Instance = *v27;
          if ( *v27 )
          {
            v72 = v68;
            v73 = v69;
            v74 = v70;
            v133 = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     v71->fields._nowSquareIndex_k__BackingField,
                     0LL);
            v75 = this->fields.pixelPerSecond;
            v76 = v133.fields.x;
            v77 = v133.fields.y;
            v78 = v133.fields.z;
            v79 = (WarBoardMovePerformance_o *)sub_1B64C4C(WarBoardMovePerformance_TypeInfo);
            v134.fields.x = v72;
            v134.fields.y = v73;
            v134.fields.z = v74;
            v136.fields.x = v76;
            v136.fields.y = v77;
            v136.fields.z = v78;
            v80 = (WarBoardTaskBase_o *)v79;
            WarBoardMovePerformance___ctor(v79, v67, v134, v136, v75, 0, 0LL);
            if ( !v80 || (Instance = (WarBoardPieceData_o *)sub_1B64B3C(v80, v66->obj.klass->_1.element_class)) != 0LL )
            {
              if ( v66->max_length <= 1 )
                goto LABEL_84;
              v66->m_Items[1] = v80;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)&v66->m_Items[1], (int32_t)v80, v81, v82);
              Instance = (WarBoardPieceData_o *)sub_1B64B3C(v36, v66->obj.klass->_1.element_class);
              if ( Instance )
              {
                if ( v66->max_length <= 2 )
                  goto LABEL_84;
                v66->m_Items[2] = (WarBoardTaskBase_o *)v36;
                sub_1B649A4((ServantStatusBattleListViewItem_o *)&v66->m_Items[2], v36, v83, v84);
                v36 = sub_1B64C4C(WarBoardParallelSchedule_TypeInfo);
                WarBoardParallelSchedule___ctor((WarBoardParallelSchedule_o *)v36, v66, 0LL);
                if ( !v36 )
                  goto LABEL_83;
                p_EndCallback = (System_Delegate_o *)(v36 + 40);
                v85 = *(System_Delegate_o **)(v36 + 40);
                v86 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64C4C(WarBoardTaskBase_TaskCallback_TypeInfo);
                WarBoardTaskBase_TaskCallback___ctor(
                  v86,
                  (Il2CppObject *)v22,
                  Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__3__,
                  0LL);
                v87 = System_Delegate__Combine(v85, (System_Delegate_o *)v86, 0LL);
                v43 = (System_Delegate_c *)v87;
                if ( !v87 )
                  goto LABEL_45;
                v90 = WarBoardTaskBase_TaskCallback_TypeInfo;
                if ( (WarBoardTaskBase_TaskCallback_c *)v87->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
                {
                  p_EndCallback->klass = (System_Delegate_c *)v87;
                  if ( (WarBoardTaskBase_TaskCallback_c *)v87->klass == v90 )
                  {
LABEL_46:
                    sub_1B649A4((ServantStatusBattleListViewItem_o *)p_EndCallback, (int32_t)v43, v88, v89);
                    if ( !v37 )
                      goto LABEL_83;
                    items = v37->fields._items;
                    v99 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
                    ++v37->fields._version;
                    if ( !items )
                      goto LABEL_83;
                    size = v37->fields._size;
                    if ( (unsigned int)size >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v37,
                        (Il2CppObject *)v36,
                        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v101 = &items->obj.klass + size;
                      v37->fields._size = size + 1;
                      v101[4] = (Il2CppClass *)v36;
                      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v101 + 4), v36, v96, v97);
                    }
                    v102 = this->fields.pieceData;
                    if ( !v102 )
                      goto LABEL_83;
                    Instance = *v29;
                    if ( !*v29 )
                      goto LABEL_83;
                    WarBoardPieceData__SetSquareIndex(Instance, v102->fields._nowSquareIndex_k__BackingField, 0LL);
                    goto LABEL_64;
                  }
                }
LABEL_44:
                sub_1B64F1C(v43);
LABEL_45:
                p_EndCallback->klass = v43;
                goto LABEL_46;
              }
            }
LABEL_85:
            v130 = sub_1B64C80(Instance);
            sub_1B64B28(v130, 0LL);
          }
        }
      }
    }
LABEL_83:
    sub_1B64C5C(Instance, v24);
  }
  if ( !v63 )
    goto LABEL_83;
  v29 = (WarBoardPieceData_o **)(unsigned int)v4;
  p_EndCallback = (System_Delegate_o *)&v63->fields.EndCallback;
  EndCallback = (System_Delegate_o *)v63->fields.EndCallback;
  v4 = &WarBoardTaskBase_TaskCallback_TypeInfo;
  v3 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64C4C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v3,
    (Il2CppObject *)v22,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_b__2__,
    0LL);
  v92 = System_Delegate__Combine(EndCallback, (System_Delegate_o *)v3, 0LL);
  v43 = (System_Delegate_c *)v92;
  if ( v92 )
  {
    v95 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v92->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_44;
    p_EndCallback->klass = (System_Delegate_c *)v92;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    LODWORD(v4) = (_DWORD)v29;
    if ( (WarBoardTaskBase_TaskCallback_c *)v92->klass != v95 )
      goto LABEL_44;
  }
  else
  {
    p_EndCallback->klass = 0LL;
    v3 = (WarBoardTaskBase_TaskCallback_o *)&WarBoardTaskBase_TaskCallback_TypeInfo;
    LODWORD(v4) = (_DWORD)v29;
  }
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v63->fields.EndCallback, (int32_t)v92, v93, v94);
  v29 = (WarBoardPieceData_o **)(v22 + 40);
  if ( !v37 )
    goto LABEL_83;
  v105 = v37->fields._items;
  v106 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v37->fields._version;
  if ( !v105 )
    goto LABEL_83;
  v107 = v37->fields._size;
  if ( (unsigned int)v107 >= v105->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v37,
      (Il2CppObject *)v63,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
  }
  else
  {
    v108 = &v105->obj.klass + v107;
    v37->fields._size = v107 + 1;
    v108[4] = (Il2CppClass *)v63;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v108 + 4), (int32_t)v63, v103, v104);
  }
  v111 = v37->fields._items;
  v112 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v37->fields._version;
  if ( !v111 )
    goto LABEL_83;
  v113 = v37->fields._size;
  if ( (unsigned int)v113 >= v111->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v37,
      (Il2CppObject *)v36,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
  }
  else
  {
    v114 = &v111->obj.klass + v113;
    v37->fields._size = v113 + 1;
    v114[4] = (Il2CppClass *)v36;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v114 + 4), v36, v109, v110);
  }
LABEL_64:
  Instance = this->fields.pieceData;
  if ( !Instance )
    goto LABEL_83;
  WarBoardPieceData__SetSquareIndex(Instance, (int32_t)v4, 0LL);
  v115 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v115,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = this->fields.pieceData;
  if ( !Instance )
    goto LABEL_83;
  PieceEventVals = WarBoardPieceData__CreatePieceEventVals(Instance, 0LL);
  *(_QWORD *)(v22 + 32) = PieceEventVals;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v22 + 32), (int32_t)PieceEventVals, v117, v118);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (WarBoardPieceData_o *)WarBoardManager__GetEventTasks(
                                      (WarBoardManager_o *)Instance,
                                      30,
                                      *(System_Int32_array **)(v22 + 32),
                                      0LL);
  if ( !v115 )
    goto LABEL_83;
  System_Collections_Generic_List_object___AddRange(
    v115,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( *v29 )
  {
    v119 = WarBoardPieceData__CreatePieceEventVals(*v29, 0LL);
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_83;
    EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 30, v119, 0LL);
    System_Collections_Generic_List_object___AddRange(
      v115,
      (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
      (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  v121 = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 36, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v115,
    (System_Collections_Generic_IEnumerable_T__o *)v121,
    (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v115,
         (const MethodInfo_2E49388 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    Instance = *v27;
    if ( !*v27 )
      goto LABEL_83;
    WarBoardManager__AddTask_35192188(
      (WarBoardManager_o *)Instance,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v115,
      0LL);
  }
  Instance = *v27;
  if ( !*v27 )
    goto LABEL_83;
  WarBoardManager__AddTask_35192188(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v37,
    0LL);
  v122 = *(WarBoardManager_o **)(v22 + 48);
  v123 = (WarBoardTaskBase_array *)sub_1B64AA8(WarBoardTaskBase___TypeInfo, 1LL);
  v124 = sub_1B64C4C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v124, 0LL, 0LL);
  v125 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64C4C(v3->klass);
  WarBoardTaskBase_TaskCallback___ctor(
    v125,
    (Il2CppObject *)v22,
    Method_WarBoardPieceBaseComponent___c__DisplayClass61_0__OnMove_g__AddAfterTask_0__,
    0LL);
  if ( !v124 )
    goto LABEL_83;
  *(_QWORD *)(v124 + 32) = v125;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v124 + 32), (int32_t)v125, v126, v127);
  if ( !v123 )
    goto LABEL_83;
  Instance = (WarBoardPieceData_o *)sub_1B64B3C(v124, v123->obj.klass->_1.element_class);
  if ( !Instance )
    goto LABEL_85;
  if ( !v123->max_length )
    goto LABEL_84;
  v123->m_Items[0] = (WarBoardTaskBase_o *)v124;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)v123->m_Items, v124, v128, v129);
  if ( !v122 )
    goto LABEL_83;
  WarBoardManager__AddTask(v122, 0, v123, 0LL);
  Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B64C5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WarBoardPieceBaseComponent__OnSelect(WarBoardPieceBaseComponent_o *this, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1
  int v5; // w8
  const MethodInfo *v6; // x2

  if ( (byte_49FC679 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49FC679 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1B64C5C(Instance, v4);
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

  if ( (byte_49FC687 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_18757/*"ef_dm_base"*/, popText);
    byte_49FC687 = 1;
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
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_List_object__o *v35; // x20
  __int64 v36; // x24
  System_Delegate_o **v37; // x25
  System_Delegate_o *v38; // x26
  WarBoardTaskBase_TaskCallback_o *v39; // x27
  System_Delegate_o *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_Delegate_o *v43; // x8
  WarBoardTaskBase_TaskCallback_c *v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  __int64 v51; // x1
  float v52; // s12
  float v53; // s14
  float v54; // s8
  float v55; // s9
  float v56; // s11
  float v57; // s13
  float v58; // s1
  float v59; // s2
  float v60; // s9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v62; // s0
  float v63; // s8
  float v64; // s11
  float v65; // s12
  float v66; // s15
  float v67; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  float pixelPerSecond; // s14
  UnityEngine_GameObject_o *v70; // x24
  WarBoardMovePerformance_o *v71; // x0
  Il2CppObject *v72; // x23
  int32_t v73; // w2
  int32_t v74; // w3
  struct System_Object_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  Il2CppClass **v78; // x0
  float lengthMoveAttack; // s0
  float v80; // s1
  float v81; // s2
  float v82; // s0
  float v83; // s8
  float v84; // s9
  float v85; // s10
  UnityEngine_GameObject_o *v86; // x0
  float v87; // s14
  UnityEngine_GameObject_o *v88; // x22
  WarBoardMovePerformance_o *v89; // x0
  WarBoardTaskBase_o *v90; // x24
  System_Collections_Generic_List_WarBoardTaskBase__o *v91; // x22
  System_Collections_Generic_List_object__o *v92; // x23
  int32_t v93; // w2
  int32_t v94; // w3
  WarBoardTaskBase_array *v95; // x23
  int32_t v96; // w2
  int32_t v97; // w3
  WarBoardData_o *v98; // x21
  int32_t v99; // w2
  int32_t v100; // w3
  WarBoardData_o *v101; // x21
  WarBoardOrthostichySchedule_o *v102; // x21
  int32_t v103; // w2
  int32_t v104; // w3
  WarBoardParallelSchedule_o *v105; // x21
  int32_t v106; // w2
  int32_t v107; // w3
  struct System_Object_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  Il2CppClass **v111; // x0
  __int64 v112; // x0
  float v113; // [xsp+8h] [xbp-A8h]
  float v114; // [xsp+Ch] [xbp-A4h]
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o IconPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v119; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v120; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_49FC680 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, *(_QWORD *)&squareIndex);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__, v7);
    sub_1B64A00(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v8);
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1B64A00(&WarBoardTaskBase_TaskCallback_TypeInfo, v10);
    sub_1B64A00(&Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__, v11);
    sub_1B64A00(&WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo, v12);
    sub_1B64A00(&WarBoardCallbackTask_TypeInfo, v13);
    sub_1B64A00(&WarBoardMovePerformance_TypeInfo, v14);
    sub_1B64A00(&WarBoardOrthostichySchedule_TypeInfo, v15);
    sub_1B64A00(&WarBoardParallelSchedule_TypeInfo, v16);
    sub_1B64A00(&WarBoardTaskBase___TypeInfo, v17);
    byte_49FC680 = 1;
  }
  v18 = sub_1B64C4C(WarBoardPieceBaseComponent___c__DisplayClass66_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)Instance, v33, v34);
  v35 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v36 = sub_1B64C4C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v36, 0LL, 0LL);
  if ( !v36 )
    goto LABEL_64;
  v37 = (System_Delegate_o **)(v36 + 32);
  v38 = *(System_Delegate_o **)(v36 + 32);
  v39 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64C4C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v39,
    (Il2CppObject *)v18,
    Method_WarBoardPieceBaseComponent___c__DisplayClass66_0__OnWallAttack_b__0__,
    0LL);
  v40 = System_Delegate__Combine(v38, (System_Delegate_o *)v39, 0LL);
  v43 = v40;
  if ( v40 )
  {
    v44 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v40->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v37 = v40;
      if ( (WarBoardTaskBase_TaskCallback_c *)v40->klass == v44 )
        goto LABEL_14;
    }
    sub_1B64F1C(v40);
  }
  *v37 = v43;
LABEL_14:
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v36 + 32), (int32_t)v43, v41, v42);
  if ( !v35 )
    goto LABEL_64;
  items = v35->fields._items;
  v48 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v35->fields._version;
  if ( !items )
    goto LABEL_64;
  size = v35->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v35,
      (Il2CppObject *)v36,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
  }
  else
  {
    v50 = &items->obj.klass + size;
    v35->fields._size = size + 1;
    v50[4] = (Il2CppClass *)v36;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v50 + 4), v36, v45, v46);
  }
  if ( !byte_49F9823 )
  {
    sub_1B64A00(&System_Math_TypeInfo, v51);
    byte_49F9823 = 1;
  }
  v52 = x;
  v53 = v30 - x;
  v54 = v31 - y;
  v55 = v32 - z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( !byte_49F9824 )
  {
    sub_1B64A00(&System_Math_TypeInfo, v51);
    byte_49F9824 = 1;
  }
  v56 = sqrtf((float)(v55 * v55) + (float)((float)(v53 * v53) + (float)(v54 * v54)));
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v57 = z;
  if ( v56 <= 0.00001 )
  {
    if ( !byte_49F9821 )
    {
      sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v51);
      byte_49F9821 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v58 = static_fields->zeroVector.fields.x;
    v59 = static_fields->zeroVector.fields.y;
    v60 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v58 = v53 / v56;
    v59 = v54 / v56;
    v60 = v55 / v56;
  }
  v62 = v56 - this->fields.lengthOnAttack;
  if ( v62 <= 0.0 )
  {
    v64 = v52;
    v65 = y;
  }
  else
  {
    v113 = v59;
    v114 = v58;
    v63 = v52;
    v64 = v52 + (float)(v58 * v62);
    v65 = y + (float)(v59 * v62);
    v66 = y;
    v67 = v57;
    v57 = v57 + (float)(v60 * v62);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    pixelPerSecond = this->fields.pixelPerSecond;
    v70 = gameObject;
    v71 = (WarBoardMovePerformance_o *)sub_1B64C4C(WarBoardMovePerformance_TypeInfo);
    v116.fields.x = v63;
    v116.fields.y = v66;
    v116.fields.z = v67;
    v119.fields.x = v64;
    v119.fields.y = v65;
    v119.fields.z = v57;
    v72 = (Il2CppObject *)v71;
    WarBoardMovePerformance___ctor(v71, v70, v116, v119, pixelPerSecond, 5, 0LL);
    v75 = v35->fields._items;
    v76 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v35->fields._version;
    if ( !v75 )
      goto LABEL_64;
    v77 = v35->fields._size;
    if ( (unsigned int)v77 >= v75->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v35,
        v72,
        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
    }
    else
    {
      v78 = &v75->obj.klass + v77;
      v35->fields._size = v77 + 1;
      v78[4] = (Il2CppClass *)v72;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v78 + 4), (int32_t)v72, v73, v74);
    }
    v59 = v113;
    v58 = v114;
  }
  lengthMoveAttack = this->fields.lengthMoveAttack;
  v80 = v58 * lengthMoveAttack;
  v81 = v59 * lengthMoveAttack;
  v82 = v60 * lengthMoveAttack;
  v83 = v64 + v80;
  v84 = v65 + v81;
  v85 = v57 + v82;
  v86 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v87 = this->fields.pixelPerSecond;
  v88 = v86;
  v89 = (WarBoardMovePerformance_o *)sub_1B64C4C(WarBoardMovePerformance_TypeInfo);
  v117.fields.x = v83;
  v117.fields.y = v84;
  v117.fields.z = v85;
  v120.fields.x = v64;
  v120.fields.y = v65;
  v120.fields.z = v57;
  v90 = (WarBoardTaskBase_o *)v89;
  WarBoardMovePerformance___ctor(v89, v88, v117, v120, v87, 4, 0LL);
  if ( !v23 )
    goto LABEL_64;
  v91 = WarBoardWallData__DecrementBreakPointPerformance(v23, 1, 0LL);
  v92 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v92,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 26, 0LL, 0LL), !v92)
    || (System_Collections_Generic_List_object___AddRange(
          v92,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        System_Collections_Generic_List_object___AddRange(
          v35,
          (System_Collections_Generic_IEnumerable_T__o *)v92,
          (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__),
        (Instance = (WarBoardData_o *)sub_1B64AA8(WarBoardTaskBase___TypeInfo, 4LL)) == 0LL) )
  {
LABEL_64:
    sub_1B64C5C(Instance, v20);
  }
  v95 = (WarBoardTaskBase_array *)Instance;
  if ( v90 )
  {
    Instance = (WarBoardData_o *)sub_1B64B3C(v90, Instance->klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( !v95->max_length )
    goto LABEL_65;
  v95->m_Items[0] = v90;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)v95->m_Items, (int32_t)v90, v93, v94);
  Instance = (WarBoardData_o *)v23->fields.component;
  if ( !Instance )
    goto LABEL_64;
  IconPosition = WarBoardWallComponent__GetIconPosition((WarBoardWallComponent_o *)Instance, 0LL);
  Instance = (WarBoardData_o *)WarBoardManager__CreateAttackEffectTask(v21, IconPosition, 0, 0LL);
  v98 = Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_1B64B3C(Instance, v95->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( v95->max_length <= 1 )
    goto LABEL_65;
  v95->m_Items[1] = (WarBoardTaskBase_o *)v98;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v95->m_Items[1], (int32_t)v98, v96, v97);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (WarBoardData_o *)WarBoardManager__GetCameraShakeTask((WarBoardManager_o *)Instance, 0LL);
  v101 = Instance;
  if ( Instance )
  {
    Instance = (WarBoardData_o *)sub_1B64B3C(Instance, v95->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_66;
  }
  if ( v95->max_length <= 2 )
    goto LABEL_65;
  v95->m_Items[2] = (WarBoardTaskBase_o *)v101;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v95->m_Items[2], (int32_t)v101, v99, v100);
  v102 = (WarBoardOrthostichySchedule_o *)sub_1B64C4C(WarBoardOrthostichySchedule_TypeInfo);
  WarBoardOrthostichySchedule___ctor_35392804(v102, v91, 0LL);
  if ( v102 )
  {
    Instance = (WarBoardData_o *)sub_1B64B3C(v102, v95->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_66:
      v112 = sub_1B64C80(Instance);
      sub_1B64B28(v112, 0LL);
    }
  }
  if ( v95->max_length <= 3 )
LABEL_65:
    sub_1B64C64(Instance, v20);
  v95->m_Items[3] = (WarBoardTaskBase_o *)v102;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v95->m_Items[3], (int32_t)v102, v103, v104);
  v105 = (WarBoardParallelSchedule_o *)sub_1B64C4C(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor(v105, v95, 0LL);
  v108 = v35->fields._items;
  v109 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v35->fields._version;
  if ( !v108 )
    goto LABEL_64;
  v110 = v35->fields._size;
  if ( (unsigned int)v110 >= v108->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v35,
      (Il2CppObject *)v105,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
  }
  else
  {
    v111 = &v108->obj.klass + v110;
    v35->fields._size = v110 + 1;
    v111[4] = (Il2CppClass *)v105;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v111 + 4), (int32_t)v105, v106, v107);
  }
  if ( v35->fields._size >= 1 )
    WarBoardManager__AddTask_35192188(v21, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v35, 0LL);
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
    sub_1B64C5C(simpleAnimation, animationName);
  SimpleAnimation__Play_63522800(simpleAnimation, animationName, 0LL);
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
    sub_1B64C5C(this, method);
  breakPoint_k__BackingField = pieceData->fields._breakPoint_k__BackingField;
  v5 = this;
  v6 = 0LL;
  while ( (int)v6 < pieceData->fields._breakPointMax_k__BackingField )
  {
    breakPoints = v5->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v6 >= breakPoints->max_length )
        sub_1B64C64(this, method);
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
  UnityEngine_Component_o *ComponentsInChildren_object; // x0
  __int64 v12; // x1
  signed int max_length; // w8
  unsigned int v14; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v16; // x22
  unsigned __int64 v17; // x29
  UnityEngine_Object_o *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v24; // x1
  Il2CppClass **v25; // x0
  struct UICommonButton_o *button; // x19
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_49FC670 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75738176, parents);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__ToArray__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_1B64A00(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v9);
    byte_49FC670 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_GameObject___ctor__);
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
        ComponentsInChildren_object = (UnityEngine_Component_o *)parents->m_Items[v14];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                   ComponentsInChildren_object,
                                                                   1,
                                                                   (const MethodInfo_2E33270 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75738176);
        if ( ComponentsInChildren_object )
        {
          klass = ComponentsInChildren_object[1].klass;
          v16 = ComponentsInChildren_object;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v14 >= max_length )
          goto LABEL_24;
      }
      v17 = 0LL;
      while ( v17 < (unsigned int)klass )
      {
        v18 = (UnityEngine_Object_o *)*((_QWORD *)&v16[1].monitor + v17);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v18 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)v18,
                                                                     0LL);
          if ( !v10 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___Contains(
                                                                     v10,
                                                                     (Il2CppObject *)ComponentsInChildren_object,
                                                                     (const MethodInfo_34B0358 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v18,
                                                                       0LL);
            items = v10->fields._items;
            v22 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v10->fields._size;
            v24 = ComponentsInChildren_object;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v24;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
            }
          }
        }
        LODWORD(klass) = v16[1].klass;
        if ( (__int64)++v17 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1B64C64(ComponentsInChildren_object, v12);
    }
  }
LABEL_24:
  if ( !v10
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v10,
                                                                   (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1B64C5C(ComponentsInChildren_object, v12);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&button->fields.tweenTargets,
    (int32_t)ComponentsInChildren_object,
    v27,
    v28);
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

  if ( (byte_49FC672 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, enable);
    byte_49FC672 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1B64C5C(0LL, v6);
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_List_object__o *listEffectData; // x20
  System_Predicate_object__o *v17; // x21
  Il2CppObject *v18; // x20
  _QWORD *monitor; // x22
  __int64 v20; // x8
  unsigned __int64 v21; // x23
  bool v22; // w19
  UnityEngine_Object_o *v23; // x21

  if ( (byte_49FC686 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__, effectKey);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v7);
    sub_1B64A00(&System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo, v8);
    sub_1B64A00(&Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__, v9);
    sub_1B64A00(&WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo, v10);
    byte_49FC686 = 1;
  }
  v11 = sub_1B64C4C(WarBoardPieceBaseComponent___c__DisplayClass83_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_18;
  *(_QWORD *)(v11 + 16) = effectKey;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)effectKey, v14, v15);
  listEffectData = (System_Collections_Generic_List_object__o *)this->fields.listEffectData;
  v17 = (System_Predicate_object__o *)sub_1B64C4C(System_Predicate_WarBoardPieceBaseComponent_ScriptEffectData__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_WarBoardPieceBaseComponent___c__DisplayClass83_0__SetEffect_b__0__,
    0LL);
  if ( !listEffectData )
    goto LABEL_18;
  v12 = System_Collections_Generic_List_object___Find(
          listEffectData,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_34B0630 *)Method_System_Collections_Generic_List_WarBoardPieceBaseComponent_ScriptEffectData__Find__);
  v18 = v12;
  if ( !v12 )
    return v18 != 0LL;
  monitor = v12[1].monitor;
  if ( !monitor )
LABEL_18:
    sub_1B64C5C(v12, v13);
  v20 = monitor[3];
  if ( (int)v20 >= 1 )
  {
    v21 = 0LL;
    v22 = isDisp;
    do
    {
      if ( v21 >= (unsigned int)v20 )
        sub_1B64C64(v12, v13);
      v23 = (UnityEngine_Object_o *)monitor[v21 + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v12 = (Il2CppObject *)UnityEngine_Object__op_Equality(v23, 0LL, 0LL);
      if ( ((unsigned __int8)v12 & 1) == 0 )
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


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceBaseComponent__SetTouchEnable(
        WarBoardPieceBaseComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_49FC671 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, enable);
    byte_49FC671 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1B64C5C(0LL, v6);
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

  if ( (byte_49FC674 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_49FC674 = 1;
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
    sub_1B64C5C(pieceData, method);
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
    sub_1B64C5C(0LL, method);
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
      SimpleAnimation__Stop_63520316(simpleAnimation, animationName, 0LL);
      simpleAnimation = this->fields.simpleAnimation;
      if ( simpleAnimation )
      {
        SimpleAnimation__Rewind(simpleAnimation, 0LL);
        return;
      }
    }
LABEL_7:
    sub_1B64C5C(simpleAnimation, animationName);
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
    sub_1B64C5C(pieceData, method);
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
  WarBoardPieceData_o *pieceData; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Generic_HashSet_T__o **v30; // x21
  System_Collections_Generic_HashSet_T__o *v31; // x23
  __int64 v32; // x22
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_IEnumerable_T__o *cannotActTurnDurk; // x24
  char v36; // w23
  System_Action_object__o *v37; // x25
  System_Collections_Generic_IEnumerable_T__o *v38; // x24
  System_Action_object__o *v39; // x25
  System_Collections_Generic_IEnumerable_T__o *turnDarkUiWidgetsAroundActionCount; // x24
  System_Action_object__o *v41; // x25
  System_Collections_Generic_IEnumerable_T__o *v42; // x23
  System_Action_object__o *v43; // x24
  struct UICommonButton_o *button; // x8
  System_Collections_Generic_IEnumerable_T__o *tweenTargets; // x23
  System_Collections_Generic_List_object__o *v46; // x20
  _BOOL8 v47; // x0
  __int64 v48; // x1
  Il2CppObject *current; // x22
  struct System_Collections_Generic_List_GameObject__o *removeTweenTargetObjects; // x23
  Il2CppObject *gameObject; // x0
  __int64 v52; // x1
  UnityEngine_GameObject_o *v53; // x0
  Il2CppObject *v54; // x1
  UnityEngine_GameObject_o *v55; // x0
  Il2CppObject *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  Il2CppObject *v59; // x1
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  struct UICommonButton_o *v64; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  System_Collections_Generic_HashSet_Enumerator_T__o v68; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v69; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Color_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FC677 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_UIWidget__TypeInfo, method);
    sub_1B64A00(&Method_BasicHelper_ForEach_UIWidget___, v3);
    sub_1B64A00(&Method_System_Linq_Enumerable_Distinct_GameObject___, v4);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToArray_GameObject___, v5);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__get_Current__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_UIWidget__Contains__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_UIWidget___ctor__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_UIWidget__get_Count__, v12);
    sub_1B64A00(&System_Collections_Generic_HashSet_UIWidget__TypeInfo, v13);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__Add__, v14);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__Contains__, v15);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__Remove__, v16);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject___ctor___75665496, v17);
    sub_1B64A00(&System_Collections_Generic_List_GameObject__TypeInfo, v18);
    sub_1B64A00(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__, v19);
    sub_1B64A00(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__, v20);
    sub_1B64A00(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__, v21);
    sub_1B64A00(&Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__, v22);
    sub_1B64A00(&WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo, v23);
    byte_49FC677 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  v24 = sub_1B64C4C(WarBoardPieceBaseComponent___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  v25 = (System_Collections_Generic_HashSet_T__o *)sub_1B64C4C(System_Collections_Generic_HashSet_UIWidget__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v25,
    (const MethodInfo_336C6C4 *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  if ( !v24 )
    goto LABEL_39;
  *(_QWORD *)(v24 + 24) = v25;
  v30 = (System_Collections_Generic_HashSet_T__o **)(v24 + 24);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v24 + 24), (int32_t)v25, v28, v29);
  v31 = (System_Collections_Generic_HashSet_T__o *)sub_1B64C4C(System_Collections_Generic_HashSet_UIWidget__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v31,
    (const MethodInfo_336C6C4 *)Method_System_Collections_Generic_HashSet_UIWidget___ctor__);
  *(_QWORD *)(v24 + 16) = v31;
  v32 = v24 + 16;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v24 + 16), (int32_t)v31, v33, v34);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_39;
  pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasIconDarkenBuff(pieceData, 0LL);
  cannotActTurnDurk = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
  v36 = (char)pieceData;
  if ( cannotActTurnDurk )
  {
    v37 = (System_Action_object__o *)sub_1B64C4C(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v37,
      (Il2CppObject *)v24,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__0__,
      0LL);
    BasicHelper__ForEach_object_(
      cannotActTurnDurk,
      (System_Action_T__o *)v37,
      (const MethodInfo_2E29154 *)Method_BasicHelper_ForEach_UIWidget___);
    pieceData = this->fields.pieceData;
    if ( !pieceData )
      goto LABEL_39;
    pieceData = (WarBoardPieceData_o *)WarBoardPieceData__HasVitalityToDoAnyActions(pieceData, 0LL);
    if ( v36 & 1 | (((unsigned __int8)pieceData & 1) == 0) )
    {
      v38 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.cannotActTurnDurk;
      v39 = (System_Action_object__o *)sub_1B64C4C(System_Action_UIWidget__TypeInfo);
      System_Action_object____ctor(
        v39,
        (Il2CppObject *)v24,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__1__,
        0LL);
      BasicHelper__ForEach_object_(
        v38,
        (System_Action_T__o *)v39,
        (const MethodInfo_2E29154 *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  turnDarkUiWidgetsAroundActionCount = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
  if ( turnDarkUiWidgetsAroundActionCount )
  {
    v41 = (System_Action_object__o *)sub_1B64C4C(System_Action_UIWidget__TypeInfo);
    System_Action_object____ctor(
      v41,
      (Il2CppObject *)v24,
      Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__2__,
      0LL);
    BasicHelper__ForEach_object_(
      turnDarkUiWidgetsAroundActionCount,
      (System_Action_T__o *)v41,
      (const MethodInfo_2E29154 *)Method_BasicHelper_ForEach_UIWidget___);
    if ( (v36 & 1) != 0 )
    {
      v42 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.turnDarkUiWidgetsAroundActionCount;
      v43 = (System_Action_object__o *)sub_1B64C4C(System_Action_UIWidget__TypeInfo);
      System_Action_object____ctor(
        v43,
        (Il2CppObject *)v24,
        Method_WarBoardPieceBaseComponent___c__DisplayClass48_0__UpdateUiBrightnessByPieceStatus_b__3__,
        0LL);
      BasicHelper__ForEach_object_(
        v42,
        (System_Action_T__o *)v43,
        (const MethodInfo_2E29154 *)Method_BasicHelper_ForEach_UIWidget___);
    }
  }
  if ( !*(_QWORD *)v32 )
    goto LABEL_39;
  if ( *(int *)(*(_QWORD *)v32 + 32LL) < 1 )
    return;
  button = this->fields.button;
  if ( !button )
    goto LABEL_39;
  tweenTargets = (System_Collections_Generic_IEnumerable_T__o *)button->fields.tweenTargets;
  v46 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor_55244988(
    v46,
    tweenTargets,
    (const MethodInfo_34AF8BC *)Method_System_Collections_Generic_List_GameObject___ctor___75665496);
  pieceData = *(WarBoardPieceData_o **)v32;
  if ( !*(_QWORD *)v32 )
    goto LABEL_39;
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v68,
    (System_Collections_Generic_HashSet_T__o *)pieceData,
    (const MethodInfo_336D22C *)Method_System_Collections_Generic_HashSet_UIWidget__GetEnumerator__);
  v69 = v68;
  while ( 1 )
  {
    v47 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v69,
            (const MethodInfo_322C434 *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__MoveNext__);
    if ( !v47 )
      break;
    current = v69.fields._current;
    if ( !v69.fields._current )
      sub_1B64C5C(v47, v48);
    removeTweenTargetObjects = this->fields.removeTweenTargetObjects;
    gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v69.fields._current,
                                   0LL);
    if ( !removeTweenTargetObjects )
      sub_1B64C5C(gameObject, gameObject);
    if ( System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)removeTweenTargetObjects,
           gameObject,
           (const MethodInfo_34B0358 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
    {
      v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      v54 = (Il2CppObject *)v53;
      if ( !v46 )
        sub_1B64C5C(v53, v53);
      goto LABEL_22;
    }
    if ( !*v30 )
      sub_1B64C5C(0LL, v52);
    if ( System_Collections_Generic_HashSet_object___Contains(
           *v30,
           current,
           (const MethodInfo_336CDB8 *)Method_System_Collections_Generic_HashSet_UIWidget__Contains__) )
    {
      v70.fields.r = 0.5;
      v70.fields.g = 0.5;
      v70.fields.b = 0.5;
      v70.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)current, v70, 0LL);
      v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      v54 = (Il2CppObject *)v55;
      if ( !v46 )
        sub_1B64C5C(v55, v55);
LABEL_22:
      System_Collections_Generic_List_object___Remove(
        v46,
        v54,
        (const MethodInfo_34B1590 *)Method_System_Collections_Generic_List_GameObject__Remove__);
    }
    else
    {
      v71.fields.r = 1.0;
      v71.fields.g = 1.0;
      v71.fields.b = 1.0;
      v71.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)current, v71, 0LL);
      v56 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      v59 = v56;
      if ( !v46 )
        sub_1B64C5C(v56, v56);
      items = v46->fields._items;
      v61 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v46->fields._version;
      if ( !items )
        sub_1B64C5C(v56, v56);
      size = v46->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v46,
          v56,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v63 = &items->obj.klass + size;
        v46->fields._size = size + 1;
        v63[4] = (Il2CppClass *)v59;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v63 + 4), (int32_t)v59, v57, v58);
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v69,
    (const MethodInfo_322C430 *)Method_System_Collections_Generic_HashSet_Enumerator_UIWidget__Dispose__);
  v64 = this->fields.button;
  v65 = System_Linq_Enumerable__Distinct_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v46,
          (const MethodInfo_2E5A74C *)Method_System_Linq_Enumerable_Distinct_GameObject___);
  pieceData = (WarBoardPieceData_o *)System_Linq_Enumerable__ToArray_object_(
                                       v65,
                                       (const MethodInfo_2E73CB8 *)Method_System_Linq_Enumerable_ToArray_GameObject___);
  if ( !v64 )
LABEL_39:
    sub_1B64C5C(pieceData, v27);
  v64->fields.tweenTargets = (struct UnityEngine_GameObject_array *)pieceData;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v64->fields.tweenTargets, (int32_t)pieceData, v66, v67);
}


void __fastcall WarBoardPieceBaseComponent__UpdateUiByBuffChanged(
        WarBoardPieceBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *pieceStatusLabelComponent; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  WarBoardPieceStatusLabel_o *v6; // x0

  if ( (byte_49FC676 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_49FC676 = 1;
  }
  ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))this->klass->vtable._11_UpdateUiBrightnessByPieceStatus.method)(
    this,
    this->klass->vtable._12_ShowStatus.methodPtr);
  pieceStatusLabelComponent = (UnityEngine_Object_o *)this->fields.pieceStatusLabelComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pieceStatusLabelComponent, 0LL, 0LL) )
  {
    v6 = this->fields.pieceStatusLabelComponent;
    if ( !v6 )
      sub_1B64C5C(0LL, v4);
    WarBoardPieceStatusLabel__SetupLabel(v6, this->fields.pieceData, v5);
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

  if ( (byte_49FC68A & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49FC68A = 1;
  }
  WarBoardPieceBaseComponent__WidgetDepthIncrement(this, -20 * this->fields.dispPriotiry, v2);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1B64C5C(Instance, v5);
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
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int max_length; // w21
  il2cpp_array_size_t i; // w22
  Il2CppClass **v15; // x0
  Il2CppClass *v16; // x8
  Il2CppClass *v17; // t1
  unsigned __int64 v18; // x22
  __int64 v19; // x24
  UnityEngine_Object_o *v20; // x21
  struct UIWidget_array *v21; // x8

  v4 = this;
  if ( (byte_49FC683 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75738176, *(_QWORD *)&value);
    this = (WarBoardPieceBaseComponent_o *)sub_1B64A00(&UnityEngine_Object_TypeInfo, v5);
    byte_49FC683 = 1;
  }
  uiWidgets = v4->fields.uiWidgets;
  p_uiWidgets = &v4->fields.uiWidgets;
  if ( !uiWidgets )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)v4,
                                    1,
                                    (const MethodInfo_2E33270 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75738176);
    v4->fields.uiWidgets = (struct UIWidget_array *)ComponentsInChildren_object;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&v4->fields.uiWidgets,
      (int32_t)ComponentsInChildren_object,
      v9,
      v10);
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
        v15 = &uiWidgets->obj.klass + (int)i;
        v17 = v15[4];
        this = (WarBoardPieceBaseComponent_o *)(v15 + 4);
        v16 = v17;
        if ( !v17 )
          goto LABEL_26;
        if ( SLODWORD(v16->_1.interfaceOffsets) >= 1001 )
        {
          this->klass = 0LL;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)this, 0, v11, v12);
        }
        uiWidgets = *p_uiWidgets;
      }
      if ( !uiWidgets )
LABEL_26:
        sub_1B64C5C(this, *(_QWORD *)&value);
    }
  }
  if ( (int)*(_QWORD *)&uiWidgets->max_length >= 1 )
  {
    v18 = 0LL;
    v19 = (unsigned int)*(_QWORD *)&uiWidgets->max_length - 1LL;
    while ( v18 < uiWidgets->max_length )
    {
      v20 = (UnityEngine_Object_o *)uiWidgets->m_Items[v18];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardPieceBaseComponent_o *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v21 = *p_uiWidgets;
        if ( !*p_uiWidgets )
          goto LABEL_26;
        if ( v18 >= v21->max_length )
          break;
        this = (WarBoardPieceBaseComponent_o *)v21->m_Items[v18];
        if ( !this )
          goto LABEL_26;
        UIWidget__set_depth((UIWidget_o *)this, LODWORD(this->fields.pieceStatusLabelComponent) + value, 0LL);
      }
      if ( v19 == v18 )
        return;
      uiWidgets = *p_uiWidgets;
      ++v18;
      if ( !*p_uiWidgets )
        goto LABEL_26;
    }
LABEL_28:
    sub_1B64C64(this, *(_QWORD *)&value);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FC68C & 1) == 0 )
  {
    sub_1B64A00(&WarBoardPieceBaseComponent___c_TypeInfo, v1);
    byte_49FC68C = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(WarBoardPieceBaseComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardPieceBaseComponent___c_TypeInfo->static_fields->__9 = (struct WarBoardPieceBaseComponent___c_o *)v2;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)WarBoardPieceBaseComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B64C5C(this, 0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)WarBoardPieceData__CreatePieceEventVals(x, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAfterAttack_b__65_3(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  WarBoardControlUiDataComponent_c *v2; // x0

  if ( (byte_49FC68F & 1) == 0 )
  {
    sub_1B64A00(&WarBoardControlUiDataComponent_TypeInfo, method);
    byte_49FC68F = 1;
  }
  v2 = WarBoardControlUiDataComponent_TypeInfo;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__ResumeUiDataAll((const MethodInfo *)v2);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAttack_b__63_1(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_49FC68D & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FC68D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v3);
  CommonUI__maskFadeout((CommonUI_o *)Instance, 2, 0.0, 0LL, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c___OnAttack_b__63_4(
        WarBoardPieceBaseComponent___c_o *this,
        const MethodInfo *method)
{
  WarBoardControlUiDataComponent_c *v2; // x0

  if ( (byte_49FC68E & 1) == 0 )
  {
    sub_1B64A00(&WarBoardControlUiDataComponent_TypeInfo, method);
    byte_49FC68E = 1;
  }
  v2 = WarBoardControlUiDataComponent_TypeInfo;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__SetUiDataOnBattleAll((const MethodInfo *)v2);
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

  if ( (byte_49FC690 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x);
    byte_49FC690 = 1;
  }
  targetUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_1B64C5C(0LL, x);
  System_Collections_Generic_HashSet_object___Add(
    targetUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_336D8A8 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__1(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *darkenUiWidgets; // x0

  if ( (byte_49FC691 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x);
    byte_49FC691 = 1;
  }
  darkenUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_1B64C5C(0LL, x);
  System_Collections_Generic_HashSet_object___Add(
    darkenUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_336D8A8 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *targetUiWidgets; // x0

  if ( (byte_49FC692 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x);
    byte_49FC692 = 1;
  }
  targetUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.targetUiWidgets;
  if ( !targetUiWidgets )
    sub_1B64C5C(0LL, x);
  System_Collections_Generic_HashSet_object___Add(
    targetUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_336D8A8 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass48_0___UpdateUiBrightnessByPieceStatus_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass48_0_o *this,
        UIWidget_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *darkenUiWidgets; // x0

  if ( (byte_49FC693 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_UIWidget__Add__, x);
    byte_49FC693 = 1;
  }
  darkenUiWidgets = (System_Collections_Generic_HashSet_T__o *)this->fields.darkenUiWidgets;
  if ( !darkenUiWidgets )
    sub_1B64C5C(0LL, x);
  System_Collections_Generic_HashSet_object___Add(
    darkenUiWidgets,
    (Il2CppObject *)x,
    (const MethodInfo_336D8A8 *)Method_System_Collections_Generic_HashSet_UIWidget__Add__);
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
    sub_1B64C5C(0LL, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__2(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_49FC694 & 1) == 0 )
  {
    sub_1B64A00(&WarBoardControlUiDataComponent_TypeInfo, method);
    byte_49FC694 = 1;
  }
  targetUpdateUiDataSquareIndexes = this->fields.targetUpdateUiDataSquareIndexes;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll(targetUpdateUiDataSquareIndexes, 0, v2);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass61_0___OnMove_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Int32_array *targetUpdateUiDataSquareIndexes; // x19

  if ( (byte_49FC695 & 1) == 0 )
  {
    sub_1B64A00(&WarBoardControlUiDataComponent_TypeInfo, method);
    byte_49FC695 = 1;
  }
  targetUpdateUiDataSquareIndexes = this->fields.targetUpdateUiDataSquareIndexes;
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__UpdateAdjustSituationAll(targetUpdateUiDataSquareIndexes, 0, v2);
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

  if ( (byte_49FC696 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v5);
    sub_1B64A00(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v6);
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    byte_49FC696 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 38, this->fields.pieceEventVals, 0LL);
  if ( !v8 )
    goto LABEL_13;
  System_Collections_Generic_List_object___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetSquarePiece = this->fields.targetSquarePiece;
  if ( targetSquarePiece )
  {
    PieceEventVals = WarBoardPieceData__CreatePieceEventVals(targetSquarePiece, 0LL);
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    EventTasks = WarBoardManager__GetEventTasks(Instance, 38, PieceEventVals, 0LL);
    System_Collections_Generic_List_object___AddRange(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
      (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
LABEL_13:
    sub_1B64C5C(Instance, v10);
  v14 = WarBoardManager__GetEventTasks(Instance, 37, 0LL, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)v14,
    (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v8,
         (const MethodInfo_2E49388 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
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
    sub_1B64C5C(0LL, method);
  WarBoardSquareData__PlayUnDispCostAnim(targetSquareData, 0LL);
}


void __fastcall WarBoardPieceBaseComponent___c__DisplayClass63_0___OnAttack_b__3(
        WarBoardPieceBaseComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  WarBoardManager_o *warBoardManager; // x0

  warBoardManager = this->fields.warBoardManager;
  if ( !warBoardManager )
    sub_1B64C5C(0LL, method);
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
    sub_1B64C5C(this, method);
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
  const MethodInfo *v2; // x2
  WarBoardPieceBaseComponent_o *_4__this; // x0

  if ( (byte_49FC698 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49FC698 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, v2),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_1B64C5C(_4__this, method);
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
    sub_1B64C5C(this, method);
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
  const MethodInfo *v12; // x2
  struct WarBoardManager_o *warBoardManager; // x8
  int32_t id; // w21
  struct WarBoardPieceData_o *v15; // x8
  int32_t breakPoint_k__BackingField; // w23
  WarBoardMessageMaster_o *v17; // x22
  int32_t v18; // w2
  bool v19; // w4
  WarBoardMessageMaster_o *v20; // x0
  int32_t v21; // w1
  int32_t v22; // w3
  System_Int32_array *v23; // x21
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *v25; // x0
  WarBoardManager_o *v26; // x19

  if ( (byte_49FC697 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_WarBoardMessageMaster___, method);
    sub_1B64A00(&DataManager_TypeInfo, v3);
    sub_1B64A00(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v7);
    sub_1B64A00(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v8);
    byte_49FC697 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
    targetPiece = (WarBoardPieceData_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
    v15 = this->fields.targetPiece;
    if ( !v15 )
      goto LABEL_25;
    breakPoint_k__BackingField = v15->fields._breakPoint_k__BackingField;
    v17 = (WarBoardMessageMaster_o *)targetPiece;
    targetPiece = (WarBoardPieceData_o *)WarBoardPieceData__get_isPlayerMaster(this->fields.targetPiece, 0LL);
    if ( !v17 )
      goto LABEL_25;
    if ( ((unsigned __int8)targetPiece & 1) != 0 )
    {
      v18 = 12;
      v19 = 1;
      v20 = v17;
      v21 = id;
      v22 = breakPoint_k__BackingField;
    }
    else
    {
      v18 = 10;
      v20 = v17;
      v21 = id;
      v22 = breakPoint_k__BackingField;
      v19 = 0;
    }
    targetPiece = (WarBoardPieceData_o *)WarBoardMessageMaster__GetMessageTasks(v20, v21, v18, v22, v19, 0LL);
    if ( !v9 )
      goto LABEL_25;
    System_Collections_Generic_List_object___AddRange(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)targetPiece,
      (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  targetPiece = (WarBoardPieceData_o *)this->fields.__4__this;
  if ( !targetPiece )
    goto LABEL_25;
  targetPiece = (WarBoardPieceData_o *)WarBoardPieceBaseComponent__GetParticipantVals(
                                         (WarBoardPieceBaseComponent_o *)targetPiece,
                                         this->fields.targetPiece,
                                         v12);
  if ( !this->fields.warBoardManager )
    goto LABEL_25;
  v23 = (System_Int32_array *)targetPiece;
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
    (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_25;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)targetPiece, 20, v23, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  targetPiece = (WarBoardPieceData_o *)this->fields.warBoardManager;
  if ( !targetPiece )
    goto LABEL_25;
  v25 = WarBoardManager__GetEventTasks((WarBoardManager_o *)targetPiece, 40, v23, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)v25,
    (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v9,
         (const MethodInfo_2E49388 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    v26 = this->fields.warBoardManager;
    targetPiece = (WarBoardPieceData_o *)System_Collections_Generic_List_object___ToArray(
                                           v9,
                                           (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( v26 )
    {
      WarBoardManager__InsertRunningTask(v26, (WarBoardTaskBase_array *)targetPiece, 0LL);
      return;
    }
LABEL_25:
    sub_1B64C5C(targetPiece, v10);
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
    sub_1B64C5C(0LL, method);
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
  const MethodInfo *v2; // x2
  WarBoardPieceBaseComponent_o *_4__this; // x0

  if ( (byte_49FC69A & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49FC69A = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (WarBoardPieceBaseComponent__AddDeadMoveTask(_4__this, this->fields.originalPos, this->fields.squareIndex, v2),
        (_4__this = (WarBoardPieceBaseComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_1B64C5C(_4__this, method);
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

  if ( (byte_49FC699 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v5);
    sub_1B64A00(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v6);
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    byte_49FC699 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (WarBoardManager_o *)WarBoardManager__GetEventTasks(Instance, 27, 0LL, 0LL);
  if ( !v8 )
    goto LABEL_9;
  System_Collections_Generic_List_object___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v8,
         (const MethodInfo_2E49388 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    warBoardManager = this->fields.warBoardManager;
    Instance = (WarBoardManager_o *)System_Collections_Generic_List_object___ToArray(
                                      v8,
                                      (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( warBoardManager )
    {
      WarBoardManager__InsertRunningTask(warBoardManager, (WarBoardTaskBase_array *)Instance, 0LL);
      return;
    }
LABEL_9:
    sub_1B64C5C(Instance, v10);
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
    sub_1B64C5C(this, 0LL);
  return System_String__op_Equality(a->fields.key, this->fields.effectKey, 0LL);
}