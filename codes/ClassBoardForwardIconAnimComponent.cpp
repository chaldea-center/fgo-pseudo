void __fastcall ClassBoardForwardIconAnimComponent___ctor(
        ClassBoardForwardIconAnimComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438D3A3 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19847/*"img_class_{0}"*/);
    sub_B775C4(&StringLiteral_17323/*"btn_class"*/);
    byte_438D3A3 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_19847/*"img_class_{0}"*/;
  this->fields.spriteNameFormatIcon = (struct System_String_o *)StringLiteral_19847/*"img_class_{0}"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.spriteNameFormatIcon, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_17323/*"btn_class"*/;
  this->fields.spriteNameButton = (struct System_String_o *)StringLiteral_17323/*"btn_class"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.spriteNameButton, v10, v11, v12, v13, v14, v15, v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ClassBoardForwardIconAnimComponent__PlayAnim(
        ClassBoardForwardIconAnimComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *anim; // x0
  UnityEngine_Animation_o *v4; // x19
  System_String_o *name; // x1

  anim = this->fields.anim;
  if ( !anim
    || (UnityEngine_Animation__Rewind(anim, 0LL), (v4 = this->fields.anim) == 0LL)
    || (anim = (UnityEngine_Animation_o *)UnityEngine_Animation__get_clip(v4, 0LL)) == 0LL )
  {
    sub_B7769C(anim, method);
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)anim, 0LL);
  UnityEngine_Animation__Play_51745976(v4, name, 0LL);
}


void __fastcall ClassBoardForwardIconAnimComponent__Setup(
        ClassBoardForwardIconAnimComponent_o *this,
        IClassBoardResourceCatalog_o *resourceCatalog,
        int32_t baseId,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  IClassBoardResourceCatalog_c *klass; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x21
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v14; // x2
  AtlasManagerUnit_o *sb; // x22
  UISprite_o *classIconUi; // x23
  System_String_o *spriteNameFormatIcon; // x24
  Il2CppObject *v18; // x0
  IClassBoardResourceCatalog_c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  int list; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438D3A2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
    sub_B775C4(&IClassBoardResourceCatalog_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    byte_438D3A2 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_27;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    baseId,
                                                                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  if ( !Master_WarQuestSelectionMaster )
    return;
  if ( !resourceCatalog )
    goto LABEL_27;
  klass = resourceCatalog->klass;
  v10 = Master_WarQuestSelectionMaster;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v11;
      p_offset += 4;
      if ( v11 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_B0F4C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                                                                    resourceCatalog,
                                                                                    *(_QWORD *)(p_method + 8));
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_27;
  sb = (AtlasManagerUnit_o *)Master_WarQuestSelectionMaster[1].fields.sb;
  classIconUi = this->fields.classIconUi;
  spriteNameFormatIcon = this->fields.spriteNameFormatIcon;
  list = (int)v10->fields.list;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &list, v14);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_String__Format(
                                                                                    spriteNameFormatIcon,
                                                                                    v18,
                                                                                    0LL);
  if ( !sb )
    goto LABEL_27;
  AtlasManagerUnit__SetUI(sb, classIconUi, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  v19 = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v21 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v20;
      v21 += 4;
      if ( v20 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    v22 = (__int64)&v19->vtable[*v21].method;
  }
  else
  {
LABEL_21:
    v22 = sub_B0F4C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v22)(
                                                                                    resourceCatalog,
                                                                                    *(_QWORD *)(v22 + 8));
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster[1].fields.seriazlier) == 0LL )
  {
LABEL_27:
    sub_B7769C(Master_WarQuestSelectionMaster, v8);
  }
  AtlasManagerUnit__SetUI(
    (AtlasManagerUnit_o *)Master_WarQuestSelectionMaster,
    this->fields.classButtonUi,
    this->fields.spriteNameButton,
    0LL);
}


void __fastcall ClassBoardForwardIconAnimComponent__Validation(
        ClassBoardForwardIconAnimComponent_o *this,
        const MethodInfo *method)
{
  ;
}