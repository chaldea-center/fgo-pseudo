void ExRoomBackground___ctor(ExRoomBackground_o *this, const MethodInfo *method)
{
  this->fields.BackgroundRect = (struct UnityEngine_Rect_o)xmmword_E93560;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ExRoomBackground__Awake(ExRoomBackground_o *this, const MethodInfo *method)
{
  ;
}


void ExRoomBackground__ClearBackground(ExRoomBackground_o *this, const MethodInfo *method)
{
  ExUITexture_o *backgroundTexture; // x0

  backgroundTexture = this->fields.backgroundTexture;
  if ( !backgroundTexture )
    sub_21FFECC(0, method);
  ExUITexture__ClearImage(backgroundTexture, 0);
}


// local variable allocation has failed, the output may be wrong!
void ExRoomBackground__SetBackground(
        ExRoomBackground_o *this,
        int32_t bgImageId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UITexture_o *backgroundTexture; // x0
  ExUITexture_o *v8; // x21
  Il2CppObject *v9; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5932CD8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3151/*"Back/back{0}"*/);
    byte_5932CD8 = 1;
  }
  backgroundTexture = (UITexture_o *)this->fields.backgroundTexture;
  if ( !backgroundTexture
    || (UITexture__set_uvRect(backgroundTexture, this->fields.BackgroundRect, 0),
        v8 = this->fields.backgroundTexture,
        v10 = bgImageId,
        v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v10),
        backgroundTexture = (UITexture_o *)System_String__Format((System_String_o *)StringLiteral_3151/*"Back/back{0}"*/, v9, 0),
        !v8) )
  {
    sub_21FFECC(backgroundTexture, *(_QWORD *)&bgImageId);
  }
  ExUITexture__SetAssetImage(v8, (System_String_o *)backgroundTexture, callback, 0);
}