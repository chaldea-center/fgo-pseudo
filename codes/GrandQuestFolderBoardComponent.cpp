void __fastcall GrandQuestFolderBoardComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3F80F & 1) == 0 )
  {
    sub_1BDB878(&GrandQuestFolderBoardComponent_TypeInfo, v1);
    byte_4B3F80F = 1;
  }
  GrandQuestFolderBoardComponent_TypeInfo->static_fields->NameLabelMaxWidth = 240;
}


void __fastcall GrandQuestFolderBoardComponent___ctor(GrandQuestFolderBoardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall GrandQuestFolderBoardComponent__ExistBoardImage(
        GrandQuestFolderBoardComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *boardSprite; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UISprite_o *v7; // x8
  UnityEngine_Object_o *mAtlas; // x19

  if ( (byte_4B3F80E & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B3F80E = 1;
  }
  boardSprite = (UnityEngine_Object_o *)this->fields.boardSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(boardSprite, 0LL, 0LL);
  if ( v4 )
    return 0;
  v7 = this->fields.boardSprite;
  if ( !v7 )
    sub_1BDBAD4(v4, v5);
  mAtlas = (UnityEngine_Object_o *)v7->fields.mAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return !UnityEngine_Object__op_Equality(mAtlas, 0LL, 0LL);
}


int32_t __fastcall GrandQuestFolderBoardComponent__GetMoveBannerIdx(
        GrandQuestFolderBoardComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.moveBoardIdx;
}


void __fastcall GrandQuestFolderBoardComponent__OnTouchBoard(
        GrandQuestFolderBoardComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onTouch, 0LL);
}


void __fastcall GrandQuestFolderBoardComponent__SetBoardInfo(
        GrandQuestFolderBoardComponent_o *this,
        GrandQuestFolderBoardItem_o *item,
        AtlasManagerUnit_o *atlasManagerUnit,
        System_Action_o *onTouchCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UILabel_o *Name_k__BackingField; // x0
  __int64 v16; // x1
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x3
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  UILabel_o *nameLabelUp; // x21
  System_Collections_Generic_List_object__o *v26; // x20
  struct GrandQuestFolderBoardComponent_LabelMaxWidth_o *v27; // x8
  UILabel_o *nameLabelBottom; // x21
  struct GrandQuestFolderBoardComponent_LabelMaxWidth_o *v29; // x8
  int32_t middleLabelWidth; // w1
  struct GrandQuestFolderBoardComponent_LabelMaxWidth_o *maxLabelWidth; // x8
  int32_t IconId_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B3F80D & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_ToList_string___, item);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Item__, v9);
    sub_1BDB878(&StringLiteral_43/*"\n"*/, v10);
    sub_1BDB878(&StringLiteral_89/*"\r\n"*/, v11);
    sub_1BDB878(&StringLiteral_20520/*"img_questboard_"*/, v12);
    sub_1BDB878(&StringLiteral_20709/*"img_txt_questboard_"*/, v13);
    sub_1BDB878(&StringLiteral_20522/*"img_questboard_80522"*/, v14);
    byte_4B3F80D = 1;
  }
  this->fields.boardInfo = item;
  sub_1BDB81C(&this->fields.boardInfo);
  this->fields.onTouch = onTouchCallback;
  Name_k__BackingField = (UILabel_o *)sub_1BDB81C(&this->fields.onTouch);
  if ( !item )
    goto LABEL_24;
  this->fields.moveBoardIdx = item->fields.index;
  this->fields.atlasManager = atlasManagerUnit;
  sub_1BDB81C(&this->fields.atlasManager);
  IconId_k__BackingField = item->fields._IconId_k__BackingField;
  v17 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0LL);
  v18 = System_String__Concat_62572260((System_String_o *)StringLiteral_20520/*"img_questboard_"*/, v17, 0LL);
  GrandQuestFolderBoardComponent__SetImage(this, this->fields.classIconSprite, v18, v19);
  IconId_k__BackingField = item->fields._IconId_k__BackingField;
  v20 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0LL);
  v21 = System_String__Concat_62572260((System_String_o *)StringLiteral_20709/*"img_txt_questboard_"*/, v20, 0LL);
  GrandQuestFolderBoardComponent__SetImage(this, this->fields.classNameSprite, v21, v22);
  GrandQuestFolderBoardComponent__SetImage(this, this->fields.boardSprite, (System_String_o *)StringLiteral_20522/*"img_questboard_80522"*/, v23);
  Name_k__BackingField = (UILabel_o *)item->fields._Name_k__BackingField;
  if ( !Name_k__BackingField )
    goto LABEL_24;
  if ( !System_String__Contains((System_String_o *)Name_k__BackingField, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL) )
  {
    Name_k__BackingField = this->fields.nameLabelMiddle;
    if ( Name_k__BackingField )
    {
      UILabel__set_text(Name_k__BackingField, item->fields._Name_k__BackingField, 0LL);
      Name_k__BackingField = this->fields.nameLabelMiddle;
      if ( Name_k__BackingField )
      {
        Name_k__BackingField = (UILabel_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))Name_k__BackingField->klass->vtable._33_MakePixelPerfect.method)(
                                              Name_k__BackingField,
                                              Name_k__BackingField->klass->vtable._34_get_minWidth.methodPtr);
        maxLabelWidth = this->fields.maxLabelWidth;
        if ( maxLabelWidth )
        {
          Name_k__BackingField = this->fields.nameLabelMiddle;
          if ( Name_k__BackingField )
          {
            middleLabelWidth = maxLabelWidth->fields.middleLabelWidth;
            goto LABEL_23;
          }
        }
      }
    }
LABEL_24:
    sub_1BDBAD4(Name_k__BackingField, v16);
  }
  Name_k__BackingField = (UILabel_o *)item->fields._Name_k__BackingField;
  if ( !Name_k__BackingField )
    goto LABEL_24;
  Name_k__BackingField = (UILabel_o *)System_String__Replace_62618808(
                                        (System_String_o *)Name_k__BackingField,
                                        (System_String_o *)StringLiteral_89/*"\r\n"*/,
                                        (System_String_o *)StringLiteral_43/*"\n"*/,
                                        0LL);
  if ( !Name_k__BackingField )
    goto LABEL_24;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                               (System_String_o *)Name_k__BackingField,
                                                               0xAu,
                                                               0,
                                                               0LL);
  Name_k__BackingField = (UILabel_o *)System_Linq_Enumerable__ToList_object_(
                                        v24,
                                        (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_string___);
  if ( !Name_k__BackingField )
    goto LABEL_24;
  nameLabelUp = this->fields.nameLabelUp;
  v26 = (System_Collections_Generic_List_object__o *)Name_k__BackingField;
  Name_k__BackingField = (UILabel_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)Name_k__BackingField,
                                        0,
                                        (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !nameLabelUp )
    goto LABEL_24;
  UILabel__set_text(nameLabelUp, (System_String_o *)Name_k__BackingField, 0LL);
  Name_k__BackingField = this->fields.nameLabelUp;
  if ( !Name_k__BackingField )
    goto LABEL_24;
  Name_k__BackingField = (UILabel_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))Name_k__BackingField->klass->vtable._33_MakePixelPerfect.method)(
                                        Name_k__BackingField,
                                        Name_k__BackingField->klass->vtable._34_get_minWidth.methodPtr);
  v27 = this->fields.maxLabelWidth;
  if ( !v27 )
    goto LABEL_24;
  Name_k__BackingField = this->fields.nameLabelUp;
  if ( !Name_k__BackingField )
    goto LABEL_24;
  UILabel__SetCondensedScale(Name_k__BackingField, v27->fields.upLabelWidth, 0, 0LL);
  nameLabelBottom = this->fields.nameLabelBottom;
  Name_k__BackingField = (UILabel_o *)System_Collections_Generic_List_object___get_Item(
                                        v26,
                                        1,
                                        (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !nameLabelBottom )
    goto LABEL_24;
  UILabel__set_text(nameLabelBottom, (System_String_o *)Name_k__BackingField, 0LL);
  Name_k__BackingField = this->fields.nameLabelBottom;
  if ( !Name_k__BackingField )
    goto LABEL_24;
  Name_k__BackingField = (UILabel_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))Name_k__BackingField->klass->vtable._33_MakePixelPerfect.method)(
                                        Name_k__BackingField,
                                        Name_k__BackingField->klass->vtable._34_get_minWidth.methodPtr);
  v29 = this->fields.maxLabelWidth;
  if ( !v29 )
    goto LABEL_24;
  Name_k__BackingField = this->fields.nameLabelBottom;
  if ( !Name_k__BackingField )
    goto LABEL_24;
  middleLabelWidth = v29->fields.bottomLabelWidth;
LABEL_23:
  UILabel__SetCondensedScale(Name_k__BackingField, middleLabelWidth, 0, 0LL);
}


void __fastcall GrandQuestFolderBoardComponent__SetImage(
        GrandQuestFolderBoardComponent_o *this,
        UISprite_o *uiSprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *atlasManager; // x0

  atlasManager = this->fields.atlasManager;
  if ( !atlasManager
    || (atlasManager = (AtlasManagerUnit_o *)AtlasManagerUnit__SetUI(atlasManager, uiSprite, spriteName, 0LL), !uiSprite) )
  {
    sub_1BDBAD4(atlasManager, uiSprite);
  }
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))uiSprite->klass->vtable._33_MakePixelPerfect.method)(
    uiSprite,
    uiSprite->klass->vtable._34_get_minWidth.methodPtr);
}


GrandQuestFolderBoardItem_o *__fastcall GrandQuestFolderBoardComponent__get_BoardInfo(
        GrandQuestFolderBoardComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.boardInfo;
}


void __fastcall GrandQuestFolderBoardComponent_LabelMaxWidth___ctor(
        GrandQuestFolderBoardComponent_LabelMaxWidth_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardComponent_c *v3; // x0
  int32_t NameLabelMaxWidth; // w8

  if ( (byte_4B3F810 & 1) == 0 )
  {
    sub_1BDB878(&GrandQuestFolderBoardComponent_TypeInfo, method);
    byte_4B3F810 = 1;
  }
  v3 = GrandQuestFolderBoardComponent_TypeInfo;
  if ( !GrandQuestFolderBoardComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandQuestFolderBoardComponent_TypeInfo);
    v3 = GrandQuestFolderBoardComponent_TypeInfo;
  }
  NameLabelMaxWidth = v3->static_fields->NameLabelMaxWidth;
  this->fields.upLabelWidth = NameLabelMaxWidth;
  this->fields.middleLabelWidth = NameLabelMaxWidth;
  this->fields.bottomLabelWidth = NameLabelMaxWidth;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}